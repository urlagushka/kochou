#ifndef KOCHOU_ENGINE_CORE_HPP
#define KOCHOU_ENGINE_CORE_HPP

#include <kochou/engine/info.hpp>
#include <kochou/engine/object.hpp>
#include <kochou/engine/uniform_buffer.hpp>

#include <vulkan/vulkan_raii.hpp>
#include <vulkan_utils/instance.hpp>
#include <vulkan_utils/window.hpp>
#include <vulkan_utils/device.hpp>
#include <vulkan_utils/swapchain.hpp>
#include <vulkan_utils/render_pass.hpp>
#include <vulkan_utils/pipeline.hpp>

namespace kochou
{
  class core
  {
    friend struct object;

    public:
      core(const info & m_info);
      core() = delete;
      core(const core &) = delete;
      core(core &&) = delete;
      core & operator=(const core &) = delete;
      core & operator=(core &&) = delete;

    private:
      void update_vertex();
      void update_index();
      void update_uniform();

      vk::utils::window __window;

      vk::utils::instance __instance;
      vk::raii::SurfaceKHR __surface;
      vk::utils::device __device;
      vk::utils::swapchain __swapchain;
      vk::utils::render_pass __render_pass;
      vk::raii::CommandPool __cmd_pool;

      vk::raii::Semaphore __image_available_semaphore;
      vk::raii::Semaphore __render_finished_semaphore;
      vk::raii::Fence __in_flight_fence;

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
      
      vk::utils::pipeline __pipeline;
      std::vector< vk::raii::Framebuffer > __framebuffers;
      vk::raii::CommandBuffers __cmd_buffers;

      std::unordered_map< std::size_t, shared_object_interface > __objects;
  };
}

#endif
