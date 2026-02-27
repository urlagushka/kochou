#ifndef KTL_FLAT_MAP_HPP
#define KTL_FLAT_MAP_HPP

#include <algorithm>
#include <compare>
#include <functional>
#include <initializer_list>
#include <type_traits>
#include <utility>
#include <vector>

#include <ktl/errc.hpp>
#include <ktl/result.hpp>

namespace ktl
{
template < typename KEY, typename VALUE, typename COMPARE = std::less< KEY > >
class flat_map
{
};
} // namespace ktl
#endif
