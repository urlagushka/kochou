#ifndef VULKAN_UTILS_SHADERS_HPP
#define VULKAN_UTILS_SHADERS_HPP

#include <unordered_map>
#include <filesystem>
#include <string_view>

#include <vulkan/vulkan_raii.hpp>
#include <vulkan_utils/device.hpp>

namespace vk::utils
{
  namespace fs = std::filesystem;
  using shader = std::vector< char >;

  shader
  load_from_file(const fs::path & path);

  std::vector< shader >
  load_from_dir(const fs::path & path);

  vk::raii::ShaderModule
  create_shader_module(device & dev, const fs::path & path, vk::ShaderModuleCreateFlags flags = {});
  // hot reload
}

#endif
