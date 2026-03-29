local KOCHOU_BUILD = {
    debug   = "KOCHOU_BUILD_DEBUG",
    release = "KOCHOU_BUILD_RELEASE"
}

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

function make_defines(target)
    -- build
    local build = is_mode("debug") and KOCHOU_VULKAN_DYLIB_PATH.debug or KOCHOU_VULKAN_DYLIB_PATH.release
    if not build then
        raise("Specify kochou build mode, current: '%s'", build)
    end
    target:add("defines", KOCHOU_BUILD[build], {public = true})

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
        raise(
            "Invalid window backend: '%s'. Available: %s",
            window_backend,
            table.concat(table.values(KOCHOU_WINDOW_BACKEND), ", ")
        )
    end
    target:add("defines", window_backend, {public = true})

    -- vulkan dylib
    local vulkan_dylib = is_mode("debug") and KOCHOU_VULKAN_DYLIB_PATH.debug or KOCHOU_VULKAN_DYLIB_PATH.release
    if not vulkan_dylib then
        raise("Specify vulkan dynamic library path, current: '%s'", vulkan_dylib)
    end
    target:add("defines", 'KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME="' .. vulkan_dylib .. '"', {public = true})

    -- platform
    local platform = os.host()
    if platform == "macosx" then
        target:add("defines", "KOCHOU_PLATFORM_MACOS", {public = true})
    elseif platform == "linux" then
        target:add("defines", "KOCHOU_PLATFORM_LINUX", {public = true})
    elseif platform == "windows" then
        target:add("defines", "KOCHOU_PLATFORM_WIN32", {public = true})
    else
        raise("Unsupported platform: '%s'", platform)
    end
end

set_xmakever("3.0.0")
set_project("kochou")
set_languages("c++23")

add_rules("mode.debug", "mode.release")
includes("../ktl")

target("kochou")
    set_kind("static")

    add_files(
        "src/api/metal.mm",
        "src/core/context.cpp",
        "src/core/vulkan_chain.cpp",
        "src/core/instance.cpp"
    )

    add_includedirs("include", {public = true})
    add_deps("ktl", {public = true})

    if is_plat("macosx") then
        add_frameworks("Cocoa", "Metal", "QuartzCore", "Foundation")
    end

    on_load(make_defines)
