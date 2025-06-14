#ifndef VULKAN_UTILS_IO_HANDLES_HPP
#define VULKAN_UTILS_IO_HANDLES_HPP

#include <ostream>

#include <vulkan/vulkan.hpp>

namespace vk
{
  // PHYSICAL DEVICE
  std::ostream & operator<<(std::ostream & out, const MemoryHeapFlags & rhs);
  std::ostream & operator<<(std::ostream & out, const MemoryPropertyFlags & rhs);
  std::ostream & operator<<(std::ostream & out, const MemoryHeap & rhs);
  std::ostream & operator<<(std::ostream & out, const MemoryType & rhs);
  std::ostream & operator<<(std::ostream & out, const PhysicalDeviceMemoryProperties & rhs);

  std::ostream & operator<<(std::ostream & out, const PhysicalDeviceType & rhs);
  std::ostream & operator<<(std::ostream & out, const PhysicalDevice & rhs);

  // QUEUE
  std::ostream & operator<<(std::ostream & out, const Extent2D & rhs);
  std::ostream & operator<<(std::ostream & out, const Extent3D & rhs);
  std::ostream & operator<<(std::ostream & out, const QueueFlags & rhs);
  std::ostream & operator<<(std::ostream & out, const QueueFamilyProperties & rhs);

  // LOGICAL DEVICE
  // todo

  // SURFACE
  std::ostream & operator<<(std::ostream & out, const Format & rhs);
  std::ostream & operator<<(std::ostream & out, const ColorSpaceKHR & rhs);
  std::ostream & operator<<(std::ostream & out, const SurfaceFormatKHR & rhs);
  std::ostream & operator<<(std::ostream & out, const SurfaceTransformFlagsKHR & rhs);
  std::ostream & operator<<(std::ostream & out, const SurfaceTransformFlagBitsKHR & rhs);
  std::ostream & operator<<(std::ostream & out, const CompositeAlphaFlagsKHR & rhs);
  std::ostream & operator<<(std::ostream & out, const ImageUsageFlags & rhs);
  std::ostream & operator<<(std::ostream & out, const SurfaceCapabilitiesKHR & rhs);
}

#endif
