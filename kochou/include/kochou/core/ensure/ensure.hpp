#ifndef KOCHOU_ENSURE_ENSURE_HPP
#define KOCHOU_ENSURE_ENSURE_HPP

#include <concepts>

#include <kochou/ktl/result.hpp>

#include <kochou/errc.hpp>
#include <kochou/core/context.hpp>

namespace kochou::core
{
    template< typename T >
    concept ensure_type = requires()
    {
        { T::apply() } -> std::same_as< errc >;
    };

    template< ensure_type T >
    class ensure
    {
        protected:
            ensure()
            {
                auto rc = T::satisfy();
                if (rc != errc::ok)
                {
                    context::get()->register_errc(rc);
                }
            }
    };
}

#endif
