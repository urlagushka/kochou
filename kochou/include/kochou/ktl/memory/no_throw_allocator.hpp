#ifndef KTL_MEMORY_NO_THROW_ALLOCATOR_HPP
#define KTL_MEMORY_NO_THROW_ALLOCATOR_HPP

#include <cstddef>
#include <concepts>
#include <cstdlib>

#include <kochou/ktl/result.hpp>

namespace ktl::memory
{
    template< typename T, typename ... ARGS >
    requires std::is_nothrow_constructible_v< T, ARGS ... >
    [[nodiscard("memory leaks!")]]
    result< T *, errc > alloc(ARGS &&... args) noexcept
    {
        T * mapped = static_cast< T * >(std::malloc(sizeof(T)));
        if (!mapped)
        {
            return err{errc::bad_alloc};
        }
        return ok{::new (mapped) T(std::forward< ARGS >(args)...)};
    }

    template< typename T >
    requires std::is_nothrow_destructible_v< T >
    void free(T * mapped) noexcept
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
}

#endif
