#ifndef KOCHOU_ENSURE_HPP
#define KOCHOU_ENSURE_HPP

#include <concepts>
#include <set>

#include "exception.hpp"
#include "result.hpp"
#include "errc.hpp"

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
                    throw exception(this, "ensure satisfy error!", result.take_err());
                }
            }
    };
}

#endif
