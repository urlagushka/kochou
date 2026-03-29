from vk_types import VkStruct, VkStructField
from name_rules import make_cpp_name, make_field_name, make_type, make_constant
import xml.etree.ElementTree as ET

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
        exit_cond = False
        size = make_constant(static_size)
        start = raw_field.find('[')
        comment_start = raw_field.find("comment")
        if size is None:
            end = raw_field.find(']')
            size = raw_field[start + 1:end]
            if not size.isdigit():
                exit_cond = True

        if start > comment_start and comment_start != -1 or exit_cond:
            pass
        else:
            name_str = f"{name_str}[{size}]"

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
        fields += [extract_struct_field_impl(field)]

    return VkStruct(name_str, fields, None)


def extract_structs(root) -> list:
    structs = []

    types = root.find("types")
    for src in types.findall("type[@category='struct']"):
        alias = make_cpp_name(src.get("alias"))
        if alias:
            name_str = make_cpp_name(src.get("name"))
            structs += [VkStruct(name_str, [], alias)]
        else:
            structs += [extract_struct_impl(src)]

    return structs
