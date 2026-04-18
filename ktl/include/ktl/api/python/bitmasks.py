from vk_types import VkBitMask
from name_rules import *
from typing import TextIO
from dataclasses import replace


def extract_bitmask_impl(_root) -> VkBitMask:
    name = make_cpp_name(_root.find("name").text.strip())
    tppe = make_type(_root.find("type").text.strip())
    return VkBitMask(name, tppe)


def fill_definition(_file: TextIO, _bitmasks: list) -> None:
    _file.write("""
namespace ktl::api
{
""")
    for bitmask in _bitmasks:
        _file.write(f"using {bitmask.name} = {bitmask.tppe};\n")
    _file.write("}\n")


def fill_implementation():
    pass # nothing to do


def extract(_root) -> list:
    bitmasks = []

    types = _root.find("types")
    for src in types.findall("type[@category='bitmask']"):
        if alias := make_cpp_name(src.get("alias")):
            found = next((h for h in bitmasks if h.name == alias), None)
            bitmask = replace(found, name=make_cpp_name(src.get("name")))
            bitmasks.append(bitmask)
        else:
            bitmasks.append(extract_bitmask_impl(src))

    return bitmasks
