#include <iostream>
#include <ranges>

#include <ktl/flat_map.hpp>
#include <ktl/flat_set.hpp>

#include <kochou/core/context.hpp>

constexpr void
add()
{
    kochou::core::context::get()->apply_version(1);
}

int
main()
{
    add();
}
