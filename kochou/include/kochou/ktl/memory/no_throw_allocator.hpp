#ifndef KTL_MEMORY_NO_THROW_ALLOCATOR_HPP
#define KTL_MEMORY_NO_THROW_ALLOCATOR_HPP

#include <cstddef>

#include <kochou/ktl/result.hpp>

namespace ktl::memory
{
    template< typename T >
    result< T *, > malloc(std::size_t)
    {

    }

    template< typename T >
    T * calloc(std::size_t)
    {

    }

    template< typename T >
    T * realloc(std::size_t)
    {

    }
}

#endif
