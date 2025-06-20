#include <kochou/engine/core.hpp>

#include <vulkan_utils/xx_buffer.hpp>
#include <vulkan_utils/descriptors.hpp>

kochou::core::core(const info & m_info):
  __window(m_info.size.width, m_info.size.height, m_info.app_name),

  __instance(m_info.app_name, "egirl", m_info.is_vulkan_vl),
  __surface(__instance.get(), __window.create_surface(__instance.get())),
  __device(__instance.get(), __surface, true),
  __swapchain(__device, __surface),
  __render_pass(__device, __swapchain.get_surface_format().format),
  __cmd_pool(vk::utils::create_cmd_pool(__device)),

  __image_available_semaphore(__device.get_device(), vk::SemaphoreCreateInfo{}),
  __render_finished_semaphore(__device.get_device(), vk::SemaphoreCreateInfo{}),
  __in_flight_fence(__device.get_device(), vk::FenceCreateInfo(vk::FenceCreateFlagBits::eSignaled)),

  __descriptor_set_layout(VK_NULL_HANDLE),
  __descriptor_pool(VK_NULL_HANDLE),
  __descriptor_set(VK_NULL_HANDLE),

  __pipeline(__device, __swapchain.get_extent2d(), __render_pass.get(), __descriptor_set_layout),
  __framebuffers(vk::utils::create_framebuffers(__device, __render_pass, __swapchain)),
  __cmd_buffers(vk::utils::create_cmd_buffers(__device, __cmd_pool, __framebuffers.size())),

  __objects(0)
{
}

void
kochou::core::update_vertex()
{

}

void
kochou::core::update_index()
{

}

void
kochou::core::update_uniform()
{

}
