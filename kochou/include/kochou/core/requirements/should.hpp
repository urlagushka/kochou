#ifndef KOCHOU_CORE_REQUIREMENTS_SHOULD_HPP
#define KOCHOU_CORE_REQUIREMENTS_SHOULD_HPP

#include <ktl/errc.hpp>

#include <kochou/core/requirements/type.hpp>

namespace kochou::core
{
template < requirement_type T >
class should
{
protected:
    consteval should() noexcept
    {
        constexpr auto rc = T::apply();
        if constexpr (rc != ktl::errc::success)
        {
            kochou_context_instance.register_errc(rc); // warning ?
        }
    }
};
} // namespace kochou::core

#endif
