#ifndef KOCHOU_FIXED_STRING_HPP
#define KOCHOU_FIXED_STRING_HPP

#include <cstddef>

namespace ktl
{
    template< std::size_t SIZE >
    struct fixed_string
    {
        char data[SIZE]{};
        std::size_t size = SIZE;

        constexpr fixed_string(const char (&str)[SIZE])
        {
            for (std::size_t i = 0; i < SIZE; ++i)
            {
                data[i] = str[i];
            }
        }
    };
}

#endif
