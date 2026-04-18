from vk_types import VkConstant
from name_rules import *
from typing import TextIO


def fill_definition(_file: TextIO, _constants: list) -> None:
    for constant in _constants:
        _file.write(f"#define {constant.name} {constant.value}\n")


def fill_implementation() -> None:
    pass # nothing to do


def extract_constant_impl(_root) -> VkConstant | None:
    name  = make_constant(_root.get("name"))
    tppe  = make_type(_root.get("type"))
    value = _root.get("value")

    if name:
        return VkConstant(name, tppe, value)
    return None


def extract(_root) -> list:
    constants = []

    for src in _root.findall("enums[@type='constants']"):
        for constant in src.findall("enum"):
            if result := extract_constant_impl(constant):
                constants.append(result)

    constants.sort(key=lambda c: len(c.name), reverse=True)
    return sorted(constants, key=lambda c: c.tppe)
