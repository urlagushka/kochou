#ifndef KOCHOU_CORE_ENSURE_SHOULD_HPP
#define KOCHOU_CORE_ENSURE_SHOULD_HPP

#include <concepts>

#include <ktl/errc.hpp>

namespace kochou::core
{
template < typename T >
concept ensure_type = requires() {
    requires std::same_as< decltype(T::apply()), ktl::errc >;
    requires noexcept(T::apply());
};

/*
ensure - жесткое требование -> падение если не доступно
should - мягкое требование -> все ок если не доступно

нужно как нибудь из контекста узнавать доступно или нет в рантайме
*/

template < ensure_type T >
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
