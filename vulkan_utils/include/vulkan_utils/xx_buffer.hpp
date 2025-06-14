#ifndef VULKAN_UTILS_XX_BUFFER_HPP
#define VULKAN_UTILS_XX_BUFFER_HPP

#include <vulkan_utils/device.hpp>
#include <vulkan_utils/render_pass.hpp>
#include <vulkan_utils/shaders.hpp>
#include <vulkan_utils/swapchain.hpp>
#include <vulkan_utils/vertices.hpp>

namespace vk::utils
{
  std::pair< vk::raii::Buffer, vk::raii::DeviceMemory >
  create_buffer(const device & dev, std::size_t size, vk::BufferUsageFlags uf, vk::MemoryPropertyFlags mf);

  template< vk::utils::vertex_type T >
  std::pair< vk::raii::Buffer, vk::raii::DeviceMemory >
  create_vertex_buffer(const device & dev, const std::vector< T > & vertices);

  std::pair< vk::raii::Buffer, vk::raii::DeviceMemory >
  create_index_buffer(const device & dev, const std::vector< uint32_t > & indices);

  std::pair< vk::raii::Buffer, vk::raii::DeviceMemory >
  create_uniform_buffer(const device & dev, std::size_t size);

  std::vector< vk::raii::Framebuffer >
  create_framebuffers(const device & dev, render_pass & rd, swapchain & sw);

  vk::raii::CommandBuffers
  create_cmd_buffers(device & dev, const vk::raii::CommandPool & pool, uint32_t size);

  vk::raii::CommandPool
  create_cmd_pool(device & dev);
}

template< vk::utils::vertex_type T >
std::pair< vk::raii::Buffer, vk::raii::DeviceMemory >
vk::utils::create_vertex_buffer(const device & dev, const std::vector< T > & vertices)
{
  const std::size_t size = sizeof(T) * vertices.size();
  auto [buffer, memory] = create_buffer(
    dev,
    size,
    vk::BufferUsageFlagBits::eVertexBuffer,
    vk::MemoryPropertyFlagBits::eHostVisible | vk::MemoryPropertyFlagBits::eHostCoherent
  );

  void * mapped = memory.mapMemory(0, size);
  memcpy(mapped, vertices.data(), size);
  memory.unmapMemory();

  return {std::move(buffer), std::move(memory)};
}

#endif
