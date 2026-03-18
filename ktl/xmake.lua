set_xmakever("3.0.0")
set_project("ktl")
set_languages("c++23")

target("ktl")
    set_kind("phony")

    add_includedirs("include", {public = true})
    add_cxxflags("-Wall", "-Wextra", {force = false})
