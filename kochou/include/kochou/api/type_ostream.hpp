#ifndef KOCHOU_API_TYPE_OSTREAM_HPP
#define KOCHOU_API_TYPE_OSTREAM_HPP

#include <ostream>

#include <vulkan/vulkan.hpp>

#include <kochou/api/platform/gpu.hpp>

namespace kochou::api
{
  // PHYSICAL DEVICE
  std::ostream & operator<<(std::ostream & out, const vk::MemoryHeapFlags & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::MemoryPropertyFlags & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::MemoryHeap & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::MemoryType & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::PhysicalDeviceMemoryProperties & rhs);

  std::ostream & operator<<(std::ostream & out, const vk::PhysicalDeviceType & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::PhysicalDevice & rhs);

  // QUEUE
  std::ostream & operator<<(std::ostream & out, const vk::Extent2D & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::Extent3D & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::QueueFlags & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::QueueFamilyProperties & rhs);

  // LOGICAL DEVICE
  // todo

  // SURFACE
  std::ostream & operator<<(std::ostream & out, const vk::Format & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::ColorSpaceKHR & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::SurfaceFormatKHR & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::SurfaceTransformFlagsKHR & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::SurfaceTransformFlagBitsKHR & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::CompositeAlphaFlagsKHR & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::ImageUsageFlags & rhs);
  std::ostream & operator<<(std::ostream & out, const vk::SurfaceCapabilitiesKHR & rhs);

  // PLATFORM
  std::ostream & operator<<(std::ostream & out, const gpu_device & rhs);
}

#endif
