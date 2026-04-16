import header
from make_constants import extract_constants
from make_enums import extract_enums, extract_aliased_enums
from make_handles import extract_handles
from make_structs import extract_structs
from make_bitmask import extract_bitmasks
from make_extensions import extract_extensions
from make_features import extract_features
from make_unions import extract_unions
from make_formats import extract_formats
from make_functions import extract_commands, extract_pointers
import sys
import xml.etree.ElementTree as ET
from pathlib import Path
import urllib.request


url = "https://raw.githubusercontent.com/KhronosGroup/Vulkan-Docs/main/xml/vk.xml"
urllib.request.urlretrieve(url, "vk.xml")


VULKAN_XML = Path("vk.xml")
VULKAN_ROOT = ET.parse(VULKAN_XML).getroot()
HEADER_FILENAME = "api.hpp"


def main(argc: int, argv: list):
    constants     = extract_constants(VULKAN_ROOT)
    enums         = extract_enums(VULKAN_ROOT)
    aliased_enums = extract_aliased_enums(VULKAN_ROOT)
    handles       = extract_handles(VULKAN_ROOT)
    structs       = extract_structs(VULKAN_ROOT)
    bitmasks      = extract_bitmasks(VULKAN_ROOT)
    unions        = extract_unions(VULKAN_ROOT)
    features      = extract_features(VULKAN_ROOT, enums)
    extensions    = extract_extensions(VULKAN_ROOT, enums)
    formats       = extract_formats(VULKAN_ROOT)
    commands      = extract_commands(VULKAN_ROOT)
    pointers      = extract_pointers(VULKAN_ROOT)   

    with open(HEADER_FILENAME, "w", encoding="utf-8") as file:
        file.write(
            "#ifndef KTL_API_HPP\n"
            "#define KTL_API_HPP\n"
            "\n"
            "#include <ktl/type.hpp>\n"
            "#include <ktl/api/type.hpp>\n"
            "#include <ktl/api/loader.hpp>\n"
            "\n"

            "#ifndef KTL_USE_PLATFORM_WIN32\n"
            "using HINSTANCE           = int;\n"
            "using HWND                = int;\n"
            "using HMONITOR            = int;\n"
            "using HANDLE              = int;\n"
            "using SECURITY_ATTRIBUTES = int;\n"
            "using DWORD               = int;\n"
            "using LPCWSTR             = int;\n"
            "#else\n"
            "#include <windows.h>\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_XLIB\n"
            "using Display  = int;\n"
            "using VisualID = int;\n"
            "using Window   = int;\n"
            "using RROutput = int;\n"
            "#else\n"
            "#include <X11/Xlib.h>\n"
            "#include <X11/extensions/Xrandr.h>\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_XCB\n"
            "using xcb_connection_t = int;\n"
            "using xcb_visualid_t   = int;\n"
            "using xcb_window_t     = int;\n"
            "#else\n"
            "#include <xcb/xcb.h>\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_WAYLAND\n"
            "using wl_display = int;\n"
            "using wl_surface = int;\n"
            "#else\n"
            "#include <wayland-client.h>\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_DIRECTFB\n"
            "using IDirectFB        = int;\n"
            "using IDirectFBSurface = int;\n"
            "#else\n"
            "#include <directfb.h>\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_GGP\n"
            "using GgpStreamDescriptor = int;\n"
            "using GgpFrameToken       = int;\n"
            "#else\n"
            "#error unsupported // TODO\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_SCREEN_QNX\n"
            "using _screen_context = int;\n"
            "using _screen_window  = int;\n"
            "using _screen_buffer  = int;\n"
            "#else\n"
            "#include <screen/screen.h>\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_NVSCISYNC\n"
            "using NvSciSyncAttrList = int;\n"
            "using NvSciSyncObj      = int;\n"
            "using NvSciSyncFence    = int;\n"
            "using NvSciBufAttrList  = int;\n"
            "using NvSciBufObj       = int;\n"
            "#else\n"
            "#include <nvscibuf.h>\n"
            "#include <nvscisync.h>\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_ZIRCON\n"
            "using zx_handle_t = int;\n"
            "#else\n"
            "#include <zircon/types.h>\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_UBM\n"
            "using ubm_device  = int;\n"
            "using ubm_surface = int;\n"
            "#else\n"
            "#include <ubm.h>\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_HUAWEI\n"
            "using OHNativeWindow  = int;\n"
            "using OHBufferHandle  = int;\n"
            "using OH_NativeBuffer = int;\n"
            "#else\n"
            "#error unsupported // TODO\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_METAL\n"
            "using CAMetalLayer       = int;\n"
            "using MTLDevice_id       = int;\n"
            "using MTLCommandQueue_id = int;\n"
            "using MTLBuffer_id       = int;\n"
            "using MTLTexture_id      = int;\n"
            "using MTLSharedEvent_id  = int;\n"
            "using IOSurfaceRef       = int;\n"
            "#else\n"
            "#error unsupported // TODO\n"
            "#endif\n"
            "#ifndef KTL_USE_PLATFORM_ANDROID\n"
            "using ANativeWindow   = int;\n"
            "using AHardwareBuffer = int;\n"
            "#else\n"
            "#error unsupported // TODO\n"
            "#endif\n\n"
        )

        header.fill_constants(file, constants, "\n")
        file.write(
            "namespace ktl::api\n"
            "{\n"
            f"constexpr ktl::u32 pfn_table_size = {len(commands)};\n"
            "using pfn_table = std::array< void *, pfn_table_size >;\n"
            "thread_local pfn_table * ptable = nullptr;\n\n"
            "using remote_address_nv = void *;\n"
        )
        header.fill_bitmasks(file, bitmasks, "\n")
        header.fill_enums(file, enums)
        header.fill_aliased_enums(file, aliased_enums)
        header.fill_handles(file, handles)
        header.fill_unions(file, unions)
        header.fill_pointers(file, pointers, "\n")
        header.fill_structs(file, structs)
        header.fill_formats(file, formats)
        header.fill_commands(file, commands)
        file.write("}\n" "\n" "#endif\n")


if __name__ == "__main__":
    argc = len(sys.argv)
    argv = sys.argv
    main(argc, argv)
