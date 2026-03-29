from dataclasses import dataclass


"""
struct extension final
{
    ktl::api::extension_name                  name;
    ktl::api::vulkan_version                  spec_version;
    ktl::api::vulkan_version                  promoted_to;
    ktl::flat_set< ktl::api::feature >        features;
    ktl::flat_set< ktl::api::extension_name > deps;
};
"""


@dataclass
class VkEntension:
    name_str: str
    spec_version_str: str
    promoted_to_str: str
    features_list: list
    extension_deps: list


@dataclass
class VkBitMask:
    name_str: str
    type_str: str


@dataclass
class VkHandle:
    raw_name_str: str
    opaque_str:   str
    pointer_str:  str
    parent_str:   str
    object_str:   str
    alias: str | None


@dataclass
class VkStructField:
    type_str: str
    name_str: str
    is_optional: bool
    is_const: bool
    is_pointer: bool
    default_value: str


@dataclass
class VkStruct:
    name_str: str
    fields: list
    alias: str | None


@dataclass
class VkConstant:
    name: str
    type: str
    value: str


@dataclass
class VkEnumField:
    name: str
    value: str
    is_deprecated: bool

    def __init__(self, name: str, value: str) -> None:
        self.name = name
        self.value = value
        self.alias = ""
        self.is_deprecated = False


@dataclass
class VkEnum:
    name: str
    fields: dict
    underling_type: str

    def __init__(self, name: str, fields: dict, underling_type: str) -> None:
        self.name = name
        self.fields = fields
        self.underling_type = underling_type
