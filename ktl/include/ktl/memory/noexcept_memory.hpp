#ifndef KTL_MEMORY_NOEXCEPT_MEMORY_HPP
#define KTL_MEMORY_NOEXCEPT_MEMORY_HPP

#include <concepts>
#include <cstddef>
#include <cstdlib>
#include <memory>

#include <ktl/errc.hpp>
#include <ktl/result.hpp>

namespace ktl::memory
{
template < typename T, typename... ARGS >
    requires std::is_nothrow_constructible_v< T, ARGS... >
[[nodiscard("memory leaks!")]]
result< T *, ktl::errc >
palloc(ARGS &&... args) noexcept
{
    T * mapped = ::new (::std::nothrow) T(std::forward< ARGS >(args)...);
    if (!mapped)
    {
        return ktl::errc::no_memory;
    }
    return mapped;
}

template < typename T >
    requires std::is_nothrow_destructible_v< T >
void
free(T * mapped) noexcept
{
    if (!mapped)
    {
        return;
    }
    if constexpr (!std::is_trivially_destructible_v< T >)
    {
        mapped->~T();
    }
    std::free(mapped);
}

template < typename T >
using uptr = std::unique_ptr< T >;
template < typename T >
using sptr = std::shared_ptr< T >;

template < typename T, typename... ARGS >
result< uptr< T >, ktl::errc >
make_unique(ARGS... args) noexcept
{
    ktl::result< uptr< T >, ktl::errc > rc = palloc< T >(std::forward< ARGS >(args)...);
    if (rc.has_value()) [[likely]]
    {
        return uptr< T >(rc.take_value());
    }
    return rc.error();
}

template < typename T, typename... ARGS >
result< sptr< T >, ktl::errc >
make_shared(ARGS... args) noexcept
{
    ktl::result< sptr< T >, ktl::errc > rc = palloc< T >(std::forward< ARGS >(args)...);
    if (rc.has_value()) [[likely]]
    {
        return sptr< T >(rc.take_value());
    }
    return rc.error();
}
} // namespace ktl::memory

#endif
