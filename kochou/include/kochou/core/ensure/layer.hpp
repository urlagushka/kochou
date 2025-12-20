#ifndef KOCHOU_CORE_ENSURE_LAYER_HPP
#define KOCHOU_CORE_ENSURE_LAYER_HPP

#include <kochou/ktl/fixed_string.hpp>
#include <kochou/errc.hpp>

namespace kochou::core
{
    template< ktl::fixed_string NAME >
    struct layer final
    {
        static errc apply() noexcept;
    };
}

template< ktl::fixed_string NAME >
kochou::errc
kochou::core::layer< NAME >::apply() noexcept
{
    std::string name = NAME;
    if (!name.starts_with("VK_LAYER_"))
    {
        return errc::layer_not_provided;
    }

    context::get()->apply_layer(NAME);
    return errc::ok;
}

#endif
