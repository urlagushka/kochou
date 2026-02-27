#include <iostream>
#include <ranges>

#include <ktl/api.hpp>
#include <ktl/flat_map.hpp>
#include <ktl/flat_set.hpp>

#include <kochou/core/context.hpp>
#include <kochou/user/default_render.hpp>

constexpr void
add()
{
    // kochou::core::context::get()->apply_version(1);
}

int
main()
{
    kochou::user::metadata_render render;
    kochou::core::init();
}
