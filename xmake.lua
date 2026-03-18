local PROJECT_NAME = "example"

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

    set_default(true)
