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
  template< typename T >
  struct memory_block
  {
    std::size_t offset;
    const std::size_t size = sizeof(T);
    bool is_available;

    vk::raii::Buffer buffer;
  };

  struct buffer_info
  {
    vk::utils::device & dev;
    vk::MemoryPropertyFlags flags;
    std::size_t capacity;
    std::size_t align;
  };

  template< typename T >
  class static_buffer
  {
    using bufferpool = std::vector< memory_block >;
    public:
      static_buffer() = delete;
      static_buffer(const buffer_info & info);
      static_buffer(const static_buffer< T > & rhs);
      static_buffer(static_buffer< T > && rhs);
      static_buffer< T > & operator=(const static_buffer< T > & rhs);
      static_buffer< T > & operator=(static_buffer< T > && rhs);
      ~static_buffer();

      bufferpool::iterator begin();
      bufferpool::iterator end();
      bufferpool::const_iterator cbegin();
      bufferpool::const_iterator cend();

      void take();
      void free();

    private:
      std::size_t __cap;
      std::size_t __size;

      bufferpool __pool;
      vk::raii::DeviceMemory __memory;
      void * __mapped;
  };
}

#endif
