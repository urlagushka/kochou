from vk_types import VkHandle
from name_rules import make_cpp_name, make_field_name
from dataclasses import replace

def opaque_name_rule(src: str) -> str | None:
    if src is None:
        return None
    return f"opaque_{src}"

def pointer_name_rule(src: str) -> str | None:
    if src is None:
        return None
    return f"{src}"

def extract_handle_name_impl(handle) -> str | None:
    name = handle.find("name")
    if name is not None and name.text:
        return make_cpp_name(name.text.strip())
    return None

def extract_parent_impl(handle) -> str:
    parent = handle.get("parent")
    if parent:
        return opaque_name_rule(make_cpp_name(parent))
    return "void"

def extract_object_impl(handle) -> str | None:
    object = handle.get("objtypeenum")
    if object:
        return make_field_name(object, "object_type")
    return None

def extract_handle_impl(handle, raw_name) -> VkHandle:
    opaque_str  = opaque_name_rule(raw_name)
    pointer_str = pointer_name_rule(raw_name)
    parent_str  = extract_parent_impl(handle)
    object_str  = extract_object_impl(handle)
    return VkHandle(raw_name, opaque_str, pointer_str, parent_str, object_str, None)

def extract_handles(root) -> list:
    handles = []

    types = root.find("types")
    for src in types.findall("type[@category='handle']"):
        alias = make_cpp_name(src.get("alias"))
        if alias:
            raw_name = make_cpp_name(src.get("name"))
            print(raw_name)
            handles += [VkHandle(raw_name, None, None, None, None, alias)]
        else:
            raw_name = extract_handle_name_impl(src)
            handle = extract_handle_impl(src, raw_name)
            handles += [handle]

    return handles
