from dataclasses import dataclass

@dataclass
class VkHandle:
    raw_name_str: str
    opaque_str:   str
    pointer_str:  str
    parent_str:   str
    object_str:   str


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
