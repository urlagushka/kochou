#ifndef VULKAN_UTILS_DEVICE_HPP
#define VULKAN_UTILS_DEVICE_HPP

#include <vulkan/vulkan_raii.hpp>

namespace vk::utils
{
  class device
  {
    public:
      device(vk::raii::Instance & instance, vk::raii::SurfaceKHR & surface, bool is_debug);

      vk::raii::PhysicalDevice & get_physical_device();
      vk::raii::Device & get_device();
      vk::raii::Queue & get_graphics_queue();
      vk::raii::Queue & get_present_queue();

      vk::raii::ShaderModule create_shader_module(const vk::ShaderModuleCreateInfo & info) const;
      vk::raii::RenderPass create_render_pass(const vk::RenderPassCreateInfo & info) const;
      vk::raii::PipelineLayout create_pipeline_layout(const vk::PipelineLayoutCreateInfo & info) const;
      vk::raii::Pipeline create_graphics_pipeline(const vk::GraphicsPipelineCreateInfo & info) const;
      vk::raii::Buffer create_buffer(const vk::BufferCreateInfo & info) const;
      vk::raii::Framebuffer create_framebuffer(const vk::FramebufferCreateInfo & info) const;

      vk::raii::DeviceMemory allocate_memory(const vk::MemoryAllocateInfo & info) const;
      uint32_t find_memory_type(uint32_t type_filter, vk::MemoryPropertyFlags properties) const;

      uint32_t get_graphics_queue_index() const;
      uint32_t get_present_queue_index(vk::raii::SurfaceKHR & surface) const;

    private:
      vk::raii::PhysicalDevice __physical_device;
      vk::raii::Device __device;
      vk::raii::Queue __graphics_queue;
      vk::raii::Queue __present_queue;
  };
}

#endif
