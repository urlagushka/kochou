-- defines

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

-- functions

function make_window_backend(target)
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
        -- raise(
        --     "Invalid window backend: '%s'. Available: %s",
        --     window_backend,
        --     table.concat(table.values(KOCHOU_WINDOW_BACKEND), ", ")
        -- )
    end
    target:add("defines", window_backend)
end

function make_vulkan_dylib(target)
    local vulkan_dylib = is_mode("debug") and KOCHOU_VULKAN_DYLIB_PATH.debug or KOCHOU_VULKAN_DYLIB_PATH.release
    if not vulkan_dylib then
        raise("Specify vulkan dynamic library path, current: '%s'", vulkan_dylib)
    end
    target:add("defines", "KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME=" .. vulkan_dylib)
end

function make_platform(target)
    local platform = os.host()
    if platform == "macosx" then
        target:add("defines", "KOCHOU_PLATFORM_MACOS")
    elseif platform == "linux" then
        target:add("defines", "KOCHOU_PLATFORM_LINUX")
    elseif platform == "windows" then
        target:add("defines", "KOCHOU_PLATFORM_WIN32")
    else
        raise("Unsupported platform: '%s'", platform)
    end
end

-- xmake

set_xmakever("3.0.0")
set_project(PROJECT_NAME)
set_languages("c++23")
set_warnings("all")

add_rules("mode.debug", "mode.release")
if is_plat("windows") then
    add_cxxflags("-EHs-c-", "-GR-", {force = true})
else
    add_cxxflags("-fno-exceptions", "-fno-rtti", {force = true})
end

add_requires("glm")
includes("kochou")

-- target

target(PROJECT_NAME)
    set_kind("binary")
    add_files("main.cpp")
    add_deps("kochou")
    add_packages("glm")

    on_load(make_window_backend)
    on_load(make_vulkan_dylib)
    on_load(make_platform)

    set_default(true)
