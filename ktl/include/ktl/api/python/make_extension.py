from vk_types import VkBitMask
from name_rules import make_cpp_name, make_type
import xml.etree.ElementTree as ET
from dataclasses import replace


def make_structure_type_from_extension():
    return base + (extension_number - 1) * 1000 + offset


def extract_extension_impl(bitmask) -> VkBitMask:
    name_str = make_cpp_name(bitmask.find("name").text.strip())
    type_str = make_type(bitmask.find("type").text.strip())
    return VkBitMask(name_str, type_str)


def extract_extension(root) -> list:
    extensions = []

    types = root.find("types")
    for src in types.findall("type[@category='bitmask']"):
        alias = make_cpp_name(src.get("alias"))
        if alias:
            found = next((h for h in extensions if h.name_str == alias), None)
            bitmask = replace(found, name_str=make_cpp_name(src.get("name")))
            extensions += [bitmask]
        else:
            extensions += [extract_extension_impl(src)]

    return extensions


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
