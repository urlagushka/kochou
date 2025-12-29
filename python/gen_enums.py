import xml.etree.ElementTree as ET
import sys
from vk_types import VkEnum, VkEnumField
from name_rules import make_field_name, make_underling_type, make_bitpos, make_cpp_name
from vk_xml import VULKAN_XML

"""
template< typename ENUM, typename TARGET >
requiers std::is_enum_v< ENUM >
struct enum_cast
{};

template< typename ENUM >
requiers std::is_enum_v< ENUM >
struct enum_cast< std::string >
{
    consteval auto operator()(ENUM _enum)
    {
        constexpr ktl::flat_map< ENUM > enum_map = {};
        if constexpr (enum_map.contains(_enum))
        {
            return enum_map.at(_enum);
        }
        return "invalid_value";
    }
};

template< typename ENUM >
requiers std::is_enum_v< ENUM >
struct enum_cast< std::underling_type< ENUM > >
{
    consteval auto operator()(ENUM _enum)
    {
        return static_cast< std::underling_type< ENUM > >(_enum);
    }
};
"""

def extract_enum(enum: ET.Element) -> VkEnum:
    name = make_cpp_name(enum.get("name"))
    if name is None:
        return None
    underling_type = make_underling_type(enum.get("bitwidth"))

    vk_fields = {}
    for field in enum.findall("enum"):
        field_name  = make_field_name(field.get("name"), name)
        field_alias = make_field_name(field.get("alias"), name)
        field_value = field.get("value")
        deprecated  = field.get("deprecated")

        vk_field = VkEnumField(field_name, field_value)
        if field_alias is not None:
            vk_field.value = vk_fields[field_alias].value
        if vk_field.value is None:
            vk_field.value = make_bitpos(field.get("bitpos"), underling_type)
        if deprecated is not None:
            vk_field.is_deprecated = True
        vk_fields[field_name] = vk_field
    return VkEnum(name, list(vk_fields.values()), underling_type)


def extract_enums(root) -> list:
    enums = []
    for src in root.findall("enums"):
        src_type = src.get("type")
        if src_type == "enum" or src_type == "bitmask":
            enums += [extract_enum(src)]
        else:
            print(f"[ERROR] non-valid src_type: {src_type}")
    return enums


def main():
    if not VULKAN_XML.exists():
        print(f"[ERROR] {VULKAN_XML} not found!", file=sys.stderr)
        sys.exit(1)
    root = ET.parse(VULKAN_XML).getroot()

    # generate enums.hpp
    with open("enums.hpp", "w", encoding="utf-8") as f:
        enums = extract_enums(root)
        for enum in enums:
            f.write(f"enum class {enum.name}\n")
            f.write(f"    : {enum.underling_type}\n")
            f.write(f"{{\n")
            offset_before = 0
            max_len = 0
            for field in enum.fields:
                if field.is_deprecated:
                    offset_before = len("[[deprecated]] ")
                max_len = max(max_len, len(field.name))

            for field in enum.fields:
                if field.is_deprecated:
                    f.write(f"    [[deprecated]] {field.name}{' ' * (max_len - len(field.name))} = {field.value}")
                else:
                    f.write(f"    {' ' * offset_before}{field.name}{' ' * (max_len - len(field.name))} = {field.value}")
                if field != enum.fields[-1]:
                    f.write(",")
                f.write("\n")
            f.write(f"}};\n\n")

    # generate structs.hpp
    # generate funcs.hpp

if __name__ == "__main__":
    main()
