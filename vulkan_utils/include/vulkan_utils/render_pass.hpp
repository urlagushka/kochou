#ifndef VULKAN_UTILS_RENDER_PASS_HPP
#define VULKAN_UTILS_RENDER_PASS_HPP

#include <vulkan/vulkan_raii.hpp>

#include <vulkan_utils/device.hpp>

namespace vk::utils
{
  class render_pass
  {
    public:
      render_pass(device & dev, vk::Format sw_format);

      vk::raii::RenderPass & get();

    private:
      vk::raii::RenderPass __render_pass;
  };
}

#endif
