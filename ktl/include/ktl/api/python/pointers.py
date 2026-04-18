from vk_types import VkFunction, VkFunctionField
from name_rules import *
from utils import is_vulkan_video
from typing import TextIO
import xml.etree.ElementTree as ET


def extract_command_field_impl(_root) -> VkFunctionField:
    type_str = _root.find("type").text.strip()
    type_res = ""
    if make_type(type_str):
        type_str = make_type(type_str)
        type_res = type_str
    else:
        type_str = make_cpp_name(type_str)
        type_res = f"ktl::api::{make_cpp_name(type_str)}"
    name_str = make_cpp_name(_root.find("name").text.strip())

    raw_field = ET.tostring(_root, encoding='unicode')
    static_size = _root.find("enum")
    for elem in _root.iter():
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


def extract_pointer_impl(_root) -> VkFunction | None:
    proto = _root.find("proto")
    tppe = make_type(proto.find("type").text.strip())
    name = proto.find("name").text.strip()
    if is_vulkan_video(name):
        return None

    fields = []
    for field in _root.findall("param"):
        fields.append(extract_command_field_impl(field))
    fields = list(dict.fromkeys(fields))

    return VkFunction(f"pfn_{make_cpp_name(name)}", name, tppe, fields, None)


def fill_definition(_file: TextIO, _pointers: list) -> None:
    _file.write("""
namespace ktl::api
{
""")
    for pointer in _pointers:
        if pointer.alias:
            _file.write(f"using {pointer.pfn} = {pointer.alias};\n")
        else:
            _file.write(f"using {pointer.pfn} = {pointer.tppe}(*)(")
            fields_str = ""
            for field in pointer.fields:
                if field.is_const:
                    fields_str += "const "
                fields_str += f"{field.tppe} "
                if field.is_pointer:
                    fields_str += "* "
                fields_str += field.name
                fields_str += ", "
            fields_str = fields_str[:-2]
            _file.write(fields_str)
            _file.write(");\n")
    _file.write("}\n")


def fill_implementation():
    pass # nothing to do


def extract(_root) -> list:
    pointers = []

    types = _root.find("types")
    for pointer in types.findall("type[@category='funcpointer']"):
        if result := extract_pointer_impl(pointer):
            pointers.append(result)

    return pointers
