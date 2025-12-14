#ifndef KOCHOU_CORE_ENSURE_FEATURE_HPP
#define KOCHOU_CORE_ENSURE_FEATURE_HPP

#include <kochou/errc.hpp>

namespace kochou::core
{
    struct no_feature final
    {};

    template< typename FEATURE_TYPE, FEATURE_TYPE FEATURE >
    struct feature final
    {
        using type = FEATURE_TYPE;
        static FEATURE_TYPE get() noexcept
        {
            return FEATURE;
        }

        static errc apply() noexcept;
    };
}

#endif
