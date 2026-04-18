from vk_types import VkHandle
from name_rules import *
from utils import is_vulkan_video
from typing import TextIO
from cpp_meta import HANDLE_META


def opaque_name_rule(src: str) -> str | None:
    if src is None:
        return None
    return f"opaque_{src}"


def pointer_name_rule(src: str) -> str | None:
    if src is None:
        return None
    return f"{src}"


def extract_handle_name_impl(_root) -> str | None:
    name = _root.find("name")
    if name is not None and name.text:
        return make_cpp_name(name.text.strip())
    return None


def extract_parent_impl(_root) -> str:
    parent = _root.get("parent")
    if parent:
        return opaque_name_rule(make_cpp_name(parent))
    return "void"


def extract_object_impl(_root) -> str | None:
    object = _root.get("objtypeenum")
    if object:
        return make_field_name(object, "object_type")
    return None


def extract_handle_impl(_root, _name) -> VkHandle:
    opaque  = opaque_name_rule(_name)
    pointer = pointer_name_rule(_name)
    parent  = extract_parent_impl(_root)
    object  = extract_object_impl(_root)
    return VkHandle(_name, opaque, pointer, parent, object, None)


def fill_definition(_file: TextIO, _handles: list) -> None:
    _file.write("""namespace ktl::api
{
""")
    for handle in _handles:
        if handle.alias:
            _file.write(f"using {handle.name} = {handle.alias};\n\n")
        else:
            _file.write(f"""struct {handle.opaque};
using {handle.pointer} = {handle.opaque} *;
""")
    _file.write("}\n")


def fill_implementation(_file: TextIO, _handles: list) -> None:
    _file.write(f"""namespace ktl::api
{{
{HANDLE_META}
""")
    for handle in _handles:
        if handle.alias:
            continue
        else:
            _file.write(f"""
template <>
struct handle_meta< {handle.pointer} >
{{
    using parent = {handle.parent};
    using type   = {handle.opaque};
    enum : std::underlying_type_t< ktl::api::object_type >
    {{
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::{handle.object})
    }};
}};
""")
    _file.write("}\n")


def extract(_root) -> list:
    handles = []

    types = _root.find("types")
    for src in types.findall("type[@category='handle']"):
        alias = make_cpp_name(src.get("alias"))
        if alias:
            name = make_cpp_name(src.get("name"))
            if not is_vulkan_video(name):
                handles.append(VkHandle(name, None, None, None, None, alias))
        else:
            name = extract_handle_name_impl(src)
            if not is_vulkan_video(name):
                handles.append(extract_handle_impl(src, name))

    return handles
