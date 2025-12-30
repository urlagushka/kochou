from name_rules import make_field_name, make_underling_type, make_bitpos, make_cpp_name
from vk_types import VkEnum, VkEnumField


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

def extract_enums_impl(enum) -> VkEnum:
    name = make_cpp_name(enum.get("name"))
    if name is None:
        return None
    underling_type = make_underling_type(enum.get("bitwidth"))
    is_bitmask = enum.get("type") == "bitmask"
    print(is_bitmask)

    vk_fields = {}
    for field in enum.findall("enum"):
        field_name  = make_field_name(field.get("name"), name)
        field_alias = make_field_name(field.get("alias"), name)
        field_value = field.get("value")
        deprecated  = field.get("deprecated")

        vk_field = VkEnumField(field_name, field_value)
        if field_alias is not None:
            vk_field.value = vk_fields[field_alias].value
        if vk_field.value is not None and not is_bitmask and vk_field.value.startswith("-"):
            underling_type = "std::int32_t"
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
            enums += [extract_enums_impl(src)]
    return enums
