#ifndef KOCHOU_CORE_STATIC_BUFFER_HPP
#define KOCHOU_CORE_STATIC_BUFFER_HPP

#include <vulkan/vulkan_raii.hpp>
#include <glm/glm.hpp>

/*
kochou::buffer_info info = {
  __device,
  vk::MemoryPropertyFlagBits::eDeviceLocal,
  4096
};

kochou::buffer vertex_buffer(info);
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

  template< typename T >
  class static_buffer
  {
    using bufferpool = std::vector< memory_block >;
    public:
      static_buffer() = delete;
      static_buffer(std::size_t cap, vk::MemoryPropertyFlags memflags);
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
