#ifndef KOCHOU_REQUIREMENTS_ENSURE_HPP
#define KOCHOU_REQUIREMENTS_ENSURE_HPP

#include <source_location>

#include <ktl/errc.hpp>
#include <ktl/result.hpp>

#include <kochou/context.hpp>
#include <kochou/requirements/type.hpp>

namespace kochou
{
template < requirement_concept T >
class ensure
{
protected:
    ensure(std::source_location _ctx = std::source_location::current()) noexcept
    {
        // auto rc = T::apply(requirement_type::ensure);
        // static_assert(rc == ktl::errc::success);
    }
};
} // namespace kochou

#endif
