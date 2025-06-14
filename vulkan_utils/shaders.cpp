#include <vulkan_utils/shaders.hpp>

#include <fstream>
#include <stdexcept>

vk::utils::shader
vk::utils::load_from_file(const fs::path & path)
{
  if (path.extension() != ".spv")
  {
    throw std::runtime_error("bad shader file extention! (.spv requried)");
  }

  std::ifstream file(path, std::ios::ate | std::ios::binary);
  if (!file.is_open())
  {
    throw std::runtime_error("can't open shader file!");
  }

  std::size_t size = file.tellg();
  shader buff(size);

  file.seekg(0);
  file.read(buff.data(), size);
  file.close(); 

  return buff;
}

std::vector< vk::utils::shader >
vk::utils::load_from_dir(const fs::path & path)
{
  if (!fs::is_directory(path))
  {
    throw std::runtime_error("path is not directory!");
  }

  std::vector< shader > shaders;
  for (const auto & entry : fs::directory_iterator(path))
  {
    if (entry.is_regular_file())
    {
      shaders.push_back(load_from_file(entry.path()));
    }
  }

  return shaders;
}

vk::raii::ShaderModule
vk::utils::create_shader_module(device & dev, const fs::path & path, vk::ShaderModuleCreateFlags flags)
{
  auto shader_vec = load_from_file(path);
  vk::ShaderModuleCreateInfo shader_info = {
    flags,
    shader_vec.size(),
    reinterpret_cast<const uint32_t*>(shader_vec.data())
  };

  return dev.create_shader_module(shader_info);
}
