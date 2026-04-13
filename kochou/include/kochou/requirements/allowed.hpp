#ifndef KOCHOU_REQUIREMENTS_ALLOWED_HPP
#define KOCHOU_REQUIREMENTS_ALLOWED_HPP

#include <ktl/reflection/type_name.hpp>

#include <kochou/context.hpp>
#include <kochou/requirements/type.hpp>

namespace kochou
{
template < typename T >
bool
allowed() noexcept;

template < requirement_concept T >
bool
allowed() noexcept;
} // namespace kochou

template < typename T >
bool
kochou::allowed() noexcept
{
    constexpr auto type_name = ktl::reflection::type_name< T >();
    return context::get().allowed(type_name);
}

template < kochou::requirement_concept T >
bool
kochou::allowed() noexcept
{
    return T::allowed();
}

#endif
