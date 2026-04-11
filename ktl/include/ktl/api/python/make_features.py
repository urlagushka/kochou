from vk_types import VkEnumField
from name_rules import make_cpp_name, make_type, make_field_name, make_bitpos
import xml.etree.ElementTree as ET
from utils import is_vulkan_video


def make_value_from_extension(extension_number: str, offset: str) -> str:
    return str(1_000_000 + (int(extension_number) - 1) * 1000 + int(offset))


def extract_features(root, enums) -> list:
    features = []

    for feature in root.findall(".//feature"):
        name_str = feature.get("name")
        if is_vulkan_video(name_str):
            continue

        for require in feature.findall("require"):
            # enums
            for enum in require.findall("enum"):
                extend = enum.get("extends")
                if extend is not None:
                    target = next((e for e in enums if e.name == make_cpp_name(extend)), None)
                    if not target:
                        continue
                    offset = enum.get("offset")
                    number = enum.get("extnumber")
                    value = enum.get("value")
                    bitpos = enum.get("bitpos")
                    alias = make_field_name(enum.get("alias"), target.name)
                    deprecated = bool(enum.get("deprecated"))
                    if offset:
                        field_name = make_field_name(enum.get("name"), target.name)
                        field_value = make_value_from_extension(number, offset)
                        target.fields += [VkEnumField(field_name, field_value, False, deprecated)]
                    if value:
                        field_name = make_field_name(enum.get("name"), target.name)
                        target.fields += [VkEnumField(field_name, value, False, deprecated)]
                    if bitpos:
                        field_name = make_field_name(enum.get("name"), target.name)
                        bitvalue = make_bitpos(bitpos, target.underling_type)
                        target.fields += [VkEnumField(field_name, bitvalue, False, deprecated)]
                    if alias:
                        field_name = make_field_name(enum.get("name"), target.name)
                        target.fields += [VkEnumField(field_name, alias, True, deprecated)]

    return features


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
