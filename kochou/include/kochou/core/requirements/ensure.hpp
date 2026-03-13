#ifndef KOCHOU_CORE_REQUIREMENTS_ENSURE_HPP
#define KOCHOU_CORE_REQUIREMENTS_ENSURE_HPP

#include <source_location>

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
    ensure(std::source_location _ctx = std::source_location::current()) noexcept
    {
        auto rc = T::apply(requirement_type::ensure);
        // static_assert(rc == ktl::errc::success);
    }
};
} // namespace kochou::core

#endif
