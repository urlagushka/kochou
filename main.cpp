#include <iostream>
#include <ranges>

#include <ktl/api.hpp>
#include <ktl/flat_map.hpp>
#include <ktl/flat_set.hpp>
#include <ktl/reflection/type_name.hpp>

#include <kochou/api/window/window.hpp>
#include <kochou/core/context.hpp>
#include <kochou/core/loader.hpp>
#include <kochou/core/requirements/allowed.hpp>
#include <kochou/core/requirements/ensure.hpp>
#include <kochou/user/default_render.hpp>

void instance

    int
    main()
{
    auto rc = kochou::loader::load();
    if (!rc.has_value())
    {
        std::cout << rc.error() << std::endl;
        return 1;
    }
    auto handle = rc.take_value();

    std::cout << "loaded" << std::endl;

    auto rc1 = kochou::loader::free(handle);
    if (!rc1.has_value())
    {
        std::cout << rc1.error() << std::endl;
    }
    // kochou::user::metadata_render render;
}

// kochou::user::metadata_render render;
// std::cout << kochou::core::allowed< kochou::user::metadata_render >() << std::endl;
