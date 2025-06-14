#ifndef VULKAN_UTILS_DESCRIPTORS_HPP
#define VULKAN_UTILS_DESCRIPTORS_HPP

#include <vulkan/vulkan_raii.hpp>

#include <vulkan_utils/device.hpp>

namespace vk::utils
{
  vk::raii::DescriptorSetLayout
  create_descriptor_set_layout(device & dev);

  vk::raii::DescriptorPool
  create_descriptor_pool(device & dev);
}

#endif
