#include <vulkan_utils/swapchain.hpp>
#include <vulkan_utils/io_handles.hpp>

#include <stdexcept>

vk::utils::swapchain::swapchain(device & dev, const vk::raii::SurfaceKHR & surface):
  __swapchain(VK_NULL_HANDLE),
  __images({}),
  __images_view(),
  __surface_format(),
  __extent2d(),

  __depth_image(VK_NULL_HANDLE),
  __depth_memory(VK_NULL_HANDLE),
  __depth_view(VK_NULL_HANDLE)
{
  vk::SurfaceCapabilitiesKHR cap = dev.get_physical_device().getSurfaceCapabilitiesKHR(surface);
  __extent2d = cap.currentExtent;
  __surface_format = get_color(dev, surface);
  vk::SwapchainCreateInfoKHR swapchain_info = {
    {},
    surface,
    std::clamp(2u, cap.minImageCount, cap.maxImageCount),
    __surface_format.format,
    __surface_format.colorSpace,
    __extent2d,
    1,
    vk::ImageUsageFlagBits::eColorAttachment,
    vk::SharingMode::eExclusive,
    {},
    cap.currentTransform,
    vk::CompositeAlphaFlagBitsKHR::eInherit,
    vk::PresentModeKHR::eFifo,
    VK_TRUE,
    VK_NULL_HANDLE
  };

  __swapchain = std::move(dev.get_device().createSwapchainKHR(swapchain_info));
  __images = __swapchain.getImages();

  for (const auto & image : __images)
  {
    vk::ImageViewCreateInfo view_create_info(
        {},
        image,
        vk::ImageViewType::e2D,
        __surface_format.format,
        vk::ComponentMapping(),
        vk::ImageSubresourceRange(vk::ImageAspectFlagBits::eColor, 0, 1, 0, 1)
    );

    __images_view.push_back(std::move(dev.get_device().createImageView(view_create_info)));
  }

  vk::Format depth_format = vk::Format::eD32Sfloat;
  vk::ImageCreateInfo image_info{
    {},
    vk::ImageType::e2D,
    depth_format,
    vk::Extent3D{ __extent2d.width, __extent2d.height, 1 },
    1,
    1,
    vk::SampleCountFlagBits::e1,
    vk::ImageTiling::eOptimal,
    vk::ImageUsageFlagBits::eDepthStencilAttachment,
    vk::SharingMode::eExclusive,
    {},
    vk::ImageLayout::eUndefined
  };

  __depth_image = dev.get_device().createImage(image_info);

  auto mem_requirements = __depth_image.getMemoryRequirements();

  // Ищем подходящий тип памяти
  vk::MemoryAllocateInfo alloc_info{
    mem_requirements.size,
    dev.find_memory_type(mem_requirements.memoryTypeBits, vk::MemoryPropertyFlagBits::eDeviceLocal)
  };

  __depth_memory = dev.get_device().allocateMemory(alloc_info);
  __depth_image.bindMemory(*__depth_memory, 0);

  // Создаём image view
  vk::ImageViewCreateInfo view_info{
    {},
    *__depth_image,
    vk::ImageViewType::e2D,
    depth_format,
    vk::ComponentMapping{},
    vk::ImageSubresourceRange{
      vk::ImageAspectFlagBits::eDepth,
      0, 1, 0, 1
    }
  };

  __depth_view = dev.get_device().createImageView(view_info);
}

vk::raii::SwapchainKHR &
vk::utils::swapchain::get_swapchain()
{
  return __swapchain;
}

std::vector< vk::Image >
vk::utils::swapchain::get_images() const
{
  return __images;
}

std::vector< vk::raii::ImageView > &
vk::utils::swapchain::get_images_view()
{
  return __images_view;
}

vk::SurfaceFormatKHR
vk::utils::swapchain::get_surface_format() const
{
  return __surface_format;
}

vk::Extent2D
vk::utils::swapchain::get_extent2d() const
{
  return __extent2d;
}

vk::raii::ImageView &
vk::utils::swapchain::get_depth_view()
{
  return __depth_view;
}

vk::SurfaceFormatKHR
vk::utils::swapchain::get_color(vk::utils::device & device, const vk::raii::SurfaceKHR & surface)
{
  std::vector< vk::SurfaceFormatKHR > scs = device.get_physical_device().getSurfaceFormatsKHR(surface);
  return scs.back();
}
