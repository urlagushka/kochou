#ifndef VULKAN_UTILS_INSTANCE_HPP
#define VULKAN_UTILS_INSTANCE_HPP

#include <string_view>
#include <vulkan/vulkan_raii.hpp>

namespace vk::utils
{
  class instance
  {
    public:
      instance(std::string_view app, std::string_view engine, bool is_debug = false);

    private:
      vk::raii::Instance __instance;
  };
}

#endif
