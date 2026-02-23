#ifndef KOCHOU_CORE_ENSURE_ENSURE_HPP
#define KOCHOU_CORE_ENSURE_ENSURE_HPP

#include <concepts>

#include <ktl/errc.hpp>
#include <ktl/result.hpp>

#include <kochou/core/context.hpp>

namespace kochou::core
{
template < typename T >
concept ensure_type = requires() {
    requires std::same_as< decltype(T::apply()), ktl::errc >;
    requires noexcept(T::apply());
};

template < ensure_type T >
class ensure
{
protected:
    consteval ensure() noexcept
    {
        auto rc = T::apply();
        if (rc != ktl::errc::success)
        {
            context::get()->register_errc(rc);
        }
    }
};
} // namespace kochou::core

#endif
