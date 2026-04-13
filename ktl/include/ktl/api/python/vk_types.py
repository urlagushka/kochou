from dataclasses import dataclass


@dataclass
class VkFunctionField:
    tppe: str
    name: str


@dataclass
class VkFunction:
    pnf: str
    name: str
    tppe: str
    fields: list
    alias: str | None


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
    tppe: str
    name: str


@dataclass
class VkUnion:
    name: str
    fields: list


@dataclass
class VkEntension:
    name: str
    spec_version: str
    promoted_to: str
    features: list
    extension: list
    functions: list


@dataclass
class VkBitMask:
    name: str
    tppe: str


@dataclass
class VkHandle:
    name: str
    opaque:   str
    pointer:  str
    parent:   str
    object:   str
    alias: str | None


@dataclass
class VkStructField:
    tppe: str
    name: str
    is_optional: bool
    is_const: bool
    is_pointer: bool
    default_value: str


@dataclass
class VkStruct:
    name: str
    fields: list
    alias: str | None


@dataclass
class VkConstant:
    name: str
    tppe: str
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
