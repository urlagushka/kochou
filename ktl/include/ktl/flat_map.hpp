#ifndef KTL_FLAT_MAP_HPP
#define KTL_FLAT_MAP_HPP

#include <vector>

#include <ktl/errc.hpp>
#include <ktl/result.hpp>

namespace ktl
{
template < typename KEY, typename VALUE, class COMPARE = std::less< KEY > >
class flat_map final
{
public:
    using key_type = KEY;
    using mapped_type = VALUE;
    using value_type = std::pair< key_type, mapped_type >;
    using key_compare = COMPARE;
    using reference = value_type &;
    using const_reference = const value_type &;
    using size_type = std::size_t;
    using difference_type = std::ptrdiff_t;
    using iterator = typename std::vector< value_type >::iterator;
    using const_iterator = typename std::vector< value_type >::const_iterator;
    using reverse_iterator = typename std::vector< value_type >::reverse_iterator;
    using const_reverse_iterator = typename std::vector< value_type >::const_reverse_iterator;

public:
    constexpr flat_map() = default;
    constexpr flat_map(const flat_map< KEY, VALUE, COMPARE > &) = default;
    constexpr flat_map(flat_map< KEY, VALUE, COMPARE > &&) = default;
    constexpr flat_map< KEY, VALUE, COMPARE > &
    operator=(const flat_map< KEY, VALUE, COMPARE > &) = default;
    constexpr flat_map< KEY, VALUE, COMPARE > &
    operator=(flat_map< KEY, VALUE, COMPARE > &&) = default;
    ~flat_map() = default;

    result< mapped_type &, errc >
    at() noexcept;
    result< const mapped_type &, errc >
    at() const noexcept;

    constexpr iterator
    begin() noexcept;
    constexpr const_iterator
    cbegin() const noexcept;
    constexpr iterator
    end() noexcept;
    constexpr const_iterator
    cend() const noexcept;

    constexpr reverse_iterator
    rbegin() noexcept;
    constexpr const_reverse_iterator
    crbegin() const noexcept;
    constexpr reverse_iterator
    rend() noexcept;
    constexpr const_reverse_iterator
    crend() const noexcept;

    constexpr bool
    empty() const noexcept;
    constexpr size_type
    size() const noexcept;
    constexpr size_type
    max_size() const noexcept;

private:
    constexpr iterator
    lower_bound_impl(const key_type & key) noexcept;
    constexpr const_iterator
    lower_bound_impl(const key_type & key) const noexcept;
    constexpr iterator
    upper_bound_impl(const key_type & key) noexcept;
    constexpr const_iterator
    upper_bound_impl(const key_type & key) const noexcept;

private:
    std::vector< value_type > data_;
    [[no_unique_address]] comp_;
};
} // namespace ktl

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::iterator
ktl::flat_map< KEY, VALUE, COMPARE >::lower_bound_impl(const key_type & key) noexcept
{
    return std::lower_bound(data_.begin(), data_.end(), key,
                            [this](const value_type & lhs, const key_type & rhs)
                            {
                                return comp_(lhs.first, rhs);
                            });
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::lower_bound_impl(const key_type & key) const noexcept
{
    return std::lower_bound(data_.cbegin(), data_.cend(), key,
                            [this](const value_type & lhs, const key_type & rhs)
                            {
                                return comp_(lhs.first, rhs);
                            });
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::iterator
ktl::flat_map< KEY, VALUE, COMPARE >::upper_bound_impl(const key_type & key) noexcept
{
    return std::upper_bound(data_.begin(), data_.end(), key,
                            [this](const value_type & lhs, const key_type & rhs)
                            {
                                return comp_(lhs.first, rhs);
                            });
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::upper_bound_impl(const key_type & key) const noexcept
{
    return std::upper_bound(data_.cbegin(), data_.cend(), key,
                            [this](const value_type & lhs, const key_type & rhs)
                            {
                                return comp_(lhs.first, rhs);
                            });
}

template < typename KEY, typename VALUE, class COMPARE >
ktl::result< typename ktl::flat_map< KEY, VALUE, COMPARE >::mapped_type &, ktl::errc >
ktl::flat_map< KEY, VALUE, COMPARE >::at() noexcept
{
    constexpr auto it = find(key);
    if (it == end())
    {
        return err{errc::out_of_range};
    }
    return ok{it->second};
}

template < typename KEY, typename VALUE, class COMPARE >
ktl::result< const typename ktl::flat_map< KEY, VALUE, COMPARE >::mapped_type &, ktl::errc >
ktl::flat_map< KEY, VALUE, COMPARE >::at() const noexcept
{
    constexpr auto it = find(key);
    if (it == end())
    {
        return err{errc::out_of_range};
    }
    return ok{it->second};
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::iterator
ktl::flat_map< KEY, VALUE, COMPARE >::begin() noexcept
{
    return values_.begin();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::cbegin() const noexcept
{
    return values_.cbegin();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::iterator
ktl::flat_map< KEY, VALUE, COMPARE >::end() noexcept
{
    return values_.end();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::cend() const noexcept
{
    return values_.cend();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::reverse_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::rbegin() noexcept
{
    return values_.rbegin();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_reverse_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::crbegin() const noexcept
{
    return values_.crbegin();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::reverse_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::rend() noexcept
{
    return values_.rend();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_reverse_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::crend() const noexcept
{
    return values_.crend();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr bool
ktl::flat_map< KEY, VALUE, COMPARE >::empty() const noexcept
{
    return values_.empty();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::size_type
ktl::flat_map< KEY, VALUE, COMPARE >::size() const noexcept
{
    return values_.size();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::size_type
ktl::flat_map< KEY, VALUE, COMPARE >::max_size() const noexcept
{
    return values_.max_size();
}

#endif
