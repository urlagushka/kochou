#ifndef KTL_FLAT_SET_HPP
#define KTL_FLAT_SET_HPP

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

template < typename KEY, typename COMPARE = std::less< KEY > >
class flat_set final
{
public:
    using key_type = KEY;
    using value_type = KEY;
    using key_compare = COMPARE;
    using value_compare = COMPARE;
    using reference = const value_type &;
    using const_reference = const value_type &;
    using size_type = std::size_t;
    using difference_type = std::ptrdiff_t;
    using iterator = typename std::vector< value_type >::const_iterator;
    using const_iterator = typename std::vector< value_type >::const_iterator;
    using reverse_iterator = typename std::vector< value_type >::const_reverse_iterator;
    using const_reverse_iterator = typename std::vector< value_type >::const_reverse_iterator;
    using container_type = std::vector< value_type >;

private:
    container_type data_;
    [[no_unique_address]] key_compare comp_;

    // Вспомогательные функции поиска
    constexpr const_iterator
    lower_bound_impl(const key_type & key) const noexcept
    {
        return std::lower_bound(data_.begin(), data_.end(), key, comp_);
    }

    constexpr const_iterator
    upper_bound_impl(const key_type & key) const noexcept
    {
        return std::upper_bound(data_.begin(), data_.end(), key, comp_);
    }

public:
    constexpr flat_set() noexcept = default;
    constexpr explicit flat_set(const key_compare & comp) noexcept : comp_(comp) {}
    constexpr flat_set(const flat_set & other) noexcept = default;
    constexpr flat_set(flat_set && other) noexcept = default;
    constexpr flat_set &
    operator=(const flat_set & other) noexcept = default;
    constexpr flat_set &
    operator=(flat_set && other) noexcept = default;
    constexpr ~flat_set() noexcept = default;
    template < typename INPUT_ITERATOR >
    constexpr flat_set(INPUT_ITERATOR first, INPUT_ITERATOR last, const key_compare & comp = key_compare());
    constexpr flat_set(std::initializer_list< value_type > ilist, const key_compare & comp = key_compare());

    [[nodiscard]] constexpr iterator
    begin() noexcept;
    [[nodiscard]] constexpr const_iterator
    begin() const noexcept;
    [[nodiscard]] constexpr const_iterator
    cbegin() const noexcept;
    [[nodiscard]] constexpr iterator
    end() noexcept;
    [[nodiscard]] constexpr const_iterator
    end() const noexcept;
    [[nodiscard]] constexpr const_iterator
    cend() const noexcept;
    [[nodiscard]] constexpr reverse_iterator
    rbegin() noexcept;
    [[nodiscard]] constexpr const_reverse_iterator
    rbegin() const noexcept;
    [[nodiscard]] constexpr const_reverse_iterator
    crbegin() const noexcept;
    [[nodiscard]] constexpr reverse_iterator
    rend() noexcept;
    [[nodiscard]] constexpr const_reverse_iterator
    rend() const noexcept;
    [[nodiscard]] constexpr const_reverse_iterator
    crend() const noexcept;

    [[nodiscard]] constexpr bool
    empty() const noexcept;
    [[nodiscard]] constexpr size_type
    size() const noexcept;
    [[nodiscard]] constexpr size_type
    max_size() const noexcept;

    constexpr void
    clear() noexcept;
    constexpr ktl::result< std::pair< iterator, bool >, errc >
    insert(const value_type & value) noexcept;
    constexpr ktl::result< std::pair< iterator, bool >, errc >
    insert(value_type && value) noexcept;
    template < typename INPUT_ITERATOR >
    constexpr void
    insert(INPUT_ITERATOR first, INPUT_ITERATOR last) noexcept;
    constexpr void
    insert(std::initializer_list< value_type > ilist) noexcept;
    template < typename... ARGS >
    constexpr ktl::result< std::pair< iterator, bool >, errc >
    emplace(ARGS &&... args) noexcept;
    constexpr iterator
    erase(iterator pos) noexcept;
    constexpr iterator
    erase(iterator first, iterator last) noexcept;
    constexpr size_type
    erase(const key_type & key) noexcept;
    constexpr void
    swap(flat_set & other) noexcept;

    [[nodiscard]] constexpr size_type
    count(const key_type & key) const noexcept;
    [[nodiscard]] constexpr iterator
    find(const key_type & key) noexcept;
    [[nodiscard]] constexpr const_iterator
    find(const key_type & key) const noexcept;
    [[nodiscard]] constexpr bool
    contains(const key_type & key) const noexcept;
    [[nodiscard]] constexpr std::pair< iterator, iterator >
    equal_range(const key_type & key) noexcept;
    [[nodiscard]] constexpr std::pair< const_iterator, const_iterator >
    equal_range(const key_type & key) const noexcept;
    [[nodiscard]] constexpr iterator
    lower_bound(const key_type & key) noexcept;
    [[nodiscard]] constexpr const_iterator
    lower_bound(const key_type & key) const noexcept;
    [[nodiscard]] constexpr iterator
    upper_bound(const key_type & key) noexcept;
    [[nodiscard]] constexpr const_iterator
    upper_bound(const key_type & key) const noexcept;

    [[nodiscard]] constexpr key_compare
    key_comp() const noexcept;
    [[nodiscard]] constexpr value_compare
    value_comp() const noexcept;
    [[nodiscard]] constexpr const container_type &
    container() const noexcept;

    [[nodiscard]] constexpr bool
    operator==(const flat_set & rhs) noexcept;
    [[nodiscard]] constexpr auto
    operator<=>(const flat_set & rhs) noexcept;
};
} // namespace ktl

template < typename KEY, typename COMPARE >
template < typename INPUT_ITERATOR >
constexpr ktl::flat_set< KEY, COMPARE >::flat_set(INPUT_ITERATOR first, INPUT_ITERATOR last, const key_compare & comp)
    : comp_(comp)
{
    data_.reserve(static_cast< size_type >(std::distance(first, last)));
    for (auto it = first; it != last; ++it)
    {
        insert(*it);
    }
}

template < typename KEY, typename COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::flat_set(std::initializer_list< value_type > ilist, const key_compare & comp)
    : comp_(comp)
{
    data_.reserve(ilist.size());
    for (const auto & value : ilist)
    {
        insert(value);
    }
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::iterator
ktl::flat_set< KEY, COMPARE >::begin() noexcept
{
    return data_.begin();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::const_iterator
ktl::flat_set< KEY, COMPARE >::begin() const noexcept
{
    return data_.begin();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::const_iterator
ktl::flat_set< KEY, COMPARE >::cbegin() const noexcept
{
    return data_.cbegin();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::iterator
ktl::flat_set< KEY, COMPARE >::end() noexcept
{
    return data_.end();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::const_iterator
ktl::flat_set< KEY, COMPARE >::end() const noexcept
{
    return data_.end();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::const_iterator
ktl::flat_set< KEY, COMPARE >::cend() const noexcept
{
    return data_.cend();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::reverse_iterator
ktl::flat_set< KEY, COMPARE >::rbegin() noexcept
{
    return data_.rbegin();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::const_reverse_iterator
ktl::flat_set< KEY, COMPARE >::rbegin() const noexcept
{
    return data_.rbegin();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::const_reverse_iterator
ktl::flat_set< KEY, COMPARE >::crbegin() const noexcept
{
    return data_.crbegin();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::reverse_iterator
ktl::flat_set< KEY, COMPARE >::rend() noexcept
{
    return data_.rend();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::const_reverse_iterator
ktl::flat_set< KEY, COMPARE >::rend() const noexcept
{
    return data_.rend();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::const_reverse_iterator
ktl::flat_set< KEY, COMPARE >::crend() const noexcept
{
    return data_.crend();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr bool
ktl::flat_set< KEY, COMPARE >::empty() const noexcept
{
    return data_.empty();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::size_type
ktl::flat_set< KEY, COMPARE >::size() const noexcept
{
    return data_.size();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::size_type
ktl::flat_set< KEY, COMPARE >::max_size() const noexcept
{
    return data_.max_size();
}

template < typename KEY, typename COMPARE >
constexpr void
ktl::flat_set< KEY, COMPARE >::clear() noexcept
{
    data_.clear();
}

template < typename KEY, typename COMPARE >
// Вставка с обработкой ошибок через result
constexpr ktl::result< std::pair< typename ktl::flat_set< KEY, COMPARE >::iterator, bool >, ktl::errc >
ktl::flat_set< KEY, COMPARE >::insert(const value_type & value) noexcept
{
    auto it = lower_bound_impl(value);
    if (it != end() && !comp_(value, *it) && !comp_(*it, value))
    {
        return ktl::ok(std::pair< iterator, bool >{it, false});
    }

    // Вставка в вектор (в constexpr контексте память всегда доступна)
    // В рантайме std::vector выбросит исключение при нехватке памяти,
    // но мы не можем поймать его в constexpr — поэтому полагаемся на то,
    // что аллокатор не выбрасывает исключений (или используем безысключительный аллокатор)
    auto pos = data_.insert(it, value);
    return ktl::ok(std::pair< iterator, bool >{pos, true});
}

template < typename KEY, typename COMPARE >
constexpr ktl::result< std::pair< typename ktl::flat_set< KEY, COMPARE >::iterator, bool >, ktl::errc >
ktl::flat_set< KEY, COMPARE >::insert(value_type && value) noexcept
{
    auto it = lower_bound_impl(value);
    if (it != end() && !comp_(value, *it) && !comp_(*it, value))
    {
        return ktl::ok(std::pair< iterator, bool >{it, false});
    }

    auto pos = data_.insert(it, std::move(value));
    return ktl::ok(std::pair< iterator, bool >{pos, true});
}

template < typename KEY, typename COMPARE >
template < typename INPUT_ITERATOR >
constexpr void
ktl::flat_set< KEY, COMPARE >::insert(INPUT_ITERATOR first, INPUT_ITERATOR last) noexcept
{
    while (first != last)
    {
        insert(*first);
        ++first;
    }
}

template < typename KEY, typename COMPARE >
constexpr void
ktl::flat_set< KEY, COMPARE >::insert(std::initializer_list< value_type > ilist) noexcept
{
    insert(ilist.begin(), ilist.end());
}

template < typename KEY, typename COMPARE >
template < typename... ARGS >
constexpr ktl::result< std::pair< typename ktl::flat_set< KEY, COMPARE >::iterator, bool >, ktl::errc >
ktl::flat_set< KEY, COMPARE >::emplace(ARGS &&... args) noexcept
{
    // Создаём временный объект для сравнения
    value_type temp(std::forward< ARGS >(args)...);
    auto it = lower_bound_impl(temp);
    if (it != end() && !comp_(temp, *it) && !comp_(*it, temp))
    {
        return ktl::ok(std::pair< iterator, bool >{it, false});
    }

    // Вставляем напрямую в вектор
    auto pos = data_.emplace(it, std::forward< ARGS >(args)...);
    return ktl::ok(std::pair< iterator, bool >{pos, true});
}

template < typename KEY, typename COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::iterator
ktl::flat_set< KEY, COMPARE >::erase(iterator pos) noexcept
{
    return data_.erase(pos);
}

template < typename KEY, typename COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::iterator
ktl::flat_set< KEY, COMPARE >::erase(iterator first, iterator last) noexcept
{
    return data_.erase(first, last);
}

template < typename KEY, typename COMPARE >
constexpr ktl::flat_set< KEY, COMPARE >::size_type
ktl::flat_set< KEY, COMPARE >::erase(const key_type & key) noexcept
{
    auto it = find(key);
    if (it == end())
    {
        return 0;
    }
    data_.erase(it);
    return 1;
}

template < typename KEY, typename COMPARE >
constexpr void
ktl::flat_set< KEY, COMPARE >::swap(flat_set & other) noexcept
{
    data_.swap(other.data_);
    std::swap(comp_, other.comp_);
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::size_type
ktl::flat_set< KEY, COMPARE >::count(const key_type & key) const noexcept
{
    auto [first, last] = equal_range(key);
    return static_cast< size_type >(std::distance(first, last));
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::iterator
ktl::flat_set< KEY, COMPARE >::find(const key_type & key) noexcept
{
    auto it = lower_bound_impl(key);
    if (it != end() && !comp_(key, *it) && !comp_(*it, key))
    {
        return it;
    }
    return end();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::const_iterator
ktl::flat_set< KEY, COMPARE >::find(const key_type & key) const noexcept
{
    auto it = lower_bound_impl(key);
    if (it != end() && !comp_(key, *it) && !comp_(*it, key))
    {
        return it;
    }
    return end();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr bool
ktl::flat_set< KEY, COMPARE >::contains(const key_type & key) const noexcept
{
    return find(key) != end();
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr std::pair< typename ktl::flat_set< KEY, COMPARE >::iterator,
                                   typename ktl::flat_set< KEY, COMPARE >::iterator >
ktl::flat_set< KEY, COMPARE >::equal_range(const key_type & key) noexcept
{
    auto lit = lower_bound_impl(key);
    if (lit == end() || comp_(key, *lit))
    {
        return {lit, lit};
    }
    auto uit = lit;
    while (uit != end() && !comp_(key, *uit) && !comp_(*uit, key))
    {
        ++uit;
    }
    return {lit, uit};
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr std::pair< typename ktl::flat_set< KEY, COMPARE >::const_iterator,
                                   typename ktl::flat_set< KEY, COMPARE >::const_iterator >
ktl::flat_set< KEY, COMPARE >::equal_range(const key_type & key) const noexcept
{
    auto lit = lower_bound_impl(key);
    if (lit == end() || comp_(key, *lit))
    {
        return {lit, lit};
    }
    auto uit = lit;
    while (uit != end() && !comp_(key, *uit) && !comp_(*uit, key))
    {
        ++uit;
    }
    return {lit, uit};
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::iterator
ktl::flat_set< KEY, COMPARE >::lower_bound(const key_type & key) noexcept
{
    return lower_bound_impl(key);
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::const_iterator
ktl::flat_set< KEY, COMPARE >::lower_bound(const key_type & key) const noexcept
{
    return lower_bound_impl(key);
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::iterator
ktl::flat_set< KEY, COMPARE >::upper_bound(const key_type & key) noexcept
{
    return upper_bound_impl(key);
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::const_iterator
ktl::flat_set< KEY, COMPARE >::upper_bound(const key_type & key) const noexcept
{
    return upper_bound_impl(key);
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::key_compare
ktl::flat_set< KEY, COMPARE >::key_comp() const noexcept
{
    return comp_;
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr ktl::flat_set< KEY, COMPARE >::value_compare
ktl::flat_set< KEY, COMPARE >::value_comp() const noexcept
{
    return comp_;
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr const ktl::flat_set< KEY, COMPARE >::container_type &
ktl::flat_set< KEY, COMPARE >::container() const noexcept
{
    return data_;
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr bool
ktl::flat_set< KEY, COMPARE >::operator==(const flat_set & rhs) noexcept
{
    return data_ == rhs.data_;
}

template < typename KEY, typename COMPARE >
[[nodiscard]] constexpr auto
ktl::flat_set< KEY, COMPARE >::operator<=>(const flat_set & rhs) noexcept
{
    return data_ <=> rhs.data_;
}

#endif
