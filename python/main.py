from headers import make_constants_header, make_enums_header
from make_constants import extract_constants
from make_enums import extract_enums
from vk_xml import VULKAN_XML, ROOT
from sys import exit, stderr


if not VULKAN_XML.exists():
    print(f"[ERROR] {VULKAN_XML} not found!", file=stderr)
    exit(1)

constants = extract_constants(ROOT)
enums = extract_enums(ROOT)
# structs = extract_structs(ROOT, constants, enums)
# functions = extract_functions(ROOT, structs)
make_constants_header("constants.hpp", constants)
make_enums_header("enums.hpp", enums)
