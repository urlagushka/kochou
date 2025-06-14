#include <vulkan_utils/swapchain.hpp>
#include <vulkan_utils/io_handles.hpp>

#include <stdexcept>

vk::utils::swapchain::swapchain(device & dev, const vk::raii::SurfaceKHR & surface):
  __swapchain(VK_NULL_HANDLE),
  __images({}),
  __images_view(),
  __surface_format(),
  __extent2d()
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

vk::SurfaceFormatKHR
vk::utils::swapchain::get_color(vk::utils::device & device, const vk::raii::SurfaceKHR & surface)
{
  std::vector< vk::SurfaceFormatKHR > scs = device.get_physical_device().getSurfaceFormatsKHR(surface);
  return scs.back();
}
