#ifndef VULKAN_UTILS_WINDOW_HPP
#define VULKAN_UTILS_WINDOW_HPP

#include <cstddef>
#include <string_view>
#include <vulkan/vulkan_raii.hpp>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

namespace vk::utils
{
  class window
  {
    public:
      window(std::size_t width, std::size_t height, std::string_view title);
      ~window();

      vk::SurfaceKHR create_surface(vk::raii::Instance & instance);
      bool should_close() const;

    private:
      GLFWwindow * __window;
  };
}

#endif
