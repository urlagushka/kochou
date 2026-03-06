#ifndef KTL_FIXED_STRING_HPP
#define KTL_FIXED_STRING_HPP

#include <cstddef>
#include <ostream>

namespace ktl
{
template < std::size_t SIZE >
struct fixed_string
{
    char        data[SIZE] = {};
    std::size_t size       = SIZE - 1;

    constexpr fixed_string(const char (&str)[SIZE])
    {
        for (std::size_t i = 0; i < size; ++i)
        {
            data[i] = str[i];
        }
    }

    template < std::size_t OTHER_SIZE >
    constexpr fixed_string(const char (&other)[OTHER_SIZE])
    {
        static_assert(OTHER_SIZE <= SIZE);
        size = OTHER_SIZE;

        for (std::size_t i = 0; i < size; ++i)
        {
            data[i] = other[i];
        }
        data[size] = '\0';
    }

    template < std::size_t OTHER_SIZE >
    constexpr fixed_string(const fixed_string< OTHER_SIZE > & other)
    {
        static_assert(OTHER_SIZE <= SIZE);
        size = OTHER_SIZE;

        for (std::size_t i = 0; i < size; ++i)
        {
            data[i] = other.data[i];
        }
        data[size] = '\0';
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
