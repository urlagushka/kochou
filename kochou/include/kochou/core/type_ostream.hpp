#ifndef KOCHOU_CORE_TYPE_OSTREAM_HPP
#define KOCHOU_CORE_TYPE_OSTREAM_HPP

#include <ostream>

#include <vulkan/vulkan.hpp>

// #include <kochou/api/platform/gpu.hpp>
#include <kochou/core/extension.hpp>

namespace kochou::core
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

  // KOCHOU
  // std::ostream & operator<<(std::ostream & out, const gpu_device & rhs);
  std::ostream & operator<<(std::ostream & out, const vk_version & _version);
  std::ostream & operator<<(std::ostream & out, const extension::type & _type);
  std::ostream & operator<<(std::ostream & out, const extension::target & _target);
  std::ostream & operator<<(std::ostream & out, const extension & _extension);
}

#endif
