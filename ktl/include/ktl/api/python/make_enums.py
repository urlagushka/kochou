from name_rules import make_field_name, make_underling_type, make_bitpos, make_cpp_name
from vk_types import VkEnum, VkEnumField
from utils import is_vulkan_video

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



<enums name="VkStencilFaceFlagBits" type="bitmask">
    <enum bitpos="0"    name="VK_STENCIL_FACE_FRONT_BIT"                         comment="Front face"/>
    <enum bitpos="1"    name="VK_STENCIL_FACE_BACK_BIT"                          comment="Back face"/>
    <enum value="0x00000003" name="VK_STENCIL_FACE_FRONT_AND_BACK"               comment="Front and back faces"/>
    <enum api="vulkan"  name="VK_STENCIL_FRONT_AND_BACK" alias="VK_STENCIL_FACE_FRONT_AND_BACK" deprecated="aliased"/>
</enums>
"""

def extract_enums_impl(enum) -> VkEnum | None:
    enum_name = make_cpp_name(enum.get("name"))
    if is_vulkan_video(enum_name):
        return None

    bitwidth = enum.get("bitwidth")
    is_positive = True
    underling_type = make_underling_type(bitwidth, is_positive)
    
    vk_fields = []
    for field in enum.findall("enum"):
        name  = make_field_name(field.get("name"), enum_name)
        value = field.get("value")
        bitpos = field.get("bitpos")
        alias = make_field_name(field.get("alias"), enum_name)
        deprecated  = field.get("deprecated")
        direction = field.get("dir")

        if value:
            if value.startswith("-"):
                is_positive = False
            vk_fields += [VkEnumField(name, value, False, deprecated)]
        if bitpos:
            vk_fields += [VkEnumField(name, make_bitpos(bitpos, underling_type), False, deprecated)]
        if alias:
            vk_fields += [VkEnumField(name, alias, True, deprecated)]
        if direction:
            is_positive = False

    underling_type = make_underling_type(bitwidth, is_positive)
    return VkEnum(enum_name, vk_fields, underling_type, None)


def extract_enums(root) -> list:
    enums = []
    for src in root.findall("enums"):
        src_type = src.get("type")
        if src_type == "enum" or src_type == "bitmask":
            result = extract_enums_impl(src)
            if result:
                enums += [result]
    return enums


def extract_aliased_enums(root) -> list:
    enums = []

    types = root.find("types")
    for src in types.findall("type[@category='enum']"):
        alias = make_cpp_name(src.get("alias"))
        if alias:
            enums += [VkEnum(make_cpp_name(src.get("name")), None, None, alias)]

    return enums
