import constants
import basetypes
import enums
import handles
import structs
import formats
import bitmasks
import pointers
import commands
import features


def make_header_guard(_filename: str) -> str | None:
    if not _filename:
        return None
    return f"KTL_API_{_filename.replace('.', '_').upper()}"


def fill_common(_filename: str,
                _constants: list,
                _enums: list,
                _handles: list,
                _structs: list,
                _bitmasks: list,
                _pointers: list,
                _commands: list) -> None:
    header_guard = make_header_guard(_filename)
    if not header_guard:
        print("headers.fill_common header_guard is None")
        return

    with open(_filename, "w", encoding="utf-8") as file:
        file.write(f"""#ifndef {header_guard}
#define {header_guard}

#include <ktl/type.hpp>

#include "dummy_headers/X11/Xlib.h"
#include "dummy_headers/X11/extensions/Xrandr.h"
#include "dummy_headers/directfb.h"
#include "dummy_headers/ggp_c/vulkan_types.h"
#include "dummy_headers/nvscibuf.h"
#include "dummy_headers/nvscisync.h"
#include "dummy_headers/screen/screen.h"
#include "dummy_headers/ubm.h"
#include "dummy_headers/ubm_common.h"
#include "dummy_headers/wayland-client.h"
#include "dummy_headers/windows.h"
#include "dummy_headers/xcb/xcb.h"
#include "dummy_headers/zircon/types.h"

""")

        constants.fill_definition(file, _constants)
        basetypes.fill_definition(file)
        enums.fill_definition(file, _enums)
        handles.fill_definition(file, _handles)
        structs.fill_definition(file, _structs)
        bitmasks.fill_definition(file, _bitmasks)
        pointers.fill_definition(file, _pointers)
        commands.fill_definition(file, _commands)

        file.write("\n#endif\n")


def fill_enums(_api_include: str,
               _common_include: str,
               _filename: str,
               _enums: list) -> None:
    header_guard = make_header_guard(_filename)
    if not header_guard:
        print("headers.fill_enums header_guard is None")
        return
    api_guard = make_header_guard(_api_include)
    if not api_guard:
        print("headers.fill_enums api_guard is None")
        return

    with open(_filename, "w", encoding="utf-8") as file:
        file.write(f"""#ifndef {header_guard}
#define {header_guard}

#ifndef {api_guard}
#include "{_common_include}"
#endif

""")
        enums.fill_implementation(file, _enums)
        file.write("\n#endif\n")


def fill_handles(_api_include: str,
                 _common_include: str,
                 _enums_include: str,
                 _filename: str,
                 _handles: list) -> None:
    header_guard = make_header_guard(_filename)
    if not header_guard:
        print("headers.fill_handles header_guard is None")
        return
    api_guard = make_header_guard(_api_include)
    if not api_guard:
        print("headers.fill_handles api_guard is None")
        return
    
    with open(_filename, "w", encoding="utf-8") as file:
        file.write(f"""#ifndef {header_guard}
#define {header_guard}

#include <type_traits>

#ifndef {api_guard}
#include "{_common_include}"
#include "{_enums_include}"
#endif

""")
        handles.fill_implementation(file, _handles)
        file.write("\n#endif\n")


def fill_structs(_api_include: str,
                 _common_include: str,
                 _enums_include: str,
                 _filename: str,
                 _structs: list) -> None:
    header_guard = make_header_guard(_filename)
    if not header_guard:
        print("headers.fill_structs header_guard is None")
        return
    api_guard = make_header_guard(_api_include)
    if not api_guard:
        print("headers.fill_structs api_guard is None")
        return
    
    with open(_filename, "w", encoding="utf-8") as file:
        file.write(f"""#ifndef {header_guard}
#define {header_guard}

#ifndef {api_guard}
#include "{_common_include}"
#include "{_enums_include}"
#endif

""")
        structs.fill_implementation(file, _structs)
        file.write("\n#endif\n")


def fill_formats(_api_include: str,
                 _common_include: str,
                 _enums_include: str,
                 _filename: str,
                 _formats: list) -> None:
    header_guard = make_header_guard(_filename)
    if not header_guard:
        print("headers.fill_formats header_guard is None")
        return
    api_guard = make_header_guard(_api_include)
    if not api_guard:
        print("headers.fill_formats api_guard is None")
        return
    
    with open(_filename, "w", encoding="utf-8") as file:
        file.write(f"""#ifndef {header_guard}
#define {header_guard}

#include <array>

#ifndef {api_guard}
#include "{_common_include}"
#include "{_enums_include}"
#endif

""")
        formats.fill_implementation(file, _formats)
        file.write("\n#endif\n")


def fill_commands(_api_include: str,
                  _common_include: str,
                  _filename: str,
                  _commands: list) -> None:
    header_guard = make_header_guard(_filename)
    if not header_guard:
        print("headers.fill_commands header_guard is None")
        return
    api_guard = make_header_guard(_api_include)
    if not api_guard:
        print("headers.fill_commands api_guard is None")
        return
    
    with open(_filename, "w", encoding="utf-8") as file:
        file.write(f"""#ifndef {header_guard}
#define {header_guard}

#include <array>

#include <ktl/loader.hpp>

#ifndef {api_guard}
#include "{_common_include}"
#endif

""")
        commands.fill_implementation(file, _commands)
        file.write("\n#endif\n")


def fill_features(_api_include: str,
                  _common_include: str,
                  _filename: str,
                  _features: list) -> None:
    header_guard = make_header_guard(_filename)
    if not header_guard:
        print("headers.fill_features header_guard is None")
        return
    api_guard = make_header_guard(_api_include)
    if not api_guard:
        print("headers.fill_features api_guard is None")
        return
    
    with open(_filename, "w", encoding="utf-8") as file:
        file.write(f"""#ifndef {header_guard}
#define {header_guard}

#include <array>

#ifndef {api_guard}
#include "{_common_include}"
#endif

""")
        features.fill_implementation(file, _features)
        file.write("\n#endif\n")


def fill_extensions(common_include: str, filename: str, extensions: list) -> None:
    header_guard = make_header_guard(filename)
    if not header_guard:
        print("headers.fill_extensions header_guard is None")
        return


def fill_api(_filename,
             _common_include,
             _enums_include,
             _handles_include,
             _structs_include,
             _formats_include,
             _commands_include,
             _features_include,
             _extensions_include) -> None:
    header_guard = make_header_guard(_filename)
    if not header_guard:
        print("headers.fill_extensions header_guard is None")
        return

    with open(_filename, "w", encoding="utf-8") as file:
        file.write(f"""#ifndef {header_guard}
#define {header_guard}

// clang-format off
#include "{_common_include}"
#include "{_enums_include}"
#include "{_handles_include}"
#include "{_structs_include}"
#include "{_formats_include}"
#include "{_commands_include}"
#include "{_features_include}"
#include "{_extensions_include}"
// clang-format on

#endif
""")
