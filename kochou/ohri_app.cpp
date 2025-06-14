#include <ohri_app/ohri_app.hpp>

#include <vulkan_utils/xx_buffer.hpp>
#include <vulkan_utils/shaders.hpp>
#include <vulkan_utils/vertices.hpp>
#include <vulkan_utils/descriptors.hpp>

ohri::app::app():
  __instance("ohri", true),
  __window(800, 600, "ohri"),
  __surface(__instance.get(), __window.create_surface(__instance.get())),
  __device(__instance.get(), __surface, true),

  __vertex_buffer(VK_NULL_HANDLE),
  __vertex_memory(VK_NULL_HANDLE),
  __index_buffer(VK_NULL_HANDLE),
  __index_memory(VK_NULL_HANDLE),
  __uniform_buffer(VK_NULL_HANDLE),
  __uniform_memory(VK_NULL_HANDLE),
  __uniform_mapped(nullptr),
  __descriptor_set_layout(VK_NULL_HANDLE),
  __descriptor_pool(VK_NULL_HANDLE),
  __descriptor_set(VK_NULL_HANDLE),

  __swapchain(__device, __surface),
  __render_pass(__device, __swapchain.get_surface_format().format),
  __pipeline(__device, __swapchain.get_extent2d(), __render_pass.get(), __descriptor_set_layout),
  __image_available_semaphore(__device.get_device(), vk::SemaphoreCreateInfo{}),
  __render_finished_semaphore(__device.get_device(), vk::SemaphoreCreateInfo{}),
  __in_flight_fence(__device.get_device(), vk::FenceCreateInfo(vk::FenceCreateFlagBits::eSignaled)),
  __framebuffers(vk::utils::create_framebuffers(__device, __render_pass, __swapchain)),
  __cmd_pool(vk::utils::create_cmd_pool(__device)),
  __cmd_buffers(vk::utils::create_cmd_buffers(__device, __cmd_pool, __framebuffers.size()))
{
  const std::vector< vk::utils::vertex3 > vertices = {
    {{-0.5f, -0.5f,  0.5f}, {1.0f, 0.0f, 0.0f}}, // красный
    {{ 0.5f, -0.5f,  0.5f}, {0.0f, 1.0f, 0.0f}}, // зелёный
    {{ 0.5f, -0.5f, -0.5f}, {0.0f, 0.0f, 1.0f}}, // синий
    {{-0.5f, -0.5f, -0.5f}, {1.0f, 1.0f, 0.0f}}, // жёлтый

    {{-0.5f,  0.5f,  0.5f}, {1.0f, 0.0f, 1.0f}}, // фиолетовый
    {{ 0.5f,  0.5f,  0.5f}, {0.0f, 1.0f, 1.0f}}, // голубой
    {{ 0.5f,  0.5f, -0.5f}, {0.5f, 0.5f, 0.5f}}, // серый
    {{-0.5f,  0.5f, -0.5f}, {1.0f, 1.0f, 1.0f}}  // белый
  };

  const std::vector< uint32_t > indices = {
    0, 1, 2, 2, 3, 0,
    4, 5, 6, 6, 7, 4,
    0, 1, 5, 5, 4, 0,
    1, 2, 6, 6, 5, 1,
    2, 3, 7, 7, 6, 2,
    3, 0, 4, 4, 7, 3 
  };

  auto [vbuffer, vmemory] = vk::utils::create_vertex_buffer< vk::utils::vertex3 >(__device, vertices);
  __vertex_buffer = std::move(vbuffer);
  __vertex_memory = std::move(vmemory);

  auto [ibuffer, imemory] = vk::utils::create_index_buffer(__device, indices);
  __index_buffer = std::move(ibuffer);
  __index_memory = std::move(imemory);

  auto [ubuffer, umemory] = vk::utils::create_uniform_buffer(__device, sizeof(glm::mat4) * 3);
  __uniform_buffer = std::move(ubuffer);
  __uniform_memory = std::move(umemory);
  __uniform_mapped = (*(__device.get_device())).mapMemory(*__uniform_memory, 0, sizeof(glm::mat4) * 3);

  __descriptor_set_layout = vk::utils::create_descriptor_set_layout(__device);
  __descriptor_pool = vk::utils::create_descriptor_pool(__device);

  vk::DescriptorSetAllocateInfo allocInfo = {
    *__descriptor_pool,
    1,
    &*__descriptor_set_layout
  };
  __descriptor_set = std::move(__device.get_device().allocateDescriptorSets(allocInfo)[0]);

  vk::DescriptorBufferInfo bufferInfo = {
    *__uniform_buffer,
    0,
    sizeof(glm::mat4) * 3
  };
  vk::WriteDescriptorSet descriptorWrite = {
    *__descriptor_set,
    0,
    0,
    1,
    vk::DescriptorType::eUniformBuffer,
    nullptr,
    &bufferInfo,
    nullptr
  };
  __device.get_device().updateDescriptorSets(descriptorWrite, nullptr);
}

ohri::app::~app()
{
  (*(__device.get_device())).unmapMemory(*__uniform_memory);
}

void
ohri::app::prepare()
{
  for (std::size_t i = 0; i < __cmd_buffers.size(); ++i)
  {
    vk::CommandBufferBeginInfo begin_info{};
    __cmd_buffers[i].begin(begin_info);

    vk::ClearValue clear_color(std::array< float, 4 >{0.0f, 0.0f, 0.0f, 1.0f});
    vk::RenderPassBeginInfo render_pass_info{
      *(__render_pass.get()),
      __framebuffers[i],
      vk::Rect2D(vk::Offset2D(0, 0), __swapchain.get_extent2d()),
      clear_color
    };

    __cmd_buffers[i].beginRenderPass(render_pass_info, vk::SubpassContents::eInline);
    __cmd_buffers[i].bindPipeline(vk::PipelineBindPoint::eGraphics, __pipeline.get_pipeline());

    vk::Buffer vertex_buffers[] = {__vertex_buffer};
    vk::DeviceSize offsets[] = {0};
    __cmd_buffers[i].bindVertexBuffers(0, vertex_buffers, offsets);

    __cmd_buffers[i].draw(8, 1, 0, 0);

    __cmd_buffers[i].endRenderPass();
    __cmd_buffers[i].end();
  }
}

void
ohri::app::draw()
{
  glfwPollEvents();

  __device.get_device().waitForFences({*__in_flight_fence}, VK_TRUE, UINT64_MAX);
  __device.get_device().resetFences({*__in_flight_fence});

  auto [result, image_index] = __swapchain.get_swapchain().acquireNextImage(
    UINT64_MAX,
    *__image_available_semaphore,
    nullptr
  );
  if (result != vk::Result::eSuccess)
  {
    throw std::runtime_error("Failed to acquire swap chain image");
  }

  prepare();

  vk::PipelineStageFlags wait_stage = vk::PipelineStageFlagBits::eColorAttachmentOutput;
  vk::SubmitInfo submit_info{
    1,
    &*__image_available_semaphore,
    &wait_stage,
    1,
    &*__cmd_buffers[image_index],
    1,
    &*__render_finished_semaphore
  };
  __device.get_graphics_queue().submit(submit_info, *__in_flight_fence);

  vk::PresentInfoKHR present_info{
    1,
    &*__render_finished_semaphore,
    1,
    &*__swapchain.get_swapchain(),
    &image_index
  };
  __device.get_present_queue().presentKHR(present_info);
}

bool
ohri::app::should_close()
{
  return __window.should_close();
}
