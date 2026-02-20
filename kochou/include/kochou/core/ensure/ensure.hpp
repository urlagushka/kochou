#ifndef KOCHOU_CORE_ENSURE_ENSURE_HPP
#define KOCHOU_CORE_ENSURE_ENSURE_HPP

#include <concepts>
#include <kochou/core/context.hpp>
#include <kochou/errc.hpp>
#include <kochou/ktl/result.hpp>

namespace kochou::core
{
template < typename T >
concept ensure_type = requires() {
    requires std::same_as< decltype(T::apply()), errc >;
    requires noexcept(T::apply());
};

template < ensure_type T >
class ensure
{
protected:
    ensure() noexcept
    {
        auto rc = T::apply();
        if (rc != errc::ok)
        {
            context::get()->register_errc(rc);
        }
    }
};
} // namespace kochou::core

#endif
