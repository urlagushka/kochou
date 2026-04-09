#ifndef KTL_REFLECTION_SELECTOR_HPP
#define KTL_REFLECTION_SELECTOR_HPP

#include <concepts>

namespace ktl::reflection
{
namespace
{
template < template < typename > typename CONDITION, typename... VARIANTS >
struct first_or_void;

template < template < typename > typename CONDITION >
struct first_or_void< CONDITION >
{
    using type = void;
};

template < template < typename > typename CONDITION, typename LHS, typename... RHS >
struct first_or_void< CONDITION, LHS, RHS... >
{
    using type =
        std::conditional_t< (CONDITION< LHS >::value), LHS, typename first_or_void< CONDITION, RHS... >::type >;
};
} // namespace

// first good or void
template < template < typename > typename CONDITION, typename... VARIANTS >
using selector = typename first_or_void< CONDITION, VARIANTS... >::type;
} // namespace ktl::reflection

#endif
