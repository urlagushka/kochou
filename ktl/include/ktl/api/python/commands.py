from vk_types import VkFunction, VkFunctionField
from name_rules import *
from utils import is_vulkan_video
from typing import TextIO
import xml.etree.ElementTree as ET


def extract_command_field_impl(_root) -> VkFunctionField:
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

    is_const = "const" in raw_field
    is_pointer = "*" in raw_field

    return VkFunctionField(type_res, f"_{name_str}", is_const, is_pointer)


def extract_command_impl(_root) -> VkFunction | None:
    alias_name = make_cpp_name(_root.get("name"))
    raw_alias = _root.get("alias")
    pfn_alias = make_cpp_name(raw_alias)
    if alias_name and raw_alias:
        return VkFunction(f"pfn_{alias_name}", raw_alias, None, None, f"pfn_{pfn_alias}")

    proto = _root.find("proto")
    tppe = make_type(proto.find("type").text.strip())
    name = proto.find("name").text.strip()
    if is_vulkan_video(name):
        return None

    fields = []
    for field in _root.findall("param"):
        fields.append(extract_command_field_impl(field))
    fields = list(dict.fromkeys(fields))

    return VkFunction(f"pfn_{make_cpp_name(name)}", name, tppe, fields, None)


def fill_definition(_file: TextIO, _commands: list) -> None:
    _file.write("""
namespace ktl::api
{
""")
    for command in _commands:
        if command.alias:
            _file.write(f"using {command.pfn} = {command.alias};\n")
        else:
            _file.write(f"using {command.pfn} = {command.tppe}(*)(")
            fields_str = ""
            for field in command.fields:
                if field.is_const:
                    fields_str += "const "
                fields_str += f"{field.tppe} "
                if field.is_pointer:
                    fields_str += "* "
                fields_str += field.name
                fields_str += ", "
            fields_str = fields_str[:-2]
            _file.write(fields_str)
            _file.write(");\n")
    _file.write("}\n")


def fill_implementation(_file: TextIO, _commands: list):
    _file.write(f"""
namespace ktl::api
{{
static constexpr ktl::usize pfn_table_size = {len(_commands)};
using pfn_table = std::array< ktl::loader::proc_type, pfn_table_size >;
thread_local pfn_table * ptable = nullptr;           

""")
    for i in range(len(_commands)):
        command = _commands[i]
        if command.alias:
            # TODO
            continue

        _file.write(f"{command.tppe} {command.pfn[4:]}(")
        fields_str = ""
        for field in command.fields:
            if field.is_const:
                fields_str += "const "
            fields_str += f"{field.tppe} "
            if field.is_pointer:
                fields_str += "* "
            fields_str += field.name
            fields_str += ", "
        fields_str = fields_str[:-2]
        _file.write(fields_str)
        _file.write(")\n{\n")

        _file.write(f"""ktl::loader::proc_type ptr = &ptable[{i}];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{{
std::abort();
}}
return (({command.pfn})ptr)(""")
        fields_str = ""
        for field in command.fields:
            fields_str += field.name.split('[')[0]
            fields_str += ", "
        fields_str = fields_str[:-2]
        _file.write(fields_str)
        _file.write(");\n")
        _file.write("}\n\n")
    _file.write("}\n")


def extract(_root) -> list:
    commands = []

    root = _root.find("commands")
    for command in root.findall("command"):
        if command.get("api") == "vulkansc":
            continue
        if result := extract_command_impl(command):
            commands.append(result)

    return commands
