#include "kochou/core/type_ostream.hpp"

#include <string_view>
#include <unordered_map>

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::MemoryHeapFlags & rhs)
{
    out << ((rhs & vk::MemoryHeapFlagBits::eDeviceLocal) ? "DEVICE_LOCAL_BIT\n" : "");
    out << ((rhs & vk::MemoryHeapFlagBits::eMultiInstance) ? "MULTI_INSTANCE_BIT\n" : "");

    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::MemoryPropertyFlags & rhs)
{
    out << ((rhs & vk::MemoryPropertyFlagBits::eDeviceLocal) ? "DEVICE_LOCAL_BIT\n" : "");
    out << ((rhs & vk::MemoryPropertyFlagBits::eHostVisible) ? "HOST_VISIBLE_BIT\n" : "");
    out << ((rhs & vk::MemoryPropertyFlagBits::eHostCoherent) ? "HOST_COHERENT_BIT\n" : "");
    out << ((rhs & vk::MemoryPropertyFlagBits::eHostCached) ? "HOST_CACHED_BIT\n" : "");
    out << ((rhs & vk::MemoryPropertyFlagBits::eLazilyAllocated) ? "LAZILIY_ALLOCATED_BIT\n" : "");

    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::MemoryHeap & rhs)
{
    out << "size: " << rhs.size << "\n";
    out << rhs.flags;

    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::MemoryType & rhs)
{
    out << "heapIndex: " << rhs.heapIndex << "\n";
    out << rhs.propertyFlags;

    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::PhysicalDeviceMemoryProperties & rhs)
{
    out << "memoryTypeCount: " << rhs.memoryTypeCount << "\n";
    out << "memoryTypes:\n";
    for (std::size_t i = 0; i < rhs.memoryTypeCount; ++i)
    {
        out << i << ":\n";
        out << rhs.memoryTypes[i];
    }
    out << "memoryHeapCount: " << rhs.memoryHeapCount << "\n";
    out << "memoryHeaps:\n";
    for (std::size_t i = 0; i < rhs.memoryHeapCount; ++i)
    {
        out << i << ":\n";
        out << rhs.memoryHeaps[i];
    }
    
    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::PhysicalDeviceType & rhs)
{
    static const std::unordered_map< vk::PhysicalDeviceType, std::string_view > dev_type = {
        {vk::PhysicalDeviceType::eIntegratedGpu, "INTEGRATED GPU"},
        {vk::PhysicalDeviceType::eDiscreteGpu, "DISCRETE GPU"},
        {vk::PhysicalDeviceType::eVirtualGpu, "VIRTUAL GPU"},
        {vk::PhysicalDeviceType::eCpu, "CPU"},
        {vk::PhysicalDeviceType::eOther, "OTHER"}
    };

    try
    {
        return out << dev_type.at(rhs);
    }
    catch (const std::out_of_range & error)
    {
        return out << "UNKNOWN PHYSICAL_DEVICE";
    }
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::PhysicalDevice & rhs)
{
    vk::PhysicalDeviceProperties ptrs = rhs.getProperties();

    out << "deviceName: " << ptrs.deviceName << "\n";
    out << "deviceType: " << ptrs.deviceType << "\n";
    out << "apiVersion: " << ptrs.apiVersion << "\n";
    out << "driverVersion: " << ptrs.driverVersion << "\n";
    out << "vendorID: " << ptrs.vendorID << "\n";
    out << "deviceID: " << ptrs.deviceID << "\n";

    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::Extent2D & rhs)
{
    out << "width: " << rhs.width << "\n";
    out << "height: " << rhs.height;

    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::Extent3D & rhs)
{
    out << "width: " << rhs.width << "\n";
    out << "height: " << rhs.height << "\n";
    out << "depth: " << rhs.depth;

    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::QueueFlags & rhs)
{
    out << ((rhs & vk::QueueFlagBits::eGraphics) ? "GRAPHICS_BIT\n" : "");
    out << ((rhs & vk::QueueFlagBits::eCompute) ? "COMPUTE_BIT\n" : "");
    out << ((rhs & vk::QueueFlagBits::eTransfer) ? "TRANSFER_BIT\n" : "");
    out << ((rhs & vk::QueueFlagBits::eSparseBinding) ? "SPARSE_BINDING_BIT\n" : "");

    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::QueueFamilyProperties & rhs)
{
    out << "queueCount: " << rhs.queueCount << "\n";
    out << "queueFlags:\n" << rhs.queueFlags;
    out << "timestampValidBits: " << rhs.timestampValidBits << "\n";
    out << "minImageTransferGranularity: " << rhs.minImageTransferGranularity << "\n";
    
    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::Format & rhs)
{
    static const std::unordered_map<vk::Format, std::string_view> format_type = {
        {vk::Format::eUndefined, "eUndefined"},
        {vk::Format::eR4G4UnormPack8, "eR4G4UnormPack8"},
        {vk::Format::eR4G4B4A4UnormPack16, "eR4G4B4A4UnormPack16"},
        {vk::Format::eB4G4R4A4UnormPack16, "eB4G4R4A4UnormPack16"},
        {vk::Format::eR5G6B5UnormPack16, "eR5G6B5UnormPack16"},
        {vk::Format::eB5G6R5UnormPack16, "eB5G6R5UnormPack16"},
        {vk::Format::eR5G5B5A1UnormPack16, "eR5G5B5A1UnormPack16"},
        {vk::Format::eB5G5R5A1UnormPack16, "eB5G5R5A1UnormPack16"},
        {vk::Format::eA1R5G5B5UnormPack16, "eA1R5G5B5UnormPack16"},
        {vk::Format::eR8Unorm, "eR8Unorm"},
        {vk::Format::eR8Snorm, "eR8Snorm"},
        {vk::Format::eR8Uscaled, "eR8Uscaled"},
        {vk::Format::eR8Sscaled, "eR8Sscaled"},
        {vk::Format::eR8Uint, "eR8Uint"},
        {vk::Format::eR8Sint, "eR8Sint"},
        {vk::Format::eR8Srgb, "eR8Srgb"},
        {vk::Format::eR8G8Unorm, "eR8G8Unorm"},
        {vk::Format::eR8G8Snorm, "eR8G8Snorm"},
        {vk::Format::eR8G8Uscaled, "eR8G8Uscaled"},
        {vk::Format::eR8G8Sscaled, "eR8G8Sscaled"},
        {vk::Format::eR8G8Uint, "eR8G8Uint"},
        {vk::Format::eR8G8Sint, "eR8G8Sint"},
        {vk::Format::eR8G8Srgb, "eR8G8Srgb"},
        {vk::Format::eR8G8B8Unorm, "eR8G8B8Unorm"},
        {vk::Format::eR8G8B8Snorm, "eR8G8B8Snorm"},
        {vk::Format::eR8G8B8Uscaled, "eR8G8B8Uscaled"},
        {vk::Format::eR8G8B8Sscaled, "eR8G8B8Sscaled"},
        {vk::Format::eR8G8B8Uint, "eR8G8B8Uint"},
        {vk::Format::eR8G8B8Sint, "eR8G8B8Sint"},
        {vk::Format::eR8G8B8Srgb, "eR8G8B8Srgb"},
        {vk::Format::eB8G8R8Unorm, "eB8G8R8Unorm"},
        {vk::Format::eB8G8R8Snorm, "eB8G8R8Snorm"},
        {vk::Format::eB8G8R8Uscaled, "eB8G8R8Uscaled"},
        {vk::Format::eB8G8R8Sscaled, "eB8G8R8Sscaled"},
        {vk::Format::eB8G8R8Uint, "eB8G8R8Uint"},
        {vk::Format::eB8G8R8Sint, "eB8G8R8Sint"},
        {vk::Format::eB8G8R8Srgb, "eB8G8R8Srgb"},
        {vk::Format::eR8G8B8A8Unorm, "eR8G8B8A8Unorm"},
        {vk::Format::eR8G8B8A8Snorm, "eR8G8B8A8Snorm"},
        {vk::Format::eR8G8B8A8Uscaled, "eR8G8B8A8Uscaled"},
        {vk::Format::eR8G8B8A8Sscaled, "eR8G8B8A8Sscaled"},
        {vk::Format::eR8G8B8A8Uint, "eR8G8B8A8Uint"},
        {vk::Format::eR8G8B8A8Sint, "eR8G8B8A8Sint"},
        {vk::Format::eR8G8B8A8Srgb, "eR8G8B8A8Srgb"},
        {vk::Format::eB8G8R8A8Unorm, "eB8G8R8A8Unorm"},
        {vk::Format::eB8G8R8A8Snorm, "eB8G8R8A8Snorm"},
        {vk::Format::eB8G8R8A8Uscaled, "eB8G8R8A8Uscaled"},
        {vk::Format::eB8G8R8A8Sscaled, "eB8G8R8A8Sscaled"},
        {vk::Format::eB8G8R8A8Uint, "eB8G8R8A8Uint"},
        {vk::Format::eB8G8R8A8Sint, "eB8G8R8A8Sint"},
        {vk::Format::eB8G8R8A8Srgb, "eB8G8R8A8Srgb"},
        {vk::Format::eA8B8G8R8UnormPack32, "eA8B8G8R8UnormPack32"},
        {vk::Format::eA8B8G8R8SnormPack32, "eA8B8G8R8SnormPack32"},
        {vk::Format::eA8B8G8R8UscaledPack32, "eA8B8G8R8UscaledPack32"},
        {vk::Format::eA8B8G8R8SscaledPack32, "eA8B8G8R8SscaledPack32"},
        {vk::Format::eA8B8G8R8UintPack32, "eA8B8G8R8UintPack32"},
        {vk::Format::eA8B8G8R8SintPack32, "eA8B8G8R8SintPack32"},
        {vk::Format::eA8B8G8R8SrgbPack32, "eA8B8G8R8SrgbPack32"},
        {vk::Format::eA2R10G10B10UnormPack32, "eA2R10G10B10UnormPack32"},
        {vk::Format::eA2R10G10B10SnormPack32, "eA2R10G10B10SnormPack32"},
        {vk::Format::eA2R10G10B10UscaledPack32, "eA2R10G10B10UscaledPack32"},
        {vk::Format::eA2R10G10B10SscaledPack32, "eA2R10G10B10SscaledPack32"},
        {vk::Format::eA2R10G10B10UintPack32, "eA2R10G10B10UintPack32"},
        {vk::Format::eA2R10G10B10SintPack32, "eA2R10G10B10SintPack32"},
        {vk::Format::eA2B10G10R10UnormPack32, "eA2B10G10R10UnormPack32"},
        {vk::Format::eA2B10G10R10SnormPack32, "eA2B10G10R10SnormPack32"},
        {vk::Format::eA2B10G10R10UscaledPack32, "eA2B10G10R10UscaledPack32"},
        {vk::Format::eA2B10G10R10SscaledPack32, "eA2B10G10R10SscaledPack32"},
        {vk::Format::eA2B10G10R10UintPack32, "eA2B10G10R10UintPack32"},
        {vk::Format::eA2B10G10R10SintPack32, "eA2B10G10R10SintPack32"},
        {vk::Format::eR16Unorm, "eR16Unorm"},
        {vk::Format::eR16Snorm, "eR16Snorm"},
        {vk::Format::eR16Uscaled, "eR16Uscaled"},
        {vk::Format::eR16Sscaled, "eR16Sscaled"},
        {vk::Format::eR16Uint, "eR16Uint"},
        {vk::Format::eR16Sint, "eR16Sint"},
        {vk::Format::eR16Sfloat, "eR16Sfloat"},
        {vk::Format::eR16G16Unorm, "eR16G16Unorm"},
        {vk::Format::eR16G16Snorm, "eR16G16Snorm"},
        {vk::Format::eR16G16Uscaled, "eR16G16Uscaled"},
        {vk::Format::eR16G16Sscaled, "eR16G16Sscaled"},
        {vk::Format::eR16G16Uint, "eR16G16Uint"},
        {vk::Format::eR16G16Sint, "eR16G16Sint"},
        {vk::Format::eR16G16Sfloat, "eR16G16Sfloat"},
        {vk::Format::eR16G16B16Unorm, "eR16G16B16Unorm"},
        {vk::Format::eR16G16B16Snorm, "eR16G16B16Snorm"},
        {vk::Format::eR16G16B16Uscaled, "eR16G16B16Uscaled"},
        {vk::Format::eR16G16B16Sscaled, "eR16G16B16Sscaled"},
        {vk::Format::eR16G16B16Uint, "eR16G16B16Uint"},
        {vk::Format::eR16G16B16Sint, "eR16G16B16Sint"},
        {vk::Format::eR16G16B16Sfloat, "eR16G16B16Sfloat"},
        {vk::Format::eR16G16B16A16Unorm, "eR16G16B16A16Unorm"},
        {vk::Format::eR16G16B16A16Snorm, "eR16G16B16A16Snorm"},
        {vk::Format::eR16G16B16A16Uscaled, "eR16G16B16A16Uscaled"},
        {vk::Format::eR16G16B16A16Sscaled, "eR16G16B16A16Sscaled"},
        {vk::Format::eR16G16B16A16Uint, "eR16G16B16A16Uint"},
        {vk::Format::eR16G16B16A16Sint, "eR16G16B16A16Sint"},
        {vk::Format::eR16G16B16A16Sfloat, "eR16G16B16A16Sfloat"},
        {vk::Format::eR32Uint, "eR32Uint"},
        {vk::Format::eR32Sint, "eR32Sint"},
        {vk::Format::eR32Sfloat, "eR32Sfloat"},
        {vk::Format::eR32G32Uint, "eR32G32Uint"},
        {vk::Format::eR32G32Sint, "eR32G32Sint"},
        {vk::Format::eR32G32Sfloat, "eR32G32Sfloat"},
        {vk::Format::eR32G32B32Uint, "eR32G32B32Uint"},
        {vk::Format::eR32G32B32Sint, "eR32G32B32Sint"},
        {vk::Format::eR32G32B32Sfloat, "eR32G32B32Sfloat"},
        {vk::Format::eR32G32B32A32Uint, "eR32G32B32A32Uint"},
        {vk::Format::eR32G32B32A32Sint, "eR32G32B32A32Sint"},
        {vk::Format::eR32G32B32A32Sfloat, "eR32G32B32A32Sfloat"},
        {vk::Format::eR64Uint, "eR64Uint"},
        {vk::Format::eR64Sint, "eR64Sint"},
        {vk::Format::eR64Sfloat, "eR64Sfloat"},
        {vk::Format::eR64G64Uint, "eR64G64Uint"},
        {vk::Format::eR64G64Sint, "eR64G64Sint"},
        {vk::Format::eR64G64Sfloat, "eR64G64Sfloat"},
        {vk::Format::eR64G64B64Uint, "eR64G64B64Uint"},
        {vk::Format::eR64G64B64Sint, "eR64G64B64Sint"},
        {vk::Format::eR64G64B64Sfloat, "eR64G64B64Sfloat"},
        {vk::Format::eR64G64B64A64Uint, "eR64G64B64A64Uint"},
        {vk::Format::eR64G64B64A64Sint, "eR64G64B64A64Sint"},
        {vk::Format::eR64G64B64A64Sfloat, "eR64G64B64A64Sfloat"},
        {vk::Format::eB10G11R11UfloatPack32, "eB10G11R11UfloatPack32"},
        {vk::Format::eE5B9G9R9UfloatPack32, "eE5B9G9R9UfloatPack32"},
        {vk::Format::eD16Unorm, "eD16Unorm"},
        {vk::Format::eX8D24UnormPack32, "eX8D24UnormPack32"},
        {vk::Format::eD32Sfloat, "eD32Sfloat"},
        {vk::Format::eS8Uint, "eS8Uint"},
        {vk::Format::eD16UnormS8Uint, "eD16UnormS8Uint"},
        {vk::Format::eD24UnormS8Uint, "eD24UnormS8Uint"},
        {vk::Format::eD32SfloatS8Uint, "eD32SfloatS8Uint"},
        {vk::Format::eBc1RgbUnormBlock, "eBc1RgbUnormBlock"},
        {vk::Format::eBc1RgbSrgbBlock, "eBc1RgbSrgbBlock"},
        {vk::Format::eBc1RgbaUnormBlock, "eBc1RgbaUnormBlock"},
        {vk::Format::eBc1RgbaSrgbBlock, "eBc1RgbaSrgbBlock"},
        {vk::Format::eBc2UnormBlock, "eBc2UnormBlock"},
        {vk::Format::eBc2SrgbBlock, "eBc2SrgbBlock"},
        {vk::Format::eBc3UnormBlock, "eBc3UnormBlock"},
        {vk::Format::eBc3SrgbBlock, "eBc3SrgbBlock"},
        {vk::Format::eBc4UnormBlock, "eBc4UnormBlock"},
        {vk::Format::eBc4SnormBlock, "eBc4SnormBlock"},
        {vk::Format::eBc5UnormBlock, "eBc5UnormBlock"},
        {vk::Format::eBc5SnormBlock, "eBc5SnormBlock"},
        {vk::Format::eBc6HUfloatBlock, "eBc6HUfloatBlock"},
        {vk::Format::eBc6HSfloatBlock, "eBc6HSfloatBlock"},
        {vk::Format::eBc7UnormBlock, "eBc7UnormBlock"},
        {vk::Format::eBc7SrgbBlock, "eBc7SrgbBlock"},
        {vk::Format::eEtc2R8G8B8UnormBlock, "eEtc2R8G8B8UnormBlock"},
        {vk::Format::eEtc2R8G8B8SrgbBlock, "eEtc2R8G8B8SrgbBlock"},
        {vk::Format::eEtc2R8G8B8A1UnormBlock, "eEtc2R8G8B8A1UnormBlock"},
        {vk::Format::eEtc2R8G8B8A1SrgbBlock, "eEtc2R8G8B8A1SrgbBlock"},
        {vk::Format::eEtc2R8G8B8A8UnormBlock, "eEtc2R8G8B8A8UnormBlock"},
        {vk::Format::eEtc2R8G8B8A8SrgbBlock, "eEtc2R8G8B8A8SrgbBlock"},
        {vk::Format::eEacR11UnormBlock, "eEacR11UnormBlock"},
        {vk::Format::eEacR11SnormBlock, "eEacR11SnormBlock"},
        {vk::Format::eEacR11G11UnormBlock, "eEacR11G11UnormBlock"},
        {vk::Format::eEacR11G11SnormBlock, "eEacR11G11SnormBlock"},
        {vk::Format::eAstc4x4UnormBlock, "eAstc4x4UnormBlock"},
        {vk::Format::eAstc4x4SrgbBlock, "eAstc4x4SrgbBlock"},
        {vk::Format::eAstc5x4UnormBlock, "eAstc5x4UnormBlock"},
        {vk::Format::eAstc5x4SrgbBlock, "eAstc5x4SrgbBlock"},
        {vk::Format::eAstc5x5UnormBlock, "eAstc5x5UnormBlock"},
        {vk::Format::eAstc5x5SrgbBlock, "eAstc5x5SrgbBlock"},
        {vk::Format::eAstc6x5UnormBlock, "eAstc6x5UnormBlock"},
        {vk::Format::eAstc6x5SrgbBlock, "eAstc6x5SrgbBlock"},
        {vk::Format::eAstc6x6UnormBlock, "eAstc6x6UnormBlock"},
        {vk::Format::eAstc6x6SrgbBlock, "eAstc6x6SrgbBlock"},
        {vk::Format::eAstc8x5UnormBlock, "eAstc8x5UnormBlock"},
        {vk::Format::eAstc8x5SrgbBlock, "eAstc8x5SrgbBlock"},
        {vk::Format::eAstc8x6UnormBlock, "eAstc8x6UnormBlock"},
        {vk::Format::eAstc8x6SrgbBlock, "eAstc8x6SrgbBlock"},
        {vk::Format::eAstc8x8UnormBlock, "eAstc8x8UnormBlock"},
        {vk::Format::eAstc8x8SrgbBlock, "eAstc8x8SrgbBlock"},
        {vk::Format::eAstc10x5UnormBlock, "eAstc10x5UnormBlock"},
        {vk::Format::eAstc10x5SrgbBlock, "eAstc10x5SrgbBlock"},
        {vk::Format::eAstc10x6UnormBlock, "eAstc10x6UnormBlock"},
        {vk::Format::eAstc10x6SrgbBlock, "eAstc10x6SrgbBlock"},
        {vk::Format::eAstc10x8UnormBlock, "eAstc10x8UnormBlock"},
        {vk::Format::eAstc10x8SrgbBlock, "eAstc10x8SrgbBlock"},
        {vk::Format::eAstc10x10UnormBlock, "eAstc10x10UnormBlock"},
        {vk::Format::eAstc10x10SrgbBlock, "eAstc10x10SrgbBlock"},
        {vk::Format::eAstc12x10UnormBlock, "eAstc12x10UnormBlock"},
        {vk::Format::eAstc12x10SrgbBlock, "eAstc12x10SrgbBlock"},
        {vk::Format::eAstc12x12UnormBlock, "eAstc12x12UnormBlock"},
        {vk::Format::eAstc12x12SrgbBlock, "eAstc12x12SrgbBlock"},
        {vk::Format::eG8B8G8R8422Unorm, "eG8B8G8R8422Unorm"},
        {vk::Format::eB8G8R8G8422Unorm, "eB8G8R8G8422Unorm"},
        {vk::Format::eG8B8R83Plane420Unorm, "eG8B8R83Plane420Unorm"},
        {vk::Format::eG8B8R82Plane420Unorm, "eG8B8R82Plane420Unorm"},
        {vk::Format::eG8B8R83Plane422Unorm, "eG8B8R83Plane422Unorm"},
        {vk::Format::eG8B8R82Plane422Unorm, "eG8B8R82Plane422Unorm"},
        {vk::Format::eG8B8R83Plane444Unorm, "eG8B8R83Plane444Unorm"},
        {vk::Format::eG10X6B10X6G10X6R10X6422Unorm4Pack16, "eG10X6B10X6G10X6R10X6422Unorm4Pack16"},
        {vk::Format::eB10X6G10X6R10X6G10X6422Unorm4Pack16, "eB10X6G10X6R10X6G10X6422Unorm4Pack16"},
        {vk::Format::eG10X6B10X6R10X63Plane420Unorm3Pack16, "eG10X6B10X6R10X63Plane420Unorm3Pack16"},
        {vk::Format::eG10X6B10X6R10X62Plane420Unorm3Pack16, "eG10X6B10X6R10X62Plane420Unorm3Pack16"},
        {vk::Format::eG10X6B10X6R10X63Plane422Unorm3Pack16, "eG10X6B10X6R10X63Plane422Unorm3Pack16"},
        {vk::Format::eG10X6B10X6R10X62Plane422Unorm3Pack16, "eG10X6B10X6R10X62Plane422Unorm3Pack16"},
        {vk::Format::eG10X6B10X6R10X63Plane444Unorm3Pack16, "eG10X6B10X6R10X63Plane444Unorm3Pack16"},
        {vk::Format::eG12X4B12X4G12X4R12X4422Unorm4Pack16, "eG12X4B12X4G12X4R12X4422Unorm4Pack16"},
        {vk::Format::eB12X4G12X4R12X4G12X4422Unorm4Pack16, "eB12X4G12X4R12X4G12X4422Unorm4Pack16"},
        {vk::Format::eG12X4B12X4R12X43Plane420Unorm3Pack16, "eG12X4B12X4R12X43Plane420Unorm3Pack16"},
        {vk::Format::eG12X4B12X4R12X42Plane420Unorm3Pack16, "eG12X4B12X4R12X42Plane420Unorm3Pack16"},
        {vk::Format::eG12X4B12X4R12X43Plane422Unorm3Pack16, "eG12X4B12X4R12X43Plane422Unorm3Pack16"},
        {vk::Format::eG12X4B12X4R12X42Plane422Unorm3Pack16, "eG12X4B12X4R12X42Plane422Unorm3Pack16"},
        {vk::Format::eG12X4B12X4R12X43Plane444Unorm3Pack16, "eG12X4B12X4R12X43Plane444Unorm3Pack16"},
        {vk::Format::eG16B16G16R16422Unorm, "eG16B16G16R16422Unorm"},
        {vk::Format::eB16G16R16G16422Unorm, "eB16G16R16G16422Unorm"},
        {vk::Format::eG16B16R163Plane420Unorm, "eG16B16R163Plane420Unorm"},
        {vk::Format::eG16B16R162Plane420Unorm, "eG16B16R162Plane420Unorm"},
        {vk::Format::eG16B16R163Plane422Unorm, "eG16B16R163Plane422Unorm"},
        {vk::Format::eG16B16R162Plane422Unorm, "eG16B16R162Plane422Unorm"},
        {vk::Format::eG16B16R163Plane444Unorm, "eG16B16R163Plane444Unorm"},
    };

    try
    {
        return out << format_type.at(rhs);
    }
    catch (const std::out_of_range & error)
    {
        return out << "UNKNOWN COLOR_FORMAT";
    }
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::ColorSpaceKHR & rhs)
{
    static const std::unordered_map< vk::ColorSpaceKHR, std::string_view > color_space_type = {
        {vk::ColorSpaceKHR::eAdobergbLinearEXT, "eAdobergbLinearEXT"},
        {vk::ColorSpaceKHR::eAdobergbNonlinearEXT, "eAdobergbNonlinearEXT"},
        {vk::ColorSpaceKHR::eBt2020LinearEXT, "eBt2020LinearEXT"},
        {vk::ColorSpaceKHR::eBt709LinearEXT, "eBt709LinearEXT"},
        {vk::ColorSpaceKHR::eBt709NonlinearEXT, "eBt709NonlinearEXT"},
        {vk::ColorSpaceKHR::eDciP3LinearEXT, "eDciP3LinearEXT"},
        {vk::ColorSpaceKHR::eDciP3NonlinearEXT, "eDciP3NonlinearEXT"},
        {vk::ColorSpaceKHR::eDisplayNativeAMD, "eDisplayNativeAMD"},
        {vk::ColorSpaceKHR::eDisplayP3LinearEXT, "eDisplayP3LinearEXT"},
        {vk::ColorSpaceKHR::eDisplayP3NonlinearEXT, "eDisplayP3NonlinearEXT"},
        {vk::ColorSpaceKHR::eExtendedSrgbLinearEXT, "eExtendedSrgbLinearEXT"},
        {vk::ColorSpaceKHR::eExtendedSrgbNonlinearEXT, "eExtendedSrgbNonlinearEXT"},
        {vk::ColorSpaceKHR::eHdr10HlgEXT, "eHdr10HlgEXT"},
        {vk::ColorSpaceKHR::eHdr10St2084EXT, "eHdr10St2084EXT"},
        {vk::ColorSpaceKHR::ePassThroughEXT, "ePassThroughEXT"},
        {vk::ColorSpaceKHR::eSrgbNonlinear, "eSrgbNonlinear"},
        {vk::ColorSpaceKHR::eVkColorspaceSrgbNonlinear, "eVkColorspaceSrgbNonlinear"}
    };

    try
    {
        return out << color_space_type.at(rhs);
    }
    catch (const std::out_of_range & error)
    {
        return out << "UNKNOWN COLOR SPACE";
    }
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::SurfaceFormatKHR & rhs)
{
    return out << rhs.colorSpace << "    " << rhs.format;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::SurfaceTransformFlagsKHR & rhs)
{
    out << ((rhs & vk::SurfaceTransformFlagBitsKHR::eHorizontalMirror) ? "TRANSFORM_HORIZONTAL_MIRROR_BIT\n" : "");
    out << ((rhs & vk::SurfaceTransformFlagBitsKHR::eHorizontalMirrorRotate180) ? "TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT\n" : "");
    out << ((rhs & vk::SurfaceTransformFlagBitsKHR::eHorizontalMirrorRotate270) ? "TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT\n" : "");
    out << ((rhs & vk::SurfaceTransformFlagBitsKHR::eHorizontalMirrorRotate90) ? "TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT\n" : "");
    out << ((rhs & vk::SurfaceTransformFlagBitsKHR::eIdentity) ? "TRANSFORM_HORIZONTAL_IDENTITY_BIT\n" : "");
    out << ((rhs & vk::SurfaceTransformFlagBitsKHR::eInherit) ? "TRANSFORM_HORIZONTAL_INHERIT_BIT\n" : "");
    out << ((rhs & vk::SurfaceTransformFlagBitsKHR::eRotate180) ? "TRANSFORM_ROTATE_180_BIT\n" : "");
    out << ((rhs & vk::SurfaceTransformFlagBitsKHR::eRotate270) ? "TRANSFORM_ROTATE_270_BIT\n" : "");
    out << ((rhs & vk::SurfaceTransformFlagBitsKHR::eRotate90) ? "TRANSFORM_ROTATE_90_BIT\n" : "");

    return out;
}
std::ostream & kochou::core::operator<<(std::ostream & out, const vk::SurfaceTransformFlagBitsKHR & rhs)
{
    static const std::unordered_map< vk::SurfaceTransformFlagBitsKHR, std::string_view > surface_transform_type = {
        {vk::SurfaceTransformFlagBitsKHR::eHorizontalMirror, "TRANSFORM_HORIZONTAL_MIRROR_BIT"},
        {vk::SurfaceTransformFlagBitsKHR::eHorizontalMirrorRotate180, "TRANSFORM_HORIZONTAL_MIRROR_ROTATE_180_BIT"},
        {vk::SurfaceTransformFlagBitsKHR::eHorizontalMirrorRotate270, "TRANSFORM_HORIZONTAL_MIRROR_ROTATE_270_BIT"},
        {vk::SurfaceTransformFlagBitsKHR::eHorizontalMirrorRotate90, "TRANSFORM_HORIZONTAL_MIRROR_ROTATE_90_BIT"},
        {vk::SurfaceTransformFlagBitsKHR::eIdentity, "TRANSFORM_HORIZONTAL_IDENTITY_BIT"},
        {vk::SurfaceTransformFlagBitsKHR::eInherit, "TRANSFORM_HORIZONTAL_INHERIT_BIT"},
        {vk::SurfaceTransformFlagBitsKHR::eRotate180, "TRANSFORM_ROTATE_180_BIT"},
        {vk::SurfaceTransformFlagBitsKHR::eRotate270, "TRANSFORM_ROTATE_270_BIT"},
        {vk::SurfaceTransformFlagBitsKHR::eRotate90, "TRANSFORM_ROTATE_90_BIT"},
    };

    try
    {
        return out << surface_transform_type.at(rhs);
    }
    catch (const std::out_of_range & error)
    {
        return out << "UNKNOWN SURFACE_TRANSFORM_BIT";
    }
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::CompositeAlphaFlagsKHR & rhs)
{
    out << ((rhs & vk::CompositeAlphaFlagBitsKHR::eInherit) ? "COMPOSITE_ALPHA_INHERIT_BIT_KHR\n" : "");
    out << ((rhs & vk::CompositeAlphaFlagBitsKHR::eOpaque) ? "COMPOSITE_ALPHA_OPAQUE_BIT_KHR\n" : "");
    out << ((rhs & vk::CompositeAlphaFlagBitsKHR::ePostMultiplied) ? "COMPOSITE_ALPHA_POST_MULTIPLIED_BIT_KHR\n" : "");
    out << ((rhs & vk::CompositeAlphaFlagBitsKHR::ePreMultiplied) ? "COMPOSITE_ALPHA_PRE_MULTIPLIED_KHR\n" : "");

    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::ImageUsageFlags & rhs)
{
    out << ((rhs & vk::ImageUsageFlagBits::eAttachmentFeedbackLoopEXT) ? "IMAGE_USAGE_ATTACHMENT_FEEDBACK_LOOP_BIT_EXT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eColorAttachment) ? "IMAGE_USAGE_COLOR_ATTACHMENT_BIT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eDepthStencilAttachment) ? "IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eFragmentDensityMapEXT) ? "IMAGE_USAGE_FLAG_BITS_MAX_ENUM\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eFragmentShadingRateAttachmentKHR) ? "IMAGE_USAGE_FRAGMENT_DENSITY_MAP_BIT_EXT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eFragmentShadingRateAttachmentKHR) ? "IMAGE_USAGE_FRAGMENT_SHADING_RATE_ATTACHMENT_BIT_KHR\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eHostTransfer) ? "IMAGE_USAGE_HOST_TRANSFER_BIT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eHostTransferEXT) ? "IMAGE_USAGE_HOST_TRANSFER_BIT_EXT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eInputAttachment) ? "IMAGE_USAGE_INPUT_ATTACHMENT_BIT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eInvocationMaskHUAWEI) ? "IMAGE_USAGE_INVOCATION_MASK_BIT_HUAWEI\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eSampleBlockMatchQCOM) ? "IMAGE_USAGE_SAMPLE_BLOCK_MATCH_BIT_QCOM\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eSampleWeightQCOM) ? "IMAGE_USAGE_SAMPLE_WEIGHT_BIT_QCOM\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eSampled) ? "IMAGE_USAGE_SAMPLED_BIT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eShadingRateImageNV) ? "IMAGE_USAGE_SHADING_RATE_IMAGE_BIT_NV\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eStorage) ? "IMAGE_USAGE_STORAGE_BIT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eTransferDst) ? "IMAGE_USAGE_TRANSFER_DST_BIT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eTransferSrc) ? "IMAGE_USAGE_TRANSFER_SRC_BIT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eTransientAttachment) ? "IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eVideoDecodeDpbKHR) ? "IMAGE_USAGE_VIDEO_DECODE_DPB_BIT_KHR\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eVideoDecodeDstKHR) ? "IMAGE_USAGE_VIDEO_DECODE_DST_BIT_KHR\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eVideoDecodeSrcKHR) ? "IMAGE_USAGE_VIDEO_DECODE_SRC_BIT_KHR\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eVideoEncodeDpbKHR) ? "IMAGE_USAGE_VIDEO_ENCODE_DPB_BIT_KHR\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eVideoEncodeDstKHR) ? "IMAGE_USAGE_VIDEO_ENCODE_DST_BIT_KHR\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eVideoEncodeEmphasisMapKHR) ? "IMAGE_USAGE_VIDEO_ENCODE_EMPHASIS_MAP_BIT_KHR\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eVideoEncodeQuantizationDeltaMapKHR) ? "IMAGE_USAGE_VIDEO_ENCODE_QUANTIZATION_DELTA_MAP_BIT_KHR\n" : "");
    out << ((rhs & vk::ImageUsageFlagBits::eVideoEncodeSrcKHR) ? "IMAGE_USAGE_VIDEO_ENCODE_SRC_BIT_KHR\n" : "");

    return out;
}

std::ostream & kochou::core::operator<<(std::ostream & out, const vk::SurfaceCapabilitiesKHR & rhs)
{
    out << "minImageCount: " << rhs.minImageCount << "\n";
    out << "maxImageCount: " << rhs.maxImageCount << "\n";
    out << "currentExtent:\n" << rhs.currentExtent << "\n";
    out << "minImageExtent:\n" << rhs.minImageExtent << "\n";
    out << "maxImageExtent:\n" << rhs.maxImageExtent << "\n";
    out << "maxImageArrayLayers: " << rhs.maxImageArrayLayers << "\n";
    out << "supportedTransforms:\n" << rhs.supportedTransforms;
    out << "currentTransform: " << rhs.currentTransform << "\n";
    out << "supportedCompositeAlpha:\n" << rhs.supportedCompositeAlpha;
    out << "supportedUsageFlags:\n" << rhs.supportedUsageFlags;

    return out;
}

/*
std::ostream & kochou::api::operator<<(std::ostream & out, const gpu_device & rhs)
{
    static const std::unordered_map< vk_api_version, std::string_view > vk_api_version_map = {
        {vk_api_version::v1_0, "1.0"},
        {vk_api_version::v1_1, "1.1"},
        {vk_api_version::v1_2, "1.2"},
        {vk_api_version::v1_3, "1.3"},
        {vk_api_version::v1_4, "1.4"}
    };

    out << "name: " << rhs.name << "\n";
 
    out << "type: ";
    out << (((rhs.gpu & gpu_mask::other) == gpu_mask::other) ? "other\n" : "");
    out << (((rhs.gpu & gpu_mask::integrated) == gpu_mask::integrated) ? "integrated\n" : "");
    out << (((rhs.gpu & gpu_mask::discrete) == gpu_mask::discrete) ? "discrete\n" : "");
    out << (((rhs.gpu & gpu_mask::vvirtual) == gpu_mask::vvirtual) ? "virtual\n" : "");
    out << (((rhs.gpu & gpu_mask::cpu) == gpu_mask::cpu) ? "cpu\n" : "");

    try
    {
        return out << "api version: " << vk_api_version_map.at(rhs.api);
    }
    catch (const std::out_of_range & error)
    {
        return out << "api version: unknown";
    }
}
*/
   