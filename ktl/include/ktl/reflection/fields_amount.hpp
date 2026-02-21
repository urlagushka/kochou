#ifndef KTL_REFLECTION_FIELDS_AMOUNT_HPP
#define KTL_REFLECTION_FIELDS_AMOUNT_HPP

#include <type_traits>
#include <concepts>
#include <utility>

namespace ktl::reflection::details
{
    struct placeholder
    {
        template< typename T >
        constexpr operator T() const noexcept
        {
            return T{};
        }
    };

    template< typename T, std::size_t N >
    constexpr bool test_construct()
    {
        return []< std::size_t ... I >(std::index_sequence< I ... >)
        {
            return requires { T{ ((void)I, placeholder{}) ... }; };
        }
        (std::make_index_sequence< N >{});
    }

    template< typename T, std::size_t A, std::size_t B >
    constexpr std::size_t binary_search_size()
    {
        if constexpr (A > B)
        {
            return A - 1;
        }
        else
        {
            constexpr std::size_t mid = (A + B) / 2;
            if constexpr (test_construct< T, mid >())
            {
                if constexpr (mid == B)
                {
                    return mid;
                }
                else
                {
                    return binary_search_size< T, mid + 1, B >();
                }
            }
            else
            {
                return binary_search_size< T, A, mid - 1 >();
            }
        }
    }
}

namespace ktl::reflection
{
    static constexpr std::size_t MAX_FIELDS_AMOUNT = 64;

    template< typename T >
    requires std::is_aggregate_v< T >
    constexpr std::size_t fields_amount = []
    {
        return details::binary_search_size< T, 0, MAX_FIELDS_AMOUNT >();
    }
    ();
}

#endif
