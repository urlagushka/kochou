from vk_types import VkEnumField, VkEntension
from name_rules import *
from utils import is_vulkan_video, make_vulkan_value
from typing import TextIO
from cpp_meta import EXTENSION_META


def fill_definition():
    pass # nothing to do


def fill_implementation(_file: TextIO, _extensions: list) -> None:
    _file.write(f"""namespace ktl::api
{{
enum class extension : ktl::u32;

{EXTENSION_META}

""")
    _file.write("enum class extension : ktl::u32\n{\n")
    enum_str = ""
    for extension in _extensions:
        enum_str += f"{extension.name},\n"
    enum_str = enum_str[:-2]
    _file.write(enum_str)
    _file.write("\n};\n")

    for extension in _extensions:
        _file.write(f"""
template <>
struct extension_meta< ktl::api::extension::{extension.name} >
{{
    static constexpr ktl::api::version                    version    = {extension.version};
    static constexpr std::array< ktl::api::extension, 0 > extensions = {extension.extensions};
    static constexpr std::array< ktl::u32, 0 >            commands   = {extension.commands};
    static constexpr bool                                 is_promoted = {"true" if extension.promoted else "false"};
    static constexpr ktl::api::version                    promoted    = {extension.promoted if extension.promoted else "{}"};
}};
""")

    _file.write("}\n")


def extract(root, enums) -> list:
    extensions = []

    for extension in root.findall(".//extension"):
        name = extension.get("name")
        if is_vulkan_video(name):
            continue

        number = extension.get("number")
        tppe = extension.get("type")

        for require in extension.findall("require"):
            # enums
            for enum in require.findall("enum"):
                extend = enum.get("extends")
                if extend:
                    target = next((e for e in enums if e.name == make_cpp_name(extend)), None)
                    if not target:
                        continue
                    offset = enum.get("offset")
                    value = enum.get("value")
                    direction = enum.get("dir")
                    bitpos = enum.get("bitpos")
                    alias = make_field_name(enum.get("alias"), target.name)
                    deprecated = bool(enum.get("deprecated"))
                    if offset:
                        field_name = make_field_name(enum.get("name"), target.name)
                        field_value = make_vulkan_value(number, offset)
                        target.fields.append(VkEnumField(field_name, field_value, False, deprecated))
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

        promoted = extension.get("promotedto") or None
        extensions.append(VkEntension(make_cpp_name(name),
                                      name,
                                      "NULL",
                                      promoted,
                                      [],
                                      []))

    return extensions
