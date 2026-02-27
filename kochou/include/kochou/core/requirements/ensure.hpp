#ifndef KOCHOU_CORE_REQUIREMENTS_ENSURE_HPP
#define KOCHOU_CORE_REQUIREMENTS_ENSURE_HPP

#include <ktl/errc.hpp>
#include <ktl/result.hpp>

#include <kochou/core/context.hpp>
#include <kochou/core/requirements/type.hpp>

namespace kochou::core
{
template < requirement_type T >
class ensure
{
protected:
    consteval ensure() noexcept
    {
        constexpr auto rc = T::apply();
        if constexpr (rc != ktl::errc::success)
        {
            kochou_context_instance.register_errc(rc); // fatal ?
        }
    }
};
} // namespace kochou::core

#endif
