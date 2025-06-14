#ifndef KOCHOU_CORE_UNIFORM_BUFFER_HPP
#define KOCHOU_CORE_UNIFORM_BUFFER_HPP

#include <vulkan/vulkan_raii.hpp>
#include <glm/glm.hpp>

#include <kochou/engine/mesh.hpp>

namespace kochou
{
  struct uniform
  {
    glm::mat4 model;
    glm::mat4 view;
    glm::mat4 proj;
    glm::vec3 color;
  };

  class static_uniform_buffer
  {
    public:
      static_uniform_buffer(const std::initializer_list< shared_mesh > & meshs);

    private:
      vk::raii::Buffer __buffer;
      vk::raii::DeviceMemory __memory;
      void * __mapped;
  };

  class dynamic_uniform_buffer
  {}; // todo
}

#endif
