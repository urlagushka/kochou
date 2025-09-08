#ifndef KOCHOU_MODULE_CULLING_HPP
#define KOCHOU_MODULE_CULLING_HPP

#include "kochou/wrapper/device.hpp"
#include "kochou/utils/require.hpp"

namespace kochou
{
    class culling
        : command< api::compute, api::high >
        , require< api::mesh >
    {
        public:
            culling(sptr< device > dev)
                : command(dev)
                , require(dev)
            {}

            result operator()()
            {
                // culling module
            }
    };
}

#endif
