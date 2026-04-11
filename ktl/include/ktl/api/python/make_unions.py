from vk_types import VkUnion, VkUnionField
from name_rules import make_cpp_name, make_type, make_field_name, make_constant
from utils import is_vulkan_video
import xml.etree.ElementTree as ET
from dataclasses import replace


def extract_union_field_impl(field) -> VkUnionField:
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

    if "*" in raw_field:
        type_res += "*"

    return VkUnionField(type_res, name_str)


def extract_union_impl(struct) -> VkUnion | None:
    name = make_cpp_name(struct.get("name"))
    if is_vulkan_video(name):
        return None

    fields = []
    for field in struct.findall("member"):
        fields += [extract_union_field_impl(field)]

    return VkUnion(name, fields)


def extract_unions(root) -> list:
    unions = []

    types = root.find("types")
    for union in types.findall("type[@category='union']"):
        result = extract_union_impl(union)
        if result:
            unions += [result]

    return unions


"""
struct extension final
{
    ktl::api::extension_name                  name;
    ktl::api::vulkan_version                  spec_version;
    ktl::api::vulkan_version                  promoted_to;
    ktl::flat_set< ktl::api::feature >        features;
    ktl::flat_set< ktl::api::extension_name > deps;
};
"""
