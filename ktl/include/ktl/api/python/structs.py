from vk_types import VkStruct, VkStructField, VkFeature, VkFeatureDependency
from name_rules import *
from utils import is_vulkan_video
from typing import TextIO
import xml.etree.ElementTree as ET
from utils import sort_by_dependencies

import re

_VENDORS = (
    "khr", "khx", "ext",
    "amd", "amdx",
    "nv", "nvx",
    "intel", "img", "arm", "qcom", "viv", "vsi",
    "android", "fuchsia", "ggp", "google", "chromium",
    "tizen", "qnx", "ohos",
    "fsl", "nxp", "brcm", "mesa", "lunarg", "nzxt",
    "samsung", "sec", "renderdoc", "nn", "mvk",
    "huawei", "valve", "juice", "fb", "rastergrid",
    "msft", "shady", "fredemmott", "mtk", "openxr",
    "kdab"
)
_BIT_WIDTHS = {"8", "16", "32", "64"}


def make_feature_enum_name(field_snake: str, source_snake: str) -> str:
    if source_snake == "physical_device_features" or re.search(r"vulkan\d+features$", source_snake):
        return field_snake

    result = field_snake
    vendor = next((f"_{v}" for v in _VENDORS if source_snake.endswith(f"_{v}")), "")
    base_for_nums = source_snake[:-len(vendor)] if vendor else source_snake
    src_nums = re.findall(r'\d+', base_for_nums)
    field_nums = set(re.findall(r'\d+', result))
    extra_nums = [n for n in src_nums if n not in field_nums and n not in _BIT_WIDTHS]
    
    if extra_nums: result += f"_{extra_nums[0]}"
    if vendor and not result.endswith(vendor): result += vendor
    return result


def extract_struct_field_impl(_root) -> VkStructField:
    type_str = _root.find("type").text.strip()
    type_res = ""
    if make_type(type_str):
        type_str = make_type(type_str)
        type_res = type_str
    else:
        type_str = make_cpp_name(type_str)
        type_res = f"ktl::api::{make_cpp_name(type_str)}"
    name_str = make_cpp_name(_root.find("name").text.strip())
    
    raw_field = ET.tostring(_root, encoding='unicode')
    static_size = _root.find("enum")
    for elem in _root.iter():
        if elem.tag.endswith('}enum') or elem.tag == 'enum':
            static_size = elem.text.strip()
    if "[" in raw_field and "]" in raw_field:
        exit_cond = False
        size = make_constant(static_size)
        start = raw_field.find('[')
        comment_start = raw_field.find("comment")
        if size is None:
            end = raw_field.find(']')
            size = raw_field[start + 1:end]
            if not size.isdigit():
                exit_cond = True

        if start > comment_start and comment_start != -1 or exit_cond:
            pass
        else:
            name_str = f"{name_str}[{size}]"

    is_optional = _root.get("optional") == "true"
    is_const = "const" in raw_field
    is_pointer = "*" in raw_field
    default_value = _root.get("values")
    if default_value:
        default_value = f"ktl::api::{type_str}::{make_field_name(default_value, type_str)}"
    if is_optional:
        default_value = "{}"

    return VkStructField(type_res, name_str, is_optional, is_const, is_pointer, default_value)


def extract_struct_impl(_root, _unique) -> tuple:
    name = make_cpp_name(_root.get("name"))
    if is_vulkan_video(name):
        return None, None

    features = []
    fields = []
    for field in _root.findall("member"):
        if not field.get("api") == "vulkansc":
            result = extract_struct_field_impl(field)
            fields.append(result)
            if result.tppe == "ktl::api::bool32" and "features" in name:
                feature = make_feature_enum_name(result.name, name)
                if feature not in _unique:
                    _unique.add(feature)
                    features.append(VkFeatureDependency(name, feature))

    return VkStruct(name, fields, False, None), features


def fill_definition(_file: TextIO, _structs: list) -> None:
    _file.write("""namespace ktl::api
{
""")
    for struct in _structs:
        if struct.is_union:
            _file.write(f"union {struct.name};\n")
        else:
            if struct.alias:
                _file.write(f"using {struct.name} = {struct.alias};\n")
            else:
                _file.write(f"struct {struct.name};\n")
    _file.write("}\n")


def fill_implementation(_file: TextIO, _structs: list) -> None:
    _file.write("""namespace ktl::api
{
""")
    for struct in _structs:
        if struct.is_union:
            _file.write(f"union {struct.name}\n{{\n")
            for field in struct.fields:
                act = ""
                act += f"{field.tppe} "
                if field.is_pointer:
                    act += "* "
                act += field.name
                _file.write(f"{act};\n")
            _file.write("};\n")
        else:
            if struct.alias:
                continue

            _file.write(f"struct {struct.name}\n{{\n")
            for field in struct.fields:
                act = ""
                if field.is_const:
                    act += "const "
                act += f"{field.tppe} "
                if field.is_pointer:
                    act += "* "
                act += field.name

                if field.default_value:
                    act += f" = {field.default_value}"
                _file.write(f"{act};\n")
            _file.write("};\n")
    _file.write("}\n")


def extract(_root) -> tuple:
    structs = []
    features = []
    unique = set()

    types = _root.find("types")
    for src in types.findall("type"):
        if src.get("category") == "struct":
            if alias := make_cpp_name(src.get("alias")):
                name = make_cpp_name(src.get("name"))
                if not is_vulkan_video(name):
                    structs.append(VkStruct(name, [], False, alias))
            else:
                result, ff = extract_struct_impl(src, unique)
                if result:
                    structs.append(result)
                    features += ff
        elif src.get("category") == "union":
            result, _ = extract_struct_impl(src, unique)
            if result:
                result.is_union = True
                structs.append(result)
    return sort_by_dependencies(structs), features
