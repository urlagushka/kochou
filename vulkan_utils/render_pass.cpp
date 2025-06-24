#include <vulkan_utils/render_pass.hpp>

vk::utils::render_pass::render_pass(device & dev, vk::Format sw_format):
  __render_pass(VK_NULL_HANDLE)
{
  vk::AttachmentDescription color_atch = {
    {},
    sw_format,
    vk::SampleCountFlagBits::e1,
    vk::AttachmentLoadOp::eClear,
    vk::AttachmentStoreOp::eStore,
    vk::AttachmentLoadOp::eDontCare,
    vk::AttachmentStoreOp::eDontCare,
    vk::ImageLayout::eUndefined,
    vk::ImageLayout::ePresentSrcKHR
  };

  vk::AttachmentDescription depth_atch = {
    {},
    vk::Format::eD32Sfloat,
    vk::SampleCountFlagBits::e1,
    vk::AttachmentLoadOp::eClear,
    vk::AttachmentStoreOp::eDontCare,
    vk::AttachmentLoadOp::eDontCare,
    vk::AttachmentStoreOp::eDontCare,
    vk::ImageLayout::eUndefined,
    vk::ImageLayout::eDepthStencilAttachmentOptimal
  };

  vk::AttachmentReference color_atch_ref = {
    0,
    vk::ImageLayout::eColorAttachmentOptimal
  };

  vk::AttachmentReference depth_atch_ref = {
    1,
    vk::ImageLayout::eDepthStencilAttachmentOptimal
  };

  vk::SubpassDescription sub_pass = {
    {},
    vk::PipelineBindPoint::eGraphics,
    0,
    nullptr,
    1,
    &color_atch_ref,
    nullptr,
    &depth_atch_ref,
    0,
    nullptr
  };

  std::array< vk::AttachmentDescription, 2 > attachments = {color_atch, depth_atch};

  vk::RenderPassCreateInfo render_pass_info = {
    {},
    attachments.size(),
    attachments.data(),
    1,
    &sub_pass,
    0,
    nullptr
  };

  __render_pass = dev.create_render_pass(render_pass_info);
}

vk::raii::RenderPass &
vk::utils::render_pass::get()
{
  return __render_pass;
}
