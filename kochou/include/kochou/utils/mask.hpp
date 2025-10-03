#ifndef KOCHOU_UTILS_MASK_HPP
#define KOCHOU_UTILS_MASK_HPP

#include <cstdint>

namespace kochou::core
{
    using mask_underlying_type = uint32_t;

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T operator~(T a)
    {
        return static_cast< T >(~static_cast< std::underlying_type< T >::type >(a));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T operator|(T a, T b)
    {
        return static_cast< T >(static_cast< std::underlying_type< T >::type >(a) |
            static_cast< std::underlying_type< T >::type >(b));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T operator&(T a, T b)
    {
        return static_cast< T >(static_cast< std::underlying_type< T >::type >(a) &
            static_cast< std::underlying_type< T >::type >(b));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T operator^(T a, T b)
    {
        return static_cast< T >(static_cast< std::underlying_type<T>::type >(a) ^
            static_cast< std::underlying_type< T >::type >(b));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T & operator|=(T& a, T b)
    {
        return reinterpret_cast< T& >(reinterpret_cast< std::underlying_type< T >::type& >(a) |=
            static_cast< std::underlying_type< T >::type >(b));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T & operator&=(T& a, T b)
    {
        return reinterpret_cast< T& >(reinterpret_cast< std::underlying_type< T >::type& >(a) &=
            static_cast< std::underlying_type< T >::type >(b));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T & operator^=(T& a, T b)
    {
        return reinterpret_cast< T& >(reinterpret_cast< std::underlying_type< T >::type& >(a) ^=
            static_cast< std::underlying_type< T >::type >(b));
    }
}

#endif
