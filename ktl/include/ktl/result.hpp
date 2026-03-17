#ifndef KTL_RESULT_HPP
#define KTL_RESULT_HPP

#include <cstdlib>
#include <variant>

#include <ktl/errc.hpp>

namespace ktl
{
template < typename OK, typename ERR >
class result
{
public:
    using ok_type    = OK;
    using err_type   = ERR;
    using value_type = std::variant< ok_type, err_type >;

    constexpr result(ok_type _value) : value_(std::move(_value)) {}
    constexpr result(err_type _value) : value_(_value) {}

    constexpr bool
    has_value() const noexcept
    {
        return std::holds_alternative< ok_type >(value_);
    }

    constexpr const ok_type &
    view_value() const noexcept
    {
        if (!has_value())
        {
            std::abort();
        }
        return std::get< ok_type >(value_);
    }

    constexpr ok_type &&
    take_value() noexcept
    {
        if (!has_value())
        {
            std::abort();
        }
        return std::move(std::get< ok_type >(value_));
    }

    constexpr err_type
    error() const noexcept
    {
        if (has_value())
        {
            std::abort();
        }
        return std::get< err_type >(value_);
    }

private:
    value_type value_;
};
} // namespace ktl

#endif
