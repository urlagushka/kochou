#ifndef KOCHOU_CORE_VULKAN_CONTEXT_HPP
#define KOCHOU_CORE_VULKAN_CONTEXT_HPP

#include <string_view>

#include <vulkan/vulkan_raii.hpp>

#include "kochou/utils/external.hpp"

namespace kochou::core
{
    class context final
        : external< hold::unique, context >
    {
        private:
            context(std::string_view app_name, /* req list */ bool is_debug);

            void build_instance(std::string_view app_name, vk_api_version api, bool is_debug = false);

            vk::raii::Instance __instance;
    };
}

#endif
 