#ifndef KTL_API_HANDLES_HPP
#define KTL_API_HANDLES_HPP

#include <ktl/api/enums.hpp>
#include <ktl/api/type.hpp>

namespace ktl::api
{
struct opaque_instance;
using instance = opaque_instance *;
template <>
struct ptr_meta< instance > final
{
    using parent = void;
    using type   = opaque_instance;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_instance)
    };
};

struct opaque_physical_device;
using physical_device = opaque_physical_device *;
template <>
struct ptr_meta< physical_device > final
{
    using parent = opaque_instance;
    using type   = opaque_physical_device;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object =
            static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_physical_device)
    };
};

struct opaque_device;
using device = opaque_device *;
template <>
struct ptr_meta< device > final
{
    using parent = opaque_physical_device;
    using type   = opaque_device;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_device)
    };
};

struct opaque_queue;
using queue = opaque_queue *;
template <>
struct ptr_meta< queue > final
{
    using parent = opaque_device;
    using type   = opaque_queue;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_queue)
    };
};

struct opaque_command_buffer;
using command_buffer = opaque_command_buffer *;
template <>
struct ptr_meta< command_buffer > final
{
    using parent = opaque_command_pool;
    using type   = opaque_command_buffer;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_command_buffer)
    };
};

struct opaque_device_memory;
using device_memory = opaque_device_memory *;
template <>
struct ptr_meta< device_memory > final
{
    using parent = opaque_device;
    using type   = opaque_device_memory;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_device_memory)
    };
};

struct opaque_command_pool;
using command_pool = opaque_command_pool *;
template <>
struct ptr_meta< command_pool > final
{
    using parent = opaque_device;
    using type   = opaque_command_pool;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_command_pool)
    };
};

struct opaque_buffer;
using buffer = opaque_buffer *;
template <>
struct ptr_meta< buffer > final
{
    using parent = opaque_device;
    using type   = opaque_buffer;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_buffer)
    };
};

struct opaque_buffer_view;
using buffer_view = opaque_buffer_view *;
template <>
struct ptr_meta< buffer_view > final
{
    using parent = opaque_device;
    using type   = opaque_buffer_view;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_buffer_view)
    };
};

struct opaque_image;
using image = opaque_image *;
template <>
struct ptr_meta< image > final
{
    using parent = opaque_device;
    using type   = opaque_image;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_image)
    };
};

struct opaque_image_view;
using image_view = opaque_image_view *;
template <>
struct ptr_meta< image_view > final
{
    using parent = opaque_device;
    using type   = opaque_image_view;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_image_view)
    };
};

struct opaque_shader_module;
using shader_module = opaque_shader_module *;
template <>
struct ptr_meta< shader_module > final
{
    using parent = opaque_device;
    using type   = opaque_shader_module;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_shader_module)
    };
};

struct opaque_pipeline;
using pipeline = opaque_pipeline *;
template <>
struct ptr_meta< pipeline > final
{
    using parent = opaque_device;
    using type   = opaque_pipeline;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline)
    };
};

struct opaque_pipeline_layout;
using pipeline_layout = opaque_pipeline_layout *;
template <>
struct ptr_meta< pipeline_layout > final
{
    using parent = opaque_device;
    using type   = opaque_pipeline_layout;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object =
            static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline_layout)
    };
};

struct opaque_sampler;
using sampler = opaque_sampler *;
template <>
struct ptr_meta< sampler > final
{
    using parent = opaque_device;
    using type   = opaque_sampler;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_sampler)
    };
};

struct opaque_descriptor_set;
using descriptor_set = opaque_descriptor_set *;
template <>
struct ptr_meta< descriptor_set > final
{
    using parent = opaque_descriptor_pool;
    using type   = opaque_descriptor_set;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_set)
    };
};

struct opaque_descriptor_set_layout;
using descriptor_set_layout = opaque_descriptor_set_layout *;
template <>
struct ptr_meta< descriptor_set_layout > final
{
    using parent = opaque_device;
    using type   = opaque_descriptor_set_layout;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_descriptor_set_layout)
    };
};

struct opaque_descriptor_pool;
using descriptor_pool = opaque_descriptor_pool *;
template <>
struct ptr_meta< descriptor_pool > final
{
    using parent = opaque_device;
    using type   = opaque_descriptor_pool;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object =
            static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_pool)
    };
};

struct opaque_fence;
using fence = opaque_fence *;
template <>
struct ptr_meta< fence > final
{
    using parent = opaque_device;
    using type   = opaque_fence;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_fence)
    };
};

struct opaque_semaphore;
using semaphore = opaque_semaphore *;
template <>
struct ptr_meta< semaphore > final
{
    using parent = opaque_device;
    using type   = opaque_semaphore;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_semaphore)
    };
};

struct opaque_event;
using event = opaque_event *;
template <>
struct ptr_meta< event > final
{
    using parent = opaque_device;
    using type   = opaque_event;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_event)
    };
};

struct opaque_query_pool;
using query_pool = opaque_query_pool *;
template <>
struct ptr_meta< query_pool > final
{
    using parent = opaque_device;
    using type   = opaque_query_pool;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_query_pool)
    };
};

struct opaque_framebuffer;
using framebuffer = opaque_framebuffer *;
template <>
struct ptr_meta< framebuffer > final
{
    using parent = opaque_device;
    using type   = opaque_framebuffer;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_framebuffer)
    };
};

struct opaque_render_pass;
using render_pass = opaque_render_pass *;
template <>
struct ptr_meta< render_pass > final
{
    using parent = opaque_device;
    using type   = opaque_render_pass;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_render_pass)
    };
};

struct opaque_pipeline_cache;
using pipeline_cache = opaque_pipeline_cache *;
template <>
struct ptr_meta< pipeline_cache > final
{
    using parent = opaque_device;
    using type   = opaque_pipeline_cache;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline_cache)
    };
};

struct opaque_pipeline_binary_khr;
using pipeline_binary_khr = opaque_pipeline_binary_khr *;
template <>
struct ptr_meta< pipeline_binary_khr > final
{
    using parent = opaque_device;
    using type   = opaque_pipeline_binary_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object =
            static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline_binary_khr)
    };
};

struct opaque_indirect_commands_layout_nv;
using indirect_commands_layout_nv = opaque_indirect_commands_layout_nv *;
template <>
struct ptr_meta< indirect_commands_layout_nv > final
{
    using parent = opaque_device;
    using type   = opaque_indirect_commands_layout_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_indirect_commands_layout_nv)
    };
};

struct opaque_indirect_commands_layout_ext;
using indirect_commands_layout_ext = opaque_indirect_commands_layout_ext *;
template <>
struct ptr_meta< indirect_commands_layout_ext > final
{
    using parent = opaque_device;
    using type   = opaque_indirect_commands_layout_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_indirect_commands_layout_ext)
    };
};

struct opaque_indirect_execution_set_ext;
using indirect_execution_set_ext = opaque_indirect_execution_set_ext *;
template <>
struct ptr_meta< indirect_execution_set_ext > final
{
    using parent = opaque_device;
    using type   = opaque_indirect_execution_set_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_indirect_execution_set_ext)
    };
};

struct opaque_descriptor_update_template;
using descriptor_update_template = opaque_descriptor_update_template *;
template <>
struct ptr_meta< descriptor_update_template > final
{
    using parent = opaque_device;
    using type   = opaque_descriptor_update_template;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_descriptor_update_template)
    };
};

using descriptor_update_template_khr = descriptor_update_template;

struct opaque_sampler_ycbcr_conversion;
using sampler_ycbcr_conversion = opaque_sampler_ycbcr_conversion *;
template <>
struct ptr_meta< sampler_ycbcr_conversion > final
{
    using parent = opaque_device;
    using type   = opaque_sampler_ycbcr_conversion;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_sampler_ycbcr_conversion)
    };
};

using sampler_ycbcr_conversion_khr = sampler_ycbcr_conversion;

struct opaque_validation_cache_ext;
using validation_cache_ext = opaque_validation_cache_ext *;
template <>
struct ptr_meta< validation_cache_ext > final
{
    using parent = opaque_device;
    using type   = opaque_validation_cache_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_validation_cache_ext)
    };
};

struct opaque_acceleration_structure_khr;
using acceleration_structure_khr = opaque_acceleration_structure_khr *;
template <>
struct ptr_meta< acceleration_structure_khr > final
{
    using parent = opaque_device;
    using type   = opaque_acceleration_structure_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_acceleration_structure_khr)
    };
};

struct opaque_acceleration_structure_nv;
using acceleration_structure_nv = opaque_acceleration_structure_nv *;
template <>
struct ptr_meta< acceleration_structure_nv > final
{
    using parent = opaque_device;
    using type   = opaque_acceleration_structure_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_acceleration_structure_nv)
    };
};

struct opaque_performance_configuration_intel;
using performance_configuration_intel = opaque_performance_configuration_intel *;
template <>
struct ptr_meta< performance_configuration_intel > final
{
    using parent = opaque_device;
    using type   = opaque_performance_configuration_intel;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_performance_configuration_intel)
    };
};

struct opaque_buffer_collection_fuchsia;
using buffer_collection_fuchsia = opaque_buffer_collection_fuchsia *;
template <>
struct ptr_meta< buffer_collection_fuchsia > final
{
    using parent = opaque_device;
    using type   = opaque_buffer_collection_fuchsia;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_buffer_collection_fuchsia)
    };
};

struct opaque_deferred_operation_khr;
using deferred_operation_khr = opaque_deferred_operation_khr *;
template <>
struct ptr_meta< deferred_operation_khr > final
{
    using parent = opaque_device;
    using type   = opaque_deferred_operation_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_deferred_operation_khr)
    };
};

struct opaque_private_data_slot;
using private_data_slot = opaque_private_data_slot *;
template <>
struct ptr_meta< private_data_slot > final
{
    using parent = opaque_device;
    using type   = opaque_private_data_slot;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object =
            static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_private_data_slot)
    };
};

using private_data_slot_ext = private_data_slot;

struct opaque_cu_module_nvx;
using cu_module_nvx = opaque_cu_module_nvx *;
template <>
struct ptr_meta< cu_module_nvx > final
{
    using parent = opaque_device;
    using type   = opaque_cu_module_nvx;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cu_module_nvx)
    };
};

struct opaque_cu_function_nvx;
using cu_function_nvx = opaque_cu_function_nvx *;
template <>
struct ptr_meta< cu_function_nvx > final
{
    using parent = opaque_device;
    using type   = opaque_cu_function_nvx;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object =
            static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cu_function_nvx)
    };
};

struct opaque_optical_flow_session_nv;
using optical_flow_session_nv = opaque_optical_flow_session_nv *;
template <>
struct ptr_meta< optical_flow_session_nv > final
{
    using parent = opaque_device;
    using type   = opaque_optical_flow_session_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_optical_flow_session_nv)
    };
};

struct opaque_micromap_ext;
using micromap_ext = opaque_micromap_ext *;
template <>
struct ptr_meta< micromap_ext > final
{
    using parent = opaque_device;
    using type   = opaque_micromap_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_micromap_ext)
    };
};

struct opaque_shader_ext;
using shader_ext = opaque_shader_ext *;
template <>
struct ptr_meta< shader_ext > final
{
    using parent = opaque_device;
    using type   = opaque_shader_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_shader_ext)
    };
};

struct opaque_tensor_arm;
using tensor_arm = opaque_tensor_arm *;
template <>
struct ptr_meta< tensor_arm > final
{
    using parent = opaque_device;
    using type   = opaque_tensor_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_tensor_arm)
    };
};

struct opaque_tensor_view_arm;
using tensor_view_arm = opaque_tensor_view_arm *;
template <>
struct ptr_meta< tensor_view_arm > final
{
    using parent = opaque_device;
    using type   = opaque_tensor_view_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object =
            static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_tensor_view_arm)
    };
};

struct opaque_data_graph_pipeline_session_arm;
using data_graph_pipeline_session_arm = opaque_data_graph_pipeline_session_arm *;
template <>
struct ptr_meta< data_graph_pipeline_session_arm > final
{
    using parent = opaque_device;
    using type   = opaque_data_graph_pipeline_session_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_data_graph_pipeline_session_arm)
    };
};

struct opaque_shader_instrumentation_arm;
using shader_instrumentation_arm = opaque_shader_instrumentation_arm *;
template <>
struct ptr_meta< shader_instrumentation_arm > final
{
    using parent = opaque_device;
    using type   = opaque_shader_instrumentation_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_shader_instrumentation_arm)
    };
};

struct opaque_display_khr;
using display_khr = opaque_display_khr *;
template <>
struct ptr_meta< display_khr > final
{
    using parent = opaque_physical_device;
    using type   = opaque_display_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_display_khr)
    };
};

struct opaque_display_mode_khr;
using display_mode_khr = opaque_display_mode_khr *;
template <>
struct ptr_meta< display_mode_khr > final
{
    using parent = opaque_display_khr;
    using type   = opaque_display_mode_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object =
            static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_display_mode_khr)
    };
};

struct opaque_surface_khr;
using surface_khr = opaque_surface_khr *;
template <>
struct ptr_meta< surface_khr > final
{
    using parent = opaque_instance;
    using type   = opaque_surface_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_surface_khr)
    };
};

struct opaque_swapchain_khr;
using swapchain_khr = opaque_swapchain_khr *;
template <>
struct ptr_meta< swapchain_khr > final
{
    using parent = opaque_device;
    using type   = opaque_swapchain_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_swapchain_khr)
    };
};

struct opaque_debug_report_callback_ext;
using debug_report_callback_ext = opaque_debug_report_callback_ext *;
template <>
struct ptr_meta< debug_report_callback_ext > final
{
    using parent = opaque_instance;
    using type   = opaque_debug_report_callback_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_debug_report_callback_ext)
    };
};

struct opaque_debug_utils_messenger_ext;
using debug_utils_messenger_ext = opaque_debug_utils_messenger_ext *;
template <>
struct ptr_meta< debug_utils_messenger_ext > final
{
    using parent = opaque_instance;
    using type   = opaque_debug_utils_messenger_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_debug_utils_messenger_ext)
    };
};

struct opaque_video_session_khr;
using video_session_khr = opaque_video_session_khr *;
template <>
struct ptr_meta< video_session_khr > final
{
    using parent = opaque_device;
    using type   = opaque_video_session_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object =
            static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_video_session_khr)
    };
};

struct opaque_video_session_parameters_khr;
using video_session_parameters_khr = opaque_video_session_parameters_khr *;
template <>
struct ptr_meta< video_session_parameters_khr > final
{
    using parent = opaque_device;
    using type   = opaque_video_session_parameters_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_video_session_parameters_khr)
    };
};

struct opaque_semaphore_sci_sync_pool_nv;
using semaphore_sci_sync_pool_nv = opaque_semaphore_sci_sync_pool_nv *;
template <>
struct ptr_meta< semaphore_sci_sync_pool_nv > final
{
    using parent = opaque_device;
    using type   = opaque_semaphore_sci_sync_pool_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_semaphore_sci_sync_pool_nv)
    };
};

struct opaque_cuda_module_nv;
using cuda_module_nv = opaque_cuda_module_nv *;
template <>
struct ptr_meta< cuda_module_nv > final
{
    using parent = opaque_device;
    using type   = opaque_cuda_module_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cuda_module_nv)
    };
};

struct opaque_cuda_function_nv;
using cuda_function_nv = opaque_cuda_function_nv *;
template <>
struct ptr_meta< cuda_function_nv > final
{
    using parent = opaque_device;
    using type   = opaque_cuda_function_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object =
            static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cuda_function_nv)
    };
};

struct opaque_external_compute_queue_nv;
using external_compute_queue_nv = opaque_external_compute_queue_nv *;
template <>
struct ptr_meta< external_compute_queue_nv > final
{
    using parent = opaque_device;
    using type   = opaque_external_compute_queue_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(
            ktl::api::object_type::v_external_compute_queue_nv)
    };
};

} // namespace ktl::api

#endif
