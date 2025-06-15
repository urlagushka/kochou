#ifndef KOCHOU_CORE_DYNAMIC_BUFFER_HPP
#define KOCHOU_CORE_DYNAMIC_BUFFER_HPP

#include <vulkan/vulkan_raii.hpp>
#include <glm/glm.hpp>

namespace kochou
{
  class dynamic_buffer
  {
    public:
      dynamic_buffer(/* ??? */);

    private:
      vk::raii::Buffer __buffer;
      vk::raii::DeviceMemory __memory;
      void * __mapped;
  };
}

#endif
