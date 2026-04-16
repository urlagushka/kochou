from vk_types import VkFunction, VkFunctionField
from name_rules import *
from utils import is_vulkan_video
import xml.etree.ElementTree as ET


def extract_command_field_impl(field) -> VkFunctionField:
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

    return VkFunctionField(type_res, f"_{name_str}", is_const, is_pointer)


def extract_command_impl(command) -> VkFunction | None:
    alias_name = make_cpp_name(command.get("name"))
    raw_alias = command.get("alias")
    pfn_alias = make_cpp_name(raw_alias)
    if alias_name and raw_alias:
        return VkFunction(f"pfn_{alias_name}", raw_alias, None, None, f"pfn_{pfn_alias}")

    proto = command.find("proto")
    tppe = make_type(proto.find("type").text.strip())
    name = proto.find("name").text.strip()
    if is_vulkan_video(name):
        return None

    fields = []
    for field in command.findall("param"):
        fields += [extract_command_field_impl(field)]
    fields = list(dict.fromkeys(fields))
    return VkFunction(f"pfn_{make_cpp_name(name)}", name, tppe, fields, None)


def extract_pointer_impl(command) -> VkFunction | None:
    proto = command.find("proto")
    tppe = make_type(proto.find("type").text.strip())
    name = proto.find("name").text.strip()
    if is_vulkan_video(name):
        return None

    fields = []
    for field in command.findall("param"):
        fields += [extract_command_field_impl(field)]
    fields = list(dict.fromkeys(fields))
    return VkFunction(f"pfn_{make_cpp_name(name)}", name, tppe, fields, None)

def extract_pointers(root) -> list:
    functions = []

    types = root.find("types")
    for pointer in types.findall("type[@category='funcpointer']"):
        tmp = extract_pointer_impl(pointer)
        if tmp:
            functions += [tmp]
    
    return functions


def extract_commands(root) -> list:
    functions = []

    commands = root.find("commands")
    for command in commands.findall("command"):
        tmp = extract_command_impl(command)
        if tmp:
            functions += [tmp]

    return functions
