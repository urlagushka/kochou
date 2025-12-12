#ifndef KOCHOU_EXTERNAL_EXTERNAL_HPP
#define KOCHOU_EXTERNAL_EXTERNAL_HPP

#include <stdexcept>
#include <cassert>

#include "kochou/exception.hpp"
#include "kochou/errc.hpp"

#include <kochou/ktl/result.hpp>
#include <kochou/ktl/memory.hpp>

namespace kochou::core
{
    enum class hold
    {
        unique,
        shared
    };

    template< hold, typename >
    class external {};

    template< typename T >
    struct external< hold::unique, T >
    {
        using ptr_type = ktl::memory::unique_ptr< T >;
        using result_type = ktl::result< ptr_type, errc >;

        external() = default;
        ~external() = default;

        external(const external &) = delete;
        external(external &&) = delete;
        external & operator=(const external &) = delete;
        external & operator=(external &&) = delete;

        template< typename ... ARGS >
        static result_type make(ARGS &&... _args) noexcept
        {
            auto result = ktl::memory::make_unique< T >(std::forward< ARGS >(_args)...);
            if (result.is_err())
            {
                return ktl::err{result.take_err()};
            }
            return ktl::ok{result.take_ok()};
        }
    };

    template< typename T >
    struct external< hold::shared, T >
    {
        using ptr_type = ktl::memory::shared_ptr< T >;
        using result_type = ktl::result< ptr_type, errc >;

        external() = default;
        ~external() = default;

        external(const external &) = delete;
        external(external &&) = delete;
        external & operator=(const external &) = delete;
        external & operator=(external &&) = delete;

        template< typename ... ARGS >
        static result_type make(ARGS &&... _args) noexcept
        {
            auto result = ktl::memory::make_shared< T >(std::forward< ARGS >(_args)...);
            if (result.is_err())
            {
                return ktl::err{result.take_err()};
            }
            return ktl::ok{result.take_ok()};
        }
    };
}

#endif
