from vk_types import VkEnumField
from name_rules import *
from utils import is_vulkan_video, make_vulkan_value
from typing import TextIO
from cpp_meta import FEATURE_META


def process_enums(_root, _enums) -> str:
    extension = None

    for enum in _root.findall("enum"):
        extend = enum.get("extends")
        if extend is not None:
            target = next((e for e in _enums if e.name == make_cpp_name(extend)), None)
            if not target:
                continue
            offset = enum.get("offset")
            number = enum.get("extnumber")
            value = enum.get("value")
            direction = enum.get("dir")
            bitpos = enum.get("bitpos")
            alias = make_field_name(enum.get("alias"), target.name)
            deprecated = bool(enum.get("deprecated"))
            if offset:
                field_name = make_field_name(enum.get("name"), target.name)
                field_value = make_vulkan_value(number, offset)
                target.fields.append(VkEnumField(field_name, field_value, False, deprecated))
                if target.name == "structure_type":
                    extension = f"ktl::api::structure_type::{field_name}"
            if value:
                if direction:
                    value =f"-{value}"
                field_name = make_field_name(enum.get("name"), target.name)
                target.fields.append(VkEnumField(field_name, value, False, deprecated))
            if bitpos:
                field_name = make_field_name(enum.get("name"), target.name)
                bitvalue = make_bitpos(bitpos, target.underling_type)
                target.fields.append(VkEnumField(field_name, bitvalue, False, deprecated))
            if alias:
                field_name = make_field_name(enum.get("name"), target.name)
                target.fields.append(VkEnumField(field_name, alias, True, deprecated))
    return extension


def process_commands(_root, _commands) -> list:
    for command in _root.findall("command"):
        pass


def fill_definition():
    pass # nothing to do


def fill_implementation(_file: TextIO, _features_dependencies: list) -> None:
    _file.write(f"""namespace ktl::api
{{
enum class feature : ktl::u32;

{FEATURE_META}
""")
    _file.write("enum class feature : ktl::u32\n{\n")
    enum_str = ""
    for feature in _features_dependencies:
        enum_str += f"{feature.offset},\n"
    enum_str = enum_str[:-2]
    _file.write(enum_str)
    _file.write("\n};\n")

    _file.write("}\n")


def extract(_root, _enums, _commands) -> list:
    features = []

    for feature in _root.findall("feature"):
        name = make_cpp_name(feature.get("name"))
        if is_vulkan_video(name):
            continue

        extensions = []
        for require in feature.findall("require"):
            if extension := process_enums(require, _enums):
                extensions.append(extension)
            #commands = process_commands(require, _commands)

        print(name)
    return features
