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

    constexpr result< mapped_type &, errc >
    at(const key_type & _key) noexcept;
    constexpr result< const mapped_type &, errc >
    at(const key_type & _key) const noexcept;
    constexpr mapped_type &
    operator[](const key_type & _key) noexcept;
    constexpr mapped_type &
    operator[](const key_type & _key) const noexcept;

    constexpr iterator
    begin() noexcept;
    constexpr iterator
    begin() const noexcept;
    constexpr const_iterator
    cbegin() const noexcept;
    constexpr iterator
    end() noexcept;
    constexpr iterator
    end() const noexcept;
    constexpr const_iterator
    cend() const noexcept;

    constexpr reverse_iterator
    rbegin() noexcept;
    constexpr reverse_iterator
    rbegin() const noexcept;
    constexpr const_reverse_iterator
    crbegin() const noexcept;
    constexpr reverse_iterator
    rend() noexcept;
    constexpr reverse_iterator
    rend() const noexcept;
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
    lower_bound_impl(const key_type & _key) noexcept;
    constexpr const_iterator
    lower_bound_impl(const key_type & _key) const noexcept;
    constexpr iterator
    upper_bound_impl(const key_type & _key) noexcept;
    constexpr const_iterator
    upper_bound_impl(const key_type & _key) const noexcept;

private:
    mutable std::vector< value_type > data_;
    [[no_unique_address]] COMPARE comp_;
};
} // namespace ktl

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::iterator
ktl::flat_map< KEY, VALUE, COMPARE >::lower_bound_impl(const key_type & _key) noexcept
{
    return std::lower_bound(data_.begin(), data_.end(), _key,
                            [this](const value_type & _lhs, const key_type & _rhs)
                            {
                                return comp_(_lhs.first, _rhs);
                            });
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::lower_bound_impl(const key_type & _key) const noexcept
{
    return std::lower_bound(data_.cbegin(), data_.cend(), _key,
                            [this](const value_type & _lhs, const key_type & _rhs)
                            {
                                return comp_(_lhs.first, _rhs);
                            });
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::iterator
ktl::flat_map< KEY, VALUE, COMPARE >::upper_bound_impl(const key_type & _key) noexcept
{
    return std::upper_bound(data_.begin(), data_.end(), _key,
                            [this](const value_type & _lhs, const key_type & _rhs)
                            {
                                return comp_(_lhs.first, _rhs);
                            });
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::upper_bound_impl(const key_type & _key) const noexcept
{
    return std::upper_bound(data_.cbegin(), data_.cend(), _key,
                            [this](const value_type & _lhs, const key_type & _rhs)
                            {
                                return comp_(_lhs.first, _rhs);
                            });
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::result< typename ktl::flat_map< KEY, VALUE, COMPARE >::mapped_type &, ktl::errc >
ktl::flat_map< KEY, VALUE, COMPARE >::at(const key_type & _key) noexcept
{
    constexpr auto tmp = find(_key);
    if (tmp == end())
    {
        return err{errc::out_of_range};
    }
    return ok{tmp->second};
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::result< const typename ktl::flat_map< KEY, VALUE, COMPARE >::mapped_type &, ktl::errc >
ktl::flat_map< KEY, VALUE, COMPARE >::at(const key_type & _key) const noexcept
{
    constexpr auto tmp = find(_key);
    if (tmp == end())
    {
        return err{errc::out_of_range};
    }
    return ok{tmp->second};
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::iterator
ktl::flat_map< KEY, VALUE, COMPARE >::begin() noexcept
{
    return data_.begin();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::iterator
ktl::flat_map< KEY, VALUE, COMPARE >::begin() const noexcept
{
    return data_.begin();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::cbegin() const noexcept
{
    return data_.cbegin();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::iterator
ktl::flat_map< KEY, VALUE, COMPARE >::end() noexcept
{
    return data_.end();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::iterator
ktl::flat_map< KEY, VALUE, COMPARE >::end() const noexcept
{
    return data_.end();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::cend() const noexcept
{
    return data_.cend();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::reverse_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::rbegin() noexcept
{
    return data_.rbegin();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::reverse_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::rbegin() const noexcept
{
    return data_.rbegin();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_reverse_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::crbegin() const noexcept
{
    return data_.crbegin();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::reverse_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::rend() noexcept
{
    return data_.rend();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::reverse_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::rend() const noexcept
{
    return data_.rend();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::const_reverse_iterator
ktl::flat_map< KEY, VALUE, COMPARE >::crend() const noexcept
{
    return data_.crend();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr bool
ktl::flat_map< KEY, VALUE, COMPARE >::empty() const noexcept
{
    return data_.empty();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::size_type
ktl::flat_map< KEY, VALUE, COMPARE >::size() const noexcept
{
    return data_.size();
}

template < typename KEY, typename VALUE, class COMPARE >
constexpr ktl::flat_map< KEY, VALUE, COMPARE >::size_type
ktl::flat_map< KEY, VALUE, COMPARE >::max_size() const noexcept
{
    return data_.max_size();
}

#endif
