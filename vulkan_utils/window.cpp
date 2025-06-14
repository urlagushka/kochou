#include <vulkan_utils/window.hpp>

#include <stdexcept>

vk::utils::window::window(std::size_t width, std::size_t height, std::string_view title):
  __window(nullptr)
{
  if (!glfwInit())
  {
    throw std::runtime_error("glfw init failed!");
  }

  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  __window = glfwCreateWindow(width, height, title.data(), nullptr, nullptr);
  if (!__window)
  {
    glfwTerminate();
    throw std::runtime_error("glfw window is null!");
  }
}

vk::utils::window::~window()
{
  glfwDestroyWindow(__window);
  glfwTerminate();
}

vk::SurfaceKHR
vk::utils::window::create_surface(vk::raii::Instance & instance)
{
  VkSurfaceKHR surface;
  VkResult result = glfwCreateWindowSurface(*instance, __window, nullptr, &surface);
  if (result != VK_SUCCESS || !surface)
  {
    const char * description;
    int code = glfwGetError(&description);
    throw std::runtime_error("window | surface is null! result: " + std::to_string(result) + description + std::to_string(code));
  }
  return surface;
}

bool
vk::utils::window::should_close() const
{
  return glfwWindowShouldClose(__window);
}
