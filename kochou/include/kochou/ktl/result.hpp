#ifndef KTL_RESULT_HPP
#define KTL_RESULT_HPP

#include <variant>

namespace kochou
{
    template< typename T >
    struct ok
    {
        explicit constexpr ok(T _value)
            : value(std::move(_value))
        {}

        T value;
    };

    template< typename T >
    struct err
    {
        explicit constexpr err(T _value)
            : value(std::move(_value))
        {}

        T value;
    };

    template< typename OK, typename ERR >
    class result
    {
        public:
            using ok_type = ok< OK >;
            using err_type = err< ERR >;
            using value_type = std::variant< ok_type, err_type >;

            constexpr result(ok_type _value)
                : value_(std::move(_value))
            {}

            constexpr result(err_type _value)
                : value_(std::move(_value))
            {}

            constexpr bool is_ok() const
            {
                return std::holds_alternative< ok_type >(value_);
            }

            constexpr bool is_err() const
            {
                return std::holds_alternative< err_type >(value_);
            }

            constexpr const OK & view_ok() const
            {
                return std::get< ok_type >(value_).value;
            }

            constexpr const ERR & view_err() const
            {
                return std::get< err_type >(value_).value;
            }

            constexpr OK && take_ok()
            {
                return std::move(std::get< ok_type >(value_).value);
            }

            constexpr ERR && take_err()
            {
                return std::move(std::get< err_type >(value_).value);
            }

        private:
            value_type value_;
    };
}

#endif
