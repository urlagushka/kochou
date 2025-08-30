#include <vulkan_utils/instance.hpp>

#include <vector>

vk::utils::instance::instance(std::string_view app, std::string_view engine, bool is_debug):
  __instance(VK_NULL_HANDLE)
{
  vk::ApplicationInfo app_info(app.data(), 1, engine.data(), 1, VK_API_VERSION_1_3);

  vk::InstanceCreateInfo instance_info({}, &app_info);
  std::vector< const char * > app_extensions;
  std::vector< const char * > app_layers;

  #if defined(__linux__)
    app_extensions = {
      VK_KHR_SURFACE_EXTENSION_NAME,
      "VK_EXT_mesh_shader",
      "VK_KHR_xcb_surface",
      "VK_EXT_swapchain_colorspace"
    };
    instance_info.enabledExtensionCount = static_cast< uint32_t >(app_extensions.size());
    instance_info.ppEnabledExtensionNames = app_extensions.data();
  #else
    assert(false && "platform not supported!");
  #endif

  if (is_debug)
  {
    app_layers = {
      "VK_LAYER_KHRONOS_validation"
    };

    instance_info.enabledLayerCount = static_cast< uint32_t >(app_layers.size());
    instance_info.ppEnabledLayerNames = app_layers.data();
  }

  __instance = vk::raii::Instance({}, instance_info);
}
