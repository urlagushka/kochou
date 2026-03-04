#include <iostream>
#include <ranges>

#include <ktl/api.hpp>
#include <ktl/flat_map.hpp>
#include <ktl/flat_set.hpp>
#include <ktl/reflection/type_name.hpp>

#include <kochou/api/window/window.hpp>
#include <kochou/core/context.hpp>
#include <kochou/core/requirements/ensure.hpp>
#include <kochou/user/default_render.hpp>

int
main()
{
    kochou::user::metadata_render render;
    std::cout << ktl::reflection::type_name< int >() << std::endl;
}
