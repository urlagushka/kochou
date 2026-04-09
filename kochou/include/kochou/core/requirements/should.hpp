#ifndef KOCHOU_CORE_REQUIREMENTS_SHOULD_HPP
#define KOCHOU_CORE_REQUIREMENTS_SHOULD_HPP

#include <ktl/errc.hpp>

#include <kochou/core/requirements/type.hpp>

namespace kochou::core
{
template < requirement_concept T >
class should
{
protected:
    should() noexcept
    {
        // ktl::errc rc = T::apply(requirement_type::should);
        // static_assert(rc == ktl::errc::success);
    }
};
} // namespace kochou::core

#endif
