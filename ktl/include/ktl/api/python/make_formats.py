from vk_types import VkFormat, VkFormatComponent, VkFormatPlane
from name_rules import *


def extract_format_impl(format) -> VkFormat:
    format_name = f"ktl::api::format::{make_field_name(format.get("name"), "format")}"
    block_size = format.get("blockSize")
    texels_per_block = format.get("texelsPerBlock")
    packed = format.get("packed") or "0"
    chroma = format.get("chroma") or "0"
    block_extent = format.get("blockExtent")
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

    for component in format.findall("component"):
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

    for plane in format.findall("plane"):
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

def extract_formats(root) -> list:
    formats = []
    for src in root.findall("formats"):
        for format in src.findall("format"):
            formats += [extract_format_impl(format)]

    return formats
