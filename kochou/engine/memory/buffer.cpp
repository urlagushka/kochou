#include <kochou/engine/memory/buffer.hpp>

kochou::buffer::buffer(const buffer_info & info):
  __device(info.dev),
  __capacity(info.capacity),
  __alignment(0),
  __is_resizable(info.is_resizable),

  __pool(),
  __memory(VK_NULL_HANDLE),
  __mapped(nullptr)
{
  vk::BufferCreateInfo buffer_info = {{}, __capacity, info.usage, info.mode};
  vk::raii::Buffer buffer = __device.create_buffer(buffer_info);

  vk::MemoryRequirements memory_req = buffer.getMemoryRequirements();
  vk::MemoryAllocateInfo memory_info = {
    memory_req.size,
    __device.find_memory_type(memory_req.memoryTypeBits, info.memory)
  };

  __alignment = memory_req.alignment;
  __memory = __device.allocate_memory(memory_info);
}

kochou::buffer::~buffer()
{

}
