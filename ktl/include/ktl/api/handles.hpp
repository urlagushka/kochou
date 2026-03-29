#ifndef KTL_API_HANDLES_HPP
#define KTL_API_HANDLES_HPP

#include <ktl/api/enums.hpp>
#include <ktl/api/type.hpp>

namespace ktl::api
{
struct opaque_instance;
using ptr_instance = opaque_instance *;
template <>
struct ptr_meta< ptr_instance > final
{
    using parent = void;
    using type   = opaque_instance;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_instance)
    };
};

struct opaque_physical_device;
using ptr_physical_device = opaque_physical_device *;
template <>
struct ptr_meta< ptr_physical_device > final
{
    using parent = opaque_instance;
    using type   = opaque_physical_device;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_physical_device)
    };
};

struct opaque_device;
using ptr_device = opaque_device *;
template <>
struct ptr_meta< ptr_device > final
{
    using parent = opaque_physical_device;
    using type   = opaque_device;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_device)
    };
};

struct opaque_queue;
using ptr_queue = opaque_queue *;
template <>
struct ptr_meta< ptr_queue > final
{
    using parent = opaque_device;
    using type   = opaque_queue;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_queue)
    };
};

struct opaque_command_buffer;
using ptr_command_buffer = opaque_command_buffer *;
template <>
struct ptr_meta< ptr_command_buffer > final
{
    using parent = opaque_command_pool;
    using type   = opaque_command_buffer;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_command_buffer)
    };
};

struct opaque_device_memory;
using ptr_device_memory = opaque_device_memory *;
template <>
struct ptr_meta< ptr_device_memory > final
{
    using parent = opaque_device;
    using type   = opaque_device_memory;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_device_memory)
    };
};

struct opaque_command_pool;
using ptr_command_pool = opaque_command_pool *;
template <>
struct ptr_meta< ptr_command_pool > final
{
    using parent = opaque_device;
    using type   = opaque_command_pool;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_command_pool)
    };
};

struct opaque_buffer;
using ptr_buffer = opaque_buffer *;
template <>
struct ptr_meta< ptr_buffer > final
{
    using parent = opaque_device;
    using type   = opaque_buffer;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_buffer)
    };
};

struct opaque_buffer_view;
using ptr_buffer_view = opaque_buffer_view *;
template <>
struct ptr_meta< ptr_buffer_view > final
{
    using parent = opaque_device;
    using type   = opaque_buffer_view;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_buffer_view)
    };
};

struct opaque_image;
using ptr_image = opaque_image *;
template <>
struct ptr_meta< ptr_image > final
{
    using parent = opaque_device;
    using type   = opaque_image;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_image)
    };
};

struct opaque_image_view;
using ptr_image_view = opaque_image_view *;
template <>
struct ptr_meta< ptr_image_view > final
{
    using parent = opaque_device;
    using type   = opaque_image_view;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_image_view)
    };
};

struct opaque_shader_module;
using ptr_shader_module = opaque_shader_module *;
template <>
struct ptr_meta< ptr_shader_module > final
{
    using parent = opaque_device;
    using type   = opaque_shader_module;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_shader_module)
    };
};

struct opaque_pipeline;
using ptr_pipeline = opaque_pipeline *;
template <>
struct ptr_meta< ptr_pipeline > final
{
    using parent = opaque_device;
    using type   = opaque_pipeline;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline)
    };
};

struct opaque_pipeline_layout;
using ptr_pipeline_layout = opaque_pipeline_layout *;
template <>
struct ptr_meta< ptr_pipeline_layout > final
{
    using parent = opaque_device;
    using type   = opaque_pipeline_layout;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline_layout)
    };
};

struct opaque_sampler;
using ptr_sampler = opaque_sampler *;
template <>
struct ptr_meta< ptr_sampler > final
{
    using parent = opaque_device;
    using type   = opaque_sampler;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_sampler)
    };
};

struct opaque_descriptor_set;
using ptr_descriptor_set = opaque_descriptor_set *;
template <>
struct ptr_meta< ptr_descriptor_set > final
{
    using parent = opaque_descriptor_pool;
    using type   = opaque_descriptor_set;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_set)
    };
};

struct opaque_descriptor_set_layout;
using ptr_descriptor_set_layout = opaque_descriptor_set_layout *;
template <>
struct ptr_meta< ptr_descriptor_set_layout > final
{
    using parent = opaque_device;
    using type   = opaque_descriptor_set_layout;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_set_layout)
    };
};

struct opaque_descriptor_pool;
using ptr_descriptor_pool = opaque_descriptor_pool *;
template <>
struct ptr_meta< ptr_descriptor_pool > final
{
    using parent = opaque_device;
    using type   = opaque_descriptor_pool;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_pool)
    };
};

struct opaque_fence;
using ptr_fence = opaque_fence *;
template <>
struct ptr_meta< ptr_fence > final
{
    using parent = opaque_device;
    using type   = opaque_fence;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_fence)
    };
};

struct opaque_semaphore;
using ptr_semaphore = opaque_semaphore *;
template <>
struct ptr_meta< ptr_semaphore > final
{
    using parent = opaque_device;
    using type   = opaque_semaphore;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_semaphore)
    };
};

struct opaque_event;
using ptr_event = opaque_event *;
template <>
struct ptr_meta< ptr_event > final
{
    using parent = opaque_device;
    using type   = opaque_event;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_event)
    };
};

struct opaque_query_pool;
using ptr_query_pool = opaque_query_pool *;
template <>
struct ptr_meta< ptr_query_pool > final
{
    using parent = opaque_device;
    using type   = opaque_query_pool;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_query_pool)
    };
};

struct opaque_framebuffer;
using ptr_framebuffer = opaque_framebuffer *;
template <>
struct ptr_meta< ptr_framebuffer > final
{
    using parent = opaque_device;
    using type   = opaque_framebuffer;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_framebuffer)
    };
};

struct opaque_render_pass;
using ptr_render_pass = opaque_render_pass *;
template <>
struct ptr_meta< ptr_render_pass > final
{
    using parent = opaque_device;
    using type   = opaque_render_pass;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_render_pass)
    };
};

struct opaque_pipeline_cache;
using ptr_pipeline_cache = opaque_pipeline_cache *;
template <>
struct ptr_meta< ptr_pipeline_cache > final
{
    using parent = opaque_device;
    using type   = opaque_pipeline_cache;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline_cache)
    };
};

struct opaque_pipeline_binary_khr;
using ptr_pipeline_binary_khr = opaque_pipeline_binary_khr *;
template <>
struct ptr_meta< ptr_pipeline_binary_khr > final
{
    using parent = opaque_device;
    using type   = opaque_pipeline_binary_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline_binary_khr)
    };
};

struct opaque_indirect_commands_layout_nv;
using ptr_indirect_commands_layout_nv = opaque_indirect_commands_layout_nv *;
template <>
struct ptr_meta< ptr_indirect_commands_layout_nv > final
{
    using parent = opaque_device;
    using type   = opaque_indirect_commands_layout_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_indirect_commands_layout_nv)
    };
};

struct opaque_indirect_commands_layout_ext;
using ptr_indirect_commands_layout_ext = opaque_indirect_commands_layout_ext *;
template <>
struct ptr_meta< ptr_indirect_commands_layout_ext > final
{
    using parent = opaque_device;
    using type   = opaque_indirect_commands_layout_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_indirect_commands_layout_ext)
    };
};

struct opaque_indirect_execution_set_ext;
using ptr_indirect_execution_set_ext = opaque_indirect_execution_set_ext *;
template <>
struct ptr_meta< ptr_indirect_execution_set_ext > final
{
    using parent = opaque_device;
    using type   = opaque_indirect_execution_set_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_indirect_execution_set_ext)
    };
};

struct opaque_descriptor_update_template;
using ptr_descriptor_update_template = opaque_descriptor_update_template *;
template <>
struct ptr_meta< ptr_descriptor_update_template > final
{
    using parent = opaque_device;
    using type   = opaque_descriptor_update_template;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_update_template)
    };
};

struct opaque_descriptor_update_template;
using ptr_descriptor_update_template = opaque_descriptor_update_template *;
template <>
struct ptr_meta< ptr_descriptor_update_template > final
{
    using parent = opaque_device;
    using type   = opaque_descriptor_update_template;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_update_template)
    };
};

struct opaque_sampler_ycbcr_conversion;
using ptr_sampler_ycbcr_conversion = opaque_sampler_ycbcr_conversion *;
template <>
struct ptr_meta< ptr_sampler_ycbcr_conversion > final
{
    using parent = opaque_device;
    using type   = opaque_sampler_ycbcr_conversion;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_sampler_ycbcr_conversion)
    };
};

struct opaque_sampler_ycbcr_conversion;
using ptr_sampler_ycbcr_conversion = opaque_sampler_ycbcr_conversion *;
template <>
struct ptr_meta< ptr_sampler_ycbcr_conversion > final
{
    using parent = opaque_device;
    using type   = opaque_sampler_ycbcr_conversion;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_sampler_ycbcr_conversion)
    };
};

struct opaque_validation_cache_ext;
using ptr_validation_cache_ext = opaque_validation_cache_ext *;
template <>
struct ptr_meta< ptr_validation_cache_ext > final
{
    using parent = opaque_device;
    using type   = opaque_validation_cache_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_validation_cache_ext)
    };
};

struct opaque_acceleration_structure_khr;
using ptr_acceleration_structure_khr = opaque_acceleration_structure_khr *;
template <>
struct ptr_meta< ptr_acceleration_structure_khr > final
{
    using parent = opaque_device;
    using type   = opaque_acceleration_structure_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_acceleration_structure_khr)
    };
};

struct opaque_acceleration_structure_nv;
using ptr_acceleration_structure_nv = opaque_acceleration_structure_nv *;
template <>
struct ptr_meta< ptr_acceleration_structure_nv > final
{
    using parent = opaque_device;
    using type   = opaque_acceleration_structure_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_acceleration_structure_nv)
    };
};

struct opaque_performance_configuration_intel;
using ptr_performance_configuration_intel = opaque_performance_configuration_intel *;
template <>
struct ptr_meta< ptr_performance_configuration_intel > final
{
    using parent = opaque_device;
    using type   = opaque_performance_configuration_intel;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_performance_configuration_intel)
    };
};

struct opaque_buffer_collection_fuchsia;
using ptr_buffer_collection_fuchsia = opaque_buffer_collection_fuchsia *;
template <>
struct ptr_meta< ptr_buffer_collection_fuchsia > final
{
    using parent = opaque_device;
    using type   = opaque_buffer_collection_fuchsia;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_buffer_collection_fuchsia)
    };
};

struct opaque_deferred_operation_khr;
using ptr_deferred_operation_khr = opaque_deferred_operation_khr *;
template <>
struct ptr_meta< ptr_deferred_operation_khr > final
{
    using parent = opaque_device;
    using type   = opaque_deferred_operation_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_deferred_operation_khr)
    };
};

struct opaque_private_data_slot;
using ptr_private_data_slot = opaque_private_data_slot *;
template <>
struct ptr_meta< ptr_private_data_slot > final
{
    using parent = opaque_device;
    using type   = opaque_private_data_slot;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_private_data_slot)
    };
};

struct opaque_private_data_slot;
using ptr_private_data_slot = opaque_private_data_slot *;
template <>
struct ptr_meta< ptr_private_data_slot > final
{
    using parent = opaque_device;
    using type   = opaque_private_data_slot;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_private_data_slot)
    };
};

struct opaque_cu_module_nvx;
using ptr_cu_module_nvx = opaque_cu_module_nvx *;
template <>
struct ptr_meta< ptr_cu_module_nvx > final
{
    using parent = opaque_device;
    using type   = opaque_cu_module_nvx;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cu_module_nvx)
    };
};

struct opaque_cu_function_nvx;
using ptr_cu_function_nvx = opaque_cu_function_nvx *;
template <>
struct ptr_meta< ptr_cu_function_nvx > final
{
    using parent = opaque_device;
    using type   = opaque_cu_function_nvx;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cu_function_nvx)
    };
};

struct opaque_optical_flow_session_nv;
using ptr_optical_flow_session_nv = opaque_optical_flow_session_nv *;
template <>
struct ptr_meta< ptr_optical_flow_session_nv > final
{
    using parent = opaque_device;
    using type   = opaque_optical_flow_session_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_optical_flow_session_nv)
    };
};

struct opaque_micromap_ext;
using ptr_micromap_ext = opaque_micromap_ext *;
template <>
struct ptr_meta< ptr_micromap_ext > final
{
    using parent = opaque_device;
    using type   = opaque_micromap_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_micromap_ext)
    };
};

struct opaque_shader_ext;
using ptr_shader_ext = opaque_shader_ext *;
template <>
struct ptr_meta< ptr_shader_ext > final
{
    using parent = opaque_device;
    using type   = opaque_shader_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_shader_ext)
    };
};

struct opaque_tensor_arm;
using ptr_tensor_arm = opaque_tensor_arm *;
template <>
struct ptr_meta< ptr_tensor_arm > final
{
    using parent = opaque_device;
    using type   = opaque_tensor_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_tensor_arm)
    };
};

struct opaque_tensor_view_arm;
using ptr_tensor_view_arm = opaque_tensor_view_arm *;
template <>
struct ptr_meta< ptr_tensor_view_arm > final
{
    using parent = opaque_device;
    using type   = opaque_tensor_view_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_tensor_view_arm)
    };
};

struct opaque_data_graph_pipeline_session_arm;
using ptr_data_graph_pipeline_session_arm = opaque_data_graph_pipeline_session_arm *;
template <>
struct ptr_meta< ptr_data_graph_pipeline_session_arm > final
{
    using parent = opaque_device;
    using type   = opaque_data_graph_pipeline_session_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_data_graph_pipeline_session_arm)
    };
};

struct opaque_shader_instrumentation_arm;
using ptr_shader_instrumentation_arm = opaque_shader_instrumentation_arm *;
template <>
struct ptr_meta< ptr_shader_instrumentation_arm > final
{
    using parent = opaque_device;
    using type   = opaque_shader_instrumentation_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_shader_instrumentation_arm)
    };
};

struct opaque_display_khr;
using ptr_display_khr = opaque_display_khr *;
template <>
struct ptr_meta< ptr_display_khr > final
{
    using parent = opaque_physical_device;
    using type   = opaque_display_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_display_khr)
    };
};

struct opaque_display_mode_khr;
using ptr_display_mode_khr = opaque_display_mode_khr *;
template <>
struct ptr_meta< ptr_display_mode_khr > final
{
    using parent = opaque_display_khr;
    using type   = opaque_display_mode_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_display_mode_khr)
    };
};

struct opaque_surface_khr;
using ptr_surface_khr = opaque_surface_khr *;
template <>
struct ptr_meta< ptr_surface_khr > final
{
    using parent = opaque_instance;
    using type   = opaque_surface_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_surface_khr)
    };
};

struct opaque_swapchain_khr;
using ptr_swapchain_khr = opaque_swapchain_khr *;
template <>
struct ptr_meta< ptr_swapchain_khr > final
{
    using parent = opaque_device;
    using type   = opaque_swapchain_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_swapchain_khr)
    };
};

struct opaque_debug_report_callback_ext;
using ptr_debug_report_callback_ext = opaque_debug_report_callback_ext *;
template <>
struct ptr_meta< ptr_debug_report_callback_ext > final
{
    using parent = opaque_instance;
    using type   = opaque_debug_report_callback_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_debug_report_callback_ext)
    };
};

struct opaque_debug_utils_messenger_ext;
using ptr_debug_utils_messenger_ext = opaque_debug_utils_messenger_ext *;
template <>
struct ptr_meta< ptr_debug_utils_messenger_ext > final
{
    using parent = opaque_instance;
    using type   = opaque_debug_utils_messenger_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_debug_utils_messenger_ext)
    };
};

struct opaque_video_session_khr;
using ptr_video_session_khr = opaque_video_session_khr *;
template <>
struct ptr_meta< ptr_video_session_khr > final
{
    using parent = opaque_device;
    using type   = opaque_video_session_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_video_session_khr)
    };
};

struct opaque_video_session_parameters_khr;
using ptr_video_session_parameters_khr = opaque_video_session_parameters_khr *;
template <>
struct ptr_meta< ptr_video_session_parameters_khr > final
{
    using parent = opaque_device;
    using type   = opaque_video_session_parameters_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_video_session_parameters_khr)
    };
};

struct opaque_semaphore_sci_sync_pool_nv;
using ptr_semaphore_sci_sync_pool_nv = opaque_semaphore_sci_sync_pool_nv *;
template <>
struct ptr_meta< ptr_semaphore_sci_sync_pool_nv > final
{
    using parent = opaque_device;
    using type   = opaque_semaphore_sci_sync_pool_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_semaphore_sci_sync_pool_nv)
    };
};

struct opaque_cuda_module_nv;
using ptr_cuda_module_nv = opaque_cuda_module_nv *;
template <>
struct ptr_meta< ptr_cuda_module_nv > final
{
    using parent = opaque_device;
    using type   = opaque_cuda_module_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cuda_module_nv)
    };
};

struct opaque_cuda_function_nv;
using ptr_cuda_function_nv = opaque_cuda_function_nv *;
template <>
struct ptr_meta< ptr_cuda_function_nv > final
{
    using parent = opaque_device;
    using type   = opaque_cuda_function_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cuda_function_nv)
    };
};

struct opaque_external_compute_queue_nv;
using ptr_external_compute_queue_nv = opaque_external_compute_queue_nv *;
template <>
struct ptr_meta< ptr_external_compute_queue_nv > final
{
    using parent = opaque_device;
    using type   = opaque_external_compute_queue_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_external_compute_queue_nv)
    };
};

}

#endif
