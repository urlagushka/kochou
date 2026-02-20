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
result< T *, errc >
alloc(ARGS &&... args) noexcept
{
    T * mapped = static_cast< T * >(std::malloc(sizeof(T)));
    if (!mapped)
    {
        return err{errc::bad_alloc};
    }
    return ok{::new (mapped) T(std::forward< ARGS >(args)...)};
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
struct ptr_deleter
{
    void
    operator()(T * ptr) const noexcept
    {
        free< T >(ptr);
    }
};

template < typename T >
using unique_ptr = std::unique_ptr< T, ptr_deleter< T > >;
template < typename T >
using shared_ptr = std::shared_ptr< T >;

template < typename T, typename... ARGS >
result< unique_ptr< T >, errc >
make_unique(ARGS... args)
{
    auto result = alloc< T >(std::forward< ARGS >(args)...);
    if (result.is_err())
    {
        return err{result.take_err()};
    }
    return ok{unique_ptr< T >(result.take_ok())};
}

template < typename T, typename... ARGS >
result< shared_ptr< T >, errc >
make_shared(ARGS... args)
{
    auto result = alloc< T >(std::forward< ARGS >(args)...);
    if (result.is_err())
    {
        return err{result.take_err()};
    }
    return ok{shared_ptr< T >(result.take_ok(), ptr_deleter< T >{})};
}
} // namespace ktl::memory

#endif
