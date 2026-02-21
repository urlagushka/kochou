#ifndef KOCHOU_CORE_ENSURE_LAYER_HPP
#define KOCHOU_CORE_ENSURE_LAYER_HPP

#include <ktl/errc.hpp>
#include <ktl/fixed_string.hpp>

namespace kochou::core
{
template < ktl::fixed_string NAME >
struct layer final
{
    static ktl::errc
    apply() noexcept;
};
} // namespace kochou::core

template < ktl::fixed_string NAME >
ktl::errc
kochou::core::layer< NAME >::apply() noexcept
{
    std::string name = NAME;
    if (!name.starts_with("VK_LAYER_"))
    {
        return ktl::errc::layer_not_provided;
    }

    context::get()->apply_layer(NAME);
    return ktl::errc::ok;
}

#endif
