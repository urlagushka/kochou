#ifndef KOCHOU_CORE_REQUIREMENTS_TYPE_HPP
#define KOCHOU_CORE_REQUIREMENTS_TYPE_HPP

#include <concepts>

#include <ktl/errc.hpp>

namespace kochou::core
{
template < typename T >
concept requirement_type = requires() {
    requires std::same_as< decltype(T::apply()), ktl::errc >;
    requires noexcept(T::apply());
};
} // namespace kochou::core

#endif
