#ifndef KTL_REFLECTION_TYPE_ARRAY_HPP
#define KTL_REFLECTION_TYPE_ARRAY_HPP

#include <tuple>

#include <ktl/type.hpp>

namespace ktl::reflection
{
template < typename... TYPES >
using typearray = std::tuple< ... TYPES >;

template < typearray ARRAY >
constexpr ktl::usize typearray_size = []
{
    return std::tuple_size< decltype(ARRAY) >::value;
}();

template < typearray ARRAY >
using typearray_get // need get type on runtime by passing a value, not constant

} // namespace ktl::reflection

#endif
/*



*/
