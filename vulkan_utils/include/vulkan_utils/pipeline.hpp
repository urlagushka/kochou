#ifndef VULKAN_UTILS_PIPELINE_HPP
#define VULKAN_UTILS_PIPELINE_HPP

#include <vulkan_utils/device.hpp>
#include <vulkan/vulkan_raii.hpp>

namespace vk::utils
{
  class pipeline
  {
    public:
      pipeline(
        vk::utils::device & device,
        vk::Extent2D sw_extent2d,
        vk::raii::RenderPass & render_pass,
        vk::raii::DescriptorSetLayout & descriptor_set_layout
      );

      vk::raii::PipelineLayout & get_pipeline_layout();
      vk::raii::Pipeline & get_pipeline();

    private:
      vk::raii::PipelineLayout __pipeline_layout;
      vk::raii::Pipeline __pipeline;
  };
}

#endif
