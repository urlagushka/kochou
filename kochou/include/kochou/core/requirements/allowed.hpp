#ifndef KOCHOU_CORE_REQUIREMENTS_ALLOWED_HPP
#define KOCHOU_CORE_REQUIREMENTS_ALLOWED_HPP

#include <ktl/reflection/type_name.hpp>

#include <kochou/core/context.hpp>
#include <kochou/core/requirements/type.hpp>

namespace kochou::core
{
template < typename T >
bool
allowed() noexcept;

template < requirement_concept T >
bool
allowed() noexcept;
} // namespace kochou::core

template < typename T >
bool
kochou::core::allowed() noexcept
{
    constexpr auto type_name = ktl::reflection::type_name< T >();
    return kochou_context_instance.allowed(typename);
}

template < kochou::core::requirement_concept T >
bool
kochou::core::allowed() noexcept
{
    return constexpr T::allowed();
}

#endif
