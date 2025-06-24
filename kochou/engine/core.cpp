#include <kochou/engine/core.hpp>

#include <vulkan_utils/xx_buffer.hpp>
#include <vulkan_utils/descriptors.hpp>

kochou::core::core(const info & m_info):
  __window(m_info.size.width, m_info.size.height, m_info.app_name),

  __instance(m_info.app_name, "egirl", m_info.is_vulkan_vl),
  __surface(__instance.get(), __window.create_surface(__instance.get())),
  __device(__instance.get(), __surface, true),
  __swapchain(__device, __surface),
  __render_pass(__device, __swapchain.get_surface_format().format),
  __cmd_pool(vk::utils::create_cmd_pool(__device)),

  __image_available_semaphore(__device.get_device(), vk::SemaphoreCreateInfo{}),
  __render_finished_semaphore(__device.get_device(), vk::SemaphoreCreateInfo{}),
  __in_flight_fence(__device.get_device(), vk::FenceCreateInfo(vk::FenceCreateFlagBits::eSignaled)),

  __vertex_buffer(VK_NULL_HANDLE),
  __vertex_memory(VK_NULL_HANDLE),
  __index_buffer(VK_NULL_HANDLE),
  __index_memory(VK_NULL_HANDLE),

  __pipeline(__device, __swapchain.get_extent2d(), __render_pass.get()),
  __framebuffers(vk::utils::create_framebuffers(__device, __render_pass, __swapchain)),
  __cmd_buffers(vk::utils::create_cmd_buffers(__device, __cmd_pool, __framebuffers.size()))

  // __objects(0)
{
  const std::vector<vk::utils::vertex3> vertices = {
    // Передняя грань (Z = -0.5) - красный
    {{-0.5f, -0.5f, -0.5f}, {1.0f, 0.0f, 0.0f}},
    {{ 0.5f, -0.5f, -0.5f}, {1.0f, 0.0f, 0.0f}},
    {{ 0.5f,  0.5f, -0.5f}, {1.0f, 0.0f, 0.0f}},
    {{-0.5f,  0.5f, -0.5f}, {1.0f, 0.0f, 0.0f}},

    // Задняя грань (Z = +0.5) - зелёный
    {{-0.5f, -0.5f,  0.5f}, {0.0f, 1.0f, 0.0f}},
    {{ 0.5f, -0.5f,  0.5f}, {0.0f, 1.0f, 0.0f}},
    {{ 0.5f,  0.5f,  0.5f}, {0.0f, 1.0f, 0.0f}},
    {{-0.5f,  0.5f,  0.5f}, {0.0f, 1.0f, 0.0f}},

    // Левая грань (X = -0.5) - синий
    {{-0.5f, -0.5f, -0.5f}, {0.0f, 0.0f, 1.0f}},
    {{-0.5f, -0.5f,  0.5f}, {0.0f, 0.0f, 1.0f}},
    {{-0.5f,  0.5f,  0.5f}, {0.0f, 0.0f, 1.0f}},
    {{-0.5f,  0.5f, -0.5f}, {0.0f, 0.0f, 1.0f}},

    // Правая грань (X = +0.5) - жёлтый
    {{ 0.5f, -0.5f, -0.5f}, {1.0f, 1.0f, 0.0f}},
    {{ 0.5f, -0.5f,  0.5f}, {1.0f, 1.0f, 0.0f}},
    {{ 0.5f,  0.5f,  0.5f}, {1.0f, 1.0f, 0.0f}},
    {{ 0.5f,  0.5f, -0.5f}, {1.0f, 1.0f, 0.0f}},

    // Нижняя грань (Y = -0.5) - пурпурный
    {{-0.5f, -0.5f, -0.5f}, {1.0f, 0.0f, 1.0f}},
    {{ 0.5f, -0.5f, -0.5f}, {1.0f, 0.0f, 1.0f}},
    {{ 0.5f, -0.5f,  0.5f}, {1.0f, 0.0f, 1.0f}},
    {{-0.5f, -0.5f,  0.5f}, {1.0f, 0.0f, 1.0f}},

    // Верхняя грань (Y = +0.5) - белый
    {{-0.5f,  0.5f, -0.5f}, {1.0f, 1.0f, 1.0f}},
    {{ 0.5f,  0.5f, -0.5f}, {1.0f, 1.0f, 1.0f}},
    {{ 0.5f,  0.5f,  0.5f}, {1.0f, 1.0f, 1.0f}},
    {{-0.5f,  0.5f,  0.5f}, {1.0f, 1.0f, 1.0f}}
};

const std::vector<uint32_t> indices = {
    // Передняя грань (красная)
    0, 1, 2, 2, 3, 0,
    // Задняя грань (зелёная)
    4, 5, 6, 6, 7, 4,
    // Левая грань (синяя)
    8, 9, 10, 10, 11, 8,
    // Правая грань (жёлтая)
    12, 13, 14, 14, 15, 12,
    // Нижняя грань (пурпурная)
    16, 17, 18, 18, 19, 16,
    // Верхняя грань (белая)
    20, 21, 22, 22, 23, 20
};

  auto [vbuffer, vmemory] = vk::utils::create_vertex_buffer< vk::utils::vertex3 >(__device, vertices);
  __vertex_buffer = std::move(vbuffer);
  __vertex_memory = std::move(vmemory);

  auto [ibuffer, imemory] = vk::utils::create_index_buffer(__device, indices);
  __index_buffer = std::move(ibuffer);
  __index_memory = std::move(imemory);
}

bool
kochou::core::should_close() const
{
  return __window.should_close();
}

void
kochou::core::draw()
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

void
kochou::core::prepare()
{
  for (std::size_t i = 0; i < __cmd_buffers.size(); ++i)
  {
    vk::CommandBufferBeginInfo begin_info{};
    __cmd_buffers[i].begin(begin_info);

    vk::ClearValue clear_color(std::array< float, 4 >{0.0f, 0.0f, 0.0f, 1.0f});

    vk::ClearValue clear_depth(1.0f);
    std::array<vk::ClearValue, 2> clear_values = {clear_color, clear_depth};

    vk::RenderPassBeginInfo render_pass_info{
        *(__render_pass.get()),
        __framebuffers[i],
        vk::Rect2D(vk::Offset2D(0, 0), __swapchain.get_extent2d()),
        clear_values.size(),
        clear_values.data()
    };

    __cmd_buffers[i].beginRenderPass(render_pass_info, vk::SubpassContents::eInline);
    __cmd_buffers[i].bindPipeline(vk::PipelineBindPoint::eGraphics, __pipeline.get_pipeline());

    vk::Buffer vertex_buffers[] = {__vertex_buffer};
    vk::DeviceSize offsets[] = {0};
    __cmd_buffers[i].bindVertexBuffers(0, vertex_buffers, offsets);

    __cmd_buffers[i].bindIndexBuffer(__index_buffer, 0, vk::IndexType::eUint32);
    __cmd_buffers[i].drawIndexed(36, 1, 0, 0, 0);

    __cmd_buffers[i].endRenderPass();
    __cmd_buffers[i].end();
  }
}
