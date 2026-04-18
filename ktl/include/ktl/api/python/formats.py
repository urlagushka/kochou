from vk_types import VkFormat, VkFormatComponent, VkFormatPlane
from name_rules import *
from typing import TextIO
from cpp_meta import FORMAT_META


def extract_format_impl(_root) -> VkFormat:
    format_name = f"ktl::api::format::{make_field_name(_root.get("name"), "format")}"
    block_size = _root.get("blockSize")
    texels_per_block = _root.get("texelsPerBlock")
    packed = _root.get("packed") or "0"
    chroma = _root.get("chroma") or "0"
    block_extent = _root.get("blockExtent")
    block_width = eval(f"[{block_extent}]")[0] if block_extent else "0"
    block_height = eval(f"[{block_extent}]")[1] if block_extent else "0"
    block_depth = eval(f"[{block_extent}]")[2] if block_extent else "0"
    is_3d = "true" if int(block_depth) > 1 else "false"
    is_compressed = None
    r = None
    g = None
    b = None
    a = None
    planes_amount = 0
    planes = [None, None, None]

    for component in _root.findall("component"):
        name = component.get("name")
        bits = component.get("bits")
        plane = component.get("planeIndex")
        is_compressed = "true" if bits == "compressed" else None
        if name == "R":
            r = VkFormatComponent("0" if is_compressed else bits, "true" if plane else "false", plane if plane else "0", "true")
        if name == "G":
            g = VkFormatComponent("0" if is_compressed else bits, "true" if plane else "false", plane if plane else "0", "true")
        if name == "B":
            b = VkFormatComponent("0" if is_compressed else bits, "true" if plane else "false", plane if plane else "0", "true")
        if name == "A":
            a = VkFormatComponent("0" if is_compressed else bits, "true" if plane else "false", plane if plane else "0", "true")
    if not r:
        r = VkFormatComponent("0", "false", "0", "false")
    if not g:
        g = VkFormatComponent("0", "false", "0", "false")
    if not b:
        b = VkFormatComponent("0", "false", "0", "false")
    if not a:
        a = VkFormatComponent("0", "false", "0", "false")

    for plane in _root.findall("plane"):
        index = plane.get("index")
        width_divisor = plane.get("widthDivisor")
        height_divisor = plane.get("heightDivisor")
        compatible = f"ktl::api::format::{make_field_name(plane.get("compatible"), "format")}"
        planes[int(index)] = VkFormatPlane(width_divisor, height_divisor, compatible)
    for i in range(len(planes)):
        if not planes[i]:
            planes[i] = VkFormatPlane("0", "0", "ktl::api::format::v_undefined")
            continue
        planes_amount = str(i + 1)

    return VkFormat(format_name,
                    block_size,
                    texels_per_block,
                    packed,
                    chroma,
                    block_width,
                    block_height,
                    block_depth,
                    is_3d,
                    is_compressed if is_compressed else "false",
                    r, g, b, a,
                    planes_amount,
                    planes)


def fill_definition():
    pass # nothing to do


def fill_implementation(_file: TextIO, _formats: list):
    _file.write(f"""namespace ktl::api
{{
{FORMAT_META}
""")
    for format in _formats:
        _file.write(f"""
template <>
struct format_meta< {format.name} >
{{
    using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
    using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

    static constexpr ktl::u32 block_size = {format.block_size};
    static constexpr ktl::u32 texels_per_block = {format.texels_per_block};
    static constexpr ktl::u32 packed = {format.packed};
    static constexpr ktl::u32 chroma = {format.chroma};
    static constexpr ktl::u32 block_width = {format.block_width};
    static constexpr ktl::u32 block_height = {format.block_height};
    static constexpr ktl::u32 block_depth = {format.block_depth};
    static constexpr bool is_3d = {format.is_3d};
    static constexpr bool is_compressed = {format.is_compressed};
    static constexpr component r = {{
        {format.r.bits},
        {format.r.has_plane},
        {format.r.plane_index},
        {format.r.is_present}
    }};
    static constexpr component g = {{
        {format.g.bits},
        {format.g.has_plane},
        {format.g.plane_index},
        {format.g.is_present}
    }};
    static constexpr component b = {{
        {format.b.bits},
        {format.b.has_plane},
        {format.b.plane_index},
        {format.b.is_present}
    }};
    static constexpr component a = {{
        {format.a.bits},
        {format.a.has_plane},
        {format.a.plane_index},
        {format.a.is_present}
    }};
    static constexpr ktl::u32 planes_amount = {format.planes_amount};
    static constexpr std::array< plane, 3 > planes = {{
        plane{{
            {format.planes[0].width_divisor},
            {format.planes[0].height_divisor},
            {format.planes[0].compatible}
        }},
        plane{{
            {format.planes[1].width_divisor},
            {format.planes[1].height_divisor},
            {format.planes[1].compatible}
        }},
        plane{{
            {format.planes[2].width_divisor},
            {format.planes[2].height_divisor},
            {format.planes[2].compatible}
        }}
    }};
}};
"""
        )
    _file.write("}\n")


def extract(_root) -> list:
    formats = []
    for src in _root.findall("formats"):
        for format in src.findall("format"):
            formats.append(extract_format_impl(format))

    return formats
