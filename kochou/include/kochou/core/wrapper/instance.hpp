#ifndef KOCHOU_CORE_WRAPPER_INSTANCE_HPP
#define KOCHOU_CORE_WRAPPER_INSTANCE_HPP

#include "wrapper.hpp"

namespace kochou::core
{
    class instance final
        : wrapper< instance >
    {
        public:
            instance() = delete;

        private:
            vk::raii::Instance vk_instance_;
    }
}

#endif
