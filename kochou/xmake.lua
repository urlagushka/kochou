set_xmakever("2.8.0")
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
