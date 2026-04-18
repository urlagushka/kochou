import xml.etree.ElementTree as ET
from pathlib import Path
import urllib.request
import headers
import constants
import enums
import handles
import structs
import bitmasks
import formats
import pointers
import commands
import features
import extensions


COMMON_HEADER_FILE     = "common.hpp"
ENUMS_HEADER_FILE      = "enums.hpp"
HANDLES_HEADER_FILE    = "handles.hpp"
STRUCTS_HEADER_FILE    = "structs.hpp"
FORMATS_HEADER_FILE    = "formats.hpp"
COMMANDS_HEADER_FILE   = "commands.hpp"
FEATURES_HEADER_FILE   = "features.hpp"
EXTENSIONS_HEADER_FILE = "extensions.hpp"
API_HEADER_FILE        = "api.hpp"

def main(_root):
    CONSTANTS         = constants.extract(_root)
    ENUMS             = enums.extract(_root) + enums.extract_aliased(_root)
    HANDLES           = handles.extract(_root)
    STRUCTS, FEATURES = structs.extract(_root)
    BITMASKS          = bitmasks.extract(_root)
    FORMATS           = formats.extract(_root)
    POINTERS          = pointers.extract(_root) 
    COMMANDS          = commands.extract(_root)
    _          = features.extract(_root, ENUMS, COMMANDS)
    EXTENSIONS        = extensions.extract(_root, ENUMS)

    headers.fill_common(COMMON_HEADER_FILE,
                        CONSTANTS,
                        ENUMS,
                        HANDLES,
                        STRUCTS,
                        BITMASKS,
                        POINTERS,
                        COMMANDS)
    headers.fill_enums(API_HEADER_FILE,
                       COMMON_HEADER_FILE,
                       ENUMS_HEADER_FILE,
                       ENUMS)
    headers.fill_handles(API_HEADER_FILE,
                         COMMON_HEADER_FILE,
                         ENUMS_HEADER_FILE,
                         HANDLES_HEADER_FILE,
                         HANDLES)
    headers.fill_structs(API_HEADER_FILE,
                         COMMON_HEADER_FILE,
                         ENUMS_HEADER_FILE,
                         STRUCTS_HEADER_FILE,
                         STRUCTS)
    headers.fill_formats(API_HEADER_FILE,
                         COMMON_HEADER_FILE,
                         ENUMS_HEADER_FILE,
                         FORMATS_HEADER_FILE,
                         FORMATS)
    headers.fill_commands(API_HEADER_FILE,
                          COMMON_HEADER_FILE,
                          COMMANDS_HEADER_FILE,
                          COMMANDS)
    headers.fill_features(API_HEADER_FILE,
                          COMMON_HEADER_FILE,
                          FEATURES_HEADER_FILE,
                          FEATURES)
    headers.fill_extensions(API_HEADER_FILE,
                            COMMON_HEADER_FILE,
                            EXTENSIONS_HEADER_FILE,
                            EXTENSIONS)
    headers.fill_api(API_HEADER_FILE,
                     COMMON_HEADER_FILE,
                     ENUMS_HEADER_FILE,
                     HANDLES_HEADER_FILE,
                     STRUCTS_HEADER_FILE,
                     FORMATS_HEADER_FILE,
                     COMMANDS_HEADER_FILE,
                     FEATURES_HEADER_FILE,
                     EXTENSIONS_HEADER_FILE)


if __name__ == "__main__":
    url = "https://raw.githubusercontent.com/KhronosGroup/Vulkan-Docs/main/xml/vk.xml"
    urllib.request.urlretrieve(url, "vk.xml")
    xml  = Path("vk.xml")
    root = ET.parse(xml).getroot()
    main(root)
