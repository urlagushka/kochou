from vk_types import VkFunction, VkFunctionField
from name_rules import *
from utils import is_vulkan_video
import xml.etree.ElementTree as ET


def extract_function_field_impl(field) -> VkFunctionField:
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

    is_const = "const" in raw_field
    is_pointer = "*" in raw_field

    return VkFunctionField(type_res, name_str, is_const, is_pointer)


def extract_struct_impl(struct) -> VkFunction | None:
    name = make_cpp_name(struct.get("name"))
    if is_vulkan_video(name):
        return None

    fields = []
    for field in struct.findall("member"):
        fields += [extract_function_field_impl(field)]

    return VkFunction(name, fields)

def extract_pointers(root) -> list:
    return []

def extract_commands(root) -> list:
    functions = []

    commands = root.find("commands")
    for command in commands.findall("command"):
        alias_name = command.get("name")
        alias = command.get("alias")
        if alias_name and alias:
            functions += [VkFunction(alias_name, alias_name, None, None, alias)]
            continue
        proto = command.find("proto")
        tppe = proto.find("type")
        name = proto.find("name")
        print(tppe.text, name.text)

    return functions

def extract_functions(root) -> list:
    return extract_pointers(root) + extract_commands(root)
