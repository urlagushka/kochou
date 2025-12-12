#ifndef KOCHOU_ENSURE_ENSURE_HPP
#define KOCHOU_ENSURE_ENSURE_HPP

#include <concepts>

#include <kochou/ktl/result.hpp>

#include <kochou/errc.hpp>
#include <kochou/core/context.hpp>

namespace kochou::core
{
    template< typename T, typename OK_TYPE >
    concept ensure_type = requires()
    {
        { T::satisfy() } -> std::same_as< ktl::result< OK_TYPE, errc > >;
    };

    template< ensure_type T >
    class ensure
    {
        protected:
            ensure()
            {
                auto result = T::satisfy();
                if (result.is_err())
                {
                    context::get()->register_error(result.take_err()); // what src?
                }
                /*
                if debug -> log error, else nothing?
                */
            }
    };


}

#endif
