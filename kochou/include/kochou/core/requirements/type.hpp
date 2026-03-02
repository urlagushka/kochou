#ifndef KOCHOU_CORE_REQUIREMENTS_TYPE_HPP
#define KOCHOU_CORE_REQUIREMENTS_TYPE_HPP

#include <concepts>

#include <ktl/errc.hpp>

namespace kochou::core
{
template < typename T >
concept requirement_concept = requires() {
    requires std::same_as< decltype(T::apply()), ktl::errc >;
    requires noexcept(T::apply());
};

enum class requirement_type : std::uint32_t
{
    ensure = 0,
    should = 1
};
} // namespace kochou::core

#endif
