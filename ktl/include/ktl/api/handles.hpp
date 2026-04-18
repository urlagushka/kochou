#ifndef KTL_API_HANDLES_HPP
#define KTL_API_HANDLES_HPP

#include <type_traits>

#ifndef KTL_API_API_HPP
#include "common.hpp"
#include "enums.hpp"
#endif

namespace ktl::api
{
template < typename T >
struct handle_meta
{
    using parent = T::parent;
    using type   = T::type;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = 0
    };
};

template <>
struct handle_meta< instance >
{
    using parent = void;
    using type   = opaque_instance;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_instance)
    };
};

template <>
struct handle_meta< physical_device >
{
    using parent = opaque_instance;
    using type   = opaque_physical_device;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_physical_device)
    };
};

template <>
struct handle_meta< device >
{
    using parent = opaque_physical_device;
    using type   = opaque_device;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_device)
    };
};

template <>
struct handle_meta< queue >
{
    using parent = opaque_device;
    using type   = opaque_queue;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_queue)
    };
};

template <>
struct handle_meta< command_buffer >
{
    using parent = opaque_command_pool;
    using type   = opaque_command_buffer;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_command_buffer)
    };
};

template <>
struct handle_meta< device_memory >
{
    using parent = opaque_device;
    using type   = opaque_device_memory;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_device_memory)
    };
};

template <>
struct handle_meta< command_pool >
{
    using parent = opaque_device;
    using type   = opaque_command_pool;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_command_pool)
    };
};

template <>
struct handle_meta< buffer >
{
    using parent = opaque_device;
    using type   = opaque_buffer;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_buffer)
    };
};

template <>
struct handle_meta< buffer_view >
{
    using parent = opaque_device;
    using type   = opaque_buffer_view;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_buffer_view)
    };
};

template <>
struct handle_meta< image >
{
    using parent = opaque_device;
    using type   = opaque_image;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_image)
    };
};

template <>
struct handle_meta< image_view >
{
    using parent = opaque_device;
    using type   = opaque_image_view;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_image_view)
    };
};

template <>
struct handle_meta< shader_module >
{
    using parent = opaque_device;
    using type   = opaque_shader_module;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_shader_module)
    };
};

template <>
struct handle_meta< pipeline >
{
    using parent = opaque_device;
    using type   = opaque_pipeline;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline)
    };
};

template <>
struct handle_meta< pipeline_layout >
{
    using parent = opaque_device;
    using type   = opaque_pipeline_layout;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline_layout)
    };
};

template <>
struct handle_meta< sampler >
{
    using parent = opaque_device;
    using type   = opaque_sampler;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_sampler)
    };
};

template <>
struct handle_meta< descriptor_set >
{
    using parent = opaque_descriptor_pool;
    using type   = opaque_descriptor_set;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_set)
    };
};

template <>
struct handle_meta< descriptor_set_layout >
{
    using parent = opaque_device;
    using type   = opaque_descriptor_set_layout;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_set_layout)
    };
};

template <>
struct handle_meta< descriptor_pool >
{
    using parent = opaque_device;
    using type   = opaque_descriptor_pool;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_pool)
    };
};

template <>
struct handle_meta< fence >
{
    using parent = opaque_device;
    using type   = opaque_fence;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_fence)
    };
};

template <>
struct handle_meta< semaphore >
{
    using parent = opaque_device;
    using type   = opaque_semaphore;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_semaphore)
    };
};

template <>
struct handle_meta< event >
{
    using parent = opaque_device;
    using type   = opaque_event;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_event)
    };
};

template <>
struct handle_meta< query_pool >
{
    using parent = opaque_device;
    using type   = opaque_query_pool;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_query_pool)
    };
};

template <>
struct handle_meta< framebuffer >
{
    using parent = opaque_device;
    using type   = opaque_framebuffer;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_framebuffer)
    };
};

template <>
struct handle_meta< render_pass >
{
    using parent = opaque_device;
    using type   = opaque_render_pass;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_render_pass)
    };
};

template <>
struct handle_meta< pipeline_cache >
{
    using parent = opaque_device;
    using type   = opaque_pipeline_cache;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline_cache)
    };
};

template <>
struct handle_meta< pipeline_binary_khr >
{
    using parent = opaque_device;
    using type   = opaque_pipeline_binary_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline_binary_khr)
    };
};

template <>
struct handle_meta< indirect_commands_layout_nv >
{
    using parent = opaque_device;
    using type   = opaque_indirect_commands_layout_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_indirect_commands_layout_nv)
    };
};

template <>
struct handle_meta< indirect_commands_layout_ext >
{
    using parent = opaque_device;
    using type   = opaque_indirect_commands_layout_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_indirect_commands_layout_ext)
    };
};

template <>
struct handle_meta< indirect_execution_set_ext >
{
    using parent = opaque_device;
    using type   = opaque_indirect_execution_set_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_indirect_execution_set_ext)
    };
};

template <>
struct handle_meta< descriptor_update_template >
{
    using parent = opaque_device;
    using type   = opaque_descriptor_update_template;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_update_template)
    };
};

template <>
struct handle_meta< sampler_ycbcr_conversion >
{
    using parent = opaque_device;
    using type   = opaque_sampler_ycbcr_conversion;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_sampler_ycbcr_conversion)
    };
};

template <>
struct handle_meta< validation_cache_ext >
{
    using parent = opaque_device;
    using type   = opaque_validation_cache_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_validation_cache_ext)
    };
};

template <>
struct handle_meta< acceleration_structure_khr >
{
    using parent = opaque_device;
    using type   = opaque_acceleration_structure_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_acceleration_structure_khr)
    };
};

template <>
struct handle_meta< acceleration_structure_nv >
{
    using parent = opaque_device;
    using type   = opaque_acceleration_structure_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_acceleration_structure_nv)
    };
};

template <>
struct handle_meta< performance_configuration_intel >
{
    using parent = opaque_device;
    using type   = opaque_performance_configuration_intel;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_performance_configuration_intel)
    };
};

template <>
struct handle_meta< buffer_collection_fuchsia >
{
    using parent = opaque_device;
    using type   = opaque_buffer_collection_fuchsia;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_buffer_collection_fuchsia)
    };
};

template <>
struct handle_meta< deferred_operation_khr >
{
    using parent = opaque_device;
    using type   = opaque_deferred_operation_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_deferred_operation_khr)
    };
};

template <>
struct handle_meta< private_data_slot >
{
    using parent = opaque_device;
    using type   = opaque_private_data_slot;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_private_data_slot)
    };
};

template <>
struct handle_meta< cu_module_nvx >
{
    using parent = opaque_device;
    using type   = opaque_cu_module_nvx;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cu_module_nvx)
    };
};

template <>
struct handle_meta< cu_function_nvx >
{
    using parent = opaque_device;
    using type   = opaque_cu_function_nvx;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cu_function_nvx)
    };
};

template <>
struct handle_meta< optical_flow_session_nv >
{
    using parent = opaque_device;
    using type   = opaque_optical_flow_session_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_optical_flow_session_nv)
    };
};

template <>
struct handle_meta< micromap_ext >
{
    using parent = opaque_device;
    using type   = opaque_micromap_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_micromap_ext)
    };
};

template <>
struct handle_meta< shader_ext >
{
    using parent = opaque_device;
    using type   = opaque_shader_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_shader_ext)
    };
};

template <>
struct handle_meta< tensor_arm >
{
    using parent = opaque_device;
    using type   = opaque_tensor_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_tensor_arm)
    };
};

template <>
struct handle_meta< tensor_view_arm >
{
    using parent = opaque_device;
    using type   = opaque_tensor_view_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_tensor_view_arm)
    };
};

template <>
struct handle_meta< data_graph_pipeline_session_arm >
{
    using parent = opaque_device;
    using type   = opaque_data_graph_pipeline_session_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_data_graph_pipeline_session_arm)
    };
};

template <>
struct handle_meta< shader_instrumentation_arm >
{
    using parent = opaque_device;
    using type   = opaque_shader_instrumentation_arm;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_shader_instrumentation_arm)
    };
};

template <>
struct handle_meta< display_khr >
{
    using parent = opaque_physical_device;
    using type   = opaque_display_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_display_khr)
    };
};

template <>
struct handle_meta< display_mode_khr >
{
    using parent = opaque_display_khr;
    using type   = opaque_display_mode_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_display_mode_khr)
    };
};

template <>
struct handle_meta< surface_khr >
{
    using parent = opaque_instance;
    using type   = opaque_surface_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_surface_khr)
    };
};

template <>
struct handle_meta< swapchain_khr >
{
    using parent = opaque_device;
    using type   = opaque_swapchain_khr;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_swapchain_khr)
    };
};

template <>
struct handle_meta< debug_report_callback_ext >
{
    using parent = opaque_instance;
    using type   = opaque_debug_report_callback_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_debug_report_callback_ext)
    };
};

template <>
struct handle_meta< debug_utils_messenger_ext >
{
    using parent = opaque_instance;
    using type   = opaque_debug_utils_messenger_ext;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_debug_utils_messenger_ext)
    };
};

template <>
struct handle_meta< semaphore_sci_sync_pool_nv >
{
    using parent = opaque_device;
    using type   = opaque_semaphore_sci_sync_pool_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_semaphore_sci_sync_pool_nv)
    };
};

template <>
struct handle_meta< cuda_module_nv >
{
    using parent = opaque_device;
    using type   = opaque_cuda_module_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cuda_module_nv)
    };
};

template <>
struct handle_meta< cuda_function_nv >
{
    using parent = opaque_device;
    using type   = opaque_cuda_function_nv;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cuda_function_nv)
    };
};

template <>
struct handle_meta< external_compute_queue_nv >
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
