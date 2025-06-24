#ifndef KOCHOU_ENGINE_MEMORY_POOL_HPP
#define KOCHOU_ENGINE_MEMORY_POOL_HPP

#include <vulkan/vulkan_raii.hpp>
#include <vector>

#include <kochou/engine/mesh/mesh.hpp>

namespace kochou::memory
{
  struct buffer_unit
  {
    vk::raii::Buffer buffer;
    vk::raii::DeviceMemory memory;
  };

  using pool = std::vector< buffer_unit >;

  template< mesh_type T >
  buffer_pool::iterator push_to_pool(buffer_pool & pool, T rhs)
  {
    auto [vbuffer, vmemory] = vk::utils::create_vertex_buffer< vk::utils::vertex3 >(__device, vertices);
    __vertex_buffer = std::move(vbuffer);
    __vertex_memory = std::move(vmemory);
  }
}

#endif
