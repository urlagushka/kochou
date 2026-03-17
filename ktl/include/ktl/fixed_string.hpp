#ifndef KTL_FIXED_STRING_HPP
#define KTL_FIXED_STRING_HPP

#include <ostream>

#include <ktl/type.hpp>

namespace ktl
{
template < ktl::usize SIZE >
struct fixed_string
{
    char       data[SIZE] = {};
    ktl::usize size       = SIZE - 1;

    constexpr fixed_string(const char (&str)[SIZE])
    {
        for (ktl::usize i = 0; i < size; ++i)
        {
            data[i] = str[i];
        }
    }

    template < ktl::usize OTHER_SIZE >
    constexpr fixed_string(const char (&other)[OTHER_SIZE])
    {
        static_assert(OTHER_SIZE <= SIZE);
        size = OTHER_SIZE;

        for (ktl::usize i = 0; i < size; ++i)
        {
            data[i] = other[i];
        }
        data[size] = '\0';
    }

    template < ktl::usize OTHER_SIZE >
    constexpr fixed_string(const fixed_string< OTHER_SIZE > & other)
    {
        static_assert(OTHER_SIZE <= SIZE);
        size = OTHER_SIZE;

        for (ktl::usize i = 0; i < size; ++i)
        {
            data[i] = other.data[i];
        }
        data[size] = '\0';
    }

    fixed_string(const char * _other)
    {
        ktl::usize other_size = strlen(_other);
        klt::i32   max_size   = (other_size > SIZE) ? SIZE : other_size;
        size                  = max_size;

        memcpy(&data, _other, max_size);
    }
};
} // namespace ktl

template < std::size_t SIZE >
std::ostream &
operator<<(std::ostream & _out, ktl::fixed_string< SIZE > _value)
{
    return _out << _value.data;
}

#endif
