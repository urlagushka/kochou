#ifndef KOCHOU_CORE_REQUIREMENTS_LAYER_HPP
#define KOCHOU_CORE_REQUIREMENTS_LAYER_HPP

#include <ktl/api/type.hpp>
#include <ktl/errc.hpp>

#include <kochou/core/requirements/type.hpp>

namespace kochou::core
{
template < ktl::api::layer_name NAME >
struct layer final
{
    static consteval ktl::errc
    apply(requirement_type _type) noexcept;

    static bool
    allowed() noexcept;
};
} // namespace kochou::core

template < ktl::api::layer_name NAME >
consteval ktl::errc
kochou::core::layer< NAME >::apply(requirement_type _type) noexcept
{
    std::string name = NAME;
    if (!name.starts_with("VK_LAYER_"))
    {
        return ktl::errc::layer_wrong_value;
    }

    kochou_context_instance.apply_layer(NAME);
    return ktl::errc::success;
}

template < ktl::api::layer_name NAME >
bool
kochou::core::layer< NAME >::allowed() noexcept
{
    return false;
}

#endif
