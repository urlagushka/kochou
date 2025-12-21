#ifndef KTL_MASK_HPP
#define KTL_MASK_HPP

#include <type_traits>
#include <concepts>
#include <cstdint>

namespace ktl
{
    using mask_underlying_type = uint32_t;

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T operator~(T a)
    {
        return static_cast< T >(~static_cast< std::underlying_type_t< T > >(a));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T operator|(T a, T b)
    {
        return static_cast< T >(static_cast< std::underlying_type_t< T > >(a) |
            static_cast< std::underlying_type_t< T > >(b));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T operator&(T a, T b)
    {
        return static_cast< T >(static_cast< std::underlying_type_t< T > >(a) &
            static_cast< std::underlying_type_t< T > >(b));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T operator^(T a, T b)
    {
        return static_cast< T >(static_cast< std::underlying_type_t<T> >(a) ^
            static_cast< std::underlying_type_t< T > >(b));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T & operator|=(T & a, T b)
    {
        return static_cast< T & >(static_cast< std::underlying_type_t< T > & >(a) |=
            static_cast< std::underlying_type_t< T > >(b));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T & operator&=(T & a, T b)
    {
        return static_cast< T & >(static_cast< std::underlying_type_t< T > & >(a) &=
            static_cast< std::underlying_type_t< T > >(b));
    }

    template< typename T >
        requires std::is_enum_v< T >
    constexpr inline T & operator^=(T & a, T b)
    {
        return static_cast< T & >(static_cast< std::underlying_type_t< T > & >(a) ^=
            static_cast< std::underlying_type_t< T > >(b));
    }
}

#endif
