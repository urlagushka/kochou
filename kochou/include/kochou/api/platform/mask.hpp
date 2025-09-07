#ifndef KOCHOU_API_PLATFORM_MASK_HPP
#define KOCHOU_API_PLATFORM_MASK_HPP

#include <cstdint>

namespace kochou::api
{
    enum class ext_mask // ext
        : uint32_t
    {
        descriptor_indexing = 0x1,
        dynamic_render      = 0x2,
        mesh_shader         = 0x4,
    };

    enum class gpu_mask // gpu
        : uint32_t
    {
        other      = 0x1,
        integrated = 0x2,
        discrete   = 0x4,
        vvirtual   = 0x8,
        cpu        = 0x10
    };

    enum class queue_mask
        : uint32_t
    {
        graphics = static_cast< uint32_t >(vk::QueueFlagBits::eGraphics),
        compute  = static_cast< uint32_t >(vk::QueueFlagBits::eCompute),
        transfer = static_cast< uint32_t >(vk::QueueFlagBits::eTransfer),
        sparse   = static_cast< uint32_t >(vk::QueueFlagBits::eSparseBinding)
    };

    enum class pipeline_mask
        : uint32_t
    {
        mesh = 0x1,
        p_2d = 0x2,
        p_3d = 0x4
    };

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
