#include <vulkan_utils/xx_buffer.hpp>

std::pair< vk::raii::Buffer, vk::raii::DeviceMemory >
vk::utils::create_buffer(const device & dev, std::size_t size, vk::BufferUsageFlags uf, vk::MemoryPropertyFlags mf)
{
  vk::BufferCreateInfo buffer_info = {{}, size, uf, vk::SharingMode::eExclusive};
  vk::raii::Buffer buffer = dev.create_buffer(buffer_info);

  vk::MemoryRequirements memory_req = buffer.getMemoryRequirements();
  vk::MemoryAllocateInfo memory_info = {
    memory_req.size,
    dev.find_memory_type(memory_req.memoryTypeBits, mf)
  };

  vk::raii::DeviceMemory memory = dev.allocate_memory(memory_info);
  buffer.bindMemory(*memory, 0);

  return {std::move(buffer), std::move(memory)};
}

std::pair< vk::raii::Buffer, vk::raii::DeviceMemory >
vk::utils::create_index_buffer(const device & dev, const std::vector< uint32_t > & indices)
{
  const std::size_t size = sizeof(uint32_t) * indices.size();
  auto [buffer, memory] = create_buffer(
    dev,
    size,
    vk::BufferUsageFlagBits::eIndexBuffer,
    vk::MemoryPropertyFlagBits::eHostVisible | vk::MemoryPropertyFlagBits::eHostCoherent
  );

  void * mapped = memory.mapMemory(0, size);
  memcpy(mapped, indices.data(), size);
  memory.unmapMemory();

  return {std::move(buffer), std::move(memory)};
}

std::pair< vk::raii::Buffer, vk::raii::DeviceMemory >
vk::utils::create_uniform_buffer(const device & dev, std::size_t size)
{
  return create_buffer(
    dev,
    size,
    vk::BufferUsageFlagBits::eUniformBuffer,
    vk::MemoryPropertyFlagBits::eHostVisible | vk::MemoryPropertyFlagBits::eHostCoherent
  );
}

std::vector< vk::raii::Framebuffer >
vk::utils::create_framebuffers(const device & dev, render_pass & rd, swapchain & sw)
{
  std::vector<vk::raii::Framebuffer> framebuffers;
  vk::raii::ImageView & depth_view = sw.get_depth_view();

  for (const auto & image_view : sw.get_images_view())
  {
    std::array< vk::ImageView, 2 > atchs = {
      *image_view,
      *depth_view
    };

    vk::FramebufferCreateInfo framebuffer_info{
      {},
      *(rd.get()),
      static_cast< uint32_t >(atchs.size()),
      atchs.data(),
      sw.get_extent2d().width,
      sw.get_extent2d().height,
      1
    };

    auto framebuffer = dev.create_framebuffer(framebuffer_info);
    framebuffers.push_back(std::move(framebuffer));
  }

  return framebuffers;
}

vk::raii::CommandBuffers
vk::utils::create_cmd_buffers(device & dev, const vk::raii::CommandPool & pool, uint32_t size)
{
  vk::CommandBufferAllocateInfo alloc_info{
    *pool,
    vk::CommandBufferLevel::ePrimary,
    size
  };
  return vk::raii::CommandBuffers(dev.get_device(), alloc_info);
}

vk::raii::CommandPool
vk::utils::create_cmd_pool(device & dev)
{
  vk::CommandPoolCreateInfo cmd_pool_info{
    vk::CommandPoolCreateFlagBits::eResetCommandBuffer,
    dev.get_graphics_queue_index()
  };
  return dev.get_device().createCommandPool(cmd_pool_info);
}
