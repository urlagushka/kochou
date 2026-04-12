from vk_types import VkBitMask
from name_rules import *
from dataclasses import replace


def extract_bitmask_impl(bitmask) -> VkBitMask:
    name_str = make_cpp_name(bitmask.find("name").text.strip())
    type_str = make_type(bitmask.find("type").text.strip())
    return VkBitMask(name_str, type_str)


def extract_bitmasks(root) -> list:
    bitmasks = []

    types = root.find("types")
    for src in types.findall("type[@category='bitmask']"):
        alias = make_cpp_name(src.get("alias"))
        if alias:
            found = next((h for h in bitmasks if h.name_str == alias), None)
            bitmask = replace(found, name_str=make_cpp_name(src.get("name")))
            bitmasks += [bitmask]
        else:
            bitmasks += [extract_bitmask_impl(src)]

    return bitmasks
