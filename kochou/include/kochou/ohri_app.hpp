#ifndef OHRI_APP_HPP
#define OHRI_APP_HPP

#include <vulkan/vulkan_raii.hpp>
#include <vulkan_utils/instance.hpp>
#include <vulkan_utils/device.hpp>
#include <vulkan_utils/window.hpp>
#include <vulkan_utils/swapchain.hpp>
#include <vulkan_utils/pipeline.hpp>
#include <vulkan_utils/render_pass.hpp>

namespace ohri
{
  class app
  {
    public:
      app();
      ~app();

      void prepare();
      void draw();
      bool should_close();
    
    private:
      vk::utils::instance __instance;
      vk::utils::window __window;
      vk::raii::SurfaceKHR __surface;
      vk::utils::device __device;

      vk::raii::Buffer __vertex_buffer;
      vk::raii::DeviceMemory __vertex_memory;
      vk::raii::Buffer __index_buffer;
      vk::raii::DeviceMemory __index_memory;
      vk::raii::Buffer __uniform_buffer;
      vk::raii::DeviceMemory __uniform_memory;
      void * __uniform_mapped;
      vk::raii::DescriptorSetLayout __descriptor_set_layout;
      vk::raii::DescriptorPool __descriptor_pool;
      vk::raii::DescriptorSet __descriptor_set;

      vk::utils::swapchain __swapchain;
      vk::utils::render_pass __render_pass;
      vk::utils::pipeline __pipeline;
      vk::raii::Semaphore __image_available_semaphore;
      vk::raii::Semaphore __render_finished_semaphore;
      vk::raii::Fence __in_flight_fence;
      std::vector< vk::raii::Framebuffer > __framebuffers;
      vk::raii::CommandPool __cmd_pool;
      vk::raii::CommandBuffers __cmd_buffers;
  };
}

#endif
