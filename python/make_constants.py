from name_rules import make_constant, make_type
from vk_types import VkConstant


def extract_constants_impl(constants) -> list:
    vk_constants = []
    for constant in constants.findall("enum"):
        constant_name = make_constant(constant.get("name"))
        constant_type = make_type(constant.get("type"))
        constant_value = constant.get("value")

        if constant_name is not None:
            vk_constants += [VkConstant(constant_name, constant_type, constant_value)]
    return vk_constants


def extract_constants(root) -> list:
    constants = []
    for src in root.findall("enums"):
        src_type = src.get("type")
        if src_type == "constants":
            constants += [*extract_constants_impl(src)]
    constants.sort(key=lambda c: len(c.name), reverse=True)
    return sorted(constants, key=lambda c: c.type)
