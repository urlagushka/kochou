#ifndef KOCHOU_CORE_REQUIREMENTS_ENSURE_HPP
#define KOCHOU_CORE_REQUIREMENTS_ENSURE_HPP

#include <ktl/errc.hpp>
#include <ktl/result.hpp>

#include <kochou/core/context.hpp>
#include <kochou/core/requirements/type.hpp>

namespace kochou::core
{
template < requirement_concept T >
class ensure
{
protected:
    consteval ensure() noexcept
    {
        constexpr auto rc = T::apply();
        static_assert(rc == ktl::errc::success);
    }
};
} // namespace kochou::core

#endif
