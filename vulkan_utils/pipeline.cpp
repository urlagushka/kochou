#include <vulkan_utils/pipeline.hpp>

#include <vulkan_utils/shaders.hpp>
#include <vulkan_utils/vertices.hpp>

vk::utils::pipeline::pipeline(
  vk::utils::device & device,
  vk::Extent2D sw_extent2d,
  vk::raii::RenderPass & render_pass
):
  __pipeline_layout(VK_NULL_HANDLE),
  __pipeline(VK_NULL_HANDLE)
{
  auto vert_module = create_shader_module(device, "/Users/urlagushka/Documents/kochou/shaders/compiled/vertex/shader.spv");
  auto frag_module = create_shader_module(device, "/Users/urlagushka/Documents/kochou/shaders/compiled/fragment/shader.spv");

  std::vector< vk::PipelineShaderStageCreateInfo > shader_stages = {
    {
      {},
      vk::ShaderStageFlagBits::eVertex,
      *vert_module,
      "main",
      nullptr
    },
    {
      {},
      vk::ShaderStageFlagBits::eFragment,
      *frag_module,
      "main",
      nullptr
    }
  };

  auto vertex_bd = vertex3::get_binding_description();
  auto vertex_ad = vertex3::get_attribute_descriptions();
  vk::PipelineVertexInputStateCreateInfo vertex_input_info = {
    {},
    1,
    &vertex_bd,
    static_cast< uint32_t >(vertex_ad.size()),
    vertex_ad.data()
  };

  vk::PipelineInputAssemblyStateCreateInfo input_assembly = {
    {},
    vk::PrimitiveTopology::eTriangleList,
    VK_FALSE
  };

  vk::Viewport viewport = {
    0.0f,
    0.0f,
    static_cast< float >(sw_extent2d.width),
    static_cast< float >(sw_extent2d.height),
    0.0f,
    1.0f
  };

  vk::Rect2D scissor = {
    {
      0,
      0
    },
    sw_extent2d
  };

  vk::PipelineViewportStateCreateInfo viewport_state = {
    {},
    1,
    &viewport,
    1,
    &scissor
  };

  vk::PipelineRasterizationStateCreateInfo rasterizer = {
    {},
    VK_FALSE,
    VK_FALSE,
    vk::PolygonMode::eFill,
    vk::CullModeFlagBits::eBack,
    vk::FrontFace::eClockwise,
    VK_FALSE,
    0.0f,
    0.0f,
    0.0f,
    1.0f
  };

  vk::PipelineMultisampleStateCreateInfo multisampling = {
    {},
    vk::SampleCountFlagBits::e1,
    VK_FALSE,
    1.0f,
    nullptr,
    VK_FALSE,
    VK_FALSE
  };

  vk::PipelineColorBlendAttachmentState color_blend_atch = {
    VK_FALSE,
    vk::BlendFactor::eOne,
    vk::BlendFactor::eZero,
    vk::BlendOp::eAdd,
    vk::BlendFactor::eOne,
    vk::BlendFactor::eZero,
    vk::BlendOp::eAdd,
    vk::ColorComponentFlagBits::eR |
    vk::ColorComponentFlagBits::eG |
    vk::ColorComponentFlagBits::eB |
    vk::ColorComponentFlagBits::eA
  };

  vk::PipelineColorBlendStateCreateInfo color_blending = {
    {},
    VK_FALSE,
    vk::LogicOp::eCopy,
    1,
    &color_blend_atch,
    {
      0.0f,
      0.0f,
      0.0f,
      0.0f
    }
  };

  vk::PipelineLayoutCreateInfo pipeline_layout_info = {
    {},
    0,
    nullptr,
    0,
    nullptr 
  };
  __pipeline_layout = device.create_pipeline_layout(pipeline_layout_info);

  vk::GraphicsPipelineCreateInfo pipeline_info
  {
    {},
    static_cast< uint32_t >(shader_stages.size()),
    shader_stages.data(),
    &vertex_input_info,
    &input_assembly,
    nullptr,
    &viewport_state,
    &rasterizer,
    &multisampling,
    nullptr,
    &color_blending,
    nullptr,
    *__pipeline_layout,
    *render_pass,
    0,
    VK_NULL_HANDLE,
    -1
  };

  vk::PipelineDepthStencilStateCreateInfo depth_stencil = {
    {},
    VK_TRUE,
    VK_TRUE,
    vk::CompareOp::eLess,
    VK_FALSE,
    VK_FALSE,
    {}, {},
    0.0f, 1.0f
  };
  pipeline_info.setPDepthStencilState(&depth_stencil);

  __pipeline = device.create_graphics_pipeline(pipeline_info);
}

vk::raii::PipelineLayout &
vk::utils::pipeline::get_pipeline_layout()
{
  return __pipeline_layout;
}

vk::raii::Pipeline &
vk::utils::pipeline::get_pipeline()
{
  return __pipeline;
}
