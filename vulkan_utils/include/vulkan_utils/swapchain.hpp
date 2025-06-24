#ifndef VULKAN_UTILS_SWAPCHAIN_HPP
#define VULKAN_UTILS_SWAPCHAIN_HPP

#include <vulkan/vulkan_raii.hpp>
#include <vulkan_utils/device.hpp>

namespace vk::utils
{
  class swapchain
  {
    public:
      swapchain(vk::utils::device & device, const vk::raii::SurfaceKHR & surface);
  
      vk::raii::SwapchainKHR & get_swapchain();
      std::vector< vk::Image > get_images() const;
      std::vector< vk::raii::ImageView > & get_images_view();
      vk::SurfaceFormatKHR get_surface_format() const;
      vk::Extent2D get_extent2d() const;

      vk::raii::ImageView & get_depth_view();
  
    private:
      vk::SurfaceFormatKHR get_color(vk::utils::device & device, const vk::raii::SurfaceKHR & surface);

      vk::raii::SwapchainKHR __swapchain;
      std::vector< vk::Image > __images;
      std::vector< vk::raii::ImageView > __images_view;
      vk::SurfaceFormatKHR __surface_format;
      vk::Extent2D __extent2d;

      vk::raii::Image __depth_image;
      vk::raii::DeviceMemory __depth_memory;
      vk::raii::ImageView  __depth_view;
  };
}

#endif
