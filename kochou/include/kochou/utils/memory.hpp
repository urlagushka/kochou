#ifndef KOCHOU_UTILS_MEMORY_HPP
#define KOCHOU_UTILS_MEMORY_HPP

#include <memory>

namespace kochou
{
    template< typename T >
    using uptr = std::unique_ptr< T >;

    template< typename T >
    using sptr = std::shared_ptr< T >;
}

#endif
