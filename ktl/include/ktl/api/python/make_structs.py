from vk_types import VkStruct, VkStructField
from name_rules import make_cpp_name, make_field_name, make_type, make_constant
import xml.etree.ElementTree as ET

def opaque_name_rule(src: str) -> str | None:
    if src is None:
        return None
    return f"opaque_{src}"


def pointer_name_rule(src: str) -> str | None:
    if src is None:
        return None
    return f"ptr_{src}"


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


def extract_struct_field_impl(field) -> VkStructField:
    type_str = field.find("type").text.strip()
    type_res = ""
    if make_type(type_str):
        type_str = make_type(type_str)
        type_res = type_str
    else:
        type_str = make_cpp_name(type_str)
        type_res = f"ktl::api::{make_cpp_name(type_str)}"
    name_str = make_cpp_name(field.find("name").text.strip())
    
    raw_field = ET.tostring(field, encoding='unicode')
    static_size = field.find("enum")
    for elem in field.iter():
        if elem.tag.endswith('}enum') or elem.tag == 'enum':
            static_size = elem.text.strip()
    if "[" in raw_field and "]" in raw_field:
        name_str = f"{name_str}[{make_constant(static_size)}]"

    is_optional = field.get("optional") == "true"
    is_const = "const" in raw_field
    is_pointer = "*" in raw_field
    default_value = field.get("values")
    if default_value:
        default_value = f"ktl::api::{type_str}::{make_field_name(default_value, type_str)}"
    if is_optional:
        default_value = "nullptr" if is_pointer else "0"

    return VkStructField(type_res, name_str, is_optional, is_const, is_pointer, default_value)


def extract_struct_impl(struct) -> VkStruct:
    name_str = make_cpp_name(struct.get("name"))

    fields = []
    for field in struct.findall("member"):
        ff = extract_struct_field_impl(field)
        fields += [ff]
        tt = ""
        if ff.is_const:
            tt += "const "
        tt += ff.type_str
        if ff.is_pointer:
            tt += " * "
        else:
            tt += " "
        tt += ff.name_str
        if ff.is_optional:
            tt += " = nullptr;" if ff.is_pointer else " = 0;"

    return VkStruct(name_str, fields)


def extract_structs(root) -> list:
    structs = []

    types = root.find("types")
    for src in types.findall("type[@category='struct']"):
        structs += [extract_struct_impl(src)]

    return structs
