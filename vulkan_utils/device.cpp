#include <vulkan_utils/device.hpp>

#include <stdexcept>
#include <limits>
#include <set>

vk::utils::device::device(vk::raii::Instance & instance, vk::raii::SurfaceKHR & surface, bool is_debug):
  __physical_device(VK_NULL_HANDLE),
  __device(VK_NULL_HANDLE),
  __graphics_queue(VK_NULL_HANDLE),
  __present_queue(VK_NULL_HANDLE)
{
  __physical_device = std::move(instance.enumeratePhysicalDevices().front());
  uint32_t graphics_queue_index = get_graphics_queue_index();
  uint32_t present_queue_index = get_present_queue_index(surface);
  std::set< uint32_t > queues_index = {graphics_queue_index, present_queue_index};

  std::vector< vk::DeviceQueueCreateInfo > queues_info = {};
  float queue_priority = 1.0f;
  for (uint32_t i : queues_index)
  {
    vk::DeviceQueueCreateInfo queue_info = {
      {},
      i,
      1,
      &queue_priority,
    };
    queues_info.push_back(queue_info);
  }

  vk::DeviceCreateInfo device_info = {};
  std::vector< const char * > device_extensions;
  #if defined(__APPLE__)
    device_extensions = {
      "VK_KHR_swapchain",
      "VK_KHR_portability_subset"
    };
  #else
    device_extensions = {
      "VK_KHR_swapchain"
    };
  #endif
  device_info.enabledExtensionCount = device_extensions.size();
  device_info.ppEnabledExtensionNames = device_extensions.data();
  device_info.queueCreateInfoCount = queues_info.size();
  device_info.pQueueCreateInfos = queues_info.data();
  std::vector< const char * > device_layers = {};
  if (is_debug)
  {
    device_layers = {
      "VK_LAYER_KHRONOS_validation"
    };

    device_info.enabledLayerCount = device_layers.size();
    device_info.ppEnabledLayerNames = device_layers.data();
  }

  __device = vk::raii::Device(__physical_device, device_info);
  
  __graphics_queue = __device.getQueue(graphics_queue_index, 0);
  __present_queue = __device.getQueue(present_queue_index, 0);
}

vk::raii::PhysicalDevice &
vk::utils::device::get_physical_device()
{
  return __physical_device;
}

vk::raii::Device &
vk::utils::device::get_device()
{
  return __device;
}

vk::raii::Queue &
vk::utils::device::get_graphics_queue()
{
  return __graphics_queue;
}

vk::raii::Queue &
vk::utils::device::get_present_queue()
{
  return __present_queue;
}

uint32_t
vk::utils::device::get_graphics_queue_index() const
{
  uint32_t graphics_queue_index = std::numeric_limits< uint32_t >::max();
  std::vector< vk::QueueFamilyProperties > qqs = __physical_device.getQueueFamilyProperties();

  for (uint32_t i = 0; i < qqs.size(); ++i)
  {
    if (qqs[i].queueFlags & vk::QueueFlagBits::eGraphics)
    {
      graphics_queue_index = i;
      break;
    }
  }
  if (graphics_queue_index == std::numeric_limits< uint32_t >::max())
  {
    throw std::runtime_error("graphics queue not found!");
  }

  return graphics_queue_index;
}

uint32_t
vk::utils::device::get_present_queue_index(vk::raii::SurfaceKHR & surface) const
{
  uint32_t present_queue_index = std::numeric_limits< uint32_t >::max();
  std::vector< vk::QueueFamilyProperties > qqs = __physical_device.getQueueFamilyProperties();

  for (uint32_t i = 0; i < qqs.size(); ++i)
  {
    if (__physical_device.getSurfaceSupportKHR(i, surface))
    {
      present_queue_index = i;
      break;
    }
  }
  if (present_queue_index == std::numeric_limits< uint32_t >::max())
  {
    throw std::runtime_error("present queue not found!");
  }

  return present_queue_index;
}

vk::raii::ShaderModule
vk::utils::device::create_shader_module(const vk::ShaderModuleCreateInfo & info) const
{
  return __device.createShaderModule(info);
}

vk::raii::RenderPass
vk::utils::device::create_render_pass(const vk::RenderPassCreateInfo & info) const
{
  return __device.createRenderPass(info);
}

vk::raii::PipelineLayout
vk::utils::device::create_pipeline_layout(const vk::PipelineLayoutCreateInfo & info) const
{
  return __device.createPipelineLayout(info);
}

vk::raii::Pipeline
vk::utils::device::create_graphics_pipeline(const vk::GraphicsPipelineCreateInfo & info) const
{
  return __device.createGraphicsPipeline(VK_NULL_HANDLE, info);
}

vk::raii::Buffer
vk::utils::device::create_buffer(const vk::BufferCreateInfo & info) const
{
  return __device.createBuffer(info);
}

vk::raii::Framebuffer
vk::utils::device::create_framebuffer(const vk::FramebufferCreateInfo & info) const
{
  return __device.createFramebuffer(info);
}

vk::raii::DeviceMemory
vk::utils::device::allocate_memory(const vk::MemoryAllocateInfo & info) const
{
  return __device.allocateMemory(info);
}

uint32_t
vk::utils::device::find_memory_type(uint32_t type_filter, vk::MemoryPropertyFlags properties) const
{
  vk::PhysicalDeviceMemoryProperties mempp = __physical_device.getMemoryProperties();

  for (uint32_t i = 0; i < mempp.memoryTypeCount; ++i)
  {
    if ((type_filter & (1 << i)) && (mempp.memoryTypes[i].propertyFlags & properties) == properties)
    {
      return i;
    }
  }

  throw std::runtime_error("failed to find suitable memory type!");
}