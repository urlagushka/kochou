from vk_types import VkEnum, VkEnumField
from name_rules import *
from utils import is_vulkan_video
from typing import TextIO
from cpp_meta import ENUM_META


def extract_field_impl(_root, _name, _underling_type: str) -> tuple:
    name       = make_field_name(_root.get("name"), _name)
    alias      = make_field_name(_root.get("alias"), _name)
    value      = _root.get("value")
    bitpos     = _root.get("bitpos")
    deprecated = True if _root.get("deprecated") else False
    direction  = False if _root.get("dir") else True

    if value:
        if value.startswith("-"):
            direction = False
        return VkEnumField(name, value, False, deprecated), direction
    if bitpos:
        return VkEnumField(name, make_bitpos(bitpos, _underling_type), False, deprecated), direction
    if alias:
        return VkEnumField(name, alias, True, deprecated), direction


def extract_enum_impl(_root) -> VkEnum | None:
    name = make_cpp_name(_root.get("name"))
    if is_vulkan_video(name):
        return None

    bitwidth       = _root.get("bitwidth")
    direction      = True
    underling_type = make_underling_type(bitwidth, direction)

    fields = []
    for src in _root.findall("enum"):
        field, new_direction = extract_field_impl(src, name, underling_type)
        direction = new_direction if direction else direction
        fields.append(field)

    underling_type = make_underling_type(bitwidth, direction)
    return VkEnum(name, fields, underling_type, None)


def fill_definition(_file: TextIO, _enums: list) -> None:
    _file.write("""namespace ktl::api
{
""")
    for enum in _enums:
        if enum.alias:
            _file.write(f"using {enum.name} = {enum.alias};\n")
        else:
            _file.write(f"enum class {enum.name} : {enum.underling_type};\n")
    _file.write("}\n")


def fill_implementation(_file: TextIO, _enums: list) -> None:
    _file.write(f"""namespace ktl::api
{{
{ENUM_META}
""")
    for enum in _enums:
        if enum.alias:
            continue
        else:
            _file.write(f"enum class {enum.name} : {enum.underling_type}\n{{\n")
            valid_fields = list(dict.fromkeys(sorted(enum.fields, key=lambda f: f.is_alias)))
            for field in valid_fields:
                if field.is_deprecated:
                    _file.write(f"{field.name} [[deprecated]] = {field.value}")
                else:
                    _file.write(f"{field.name} = {field.value}")
                if field != valid_fields[-1]:
                    _file.write(",")
                _file.write("\n")
            _file.write("};\n")
    _file.write("}\n")


def extract(root) -> list:
    enums = []

    for src in root.findall("enums"):
        if src.get("type") in ("enum", "bitmask"):
            if result := extract_enum_impl(src):
                enums.append(result)

    return enums


def extract_aliased(root) -> list:
    enums = []

    types = root.find("types")
    for src in types.findall("type[@category='enum']"):
        if alias := make_cpp_name(src.get("alias")):
            enums.append(VkEnum(make_cpp_name(src.get("name")), None, None, alias))

    return enums
