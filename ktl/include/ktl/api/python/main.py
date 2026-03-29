from headers import make_constants_header, make_enums_header, make_handles_header, make_structs_header
from make_constants import extract_constants
from make_enums import extract_enums
from make_types import extract_handles
from make_structs import extract_structs
from vk_xml import VULKAN_XML, ROOT
from sys import exit, stderr


if not VULKAN_XML.exists():
    print(f"[ERROR] {VULKAN_XML} not found!", file=stderr)
    exit(1)

constants = extract_constants(ROOT)
enums = extract_enums(ROOT)
handles = extract_handles(ROOT)
structs = extract_structs(ROOT)
# functions = extract_functions(ROOT, structs)
make_constants_header("constants.hpp", constants)
make_enums_header("enums.hpp", enums)
make_handles_header("handles.hpp", handles)
make_structs_header("structs.hpp", structs)
