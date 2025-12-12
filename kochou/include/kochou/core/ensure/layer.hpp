#ifndef KOCHOU_CORE_ENSURE_VK_LAYER_HPP
#define KOCHOU_CORE_ENSURE_VK_LAYER_HPP

#include <kochou/ktl/fixed_string.hpp>
#include <kochou/errc.hpp>

namespace kochou::core
{
    template< ktl::fixed_string NAME >
    class vk_layer final
    {
        public:
            static errc satisfy();
        private:
    };
}

#endif
