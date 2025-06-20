#ifndef KOCHOU_CORE_STATIC_BUFFER_HPP
#define KOCHOU_CORE_STATIC_BUFFER_HPP

#include <vulkan/vulkan_raii.hpp>
#include <glm/glm.hpp>

#include <vulkan_utils/device.hpp>

/*
kochou::buffer_info vertex_info = {
  __device,
  vk::MemoryPropertyFlagBits::eDeviceLocal,
  sizeof(kochou::cube::vertex) * 100,
  sizeof(kochou::cube::vertex)
};
kochou::buffer vertex_buffer(vertex_info);

kochou::buffer_info index_info = {
  __device,
  vk::MemoryPropertyFlagBits::eHostVisible | vk::MemoryPropertyFlagBits::eHostCoherent,
  sizeof(kochou::cube::index) * 100,
  sizeof(kochou::cube::index)
};
kochou::buffer index_buffer(index_info);

kochou::buffer_info uniform_info = {
  __device,
  vk::MemoryPropertyFlagBits::eHostVisible | vk::MemoryPropertyFlagBits::eHostCoherent,
  sizeof(kochou::cube::uniform) * 100,
  sizeof(kochou::cube::uniform)
};
kochou::buffer uniform_buffer(uniform_info);
*/

namespace kochou
{
  struct memory_block
  {
    std::size_t offset;
    std::size_t size;
    bool is_available;

    vk::raii::Buffer buffer;
  };

  struct buffer_info
  {
    vk::utils::device & dev;
    vk::BufferUsageFlagBits usage;
    vk::SharingMode mode;
    vk::MemoryPropertyFlagBits memory;
    std::size_t capacity;
    bool is_resizable;
  };

  class buffer
  {
    using it = std::vector< memory_block >::iterator;
    using cit = std::vector< memory_block >::const_iterator;

    public:
      buffer() = delete;
      buffer(const buffer_info & info);
      buffer(const buffer & rhs) = delete; // todo
      buffer(buffer && rhs) = delete; // todo
      buffer & operator=(const buffer & rhs) = delete; // todo
      buffer & operator=(buffer && rhs) = delete; // todo
      ~buffer();

      // std::size_t allocate();
      // void free();

    private:
      vk::utils::device & __device;
      std::size_t __capacity;
      std::size_t __alignment;
      bool __is_resizable;

      std::vector< memory_block > __pool;
      vk::raii::DeviceMemory __memory;
      void * __mapped;
  };
}

#endif
