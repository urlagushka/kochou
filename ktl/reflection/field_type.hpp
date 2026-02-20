#ifndef KTL_REFLECTION_FIELD_TYPE_HPP
#define KTL_REFLECTION_FIELD_TYPE_HPP

#include <type_traits>
#include <concepts>
#include <tuple>

#include "fields_amount.hpp"
#include "to_tuple.hpp"

namespace ktl::reflection
{
    template< typename T, std::size_t I >
    requires std::is_aggregate_v< T > && (I < fields_amount< T >)
    using field_type = std::remove_cvref_t< std::tuple_element_t< I, decltype(to_tuple(std::declval< T >())) > >;
}

#endif
