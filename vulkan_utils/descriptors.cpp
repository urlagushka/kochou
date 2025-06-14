#include <vulkan_utils/descriptors.hpp>

vk::raii::DescriptorSetLayout
vk::utils::create_descriptor_set_layout(device & dev)
{
  vk::DescriptorSetLayoutBinding binding = {
    0,
    vk::DescriptorType::eUniformBuffer,
    1,
    vk::ShaderStageFlagBits::eVertex,
    nullptr
  };

  vk::DescriptorSetLayoutCreateInfo info = {
    {},
    1,
    &binding
  };

  return dev.get_device().createDescriptorSetLayout(info);
}

vk::raii::DescriptorPool
vk::utils::create_descriptor_pool(device & dev)
{
  vk::DescriptorPoolSize size = {
    vk::DescriptorType::eUniformBuffer,
    1
  };

  vk::DescriptorPoolCreateInfo info = {
    {},
    1,
    1,
    &size
  };

  return dev.get_device().createDescriptorPool(info);
}
