#ifndef KTL_FLAT_SET_HPP
#define KTL_FLAT_SET_HPP

#include <vector>

#include <ktl/errc.hpp>
#include <ktl/result.hpp>

namespace ktl
{
template < typename KEY, class COMPARE = std::less< KEY > >
class flat_set final
{
public:
    using container_type = std::vector< KEY >;
    using key_type = KEY;
    using value_type = KEY;
    using key_compare = COMPARE;
    using value_compare = COMPARE;
    using reference = value_type &;
    using const_reference = const value_type &;
    using size_type = container_type::size_type;
    using difference_type = container_type::difference_type;
    using iterator = typename std::vector< value_type >::iterator;
    using const_iterator = typename std::vector< value_type >::const_iterator;
    using reverse_iterator = typename std::vector< value_type >::reverse_iterator;
    using const_reverse_iterator = typename std::vector< value_type >::const_reverse_iterator;

public:
    constexpr flat_set() = default;
    constexpr flat_set(const flat_set< KEY, COMPARE > &) = default;
    constexpr flat_set(flat_set< KEY, COMPARE > &&) = default;
    constexpr flat_set< KEY, COMPARE > &
    operator=(const flat_set< KEY, COMPARE > &) = default;
    constexpr flat_set< KEY, COMPARE > &
    operator=(flat_set< KEY, COMPARE > &&) = default;

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

    constexpr result< std::pair< iterator, bool >, errc >
    insert(const value_type & value) noexcept;
    constexpr result< std::pair< iterator, bool >, errc >
    insert(value_type && value) noexcept;

private:
    std::vector< KEY > data_;
    [[no_unique_address]] COMPARE comp_;
};
} // namespace ktl

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::iterator
ktl::flat_set< KEY, COMPARE >::begin() noexcept
{
    return data_.begin();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::iterator
ktl::flat_set< KEY, COMPARE >::begin() const noexcept
{
    return data_.begin();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::const_iterator
ktl::flat_set< KEY, COMPARE >::cbegin() const noexcept
{
    return data_.cbegin();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::iterator
ktl::flat_set< KEY, COMPARE >::end() noexcept
{
    return data_.end();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::iterator
ktl::flat_set< KEY, COMPARE >::end() const noexcept
{
    return data_.end();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::const_iterator
ktl::flat_set< KEY, COMPARE >::cend() const noexcept
{
    return data_.cend();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::reverse_iterator
ktl::flat_set< KEY, COMPARE >::rbegin() noexcept
{
    return data_.rbegin();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::reverse_iterator
ktl::flat_set< KEY, COMPARE >::rbegin() const noexcept
{
    return data_.rbegin();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::const_reverse_iterator
ktl::flat_set< KEY, COMPARE >::crbegin() const noexcept
{
    return data_.crbegin();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::reverse_iterator
ktl::flat_set< KEY, COMPARE >::rend() noexcept
{
    return data_.rend();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::reverse_iterator
ktl::flat_set< KEY, COMPARE >::rend() const noexcept
{
    return data_.rend();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::const_reverse_iterator
ktl::flat_set< KEY, COMPARE >::crend() const noexcept
{
    return data_.crend();
}

template < typename KEY, class COMPARE >
constexpr bool
ktl::flat_set< KEY, COMPARE >::empty() const noexcept
{
    return data_.empty();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::size_type
ktl::flat_set< KEY, COMPARE >::size() const noexcept
{
    return data_.size();
}

template < typename KEY, class COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::size_type
ktl::flat_set< KEY, COMPARE >::max_size() const noexcept
{
    return data_.max_size();
}

template < typename KEY, class COMPARE >
constexpr ktl::result< std::pair< typename ktl::flat_set< KEY, COMPARE >::iterator, bool >, ktl::errc >
ktl::flat_set< KEY, COMPARE >::insert(const value_type & value) noexcept
{
    return err{errc::unspecified};
}

template < typename KEY, class COMPARE >
constexpr ktl::result< std::pair< typename ktl::flat_set< KEY, COMPARE >::iterator, bool >, ktl::errc >
ktl::flat_set< KEY, COMPARE >::insert(value_type && value) noexcept
{
    return err{errc::unspecified};
}

#endif
