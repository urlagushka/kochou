from vk_types import VkUnion, VkUnionField
from name_rules import *
from utils import is_vulkan_video
from typing import TextIO
import xml.etree.ElementTree as ET


def extract_union_field_impl(_root) -> VkUnionField:
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

    if "*" in raw_field:
        type_res += "*"

    return VkUnionField(type_res, name_str)


def extract_union_impl(_root) -> VkUnion | None:
    name = make_cpp_name(_root.get("name"))
    if is_vulkan_video(name):
        return None

    fields = []
    for field in _root.findall("member"):
        fields.append(extract_union_field_impl(field))

    return VkUnion(name, fields)


def fill_definition(_file: TextIO, _unions: list) -> None:
    _file.write("""
namespace ktl::api
{
""")
    for union in _unions:
        _file.write(f"union {union.name};\n")
    _file.write("}\n")


def fill_implementation(_file: TextIO, _unions: list) -> None:
    _file.write("""
namespace ktl::api
{
""")
    for union in _unions:
        _file.write(f"union {union.name}\n{{\n")
        for field in union.fields:
            _file.write(f"{field.tppe} {field.name};\n")
        _file.write("};\n")
    _file.write("}\n")


def extract(_root) -> list:
    unions = []

    types = _root.find("types")
    for union in types.findall("type[@category='union']"):
        if result := extract_union_impl(union):
            unions.append(result)

    return unions
