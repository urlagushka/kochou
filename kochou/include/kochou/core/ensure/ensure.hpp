#ifndef KOCHOU_ENSURE_ENSURE_HPP
#define KOCHOU_ENSURE_ENSURE_HPP

#include <concepts>

#include "exception.hpp"
#include "result.hpp"
#include "errc.hpp"

#include <kochou/core/context.hpp>

namespace kochou::core
{
    template< typename T >
    concept ensure_type = requires()
    {
        { T::satisfy() } -> std::same_as< result< std::shared_ptr< void >, errc > >;
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
                    context::get()->register_error(result.take_err());
                }
            }
    };
}

#endif
