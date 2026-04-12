from dataclasses import dataclass


@dataclass
class VkFormatComponent:
    bits: str
    has_plane: str
    plane_index: str
    is_present: str


@dataclass
class VkFormatPlane:
    width_divisor: str
    height_divisor: str
    compatible: str


@dataclass
class VkFormat:
    name: str
    block_size: str
    texels_per_block: str
    packed: str
    chroma: str
    block_width: str
    block_height: str
    block_depth: str
    is_3d: str
    is_compressed: str

    r: VkFormatComponent
    g: VkFormatComponent
    b: VkFormatComponent
    a: VkFormatComponent
    planes_amount: str
    planes: list


@dataclass
class VkUnionField:
    type_str: str
    name_str: str


@dataclass
class VkUnion:
    name_str: str
    fields: list


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
    is_alias: bool
    is_deprecated: bool

    def __hash__(self) -> int:
        return hash(self.name)

    def __eq__(self, other) -> bool:
        if not isinstance(other, VkEnumField):
            return True
        return self.name == other.name


@dataclass
class VkEnum:
    name: str
    fields: dict
    underling_type: str
    alias : str | None
