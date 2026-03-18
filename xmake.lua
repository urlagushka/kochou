local PROJECT_NAME = "example"

local KOCHOU_VULKAN_DYLIB_PATH = {
    debug   = "/usr/local/lib/libMoltenVK.dylib",
    release = "libMoltenVK.dylib"
}

local KOCHOU_WINDOW_BACKEND = {
    METAL   = "KOCHOU_WINDOW_BACKEND_METAL",
    WAYLAND = "KOCHOU_WINDOW_BACKEND_WAYLAND",
    WIN32   = "KOCHOU_WINDOW_BACKEND_WIN32",
    XCB     = "KOCHOU_WINDOW_BACKEND_XCB",
    XLIB    = "KOCHOU_WINDOW_BACKEND_XLIB"
}

local KOCHOU_WINDOW_BACKEND_DEFAULT = {
    macosx  = KOCHOU_WINDOW_BACKEND.METAL,
    windows = KOCHOU_WINDOW_BACKEND.WIN32,
    linux   = KOCHOU_WINDOW_BACKEND.XLIB
}

set_xmakever("3.0.0")
set_project(PROJECT_NAME)
set_languages("c++23")
set_warnings("all")

add_rules("mode.debug", "mode.release")
if is_plat("windows") then
    add_cxxflags("-EHsc-", "-GR-", {force = true})
else
    add_cxxflags("-fno-exceptions", "-fno-rtti", {force = true})
end

add_requires("glm")

includes("kochou")

target(PROJECT_NAME)
    set_kind("binary")
    add_files("main.cpp")
    add_deps("kochou")
    add_packages("glm")

    -- window backend
    local window_backend = get_config("window_backend")
    if not window_backend then
        window_backend = KOCHOU_WINDOW_BACKEND_DEFAULT[os.host()]
    end

    local is_backend_valid = false;
    for _, backend in pairs(KOCHOU_WINDOW_BACKEND) do
        if backend == window_backend then
            is_backend_valid = true
            break
        end
    end
    if not is_backend_valid then
        print(
            "Invalid window backend: '%s'. Available: %s",
            window_backend,
            table.concat(table.values(KOCHOU_WINDOW_BACKEND), ", ")
        )
    end
    add_defines(window_backend)

    -- vulkan dylib
    local vulkan_dylib = is_mode("debug") and KOCHOU_VULKAN_DYLIB_PATH.debug or KOCHOU_VULKAN_DYLIB_PATH.release
    add_defines("KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME=\"" .. vulkan_dylib .. "\"")

    -- platform
    local platform = os.host()
    if platform == "macosx" then
        add_defines("KOCHOU_PLATFORM_MACOS")
    elseif platform == "linux" then
        add_defines("KOCHOU_PLATFORM_LINUX")
    elseif platform == "windows" then
        add_defines("KOCHOU_PLATFORM_WIN32")
    else
        print(
            "Unsupported platform: '%s'. Available: %s",
            platform,
            table.concat({"macosx", "linux", "windows"}, ", ")
        )
        -- need exit // on_load
    end

