#ifndef KTL_API_HPP
#define KTL_API_HPP

#include <ktl/type.hpp>
#include <ktl/api/type.hpp>

#ifndef KTL_USE_PLATFORM_WIN32
using HINSTANCE           = int;
using HWND                = int;
using HMONITOR            = int;
using HANDLE              = int;
using SECURITY_ATTRIBUTES = int;
using DWORD               = int;
using LPCWSTR             = int;
#else
#include <windows.h>
#endif
#ifndef KTL_USE_PLATFORM_XLIB
using Display  = int;
using VisualID = int;
using Window   = int;
using RROutput = int;
#else
#include <X11/Xlib.h>
#include <X11/extensions/Xrandr.h>
#endif
#ifndef KTL_USE_PLATFORM_XCB
using xcb_connection_t = int;
using xcb_visualid_t   = int;
using xcb_window_t     = int;
#else
#include <xcb/xcb.h>
#endif
#ifndef KTL_USE_PLATFORM_WAYLAND
using wl_display = int;
using wl_surface = int;
#else
#include <wayland-client.h>
#endif
#ifndef KTL_USE_PLATFORM_DIRECTFB
using IDirectFB        = int;
using IDirectFBSurface = int;
#else
#include <directfb.h>
#endif
#ifndef KTL_USE_PLATFORM_GGP
using GgpStreamDescriptor = int;
using GgpFrameToken       = int;
#else
#error unsupported // TODO
#endif
#ifndef KTL_USE_PLATFORM_SCREEN_QNX
using _screen_context = int;
using _screen_window  = int;
using _screen_buffer  = int;
#else
#include <screen/screen.h>
#endif
#ifndef KTL_USE_PLATFORM_NVSCISYNC
using NvSciSyncAttrList = int;
using NvSciSyncObj      = int;
using NvSciSyncFence    = int;
using NvSciBufAttrList  = int;
using NvSciBufObj       = int;
#else
#include <nvscibuf.h>
#include <nvscisync.h>
#endif
#ifndef KTL_USE_PLATFORM_ZIRCON
using zx_handle_t = int;
#else
#include <zircon/types.h>
#endif
#ifndef KTL_USE_PLATFORM_UBM
using ubm_device  = int;
using ubm_surface = int;
#else
#include <ubm.h>
#endif
#ifndef KTL_USE_PLATFORM_HUAWEI
using OHNativeWindow  = int;
using OHBufferHandle  = int;
using OH_NativeBuffer = int;
#else
#error unsupported // TODO
#endif
#ifndef KTL_USE_PLATFORM_METAL
using CAMetalLayer       = int;
using MTLDevice_id       = int;
using MTLCommandQueue_id = int;
using MTLBuffer_id       = int;
using MTLTexture_id      = int;
using MTLSharedEvent_id  = int;
using IOSurfaceRef       = int;
#else
#error unsupported // TODO
#endif
#ifndef KTL_USE_PLATFORM_ANDROID
using ANativeWindow   = int;
using AHardwareBuffer = int;
#else
#error unsupported // TODO
#endif

namespace ktl::api
{
#define KTL_API_COMPUTE_OCCUPANCY_PRIORITY_NORMAL_NV 0.50f
#define KTL_API_COMPUTE_OCCUPANCY_PRIORITY_HIGH_NV 0.75f
#define KTL_API_COMPUTE_OCCUPANCY_PRIORITY_LOW_NV 0.25f
#define KTL_API_LOD_CLAMP_NONE 1000.0F
#define KTL_API_PARTITIONED_ACCELERATION_STRUCTURE_PARTITION_INDEX_GLOBAL_NV (~0U)
#define KTL_API_MAX_PHYSICAL_DEVICE_DATA_GRAPH_OPERATION_SET_NAME_SIZE_ARM 128
#define KTL_API_COMPRESSED_TRIANGLE_FORMAT_DGF1_BYTE_ALIGNMENT_AMDX 128
#define KTL_API_COMPRESSED_TRIANGLE_FORMAT_DGF1_BYTE_STRIDE_AMDX 128
#define KTL_API_DATA_GRAPH_MODEL_TOOLCHAIN_VERSION_LENGTH_QCOM 3
#define KTL_API_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR 7
#define KTL_API_MAX_VIDEO_VP9_REFERENCES_PER_FRAME_KHR 3
#define KTL_API_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT 32
#define KTL_API_MAX_DATA_GRAPH_TOSA_NAME_SIZE_ARM 128
#define KTL_API_MAX_PIPELINE_BINARY_KEY_SIZE_KHR 32
#define KTL_API_MAX_PHYSICAL_DEVICE_NAME_SIZE 256
#define KTL_API_QUEUE_FAMILY_FOREIGN_EXT (~2U)
#define KTL_API_MAX_GLOBAL_PRIORITY_SIZE 16
#define KTL_API_SHADER_INDEX_UNUSED_AMDX (~0U)
#define KTL_API_MAX_EXTENSION_NAME_SIZE 256
#define KTL_API_REMAINING_3D_SLICES_EXT (~0U)
#define KTL_API_REMAINING_ARRAY_LAYERS (~0U)
#define KTL_API_QUEUE_FAMILY_EXTERNAL (~1U)
#define KTL_API_MAX_DEVICE_GROUP_SIZE 32
#define KTL_API_MAX_DESCRIPTION_SIZE 256
#define KTL_API_REMAINING_MIP_LEVELS (~0U)
#define KTL_API_QUEUE_FAMILY_IGNORED (~0U)
#define KTL_API_MAX_DRIVER_NAME_SIZE 256
#define KTL_API_MAX_DRIVER_INFO_SIZE 256
#define KTL_API_ATTACHMENT_UNUSED (~0U)
#define KTL_API_SHADER_UNUSED_KHR (~0U)
#define KTL_API_MAX_MEMORY_TYPES 32
#define KTL_API_MAX_MEMORY_HEAPS 16
#define KTL_API_SUBPASS_EXTERNAL (~0U)
#define KTL_API_UUID_SIZE 16
#define KTL_API_LUID_SIZE 8
#define KTL_API_FALSE 0
#define KTL_API_TRUE 1
#define KTL_API_WHOLE_SIZE (~0ULL)

using framebuffer_create_flags = ktl::flag32;
using query_pool_create_flags = ktl::flag32;
using render_pass_create_flags = ktl::flag32;
using sampler_create_flags = ktl::flag32;
using pipeline_layout_create_flags = ktl::flag32;
using pipeline_cache_create_flags = ktl::flag32;
using pipeline_depth_stencil_state_create_flags = ktl::flag32;
using pipeline_depth_stencil_state_create_flags = ktl::flag32;
using pipeline_dynamic_state_create_flags = ktl::flag32;
using pipeline_color_blend_state_create_flags = ktl::flag32;
using pipeline_color_blend_state_create_flags = ktl::flag32;
using pipeline_multisample_state_create_flags = ktl::flag32;
using pipeline_rasterization_state_create_flags = ktl::flag32;
using pipeline_viewport_state_create_flags = ktl::flag32;
using pipeline_tessellation_state_create_flags = ktl::flag32;
using pipeline_input_assembly_state_create_flags = ktl::flag32;
using pipeline_vertex_input_state_create_flags = ktl::flag32;
using pipeline_shader_stage_create_flags = ktl::flag32;
using descriptor_set_layout_create_flags = ktl::flag32;
using buffer_view_create_flags = ktl::flag32;
using instance_create_flags = ktl::flag32;
using device_create_flags = ktl::flag32;
using device_queue_create_flags = ktl::flag32;
using queue_flags = ktl::flag32;
using memory_property_flags = ktl::flag32;
using memory_heap_flags = ktl::flag32;
using access_flags = ktl::flag32;
using buffer_usage_flags = ktl::flag32;
using buffer_create_flags = ktl::flag32;
using shader_stage_flags = ktl::flag32;
using image_usage_flags = ktl::flag32;
using image_create_flags = ktl::flag32;
using image_view_create_flags = ktl::flag32;
using pipeline_create_flags = ktl::flag32;
using color_component_flags = ktl::flag32;
using fence_create_flags = ktl::flag32;
using semaphore_create_flags = ktl::flag32;
using format_feature_flags = ktl::flag32;
using query_control_flags = ktl::flag32;
using query_result_flags = ktl::flag32;
using shader_module_create_flags = ktl::flag32;
using event_create_flags = ktl::flag32;
using command_pool_create_flags = ktl::flag32;
using command_pool_reset_flags = ktl::flag32;
using command_buffer_reset_flags = ktl::flag32;
using command_buffer_usage_flags = ktl::flag32;
using query_pipeline_statistic_flags = ktl::flag32;
using memory_map_flags = ktl::flag32;
using memory_unmap_flags = ktl::flag32;
using memory_unmap_flags_khr = ktl::flag32;
using image_aspect_flags = ktl::flag32;
using sparse_memory_bind_flags = ktl::flag32;
using sparse_image_format_flags = ktl::flag32;
using subpass_description_flags = ktl::flag32;
using pipeline_stage_flags = ktl::flag32;
using sample_count_flags = ktl::flag32;
using attachment_description_flags = ktl::flag32;
using stencil_face_flags = ktl::flag32;
using cull_mode_flags = ktl::flag32;
using descriptor_pool_create_flags = ktl::flag32;
using descriptor_pool_reset_flags = ktl::flag32;
using dependency_flags = ktl::flag32;
using subgroup_feature_flags = ktl::flag32;
using indirect_commands_layout_usage_flags_nv = ktl::flag32;
using indirect_state_flags_nv = ktl::flag32;
using geometry_flags_khr = ktl::flag32;
using geometry_flags_nv = ktl::flag32;
using geometry_instance_flags_khr = ktl::flag32;
using geometry_instance_flags_nv = ktl::flag32;
using cluster_acceleration_structure_geometry_flags_nv = ktl::flag32;
using cluster_acceleration_structure_cluster_flags_nv = ktl::flag32;
using cluster_acceleration_structure_address_resolution_flags_nv = ktl::flag32;
using build_acceleration_structure_flags_khr = ktl::flag32;
using build_acceleration_structure_flags_nv = ktl::flag32;
using private_data_slot_create_flags = ktl::flag32;
using private_data_slot_create_flags_ext = ktl::flag32;
using acceleration_structure_create_flags_khr = ktl::flag32;
using descriptor_update_template_create_flags = ktl::flag32;
using descriptor_update_template_create_flags_khr = ktl::flag32;
using pipeline_creation_feedback_flags = ktl::flag32;
using pipeline_creation_feedback_flags_ext = ktl::flag32;
using performance_counter_description_flags_khr = ktl::flag32;
using acquire_profiling_lock_flags_khr = ktl::flag32;
using semaphore_wait_flags = ktl::flag32;
using semaphore_wait_flags_khr = ktl::flag32;
using pipeline_compiler_control_flags_amd = ktl::flag32;
using shader_core_properties_flags_amd = ktl::flag32;
using device_diagnostics_config_flags_nv = ktl::flag32;
using refresh_object_flags_khr = ktl::flag32;
using access_flags2 = ktl::flag64;
using access_flags2khr = ktl::flag64;
using pipeline_stage_flags2 = ktl::flag64;
using pipeline_stage_flags2khr = ktl::flag64;
using acceleration_structure_motion_info_flags_nv = ktl::flag32;
using acceleration_structure_motion_instance_flags_nv = ktl::flag32;
using format_feature_flags2 = ktl::flag64;
using format_feature_flags2khr = ktl::flag64;
using rendering_flags = ktl::flag32;
using memory_decompression_method_flags_ext = ktl::flag64;
using memory_decompression_method_flags_nv = ktl::flag64;
using rendering_flags_khr = ktl::flag32;
using device_fault_flags_khr = ktl::flag32;
using build_micromap_flags_ext = ktl::flag32;
using micromap_create_flags_ext = ktl::flag32;
using indirect_commands_layout_usage_flags_ext = ktl::flag32;
using indirect_commands_input_mode_flags_ext = ktl::flag32;
using direct_driver_loading_flags_lunarg = ktl::flag32;
using pipeline_create_flags2 = ktl::flag64;
using pipeline_create_flags2khr = ktl::flag64;
using buffer_usage_flags2 = ktl::flag64;
using buffer_usage_flags2khr = ktl::flag64;
using address_copy_flags_khr = ktl::flag32;
using tensor_create_flags_arm = ktl::flag64;
using tensor_usage_flags_arm = ktl::flag64;
using tensor_view_create_flags_arm = ktl::flag64;
using data_graph_pipeline_session_create_flags_arm = ktl::flag64;
using data_graph_pipeline_dispatch_flags_arm = ktl::flag64;
using video_encode_rgb_model_conversion_flags_valve = ktl::flag32;
using video_encode_rgb_range_compression_flags_valve = ktl::flag32;
using video_encode_rgb_chroma_offset_flags_valve = ktl::flag32;
using spirv_resource_type_flags_ext = ktl::flag32;
using address_command_flags_khr = ktl::flag32;
using composite_alpha_flags_khr = ktl::flag32;
using display_plane_alpha_flags_khr = ktl::flag32;
using surface_transform_flags_khr = ktl::flag32;
using swapchain_create_flags_khr = ktl::flag32;
using display_mode_create_flags_khr = ktl::flag32;
using display_surface_create_flags_khr = ktl::flag32;
using android_surface_create_flags_khr = ktl::flag32;
using vi_surface_create_flags_nn = ktl::flag32;
using wayland_surface_create_flags_khr = ktl::flag32;
using ubm_surface_create_flags_sec = ktl::flag32;
using win32surface_create_flags_khr = ktl::flag32;
using xlib_surface_create_flags_khr = ktl::flag32;
using xcb_surface_create_flags_khr = ktl::flag32;
using direct_fbsurface_create_flags_ext = ktl::flag32;
using iossurface_create_flags_mvk = ktl::flag32;
using mac_ossurface_create_flags_mvk = ktl::flag32;
using metal_surface_create_flags_ext = ktl::flag32;
using image_pipe_surface_create_flags_fuchsia = ktl::flag32;
using stream_descriptor_surface_create_flags_ggp = ktl::flag32;
using headless_surface_create_flags_ext = ktl::flag32;
using screen_surface_create_flags_qnx = ktl::flag32;
using peer_memory_feature_flags = ktl::flag32;
using peer_memory_feature_flags_khr = ktl::flag32;
using memory_allocate_flags = ktl::flag32;
using memory_allocate_flags_khr = ktl::flag32;
using device_group_present_mode_flags_khr = ktl::flag32;
using debug_report_flags_ext = ktl::flag32;
using command_pool_trim_flags = ktl::flag32;
using command_pool_trim_flags_khr = ktl::flag32;
using external_memory_handle_type_flags_nv = ktl::flag32;
using cluster_acceleration_structure_index_format_flags_nv = ktl::flag32;
using external_memory_feature_flags_nv = ktl::flag32;
using external_memory_handle_type_flags = ktl::flag32;
using external_memory_handle_type_flags_khr = ktl::flag32;
using external_memory_feature_flags = ktl::flag32;
using external_memory_feature_flags_khr = ktl::flag32;
using external_semaphore_handle_type_flags = ktl::flag32;
using external_semaphore_handle_type_flags_khr = ktl::flag32;
using external_semaphore_feature_flags = ktl::flag32;
using external_semaphore_feature_flags_khr = ktl::flag32;
using semaphore_import_flags = ktl::flag32;
using semaphore_import_flags_khr = ktl::flag32;
using external_fence_handle_type_flags = ktl::flag32;
using external_fence_handle_type_flags_khr = ktl::flag32;
using external_fence_feature_flags = ktl::flag32;
using external_fence_feature_flags_khr = ktl::flag32;
using fence_import_flags = ktl::flag32;
using fence_import_flags_khr = ktl::flag32;
using surface_counter_flags_ext = ktl::flag32;
using pipeline_viewport_swizzle_state_create_flags_nv = ktl::flag32;
using pipeline_discard_rectangle_state_create_flags_ext = ktl::flag32;
using pipeline_coverage_to_color_state_create_flags_nv = ktl::flag32;
using pipeline_coverage_modulation_state_create_flags_nv = ktl::flag32;
using pipeline_coverage_reduction_state_create_flags_nv = ktl::flag32;
using validation_cache_create_flags_ext = ktl::flag32;
using debug_utils_message_severity_flags_ext = ktl::flag32;
using debug_utils_message_type_flags_ext = ktl::flag32;
using debug_utils_messenger_create_flags_ext = ktl::flag32;
using debug_utils_messenger_callback_data_flags_ext = ktl::flag32;
using device_memory_report_flags_ext = ktl::flag32;
using pipeline_rasterization_conservative_state_create_flags_ext = ktl::flag32;
using descriptor_binding_flags = ktl::flag32;
using descriptor_binding_flags_ext = ktl::flag32;
using conditional_rendering_flags_ext = ktl::flag32;
using resolve_mode_flags = ktl::flag32;
using resolve_mode_flags_khr = ktl::flag32;
using pipeline_rasterization_state_stream_create_flags_ext = ktl::flag32;
using pipeline_rasterization_depth_clip_state_create_flags_ext = ktl::flag32;
using swapchain_image_usage_flags_android = ktl::flag32;
using tool_purpose_flags = ktl::flag32;
using tool_purpose_flags_ext = ktl::flag32;
using submit_flags = ktl::flag32;
using submit_flags_khr = ktl::flag32;
using image_format_constraints_flags_fuchsia = ktl::flag32;
using host_image_copy_flags = ktl::flag32;
using host_image_copy_flags_ext = ktl::flag32;
using partitioned_acceleration_structure_instance_flags_nv = ktl::flag32;
using image_constraints_info_flags_fuchsia = ktl::flag32;
using graphics_pipeline_library_flags_ext = ktl::flag32;
using image_compression_flags_ext = ktl::flag32;
using image_compression_fixed_rate_flags_ext = ktl::flag32;
using export_metal_object_type_flags_ext = ktl::flag32;
using rendering_attachment_flags_khr = ktl::flag32;
using resolve_image_flags_khr = ktl::flag32;
using device_address_binding_flags_ext = ktl::flag32;
using optical_flow_grid_size_flags_nv = ktl::flag32;
using optical_flow_usage_flags_nv = ktl::flag32;
using optical_flow_session_create_flags_nv = ktl::flag32;
using optical_flow_execute_flags_nv = ktl::flag32;
using frame_boundary_flags_ext = ktl::flag32;
using present_scaling_flags_khr = ktl::flag32;
using present_scaling_flags_ext = ktl::flag32;
using present_gravity_flags_khr = ktl::flag32;
using present_gravity_flags_ext = ktl::flag32;
using shader_create_flags_ext = ktl::flag32;
using tile_shading_render_pass_flags_qcom = ktl::flag32;
using physical_device_scheduling_controls_flags_arm = ktl::flag64;
using surface_create_flags_ohos = ktl::flag32;
using present_stage_flags_ext = ktl::flag32;
using past_presentation_timing_flags_ext = ktl::flag32;
using present_timing_info_flags_ext = ktl::flag32;
using swapchain_image_usage_flags_ohos = ktl::flag32;
using performance_counter_description_flags_arm = ktl::flag32;
using shader_instrumentation_values_flags_arm = ktl::flag32;
using data_graph_tosaquality_flags_arm = ktl::flag32;
using data_graph_optical_flow_grid_size_flags_arm = ktl::flag32;
using data_graph_optical_flow_image_usage_flags_arm = ktl::flag32;
using data_graph_optical_flow_create_flags_arm = ktl::flag32;
using data_graph_optical_flow_execute_flags_arm = ktl::flag32;
using video_codec_operation_flags_khr = ktl::flag32;
using video_capability_flags_khr = ktl::flag32;
using video_session_create_flags_khr = ktl::flag32;
using video_session_parameters_create_flags_khr = ktl::flag32;
using video_begin_coding_flags_khr = ktl::flag32;
using video_end_coding_flags_khr = ktl::flag32;
using video_coding_control_flags_khr = ktl::flag32;
using video_decode_usage_flags_khr = ktl::flag32;
using video_decode_capability_flags_khr = ktl::flag32;
using video_decode_flags_khr = ktl::flag32;
using video_decode_h264picture_layout_flags_khr = ktl::flag32;
using video_encode_flags_khr = ktl::flag32;
using video_encode_usage_flags_khr = ktl::flag32;
using video_encode_content_flags_khr = ktl::flag32;
using video_encode_capability_flags_khr = ktl::flag32;
using video_encode_feedback_flags_khr = ktl::flag32;
using video_encode_rate_control_flags_khr = ktl::flag32;
using video_encode_rate_control_mode_flags_khr = ktl::flag32;
using video_encode_intra_refresh_mode_flags_khr = ktl::flag32;
using video_chroma_subsampling_flags_khr = ktl::flag32;
using video_component_bit_depth_flags_khr = ktl::flag32;
using video_encode_h264capability_flags_khr = ktl::flag32;
using video_encode_h264std_flags_khr = ktl::flag32;
using video_encode_h264rate_control_flags_khr = ktl::flag32;
using video_encode_h265capability_flags_khr = ktl::flag32;
using video_encode_h265std_flags_khr = ktl::flag32;
using video_encode_h265rate_control_flags_khr = ktl::flag32;
using video_encode_h265ctb_size_flags_khr = ktl::flag32;
using video_encode_h265transform_block_size_flags_khr = ktl::flag32;
using video_encode_av1capability_flags_khr = ktl::flag32;
using video_encode_av1std_flags_khr = ktl::flag32;
using video_encode_av1rate_control_flags_khr = ktl::flag32;
using video_encode_av1superblock_size_flags_khr = ktl::flag32;
using access_flags3khr = ktl::flag64;
enum class image_layout : ktl::u32
{
v_undefined = 0,
v_general = 1,
v_color_attachment_optimal = 2,
v_depth_stencil_attachment_optimal = 3,
v_depth_stencil_read_only_optimal = 4,
v_shader_read_only_optimal = 5,
v_transfer_src_optimal = 6,
v_transfer_dst_optimal = 7,
v_preinitialized = 8,
v_depth_read_only_stencil_attachment_optimal = 1117000,
v_depth_attachment_stencil_read_only_optimal = 1117001,
v_depth_attachment_optimal = 1241000,
v_depth_read_only_optimal = 1241001,
v_stencil_attachment_optimal = 1241002,
v_stencil_read_only_optimal = 1241003,
v_read_only_optimal = 1314000,
v_attachment_optimal = 1314001,
v_rendering_local_read = 1232000,
v_present_src_khr = 1001002,
v_shared_present_khr = 1111000,
v_fragment_density_map_optimal_ext = 1218000,
v_fragment_shading_rate_attachment_optimal_khr = 1226003,
v_attachment_feedback_loop_optimal_ext = 1339000,
v_tensor_aliasing_arm = 1460000,
v_zero_initialized_ext = 1620000,
v_depth_read_only_stencil_attachment_optimal_khr = v_depth_read_only_stencil_attachment_optimal,
v_depth_attachment_stencil_read_only_optimal_khr = v_depth_attachment_stencil_read_only_optimal,
v_shading_rate_optimal_nv = v_fragment_shading_rate_attachment_optimal_khr,
v_rendering_local_read_khr = v_rendering_local_read,
v_depth_attachment_optimal_khr = v_depth_attachment_optimal,
v_depth_read_only_optimal_khr = v_depth_read_only_optimal,
v_stencil_attachment_optimal_khr = v_stencil_attachment_optimal,
v_stencil_read_only_optimal_khr = v_stencil_read_only_optimal,
v_read_only_optimal_khr = v_read_only_optimal,
v_attachment_optimal_khr = v_attachment_optimal
};

enum class attachment_load_op : ktl::u32
{
v_load = 0,
v_clear = 1,
v_dont_care = 2,
v_none = 1400000,
v_none_ext = v_none,
v_none_khr = v_none
};

enum class attachment_store_op : ktl::u32
{
v_store = 0,
v_dont_care = 1,
v_none = 1301000,
v_none_khr = v_none,
v_none_qcom = v_none,
v_none_ext = v_none
};

enum class image_type : ktl::u32
{
v_1d = 0,
v_2d = 1,
v_3d = 2
};

enum class image_tiling : ktl::u32
{
v_optimal = 0,
v_linear = 1,
v_drm_format_modifier_ext = 1158000
};

enum class image_view_type : ktl::u32
{
v_1d = 0,
v_2d = 1,
v_3d = 2,
v_cube = 3,
v_1d_array = 4,
v_2d_array = 5,
v_cube_array = 6
};

enum class command_buffer_level : ktl::u32
{
v_primary = 0,
v_secondary = 1
};

enum class component_swizzle : ktl::u32
{
v_identity = 0,
v_zero = 1,
v_one = 2,
v_r = 3,
v_g = 4,
v_b = 5,
v_a = 6
};

enum class descriptor_type : ktl::u32
{
v_sampler = 0,
v_combined_image_sampler = 1,
v_sampled_image = 2,
v_storage_image = 3,
v_uniform_texel_buffer = 4,
v_storage_texel_buffer = 5,
v_uniform_buffer = 6,
v_storage_buffer = 7,
v_uniform_buffer_dynamic = 8,
v_storage_buffer_dynamic = 9,
v_input_attachment = 10,
v_inline_uniform_block = 1138000,
v_acceleration_structure_khr = 1150000,
v_acceleration_structure_nv = 1165000,
v_sample_weight_image_qcom = 1440000,
v_block_match_image_qcom = 1440001,
v_tensor_arm = 1460000,
v_mutable_ext = 1494000,
v_partitioned_acceleration_structure_nv = 1570000,
v_inline_uniform_block_ext = v_inline_uniform_block,
v_mutable_valve = v_mutable_ext
};

enum class query_type : ktl::u32
{
v_occlusion = 0,
v_pipeline_statistics = 1,
v_timestamp = 2,
v_result_status_only_khr = 1023000,
v_transform_feedback_stream_ext = 1028004,
v_performance_query_khr = 1116000,
v_acceleration_structure_compacted_size_khr = 1150000,
v_acceleration_structure_serialization_size_khr = 1150001,
v_acceleration_structure_compacted_size_nv = 1165000,
v_performance_query_intel = 1210000,
v_mesh_primitives_generated_ext = 1328000,
v_primitives_generated_ext = 1382000,
v_acceleration_structure_serialization_bottom_level_pointers_khr = 1386000,
v_acceleration_structure_size_khr = 1386001,
v_micromap_serialization_size_ext = 1396000,
v_micromap_compacted_size_ext = 1396001
};

enum class border_color : ktl::u32
{
v_float_transparent_black = 0,
v_int_transparent_black = 1,
v_float_opaque_black = 2,
v_int_opaque_black = 3,
v_float_opaque_white = 4,
v_int_opaque_white = 5,
v_float_custom_ext = 1287003,
v_int_custom_ext = 1287004
};

enum class pipeline_bind_point : ktl::u32
{
v_graphics = 0,
v_compute = 1,
v_execution_graph_amdx = 1134000,
v_ray_tracing_khr = 1347000,
v_subpass_shading_huawei = 1369003,
v_data_graph_arm = 1507000,
v_ray_tracing_nv = v_ray_tracing_khr
};

enum class pipeline_cache_header_version : ktl::u32
{
v_one = 1,
v_safety_critical_one = 1298001,
v_data_graph_qcom = 1629000
};

enum class pipeline_cache_create_flag_bits : ktl::u32
{
v_externally_synchronized_bit = (1U << 0),
v_read_only_bit = (1U << 1),
v_use_application_storage_bit = (1U << 2),
v_internally_synchronized_merge_bit_khr = (1U << 3),
v_externally_synchronized_bit_ext = v_externally_synchronized_bit
};

enum class primitive_topology : ktl::u32
{
v_point_list = 0,
v_line_list = 1,
v_line_strip = 2,
v_triangle_list = 3,
v_triangle_strip = 4,
v_triangle_fan = 5,
v_line_list_with_adjacency = 6,
v_line_strip_with_adjacency = 7,
v_triangle_list_with_adjacency = 8,
v_triangle_strip_with_adjacency = 9,
v_patch_list = 10
};

enum class sharing_mode : ktl::u32
{
v_exclusive = 0,
v_concurrent = 1
};

enum class index_type : ktl::u32
{
v_uint16 = 0,
v_uint32 = 1,
v_uint8 = 1265000,
v_none_khr = 1150000,
v_none_nv = v_none_khr,
v_uint8_ext = v_uint8,
v_uint8_khr = v_uint8
};

enum class filter : ktl::u32
{
v_nearest = 0,
v_linear = 1,
v_cubic_ext = 1170000,
v_cubic_img = v_cubic_ext
};

enum class sampler_mipmap_mode : ktl::u32
{
v_nearest = 0,
v_linear = 1
};

enum class sampler_address_mode : ktl::u32
{
v_repeat = 0,
v_mirrored_repeat = 1,
v_clamp_to_edge = 2,
v_clamp_to_border = 3,
v_mirror_clamp_to_edge = 4,
v_mirror_clamp_to_edge_khr [[deprecated]] = v_mirror_clamp_to_edge
};

enum class compare_op : ktl::u32
{
v_never = 0,
v_less = 1,
v_equal = 2,
v_less_or_equal = 3,
v_greater = 4,
v_not_equal = 5,
v_greater_or_equal = 6,
v_always = 7
};

enum class polygon_mode : ktl::u32
{
v_fill = 0,
v_line = 1,
v_point = 2,
v_fill_rectangle_nv = 1153000
};

enum class front_face : ktl::u32
{
v_counter_clockwise = 0,
v_clockwise = 1
};

enum class blend_factor : ktl::u32
{
v_zero = 0,
v_one = 1,
v_src_color = 2,
v_one_minus_src_color = 3,
v_dst_color = 4,
v_one_minus_dst_color = 5,
v_src_alpha = 6,
v_one_minus_src_alpha = 7,
v_dst_alpha = 8,
v_one_minus_dst_alpha = 9,
v_constant_color = 10,
v_one_minus_constant_color = 11,
v_constant_alpha = 12,
v_one_minus_constant_alpha = 13,
v_src_alpha_saturate = 14,
v_src1_color = 15,
v_one_minus_src1_color = 16,
v_src1_alpha = 17,
v_one_minus_src1_alpha = 18
};

enum class blend_op : ktl::u32
{
v_add = 0,
v_subtract = 1,
v_reverse_subtract = 2,
v_min = 3,
v_max = 4,
v_zero_ext = 1148000,
v_src_ext = 1148001,
v_dst_ext = 1148002,
v_src_over_ext = 1148003,
v_dst_over_ext = 1148004,
v_src_in_ext = 1148005,
v_dst_in_ext = 1148006,
v_src_out_ext = 1148007,
v_dst_out_ext = 1148008,
v_src_atop_ext = 1148009,
v_dst_atop_ext = 1148010,
v_xor_ext = 1148011,
v_multiply_ext = 1148012,
v_screen_ext = 1148013,
v_overlay_ext = 1148014,
v_darken_ext = 1148015,
v_lighten_ext = 1148016,
v_colordodge_ext = 1148017,
v_colorburn_ext = 1148018,
v_hardlight_ext = 1148019,
v_softlight_ext = 1148020,
v_difference_ext = 1148021,
v_exclusion_ext = 1148022,
v_invert_ext = 1148023,
v_invert_rgb_ext = 1148024,
v_lineardodge_ext = 1148025,
v_linearburn_ext = 1148026,
v_vividlight_ext = 1148027,
v_linearlight_ext = 1148028,
v_pinlight_ext = 1148029,
v_hardmix_ext = 1148030,
v_hsl_hue_ext = 1148031,
v_hsl_saturation_ext = 1148032,
v_hsl_color_ext = 1148033,
v_hsl_luminosity_ext = 1148034,
v_plus_ext = 1148035,
v_plus_clamped_ext = 1148036,
v_plus_clamped_alpha_ext = 1148037,
v_plus_darker_ext = 1148038,
v_minus_ext = 1148039,
v_minus_clamped_ext = 1148040,
v_contrast_ext = 1148041,
v_invert_ovg_ext = 1148042,
v_red_ext = 1148043,
v_green_ext = 1148044,
v_blue_ext = 1148045
};

enum class stencil_op : ktl::u32
{
v_keep = 0,
v_zero = 1,
v_replace = 2,
v_increment_and_clamp = 3,
v_decrement_and_clamp = 4,
v_invert = 5,
v_increment_and_wrap = 6,
v_decrement_and_wrap = 7
};

enum class logic_op : ktl::u32
{
v_clear = 0,
v_and = 1,
v_and_reverse = 2,
v_copy = 3,
v_and_inverted = 4,
v_no_op = 5,
v_xor = 6,
v_or = 7,
v_nor = 8,
v_equivalent = 9,
v_invert = 10,
v_or_reverse = 11,
v_copy_inverted = 12,
v_or_inverted = 13,
v_nand = 14,
v_set = 15
};

enum class internal_allocation_type : ktl::u32
{
v_executable = 0
};

enum class system_allocation_scope : ktl::u32
{
v_command = 0,
v_object = 1,
v_cache = 2,
v_device = 3,
v_instance = 4
};

enum class physical_device_type : ktl::u32
{
v_other = 0,
v_integrated_gpu = 1,
v_discrete_gpu = 2,
v_virtual_gpu = 3,
v_cpu = 4
};

enum class vertex_input_rate : ktl::u32
{
v_vertex = 0,
v_instance = 1
};

enum class format : ktl::u32
{
v_undefined = 0,
v_r4g4_unorm_pack8 = 1,
v_r4g4b4a4_unorm_pack16 = 2,
v_b4g4r4a4_unorm_pack16 = 3,
v_r5g6b5_unorm_pack16 = 4,
v_b5g6r5_unorm_pack16 = 5,
v_r5g5b5a1_unorm_pack16 = 6,
v_b5g5r5a1_unorm_pack16 = 7,
v_a1r5g5b5_unorm_pack16 = 8,
v_r8_unorm = 9,
v_r8_snorm = 10,
v_r8_uscaled = 11,
v_r8_sscaled = 12,
v_r8_uint = 13,
v_r8_sint = 14,
v_r8_srgb = 15,
v_r8g8_unorm = 16,
v_r8g8_snorm = 17,
v_r8g8_uscaled = 18,
v_r8g8_sscaled = 19,
v_r8g8_uint = 20,
v_r8g8_sint = 21,
v_r8g8_srgb = 22,
v_r8g8b8_unorm = 23,
v_r8g8b8_snorm = 24,
v_r8g8b8_uscaled = 25,
v_r8g8b8_sscaled = 26,
v_r8g8b8_uint = 27,
v_r8g8b8_sint = 28,
v_r8g8b8_srgb = 29,
v_b8g8r8_unorm = 30,
v_b8g8r8_snorm = 31,
v_b8g8r8_uscaled = 32,
v_b8g8r8_sscaled = 33,
v_b8g8r8_uint = 34,
v_b8g8r8_sint = 35,
v_b8g8r8_srgb = 36,
v_r8g8b8a8_unorm = 37,
v_r8g8b8a8_snorm = 38,
v_r8g8b8a8_uscaled = 39,
v_r8g8b8a8_sscaled = 40,
v_r8g8b8a8_uint = 41,
v_r8g8b8a8_sint = 42,
v_r8g8b8a8_srgb = 43,
v_b8g8r8a8_unorm = 44,
v_b8g8r8a8_snorm = 45,
v_b8g8r8a8_uscaled = 46,
v_b8g8r8a8_sscaled = 47,
v_b8g8r8a8_uint = 48,
v_b8g8r8a8_sint = 49,
v_b8g8r8a8_srgb = 50,
v_a8b8g8r8_unorm_pack32 = 51,
v_a8b8g8r8_snorm_pack32 = 52,
v_a8b8g8r8_uscaled_pack32 = 53,
v_a8b8g8r8_sscaled_pack32 = 54,
v_a8b8g8r8_uint_pack32 = 55,
v_a8b8g8r8_sint_pack32 = 56,
v_a8b8g8r8_srgb_pack32 = 57,
v_a2r10g10b10_unorm_pack32 = 58,
v_a2r10g10b10_snorm_pack32 = 59,
v_a2r10g10b10_uscaled_pack32 = 60,
v_a2r10g10b10_sscaled_pack32 = 61,
v_a2r10g10b10_uint_pack32 = 62,
v_a2r10g10b10_sint_pack32 = 63,
v_a2b10g10r10_unorm_pack32 = 64,
v_a2b10g10r10_snorm_pack32 = 65,
v_a2b10g10r10_uscaled_pack32 = 66,
v_a2b10g10r10_sscaled_pack32 = 67,
v_a2b10g10r10_uint_pack32 = 68,
v_a2b10g10r10_sint_pack32 = 69,
v_r16_unorm = 70,
v_r16_snorm = 71,
v_r16_uscaled = 72,
v_r16_sscaled = 73,
v_r16_uint = 74,
v_r16_sint = 75,
v_r16_sfloat = 76,
v_r16g16_unorm = 77,
v_r16g16_snorm = 78,
v_r16g16_uscaled = 79,
v_r16g16_sscaled = 80,
v_r16g16_uint = 81,
v_r16g16_sint = 82,
v_r16g16_sfloat = 83,
v_r16g16b16_unorm = 84,
v_r16g16b16_snorm = 85,
v_r16g16b16_uscaled = 86,
v_r16g16b16_sscaled = 87,
v_r16g16b16_uint = 88,
v_r16g16b16_sint = 89,
v_r16g16b16_sfloat = 90,
v_r16g16b16a16_unorm = 91,
v_r16g16b16a16_snorm = 92,
v_r16g16b16a16_uscaled = 93,
v_r16g16b16a16_sscaled = 94,
v_r16g16b16a16_uint = 95,
v_r16g16b16a16_sint = 96,
v_r16g16b16a16_sfloat = 97,
v_r32_uint = 98,
v_r32_sint = 99,
v_r32_sfloat = 100,
v_r32g32_uint = 101,
v_r32g32_sint = 102,
v_r32g32_sfloat = 103,
v_r32g32b32_uint = 104,
v_r32g32b32_sint = 105,
v_r32g32b32_sfloat = 106,
v_r32g32b32a32_uint = 107,
v_r32g32b32a32_sint = 108,
v_r32g32b32a32_sfloat = 109,
v_r64_uint = 110,
v_r64_sint = 111,
v_r64_sfloat = 112,
v_r64g64_uint = 113,
v_r64g64_sint = 114,
v_r64g64_sfloat = 115,
v_r64g64b64_uint = 116,
v_r64g64b64_sint = 117,
v_r64g64b64_sfloat = 118,
v_r64g64b64a64_uint = 119,
v_r64g64b64a64_sint = 120,
v_r64g64b64a64_sfloat = 121,
v_b10g11r11_ufloat_pack32 = 122,
v_e5b9g9r9_ufloat_pack32 = 123,
v_d16_unorm = 124,
v_x8_d24_unorm_pack32 = 125,
v_d32_sfloat = 126,
v_s8_uint = 127,
v_d16_unorm_s8_uint = 128,
v_d24_unorm_s8_uint = 129,
v_d32_sfloat_s8_uint = 130,
v_bc1_rgb_unorm_block = 131,
v_bc1_rgb_srgb_block = 132,
v_bc1_rgba_unorm_block = 133,
v_bc1_rgba_srgb_block = 134,
v_bc2_unorm_block = 135,
v_bc2_srgb_block = 136,
v_bc3_unorm_block = 137,
v_bc3_srgb_block = 138,
v_bc4_unorm_block = 139,
v_bc4_snorm_block = 140,
v_bc5_unorm_block = 141,
v_bc5_snorm_block = 142,
v_bc6h_ufloat_block = 143,
v_bc6h_sfloat_block = 144,
v_bc7_unorm_block = 145,
v_bc7_srgb_block = 146,
v_etc2_r8g8b8_unorm_block = 147,
v_etc2_r8g8b8_srgb_block = 148,
v_etc2_r8g8b8a1_unorm_block = 149,
v_etc2_r8g8b8a1_srgb_block = 150,
v_etc2_r8g8b8a8_unorm_block = 151,
v_etc2_r8g8b8a8_srgb_block = 152,
v_eac_r11_unorm_block = 153,
v_eac_r11_snorm_block = 154,
v_eac_r11g11_unorm_block = 155,
v_eac_r11g11_snorm_block = 156,
v_astc_4x4_unorm_block = 157,
v_astc_4x4_srgb_block = 158,
v_astc_5x4_unorm_block = 159,
v_astc_5x4_srgb_block = 160,
v_astc_5x5_unorm_block = 161,
v_astc_5x5_srgb_block = 162,
v_astc_6x5_unorm_block = 163,
v_astc_6x5_srgb_block = 164,
v_astc_6x6_unorm_block = 165,
v_astc_6x6_srgb_block = 166,
v_astc_8x5_unorm_block = 167,
v_astc_8x5_srgb_block = 168,
v_astc_8x6_unorm_block = 169,
v_astc_8x6_srgb_block = 170,
v_astc_8x8_unorm_block = 171,
v_astc_8x8_srgb_block = 172,
v_astc_10x5_unorm_block = 173,
v_astc_10x5_srgb_block = 174,
v_astc_10x6_unorm_block = 175,
v_astc_10x6_srgb_block = 176,
v_astc_10x8_unorm_block = 177,
v_astc_10x8_srgb_block = 178,
v_astc_10x10_unorm_block = 179,
v_astc_10x10_srgb_block = 180,
v_astc_12x10_unorm_block = 181,
v_astc_12x10_srgb_block = 182,
v_astc_12x12_unorm_block = 183,
v_astc_12x12_srgb_block = 184,
v_g8b8g8r8_422_unorm = 1156000,
v_b8g8r8g8_422_unorm = 1156001,
v_g8_b8_r8_3plane_420_unorm = 1156002,
v_g8_b8r8_2plane_420_unorm = 1156003,
v_g8_b8_r8_3plane_422_unorm = 1156004,
v_g8_b8r8_2plane_422_unorm = 1156005,
v_g8_b8_r8_3plane_444_unorm = 1156006,
v_r10x6_unorm_pack16 = 1156007,
v_r10x6g10x6_unorm_2pack16 = 1156008,
v_r10x6g10x6b10x6a10x6_unorm_4pack16 = 1156009,
v_g10x6b10x6g10x6r10x6_422_unorm_4pack16 = 1156010,
v_b10x6g10x6r10x6g10x6_422_unorm_4pack16 = 1156011,
v_g10x6_b10x6_r10x6_3plane_420_unorm_3pack16 = 1156012,
v_g10x6_b10x6r10x6_2plane_420_unorm_3pack16 = 1156013,
v_g10x6_b10x6_r10x6_3plane_422_unorm_3pack16 = 1156014,
v_g10x6_b10x6r10x6_2plane_422_unorm_3pack16 = 1156015,
v_g10x6_b10x6_r10x6_3plane_444_unorm_3pack16 = 1156016,
v_r12x4_unorm_pack16 = 1156017,
v_r12x4g12x4_unorm_2pack16 = 1156018,
v_r12x4g12x4b12x4a12x4_unorm_4pack16 = 1156019,
v_g12x4b12x4g12x4r12x4_422_unorm_4pack16 = 1156020,
v_b12x4g12x4r12x4g12x4_422_unorm_4pack16 = 1156021,
v_g12x4_b12x4_r12x4_3plane_420_unorm_3pack16 = 1156022,
v_g12x4_b12x4r12x4_2plane_420_unorm_3pack16 = 1156023,
v_g12x4_b12x4_r12x4_3plane_422_unorm_3pack16 = 1156024,
v_g12x4_b12x4r12x4_2plane_422_unorm_3pack16 = 1156025,
v_g12x4_b12x4_r12x4_3plane_444_unorm_3pack16 = 1156026,
v_g16b16g16r16_422_unorm = 1156027,
v_b16g16r16g16_422_unorm = 1156028,
v_g16_b16_r16_3plane_420_unorm = 1156029,
v_g16_b16r16_2plane_420_unorm = 1156030,
v_g16_b16_r16_3plane_422_unorm = 1156031,
v_g16_b16r16_2plane_422_unorm = 1156032,
v_g16_b16_r16_3plane_444_unorm = 1156033,
v_g8_b8r8_2plane_444_unorm = 1330000,
v_g10x6_b10x6r10x6_2plane_444_unorm_3pack16 = 1330001,
v_g12x4_b12x4r12x4_2plane_444_unorm_3pack16 = 1330002,
v_g16_b16r16_2plane_444_unorm = 1330003,
v_a4r4g4b4_unorm_pack16 = 1340000,
v_a4b4g4r4_unorm_pack16 = 1340001,
v_astc_4x4_sfloat_block = 1066000,
v_astc_5x4_sfloat_block = 1066001,
v_astc_5x5_sfloat_block = 1066002,
v_astc_6x5_sfloat_block = 1066003,
v_astc_6x6_sfloat_block = 1066004,
v_astc_8x5_sfloat_block = 1066005,
v_astc_8x6_sfloat_block = 1066006,
v_astc_8x8_sfloat_block = 1066007,
v_astc_10x5_sfloat_block = 1066008,
v_astc_10x6_sfloat_block = 1066009,
v_astc_10x8_sfloat_block = 1066010,
v_astc_10x10_sfloat_block = 1066011,
v_astc_12x10_sfloat_block = 1066012,
v_astc_12x12_sfloat_block = 1066013,
v_a1b5g5r5_unorm_pack16 = 1470000,
v_a8_unorm = 1470001,
v_pvrtc1_2bpp_unorm_block_img = 1054000,
v_pvrtc1_4bpp_unorm_block_img = 1054001,
v_pvrtc2_2bpp_unorm_block_img = 1054002,
v_pvrtc2_4bpp_unorm_block_img = 1054003,
v_pvrtc1_2bpp_srgb_block_img = 1054004,
v_pvrtc1_4bpp_srgb_block_img = 1054005,
v_pvrtc2_2bpp_srgb_block_img = 1054006,
v_pvrtc2_4bpp_srgb_block_img = 1054007,
v_astc_3x3x3_unorm_block_ext = 1288000,
v_astc_3x3x3_srgb_block_ext = 1288001,
v_astc_3x3x3_sfloat_block_ext = 1288002,
v_astc_4x3x3_unorm_block_ext = 1288003,
v_astc_4x3x3_srgb_block_ext = 1288004,
v_astc_4x3x3_sfloat_block_ext = 1288005,
v_astc_4x4x3_unorm_block_ext = 1288006,
v_astc_4x4x3_srgb_block_ext = 1288007,
v_astc_4x4x3_sfloat_block_ext = 1288008,
v_astc_4x4x4_unorm_block_ext = 1288009,
v_astc_4x4x4_srgb_block_ext = 1288010,
v_astc_4x4x4_sfloat_block_ext = 1288011,
v_astc_5x4x4_unorm_block_ext = 1288012,
v_astc_5x4x4_srgb_block_ext = 1288013,
v_astc_5x4x4_sfloat_block_ext = 1288014,
v_astc_5x5x4_unorm_block_ext = 1288015,
v_astc_5x5x4_srgb_block_ext = 1288016,
v_astc_5x5x4_sfloat_block_ext = 1288017,
v_astc_5x5x5_unorm_block_ext = 1288018,
v_astc_5x5x5_srgb_block_ext = 1288019,
v_astc_5x5x5_sfloat_block_ext = 1288020,
v_astc_6x5x5_unorm_block_ext = 1288021,
v_astc_6x5x5_srgb_block_ext = 1288022,
v_astc_6x5x5_sfloat_block_ext = 1288023,
v_astc_6x6x5_unorm_block_ext = 1288024,
v_astc_6x6x5_srgb_block_ext = 1288025,
v_astc_6x6x5_sfloat_block_ext = 1288026,
v_astc_6x6x6_unorm_block_ext = 1288027,
v_astc_6x6x6_srgb_block_ext = 1288028,
v_astc_6x6x6_sfloat_block_ext = 1288029,
v_r8_bool_arm = 1460000,
v_r16_sfloat_fpencoding_bfloat16_arm = 1460001,
v_r8_sfloat_fpencoding_float8e4m3_arm = 1460002,
v_r8_sfloat_fpencoding_float8e5m2_arm = 1460003,
v_r16g16_sfixed5_nv = 1464000,
v_r10x6_uint_pack16_arm = 1609000,
v_r10x6g10x6_uint_2pack16_arm = 1609001,
v_r10x6g10x6b10x6a10x6_uint_4pack16_arm = 1609002,
v_r12x4_uint_pack16_arm = 1609003,
v_r12x4g12x4_uint_2pack16_arm = 1609004,
v_r12x4g12x4b12x4a12x4_uint_4pack16_arm = 1609005,
v_r14x2_uint_pack16_arm = 1609006,
v_r14x2g14x2_uint_2pack16_arm = 1609007,
v_r14x2g14x2b14x2a14x2_uint_4pack16_arm = 1609008,
v_r14x2_unorm_pack16_arm = 1609009,
v_r14x2g14x2_unorm_2pack16_arm = 1609010,
v_r14x2g14x2b14x2a14x2_unorm_4pack16_arm = 1609011,
v_g14x2_b14x2r14x2_2plane_420_unorm_3pack16_arm = 1609012,
v_g14x2_b14x2r14x2_2plane_422_unorm_3pack16_arm = 1609013,
v_astc_4x4_sfloat_block_ext = v_astc_4x4_sfloat_block,
v_astc_5x4_sfloat_block_ext = v_astc_5x4_sfloat_block,
v_astc_5x5_sfloat_block_ext = v_astc_5x5_sfloat_block,
v_astc_6x5_sfloat_block_ext = v_astc_6x5_sfloat_block,
v_astc_6x6_sfloat_block_ext = v_astc_6x6_sfloat_block,
v_astc_8x5_sfloat_block_ext = v_astc_8x5_sfloat_block,
v_astc_8x6_sfloat_block_ext = v_astc_8x6_sfloat_block,
v_astc_8x8_sfloat_block_ext = v_astc_8x8_sfloat_block,
v_astc_10x5_sfloat_block_ext = v_astc_10x5_sfloat_block,
v_astc_10x6_sfloat_block_ext = v_astc_10x6_sfloat_block,
v_astc_10x8_sfloat_block_ext = v_astc_10x8_sfloat_block,
v_astc_10x10_sfloat_block_ext = v_astc_10x10_sfloat_block,
v_astc_12x10_sfloat_block_ext = v_astc_12x10_sfloat_block,
v_astc_12x12_sfloat_block_ext = v_astc_12x12_sfloat_block,
v_g8b8g8r8_422_unorm_khr = v_g8b8g8r8_422_unorm,
v_b8g8r8g8_422_unorm_khr = v_b8g8r8g8_422_unorm,
v_g8_b8_r8_3plane_420_unorm_khr = v_g8_b8_r8_3plane_420_unorm,
v_g8_b8r8_2plane_420_unorm_khr = v_g8_b8r8_2plane_420_unorm,
v_g8_b8_r8_3plane_422_unorm_khr = v_g8_b8_r8_3plane_422_unorm,
v_g8_b8r8_2plane_422_unorm_khr = v_g8_b8r8_2plane_422_unorm,
v_g8_b8_r8_3plane_444_unorm_khr = v_g8_b8_r8_3plane_444_unorm,
v_r10x6_unorm_pack16_khr = v_r10x6_unorm_pack16,
v_r10x6g10x6_unorm_2pack16_khr = v_r10x6g10x6_unorm_2pack16,
v_r10x6g10x6b10x6a10x6_unorm_4pack16_khr = v_r10x6g10x6b10x6a10x6_unorm_4pack16,
v_g10x6b10x6g10x6r10x6_422_unorm_4pack16_khr = v_g10x6b10x6g10x6r10x6_422_unorm_4pack16,
v_b10x6g10x6r10x6g10x6_422_unorm_4pack16_khr = v_b10x6g10x6r10x6g10x6_422_unorm_4pack16,
v_g10x6_b10x6_r10x6_3plane_420_unorm_3pack16_khr = v_g10x6_b10x6_r10x6_3plane_420_unorm_3pack16,
v_g10x6_b10x6r10x6_2plane_420_unorm_3pack16_khr = v_g10x6_b10x6r10x6_2plane_420_unorm_3pack16,
v_g10x6_b10x6_r10x6_3plane_422_unorm_3pack16_khr = v_g10x6_b10x6_r10x6_3plane_422_unorm_3pack16,
v_g10x6_b10x6r10x6_2plane_422_unorm_3pack16_khr = v_g10x6_b10x6r10x6_2plane_422_unorm_3pack16,
v_g10x6_b10x6_r10x6_3plane_444_unorm_3pack16_khr = v_g10x6_b10x6_r10x6_3plane_444_unorm_3pack16,
v_r12x4_unorm_pack16_khr = v_r12x4_unorm_pack16,
v_r12x4g12x4_unorm_2pack16_khr = v_r12x4g12x4_unorm_2pack16,
v_r12x4g12x4b12x4a12x4_unorm_4pack16_khr = v_r12x4g12x4b12x4a12x4_unorm_4pack16,
v_g12x4b12x4g12x4r12x4_422_unorm_4pack16_khr = v_g12x4b12x4g12x4r12x4_422_unorm_4pack16,
v_b12x4g12x4r12x4g12x4_422_unorm_4pack16_khr = v_b12x4g12x4r12x4g12x4_422_unorm_4pack16,
v_g12x4_b12x4_r12x4_3plane_420_unorm_3pack16_khr = v_g12x4_b12x4_r12x4_3plane_420_unorm_3pack16,
v_g12x4_b12x4r12x4_2plane_420_unorm_3pack16_khr = v_g12x4_b12x4r12x4_2plane_420_unorm_3pack16,
v_g12x4_b12x4_r12x4_3plane_422_unorm_3pack16_khr = v_g12x4_b12x4_r12x4_3plane_422_unorm_3pack16,
v_g12x4_b12x4r12x4_2plane_422_unorm_3pack16_khr = v_g12x4_b12x4r12x4_2plane_422_unorm_3pack16,
v_g12x4_b12x4_r12x4_3plane_444_unorm_3pack16_khr = v_g12x4_b12x4_r12x4_3plane_444_unorm_3pack16,
v_g16b16g16r16_422_unorm_khr = v_g16b16g16r16_422_unorm,
v_b16g16r16g16_422_unorm_khr = v_b16g16r16g16_422_unorm,
v_g16_b16_r16_3plane_420_unorm_khr = v_g16_b16_r16_3plane_420_unorm,
v_g16_b16r16_2plane_420_unorm_khr = v_g16_b16r16_2plane_420_unorm,
v_g16_b16_r16_3plane_422_unorm_khr = v_g16_b16_r16_3plane_422_unorm,
v_g16_b16r16_2plane_422_unorm_khr = v_g16_b16r16_2plane_422_unorm,
v_g16_b16_r16_3plane_444_unorm_khr = v_g16_b16_r16_3plane_444_unorm,
v_g8_b8r8_2plane_444_unorm_ext = v_g8_b8r8_2plane_444_unorm,
v_g10x6_b10x6r10x6_2plane_444_unorm_3pack16_ext = v_g10x6_b10x6r10x6_2plane_444_unorm_3pack16,
v_g12x4_b12x4r12x4_2plane_444_unorm_3pack16_ext = v_g12x4_b12x4r12x4_2plane_444_unorm_3pack16,
v_g16_b16r16_2plane_444_unorm_ext = v_g16_b16r16_2plane_444_unorm,
v_a4r4g4b4_unorm_pack16_ext = v_a4r4g4b4_unorm_pack16,
v_a4b4g4r4_unorm_pack16_ext = v_a4b4g4r4_unorm_pack16,
v_r16g16_s10_5_nv [[deprecated]] = v_r16g16_sfixed5_nv,
v_a1b5g5r5_unorm_pack16_khr = v_a1b5g5r5_unorm_pack16,
v_a8_unorm_khr = v_a8_unorm
};

enum class structure_type : ktl::u32
{
v_application_info = 0,
v_instance_create_info = 1,
v_device_queue_create_info = 2,
v_device_create_info = 3,
v_submit_info = 4,
v_memory_allocate_info = 5,
v_mapped_memory_range = 6,
v_bind_sparse_info = 7,
v_fence_create_info = 8,
v_semaphore_create_info = 9,
v_event_create_info = 10,
v_query_pool_create_info = 11,
v_buffer_create_info = 12,
v_buffer_view_create_info = 13,
v_image_create_info = 14,
v_image_view_create_info = 15,
v_shader_module_create_info = 16,
v_pipeline_cache_create_info = 17,
v_pipeline_shader_stage_create_info = 18,
v_pipeline_vertex_input_state_create_info = 19,
v_pipeline_input_assembly_state_create_info = 20,
v_pipeline_tessellation_state_create_info = 21,
v_pipeline_viewport_state_create_info = 22,
v_pipeline_rasterization_state_create_info = 23,
v_pipeline_multisample_state_create_info = 24,
v_pipeline_depth_stencil_state_create_info = 25,
v_pipeline_color_blend_state_create_info = 26,
v_pipeline_dynamic_state_create_info = 27,
v_graphics_pipeline_create_info = 28,
v_compute_pipeline_create_info = 29,
v_pipeline_layout_create_info = 30,
v_sampler_create_info = 31,
v_descriptor_set_layout_create_info = 32,
v_descriptor_pool_create_info = 33,
v_descriptor_set_allocate_info = 34,
v_write_descriptor_set = 35,
v_copy_descriptor_set = 36,
v_framebuffer_create_info = 37,
v_render_pass_create_info = 38,
v_command_pool_create_info = 39,
v_command_buffer_allocate_info = 40,
v_command_buffer_inheritance_info = 41,
v_command_buffer_begin_info = 42,
v_render_pass_begin_info = 43,
v_buffer_memory_barrier = 44,
v_image_memory_barrier = 45,
v_memory_barrier = 46,
v_loader_instance_create_info = 47,
v_loader_device_create_info = 48,
v_bind_buffer_memory_info = 1157000,
v_bind_image_memory_info = 1157001,
v_memory_dedicated_requirements = 1127000,
v_memory_dedicated_allocate_info = 1127001,
v_memory_allocate_flags_info = 1060000,
v_device_group_command_buffer_begin_info = 1060004,
v_device_group_submit_info = 1060005,
v_device_group_bind_sparse_info = 1060006,
v_bind_buffer_memory_device_group_info = 1060013,
v_bind_image_memory_device_group_info = 1060014,
v_physical_device_group_properties = 1070000,
v_device_group_device_create_info = 1070001,
v_buffer_memory_requirements_info_2 = 1146000,
v_image_memory_requirements_info_2 = 1146001,
v_image_sparse_memory_requirements_info_2 = 1146002,
v_memory_requirements_2 = 1146003,
v_sparse_image_memory_requirements_2 = 1146004,
v_physical_device_features_2 = 1059000,
v_physical_device_properties_2 = 1059001,
v_format_properties_2 = 1059002,
v_image_format_properties_2 = 1059003,
v_physical_device_image_format_info_2 = 1059004,
v_queue_family_properties_2 = 1059005,
v_physical_device_memory_properties_2 = 1059006,
v_sparse_image_format_properties_2 = 1059007,
v_physical_device_sparse_image_format_info_2 = 1059008,
v_image_view_usage_create_info = 1117002,
v_protected_submit_info = 1145000,
v_physical_device_protected_memory_features = 1145001,
v_physical_device_protected_memory_properties = 1145002,
v_device_queue_info_2 = 1145003,
v_physical_device_external_image_format_info = 1071000,
v_external_image_format_properties = 1071001,
v_physical_device_external_buffer_info = 1071002,
v_external_buffer_properties = 1071003,
v_physical_device_id_properties = 1071004,
v_external_memory_buffer_create_info = 1072000,
v_external_memory_image_create_info = 1072001,
v_export_memory_allocate_info = 1072002,
v_physical_device_external_fence_info = 1112000,
v_external_fence_properties = 1112001,
v_export_fence_create_info = 1113000,
v_export_semaphore_create_info = 1077000,
v_physical_device_external_semaphore_info = 1076000,
v_external_semaphore_properties = 1076001,
v_physical_device_subgroup_properties = 1094000,
v_physical_device_16bit_storage_features = 1083000,
v_physical_device_variable_pointers_features = 1120000,
v_descriptor_update_template_create_info = 1085000,
v_physical_device_maintenance_3_properties = 1168000,
v_descriptor_set_layout_support = 1168001,
v_sampler_ycbcr_conversion_create_info = 1156000,
v_sampler_ycbcr_conversion_info = 1156001,
v_bind_image_plane_memory_info = 1156002,
v_image_plane_memory_requirements_info = 1156003,
v_physical_device_sampler_ycbcr_conversion_features = 1156004,
v_sampler_ycbcr_conversion_image_format_properties = 1156005,
v_device_group_render_pass_begin_info = 1060003,
v_physical_device_point_clipping_properties = 1117000,
v_render_pass_input_attachment_aspect_create_info = 1117001,
v_pipeline_tessellation_domain_origin_state_create_info = 1117003,
v_render_pass_multiview_create_info = 1053000,
v_physical_device_multiview_features = 1053001,
v_physical_device_multiview_properties = 1053002,
v_physical_device_shader_draw_parameters_features = 1063000,
v_physical_device_driver_properties = 1196000,
v_physical_device_vulkan_1_1_features = 49,
v_physical_device_vulkan_1_1_properties = 50,
v_physical_device_vulkan_1_2_features = 51,
v_physical_device_vulkan_1_2_properties = 52,
v_image_format_list_create_info = 1147000,
v_physical_device_vulkan_memory_model_features = 1211000,
v_physical_device_host_query_reset_features = 1261000,
v_physical_device_timeline_semaphore_features = 1207000,
v_physical_device_timeline_semaphore_properties = 1207001,
v_semaphore_type_create_info = 1207002,
v_timeline_semaphore_submit_info = 1207003,
v_semaphore_wait_info = 1207004,
v_semaphore_signal_info = 1207005,
v_physical_device_buffer_device_address_features = 1257000,
v_buffer_device_address_info = 1244001,
v_buffer_opaque_capture_address_create_info = 1257002,
v_memory_opaque_capture_address_allocate_info = 1257003,
v_device_memory_opaque_capture_address_info = 1257004,
v_physical_device_8bit_storage_features = 1177000,
v_physical_device_shader_atomic_int64_features = 1180000,
v_physical_device_shader_float16_int8_features = 1082000,
v_physical_device_float_controls_properties = 1197000,
v_descriptor_set_layout_binding_flags_create_info = 1161000,
v_physical_device_descriptor_indexing_features = 1161001,
v_physical_device_descriptor_indexing_properties = 1161002,
v_descriptor_set_variable_descriptor_count_allocate_info = 1161003,
v_descriptor_set_variable_descriptor_count_layout_support = 1161004,
v_physical_device_scalar_block_layout_features = 1221000,
v_physical_device_sampler_filter_minmax_properties = 1130000,
v_sampler_reduction_mode_create_info = 1130001,
v_physical_device_uniform_buffer_standard_layout_features = 1253000,
v_physical_device_shader_subgroup_extended_types_features = 1175000,
v_attachment_description_2 = 1109000,
v_attachment_reference_2 = 1109001,
v_subpass_description_2 = 1109002,
v_subpass_dependency_2 = 1109003,
v_render_pass_create_info_2 = 1109004,
v_subpass_begin_info = 1109005,
v_subpass_end_info = 1109006,
v_physical_device_depth_stencil_resolve_properties = 1199000,
v_subpass_description_depth_stencil_resolve = 1199001,
v_image_stencil_usage_create_info = 1246000,
v_physical_device_imageless_framebuffer_features = 1108000,
v_framebuffer_attachments_create_info = 1108001,
v_framebuffer_attachment_image_info = 1108002,
v_render_pass_attachment_begin_info = 1108003,
v_physical_device_separate_depth_stencil_layouts_features = 1241000,
v_attachment_reference_stencil_layout = 1241001,
v_attachment_description_stencil_layout = 1241002,
v_physical_device_vulkan_1_3_features = 53,
v_physical_device_vulkan_1_3_properties = 54,
v_physical_device_tool_properties = 1245000,
v_physical_device_private_data_features = 1295000,
v_device_private_data_create_info = 1295001,
v_private_data_slot_create_info = 1295002,
v_memory_barrier_2 = 1314000,
v_buffer_memory_barrier_2 = 1314001,
v_image_memory_barrier_2 = 1314002,
v_dependency_info = 1314003,
v_submit_info_2 = 1314004,
v_semaphore_submit_info = 1314005,
v_command_buffer_submit_info = 1314006,
v_physical_device_synchronization_2_features = 1314007,
v_copy_buffer_info_2 = 1337000,
v_copy_image_info_2 = 1337001,
v_copy_buffer_to_image_info_2 = 1337002,
v_copy_image_to_buffer_info_2 = 1337003,
v_buffer_copy_2 = 1337006,
v_image_copy_2 = 1337007,
v_buffer_image_copy_2 = 1337009,
v_physical_device_texture_compression_astc_hdr_features = 1066000,
v_format_properties_3 = 1360000,
v_physical_device_maintenance_4_features = 1413000,
v_physical_device_maintenance_4_properties = 1413001,
v_device_buffer_memory_requirements = 1413002,
v_device_image_memory_requirements = 1413003,
v_pipeline_creation_feedback_create_info = 1192000,
v_physical_device_shader_terminate_invocation_features = 1215000,
v_physical_device_shader_demote_to_helper_invocation_features = 1276000,
v_physical_device_pipeline_creation_cache_control_features = 1297000,
v_physical_device_zero_initialize_workgroup_memory_features = 1325000,
v_physical_device_image_robustness_features = 1335000,
v_physical_device_subgroup_size_control_properties = 1225000,
v_pipeline_shader_stage_required_subgroup_size_create_info = 1225001,
v_physical_device_subgroup_size_control_features = 1225002,
v_physical_device_inline_uniform_block_features = 1138000,
v_physical_device_inline_uniform_block_properties = 1138001,
v_write_descriptor_set_inline_uniform_block = 1138002,
v_descriptor_pool_inline_uniform_block_create_info = 1138003,
v_physical_device_shader_integer_dot_product_features = 1280000,
v_physical_device_shader_integer_dot_product_properties = 1280001,
v_physical_device_texel_buffer_alignment_properties = 1281001,
v_blit_image_info_2 = 1337004,
v_resolve_image_info_2 = 1337005,
v_image_blit_2 = 1337008,
v_image_resolve_2 = 1337010,
v_rendering_info = 1044000,
v_rendering_attachment_info = 1044001,
v_pipeline_rendering_create_info = 1044002,
v_physical_device_dynamic_rendering_features = 1044003,
v_command_buffer_inheritance_rendering_info = 1044004,
v_physical_device_vulkan_1_4_features = 55,
v_physical_device_vulkan_1_4_properties = 56,
v_device_queue_global_priority_create_info = 1174000,
v_physical_device_global_priority_query_features = 1388000,
v_queue_family_global_priority_properties = 1388001,
v_physical_device_index_type_uint8_features = 1265000,
v_memory_map_info = 1271000,
v_memory_unmap_info = 1271001,
v_physical_device_maintenance_5_features = 1470000,
v_physical_device_maintenance_5_properties = 1470001,
v_device_image_subresource_info = 1470004,
v_subresource_layout_2 = 1338002,
v_image_subresource_2 = 1338003,
v_buffer_usage_flags_2_create_info = 1470006,
v_physical_device_maintenance_6_features = 1545000,
v_physical_device_maintenance_6_properties = 1545001,
v_bind_memory_status = 1545002,
v_physical_device_host_image_copy_features = 1270000,
v_physical_device_host_image_copy_properties = 1270001,
v_memory_to_image_copy = 1270002,
v_image_to_memory_copy = 1270003,
v_copy_image_to_memory_info = 1270004,
v_copy_memory_to_image_info = 1270005,
v_host_image_layout_transition_info = 1270006,
v_copy_image_to_image_info = 1270007,
v_subresource_host_memcpy_size = 1270008,
v_host_image_copy_device_performance_query = 1270009,
v_physical_device_shader_subgroup_rotate_features = 1416000,
v_physical_device_shader_float_controls_2_features = 1528000,
v_physical_device_shader_expect_assume_features = 1544000,
v_pipeline_create_flags_2_create_info = 1470005,
v_physical_device_push_descriptor_properties = 1080000,
v_bind_descriptor_sets_info = 1545003,
v_push_constants_info = 1545004,
v_push_descriptor_set_info = 1545005,
v_push_descriptor_set_with_template_info = 1545006,
v_physical_device_pipeline_protected_access_features = 1466000,
v_pipeline_robustness_create_info = 1068000,
v_physical_device_pipeline_robustness_features = 1068001,
v_physical_device_pipeline_robustness_properties = 1068002,
v_physical_device_line_rasterization_features = 1259000,
v_pipeline_rasterization_line_state_create_info = 1259001,
v_physical_device_line_rasterization_properties = 1259002,
v_physical_device_vertex_attribute_divisor_properties = 1525000,
v_pipeline_vertex_input_divisor_state_create_info = 1190001,
v_physical_device_vertex_attribute_divisor_features = 1190002,
v_rendering_area_info = 1470003,
v_physical_device_dynamic_rendering_local_read_features = 1232000,
v_rendering_attachment_location_info = 1232001,
v_rendering_input_attachment_index_info = 1232002,
v_physical_device_vulkan_sc_1_0_features = 1298000,
v_physical_device_vulkan_sc_1_0_properties = 1298001,
v_device_object_reservation_create_info = 1298002,
v_command_pool_memory_reservation_create_info = 1298003,
v_command_pool_memory_consumption = 1298004,
v_pipeline_pool_size = 1298005,
v_fault_data = 1298007,
v_fault_callback_info = 1298008,
v_pipeline_offline_create_info = 1298010,
v_swapchain_create_info_khr = 1001000,
v_present_info_khr = 1001001,
v_device_group_present_capabilities_khr = 1001007,
v_image_swapchain_create_info_khr = 1001008,
v_bind_image_memory_swapchain_info_khr = 1001009,
v_acquire_next_image_info_khr = 1001010,
v_device_group_present_info_khr = 1001011,
v_device_group_swapchain_create_info_khr = 1001012,
v_display_mode_create_info_khr = 1002000,
v_display_surface_create_info_khr = 1002001,
v_display_present_info_khr = 1003000,
v_xlib_surface_create_info_khr = 1004000,
v_xcb_surface_create_info_khr = 1005000,
v_wayland_surface_create_info_khr = 1006000,
v_android_surface_create_info_khr = 1008000,
v_win32_surface_create_info_khr = 1009000,
v_native_buffer_android = 1010000,
v_swapchain_image_create_info_android = 1010001,
v_physical_device_presentation_properties_android = 1010002,
v_debug_report_callback_create_info_ext = 1011000,
v_pipeline_rasterization_state_rasterization_order_amd = 1018000,
v_debug_marker_object_name_info_ext = 1022000,
v_debug_marker_object_tag_info_ext = 1022001,
v_debug_marker_marker_info_ext = 1022002,
v_video_profile_info_khr = 1023000,
v_video_capabilities_khr = 1023001,
v_video_picture_resource_info_khr = 1023002,
v_video_session_memory_requirements_khr = 1023003,
v_bind_video_session_memory_info_khr = 1023004,
v_video_session_create_info_khr = 1023005,
v_video_session_parameters_create_info_khr = 1023006,
v_video_session_parameters_update_info_khr = 1023007,
v_video_begin_coding_info_khr = 1023008,
v_video_end_coding_info_khr = 1023009,
v_video_coding_control_info_khr = 1023010,
v_video_reference_slot_info_khr = 1023011,
v_queue_family_video_properties_khr = 1023012,
v_video_profile_list_info_khr = 1023013,
v_physical_device_video_format_info_khr = 1023014,
v_video_format_properties_khr = 1023015,
v_queue_family_query_result_status_properties_khr = 1023016,
v_dedicated_allocation_image_create_info_nv = 1026000,
v_dedicated_allocation_buffer_create_info_nv = 1026001,
v_dedicated_allocation_memory_allocate_info_nv = 1026002,
v_physical_device_transform_feedback_features_ext = 1028000,
v_physical_device_transform_feedback_properties_ext = 1028001,
v_pipeline_rasterization_state_stream_create_info_ext = 1028002,
v_cu_module_create_info_nvx = 1029000,
v_cu_function_create_info_nvx = 1029001,
v_cu_launch_info_nvx = 1029002,
v_cu_module_texturing_mode_create_info_nvx = 1029004,
v_image_view_handle_info_nvx = 1030000,
v_image_view_address_properties_nvx = 1030001,
v_texture_lod_gather_format_properties_amd = 1041000,
v_stream_descriptor_surface_create_info_ggp = 1049000,
v_physical_device_corner_sampled_image_features_nv = 1050000,
v_private_vendor_info_placeholder_offset_0_nv = 1051000,
v_external_memory_image_create_info_nv = 1056000,
v_export_memory_allocate_info_nv = 1056001,
v_import_memory_win32_handle_info_nv = 1057000,
v_export_memory_win32_handle_info_nv = 1057001,
v_win32_keyed_mutex_acquire_release_info_nv = 1058000,
v_validation_flags_ext = 1061000,
v_vi_surface_create_info_nn = 1062000,
v_image_view_astc_decode_mode_ext = 1067000,
v_physical_device_astc_decode_features_ext = 1067001,
v_import_memory_win32_handle_info_khr = 1073000,
v_export_memory_win32_handle_info_khr = 1073001,
v_memory_win32_handle_properties_khr = 1073002,
v_memory_get_win32_handle_info_khr = 1073003,
v_import_memory_fd_info_khr = 1074000,
v_memory_fd_properties_khr = 1074001,
v_memory_get_fd_info_khr = 1074002,
v_win32_keyed_mutex_acquire_release_info_khr = 1075000,
v_import_semaphore_win32_handle_info_khr = 1078000,
v_export_semaphore_win32_handle_info_khr = 1078001,
v_d3d12_fence_submit_info_khr = 1078002,
v_semaphore_get_win32_handle_info_khr = 1078003,
v_import_semaphore_fd_info_khr = 1079000,
v_semaphore_get_fd_info_khr = 1079001,
v_command_buffer_inheritance_conditional_rendering_info_ext = 1081000,
v_physical_device_conditional_rendering_features_ext = 1081001,
v_conditional_rendering_begin_info_ext = 1081002,
v_present_regions_khr = 1084000,
v_pipeline_viewport_w_scaling_state_create_info_nv = 1087000,
v_surface_capabilities_2_ext = 1090000,
v_display_power_info_ext = 1091000,
v_device_event_info_ext = 1091001,
v_display_event_info_ext = 1091002,
v_swapchain_counter_create_info_ext = 1091003,
v_present_times_info_google = 1092000,
v_physical_device_multiview_per_view_attributes_properties_nvx = 1097000,
v_multiview_per_view_attributes_info_nvx = 1097009,
v_pipeline_viewport_swizzle_state_create_info_nv = 1098000,
v_physical_device_discard_rectangle_properties_ext = 1099000,
v_pipeline_discard_rectangle_state_create_info_ext = 1099001,
v_physical_device_conservative_rasterization_properties_ext = 1101000,
v_pipeline_rasterization_conservative_state_create_info_ext = 1101001,
v_physical_device_depth_clip_enable_features_ext = 1102000,
v_pipeline_rasterization_depth_clip_state_create_info_ext = 1102001,
v_hdr_metadata_ext = 1105000,
v_physical_device_relaxed_line_rasterization_features_img = 1110000,
v_shared_present_surface_capabilities_khr = 1111000,
v_import_fence_win32_handle_info_khr = 1114000,
v_export_fence_win32_handle_info_khr = 1114001,
v_fence_get_win32_handle_info_khr = 1114002,
v_import_fence_fd_info_khr = 1115000,
v_fence_get_fd_info_khr = 1115001,
v_physical_device_performance_query_features_khr = 1116000,
v_physical_device_performance_query_properties_khr = 1116001,
v_query_pool_performance_create_info_khr = 1116002,
v_performance_query_submit_info_khr = 1116003,
v_acquire_profiling_lock_info_khr = 1116004,
v_performance_counter_khr = 1116005,
v_performance_counter_description_khr = 1116006,
v_performance_query_reservation_info_khr = 1116007,
v_physical_device_surface_info_2_khr = 1119000,
v_surface_capabilities_2_khr = 1119001,
v_surface_format_2_khr = 1119002,
v_display_properties_2_khr = 1121000,
v_display_plane_properties_2_khr = 1121001,
v_display_mode_properties_2_khr = 1121002,
v_display_plane_info_2_khr = 1121003,
v_display_plane_capabilities_2_khr = 1121004,
v_ios_surface_create_info_mvk = 1122000,
v_macos_surface_create_info_mvk = 1123000,
v_debug_utils_object_name_info_ext = 1128000,
v_debug_utils_object_tag_info_ext = 1128001,
v_debug_utils_label_ext = 1128002,
v_debug_utils_messenger_callback_data_ext = 1128003,
v_debug_utils_messenger_create_info_ext = 1128004,
v_android_hardware_buffer_usage_android = 1129000,
v_android_hardware_buffer_properties_android = 1129001,
v_android_hardware_buffer_format_properties_android = 1129002,
v_import_android_hardware_buffer_info_android = 1129003,
v_memory_get_android_hardware_buffer_info_android = 1129004,
v_external_format_android = 1129005,
v_android_hardware_buffer_format_properties_2_android = 1129006,
v_physical_device_shader_enqueue_features_amdx = 1134000,
v_physical_device_shader_enqueue_properties_amdx = 1134001,
v_execution_graph_pipeline_scratch_size_amdx = 1134002,
v_execution_graph_pipeline_create_info_amdx = 1134003,
v_pipeline_shader_stage_node_create_info_amdx = 1134004,
v_texel_buffer_descriptor_info_ext = 1135000,
v_image_descriptor_info_ext = 1135001,
v_resource_descriptor_info_ext = 1135002,
v_bind_heap_info_ext = 1135003,
v_push_data_info_ext = 1135004,
v_descriptor_set_and_binding_mapping_ext = 1135005,
v_shader_descriptor_set_and_binding_mapping_info_ext = 1135006,
v_opaque_capture_data_create_info_ext = 1135007,
v_physical_device_descriptor_heap_properties_ext = 1135008,
v_physical_device_descriptor_heap_features_ext = 1135009,
v_command_buffer_inheritance_descriptor_heap_info_ext = 1135010,
v_sampler_custom_border_color_index_create_info_ext = 1135011,
v_indirect_commands_layout_push_data_token_nv = 1135012,
v_subsampled_image_format_properties_ext = 1135013,
v_physical_device_descriptor_heap_tensor_properties_arm = 1135014,
v_attachment_sample_count_info_amd = 1136008,
v_physical_device_shader_bfloat16_features_khr = 1141000,
v_sample_locations_info_ext = 1143000,
v_render_pass_sample_locations_begin_info_ext = 1143001,
v_pipeline_sample_locations_state_create_info_ext = 1143002,
v_physical_device_sample_locations_properties_ext = 1143003,
v_multisample_properties_ext = 1143004,
v_physical_device_blend_operation_advanced_features_ext = 1148000,
v_physical_device_blend_operation_advanced_properties_ext = 1148001,
v_pipeline_color_blend_advanced_state_create_info_ext = 1148002,
v_pipeline_coverage_to_color_state_create_info_nv = 1149000,
v_write_descriptor_set_acceleration_structure_khr = 1150007,
v_acceleration_structure_build_geometry_info_khr = 1150000,
v_acceleration_structure_device_address_info_khr = 1150002,
v_acceleration_structure_geometry_aabbs_data_khr = 1150003,
v_acceleration_structure_geometry_instances_data_khr = 1150004,
v_acceleration_structure_geometry_triangles_data_khr = 1150005,
v_acceleration_structure_geometry_khr = 1150006,
v_acceleration_structure_version_info_khr = 1150009,
v_copy_acceleration_structure_info_khr = 1150010,
v_copy_acceleration_structure_to_memory_info_khr = 1150011,
v_copy_memory_to_acceleration_structure_info_khr = 1150012,
v_physical_device_acceleration_structure_features_khr = 1150013,
v_physical_device_acceleration_structure_properties_khr = 1150014,
v_acceleration_structure_create_info_khr = 1150017,
v_acceleration_structure_build_sizes_info_khr = 1150020,
v_physical_device_ray_tracing_pipeline_features_khr = 1347000,
v_physical_device_ray_tracing_pipeline_properties_khr = 1347001,
v_ray_tracing_pipeline_create_info_khr = 1347015,
v_ray_tracing_shader_group_create_info_khr = 1347016,
v_ray_tracing_pipeline_interface_create_info_khr = 1347018,
v_physical_device_ray_query_features_khr = 1348013,
v_pipeline_coverage_modulation_state_create_info_nv = 1152000,
v_physical_device_shader_sm_builtins_features_nv = 1154000,
v_physical_device_shader_sm_builtins_properties_nv = 1154001,
v_drm_format_modifier_properties_list_ext = 1158000,
v_physical_device_image_drm_format_modifier_info_ext = 1158002,
v_image_drm_format_modifier_list_create_info_ext = 1158003,
v_image_drm_format_modifier_explicit_create_info_ext = 1158004,
v_image_drm_format_modifier_properties_ext = 1158005,
v_drm_format_modifier_properties_list_2_ext = 1158006,
v_validation_cache_create_info_ext = 1160000,
v_shader_module_validation_cache_create_info_ext = 1160001,
v_physical_device_portability_subset_features_khr = 1163000,
v_physical_device_portability_subset_properties_khr = 1163001,
v_pipeline_viewport_shading_rate_image_state_create_info_nv = 1164000,
v_physical_device_shading_rate_image_features_nv = 1164001,
v_physical_device_shading_rate_image_properties_nv = 1164002,
v_pipeline_viewport_coarse_sample_order_state_create_info_nv = 1164005,
v_ray_tracing_pipeline_create_info_nv = 1165000,
v_acceleration_structure_create_info_nv = 1165001,
v_geometry_nv = 1165003,
v_geometry_triangles_nv = 1165004,
v_geometry_aabb_nv = 1165005,
v_bind_acceleration_structure_memory_info_nv = 1165006,
v_write_descriptor_set_acceleration_structure_nv = 1165007,
v_acceleration_structure_memory_requirements_info_nv = 1165008,
v_physical_device_ray_tracing_properties_nv = 1165009,
v_ray_tracing_shader_group_create_info_nv = 1165011,
v_acceleration_structure_info_nv = 1165012,
v_physical_device_representative_fragment_test_features_nv = 1166000,
v_pipeline_representative_fragment_test_state_create_info_nv = 1166001,
v_physical_device_image_view_image_format_info_ext = 1170000,
v_filter_cubic_image_view_image_format_properties_ext = 1170001,
v_physical_device_cooperative_matrix_conversion_features_qcom = 1172000,
v_import_memory_host_pointer_info_ext = 1178000,
v_memory_host_pointer_properties_ext = 1178001,
v_physical_device_external_memory_host_properties_ext = 1178002,
v_physical_device_shader_clock_features_khr = 1181000,
v_pipeline_compiler_control_create_info_amd = 1183000,
v_physical_device_shader_core_properties_amd = 1185000,
v_device_memory_overallocation_create_info_amd = 1189000,
v_physical_device_vertex_attribute_divisor_properties_ext = 1190000,
v_present_frame_token_ggp = 1191000,
v_physical_device_mesh_shader_features_nv = 1202000,
v_physical_device_mesh_shader_properties_nv = 1202001,
v_physical_device_shader_image_footprint_features_nv = 1204000,
v_pipeline_viewport_exclusive_scissor_state_create_info_nv = 1205000,
v_physical_device_exclusive_scissor_features_nv = 1205002,
v_checkpoint_data_nv = 1206000,
v_queue_family_checkpoint_properties_nv = 1206001,
v_queue_family_checkpoint_properties_2_nv = 1206008,
v_checkpoint_data_2_nv = 1206009,
v_physical_device_present_timing_features_ext = 1208000,
v_swapchain_timing_properties_ext = 1208001,
v_swapchain_time_domain_properties_ext = 1208002,
v_present_timings_info_ext = 1208003,
v_present_timing_info_ext = 1208004,
v_past_presentation_timing_info_ext = 1208005,
v_past_presentation_timing_properties_ext = 1208006,
v_past_presentation_timing_ext = 1208007,
v_present_timing_surface_capabilities_ext = 1208008,
v_swapchain_calibrated_timestamp_info_ext = 1208009,
v_physical_device_shader_integer_functions_2_features_intel = 1209000,
v_query_pool_performance_query_create_info_intel = 1210000,
v_initialize_performance_api_info_intel = 1210001,
v_performance_marker_info_intel = 1210002,
v_performance_stream_marker_info_intel = 1210003,
v_performance_override_info_intel = 1210004,
v_performance_configuration_acquire_info_intel = 1210005,
v_physical_device_pci_bus_info_properties_ext = 1212000,
v_display_native_hdr_surface_capabilities_amd = 1213000,
v_swapchain_display_native_hdr_create_info_amd = 1213001,
v_imagepipe_surface_create_info_fuchsia = 1214000,
v_metal_surface_create_info_ext = 1217000,
v_physical_device_fragment_density_map_features_ext = 1218000,
v_physical_device_fragment_density_map_properties_ext = 1218001,
v_render_pass_fragment_density_map_create_info_ext = 1218002,
v_rendering_fragment_density_map_attachment_info_ext = 1218007,
v_fragment_shading_rate_attachment_info_khr = 1226000,
v_pipeline_fragment_shading_rate_state_create_info_khr = 1226001,
v_physical_device_fragment_shading_rate_properties_khr = 1226002,
v_physical_device_fragment_shading_rate_features_khr = 1226003,
v_physical_device_fragment_shading_rate_khr = 1226004,
v_rendering_fragment_shading_rate_attachment_info_khr = 1226006,
v_physical_device_shader_core_properties_2_amd = 1227000,
v_physical_device_coherent_memory_features_amd = 1229000,
v_physical_device_shader_constant_data_features_khr = 1231000,
v_physical_device_shader_abort_features_khr = 1233000,
v_device_fault_shader_abort_message_info_khr = 1233001,
v_physical_device_shader_abort_properties_khr = 1233002,
v_physical_device_shader_image_atomic_int64_features_ext = 1234000,
v_physical_device_shader_quad_control_features_khr = 1235000,
v_physical_device_memory_budget_properties_ext = 1237000,
v_physical_device_memory_priority_features_ext = 1238000,
v_memory_priority_allocate_info_ext = 1238001,
v_surface_protected_capabilities_khr = 1239000,
v_physical_device_dedicated_allocation_image_aliasing_features_nv = 1240000,
v_physical_device_buffer_device_address_features_ext = 1244000,
v_buffer_device_address_create_info_ext = 1244002,
v_validation_features_ext = 1247000,
v_physical_device_present_wait_features_khr = 1248000,
v_physical_device_cooperative_matrix_features_nv = 1249000,
v_cooperative_matrix_properties_nv = 1249001,
v_physical_device_cooperative_matrix_properties_nv = 1249002,
v_physical_device_coverage_reduction_mode_features_nv = 1250000,
v_pipeline_coverage_reduction_state_create_info_nv = 1250001,
v_framebuffer_mixed_samples_combination_nv = 1250002,
v_physical_device_fragment_shader_interlock_features_ext = 1251000,
v_physical_device_ycbcr_image_arrays_features_ext = 1252000,
v_physical_device_provoking_vertex_features_ext = 1254000,
v_pipeline_rasterization_provoking_vertex_state_create_info_ext = 1254001,
v_physical_device_provoking_vertex_properties_ext = 1254002,
v_surface_full_screen_exclusive_info_ext = 1255000,
v_surface_capabilities_full_screen_exclusive_ext = 1255002,
v_surface_full_screen_exclusive_win32_info_ext = 1255001,
v_headless_surface_create_info_ext = 1256000,
v_physical_device_shader_atomic_float_features_ext = 1260000,
v_physical_device_extended_dynamic_state_features_ext = 1267000,
v_physical_device_pipeline_executable_properties_features_khr = 1269000,
v_pipeline_info_khr = 1269001,
v_pipeline_executable_properties_khr = 1269002,
v_pipeline_executable_info_khr = 1269003,
v_pipeline_executable_statistic_khr = 1269004,
v_pipeline_executable_internal_representation_khr = 1269005,
v_physical_device_map_memory_placed_features_ext = 1272000,
v_physical_device_map_memory_placed_properties_ext = 1272001,
v_memory_map_placed_info_ext = 1272002,
v_physical_device_shader_atomic_float_2_features_ext = 1273000,
v_physical_device_device_generated_commands_properties_nv = 1277000,
v_graphics_shader_group_create_info_nv = 1277001,
v_graphics_pipeline_shader_groups_create_info_nv = 1277002,
v_indirect_commands_layout_token_nv = 1277003,
v_indirect_commands_layout_create_info_nv = 1277004,
v_generated_commands_info_nv = 1277005,
v_generated_commands_memory_requirements_info_nv = 1277006,
v_physical_device_device_generated_commands_features_nv = 1277007,
v_physical_device_inherited_viewport_scissor_features_nv = 1278000,
v_command_buffer_inheritance_viewport_scissor_info_nv = 1278001,
v_physical_device_texel_buffer_alignment_features_ext = 1281000,
v_command_buffer_inheritance_render_pass_transform_info_qcom = 1282000,
v_render_pass_transform_begin_info_qcom = 1282001,
v_physical_device_depth_bias_control_features_ext = 1283000,
v_depth_bias_info_ext = 1283001,
v_depth_bias_representation_info_ext = 1283002,
v_physical_device_device_memory_report_features_ext = 1284000,
v_device_device_memory_report_create_info_ext = 1284001,
v_device_memory_report_callback_data_ext = 1284002,
v_sampler_custom_border_color_create_info_ext = 1287000,
v_physical_device_custom_border_color_properties_ext = 1287001,
v_physical_device_custom_border_color_features_ext = 1287002,
v_physical_device_texture_compression_astc_3d_features_ext = 1288000,
v_pipeline_library_create_info_khr = 1290000,
v_physical_device_present_barrier_features_nv = 1292000,
v_surface_capabilities_present_barrier_nv = 1292001,
v_swapchain_present_barrier_create_info_nv = 1292002,
v_present_id_khr = 1294000,
v_physical_device_present_id_features_khr = 1294001,
v_physical_device_diagnostics_config_features_nv = 1300000,
v_device_diagnostics_config_create_info_nv = 1300001,
v_perf_hint_info_qcom = 1302000,
v_physical_device_queue_perf_hint_features_qcom = 1302001,
v_physical_device_queue_perf_hint_properties_qcom = 1302002,
v_cuda_module_create_info_nv = 1307000,
v_cuda_function_create_info_nv = 1307001,
v_cuda_launch_info_nv = 1307002,
v_physical_device_cuda_kernel_launch_features_nv = 1307003,
v_physical_device_cuda_kernel_launch_properties_nv = 1307004,
v_refresh_object_list_khr = 1308000,
v_physical_device_tile_shading_features_qcom = 1309000,
v_physical_device_tile_shading_properties_qcom = 1309001,
v_render_pass_tile_shading_create_info_qcom = 1309002,
v_per_tile_begin_info_qcom = 1309003,
v_per_tile_end_info_qcom = 1309004,
v_dispatch_tile_info_qcom = 1309005,
v_query_low_latency_support_nv = 1310000,
v_export_metal_object_create_info_ext = 1311000,
v_export_metal_objects_info_ext = 1311001,
v_export_metal_device_info_ext = 1311002,
v_export_metal_command_queue_info_ext = 1311003,
v_export_metal_buffer_info_ext = 1311004,
v_import_metal_buffer_info_ext = 1311005,
v_export_metal_texture_info_ext = 1311006,
v_import_metal_texture_info_ext = 1311007,
v_export_metal_io_surface_info_ext = 1311008,
v_import_metal_io_surface_info_ext = 1311009,
v_export_metal_shared_event_info_ext = 1311010,
v_import_metal_shared_event_info_ext = 1311011,
v_physical_device_descriptor_buffer_properties_ext = 1316000,
v_physical_device_descriptor_buffer_density_map_properties_ext = 1316001,
v_physical_device_descriptor_buffer_features_ext = 1316002,
v_descriptor_address_info_ext = 1316003,
v_descriptor_get_info_ext = 1316004,
v_buffer_capture_descriptor_data_info_ext = 1316005,
v_image_capture_descriptor_data_info_ext = 1316006,
v_image_view_capture_descriptor_data_info_ext = 1316007,
v_sampler_capture_descriptor_data_info_ext = 1316008,
v_opaque_capture_descriptor_data_create_info_ext = 1316010,
v_descriptor_buffer_binding_info_ext = 1316011,
v_descriptor_buffer_binding_push_descriptor_buffer_handle_ext = 1316012,
v_acceleration_structure_capture_descriptor_data_info_ext = 1316009,
v_device_memory_copy_khr = 1318000,
v_copy_device_memory_info_khr = 1318001,
v_device_memory_image_copy_khr = 1318002,
v_copy_device_memory_image_info_khr = 1318003,
v_memory_range_barriers_info_khr = 1318004,
v_memory_range_barrier_khr = 1318005,
v_physical_device_device_address_commands_features_khr = 1318006,
v_bind_index_buffer_3_info_khr = 1318007,
v_bind_vertex_buffer_3_info_khr = 1318008,
v_draw_indirect_2_info_khr = 1318009,
v_draw_indirect_count_2_info_khr = 1318010,
v_dispatch_indirect_2_info_khr = 1318011,
v_conditional_rendering_begin_info_2_ext = 1318012,
v_bind_transform_feedback_buffer_2_info_ext = 1318013,
v_memory_marker_info_amd = 1318014,
v_acceleration_structure_create_info_2_khr = 1318015,
v_physical_device_graphics_pipeline_library_features_ext = 1320000,
v_physical_device_graphics_pipeline_library_properties_ext = 1320001,
v_graphics_pipeline_library_create_info_ext = 1320002,
v_physical_device_shader_early_and_late_fragment_tests_features_amd = 1321000,
v_physical_device_fragment_shader_barycentric_features_khr = 1322000,
v_physical_device_fragment_shader_barycentric_properties_khr = 1322000,
v_physical_device_shader_subgroup_uniform_control_flow_features_khr = 1323000,
v_physical_device_fragment_shading_rate_enums_properties_nv = 1326000,
v_physical_device_fragment_shading_rate_enums_features_nv = 1326001,
v_pipeline_fragment_shading_rate_enum_state_create_info_nv = 1326002,
v_acceleration_structure_geometry_motion_triangles_data_nv = 1327000,
v_physical_device_ray_tracing_motion_blur_features_nv = 1327001,
v_acceleration_structure_motion_info_nv = 1327002,
v_physical_device_mesh_shader_features_ext = 1328000,
v_physical_device_mesh_shader_properties_ext = 1328001,
v_physical_device_ycbcr_2_plane_444_formats_features_ext = 1330000,
v_physical_device_fragment_density_map_2_features_ext = 1332000,
v_physical_device_fragment_density_map_2_properties_ext = 1332001,
v_copy_command_transform_info_qcom = 1333000,
v_physical_device_workgroup_memory_explicit_layout_features_khr = 1336000,
v_physical_device_image_compression_control_features_ext = 1338000,
v_image_compression_control_ext = 1338001,
v_image_compression_properties_ext = 1338004,
v_physical_device_attachment_feedback_loop_layout_features_ext = 1339000,
v_physical_device_4444_formats_features_ext = 1340000,
v_physical_device_fault_features_ext = 1341000,
v_device_fault_counts_ext = 1341001,
v_device_fault_info_ext = 1341002,
v_physical_device_rgba10x6_formats_features_ext = 1344000,
v_directfb_surface_create_info_ext = 1346000,
v_physical_device_vertex_input_dynamic_state_features_ext = 1352000,
v_vertex_input_binding_description_2_ext = 1352001,
v_vertex_input_attribute_description_2_ext = 1352002,
v_physical_device_drm_properties_ext = 1353000,
v_physical_device_address_binding_report_features_ext = 1354000,
v_device_address_binding_callback_data_ext = 1354001,
v_physical_device_depth_clip_control_features_ext = 1355000,
v_pipeline_viewport_depth_clip_control_create_info_ext = 1355001,
v_physical_device_primitive_topology_list_restart_features_ext = 1356000,
v_import_memory_zircon_handle_info_fuchsia = 1364000,
v_memory_zircon_handle_properties_fuchsia = 1364001,
v_memory_get_zircon_handle_info_fuchsia = 1364002,
v_import_semaphore_zircon_handle_info_fuchsia = 1365000,
v_semaphore_get_zircon_handle_info_fuchsia = 1365001,
v_buffer_collection_create_info_fuchsia = 1366000,
v_import_memory_buffer_collection_fuchsia = 1366001,
v_buffer_collection_image_create_info_fuchsia = 1366002,
v_buffer_collection_properties_fuchsia = 1366003,
v_buffer_constraints_info_fuchsia = 1366004,
v_buffer_collection_buffer_create_info_fuchsia = 1366005,
v_image_constraints_info_fuchsia = 1366006,
v_image_format_constraints_info_fuchsia = 1366007,
v_sysmem_color_space_fuchsia = 1366008,
v_buffer_collection_constraints_info_fuchsia = 1366009,
v_subpass_shading_pipeline_create_info_huawei = 1369000,
v_physical_device_subpass_shading_features_huawei = 1369001,
v_physical_device_subpass_shading_properties_huawei = 1369002,
v_physical_device_invocation_mask_features_huawei = 1370000,
v_memory_get_remote_address_info_nv = 1371000,
v_physical_device_external_memory_rdma_features_nv = 1371001,
v_pipeline_properties_identifier_ext = 1372000,
v_physical_device_pipeline_properties_features_ext = 1372001,
v_import_fence_sci_sync_info_nv = 1373000,
v_export_fence_sci_sync_info_nv = 1373001,
v_fence_get_sci_sync_info_nv = 1373002,
v_sci_sync_attributes_info_nv = 1373003,
v_import_semaphore_sci_sync_info_nv = 1373004,
v_export_semaphore_sci_sync_info_nv = 1373005,
v_semaphore_get_sci_sync_info_nv = 1373006,
v_physical_device_external_sci_sync_features_nv = 1373007,
v_import_memory_sci_buf_info_nv = 1374000,
v_export_memory_sci_buf_info_nv = 1374001,
v_memory_get_sci_buf_info_nv = 1374002,
v_memory_sci_buf_properties_nv = 1374003,
v_physical_device_external_memory_sci_buf_features_nv = 1374004,
v_physical_device_frame_boundary_features_ext = 1375000,
v_frame_boundary_ext = 1375001,
v_physical_device_multisampled_render_to_single_sampled_features_ext = 1376000,
v_subpass_resolve_performance_query_ext = 1376001,
v_multisampled_render_to_single_sampled_info_ext = 1376002,
v_physical_device_extended_dynamic_state_2_features_ext = 1377000,
v_screen_surface_create_info_qnx = 1378000,
v_physical_device_color_write_enable_features_ext = 1381000,
v_pipeline_color_write_create_info_ext = 1381001,
v_physical_device_primitives_generated_query_features_ext = 1382000,
v_physical_device_ray_tracing_maintenance_1_features_khr = 1386000,
v_physical_device_shader_untyped_pointers_features_khr = 1387000,
v_physical_device_image_view_min_lod_features_ext = 1391000,
v_image_view_min_lod_create_info_ext = 1391001,
v_physical_device_multi_draw_features_ext = 1392000,
v_physical_device_multi_draw_properties_ext = 1392001,
v_physical_device_image_2d_view_of_3d_features_ext = 1393000,
v_physical_device_shader_tile_image_features_ext = 1395000,
v_physical_device_shader_tile_image_properties_ext = 1395001,
v_micromap_build_info_ext = 1396000,
v_micromap_version_info_ext = 1396001,
v_copy_micromap_info_ext = 1396002,
v_copy_micromap_to_memory_info_ext = 1396003,
v_copy_memory_to_micromap_info_ext = 1396004,
v_physical_device_opacity_micromap_features_ext = 1396005,
v_physical_device_opacity_micromap_properties_ext = 1396006,
v_micromap_create_info_ext = 1396007,
v_micromap_build_sizes_info_ext = 1396008,
v_acceleration_structure_triangles_opacity_micromap_ext = 1396009,
v_physical_device_displacement_micromap_features_nv = 1397000,
v_physical_device_displacement_micromap_properties_nv = 1397001,
v_acceleration_structure_triangles_displacement_micromap_nv = 1397002,
v_physical_device_cluster_culling_shader_features_huawei = 1404000,
v_physical_device_cluster_culling_shader_properties_huawei = 1404001,
v_physical_device_cluster_culling_shader_vrs_features_huawei = 1404002,
v_physical_device_border_color_swizzle_features_ext = 1411000,
v_sampler_border_color_component_mapping_create_info_ext = 1411001,
v_physical_device_pageable_device_local_memory_features_ext = 1412000,
v_physical_device_shader_core_properties_arm = 1415000,
v_device_queue_shader_core_control_create_info_arm = 1417000,
v_physical_device_scheduling_controls_features_arm = 1417001,
v_physical_device_scheduling_controls_properties_arm = 1417002,
v_dispatch_parameters_arm = 1417003,
v_physical_device_scheduling_controls_dispatch_parameters_properties_arm = 1417004,
v_physical_device_image_sliced_view_of_3d_features_ext = 1418000,
v_image_view_sliced_create_info_ext = 1418001,
v_physical_device_descriptor_set_host_mapping_features_valve = 1420000,
v_descriptor_set_binding_reference_valve = 1420001,
v_descriptor_set_layout_host_mapping_info_valve = 1420002,
v_physical_device_non_seamless_cube_map_features_ext = 1422000,
v_physical_device_render_pass_striped_features_arm = 1424000,
v_physical_device_render_pass_striped_properties_arm = 1424001,
v_render_pass_stripe_begin_info_arm = 1424002,
v_render_pass_stripe_info_arm = 1424003,
v_render_pass_stripe_submit_info_arm = 1424004,
v_physical_device_copy_memory_indirect_features_nv = 1426000,
v_physical_device_device_generated_commands_compute_features_nv = 1428000,
v_compute_pipeline_indirect_buffer_info_nv = 1428001,
v_pipeline_indirect_device_address_info_nv = 1428002,
v_physical_device_ray_tracing_linear_swept_spheres_features_nv = 1429008,
v_acceleration_structure_geometry_linear_swept_spheres_data_nv = 1429009,
v_acceleration_structure_geometry_spheres_data_nv = 1429010,
v_physical_device_linear_color_attachment_features_nv = 1430000,
v_physical_device_shader_maximal_reconvergence_features_khr = 1434000,
v_application_parameters_ext = 1435000,
v_physical_device_image_compression_control_swapchain_features_ext = 1437000,
v_physical_device_image_processing_features_qcom = 1440000,
v_physical_device_image_processing_properties_qcom = 1440001,
v_image_view_sample_weight_create_info_qcom = 1440002,
v_physical_device_nested_command_buffer_features_ext = 1451000,
v_physical_device_nested_command_buffer_properties_ext = 1451001,
v_native_buffer_usage_ohos = 1452000,
v_native_buffer_properties_ohos = 1452001,
v_native_buffer_format_properties_ohos = 1452002,
v_import_native_buffer_info_ohos = 1452003,
v_memory_get_native_buffer_info_ohos = 1452004,
v_external_format_ohos = 1452005,
v_external_memory_acquire_unmodified_ext = 1453000,
v_physical_device_extended_dynamic_state_3_features_ext = 1455000,
v_physical_device_extended_dynamic_state_3_properties_ext = 1455001,
v_physical_device_subpass_merge_feedback_features_ext = 1458000,
v_render_pass_creation_control_ext = 1458001,
v_render_pass_creation_feedback_create_info_ext = 1458002,
v_render_pass_subpass_feedback_create_info_ext = 1458003,
v_direct_driver_loading_info_lunarg = 1459000,
v_direct_driver_loading_list_lunarg = 1459001,
v_tensor_create_info_arm = 1460000,
v_tensor_view_create_info_arm = 1460001,
v_bind_tensor_memory_info_arm = 1460002,
v_write_descriptor_set_tensor_arm = 1460003,
v_physical_device_tensor_properties_arm = 1460004,
v_tensor_format_properties_arm = 1460005,
v_tensor_description_arm = 1460006,
v_tensor_memory_requirements_info_arm = 1460007,
v_tensor_memory_barrier_arm = 1460008,
v_physical_device_tensor_features_arm = 1460009,
v_device_tensor_memory_requirements_arm = 1460010,
v_copy_tensor_info_arm = 1460011,
v_tensor_copy_arm = 1460012,
v_tensor_dependency_info_arm = 1460013,
v_memory_dedicated_allocate_info_tensor_arm = 1460014,
v_physical_device_external_tensor_info_arm = 1460015,
v_external_tensor_properties_arm = 1460016,
v_external_memory_tensor_create_info_arm = 1460017,
v_physical_device_descriptor_buffer_tensor_features_arm = 1460018,
v_physical_device_descriptor_buffer_tensor_properties_arm = 1460019,
v_descriptor_get_tensor_info_arm = 1460020,
v_tensor_capture_descriptor_data_info_arm = 1460021,
v_tensor_view_capture_descriptor_data_info_arm = 1460022,
v_frame_boundary_tensors_arm = 1460023,
v_physical_device_shader_module_identifier_features_ext = 1462000,
v_physical_device_shader_module_identifier_properties_ext = 1462001,
v_pipeline_shader_stage_module_identifier_create_info_ext = 1462002,
v_shader_module_identifier_ext = 1462003,
v_physical_device_rasterization_order_attachment_access_features_ext = 1463000,
v_physical_device_optical_flow_features_nv = 1464000,
v_physical_device_optical_flow_properties_nv = 1464001,
v_optical_flow_image_format_info_nv = 1464002,
v_optical_flow_image_format_properties_nv = 1464003,
v_optical_flow_session_create_info_nv = 1464004,
v_optical_flow_execute_info_nv = 1464005,
v_optical_flow_session_create_private_data_info_nv = 1464010,
v_physical_device_legacy_dithering_features_ext = 1465000,
v_physical_device_external_format_resolve_features_android = 1468000,
v_physical_device_external_format_resolve_properties_android = 1468001,
v_android_hardware_buffer_format_resolve_properties_android = 1468002,
v_physical_device_anti_lag_features_amd = 1476000,
v_anti_lag_data_amd = 1476001,
v_anti_lag_presentation_info_amd = 1476002,
v_physical_device_dense_geometry_format_features_amdx = 1478000,
v_acceleration_structure_dense_geometry_format_triangles_data_amdx = 1478001,
v_surface_capabilities_present_id_2_khr = 1479000,
v_present_id_2_khr = 1479001,
v_physical_device_present_id_2_features_khr = 1479002,
v_surface_capabilities_present_wait_2_khr = 1480000,
v_physical_device_present_wait_2_features_khr = 1480001,
v_present_wait_2_info_khr = 1480002,
v_physical_device_ray_tracing_position_fetch_features_khr = 1481000,
v_physical_device_shader_object_features_ext = 1482000,
v_physical_device_shader_object_properties_ext = 1482001,
v_shader_create_info_ext = 1482002,
v_physical_device_pipeline_binary_features_khr = 1483000,
v_pipeline_binary_create_info_khr = 1483001,
v_pipeline_binary_info_khr = 1483002,
v_pipeline_binary_key_khr = 1483003,
v_physical_device_pipeline_binary_properties_khr = 1483004,
v_release_captured_pipeline_data_info_khr = 1483005,
v_pipeline_binary_data_info_khr = 1483006,
v_pipeline_create_info_khr = 1483007,
v_device_pipeline_binary_internal_cache_control_khr = 1483008,
v_pipeline_binary_handles_info_khr = 1483009,
v_physical_device_tile_properties_features_qcom = 1484000,
v_tile_properties_qcom = 1484001,
v_physical_device_amigo_profiling_features_sec = 1485000,
v_amigo_profiling_submit_info_sec = 1485001,
v_surface_present_mode_khr = 1486000,
v_surface_present_scaling_capabilities_khr = 1486001,
v_surface_present_mode_compatibility_khr = 1486002,
v_physical_device_swapchain_maintenance_1_features_khr = 1487000,
v_swapchain_present_fence_info_khr = 1487001,
v_swapchain_present_modes_create_info_khr = 1487002,
v_swapchain_present_mode_info_khr = 1487003,
v_swapchain_present_scaling_create_info_khr = 1487004,
v_release_swapchain_images_info_khr = 1487005,
v_physical_device_multiview_per_view_viewports_features_qcom = 1488000,
v_semaphore_sci_sync_pool_create_info_nv = 1489000,
v_semaphore_sci_sync_create_info_nv = 1489001,
v_physical_device_external_sci_sync_2_features_nv = 1489002,
v_device_semaphore_sci_sync_pool_reservation_create_info_nv = 1489003,
v_physical_device_ray_tracing_invocation_reorder_features_nv = 1490000,
v_physical_device_ray_tracing_invocation_reorder_properties_nv = 1490001,
v_physical_device_cooperative_vector_features_nv = 1491000,
v_physical_device_cooperative_vector_properties_nv = 1491001,
v_cooperative_vector_properties_nv = 1491002,
v_convert_cooperative_vector_matrix_info_nv = 1491004,
v_physical_device_extended_sparse_address_space_features_nv = 1492000,
v_physical_device_extended_sparse_address_space_properties_nv = 1492001,
v_physical_device_mutable_descriptor_type_features_ext = 1494000,
v_mutable_descriptor_type_create_info_ext = 1494002,
v_physical_device_legacy_vertex_attributes_features_ext = 1495000,
v_physical_device_legacy_vertex_attributes_properties_ext = 1495001,
v_layer_settings_create_info_ext = 1496000,
v_physical_device_shader_core_builtins_features_arm = 1497000,
v_physical_device_shader_core_builtins_properties_arm = 1497001,
v_physical_device_pipeline_library_group_handles_features_ext = 1498000,
v_physical_device_dynamic_rendering_unused_attachments_features_ext = 1499000,
v_physical_device_internally_synchronized_queues_features_khr = 1504000,
v_latency_sleep_mode_info_nv = 1505000,
v_latency_sleep_info_nv = 1505001,
v_set_latency_marker_info_nv = 1505002,
v_get_latency_marker_info_nv = 1505003,
v_latency_timings_frame_report_nv = 1505004,
v_latency_submission_present_id_nv = 1505005,
v_out_of_band_queue_type_info_nv = 1505006,
v_swapchain_latency_create_info_nv = 1505007,
v_latency_surface_capabilities_nv = 1505008,
v_physical_device_cooperative_matrix_features_khr = 1506000,
v_cooperative_matrix_properties_khr = 1506001,
v_physical_device_cooperative_matrix_properties_khr = 1506002,
v_data_graph_pipeline_create_info_arm = 1507000,
v_data_graph_pipeline_session_create_info_arm = 1507001,
v_data_graph_pipeline_resource_info_arm = 1507002,
v_data_graph_pipeline_constant_arm = 1507003,
v_data_graph_pipeline_session_memory_requirements_info_arm = 1507004,
v_bind_data_graph_pipeline_session_memory_info_arm = 1507005,
v_physical_device_data_graph_features_arm = 1507006,
v_data_graph_pipeline_shader_module_create_info_arm = 1507007,
v_data_graph_pipeline_property_query_result_arm = 1507008,
v_data_graph_pipeline_info_arm = 1507009,
v_data_graph_pipeline_compiler_control_create_info_arm = 1507010,
v_data_graph_pipeline_session_bind_point_requirements_info_arm = 1507011,
v_data_graph_pipeline_session_bind_point_requirement_arm = 1507012,
v_data_graph_pipeline_identifier_create_info_arm = 1507013,
v_data_graph_pipeline_dispatch_info_arm = 1507014,
v_data_graph_processing_engine_create_info_arm = 1507016,
v_queue_family_data_graph_processing_engine_properties_arm = 1507017,
v_queue_family_data_graph_properties_arm = 1507018,
v_physical_device_queue_family_data_graph_processing_engine_info_arm = 1507019,
v_data_graph_pipeline_constant_tensor_semi_structured_sparsity_info_arm = 1507015,
v_queue_family_data_graph_tosa_properties_arm = 1508000,
v_physical_device_multiview_per_view_render_areas_features_qcom = 1510000,
v_multiview_per_view_render_areas_render_pass_begin_info_qcom = 1510001,
v_physical_device_compute_shader_derivatives_features_khr = 1511000,
v_physical_device_compute_shader_derivatives_properties_khr = 1511000,
v_physical_device_per_stage_descriptor_set_features_nv = 1516000,
v_physical_device_image_processing_2_features_qcom = 1518000,
v_physical_device_image_processing_2_properties_qcom = 1518001,
v_sampler_block_match_window_create_info_qcom = 1518002,
v_sampler_cubic_weights_create_info_qcom = 1519000,
v_physical_device_cubic_weights_features_qcom = 1519001,
v_blit_image_cubic_weights_info_qcom = 1519002,
v_physical_device_ycbcr_degamma_features_qcom = 1520000,
v_sampler_ycbcr_conversion_ycbcr_degamma_create_info_qcom = 1520001,
v_physical_device_cubic_clamp_features_qcom = 1521000,
v_physical_device_attachment_feedback_loop_dynamic_state_features_ext = 1524000,
v_physical_device_unified_image_layouts_features_khr = 1527000,
v_attachment_feedback_loop_info_ext = 1527001,
v_screen_buffer_properties_qnx = 1529000,
v_screen_buffer_format_properties_qnx = 1529001,
v_import_screen_buffer_info_qnx = 1529002,
v_external_format_qnx = 1529003,
v_physical_device_external_memory_screen_buffer_features_qnx = 1529004,
v_physical_device_layered_driver_properties_msft = 1530000,
v_calibrated_timestamp_info_khr = 1543000,
v_set_descriptor_buffer_offsets_info_ext = 1545007,
v_bind_descriptor_buffer_embedded_samplers_info_ext = 1545008,
v_physical_device_descriptor_pool_overallocation_features_nv = 1546000,
v_physical_device_tile_memory_heap_features_qcom = 1547000,
v_physical_device_tile_memory_heap_properties_qcom = 1547001,
v_tile_memory_requirements_qcom = 1547002,
v_tile_memory_bind_info_qcom = 1547003,
v_tile_memory_size_info_qcom = 1547004,
v_physical_device_copy_memory_indirect_features_khr = 1549000,
v_physical_device_copy_memory_indirect_properties_khr = 1549001,
v_copy_memory_indirect_info_khr = 1549002,
v_copy_memory_to_image_indirect_info_khr = 1549003,
v_physical_device_memory_decompression_features_ext = 1550000,
v_physical_device_memory_decompression_properties_ext = 1550001,
v_decompress_memory_info_ext = 1550002,
v_display_surface_stereo_create_info_nv = 1551000,
v_display_mode_stereo_properties_nv = 1551001,
v_physical_device_raw_access_chains_features_nv = 1555000,
v_external_compute_queue_device_create_info_nv = 1556000,
v_external_compute_queue_create_info_nv = 1556001,
v_external_compute_queue_data_params_nv = 1556002,
v_physical_device_external_compute_queue_properties_nv = 1556003,
v_physical_device_shader_relaxed_extended_instruction_features_khr = 1558000,
v_physical_device_command_buffer_inheritance_features_nv = 1559000,
v_physical_device_maintenance_7_features_khr = 1562000,
v_physical_device_maintenance_7_properties_khr = 1562001,
v_physical_device_layered_api_properties_list_khr = 1562002,
v_physical_device_layered_api_properties_khr = 1562003,
v_physical_device_layered_api_vulkan_properties_khr = 1562004,
v_physical_device_shader_atomic_float16_vector_features_nv = 1563000,
v_physical_device_shader_replicated_composites_features_ext = 1564000,
v_physical_device_shader_float8_features_ext = 1567000,
v_physical_device_ray_tracing_validation_features_nv = 1568000,
v_physical_device_cluster_acceleration_structure_features_nv = 1569000,
v_physical_device_cluster_acceleration_structure_properties_nv = 1569001,
v_cluster_acceleration_structure_clusters_bottom_level_input_nv = 1569002,
v_cluster_acceleration_structure_triangle_cluster_input_nv = 1569003,
v_cluster_acceleration_structure_move_objects_input_nv = 1569004,
v_cluster_acceleration_structure_input_info_nv = 1569005,
v_cluster_acceleration_structure_commands_info_nv = 1569006,
v_ray_tracing_pipeline_cluster_acceleration_structure_create_info_nv = 1569007,
v_physical_device_partitioned_acceleration_structure_features_nv = 1570000,
v_physical_device_partitioned_acceleration_structure_properties_nv = 1570001,
v_write_descriptor_set_partitioned_acceleration_structure_nv = 1570002,
v_partitioned_acceleration_structure_instances_input_nv = 1570003,
v_build_partitioned_acceleration_structure_info_nv = 1570004,
v_partitioned_acceleration_structure_flags_nv = 1570005,
v_physical_device_device_generated_commands_features_ext = 1572000,
v_physical_device_device_generated_commands_properties_ext = 1572001,
v_generated_commands_memory_requirements_info_ext = 1572002,
v_indirect_execution_set_create_info_ext = 1572003,
v_generated_commands_info_ext = 1572004,
v_indirect_commands_layout_create_info_ext = 1572006,
v_indirect_commands_layout_token_ext = 1572007,
v_write_indirect_execution_set_pipeline_ext = 1572008,
v_write_indirect_execution_set_shader_ext = 1572009,
v_indirect_execution_set_pipeline_info_ext = 1572010,
v_indirect_execution_set_shader_info_ext = 1572011,
v_indirect_execution_set_shader_layout_info_ext = 1572012,
v_generated_commands_pipeline_info_ext = 1572013,
v_generated_commands_shader_info_ext = 1572014,
v_physical_device_fault_features_khr = 1573000,
v_physical_device_fault_properties_khr = 1573001,
v_device_fault_info_khr = 1573002,
v_device_fault_debug_info_khr = 1573003,
v_physical_device_maintenance_8_features_khr = 1574000,
v_memory_barrier_access_flags_3_khr = 1574002,
v_physical_device_image_alignment_control_features_mesa = 1575000,
v_physical_device_image_alignment_control_properties_mesa = 1575001,
v_image_alignment_control_create_info_mesa = 1575002,
v_physical_device_shader_fma_features_khr = 1579000,
v_push_constant_bank_info_nv = 1580000,
v_physical_device_push_constant_bank_features_nv = 1580001,
v_physical_device_push_constant_bank_properties_nv = 1580002,
v_physical_device_ray_tracing_invocation_reorder_features_ext = 1581000,
v_physical_device_ray_tracing_invocation_reorder_properties_ext = 1581001,
v_physical_device_depth_clamp_control_features_ext = 1582000,
v_pipeline_viewport_depth_clamp_control_create_info_ext = 1582001,
v_physical_device_maintenance_9_features_khr = 1584000,
v_physical_device_maintenance_9_properties_khr = 1584001,
v_queue_family_ownership_transfer_properties_khr = 1584002,
v_surface_create_info_ohos = 1000685000,
v_native_buffer_ohos = 1588001,
v_swapchain_image_create_info_ohos = 1588002,
v_physical_device_presentation_properties_ohos = 1588003,
v_physical_device_hdr_vivid_features_huawei = 1590000,
v_hdr_vivid_dynamic_metadata_huawei = 1590001,
v_physical_device_cooperative_matrix_2_features_nv = 1593000,
v_cooperative_matrix_flexible_dimensions_properties_nv = 1593001,
v_physical_device_cooperative_matrix_2_properties_nv = 1593002,
v_physical_device_pipeline_opacity_micromap_features_arm = 1596000,
v_import_memory_metal_handle_info_ext = 1602000,
v_memory_metal_handle_properties_ext = 1602001,
v_memory_get_metal_handle_info_ext = 1602002,
v_physical_device_depth_clamp_zero_one_features_khr = 1604000,
v_physical_device_performance_counters_by_region_features_arm = 1605000,
v_physical_device_performance_counters_by_region_properties_arm = 1605001,
v_performance_counter_arm = 1605002,
v_performance_counter_description_arm = 1605003,
v_render_pass_performance_counters_by_region_begin_info_arm = 1605004,
v_physical_device_shader_instrumentation_features_arm = 1607000,
v_physical_device_shader_instrumentation_properties_arm = 1607001,
v_shader_instrumentation_create_info_arm = 1607002,
v_shader_instrumentation_metric_description_arm = 1607003,
v_physical_device_vertex_attribute_robustness_features_ext = 1608000,
v_physical_device_format_pack_features_arm = 1609000,
v_physical_device_fragment_density_map_layered_features_valve = 1611000,
v_physical_device_fragment_density_map_layered_properties_valve = 1611001,
v_pipeline_fragment_density_map_layered_create_info_valve = 1611002,
v_physical_device_robustness_2_features_khr = 1612000,
v_physical_device_robustness_2_properties_khr = 1612001,
v_set_present_config_nv = 1613000,
v_physical_device_present_metering_features_nv = 1613001,
v_physical_device_fragment_density_map_offset_features_ext = 1619000,
v_physical_device_fragment_density_map_offset_properties_ext = 1619001,
v_render_pass_fragment_density_map_offset_end_info_ext = 1619002,
v_physical_device_zero_initialize_device_memory_features_ext = 1620000,
v_physical_device_present_mode_fifo_latest_ready_features_khr = 1621000,
v_physical_device_shader_64_bit_indexing_features_ext = 1627000,
v_physical_device_custom_resolve_features_ext = 1628000,
v_begin_custom_resolve_info_ext = 1628001,
v_custom_resolve_create_info_ext = 1628002,
v_physical_device_data_graph_model_features_qcom = 1629000,
v_data_graph_pipeline_builtin_model_create_info_qcom = 1629001,
v_physical_device_maintenance_10_features_khr = 1630000,
v_physical_device_maintenance_10_properties_khr = 1630001,
v_rendering_attachment_flags_info_khr = 1630002,
v_rendering_end_info_khr = 1630003,
v_resolve_image_mode_info_khr = 1630004,
v_physical_device_data_graph_optical_flow_features_arm = 1631000,
v_queue_family_data_graph_optical_flow_properties_arm = 1631001,
v_data_graph_optical_flow_image_format_info_arm = 1631003,
v_data_graph_optical_flow_image_format_properties_arm = 1631004,
v_data_graph_pipeline_optical_flow_dispatch_info_arm = 1631005,
v_data_graph_pipeline_optical_flow_create_info_arm = 1631002,
v_data_graph_pipeline_resource_info_image_layout_arm = 1631006,
v_data_graph_pipeline_single_node_create_info_arm = 1631007,
v_data_graph_pipeline_single_node_connection_arm = 1631008,
v_physical_device_shader_long_vector_features_ext = 1635000,
v_physical_device_shader_long_vector_properties_ext = 1635001,
v_physical_device_pipeline_cache_incremental_mode_features_sec = 1637000,
v_physical_device_shader_uniform_buffer_unsized_array_features_ext = 1642000,
v_compute_occupancy_priority_parameters_nv = 1645000,
v_physical_device_compute_occupancy_priority_features_nv = 1645001,
v_physical_device_shader_subgroup_partitioned_features_ext = 1662000,
v_ubm_surface_create_info_sec = 1664000,
v_physical_device_shader_mixed_float_dot_product_features_valve = 1673000,
v_physical_device_primitive_restart_index_features_ext = 1678000,
v_physical_device_variable_pointer_features = v_physical_device_variable_pointers_features,
v_physical_device_shader_draw_parameter_features = v_physical_device_shader_draw_parameters_features,
v_debug_report_create_info_ext [[deprecated]] = v_debug_report_callback_create_info_ext,
v_rendering_info_khr = v_rendering_info,
v_rendering_attachment_info_khr = v_rendering_attachment_info,
v_pipeline_rendering_create_info_khr = v_pipeline_rendering_create_info,
v_physical_device_dynamic_rendering_features_khr = v_physical_device_dynamic_rendering_features,
v_command_buffer_inheritance_rendering_info_khr = v_command_buffer_inheritance_rendering_info,
v_render_pass_multiview_create_info_khr = v_render_pass_multiview_create_info,
v_physical_device_multiview_features_khr = v_physical_device_multiview_features,
v_physical_device_multiview_properties_khr = v_physical_device_multiview_properties,
v_physical_device_features_2_khr = v_physical_device_features_2,
v_physical_device_properties_2_khr = v_physical_device_properties_2,
v_format_properties_2_khr = v_format_properties_2,
v_image_format_properties_2_khr = v_image_format_properties_2,
v_physical_device_image_format_info_2_khr = v_physical_device_image_format_info_2,
v_queue_family_properties_2_khr = v_queue_family_properties_2,
v_physical_device_memory_properties_2_khr = v_physical_device_memory_properties_2,
v_sparse_image_format_properties_2_khr = v_sparse_image_format_properties_2,
v_physical_device_sparse_image_format_info_2_khr = v_physical_device_sparse_image_format_info_2,
v_memory_allocate_flags_info_khr = v_memory_allocate_flags_info,
v_device_group_render_pass_begin_info_khr = v_device_group_render_pass_begin_info,
v_device_group_command_buffer_begin_info_khr = v_device_group_command_buffer_begin_info,
v_device_group_submit_info_khr = v_device_group_submit_info,
v_device_group_bind_sparse_info_khr = v_device_group_bind_sparse_info,
v_bind_buffer_memory_device_group_info_khr = v_bind_buffer_memory_device_group_info,
v_bind_image_memory_device_group_info_khr = v_bind_image_memory_device_group_info,
v_physical_device_texture_compression_astc_hdr_features_ext = v_physical_device_texture_compression_astc_hdr_features,
v_pipeline_robustness_create_info_ext = v_pipeline_robustness_create_info,
v_physical_device_pipeline_robustness_features_ext = v_physical_device_pipeline_robustness_features,
v_physical_device_pipeline_robustness_properties_ext = v_physical_device_pipeline_robustness_properties,
v_physical_device_group_properties_khr = v_physical_device_group_properties,
v_device_group_device_create_info_khr = v_device_group_device_create_info,
v_physical_device_external_image_format_info_khr = v_physical_device_external_image_format_info,
v_external_image_format_properties_khr = v_external_image_format_properties,
v_physical_device_external_buffer_info_khr = v_physical_device_external_buffer_info,
v_external_buffer_properties_khr = v_external_buffer_properties,
v_physical_device_id_properties_khr = v_physical_device_id_properties,
v_external_memory_buffer_create_info_khr = v_external_memory_buffer_create_info,
v_external_memory_image_create_info_khr = v_external_memory_image_create_info,
v_export_memory_allocate_info_khr = v_export_memory_allocate_info,
v_physical_device_external_semaphore_info_khr = v_physical_device_external_semaphore_info,
v_external_semaphore_properties_khr = v_external_semaphore_properties,
v_export_semaphore_create_info_khr = v_export_semaphore_create_info,
v_physical_device_push_descriptor_properties_khr = v_physical_device_push_descriptor_properties,
v_physical_device_shader_float16_int8_features_khr = v_physical_device_shader_float16_int8_features,
v_physical_device_float16_int8_features_khr = v_physical_device_shader_float16_int8_features,
v_physical_device_16bit_storage_features_khr = v_physical_device_16bit_storage_features,
v_descriptor_update_template_create_info_khr = v_descriptor_update_template_create_info,
v_surface_capabilities2_ext [[deprecated]] = v_surface_capabilities_2_ext,
v_physical_device_imageless_framebuffer_features_khr = v_physical_device_imageless_framebuffer_features,
v_framebuffer_attachments_create_info_khr = v_framebuffer_attachments_create_info,
v_framebuffer_attachment_image_info_khr = v_framebuffer_attachment_image_info,
v_render_pass_attachment_begin_info_khr = v_render_pass_attachment_begin_info,
v_attachment_description_2_khr = v_attachment_description_2,
v_attachment_reference_2_khr = v_attachment_reference_2,
v_subpass_description_2_khr = v_subpass_description_2,
v_subpass_dependency_2_khr = v_subpass_dependency_2,
v_render_pass_create_info_2_khr = v_render_pass_create_info_2,
v_subpass_begin_info_khr = v_subpass_begin_info,
v_subpass_end_info_khr = v_subpass_end_info,
v_physical_device_external_fence_info_khr = v_physical_device_external_fence_info,
v_external_fence_properties_khr = v_external_fence_properties,
v_export_fence_create_info_khr = v_export_fence_create_info,
v_physical_device_point_clipping_properties_khr = v_physical_device_point_clipping_properties,
v_render_pass_input_attachment_aspect_create_info_khr = v_render_pass_input_attachment_aspect_create_info,
v_image_view_usage_create_info_khr = v_image_view_usage_create_info,
v_pipeline_tessellation_domain_origin_state_create_info_khr = v_pipeline_tessellation_domain_origin_state_create_info,
v_physical_device_variable_pointers_features_khr = v_physical_device_variable_pointers_features,
v_physical_device_variable_pointer_features_khr = v_physical_device_variable_pointers_features_khr,
v_memory_dedicated_requirements_khr = v_memory_dedicated_requirements,
v_memory_dedicated_allocate_info_khr = v_memory_dedicated_allocate_info,
v_physical_device_sampler_filter_minmax_properties_ext = v_physical_device_sampler_filter_minmax_properties,
v_sampler_reduction_mode_create_info_ext = v_sampler_reduction_mode_create_info,
v_physical_device_inline_uniform_block_features_ext = v_physical_device_inline_uniform_block_features,
v_physical_device_inline_uniform_block_properties_ext = v_physical_device_inline_uniform_block_properties,
v_write_descriptor_set_inline_uniform_block_ext = v_write_descriptor_set_inline_uniform_block,
v_descriptor_pool_inline_uniform_block_create_info_ext = v_descriptor_pool_inline_uniform_block_create_info,
v_buffer_memory_requirements_info_2_khr = v_buffer_memory_requirements_info_2,
v_image_memory_requirements_info_2_khr = v_image_memory_requirements_info_2,
v_image_sparse_memory_requirements_info_2_khr = v_image_sparse_memory_requirements_info_2,
v_memory_requirements_2_khr = v_memory_requirements_2,
v_sparse_image_memory_requirements_2_khr = v_sparse_image_memory_requirements_2,
v_image_format_list_create_info_khr = v_image_format_list_create_info,
v_attachment_sample_count_info_nv = v_attachment_sample_count_info_amd,
v_sampler_ycbcr_conversion_create_info_khr = v_sampler_ycbcr_conversion_create_info,
v_sampler_ycbcr_conversion_info_khr = v_sampler_ycbcr_conversion_info,
v_bind_image_plane_memory_info_khr = v_bind_image_plane_memory_info,
v_image_plane_memory_requirements_info_khr = v_image_plane_memory_requirements_info,
v_physical_device_sampler_ycbcr_conversion_features_khr = v_physical_device_sampler_ycbcr_conversion_features,
v_sampler_ycbcr_conversion_image_format_properties_khr = v_sampler_ycbcr_conversion_image_format_properties,
v_bind_buffer_memory_info_khr = v_bind_buffer_memory_info,
v_bind_image_memory_info_khr = v_bind_image_memory_info,
v_descriptor_set_layout_binding_flags_create_info_ext = v_descriptor_set_layout_binding_flags_create_info,
v_physical_device_descriptor_indexing_features_ext = v_physical_device_descriptor_indexing_features,
v_physical_device_descriptor_indexing_properties_ext = v_physical_device_descriptor_indexing_properties,
v_descriptor_set_variable_descriptor_count_allocate_info_ext = v_descriptor_set_variable_descriptor_count_allocate_info,
v_descriptor_set_variable_descriptor_count_layout_support_ext = v_descriptor_set_variable_descriptor_count_layout_support,
v_physical_device_maintenance_3_properties_khr = v_physical_device_maintenance_3_properties,
v_descriptor_set_layout_support_khr = v_descriptor_set_layout_support,
v_device_queue_global_priority_create_info_ext = v_device_queue_global_priority_create_info,
v_physical_device_shader_subgroup_extended_types_features_khr = v_physical_device_shader_subgroup_extended_types_features,
v_physical_device_8bit_storage_features_khr = v_physical_device_8bit_storage_features,
v_physical_device_shader_atomic_int64_features_khr = v_physical_device_shader_atomic_int64_features,
v_calibrated_timestamp_info_ext = v_calibrated_timestamp_info_khr,
v_device_queue_global_priority_create_info_khr = v_device_queue_global_priority_create_info,
v_physical_device_global_priority_query_features_khr = v_physical_device_global_priority_query_features,
v_queue_family_global_priority_properties_khr = v_queue_family_global_priority_properties,
v_pipeline_vertex_input_divisor_state_create_info_ext = v_pipeline_vertex_input_divisor_state_create_info,
v_physical_device_vertex_attribute_divisor_features_ext = v_physical_device_vertex_attribute_divisor_features,
v_pipeline_creation_feedback_create_info_ext = v_pipeline_creation_feedback_create_info,
v_physical_device_driver_properties_khr = v_physical_device_driver_properties,
v_physical_device_float_controls_properties_khr = v_physical_device_float_controls_properties,
v_physical_device_depth_stencil_resolve_properties_khr = v_physical_device_depth_stencil_resolve_properties,
v_subpass_description_depth_stencil_resolve_khr = v_subpass_description_depth_stencil_resolve,
v_physical_device_compute_shader_derivatives_features_nv = v_physical_device_compute_shader_derivatives_features_khr,
v_physical_device_fragment_shader_barycentric_features_nv = v_physical_device_fragment_shader_barycentric_features_khr,
v_physical_device_timeline_semaphore_features_khr = v_physical_device_timeline_semaphore_features,
v_physical_device_timeline_semaphore_properties_khr = v_physical_device_timeline_semaphore_properties,
v_semaphore_type_create_info_khr = v_semaphore_type_create_info,
v_timeline_semaphore_submit_info_khr = v_timeline_semaphore_submit_info,
v_semaphore_wait_info_khr = v_semaphore_wait_info,
v_semaphore_signal_info_khr = v_semaphore_signal_info,
v_query_pool_create_info_intel [[deprecated]] = v_query_pool_performance_query_create_info_intel,
v_physical_device_vulkan_memory_model_features_khr = v_physical_device_vulkan_memory_model_features,
v_physical_device_shader_terminate_invocation_features_khr = v_physical_device_shader_terminate_invocation_features,
v_physical_device_scalar_block_layout_features_ext = v_physical_device_scalar_block_layout_features,
v_physical_device_subgroup_size_control_properties_ext = v_physical_device_subgroup_size_control_properties,
v_pipeline_shader_stage_required_subgroup_size_create_info_ext = v_pipeline_shader_stage_required_subgroup_size_create_info,
v_physical_device_subgroup_size_control_features_ext = v_physical_device_subgroup_size_control_features,
v_physical_device_dynamic_rendering_local_read_features_khr = v_physical_device_dynamic_rendering_local_read_features,
v_rendering_attachment_location_info_khr = v_rendering_attachment_location_info,
v_rendering_input_attachment_index_info_khr = v_rendering_input_attachment_index_info,
v_physical_device_separate_depth_stencil_layouts_features_khr = v_physical_device_separate_depth_stencil_layouts_features,
v_attachment_reference_stencil_layout_khr = v_attachment_reference_stencil_layout,
v_attachment_description_stencil_layout_khr = v_attachment_description_stencil_layout,
v_physical_device_buffer_address_features_ext = v_physical_device_buffer_device_address_features_ext,
v_buffer_device_address_info_ext = v_buffer_device_address_info,
v_physical_device_tool_properties_ext = v_physical_device_tool_properties,
v_image_stencil_usage_create_info_ext = v_image_stencil_usage_create_info,
v_physical_device_uniform_buffer_standard_layout_features_khr = v_physical_device_uniform_buffer_standard_layout_features,
v_physical_device_buffer_device_address_features_khr = v_physical_device_buffer_device_address_features,
v_buffer_device_address_info_khr = v_buffer_device_address_info,
v_buffer_opaque_capture_address_create_info_khr = v_buffer_opaque_capture_address_create_info,
v_memory_opaque_capture_address_allocate_info_khr = v_memory_opaque_capture_address_allocate_info,
v_device_memory_opaque_capture_address_info_khr = v_device_memory_opaque_capture_address_info,
v_physical_device_line_rasterization_features_ext = v_physical_device_line_rasterization_features,
v_pipeline_rasterization_line_state_create_info_ext = v_pipeline_rasterization_line_state_create_info,
v_physical_device_line_rasterization_properties_ext = v_physical_device_line_rasterization_properties,
v_physical_device_host_query_reset_features_ext = v_physical_device_host_query_reset_features,
v_physical_device_index_type_uint8_features_ext = v_physical_device_index_type_uint8_features,
v_physical_device_host_image_copy_features_ext = v_physical_device_host_image_copy_features,
v_physical_device_host_image_copy_properties_ext = v_physical_device_host_image_copy_properties,
v_memory_to_image_copy_ext = v_memory_to_image_copy,
v_image_to_memory_copy_ext = v_image_to_memory_copy,
v_copy_image_to_memory_info_ext = v_copy_image_to_memory_info,
v_copy_memory_to_image_info_ext = v_copy_memory_to_image_info,
v_host_image_layout_transition_info_ext = v_host_image_layout_transition_info,
v_copy_image_to_image_info_ext = v_copy_image_to_image_info,
v_subresource_host_memcpy_size_ext = v_subresource_host_memcpy_size,
v_host_image_copy_device_performance_query_ext = v_host_image_copy_device_performance_query,
v_memory_map_info_khr = v_memory_map_info,
v_memory_unmap_info_khr = v_memory_unmap_info,
v_surface_present_mode_ext = v_surface_present_mode_khr,
v_surface_present_scaling_capabilities_ext = v_surface_present_scaling_capabilities_khr,
v_surface_present_mode_compatibility_ext = v_surface_present_mode_compatibility_khr,
v_physical_device_swapchain_maintenance_1_features_ext = v_physical_device_swapchain_maintenance_1_features_khr,
v_swapchain_present_fence_info_ext = v_swapchain_present_fence_info_khr,
v_swapchain_present_modes_create_info_ext = v_swapchain_present_modes_create_info_khr,
v_swapchain_present_mode_info_ext = v_swapchain_present_mode_info_khr,
v_swapchain_present_scaling_create_info_ext = v_swapchain_present_scaling_create_info_khr,
v_release_swapchain_images_info_ext = v_release_swapchain_images_info_khr,
v_physical_device_shader_demote_to_helper_invocation_features_ext = v_physical_device_shader_demote_to_helper_invocation_features,
v_physical_device_shader_integer_dot_product_features_khr = v_physical_device_shader_integer_dot_product_features,
v_physical_device_shader_integer_dot_product_properties_khr = v_physical_device_shader_integer_dot_product_properties,
v_physical_device_texel_buffer_alignment_properties_ext = v_physical_device_texel_buffer_alignment_properties,
v_physical_device_robustness_2_features_ext = v_physical_device_robustness_2_features_khr,
v_physical_device_robustness_2_properties_ext = v_physical_device_robustness_2_properties_khr,
v_physical_device_private_data_features_ext = v_physical_device_private_data_features,
v_device_private_data_create_info_ext = v_device_private_data_create_info,
v_private_data_slot_create_info_ext = v_private_data_slot_create_info,
v_physical_device_pipeline_creation_cache_control_features_ext = v_physical_device_pipeline_creation_cache_control_features,
v_memory_barrier_2_khr = v_memory_barrier_2,
v_buffer_memory_barrier_2_khr = v_buffer_memory_barrier_2,
v_image_memory_barrier_2_khr = v_image_memory_barrier_2,
v_dependency_info_khr = v_dependency_info,
v_submit_info_2_khr = v_submit_info_2,
v_semaphore_submit_info_khr = v_semaphore_submit_info,
v_command_buffer_submit_info_khr = v_command_buffer_submit_info,
v_physical_device_synchronization_2_features_khr = v_physical_device_synchronization_2_features,
v_physical_device_zero_initialize_workgroup_memory_features_khr = v_physical_device_zero_initialize_workgroup_memory_features,
v_physical_device_image_robustness_features_ext = v_physical_device_image_robustness_features,
v_copy_buffer_info_2_khr = v_copy_buffer_info_2,
v_copy_image_info_2_khr = v_copy_image_info_2,
v_copy_buffer_to_image_info_2_khr = v_copy_buffer_to_image_info_2,
v_copy_image_to_buffer_info_2_khr = v_copy_image_to_buffer_info_2,
v_blit_image_info_2_khr = v_blit_image_info_2,
v_resolve_image_info_2_khr = v_resolve_image_info_2,
v_buffer_copy_2_khr = v_buffer_copy_2,
v_image_copy_2_khr = v_image_copy_2,
v_image_blit_2_khr = v_image_blit_2,
v_buffer_image_copy_2_khr = v_buffer_image_copy_2,
v_image_resolve_2_khr = v_image_resolve_2,
v_subresource_layout_2_ext = v_subresource_layout_2,
v_image_subresource_2_ext = v_image_subresource_2,
v_physical_device_rasterization_order_attachment_access_features_arm = v_physical_device_rasterization_order_attachment_access_features_ext,
v_physical_device_mutable_descriptor_type_features_valve = v_physical_device_mutable_descriptor_type_features_ext,
v_mutable_descriptor_type_create_info_valve = v_mutable_descriptor_type_create_info_ext,
v_format_properties_3_khr = v_format_properties_3,
v_physical_device_present_mode_fifo_latest_ready_features_ext = v_physical_device_present_mode_fifo_latest_ready_features_khr,
v_pipeline_info_ext = v_pipeline_info_khr,
v_physical_device_external_sci_buf_features_nv = v_physical_device_external_memory_sci_buf_features_nv,
v_physical_device_global_priority_query_features_ext = v_physical_device_global_priority_query_features,
v_queue_family_global_priority_properties_ext = v_queue_family_global_priority_properties,
v_physical_device_maintenance_4_features_khr = v_physical_device_maintenance_4_features,
v_physical_device_maintenance_4_properties_khr = v_physical_device_maintenance_4_properties,
v_device_buffer_memory_requirements_khr = v_device_buffer_memory_requirements,
v_device_image_memory_requirements_khr = v_device_image_memory_requirements,
v_physical_device_shader_subgroup_rotate_features_khr = v_physical_device_shader_subgroup_rotate_features,
v_physical_device_depth_clamp_zero_one_features_ext = v_physical_device_depth_clamp_zero_one_features_khr,
v_physical_device_fragment_density_map_offset_features_qcom = v_physical_device_fragment_density_map_offset_features_ext,
v_physical_device_fragment_density_map_offset_properties_qcom = v_physical_device_fragment_density_map_offset_properties_ext,
v_subpass_fragment_density_map_offset_end_info_qcom = v_render_pass_fragment_density_map_offset_end_info_ext,
v_physical_device_copy_memory_indirect_properties_nv = v_physical_device_copy_memory_indirect_properties_khr,
v_physical_device_memory_decompression_features_nv = v_physical_device_memory_decompression_features_ext,
v_physical_device_memory_decompression_properties_nv = v_physical_device_memory_decompression_properties_ext,
v_physical_device_pipeline_protected_access_features_ext = v_physical_device_pipeline_protected_access_features,
v_physical_device_maintenance_5_features_khr = v_physical_device_maintenance_5_features,
v_physical_device_maintenance_5_properties_khr = v_physical_device_maintenance_5_properties,
v_rendering_area_info_khr = v_rendering_area_info,
v_device_image_subresource_info_khr = v_device_image_subresource_info,
v_subresource_layout_2_khr = v_subresource_layout_2,
v_image_subresource_2_khr = v_image_subresource_2,
v_pipeline_create_flags_2_create_info_khr = v_pipeline_create_flags_2_create_info,
v_buffer_usage_flags_2_create_info_khr = v_buffer_usage_flags_2_create_info,
v_shader_required_subgroup_size_create_info_ext = v_pipeline_shader_stage_required_subgroup_size_create_info,
v_physical_device_vertex_attribute_divisor_properties_khr = v_physical_device_vertex_attribute_divisor_properties,
v_pipeline_vertex_input_divisor_state_create_info_khr = v_pipeline_vertex_input_divisor_state_create_info,
v_physical_device_vertex_attribute_divisor_features_khr = v_physical_device_vertex_attribute_divisor_features,
v_physical_device_shader_float_controls_2_features_khr = v_physical_device_shader_float_controls_2_features,
v_physical_device_index_type_uint8_features_khr = v_physical_device_index_type_uint8_features,
v_physical_device_line_rasterization_features_khr = v_physical_device_line_rasterization_features,
v_pipeline_rasterization_line_state_create_info_khr = v_pipeline_rasterization_line_state_create_info,
v_physical_device_line_rasterization_properties_khr = v_physical_device_line_rasterization_properties,
v_physical_device_shader_expect_assume_features_khr = v_physical_device_shader_expect_assume_features,
v_physical_device_maintenance_6_features_khr = v_physical_device_maintenance_6_features,
v_physical_device_maintenance_6_properties_khr = v_physical_device_maintenance_6_properties,
v_bind_memory_status_khr = v_bind_memory_status,
v_bind_descriptor_sets_info_khr = v_bind_descriptor_sets_info,
v_push_constants_info_khr = v_push_constants_info,
v_push_descriptor_set_info_khr = v_push_descriptor_set_info,
v_push_descriptor_set_with_template_info_khr = v_push_descriptor_set_with_template_info,
v_rendering_end_info_ext = v_rendering_end_info_khr
};

enum class subpass_contents : ktl::u32
{
v_inline = 0,
v_secondary_command_buffers = 1,
v_inline_and_secondary_command_buffers_khr = 1562000,
v_inline_and_secondary_command_buffers_ext = v_inline_and_secondary_command_buffers_khr
};

enum class result : ktl::i32
{
v_success = 0,
v_not_ready = 1,
v_timeout = 2,
v_event_set = 3,
v_event_reset = 4,
v_incomplete = 5,
v_error_out_of_host_memory = -1,
v_error_out_of_device_memory = -2,
v_error_initialization_failed = -3,
v_error_device_lost = -4,
v_error_memory_map_failed = -5,
v_error_layer_not_present = -6,
v_error_extension_not_present = -7,
v_error_feature_not_present = -8,
v_error_incompatible_driver = -9,
v_error_too_many_objects = -10,
v_error_format_not_supported = -11,
v_error_fragmented_pool = -12,
v_error_unknown = -13,
v_error_validation_failed = 1011001,
v_error_out_of_pool_memory = 1069000,
v_error_invalid_external_handle = 1072003,
v_error_invalid_opaque_capture_address = 1257000,
v_error_fragmentation = 1161000,
v_pipeline_compile_required = 1297000,
v_error_not_permitted = 1174001,
v_error_invalid_pipeline_cache_data = 1298000,
v_error_no_pipeline_match = 1298001,
v_error_surface_lost_khr = 1000000,
v_error_native_window_in_use_khr = 1000001,
v_suboptimal_khr = 1001003,
v_error_out_of_date_khr = 1001004,
v_error_incompatible_display_khr = 1003001,
v_error_invalid_shader_nv = 1012000,
v_error_image_usage_not_supported_khr = 1023000,
v_error_video_picture_layout_not_supported_khr = 1023001,
v_error_video_profile_operation_not_supported_khr = 1023002,
v_error_video_profile_format_not_supported_khr = 1023003,
v_error_video_profile_codec_not_supported_khr = 1023004,
v_error_video_std_version_not_supported_khr = 1023005,
v_error_invalid_drm_format_modifier_plane_layout_ext = 1158000,
v_error_present_timing_queue_full_ext = 1208000,
v_error_full_screen_exclusive_mode_lost_ext = 1255000,
v_thread_idle_khr = 1268000,
v_thread_done_khr = 1268001,
v_operation_deferred_khr = 1268002,
v_operation_not_deferred_khr = 1268003,
v_error_compression_exhausted_ext = 1338000,
v_incompatible_shader_binary_ext = 1482000,
v_pipeline_binary_missing_khr = 1483000,
v_error_not_enough_space_khr = 1483000,
v_error_validation_failed_ext = v_error_validation_failed,
v_error_out_of_pool_memory_khr = v_error_out_of_pool_memory,
v_error_invalid_external_handle_khr = v_error_invalid_external_handle,
v_error_fragmentation_ext = v_error_fragmentation,
v_error_not_permitted_ext = v_error_not_permitted,
v_error_not_permitted_khr = v_error_not_permitted,
v_error_invalid_device_address_ext = v_error_invalid_opaque_capture_address,
v_error_invalid_opaque_capture_address_khr = v_error_invalid_opaque_capture_address,
v_pipeline_compile_required_ext = v_pipeline_compile_required,
v_error_pipeline_compile_required_ext = v_pipeline_compile_required,
v_error_incompatible_shader_binary_ext [[deprecated]] = v_incompatible_shader_binary_ext
};

enum class dynamic_state : ktl::u32
{
v_viewport = 0,
v_scissor = 1,
v_line_width = 2,
v_depth_bias = 3,
v_blend_constants = 4,
v_depth_bounds = 5,
v_stencil_compare_mask = 6,
v_stencil_write_mask = 7,
v_stencil_reference = 8,
v_cull_mode = 1267000,
v_front_face = 1267001,
v_primitive_topology = 1267002,
v_viewport_with_count = 1267003,
v_scissor_with_count = 1267004,
v_vertex_input_binding_stride = 1267005,
v_depth_test_enable = 1267006,
v_depth_write_enable = 1267007,
v_depth_compare_op = 1267008,
v_depth_bounds_test_enable = 1267009,
v_stencil_test_enable = 1267010,
v_stencil_op = 1267011,
v_rasterizer_discard_enable = 1377001,
v_depth_bias_enable = 1377002,
v_primitive_restart_enable = 1377004,
v_line_stipple = 1259000,
v_viewport_w_scaling_nv = 1087000,
v_discard_rectangle_ext = 1099000,
v_discard_rectangle_enable_ext = 1099001,
v_discard_rectangle_mode_ext = 1099002,
v_sample_locations_ext = 1143000,
v_ray_tracing_pipeline_stack_size_khr = 1347000,
v_viewport_shading_rate_palette_nv = 1164004,
v_viewport_coarse_sample_order_nv = 1164006,
v_exclusive_scissor_enable_nv = 1205000,
v_exclusive_scissor_nv = 1205001,
v_fragment_shading_rate_khr = 1226000,
v_vertex_input_ext = 1352000,
v_patch_control_points_ext = 1377000,
v_logic_op_ext = 1377003,
v_color_write_enable_ext = 1381000,
v_depth_clamp_enable_ext = 1455003,
v_polygon_mode_ext = 1455004,
v_rasterization_samples_ext = 1455005,
v_sample_mask_ext = 1455006,
v_alpha_to_coverage_enable_ext = 1455007,
v_alpha_to_one_enable_ext = 1455008,
v_logic_op_enable_ext = 1455009,
v_color_blend_enable_ext = 1455010,
v_color_blend_equation_ext = 1455011,
v_color_write_mask_ext = 1455012,
v_tessellation_domain_origin_ext = 1455002,
v_rasterization_stream_ext = 1455013,
v_conservative_rasterization_mode_ext = 1455014,
v_extra_primitive_overestimation_size_ext = 1455015,
v_depth_clip_enable_ext = 1455016,
v_sample_locations_enable_ext = 1455017,
v_color_blend_advanced_ext = 1455018,
v_provoking_vertex_mode_ext = 1455019,
v_line_rasterization_mode_ext = 1455020,
v_line_stipple_enable_ext = 1455021,
v_depth_clip_negative_one_to_one_ext = 1455022,
v_viewport_w_scaling_enable_nv = 1455023,
v_viewport_swizzle_nv = 1455024,
v_coverage_to_color_enable_nv = 1455025,
v_coverage_to_color_location_nv = 1455026,
v_coverage_modulation_mode_nv = 1455027,
v_coverage_modulation_table_enable_nv = 1455028,
v_coverage_modulation_table_nv = 1455029,
v_shading_rate_image_enable_nv = 1455030,
v_representative_fragment_test_enable_nv = 1455031,
v_coverage_reduction_mode_nv = 1455032,
v_attachment_feedback_loop_enable_ext = 1524000,
v_depth_clamp_range_ext = 1582000,
v_line_stipple_ext = v_line_stipple,
v_cull_mode_ext = v_cull_mode,
v_front_face_ext = v_front_face,
v_primitive_topology_ext = v_primitive_topology,
v_viewport_with_count_ext = v_viewport_with_count,
v_scissor_with_count_ext = v_scissor_with_count,
v_vertex_input_binding_stride_ext = v_vertex_input_binding_stride,
v_depth_test_enable_ext = v_depth_test_enable,
v_depth_write_enable_ext = v_depth_write_enable,
v_depth_compare_op_ext = v_depth_compare_op,
v_depth_bounds_test_enable_ext = v_depth_bounds_test_enable,
v_stencil_test_enable_ext = v_stencil_test_enable,
v_stencil_op_ext = v_stencil_op,
v_rasterizer_discard_enable_ext = v_rasterizer_discard_enable,
v_depth_bias_enable_ext = v_depth_bias_enable,
v_primitive_restart_enable_ext = v_primitive_restart_enable,
v_line_stipple_khr = v_line_stipple
};

enum class descriptor_update_template_type : ktl::u32
{
v_descriptor_set = 0,
v_push_descriptors = 1,
v_push_descriptors_khr = v_push_descriptors,
v_descriptor_set_khr = v_descriptor_set
};

enum class object_type : ktl::u32
{
v_unknown = 0,
v_instance = 1,
v_physical_device = 2,
v_device = 3,
v_queue = 4,
v_semaphore = 5,
v_command_buffer = 6,
v_fence = 7,
v_device_memory = 8,
v_buffer = 9,
v_image = 10,
v_event = 11,
v_query_pool = 12,
v_buffer_view = 13,
v_image_view = 14,
v_shader_module = 15,
v_pipeline_cache = 16,
v_pipeline_layout = 17,
v_render_pass = 18,
v_pipeline = 19,
v_descriptor_set_layout = 20,
v_sampler = 21,
v_descriptor_pool = 22,
v_descriptor_set = 23,
v_framebuffer = 24,
v_command_pool = 25,
v_descriptor_update_template = 1085000,
v_sampler_ycbcr_conversion = 1156000,
v_private_data_slot = 1295000,
v_surface_khr = 1000000,
v_swapchain_khr = 1001000,
v_display_khr = 1002000,
v_display_mode_khr = 1002001,
v_debug_report_callback_ext = 1011000,
v_video_session_khr = 1023000,
v_video_session_parameters_khr = 1023001,
v_cu_module_nvx = 1029000,
v_cu_function_nvx = 1029001,
v_debug_utils_messenger_ext = 1128000,
v_acceleration_structure_khr = 1150000,
v_validation_cache_ext = 1160000,
v_acceleration_structure_nv = 1165000,
v_performance_configuration_intel = 1210000,
v_deferred_operation_khr = 1268000,
v_indirect_commands_layout_nv = 1277000,
v_cuda_module_nv = 1307000,
v_cuda_function_nv = 1307001,
v_buffer_collection_fuchsia = 1366000,
v_micromap_ext = 1396000,
v_tensor_arm = 1460000,
v_tensor_view_arm = 1460001,
v_optical_flow_session_nv = 1464000,
v_shader_ext = 1482000,
v_pipeline_binary_khr = 1483000,
v_semaphore_sci_sync_pool_nv = 1489000,
v_data_graph_pipeline_session_arm = 1507000,
v_external_compute_queue_nv = 1556000,
v_indirect_commands_layout_ext = 1572000,
v_indirect_execution_set_ext = 1572001,
v_shader_instrumentation_arm = 1607000,
v_descriptor_update_template_khr = v_descriptor_update_template,
v_sampler_ycbcr_conversion_khr = v_sampler_ycbcr_conversion,
v_private_data_slot_ext = v_private_data_slot
};

enum class ray_tracing_invocation_reorder_mode_ext : ktl::u32
{
v_none_ext = 0,
v_reorder_ext = 1,
v_none_nv = v_none_ext,
v_reorder_nv = v_reorder_ext
};

enum class ray_tracing_lss_indexing_mode_nv : ktl::u32
{
v_list_nv = 0,
v_successive_nv = 1
};

enum class ray_tracing_lss_primitive_end_caps_mode_nv : ktl::u32
{
v_one_nv = 0,
v_chained_nv = 1
};

enum class direct_driver_loading_mode_lunarg : ktl::u32
{
v_exclusive_lunarg = 0,
v_inclusive_lunarg = 1
};

enum class anti_lag_mode_amd : ktl::u32
{
v_driver_control_amd = 0,
v_on_amd = 1,
v_off_amd = 2
};

enum class anti_lag_stage_amd : ktl::u32
{
v_input_amd = 0,
v_present_amd = 1
};

enum class queue_flag_bits : ktl::u32
{
v_graphics_bit = (1U << 0),
v_compute_bit = (1U << 1),
v_transfer_bit = (1U << 2),
v_sparse_binding_bit = (1U << 3),
v_protected_bit = (1U << 4),
v_reserved_7_bit_qcom = (1U << 7),
v_optical_flow_bit_nv = (1U << 8),
v_data_graph_bit_arm = (1U << 10),
v_reserved_12_bit_ext = (1U << 12),
v_reserved_9_bit_ext = (1U << 9),
v_reserved_13_bit_ext = (1U << 13),
v_reserved_11_bit_arm = (1U << 11)
};

enum class cull_mode_flag_bits : ktl::u32
{
v_none = 0,
v_ront_bit = (1U << 0),
v_back_bit = (1U << 1),
v_ront_and_back = 0x00000003
};

enum class render_pass_create_flag_bits : ktl::u32
{
v_reserved_3_bit_img = (1U << 3),
v_reserved_0_bit_khr = (1U << 0),
v_transform_bit_qcom = (1U << 1),
v_per_layer_fragment_density_bit_valve = (1U << 2)
};

enum class device_queue_create_flag_bits : ktl::u32
{
v_protected_bit = (1U << 0),
v_reserved_1_bit_qcom = (1U << 1),
v_internally_synchronized_bit_khr = (1U << 2)
};

enum class memory_property_flag_bits : ktl::u32
{
v_device_local_bit = (1U << 0),
v_host_visible_bit = (1U << 1),
v_host_coherent_bit = (1U << 2),
v_host_cached_bit = (1U << 3),
v_lazily_allocated_bit = (1U << 4),
v_protected_bit = (1U << 5),
v_device_coherent_bit_amd = (1U << 6),
v_device_uncached_bit_amd = (1U << 7),
v_rdma_capable_bit_nv = (1U << 8)
};

enum class memory_heap_flag_bits : ktl::u32
{
v_device_local_bit = (1U << 0),
v_multi_instance_bit = (1U << 1),
v_seu_safe_bit = (1U << 2),
v_tile_memory_bit_qcom = (1U << 3),
v_multi_instance_bit_khr = v_multi_instance_bit
};

enum class access_flag_bits : ktl::u32
{
v_indirect_command_read_bit = (1U << 0),
v_index_read_bit = (1U << 1),
v_vertex_attribute_read_bit = (1U << 2),
v_uniform_read_bit = (1U << 3),
v_input_attachment_read_bit = (1U << 4),
v_shader_read_bit = (1U << 5),
v_shader_write_bit = (1U << 6),
v_color_attachment_read_bit = (1U << 7),
v_color_attachment_write_bit = (1U << 8),
v_depth_stencil_attachment_read_bit = (1U << 9),
v_depth_stencil_attachment_write_bit = (1U << 10),
v_transfer_read_bit = (1U << 11),
v_transfer_write_bit = (1U << 12),
v_host_read_bit = (1U << 13),
v_host_write_bit = (1U << 14),
v_memory_read_bit = (1U << 15),
v_memory_write_bit = (1U << 16),
v_none = 0,
v_transform_feedback_write_bit_ext = (1U << 25),
v_transform_feedback_counter_read_bit_ext = (1U << 26),
v_transform_feedback_counter_write_bit_ext = (1U << 27),
v_conditional_rendering_read_bit_ext = (1U << 20),
v_color_attachment_read_noncoherent_bit_ext = (1U << 19),
v_acceleration_structure_read_bit_khr = (1U << 21),
v_acceleration_structure_write_bit_khr = (1U << 22),
v_ragment_density_map_read_bit_ext = (1U << 24),
v_ragment_shading_rate_attachment_read_bit_khr = (1U << 23),
v_command_preprocess_read_bit_ext = (1U << 17),
v_command_preprocess_write_bit_ext = (1U << 18),
v_shading_rate_image_read_bit_nv = v_ragment_shading_rate_attachment_read_bit_khr,
v_acceleration_structure_read_bit_nv = v_acceleration_structure_read_bit_khr,
v_acceleration_structure_write_bit_nv = v_acceleration_structure_write_bit_khr,
v_command_preprocess_read_bit_nv = v_command_preprocess_read_bit_ext,
v_command_preprocess_write_bit_nv = v_command_preprocess_write_bit_ext,
v_none_khr = v_none
};

enum class buffer_usage_flag_bits : ktl::u32
{
v_transfer_src_bit = (1U << 0),
v_transfer_dst_bit = (1U << 1),
v_uniform_texel_buffer_bit = (1U << 2),
v_storage_texel_buffer_bit = (1U << 3),
v_uniform_buffer_bit = (1U << 4),
v_storage_buffer_bit = (1U << 5),
v_index_buffer_bit = (1U << 6),
v_vertex_buffer_bit = (1U << 7),
v_indirect_buffer_bit = (1U << 8),
v_shader_device_address_bit = (1U << 17),
v_transform_feedback_buffer_bit_ext = (1U << 11),
v_transform_feedback_counter_buffer_bit_ext = (1U << 12),
v_conditional_rendering_bit_ext = (1U << 9),
v_execution_graph_scratch_bit_amdx = (1U << 25),
v_descriptor_heap_bit_ext = (1U << 28),
v_acceleration_structure_build_input_read_only_bit_khr = (1U << 19),
v_acceleration_structure_storage_bit_khr = (1U << 20),
v_shader_binding_table_bit_khr = (1U << 10),
v_sampler_descriptor_buffer_bit_ext = (1U << 21),
v_resource_descriptor_buffer_bit_ext = (1U << 22),
v_push_descriptors_descriptor_buffer_bit_ext = (1U << 26),
v_micromap_build_input_read_only_bit_ext = (1U << 23),
v_micromap_storage_bit_ext = (1U << 24),
v_tile_memory_bit_qcom = (1U << 27),
v_ray_tracing_bit_nv = v_shader_binding_table_bit_khr,
v_shader_device_address_bit_ext = v_shader_device_address_bit,
v_shader_device_address_bit_khr = v_shader_device_address_bit
};

enum class buffer_usage_flag_bits2 : ktl::u64
{
v_2_transfer_src_bit = (1ULL << 0),
v_2_transfer_dst_bit = (1ULL << 1),
v_2_uniform_texel_buffer_bit = (1ULL << 2),
v_2_storage_texel_buffer_bit = (1ULL << 3),
v_2_uniform_buffer_bit = (1ULL << 4),
v_2_storage_buffer_bit = (1ULL << 5),
v_2_index_buffer_bit = (1ULL << 6),
v_2_vertex_buffer_bit = (1ULL << 7),
v_2_indirect_buffer_bit = (1ULL << 8),
v_2_shader_device_address_bit = (1ULL << 17),
v_2_execution_graph_scratch_bit_amdx = (1ULL << 25),
v_2_descriptor_heap_bit_ext = (1ULL << 28),
v_2_conditional_rendering_bit_ext = (1ULL << 9),
v_2_shader_binding_table_bit_khr = (1ULL << 10),
v_2_transform_feedback_buffer_bit_ext = (1ULL << 11),
v_2_transform_feedback_counter_buffer_bit_ext = (1ULL << 12),
v_2_video_decode_src_bit_khr = (1ULL << 13),
v_2_video_decode_dst_bit_khr = (1ULL << 14),
v_2_video_encode_dst_bit_khr = (1ULL << 15),
v_2_video_encode_src_bit_khr = (1ULL << 16),
v_2_acceleration_structure_build_input_read_only_bit_khr = (1ULL << 19),
v_2_acceleration_structure_storage_bit_khr = (1ULL << 20),
v_2_sampler_descriptor_buffer_bit_ext = (1ULL << 21),
v_2_resource_descriptor_buffer_bit_ext = (1ULL << 22),
v_2_push_descriptors_descriptor_buffer_bit_ext = (1ULL << 26),
v_2_micromap_build_input_read_only_bit_ext = (1ULL << 23),
v_2_micromap_storage_bit_ext = (1ULL << 24),
v_2_compressed_data_dgf1_bit_amdx = (1ULL << 33),
v_2_data_graph_foreign_descriptor_bit_arm = (1ULL << 29),
v_2_reserved_34_bit_ext = (1ULL << 34),
v_2_tile_memory_bit_qcom = (1ULL << 27),
v_2_memory_decompression_bit_ext = (1ULL << 32),
v_2_preprocess_buffer_bit_ext = (1ULL << 31),
v_2_reserved_35_bit_khr = (1ULL << 35),
v_2_reserved_36_bit_khr = (1ULL << 36),
v_2_reserved_37_bit_huawei = (1ULL << 37),
v_2_transfer_src_bit_khr = v_2_transfer_src_bit,
v_2_transfer_dst_bit_khr = v_2_transfer_dst_bit,
v_2_uniform_texel_buffer_bit_khr = v_2_uniform_texel_buffer_bit,
v_2_storage_texel_buffer_bit_khr = v_2_storage_texel_buffer_bit,
v_2_uniform_buffer_bit_khr = v_2_uniform_buffer_bit,
v_2_storage_buffer_bit_khr = v_2_storage_buffer_bit,
v_2_index_buffer_bit_khr = v_2_index_buffer_bit,
v_2_vertex_buffer_bit_khr = v_2_vertex_buffer_bit,
v_2_indirect_buffer_bit_khr = v_2_indirect_buffer_bit,
v_2_ray_tracing_bit_nv = v_2_shader_binding_table_bit_khr,
v_2_shader_device_address_bit_khr = v_2_shader_device_address_bit
};

enum class buffer_create_flag_bits : ktl::u32
{
v_sparse_binding_bit = (1U << 0),
v_sparse_residency_bit = (1U << 1),
v_sparse_aliased_bit = (1U << 2),
v_protected_bit = (1U << 3),
v_device_address_capture_replay_bit = (1U << 4),
v_reserved_7_bit_img = (1U << 7),
v_descriptor_buffer_capture_replay_bit_ext = (1U << 5),
v_device_address_capture_replay_bit_ext = v_device_address_capture_replay_bit,
v_device_address_capture_replay_bit_khr = v_device_address_capture_replay_bit
};

enum class shader_stage_flag_bits : ktl::u32
{
v_vertex_bit = (1U << 0),
v_tessellation_control_bit = (1U << 1),
v_tessellation_evaluation_bit = (1U << 2),
v_geometry_bit = (1U << 3),
v_ragment_bit = (1U << 4),
v_compute_bit = (1U << 5),
v_all_graphics = 0x0000001F,
v_all = 0x7FFFFFFF,
v_raygen_bit_khr = (1U << 8),
v_any_hit_bit_khr = (1U << 9),
v_closest_hit_bit_khr = (1U << 10),
v_miss_bit_khr = (1U << 11),
v_intersection_bit_khr = (1U << 12),
v_callable_bit_khr = (1U << 13),
v_task_bit_ext = (1U << 6),
v_mesh_bit_ext = (1U << 7),
v_subpass_shading_bit_huawei = (1U << 14),
v_cluster_culling_bit_huawei = (1U << 19),
v_reserved_15_bit_nv = (1U << 15),
v_reserved_16_bit_huawei = (1U << 16),
v_raygen_bit_nv = v_raygen_bit_khr,
v_any_hit_bit_nv = v_any_hit_bit_khr,
v_closest_hit_bit_nv = v_closest_hit_bit_khr,
v_miss_bit_nv = v_miss_bit_khr,
v_intersection_bit_nv = v_intersection_bit_khr,
v_callable_bit_nv = v_callable_bit_khr,
v_task_bit_nv = v_task_bit_ext,
v_mesh_bit_nv = v_mesh_bit_ext
};

enum class image_usage_flag_bits : ktl::u32
{
v_transfer_src_bit = (1U << 0),
v_transfer_dst_bit = (1U << 1),
v_sampled_bit = (1U << 2),
v_storage_bit = (1U << 3),
v_color_attachment_bit = (1U << 4),
v_depth_stencil_attachment_bit = (1U << 5),
v_transient_attachment_bit = (1U << 6),
v_input_attachment_bit = (1U << 7),
v_host_transfer_bit = (1U << 22),
v_ragment_density_map_bit_ext = (1U << 9),
v_ragment_shading_rate_attachment_bit_khr = (1U << 8),
v_attachment_feedback_loop_bit_ext = (1U << 19),
v_invocation_mask_bit_huawei = (1U << 18),
v_sample_weight_bit_qcom = (1U << 20),
v_sample_block_match_bit_qcom = (1U << 21),
v_reserved_24_bit_coreavi = (1U << 24),
v_tensor_aliasing_bit_arm = (1U << 23),
v_reserved_28_bit_ext = (1U << 28),
v_tile_memory_bit_qcom = (1U << 27),
v_reserved_29_bit_khr = (1U << 29),
v_reserved_30_bit_khr = (1U << 30),
v_reserved_16_bit_huawei = (1U << 16),
v_reserved_27_bit_huawei = (1U << 17),
v_shading_rate_image_bit_nv = v_ragment_shading_rate_attachment_bit_khr,
v_host_transfer_bit_ext = v_host_transfer_bit
};

enum class image_create_flag_bits : ktl::u32
{
v_sparse_binding_bit = (1U << 0),
v_sparse_residency_bit = (1U << 1),
v_sparse_aliased_bit = (1U << 2),
v_mutable_format_bit = (1U << 3),
v_cube_compatible_bit = (1U << 4),
v_alias_bit = (1U << 10),
v_split_instance_bind_regions_bit = (1U << 6),
v_2d_array_compatible_bit = (1U << 5),
v_block_texel_view_compatible_bit = (1U << 7),
v_extended_usage_bit = (1U << 8),
v_protected_bit = (1U << 11),
v_disjoint_bit = (1U << 9),
v_corner_sampled_bit_nv = (1U << 13),
v_reserved_21_bit_img = (1U << 21),
v_descriptor_heap_capture_replay_bit_ext = (1U << 16),
v_sample_locations_compatible_depth_bit_ext = (1U << 12),
v_subsampled_bit_ext = (1U << 14),
v_multisampled_render_to_single_sampled_bit_ext = (1U << 18),
v_2d_view_compatible_bit_ext = (1U << 17),
v_ragment_density_map_offset_bit_ext = (1U << 15),
v_reserved_22_bit_khr = (1U << 22),
v_split_instance_bind_regions_bit_khr = v_split_instance_bind_regions_bit,
v_2d_array_compatible_bit_khr = v_2d_array_compatible_bit,
v_block_texel_view_compatible_bit_khr = v_block_texel_view_compatible_bit,
v_extended_usage_bit_khr = v_extended_usage_bit,
v_disjoint_bit_khr = v_disjoint_bit,
v_alias_bit_khr = v_alias_bit,
v_descriptor_buffer_capture_replay_bit_ext = v_descriptor_heap_capture_replay_bit_ext,
v_ragment_density_map_offset_bit_qcom = v_ragment_density_map_offset_bit_ext
};

enum class image_view_create_flag_bits : ktl::u32
{
v_ragment_density_map_dynamic_bit_ext = (1U << 0),
v_descriptor_buffer_capture_replay_bit_ext = (1U << 2),
v_ragment_density_map_deferred_bit_ext = (1U << 1)
};

enum class sampler_create_flag_bits : ktl::u32
{
v_subsampled_bit_ext = (1U << 0),
v_subsampled_coarse_reconstruction_bit_ext = (1U << 1),
v_descriptor_buffer_capture_replay_bit_ext = (1U << 3),
v_non_seamless_cube_map_bit_ext = (1U << 2),
v_image_processing_bit_qcom = (1U << 4)
};

enum class pipeline_create_flag_bits : ktl::u32
{
v_disable_optimization_bit = (1U << 0),
v_allow_derivatives_bit = (1U << 1),
v_derivative_bit = (1U << 2),
v_dispatch_base_bit = (1U << 4),
v_view_index_from_device_index_bit = (1U << 3),
v_ail_on_pipeline_compile_required_bit = (1U << 8),
v_early_return_on_failure_bit = (1U << 9),
v_no_protected_access_bit = (1U << 27),
v_protected_access_only_bit = (1U << 30),
v_ray_tracing_no_null_any_hit_shaders_bit_khr = (1U << 14),
v_ray_tracing_no_null_closest_hit_shaders_bit_khr = (1U << 15),
v_ray_tracing_no_null_miss_shaders_bit_khr = (1U << 16),
v_ray_tracing_no_null_intersection_shaders_bit_khr = (1U << 17),
v_ray_tracing_skip_triangles_bit_khr = (1U << 12),
v_ray_tracing_skip_aabbs_bit_khr = (1U << 13),
v_ray_tracing_shader_group_handle_capture_replay_bit_khr = (1U << 19),
v_defer_compile_bit_nv = (1U << 5),
v_rendering_fragment_density_map_attachment_bit_ext = (1U << 22),
v_rendering_fragment_shading_rate_attachment_bit_khr = (1U << 21),
v_capture_statistics_bit_khr = (1U << 6),
v_capture_internal_representations_bit_khr = (1U << 7),
v_indirect_bindable_bit_nv = (1U << 18),
v_library_bit_khr = (1U << 11),
v_descriptor_buffer_bit_ext = (1U << 29),
v_retain_link_time_optimization_info_bit_ext = (1U << 23),
v_link_time_optimization_bit_ext = (1U << 10),
v_ray_tracing_allow_motion_bit_nv = (1U << 20),
v_color_attachment_feedback_loop_bit_ext = (1U << 25),
v_depth_stencil_attachment_feedback_loop_bit_ext = (1U << 26),
v_ray_tracing_opacity_micromap_bit_ext = (1U << 24),
v_ray_tracing_displacement_micromap_bit_nv = (1U << 28),
v_dispatch_base [[deprecated]] = v_dispatch_base_bit,
v_view_index_from_device_index_bit_khr = v_view_index_from_device_index_bit,
v_dispatch_base_bit_khr = v_dispatch_base_bit,
v_dispatch_base_khr [[deprecated]] = v_dispatch_base_bit,
v_rasterization_state_create_fragment_density_map_attachment_bit_ext [[deprecated]] = v_rendering_fragment_density_map_attachment_bit_ext,
v_rasterization_state_create_fragment_shading_rate_attachment_bit_khr [[deprecated]] = v_rendering_fragment_shading_rate_attachment_bit_khr,
v_ail_on_pipeline_compile_required_bit_ext = v_ail_on_pipeline_compile_required_bit,
v_early_return_on_failure_bit_ext = v_early_return_on_failure_bit,
v_no_protected_access_bit_ext = v_no_protected_access_bit,
v_protected_access_only_bit_ext = v_protected_access_only_bit
};

enum class pipeline_create_flag_bits2 : ktl::u64
{
v_2_disable_optimization_bit = (1ULL << 0),
v_2_allow_derivatives_bit = (1ULL << 1),
v_2_derivative_bit = (1ULL << 2),
v_2_view_index_from_device_index_bit = (1ULL << 3),
v_2_dispatch_base_bit = (1ULL << 4),
v_2_fail_on_pipeline_compile_required_bit = (1ULL << 8),
v_2_early_return_on_failure_bit = (1ULL << 9),
v_2_no_protected_access_bit = (1ULL << 27),
v_2_protected_access_only_bit = (1ULL << 30),
v_2_reserved_46_bit_img = (1ULL << 46),
v_2_execution_graph_bit_amdx = (1ULL << 32),
v_2_descriptor_heap_bit_ext = (1ULL << 36),
v_reserved_44_bit_khr = (1ULL << 44),
v_2_ray_tracing_allow_spheres_and_linear_swept_spheres_bit_nv = (1ULL << 33),
v_2_enable_legacy_dithering_bit_ext = (1ULL << 34),
v_2_defer_compile_bit_nv = (1ULL << 5),
v_2_capture_statistics_bit_khr = (1ULL << 6),
v_2_capture_internal_representations_bit_khr = (1ULL << 7),
v_2_link_time_optimization_bit_ext = (1ULL << 10),
v_2_retain_link_time_optimization_info_bit_ext = (1ULL << 23),
v_2_library_bit_khr = (1ULL << 11),
v_2_ray_tracing_skip_triangles_bit_khr = (1ULL << 12),
v_2_ray_tracing_skip_aabbs_bit_khr = (1ULL << 13),
v_2_ray_tracing_no_null_any_hit_shaders_bit_khr = (1ULL << 14),
v_2_ray_tracing_no_null_closest_hit_shaders_bit_khr = (1ULL << 15),
v_2_ray_tracing_no_null_miss_shaders_bit_khr = (1ULL << 16),
v_2_ray_tracing_no_null_intersection_shaders_bit_khr = (1ULL << 17),
v_2_ray_tracing_shader_group_handle_capture_replay_bit_khr = (1ULL << 19),
v_2_indirect_bindable_bit_nv = (1ULL << 18),
v_2_ray_tracing_allow_motion_bit_nv = (1ULL << 20),
v_2_rendering_fragment_shading_rate_attachment_bit_khr = (1ULL << 21),
v_2_rendering_fragment_density_map_attachment_bit_ext = (1ULL << 22),
v_2_ray_tracing_opacity_micromap_bit_ext = (1ULL << 24),
v_2_color_attachment_feedback_loop_bit_ext = (1ULL << 25),
v_2_depth_stencil_attachment_feedback_loop_bit_ext = (1ULL << 26),
v_2_ray_tracing_displacement_micromap_bit_nv = (1ULL << 28),
v_2_descriptor_buffer_bit_ext = (1ULL << 29),
v_2_disallow_opacity_micromap_bit_arm = (1ULL << 37),
v_2_instrument_shaders_bit_arm = (1ULL << 39),
v_2_capture_data_bit_khr = (1ULL << 31),
v_2_indirect_bindable_bit_ext = (1ULL << 38),
v_2_reserved_35_bit_khr = (1ULL << 35),
v_2_per_layer_fragment_density_bit_valve = (1ULL << 40),
v_2_reserved_41_bit_khr = (1ULL << 41),
v_2_64_bit_indexing_bit_ext = (1ULL << 43),
v_2_reserved_45_bit_ext = (1ULL << 45),
v_2_reserved_47_bit_amd = (1ULL << 47),
v_2_reserved_48_bit_huawei = (1ULL << 48),
v_2_ray_tracing_skip_built_in_primitives_bit_khr = v_2_ray_tracing_skip_triangles_bit_khr,
v_2_disable_optimization_bit_khr = v_2_disable_optimization_bit,
v_2_allow_derivatives_bit_khr = v_2_allow_derivatives_bit,
v_2_derivative_bit_khr = v_2_derivative_bit,
v_2_view_index_from_device_index_bit_khr = v_2_view_index_from_device_index_bit,
v_2_dispatch_base_bit_khr = v_2_dispatch_base_bit,
v_2_fail_on_pipeline_compile_required_bit_khr = v_2_fail_on_pipeline_compile_required_bit,
v_2_early_return_on_failure_bit_khr = v_2_early_return_on_failure_bit,
v_2_no_protected_access_bit_ext = v_2_no_protected_access_bit,
v_2_protected_access_only_bit_ext = v_2_protected_access_only_bit
};

enum class pipeline_shader_stage_create_flag_bits : ktl::u32
{
v_allow_varying_subgroup_size_bit = (1U << 0),
v_require_full_subgroups_bit = (1U << 1),
v_reserved_3_bit_khr = (1U << 3),
v_allow_varying_subgroup_size_bit_ext = v_allow_varying_subgroup_size_bit,
v_require_full_subgroups_bit_ext = v_require_full_subgroups_bit
};

enum class color_component_flag_bits : ktl::u32
{
v_r_bit = (1U << 0),
v_g_bit = (1U << 1),
v_b_bit = (1U << 2),
v_a_bit = (1U << 3)
};

enum class fence_create_flag_bits : ktl::u32
{
v_signaled_bit = (1U << 0)
};

enum class semaphore_create_flag_bits : ktl::u32
{
};

enum class format_feature_flag_bits : ktl::u32
{
v_sampled_image_bit = (1U << 0),
v_storage_image_bit = (1U << 1),
v_storage_image_atomic_bit = (1U << 2),
v_uniform_texel_buffer_bit = (1U << 3),
v_storage_texel_buffer_bit = (1U << 4),
v_storage_texel_buffer_atomic_bit = (1U << 5),
v_vertex_buffer_bit = (1U << 6),
v_color_attachment_bit = (1U << 7),
v_color_attachment_blend_bit = (1U << 8),
v_depth_stencil_attachment_bit = (1U << 9),
v_blit_src_bit = (1U << 10),
v_blit_dst_bit = (1U << 11),
v_sampled_image_filter_linear_bit = (1U << 12),
v_transfer_src_bit = (1U << 14),
v_transfer_dst_bit = (1U << 15),
v_midpoint_chroma_samples_bit = (1U << 17),
v_sampled_image_ycbcr_conversion_linear_filter_bit = (1U << 18),
v_sampled_image_ycbcr_conversion_separate_reconstruction_filter_bit = (1U << 19),
v_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_bit = (1U << 20),
v_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_bit = (1U << 21),
v_disjoint_bit = (1U << 22),
v_cosited_chroma_samples_bit = (1U << 23),
v_sampled_image_filter_minmax_bit = (1U << 16),
v_acceleration_structure_vertex_buffer_bit_khr = (1U << 29),
v_sampled_image_filter_cubic_bit_ext = (1U << 13),
v_ragment_density_map_bit_ext = (1U << 24),
v_ragment_shading_rate_attachment_bit_khr = (1U << 30),
v_sampled_image_filter_cubic_bit_img = v_sampled_image_filter_cubic_bit_ext,
v_transfer_src_bit_khr = v_transfer_src_bit,
v_transfer_dst_bit_khr = v_transfer_dst_bit,
v_sampled_image_filter_minmax_bit_ext = v_sampled_image_filter_minmax_bit,
v_midpoint_chroma_samples_bit_khr = v_midpoint_chroma_samples_bit,
v_sampled_image_ycbcr_conversion_linear_filter_bit_khr = v_sampled_image_ycbcr_conversion_linear_filter_bit,
v_sampled_image_ycbcr_conversion_separate_reconstruction_filter_bit_khr = v_sampled_image_ycbcr_conversion_separate_reconstruction_filter_bit,
v_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_bit_khr = v_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_bit,
v_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_bit_khr = v_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_bit,
v_disjoint_bit_khr = v_disjoint_bit,
v_cosited_chroma_samples_bit_khr = v_cosited_chroma_samples_bit
};

enum class query_control_flag_bits : ktl::u32
{
v_precise_bit = (1U << 0)
};

enum class query_result_flag_bits : ktl::u32
{
v_64_bit = (1U << 0),
v_wait_bit = (1U << 1),
v_with_availability_bit = (1U << 2),
v_partial_bit = (1U << 3),
v_with_status_bit_khr = (1U << 4)
};

enum class command_buffer_usage_flag_bits : ktl::u32
{
v_one_time_submit_bit = (1U << 0),
v_render_pass_continue_bit = (1U << 1),
v_simultaneous_use_bit = (1U << 2),
v_reserved_3_bit_huawei = (1U << 3),
v_reserved_4_bit_huawei = (1U << 4)
};

enum class query_pipeline_statistic_flag_bits : ktl::u32
{
v_input_assembly_vertices_bit = (1U << 0),
v_input_assembly_primitives_bit = (1U << 1),
v_vertex_shader_invocations_bit = (1U << 2),
v_geometry_shader_invocations_bit = (1U << 3),
v_geometry_shader_primitives_bit = (1U << 4),
v_clipping_invocations_bit = (1U << 5),
v_clipping_primitives_bit = (1U << 6),
v_ragment_shader_invocations_bit = (1U << 7),
v_tessellation_control_shader_patches_bit = (1U << 8),
v_tessellation_evaluation_shader_invocations_bit = (1U << 9),
v_compute_shader_invocations_bit = (1U << 10),
v_task_shader_invocations_bit_ext = (1U << 11),
v_mesh_shader_invocations_bit_ext = (1U << 12),
v_cluster_culling_shader_invocations_bit_huawei = (1U << 13)
};

enum class memory_map_flag_bits : ktl::u32
{
v_placed_bit_ext = (1U << 0)
};

enum class image_aspect_flag_bits : ktl::u32
{
v_color_bit = (1U << 0),
v_depth_bit = (1U << 1),
v_stencil_bit = (1U << 2),
v_metadata_bit = (1U << 3),
v_plane_0_bit = (1U << 4),
v_plane_1_bit = (1U << 5),
v_plane_2_bit = (1U << 6),
v_none = 0,
v_memory_plane_0_bit_ext = (1U << 7),
v_memory_plane_1_bit_ext = (1U << 8),
v_memory_plane_2_bit_ext = (1U << 9),
v_memory_plane_3_bit_ext = (1U << 10),
v_reserved_11_bit_huawei = (1U << 11),
v_plane_0_bit_khr = v_plane_0_bit,
v_plane_1_bit_khr = v_plane_1_bit,
v_plane_2_bit_khr = v_plane_2_bit,
v_none_khr = v_none
};

enum class sparse_image_format_flag_bits : ktl::u32
{
v_single_miptail_bit = (1U << 0),
v_aligned_mip_size_bit = (1U << 1),
v_nonstandard_block_size_bit = (1U << 2)
};

enum class sparse_memory_bind_flag_bits : ktl::u32
{
v_metadata_bit = (1U << 0)
};

enum class pipeline_stage_flag_bits : ktl::u32
{
v_top_of_pipe_bit = (1U << 0),
v_draw_indirect_bit = (1U << 1),
v_vertex_input_bit = (1U << 2),
v_vertex_shader_bit = (1U << 3),
v_tessellation_control_shader_bit = (1U << 4),
v_tessellation_evaluation_shader_bit = (1U << 5),
v_geometry_shader_bit = (1U << 6),
v_ragment_shader_bit = (1U << 7),
v_early_fragment_tests_bit = (1U << 8),
v_late_fragment_tests_bit = (1U << 9),
v_color_attachment_output_bit = (1U << 10),
v_compute_shader_bit = (1U << 11),
v_transfer_bit = (1U << 12),
v_bottom_of_pipe_bit = (1U << 13),
v_host_bit = (1U << 14),
v_all_graphics_bit = (1U << 15),
v_all_commands_bit = (1U << 16),
v_none = 0,
v_transform_feedback_bit_ext = (1U << 24),
v_conditional_rendering_bit_ext = (1U << 18),
v_acceleration_structure_build_bit_khr = (1U << 25),
v_ray_tracing_shader_bit_khr = (1U << 21),
v_ragment_density_process_bit_ext = (1U << 23),
v_ragment_shading_rate_attachment_bit_khr = (1U << 22),
v_task_shader_bit_ext = (1U << 19),
v_mesh_shader_bit_ext = (1U << 20),
v_command_preprocess_bit_ext = (1U << 17),
v_shading_rate_image_bit_nv = v_ragment_shading_rate_attachment_bit_khr,
v_ray_tracing_shader_bit_nv = v_ray_tracing_shader_bit_khr,
v_acceleration_structure_build_bit_nv = v_acceleration_structure_build_bit_khr,
v_task_shader_bit_nv = v_task_shader_bit_ext,
v_mesh_shader_bit_nv = v_mesh_shader_bit_ext,
v_command_preprocess_bit_nv = v_command_preprocess_bit_ext,
v_none_khr = v_none
};

enum class command_pool_create_flag_bits : ktl::u32
{
v_transient_bit = (1U << 0),
v_reset_command_buffer_bit = (1U << 1),
v_protected_bit = (1U << 2)
};

enum class command_pool_reset_flag_bits : ktl::u32
{
v_release_resources_bit = (1U << 0),
v_reserved_1_bit_coreavi = (1U << 1)
};

enum class command_buffer_reset_flag_bits : ktl::u32
{
v_release_resources_bit = (1U << 0)
};

enum class sample_count_flag_bits : ktl::u32
{
v_1_bit = (1U << 0),
v_2_bit = (1U << 1),
v_4_bit = (1U << 2),
v_8_bit = (1U << 3),
v_16_bit = (1U << 4),
v_32_bit = (1U << 5),
v_64_bit = (1U << 6)
};

enum class attachment_description_flag_bits : ktl::u32
{
v_may_alias_bit = (1U << 0),
v_resolve_skip_transfer_function_bit_khr = (1U << 1),
v_resolve_enable_transfer_function_bit_khr = (1U << 2)
};

enum class stencil_face_flag_bits : ktl::u32
{
v_ront_bit = (1U << 0),
v_back_bit = (1U << 1),
v_ront_and_back = 0x00000003
};

enum class descriptor_pool_create_flag_bits : ktl::u32
{
v_ree_descriptor_set_bit = (1U << 0),
v_update_after_bind_bit = (1U << 1),
v_host_only_bit_ext = (1U << 2),
v_allow_overallocation_sets_bit_nv = (1U << 3),
v_allow_overallocation_pools_bit_nv = (1U << 4),
v_update_after_bind_bit_ext = v_update_after_bind_bit,
v_host_only_bit_valve = v_host_only_bit_ext
};

enum class dependency_flag_bits : ktl::u32
{
v_by_region_bit = (1U << 0),
v_device_group_bit = (1U << 2),
v_view_local_bit = (1U << 1),
v_eedback_loop_bit_ext = (1U << 3),
v_queue_family_ownership_transfer_use_all_stages_bit_khr = (1U << 5),
v_asymmetric_event_bit_khr = (1U << 6),
v_extension_586_bit_img = (1U << 4),
v_view_local_bit_khr = v_view_local_bit,
v_device_group_bit_khr = v_device_group_bit
};

enum class semaphore_type : ktl::u32
{
v_binary = 0,
v_timeline = 1,
v_binary_khr = v_binary,
v_timeline_khr = v_timeline
};

enum class semaphore_wait_flag_bits : ktl::u32
{
v_any_bit = (1U << 0),
v_any_bit_khr = v_any_bit
};

enum class present_mode_khr : ktl::u32
{
v_immediate_khr = 0,
v_mailbox_khr = 1,
v_fifo_khr = 2,
v_fifo_relaxed_khr = 3,
v_shared_demand_refresh_khr = 1111000,
v_shared_continuous_refresh_khr = 1111001,
v_fifo_latest_ready_khr = 1621000,
v_fifo_latest_ready_ext = v_fifo_latest_ready_khr
};

enum class color_space_khr : ktl::u32
{
v_srgb_nonlinear_khr = 0,
v_display_p3_nonlinear_ext = 1104001,
v_extended_srgb_linear_ext = 1104002,
v_display_p3_linear_ext = 1104003,
v_dci_p3_nonlinear_ext = 1104004,
v_bt709_linear_ext = 1104005,
v_bt709_nonlinear_ext = 1104006,
v_bt2020_linear_ext = 1104007,
v_hdr10_st2084_ext = 1104008,
v_dolbyvision_ext [[deprecated]] = 1104009,
v_hdr10_hlg_ext = 1104010,
v_adobergb_linear_ext = 1104011,
v_adobergb_nonlinear_ext = 1104012,
v_pass_through_ext = 1104013,
v_extended_srgb_nonlinear_ext = 1104014,
v_display_native_amd = 1213000,
v_space_srgb_nonlinear_khr [[deprecated]] = v_srgb_nonlinear_khr,
v_dci_p3_linear_ext [[deprecated]] = v_display_p3_linear_ext
};

enum class display_plane_alpha_flag_bits_khr : ktl::u32
{
v_opaque_bit_khr = (1U << 0),
v_global_bit_khr = (1U << 1),
v_per_pixel_bit_khr = (1U << 2),
v_per_pixel_premultiplied_bit_khr = (1U << 3)
};

enum class composite_alpha_flag_bits_khr : ktl::u32
{
v_opaque_bit_khr = (1U << 0),
v_pre_multiplied_bit_khr = (1U << 1),
v_post_multiplied_bit_khr = (1U << 2),
v_inherit_bit_khr = (1U << 3)
};

enum class surface_transform_flag_bits_khr : ktl::u32
{
v_identity_bit_khr = (1U << 0),
v_rotate_90_bit_khr = (1U << 1),
v_rotate_180_bit_khr = (1U << 2),
v_rotate_270_bit_khr = (1U << 3),
v_horizontal_mirror_bit_khr = (1U << 4),
v_horizontal_mirror_rotate_90_bit_khr = (1U << 5),
v_horizontal_mirror_rotate_180_bit_khr = (1U << 6),
v_horizontal_mirror_rotate_270_bit_khr = (1U << 7),
v_inherit_bit_khr = (1U << 8)
};

enum class display_surface_stereo_type_nv : ktl::u32
{
v_one_nv = 0,
v_onboard_din_nv = 1,
v_hdmi_3d_nv = 2,
v_inband_displayport_nv = 3
};

enum class swapchain_image_usage_flag_bits_android : ktl::u32
{
v_shared_bit_android = (1U << 0)
};

enum class time_domain_khr : ktl::u32
{
v_device_khr = 0,
v_clock_monotonic_khr = 1,
v_clock_monotonic_raw_khr = 2,
v_query_performance_counter_khr = 3,
v_present_stage_local_ext = 1208000,
v_swapchain_local_ext = 1208001,
v_device_ext = v_device_khr,
v_clock_monotonic_ext = v_clock_monotonic_khr,
v_clock_monotonic_raw_ext = v_clock_monotonic_raw_khr,
v_query_performance_counter_ext = v_query_performance_counter_khr
};

enum class debug_report_flag_bits_ext : ktl::u32
{
v_information_bit_ext = (1U << 0),
v_warning_bit_ext = (1U << 1),
v_performance_warning_bit_ext = (1U << 2),
v_error_bit_ext = (1U << 3),
v_debug_bit_ext = (1U << 4)
};

enum class debug_report_object_type_ext : ktl::u32
{
v_unknown_ext = 0,
v_instance_ext = 1,
v_physical_device_ext = 2,
v_device_ext = 3,
v_queue_ext = 4,
v_semaphore_ext = 5,
v_command_buffer_ext = 6,
v_fence_ext = 7,
v_device_memory_ext = 8,
v_buffer_ext = 9,
v_image_ext = 10,
v_vent_ext = 11,
v_query_pool_ext = 12,
v_buffer_view_ext = 13,
v_image_view_ext = 14,
v_shader_module_ext = 15,
v_pipeline_cache_ext = 16,
v_pipeline_layout_ext = 17,
v_render_pass_ext = 18,
v_pipeline_ext = 19,
v_descriptor_set_layout_ext = 20,
v_sampler_ext = 21,
v_descriptor_pool_ext = 22,
v_descriptor_set_ext = 23,
v_framebuffer_ext = 24,
v_command_pool_ext = 25,
v_surface_khr_ext = 26,
v_swapchain_khr_ext = 27,
v_debug_report_callback_ext_ext = 28,
v_display_khr_ext = 29,
v_display_mode_khr_ext = 30,
v_validation_cache_ext_ext = 33,
v_sampler_ycbcr_conversion_ext = 1011000,
v_descriptor_update_template_ext = 1011000,
v_cu_module_nvx_ext = 1029000,
v_cu_function_nvx_ext = 1029001,
v_acceleration_structure_khr_ext = 1150000,
v_acceleration_structure_nv_ext = 1165000,
v_cuda_module_nv_ext = 1307000,
v_cuda_function_nv_ext = 1307001,
v_buffer_collection_fuchsia_ext = 1366000,
v_debug_report_ext [[deprecated]] = v_debug_report_callback_ext_ext,
v_validation_cache_ext [[deprecated]] = v_validation_cache_ext_ext,
v_descriptor_update_template_khr_ext = v_descriptor_update_template_ext,
v_sampler_ycbcr_conversion_khr_ext = v_sampler_ycbcr_conversion_ext
};

enum class device_memory_report_event_type_ext : ktl::u32
{
v_allocate_ext = 0,
v_free_ext = 1,
v_import_ext = 2,
v_unimport_ext = 3,
v_allocation_failed_ext = 4
};

enum class rasterization_order_amd : ktl::u32
{
v_strict_amd = 0,
v_relaxed_amd = 1
};

enum class external_memory_handle_type_flag_bits_nv : ktl::u32
{
v_opaque_win32_bit_nv = (1U << 0),
v_opaque_win32_kmt_bit_nv = (1U << 1),
v_d3d11_image_bit_nv = (1U << 2),
v_d3d11_image_kmt_bit_nv = (1U << 3)
};

enum class external_memory_feature_flag_bits_nv : ktl::u32
{
v_dedicated_only_bit_nv = (1U << 0),
v_exportable_bit_nv = (1U << 1),
v_importable_bit_nv = (1U << 2)
};

enum class cluster_acceleration_structure_index_format_flag_bits_nv : ktl::u32
{
v_8bit_nv = (1U << 0),
v_16bit_nv = (1U << 1),
v_32bit_nv = (1U << 2)
};

enum class cluster_acceleration_structure_type_nv : ktl::u32
{
v_clusters_bottom_level_nv = 0,
v_triangle_cluster_nv = 1,
v_triangle_cluster_template_nv = 2
};

enum class cluster_acceleration_structure_op_type_nv : ktl::u32
{
v_move_objects_nv = 0,
v_build_clusters_bottom_level_nv = 1,
v_build_triangle_cluster_nv = 2,
v_build_triangle_cluster_template_nv = 3,
v_instantiate_triangle_cluster_nv = 4,
v_get_cluster_template_indices_nv = 5
};

enum class cluster_acceleration_structure_op_mode_nv : ktl::u32
{
v_implicit_destinations_nv = 0,
v_explicit_destinations_nv = 1,
v_compute_sizes_nv = 2
};

enum class cluster_acceleration_structure_cluster_flag_bits_nv : ktl::u32
{
v_allow_disable_opacity_micromaps_nv = (1U << 0)
};

enum class cluster_acceleration_structure_geometry_flag_bits_nv : ktl::u32
{
v_cull_disable_bit_nv = (1U << 0),
v_no_duplicate_anyhit_invocation_bit_nv = (1U << 1),
v_opaque_bit_nv = (1U << 2)
};

enum class cluster_acceleration_structure_address_resolution_flag_bits_nv : ktl::u32
{
v_none_nv = 0,
v_indirected_dst_implicit_data_bit_nv = (1U << 0),
v_indirected_scratch_data_bit_nv = (1U << 1),
v_indirected_dst_address_array_bit_nv = (1U << 2),
v_indirected_dst_sizes_array_bit_nv = (1U << 3),
v_indirected_src_infos_array_bit_nv = (1U << 4),
v_indirected_src_infos_count_bit_nv = (1U << 5)
};

enum class validation_check_ext : ktl::u32
{
v_all_ext = 0,
v_shaders_ext = 1
};

enum class validation_feature_enable_ext : ktl::u32
{
v_gpu_assisted_ext = 0,
v_gpu_assisted_reserve_binding_slot_ext = 1,
v_best_practices_ext = 2,
v_debug_printf_ext = 3,
v_synchronization_validation_ext = 4
};

enum class validation_feature_disable_ext : ktl::u32
{
v_all_ext = 0,
v_shaders_ext = 1,
v_thread_safety_ext = 2,
v_api_parameters_ext = 3,
v_object_lifetimes_ext = 4,
v_core_checks_ext = 5,
v_unique_handles_ext = 6,
v_shader_validation_cache_ext = 7
};

enum class layer_setting_type_ext : ktl::u32
{
v_bool32_ext = 0,
v_int32_ext = 1,
v_int64_ext = 2,
v_uint32_ext = 3,
v_uint64_ext = 4,
v_float32_ext = 5,
v_float64_ext = 6,
v_string_ext = 7
};

enum class subgroup_feature_flag_bits : ktl::u32
{
v_basic_bit = (1U << 0),
v_vote_bit = (1U << 1),
v_arithmetic_bit = (1U << 2),
v_ballot_bit = (1U << 3),
v_shuffle_bit = (1U << 4),
v_shuffle_relative_bit = (1U << 5),
v_clustered_bit = (1U << 6),
v_quad_bit = (1U << 7),
v_rotate_bit = (1U << 9),
v_rotate_clustered_bit = (1U << 10),
v_partitioned_bit_ext = (1U << 8),
v_partitioned_bit_nv = v_partitioned_bit_ext,
v_rotate_bit_khr = v_rotate_bit,
v_rotate_clustered_bit_khr = v_rotate_clustered_bit
};

enum class indirect_commands_layout_usage_flag_bits_nv : ktl::u32
{
v_explicit_preprocess_bit_nv = (1U << 0),
v_indexed_sequences_bit_nv = (1U << 1),
v_unordered_sequences_bit_nv = (1U << 2)
};

enum class indirect_state_flag_bits_nv : ktl::u32
{
v_frontface_bit_nv = (1U << 0)
};

enum class indirect_commands_token_type_nv : ktl::u32
{
v_shader_group_nv = 0,
v_state_flags_nv = 1,
v_index_buffer_nv = 2,
v_vertex_buffer_nv = 3,
v_push_constant_nv = 4,
v_draw_indexed_nv = 5,
v_draw_nv = 6,
v_draw_tasks_nv = 7,
v_push_data_nv = 1135000,
v_draw_mesh_tasks_nv = 1328000,
v_pipeline_nv = 1428003,
v_dispatch_nv = 1428004
};

enum class private_data_slot_create_flag_bits : ktl::u32
{
v_reserved_0_bit_nv = (1U << 0)
};

enum class descriptor_set_layout_create_flag_bits : ktl::u32
{
v_update_after_bind_pool_bit = (1U << 1),
v_push_descriptor_bit = (1U << 0),
v_descriptor_buffer_bit_ext = (1U << 4),
v_embedded_immutable_samplers_bit_ext = (1U << 5),
v_indirect_bindable_bit_nv = (1U << 7),
v_host_only_pool_bit_ext = (1U << 2),
v_per_stage_bit_nv = (1U << 6),
v_push_descriptor_bit_khr = v_push_descriptor_bit,
v_update_after_bind_pool_bit_ext = v_update_after_bind_pool_bit,
v_host_only_pool_bit_valve = v_host_only_pool_bit_ext
};

enum class external_memory_handle_type_flag_bits : ktl::u32
{
v_opaque_fd_bit = (1U << 0),
v_opaque_win32_bit = (1U << 1),
v_opaque_win32_kmt_bit = (1U << 2),
v_d3d11_texture_bit = (1U << 3),
v_d3d11_texture_kmt_bit = (1U << 4),
v_d3d12_heap_bit = (1U << 5),
v_d3d12_resource_bit = (1U << 6),
v_dma_buf_bit_ext = (1U << 9),
v_android_hardware_buffer_bit_android = (1U << 10),
v_host_allocation_bit_ext = (1U << 7),
v_host_mapped_foreign_memory_bit_ext = (1U << 8),
v_zircon_vmo_bit_fuchsia = (1U << 11),
v_rdma_address_bit_nv = (1U << 12),
v_sci_buf_bit_nv = (1U << 13),
v_oh_native_buffer_bit_ohos = (1U << 15),
v_screen_buffer_bit_qnx = (1U << 14),
v_mtlbuffer_bit_ext = (1U << 16),
v_mtltexture_bit_ext = (1U << 17),
v_mtlheap_bit_ext = (1U << 18),
v_opaque_fd_bit_khr = v_opaque_fd_bit,
v_opaque_win32_bit_khr = v_opaque_win32_bit,
v_opaque_win32_kmt_bit_khr = v_opaque_win32_kmt_bit,
v_d3d11_texture_bit_khr = v_d3d11_texture_bit,
v_d3d11_texture_kmt_bit_khr = v_d3d11_texture_kmt_bit,
v_d3d12_heap_bit_khr = v_d3d12_heap_bit,
v_d3d12_resource_bit_khr = v_d3d12_resource_bit
};

enum class external_memory_feature_flag_bits : ktl::u32
{
v_dedicated_only_bit = (1U << 0),
v_exportable_bit = (1U << 1),
v_importable_bit = (1U << 2),
v_dedicated_only_bit_khr = v_dedicated_only_bit,
v_exportable_bit_khr = v_exportable_bit,
v_importable_bit_khr = v_importable_bit
};

enum class external_semaphore_handle_type_flag_bits : ktl::u32
{
v_opaque_fd_bit = (1U << 0),
v_opaque_win32_bit = (1U << 1),
v_opaque_win32_kmt_bit = (1U << 2),
v_d3d12_fence_bit = (1U << 3),
v_sync_fd_bit = (1U << 4),
v_zircon_event_bit_fuchsia = (1U << 7),
v_sci_sync_obj_bit_nv = (1U << 5),
v_d3d11_fence_bit = v_d3d12_fence_bit,
v_opaque_fd_bit_khr = v_opaque_fd_bit,
v_opaque_win32_bit_khr = v_opaque_win32_bit,
v_opaque_win32_kmt_bit_khr = v_opaque_win32_kmt_bit,
v_d3d12_fence_bit_khr = v_d3d12_fence_bit,
v_sync_fd_bit_khr = v_sync_fd_bit
};

enum class external_semaphore_feature_flag_bits : ktl::u32
{
v_exportable_bit = (1U << 0),
v_importable_bit = (1U << 1),
v_exportable_bit_khr = v_exportable_bit,
v_importable_bit_khr = v_importable_bit
};

enum class semaphore_import_flag_bits : ktl::u32
{
v_temporary_bit = (1U << 0),
v_temporary_bit_khr = v_temporary_bit
};

enum class external_fence_handle_type_flag_bits : ktl::u32
{
v_opaque_fd_bit = (1U << 0),
v_opaque_win32_bit = (1U << 1),
v_opaque_win32_kmt_bit = (1U << 2),
v_sync_fd_bit = (1U << 3),
v_sci_sync_obj_bit_nv = (1U << 4),
v_sci_sync_fence_bit_nv = (1U << 5),
v_opaque_fd_bit_khr = v_opaque_fd_bit,
v_opaque_win32_bit_khr = v_opaque_win32_bit,
v_opaque_win32_kmt_bit_khr = v_opaque_win32_kmt_bit,
v_sync_fd_bit_khr = v_sync_fd_bit
};

enum class external_fence_feature_flag_bits : ktl::u32
{
v_exportable_bit = (1U << 0),
v_importable_bit = (1U << 1),
v_exportable_bit_khr = v_exportable_bit,
v_importable_bit_khr = v_importable_bit
};

enum class fence_import_flag_bits : ktl::u32
{
v_temporary_bit = (1U << 0),
v_temporary_bit_khr = v_temporary_bit
};

enum class surface_counter_flag_bits_ext : ktl::u32
{
v_vblank_bit_ext = (1U << 0),
v_vblank_ext [[deprecated]] = v_vblank_bit_ext
};

enum class display_power_state_ext : ktl::u32
{
v_off_ext = 0,
v_suspend_ext = 1,
v_on_ext = 2
};

enum class device_event_type_ext : ktl::u32
{
v_display_hotplug_ext = 0
};

enum class display_event_type_ext : ktl::u32
{
v_first_pixel_out_ext = 0
};

enum class peer_memory_feature_flag_bits : ktl::u32
{
v_copy_src_bit = (1U << 0),
v_copy_dst_bit = (1U << 1),
v_generic_src_bit = (1U << 2),
v_generic_dst_bit = (1U << 3),
v_copy_src_bit_khr = v_copy_src_bit,
v_copy_dst_bit_khr = v_copy_dst_bit,
v_generic_src_bit_khr = v_generic_src_bit,
v_generic_dst_bit_khr = v_generic_dst_bit
};

enum class memory_allocate_flag_bits : ktl::u32
{
v_device_mask_bit = (1U << 0),
v_device_address_bit = (1U << 1),
v_device_address_capture_replay_bit = (1U << 2),
v_zero_initialize_bit_ext = (1U << 3),
v_device_mask_bit_khr = v_device_mask_bit,
v_device_address_bit_khr = v_device_address_bit,
v_device_address_capture_replay_bit_khr = v_device_address_capture_replay_bit
};

enum class device_group_present_mode_flag_bits_khr : ktl::u32
{
v_local_bit_khr = (1U << 0),
v_remote_bit_khr = (1U << 1),
v_sum_bit_khr = (1U << 2),
v_local_multi_device_bit_khr = (1U << 3)
};

enum class swapchain_create_flag_bits_khr : ktl::u32
{
v_split_instance_bind_regions_bit_khr = (1U << 0),
v_protected_bit_khr = (1U << 1),
v_mutable_format_bit_khr = (1U << 2),
v_present_timing_bit_ext = (1U << 9),
v_reserved_5_bit_ext = (1U << 5),
v_reserved_4_bit_ext = (1U << 4),
v_present_id_2_bit_khr = (1U << 6),
v_present_wait_2_bit_khr = (1U << 7),
v_deferred_memory_allocation_bit_khr = (1U << 3),
v_reserved_8_bit_ext = (1U << 8),
v_deferred_memory_allocation_bit_ext = v_deferred_memory_allocation_bit_khr
};

enum class viewport_coordinate_swizzle_nv : ktl::u32
{
v_positive_x_nv = 0,
v_egative_x_nv = 1,
v_positive_y_nv = 2,
v_egative_y_nv = 3,
v_positive_z_nv = 4,
v_egative_z_nv = 5,
v_positive_w_nv = 6,
v_egative_w_nv = 7
};

enum class discard_rectangle_mode_ext : ktl::u32
{
v_inclusive_ext = 0,
v_clusive_ext = 1
};

enum class subpass_description_flag_bits : ktl::u32
{
v_per_view_attributes_bit_nvx = (1U << 0),
v_per_view_position_x_only_bit_nvx = (1U << 1),
v_tile_shading_apron_bit_qcom = (1U << 8),
v_rasterization_order_attachment_color_access_bit_ext = (1U << 4),
v_rasterization_order_attachment_depth_access_bit_ext = (1U << 5),
v_rasterization_order_attachment_stencil_access_bit_ext = (1U << 6),
v_enable_legacy_dithering_bit_ext = (1U << 7),
v_ragment_region_bit_ext = (1U << 2),
v_custom_resolve_bit_ext = (1U << 3),
v_ragment_region_bit_qcom = v_ragment_region_bit_ext,
v_shader_resolve_bit_qcom = v_custom_resolve_bit_ext,
v_rasterization_order_attachment_color_access_bit_arm = v_rasterization_order_attachment_color_access_bit_ext,
v_rasterization_order_attachment_depth_access_bit_arm = v_rasterization_order_attachment_depth_access_bit_ext,
v_rasterization_order_attachment_stencil_access_bit_arm = v_rasterization_order_attachment_stencil_access_bit_ext
};

enum class point_clipping_behavior : ktl::u32
{
v_all_clip_planes = 0,
v_user_clip_planes_only = 1,
v_all_clip_planes_khr = v_all_clip_planes,
v_user_clip_planes_only_khr = v_user_clip_planes_only
};

enum class sampler_reduction_mode : ktl::u32
{
v_weighted_average = 0,
v_min = 1,
v_max = 2,
v_weighted_average_rangeclamp_qcom = 1521000,
v_weighted_average_ext = v_weighted_average,
v_min_ext = v_min,
v_max_ext = v_max
};

enum class tessellation_domain_origin : ktl::u32
{
v_upper_left = 0,
v_lower_left = 1,
v_upper_left_khr = v_upper_left,
v_lower_left_khr = v_lower_left
};

enum class sampler_ycbcr_model_conversion : ktl::u32
{
v_rgb_identity = 0,
v_ycbcr_identity = 1,
v_ycbcr_709 = 2,
v_ycbcr_601 = 3,
v_ycbcr_2020 = 4,
v_rgb_identity_khr = v_rgb_identity,
v_ycbcr_identity_khr = v_ycbcr_identity,
v_ycbcr_709_khr = v_ycbcr_709,
v_ycbcr_601_khr = v_ycbcr_601,
v_ycbcr_2020_khr = v_ycbcr_2020
};

enum class sampler_ycbcr_range : ktl::u32
{
v_itu_full = 0,
v_itu_narrow = 1,
v_itu_full_khr = v_itu_full,
v_itu_narrow_khr = v_itu_narrow
};

enum class chroma_location : ktl::u32
{
v_cosited_even = 0,
v_midpoint = 1,
v_cosited_even_khr = v_cosited_even,
v_midpoint_khr = v_midpoint
};

enum class blend_overlap_ext : ktl::u32
{
v_uncorrelated_ext = 0,
v_disjoint_ext = 1,
v_conjoint_ext = 2
};

enum class coverage_modulation_mode_nv : ktl::u32
{
v_one_nv = 0,
v_rgb_nv = 1,
v_alpha_nv = 2,
v_rgba_nv = 3
};

enum class coverage_reduction_mode_nv : ktl::u32
{
v_merge_nv = 0,
v_truncate_nv = 1
};

enum class validation_cache_header_version_ext : ktl::u32
{
v_one_ext = 1
};

enum class shader_info_type_amd : ktl::u32
{
v_statistics_amd = 0,
v_binary_amd = 1,
v_disassembly_amd = 2
};

enum class queue_global_priority : ktl::u32
{
v_low = 128,
v_medium = 256,
v_high = 512,
v_realtime = 1024,
v_low_ext = v_low,
v_medium_ext = v_medium,
v_high_ext = v_high,
v_realtime_ext = v_realtime,
v_low_khr = v_low,
v_medium_khr = v_medium,
v_high_khr = v_high,
v_realtime_khr = v_realtime
};

enum class debug_utils_message_severity_flag_bits_ext : ktl::u32
{
v_verbose_bit_ext = (1U << 0),
v_info_bit_ext = (1U << 4),
v_warning_bit_ext = (1U << 8),
v_error_bit_ext = (1U << 12)
};

enum class debug_utils_message_type_flag_bits_ext : ktl::u32
{
v_general_bit_ext = (1U << 0),
v_validation_bit_ext = (1U << 1),
v_performance_bit_ext = (1U << 2),
v_device_address_binding_bit_ext = (1U << 3)
};

enum class conservative_rasterization_mode_ext : ktl::u32
{
v_disabled_ext = 0,
v_overestimate_ext = 1,
v_underestimate_ext = 2
};

enum class descriptor_binding_flag_bits : ktl::u32
{
v_update_after_bind_bit = (1U << 0),
v_update_unused_while_pending_bit = (1U << 1),
v_partially_bound_bit = (1U << 2),
v_variable_descriptor_count_bit = (1U << 3),
v_reserved_4_bit_qcom = (1U << 4),
v_update_after_bind_bit_ext = v_update_after_bind_bit,
v_update_unused_while_pending_bit_ext = v_update_unused_while_pending_bit,
v_partially_bound_bit_ext = v_partially_bound_bit,
v_variable_descriptor_count_bit_ext = v_variable_descriptor_count_bit
};

enum class vendor_id : ktl::u32
{
v_khronos = 0x10000,
v_viv = 0x10001,
v_vsi = 0x10002,
v_kazan = 0x10003,
v_codeplay = 0x10004,
v_mesa = 0x10005,
v_pocl = 0x10006,
v_mobileye = 0x10007
};

enum class driver_id : ktl::u32
{
v_amd_proprietary = 1,
v_amd_open_source = 2,
v_mesa_radv = 3,
v_nvidia_proprietary = 4,
v_intel_proprietary_windows = 5,
v_intel_open_source_mesa = 6,
v_imagination_proprietary = 7,
v_qualcomm_proprietary = 8,
v_arm_proprietary = 9,
v_google_swiftshader = 10,
v_ggp_proprietary = 11,
v_broadcom_proprietary = 12,
v_mesa_llvmpipe = 13,
v_moltenvk = 14,
v_coreavi_proprietary = 15,
v_juice_proprietary = 16,
v_verisilicon_proprietary = 17,
v_mesa_turnip = 18,
v_mesa_v3dv = 19,
v_mesa_panvk = 20,
v_samsung_proprietary = 21,
v_mesa_venus = 22,
v_mesa_dozen = 23,
v_mesa_nvk = 24,
v_imagination_open_source_mesa = 25,
v_mesa_honeykrisp = 26,
v_vulkan_sc_emulation_on_vulkan = 27,
v_mesa_kosmickrisp = 28,
v_amd_proprietary_khr = v_amd_proprietary,
v_amd_open_source_khr = v_amd_open_source,
v_mesa_radv_khr = v_mesa_radv,
v_nvidia_proprietary_khr = v_nvidia_proprietary,
v_intel_proprietary_windows_khr = v_intel_proprietary_windows,
v_intel_open_source_mesa_khr = v_intel_open_source_mesa,
v_imagination_proprietary_khr = v_imagination_proprietary,
v_qualcomm_proprietary_khr = v_qualcomm_proprietary,
v_arm_proprietary_khr = v_arm_proprietary,
v_google_swiftshader_khr = v_google_swiftshader,
v_ggp_proprietary_khr = v_ggp_proprietary,
v_broadcom_proprietary_khr = v_broadcom_proprietary
};

enum class conditional_rendering_flag_bits_ext : ktl::u32
{
v_inverted_bit_ext = (1U << 0)
};

enum class resolve_mode_flag_bits : ktl::u32
{
v_none = 0,
v_sample_zero_bit = (1U << 0),
v_average_bit = (1U << 1),
v_min_bit = (1U << 2),
v_max_bit = (1U << 3),
v_external_format_downsample_bit_android = (1U << 4),
v_custom_bit_ext = (1U << 5),
v_none_khr = v_none,
v_sample_zero_bit_khr = v_sample_zero_bit,
v_average_bit_khr = v_average_bit,
v_min_bit_khr = v_min_bit,
v_max_bit_khr = v_max_bit,
v_external_format_downsample_android [[deprecated]] = v_external_format_downsample_bit_android
};

enum class shading_rate_palette_entry_nv : ktl::u32
{
v_o_invocations_nv = 0,
v_16_invocations_per_pixel_nv = 1,
v_8_invocations_per_pixel_nv = 2,
v_4_invocations_per_pixel_nv = 3,
v_2_invocations_per_pixel_nv = 4,
v_1_invocation_per_pixel_nv = 5,
v_1_invocation_per_2x1_pixels_nv = 6,
v_1_invocation_per_1x2_pixels_nv = 7,
v_1_invocation_per_2x2_pixels_nv = 8,
v_1_invocation_per_4x2_pixels_nv = 9,
v_1_invocation_per_2x4_pixels_nv = 10,
v_1_invocation_per_4x4_pixels_nv = 11
};

enum class coarse_sample_order_type_nv : ktl::u32
{
v_default_nv = 0,
v_custom_nv = 1,
v_pixel_major_nv = 2,
v_sample_major_nv = 3
};

enum class geometry_instance_flag_bits_khr : ktl::u32
{
v_triangle_facing_cull_disable_bit_khr = (1U << 0),
v_triangle_flip_facing_bit_khr = (1U << 1),
v_orce_opaque_bit_khr = (1U << 2),
v_orce_no_opaque_bit_khr = (1U << 3),
v_orce_opacity_micromap_2_state_bit_ext = (1U << 4),
v_disable_opacity_micromaps_bit_ext = (1U << 5),
v_triangle_front_counterclockwise_bit_khr = v_triangle_flip_facing_bit_khr,
v_triangle_cull_disable_bit_nv = v_triangle_facing_cull_disable_bit_khr,
v_triangle_front_counterclockwise_bit_nv = v_triangle_front_counterclockwise_bit_khr,
v_orce_opaque_bit_nv = v_orce_opaque_bit_khr,
v_orce_no_opaque_bit_nv = v_orce_no_opaque_bit_khr,
v_orce_opacity_micromap_2_state_ext [[deprecated]] = v_orce_opacity_micromap_2_state_bit_ext,
v_disable_opacity_micromaps_ext [[deprecated]] = v_disable_opacity_micromaps_bit_ext
};

enum class geometry_flag_bits_khr : ktl::u32
{
v_opaque_bit_khr = (1U << 0),
v_no_duplicate_any_hit_invocation_bit_khr = (1U << 1),
v_opaque_bit_nv = v_opaque_bit_khr,
v_no_duplicate_any_hit_invocation_bit_nv = v_no_duplicate_any_hit_invocation_bit_khr
};

enum class build_acceleration_structure_flag_bits_khr : ktl::u32
{
v_allow_update_bit_khr = (1U << 0),
v_allow_compaction_bit_khr = (1U << 1),
v_prefer_fast_trace_bit_khr = (1U << 2),
v_prefer_fast_build_bit_khr = (1U << 3),
v_low_memory_bit_khr = (1U << 4),
v_motion_bit_nv = (1U << 5),
v_allow_opacity_micromap_update_bit_ext = (1U << 6),
v_allow_disable_opacity_micromaps_bit_ext = (1U << 7),
v_allow_opacity_micromap_data_update_bit_ext = (1U << 8),
v_allow_displacement_micromap_update_bit_nv = (1U << 9),
v_allow_data_access_bit_khr = (1U << 11),
v_allow_cluster_opacity_micromaps_bit_nv = (1U << 12),
v_reserved_10_bit_khr = (1U << 10),
v_allow_update_bit_nv = v_allow_update_bit_khr,
v_allow_compaction_bit_nv = v_allow_compaction_bit_khr,
v_prefer_fast_trace_bit_nv = v_prefer_fast_trace_bit_khr,
v_prefer_fast_build_bit_nv = v_prefer_fast_build_bit_khr,
v_low_memory_bit_nv = v_low_memory_bit_khr,
v_allow_opacity_micromap_update_ext [[deprecated]] = v_allow_opacity_micromap_update_bit_ext,
v_allow_disable_opacity_micromaps_ext [[deprecated]] = v_allow_disable_opacity_micromaps_bit_ext,
v_allow_opacity_micromap_data_update_ext [[deprecated]] = v_allow_opacity_micromap_data_update_bit_ext,
v_allow_displacement_micromap_update_nv [[deprecated]] = v_allow_displacement_micromap_update_bit_nv,
v_allow_data_access_khr [[deprecated]] = v_allow_data_access_bit_khr
};

enum class acceleration_structure_create_flag_bits_khr : ktl::u32
{
v_device_address_capture_replay_bit_khr = (1U << 0),
v_descriptor_buffer_capture_replay_bit_ext = (1U << 3),
v_motion_bit_nv = (1U << 2)
};

enum class copy_acceleration_structure_mode_khr : ktl::u32
{
v_clone_khr = 0,
v_compact_khr = 1,
v_serialize_khr = 2,
v_deserialize_khr = 3,
v_clone_nv = v_clone_khr,
v_compact_nv = v_compact_khr
};

enum class build_acceleration_structure_mode_khr : ktl::u32
{
v_build_khr = 0,
v_update_khr = 1
};

enum class acceleration_structure_type_khr : ktl::u32
{
v_top_level_khr = 0,
v_bottom_level_khr = 1,
v_generic_khr = 2,
v_top_level_nv = v_top_level_khr,
v_bottom_level_nv = v_bottom_level_khr
};

enum class geometry_type_khr : ktl::u32
{
v_triangles_khr = 0,
v_aabbs_khr = 1,
v_instances_khr = 2,
v_spheres_nv = 1429004,
v_linear_swept_spheres_nv = 1429005,
v_dense_geometry_format_triangles_amdx = 1478000,
v_triangles_nv = v_triangles_khr,
v_aabbs_nv = v_aabbs_khr
};

enum class acceleration_structure_memory_requirements_type_nv : ktl::u32
{
v_object_nv = 0,
v_build_scratch_nv = 1,
v_update_scratch_nv = 2
};

enum class acceleration_structure_build_type_khr : ktl::u32
{
v_host_khr = 0,
v_device_khr = 1,
v_host_or_device_khr = 2
};

enum class ray_tracing_shader_group_type_khr : ktl::u32
{
v_general_khr = 0,
v_triangles_hit_group_khr = 1,
v_procedural_hit_group_khr = 2,
v_general_nv = v_general_khr,
v_triangles_hit_group_nv = v_triangles_hit_group_khr,
v_procedural_hit_group_nv = v_procedural_hit_group_khr
};

enum class acceleration_structure_compatibility_khr : ktl::u32
{
v_compatible_khr = 0,
v_incompatible_khr = 1
};

enum class shader_group_shader_khr : ktl::u32
{
v_general_khr = 0,
v_closest_hit_khr = 1,
v_any_hit_khr = 2,
v_intersection_khr = 3
};

enum class memory_overallocation_behavior_amd : ktl::u32
{
v_default_amd = 0,
v_llowed_amd = 1,
v_disallowed_amd = 2
};

enum class framebuffer_create_flag_bits : ktl::u32
{
v_imageless_bit = (1U << 0),
v_imageless_bit_khr = v_imageless_bit
};

enum class query_pool_create_flag_bits : ktl::u32
{
v_reset_bit_khr = (1U << 0)
};

enum class device_diagnostics_config_flag_bits_nv : ktl::u32
{
v_enable_shader_debug_info_bit_nv = (1U << 0),
v_enable_resource_tracking_bit_nv = (1U << 1),
v_enable_automatic_checkpoints_bit_nv = (1U << 2),
v_enable_shader_error_reporting_bit_nv = (1U << 3)
};

enum class pipeline_creation_feedback_flag_bits : ktl::u32
{
v_valid_bit = (1U << 0),
v_application_pipeline_cache_hit_bit = (1U << 1),
v_base_pipeline_acceleration_bit = (1U << 2),
v_valid_bit_ext = v_valid_bit,
v_application_pipeline_cache_hit_bit_ext = v_application_pipeline_cache_hit_bit,
v_base_pipeline_acceleration_bit_ext = v_base_pipeline_acceleration_bit
};

enum class full_screen_exclusive_ext : ktl::u32
{
v_default_ext = 0,
v_allowed_ext = 1,
v_disallowed_ext = 2,
v_application_controlled_ext = 3
};

enum class performance_counter_scope_khr : ktl::u32
{
v_command_buffer_khr = 0,
v_render_pass_khr = 1,
v_command_khr = 2,
v_query_scope_command_buffer_khr [[deprecated]] = v_command_buffer_khr,
v_query_scope_render_pass_khr [[deprecated]] = v_render_pass_khr,
v_query_scope_command_khr [[deprecated]] = v_command_khr
};

enum class memory_decompression_method_flag_bits_ext : ktl::u64
{
v_gdeflate_1_0_bit_ext = (1ULL << 0),
v_gdeflate_1_0_bit_nv = v_gdeflate_1_0_bit_ext
};

enum class performance_counter_unit_khr : ktl::u32
{
v_generic_khr = 0,
v_percentage_khr = 1,
v_nanoseconds_khr = 2,
v_bytes_khr = 3,
v_bytes_per_second_khr = 4,
v_elvin_khr = 5,
v_watts_khr = 6,
v_volts_khr = 7,
v_amps_khr = 8,
v_hertz_khr = 9,
v_cycles_khr = 10
};

enum class performance_counter_storage_khr : ktl::u32
{
v_int32_khr = 0,
v_int64_khr = 1,
v_uint32_khr = 2,
v_uint64_khr = 3,
v_float32_khr = 4,
v_float64_khr = 5
};

enum class performance_counter_description_flag_bits_khr : ktl::u32
{
v_performance_impacting_bit_khr = (1U << 0),
v_concurrently_impacted_bit_khr = (1U << 1),
v_performance_impacting_khr [[deprecated]] = v_performance_impacting_bit_khr,
v_concurrently_impacted_khr [[deprecated]] = v_concurrently_impacted_bit_khr
};

enum class acquire_profiling_lock_flag_bits_khr : ktl::u32
{
};

enum class shader_core_properties_flag_bits_amd : ktl::u32
{
};

enum class refresh_object_flag_bits_khr : ktl::u32
{
};

enum class performance_configuration_type_intel : ktl::u32
{
v_command_queue_metrics_discovery_activated_intel = 0
};

enum class query_pool_sampling_mode_intel : ktl::u32
{
v_manual_intel = 0
};

enum class performance_override_type_intel : ktl::u32
{
v_null_hardware_intel = 0,
v_flush_gpu_caches_intel = 1
};

enum class performance_parameter_type_intel : ktl::u32
{
v_hw_counters_supported_intel = 0,
v_stream_marker_valid_bits_intel = 1
};

enum class performance_value_type_intel : ktl::u32
{
v_uint32_intel = 0,
v_uint64_intel = 1,
v_float_intel = 2,
v_bool_intel = 3,
v_string_intel = 4
};

enum class shader_float_controls_independence : ktl::u32
{
v_32_bit_only = 0,
v_all = 1,
v_none = 2,
v_32_bit_only_khr = v_32_bit_only,
v_all_khr = v_all,
v_none_khr = v_none
};

enum class pipeline_executable_statistic_format_khr : ktl::u32
{
v_bool32_khr = 0,
v_int64_khr = 1,
v_uint64_khr = 2,
v_float64_khr = 3
};

enum class line_rasterization_mode : ktl::u32
{
v_default = 0,
v_rectangular = 1,
v_bresenham = 2,
v_rectangular_smooth = 3,
v_default_ext = v_default,
v_rectangular_ext = v_rectangular,
v_bresenham_ext = v_bresenham,
v_rectangular_smooth_ext = v_rectangular_smooth,
v_default_khr = v_default,
v_rectangular_khr = v_rectangular,
v_bresenham_khr = v_bresenham,
v_rectangular_smooth_khr = v_rectangular_smooth
};

enum class shader_module_create_flag_bits : ktl::u32
{
};

enum class pipeline_compiler_control_flag_bits_amd : ktl::u32
{
};

enum class fault_level : ktl::u32
{
v_unassigned = 0,
v_critical = 1,
v_recoverable = 2,
v_warning = 3
};

enum class fault_type : ktl::u32
{
v_invalid = 0,
v_unassigned = 1,
v_implementation = 2,
v_system = 3,
v_physical_device = 4,
v_command_buffer_full = 5,
v_invalid_api_usage = 6
};

enum class fault_query_behavior : ktl::u32
{
v_get_and_clear_all_faults = 0
};

enum class tool_purpose_flag_bits : ktl::u32
{
v_validation_bit = (1U << 0),
v_profiling_bit = (1U << 1),
v_tracing_bit = (1U << 2),
v_additional_features_bit = (1U << 3),
v_modifying_features_bit = (1U << 4),
v_debug_reporting_bit_ext = (1U << 5),
v_debug_markers_bit_ext = (1U << 6),
v_validation_bit_ext = v_validation_bit,
v_profiling_bit_ext = v_profiling_bit,
v_tracing_bit_ext = v_tracing_bit,
v_additional_features_bit_ext = v_additional_features_bit,
v_modifying_features_bit_ext = v_modifying_features_bit
};

enum class pipeline_match_control : ktl::u32
{
v_application_uuid_exact_match = 0
};

enum class fragment_shading_rate_combiner_op_khr : ktl::u32
{
v_eep_khr = 0,
v_replace_khr = 1,
v_min_khr = 2,
v_max_khr = 3,
v_mul_khr = 4
};

enum class fragment_shading_rate_nv : ktl::u32
{
v_1_invocation_per_pixel_nv = 0,
v_1_invocation_per_1x2_pixels_nv = 1,
v_1_invocation_per_2x1_pixels_nv = 4,
v_1_invocation_per_2x2_pixels_nv = 5,
v_1_invocation_per_2x4_pixels_nv = 6,
v_1_invocation_per_4x2_pixels_nv = 9,
v_1_invocation_per_4x4_pixels_nv = 10,
v_2_invocations_per_pixel_nv = 11,
v_4_invocations_per_pixel_nv = 12,
v_8_invocations_per_pixel_nv = 13,
v_16_invocations_per_pixel_nv = 14,
v_o_invocations_nv = 15
};

enum class fragment_shading_rate_type_nv : ktl::u32
{
v_fragment_size_nv = 0,
v_enums_nv = 1
};

enum class subpass_merge_status_ext : ktl::u32
{
v_merged_ext = 0,
v_disallowed_ext = 1,
v_not_merged_side_effects_ext = 2,
v_not_merged_samples_mismatch_ext = 3,
v_not_merged_views_mismatch_ext = 4,
v_not_merged_aliasing_ext = 5,
v_not_merged_dependencies_ext = 6,
v_not_merged_incompatible_input_attachment_ext = 7,
v_not_merged_too_many_attachments_ext = 8,
v_not_merged_insufficient_storage_ext = 9,
v_not_merged_depth_stencil_count_ext = 10,
v_not_merged_resolve_attachment_reuse_ext = 11,
v_not_merged_single_subpass_ext = 12,
v_not_merged_unspecified_ext = 13
};

enum class access_flag_bits2 : ktl::u64
{
v_2_none = 0,
v_2_indirect_command_read_bit = (1ULL << 0),
v_2_index_read_bit = (1ULL << 1),
v_2_vertex_attribute_read_bit = (1ULL << 2),
v_2_uniform_read_bit = (1ULL << 3),
v_2_input_attachment_read_bit = (1ULL << 4),
v_2_shader_read_bit = (1ULL << 5),
v_2_shader_write_bit = (1ULL << 6),
v_2_color_attachment_read_bit = (1ULL << 7),
v_2_color_attachment_write_bit = (1ULL << 8),
v_2_depth_stencil_attachment_read_bit = (1ULL << 9),
v_2_depth_stencil_attachment_write_bit = (1ULL << 10),
v_2_transfer_read_bit = (1ULL << 11),
v_2_transfer_write_bit = (1ULL << 12),
v_2_host_read_bit = (1ULL << 13),
v_2_host_write_bit = (1ULL << 14),
v_2_memory_read_bit = (1ULL << 15),
v_2_memory_write_bit = (1ULL << 16),
v_2_shader_sampled_read_bit = (1ULL << 32),
v_2_shader_storage_read_bit = (1ULL << 33),
v_2_shader_storage_write_bit = (1ULL << 34),
v_2_sampler_heap_read_bit_ext = (1ULL << 57),
v_2_resource_heap_read_bit_ext = (1ULL << 58),
v_2_reserved_46_bit_intel = (1ULL << 46),
v_2_shader_tile_attachment_read_bit_qcom = (1ULL << 51),
v_2_shader_tile_attachment_write_bit_qcom = (1ULL << 52),
v_2_transform_feedback_write_bit_ext = (1ULL << 25),
v_2_transform_feedback_counter_read_bit_ext = (1ULL << 26),
v_2_transform_feedback_counter_write_bit_ext = (1ULL << 27),
v_2_conditional_rendering_read_bit_ext = (1ULL << 20),
v_2_command_preprocess_read_bit_ext = (1ULL << 17),
v_2_command_preprocess_write_bit_ext = (1ULL << 18),
v_2_fragment_shading_rate_attachment_read_bit_khr = (1ULL << 23),
v_2_acceleration_structure_read_bit_khr = (1ULL << 21),
v_2_acceleration_structure_write_bit_khr = (1ULL << 22),
v_2_fragment_density_map_read_bit_ext = (1ULL << 24),
v_2_color_attachment_read_noncoherent_bit_ext = (1ULL << 19),
v_2_descriptor_buffer_read_bit_ext = (1ULL << 41),
v_2_invocation_mask_read_bit_huawei = (1ULL << 39),
v_2_shader_binding_table_read_bit_khr = (1ULL << 40),
v_2_micromap_read_bit_ext = (1ULL << 44),
v_2_micromap_write_bit_ext = (1ULL << 45),
v_2_optical_flow_read_bit_nv = (1ULL << 42),
v_2_optical_flow_write_bit_nv = (1ULL << 43),
v_2_data_graph_read_bit_arm = (1ULL << 47),
v_2_data_graph_write_bit_arm = (1ULL << 48),
v_2_memory_decompression_read_bit_ext = (1ULL << 55),
v_2_memory_decompression_write_bit_ext = (1ULL << 56),
v_2_reserved_62_bit_ext = (1ULL << 62),
v_2_reserved_63_bit_ext = (1ULL << 63),
v_2_reserved_60_bit_khr = (1ULL << 60),
v_2_reserved_61_bit_khr = (1ULL << 61),
v_2_reserved_49_bit_arm = (1ULL << 49),
v_2_reserved_50_bit_arm = (1ULL << 50),
v_2_none_khr = v_2_none,
v_2_indirect_command_read_bit_khr = v_2_indirect_command_read_bit,
v_2_index_read_bit_khr = v_2_index_read_bit,
v_2_vertex_attribute_read_bit_khr = v_2_vertex_attribute_read_bit,
v_2_uniform_read_bit_khr = v_2_uniform_read_bit,
v_2_input_attachment_read_bit_khr = v_2_input_attachment_read_bit,
v_2_shader_read_bit_khr = v_2_shader_read_bit,
v_2_shader_write_bit_khr = v_2_shader_write_bit,
v_2_color_attachment_read_bit_khr = v_2_color_attachment_read_bit,
v_2_color_attachment_write_bit_khr = v_2_color_attachment_write_bit,
v_2_depth_stencil_attachment_read_bit_khr = v_2_depth_stencil_attachment_read_bit,
v_2_depth_stencil_attachment_write_bit_khr = v_2_depth_stencil_attachment_write_bit,
v_2_transfer_read_bit_khr = v_2_transfer_read_bit,
v_2_transfer_write_bit_khr = v_2_transfer_write_bit,
v_2_host_read_bit_khr = v_2_host_read_bit,
v_2_host_write_bit_khr = v_2_host_write_bit,
v_2_memory_read_bit_khr = v_2_memory_read_bit,
v_2_memory_write_bit_khr = v_2_memory_write_bit,
v_2_shader_sampled_read_bit_khr = v_2_shader_sampled_read_bit,
v_2_shader_storage_read_bit_khr = v_2_shader_storage_read_bit,
v_2_shader_storage_write_bit_khr = v_2_shader_storage_write_bit,
v_2_command_preprocess_read_bit_nv = v_2_command_preprocess_read_bit_ext,
v_2_command_preprocess_write_bit_nv = v_2_command_preprocess_write_bit_ext,
v_2_shading_rate_image_read_bit_nv = v_2_fragment_shading_rate_attachment_read_bit_khr,
v_2_acceleration_structure_read_bit_nv = v_2_acceleration_structure_read_bit_khr,
v_2_acceleration_structure_write_bit_nv = v_2_acceleration_structure_write_bit_khr
};

enum class pipeline_stage_flag_bits2 : ktl::u64
{
v_2_none = 0,
v_2_top_of_pipe_bit = (1ULL << 0),
v_2_draw_indirect_bit = (1ULL << 1),
v_2_vertex_input_bit = (1ULL << 2),
v_2_vertex_shader_bit = (1ULL << 3),
v_2_tessellation_control_shader_bit = (1ULL << 4),
v_2_tessellation_evaluation_shader_bit = (1ULL << 5),
v_2_geometry_shader_bit = (1ULL << 6),
v_2_fragment_shader_bit = (1ULL << 7),
v_2_early_fragment_tests_bit = (1ULL << 8),
v_2_late_fragment_tests_bit = (1ULL << 9),
v_2_color_attachment_output_bit = (1ULL << 10),
v_2_compute_shader_bit = (1ULL << 11),
v_2_all_transfer_bit = (1ULL << 12),
v_2_bottom_of_pipe_bit = (1ULL << 13),
v_2_host_bit = (1ULL << 14),
v_2_all_graphics_bit = (1ULL << 15),
v_2_all_commands_bit = (1ULL << 16),
v_2_copy_bit = (1ULL << 32),
v_2_resolve_bit = (1ULL << 33),
v_2_blit_bit = (1ULL << 34),
v_2_clear_bit = (1ULL << 35),
v_2_index_input_bit = (1ULL << 36),
v_2_vertex_attribute_input_bit = (1ULL << 37),
v_2_pre_rasterization_shaders_bit = (1ULL << 38),
v_2_transform_feedback_bit_ext = (1ULL << 24),
v_2_conditional_rendering_bit_ext = (1ULL << 18),
v_2_command_preprocess_bit_ext = (1ULL << 17),
v_2_fragment_shading_rate_attachment_bit_khr = (1ULL << 22),
v_2_acceleration_structure_build_bit_khr = (1ULL << 25),
v_2_ray_tracing_shader_bit_khr = (1ULL << 21),
v_2_fragment_density_process_bit_ext = (1ULL << 23),
v_2_task_shader_bit_ext = (1ULL << 19),
v_2_mesh_shader_bit_ext = (1ULL << 20),
v_2_subpass_shader_bit_huawei = (1ULL << 39),
v_2_invocation_mask_bit_huawei = (1ULL << 40),
v_2_acceleration_structure_copy_bit_khr = (1ULL << 28),
v_2_micromap_build_bit_ext = (1ULL << 30),
v_2_cluster_culling_shader_bit_huawei = (1ULL << 41),
v_2_optical_flow_bit_nv = (1ULL << 29),
v_2_convert_cooperative_vector_matrix_bit_nv = (1ULL << 44),
v_2_data_graph_bit_arm = (1ULL << 42),
v_2_copy_indirect_bit_khr = (1ULL << 46),
v_2_memory_decompression_bit_ext = (1ULL << 45),
v_2_reserved_49_bit_ext = (1ULL << 49),
v_2_reserved_47_bit_khr = (1ULL << 47),
v_2_reserved_43_bit_arm = (1ULL << 43),
v_2_reserved_48_bit_huawei = (1ULL << 48),
v_2_transfer_bit = v_2_all_transfer_bit,
v_2_none_khr = v_2_none,
v_2_top_of_pipe_bit_khr = v_2_top_of_pipe_bit,
v_2_draw_indirect_bit_khr = v_2_draw_indirect_bit,
v_2_vertex_input_bit_khr = v_2_vertex_input_bit,
v_2_vertex_shader_bit_khr = v_2_vertex_shader_bit,
v_2_tessellation_control_shader_bit_khr = v_2_tessellation_control_shader_bit,
v_2_tessellation_evaluation_shader_bit_khr = v_2_tessellation_evaluation_shader_bit,
v_2_geometry_shader_bit_khr = v_2_geometry_shader_bit,
v_2_fragment_shader_bit_khr = v_2_fragment_shader_bit,
v_2_early_fragment_tests_bit_khr = v_2_early_fragment_tests_bit,
v_2_late_fragment_tests_bit_khr = v_2_late_fragment_tests_bit,
v_2_color_attachment_output_bit_khr = v_2_color_attachment_output_bit,
v_2_compute_shader_bit_khr = v_2_compute_shader_bit,
v_2_all_transfer_bit_khr = v_2_all_transfer_bit,
v_2_transfer_bit_khr = v_2_all_transfer_bit,
v_2_bottom_of_pipe_bit_khr = v_2_bottom_of_pipe_bit,
v_2_host_bit_khr = v_2_host_bit,
v_2_all_graphics_bit_khr = v_2_all_graphics_bit,
v_2_all_commands_bit_khr = v_2_all_commands_bit,
v_2_copy_bit_khr = v_2_copy_bit,
v_2_resolve_bit_khr = v_2_resolve_bit,
v_2_blit_bit_khr = v_2_blit_bit,
v_2_clear_bit_khr = v_2_clear_bit,
v_2_index_input_bit_khr = v_2_index_input_bit,
v_2_vertex_attribute_input_bit_khr = v_2_vertex_attribute_input_bit,
v_2_pre_rasterization_shaders_bit_khr = v_2_pre_rasterization_shaders_bit,
v_2_command_preprocess_bit_nv = v_2_command_preprocess_bit_ext,
v_2_shading_rate_image_bit_nv = v_2_fragment_shading_rate_attachment_bit_khr,
v_2_ray_tracing_shader_bit_nv = v_2_ray_tracing_shader_bit_khr,
v_2_acceleration_structure_build_bit_nv = v_2_acceleration_structure_build_bit_khr,
v_2_task_shader_bit_nv = v_2_task_shader_bit_ext,
v_2_mesh_shader_bit_nv = v_2_mesh_shader_bit_ext,
v_2_subpass_shading_bit_huawei [[deprecated]] = v_2_subpass_shader_bit_huawei
};

enum class submit_flag_bits : ktl::u32
{
v_protected_bit = (1U << 0),
v_protected_bit_khr = v_protected_bit
};

enum class event_create_flag_bits : ktl::u32
{
v_device_only_bit = (1U << 0),
v_device_only_bit_khr = v_device_only_bit
};

enum class pipeline_layout_create_flag_bits : ktl::u32
{
v_independent_sets_bit_ext = (1U << 1)
};

enum class sci_sync_client_type_nv : ktl::u32
{
v_signaler_nv = 0,
v_waiter_nv = 1,
v_signaler_waiter_nv = 2
};

enum class sci_sync_primitive_type_nv : ktl::u32
{
v_fence_nv = 0,
v_semaphore_nv = 1
};

enum class provoking_vertex_mode_ext : ktl::u32
{
v_first_vertex_ext = 0,
v_last_vertex_ext = 1
};

enum class pipeline_cache_validation_version : ktl::u32
{
v_safety_critical_one = 1
};

enum class acceleration_structure_motion_instance_type_nv : ktl::u32
{
v_static_nv = 0,
v_matrix_motion_nv = 1,
v_srt_motion_nv = 2
};

enum class pipeline_color_blend_state_create_flag_bits : ktl::u32
{
v_rasterization_order_attachment_access_bit_ext = (1U << 0),
v_rasterization_order_attachment_access_bit_arm = v_rasterization_order_attachment_access_bit_ext
};

enum class pipeline_depth_stencil_state_create_flag_bits : ktl::u32
{
v_rasterization_order_attachment_depth_access_bit_ext = (1U << 0),
v_rasterization_order_attachment_stencil_access_bit_ext = (1U << 1),
v_rasterization_order_attachment_depth_access_bit_arm = v_rasterization_order_attachment_depth_access_bit_ext,
v_rasterization_order_attachment_stencil_access_bit_arm = v_rasterization_order_attachment_stencil_access_bit_ext
};

enum class graphics_pipeline_library_flag_bits_ext : ktl::u32
{
v_vertex_input_interface_bit_ext = (1U << 0),
v_pre_rasterization_shaders_bit_ext = (1U << 1),
v_ragment_shader_bit_ext = (1U << 2),
v_ragment_output_interface_bit_ext = (1U << 3)
};

enum class rendering_attachment_flag_bits_khr : ktl::u32
{
v_input_attachment_feedback_bit_khr = (1U << 0),
v_resolve_skip_transfer_function_bit_khr = (1U << 1),
v_resolve_enable_transfer_function_bit_khr = (1U << 2)
};

enum class resolve_image_flag_bits_khr : ktl::u32
{
v_skip_transfer_function_bit_khr = (1U << 0),
v_enable_transfer_function_bit_khr = (1U << 1)
};

enum class device_address_binding_flag_bits_ext : ktl::u32
{
v_internal_object_bit_ext = (1U << 0)
};

enum class device_address_binding_type_ext : ktl::u32
{
v_bind_ext = 0,
v_unbind_ext = 1
};

enum class frame_boundary_flag_bits_ext : ktl::u32
{
v_rame_end_bit_ext = (1U << 0)
};

enum class present_scaling_flag_bits_khr : ktl::u32
{
v_one_to_one_bit_khr = (1U << 0),
v_aspect_ratio_stretch_bit_khr = (1U << 1),
v_stretch_bit_khr = (1U << 2),
v_one_to_one_bit_ext = v_one_to_one_bit_khr,
v_aspect_ratio_stretch_bit_ext = v_aspect_ratio_stretch_bit_khr,
v_stretch_bit_ext = v_stretch_bit_khr
};

enum class present_gravity_flag_bits_khr : ktl::u32
{
v_min_bit_khr = (1U << 0),
v_max_bit_khr = (1U << 1),
v_centered_bit_khr = (1U << 2),
v_min_bit_ext = v_min_bit_khr,
v_max_bit_ext = v_max_bit_khr,
v_centered_bit_ext = v_centered_bit_khr
};

enum class physical_device_scheduling_controls_flag_bits_arm : ktl::u64
{
v_shader_core_count_arm = (1ULL << 0),
v_dispatch_parameters_arm = (1ULL << 1)
};

enum class present_stage_flag_bits_ext : ktl::u32
{
v_queue_operations_end_bit_ext = (1U << 0),
v_request_dequeued_bit_ext = (1U << 1),
v_image_first_pixel_out_bit_ext = (1U << 2),
v_image_first_pixel_visible_bit_ext = (1U << 3)
};

enum class past_presentation_timing_flag_bits_ext : ktl::u32
{
v_allow_partial_results_bit_ext = (1U << 0),
v_allow_out_of_order_results_bit_ext = (1U << 1)
};

enum class present_timing_info_flag_bits_ext : ktl::u32
{
v_present_at_relative_time_bit_ext = (1U << 0),
v_present_at_nearest_refresh_cycle_bit_ext = (1U << 1)
};

enum class query_result_status_khr : ktl::i32
{
v_error_khr = -1,
v_not_ready_khr = 0,
v_complete_khr = 1
};

enum class host_image_copy_flag_bits : ktl::u32
{
v_memcpy_bit = (1U << 0),
v_memcpy [[deprecated]] = v_memcpy_bit,
v_memcpy_bit_ext = v_memcpy_bit,
v_memcpy_ext [[deprecated]] = v_memcpy_bit
};

enum class partitioned_acceleration_structure_op_type_nv : ktl::u32
{
v_write_instance_nv = 0,
v_update_instance_nv = 1,
v_write_partition_translation_nv = 2
};

enum class partitioned_acceleration_structure_instance_flag_bits_nv : ktl::u32
{
v_triangle_facing_cull_disable_bit_nv = (1U << 0),
v_triangle_flip_facing_bit_nv = (1U << 1),
v_force_opaque_bit_nv = (1U << 2),
v_force_no_opaque_bit_nv = (1U << 3),
v_enable_explicit_bounding_box_nv = (1U << 4)
};

enum class image_format_constraints_flag_bits_fuchsia : ktl::u32
{
};

enum class image_constraints_info_flag_bits_fuchsia : ktl::u32
{
v_cpu_read_rarely_fuchsia = (1U << 0),
v_cpu_read_often_fuchsia = (1U << 1),
v_cpu_write_rarely_fuchsia = (1U << 2),
v_cpu_write_often_fuchsia = (1U << 3),
v_protected_optional_fuchsia = (1U << 4)
};

enum class format_feature_flag_bits2 : ktl::u64
{
v_2_sampled_image_bit = (1ULL << 0),
v_2_storage_image_bit = (1ULL << 1),
v_2_storage_image_atomic_bit = (1ULL << 2),
v_2_uniform_texel_buffer_bit = (1ULL << 3),
v_2_storage_texel_buffer_bit = (1ULL << 4),
v_2_storage_texel_buffer_atomic_bit = (1ULL << 5),
v_2_vertex_buffer_bit = (1ULL << 6),
v_2_color_attachment_bit = (1ULL << 7),
v_2_color_attachment_blend_bit = (1ULL << 8),
v_2_depth_stencil_attachment_bit = (1ULL << 9),
v_2_blit_src_bit = (1ULL << 10),
v_2_blit_dst_bit = (1ULL << 11),
v_2_sampled_image_filter_linear_bit = (1ULL << 12),
v_2_transfer_src_bit = (1ULL << 14),
v_2_transfer_dst_bit = (1ULL << 15),
v_2_sampled_image_filter_minmax_bit = (1ULL << 16),
v_2_midpoint_chroma_samples_bit = (1ULL << 17),
v_2_sampled_image_ycbcr_conversion_linear_filter_bit = (1ULL << 18),
v_2_sampled_image_ycbcr_conversion_separate_reconstruction_filter_bit = (1ULL << 19),
v_2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_bit = (1ULL << 20),
v_2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_bit = (1ULL << 21),
v_2_disjoint_bit = (1ULL << 22),
v_2_cosited_chroma_samples_bit = (1ULL << 23),
v_2_storage_read_without_format_bit = (1ULL << 31),
v_2_storage_write_without_format_bit = (1ULL << 32),
v_2_sampled_image_depth_comparison_bit = (1ULL << 33),
v_2_sampled_image_filter_cubic_bit = (1ULL << 13),
v_2_host_image_transfer_bit = (1ULL << 46),
v_2_acceleration_structure_vertex_buffer_bit_khr = (1ULL << 29),
v_2_fragment_density_map_bit_ext = (1ULL << 24),
v_2_fragment_shading_rate_attachment_bit_khr = (1ULL << 30),
v_2_reserved_44_bit_qcom = (1ULL << 44),
v_2_acceleration_structure_radius_buffer_bit_nv = (1ULL << 51),
v_2_linear_color_attachment_bit_nv = (1ULL << 38),
v_2_weight_image_bit_qcom = (1ULL << 34),
v_2_weight_sampled_image_bit_qcom = (1ULL << 35),
v_2_block_matching_bit_qcom = (1ULL << 36),
v_2_box_filter_sampled_bit_qcom = (1ULL << 37),
v_2_tensor_shader_bit_arm = (1ULL << 39),
v_2_tensor_image_aliasing_bit_arm = (1ULL << 43),
v_2_optical_flow_image_bit_nv = (1ULL << 40),
v_2_optical_flow_vector_bit_nv = (1ULL << 41),
v_2_optical_flow_cost_bit_nv = (1ULL << 42),
v_2_tensor_data_graph_bit_arm = (1ULL << 48),
v_2_reserved_60_bit_ext = (1ULL << 60),
v_2_copy_image_indirect_dst_bit_khr = (1ULL << 59),
v_2_depth_copy_on_compute_queue_bit_khr = (1ULL << 52),
v_2_depth_copy_on_transfer_queue_bit_khr = (1ULL << 53),
v_2_stencil_copy_on_compute_queue_bit_khr = (1ULL << 54),
v_2_stencil_copy_on_transfer_queue_bit_khr = (1ULL << 55),
v_2_data_graph_optical_flow_image_bit_arm = (1ULL << 56),
v_2_data_graph_optical_flow_vector_bit_arm = (1ULL << 57),
v_2_data_graph_optical_flow_cost_bit_arm = (1ULL << 58),
v_2_reserved_47_bit_arm = (1ULL << 47),
v_2_reserved_61_bit_huawei = (1ULL << 61),
v_2_host_image_transfer_bit_ext = v_2_host_image_transfer_bit,
v_2_sampled_image_bit_khr = v_2_sampled_image_bit,
v_2_storage_image_bit_khr = v_2_storage_image_bit,
v_2_storage_image_atomic_bit_khr = v_2_storage_image_atomic_bit,
v_2_uniform_texel_buffer_bit_khr = v_2_uniform_texel_buffer_bit,
v_2_storage_texel_buffer_bit_khr = v_2_storage_texel_buffer_bit,
v_2_storage_texel_buffer_atomic_bit_khr = v_2_storage_texel_buffer_atomic_bit,
v_2_vertex_buffer_bit_khr = v_2_vertex_buffer_bit,
v_2_color_attachment_bit_khr = v_2_color_attachment_bit,
v_2_color_attachment_blend_bit_khr = v_2_color_attachment_blend_bit,
v_2_depth_stencil_attachment_bit_khr = v_2_depth_stencil_attachment_bit,
v_2_blit_src_bit_khr = v_2_blit_src_bit,
v_2_blit_dst_bit_khr = v_2_blit_dst_bit,
v_2_sampled_image_filter_linear_bit_khr = v_2_sampled_image_filter_linear_bit,
v_2_transfer_src_bit_khr = v_2_transfer_src_bit,
v_2_transfer_dst_bit_khr = v_2_transfer_dst_bit,
v_2_midpoint_chroma_samples_bit_khr = v_2_midpoint_chroma_samples_bit,
v_2_sampled_image_ycbcr_conversion_linear_filter_bit_khr = v_2_sampled_image_ycbcr_conversion_linear_filter_bit,
v_2_sampled_image_ycbcr_conversion_separate_reconstruction_filter_bit_khr = v_2_sampled_image_ycbcr_conversion_separate_reconstruction_filter_bit,
v_2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_bit_khr = v_2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_bit,
v_2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_bit_khr = v_2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_bit,
v_2_disjoint_bit_khr = v_2_disjoint_bit,
v_2_cosited_chroma_samples_bit_khr = v_2_cosited_chroma_samples_bit,
v_2_storage_read_without_format_bit_khr = v_2_storage_read_without_format_bit,
v_2_storage_write_without_format_bit_khr = v_2_storage_write_without_format_bit,
v_2_sampled_image_depth_comparison_bit_khr = v_2_sampled_image_depth_comparison_bit,
v_2_sampled_image_filter_minmax_bit_khr = v_2_sampled_image_filter_minmax_bit,
v_2_sampled_image_filter_cubic_bit_ext = v_2_sampled_image_filter_cubic_bit
};

enum class rendering_flag_bits : ktl::u32
{
v_contents_secondary_command_buffers_bit = (1U << 0),
v_suspending_bit = (1U << 1),
v_resuming_bit = (1U << 2),
v_reserved_9_bit_img = (1U << 9),
v_enable_legacy_dithering_bit_ext = (1U << 3),
v_contents_inline_bit_khr = (1U << 4),
v_per_layer_fragment_density_bit_valve = (1U << 5),
v_ragment_region_bit_ext = (1U << 6),
v_custom_resolve_bit_ext = (1U << 7),
v_local_read_concurrent_access_control_bit_khr = (1U << 8),
v_reserved_10_bit_valve = (1U << 10),
v_reserved_11_bit_valve = (1U << 11),
v_reserved_12_bit_valve = (1U << 12),
v_contents_secondary_command_buffers_bit_khr = v_contents_secondary_command_buffers_bit,
v_suspending_bit_khr = v_suspending_bit,
v_resuming_bit_khr = v_resuming_bit,
v_contents_inline_bit_ext = v_contents_inline_bit_khr
};

enum class export_metal_object_type_flag_bits_ext : ktl::u32
{
v_metal_device_bit_ext = (1U << 0),
v_metal_command_queue_bit_ext = (1U << 1),
v_metal_buffer_bit_ext = (1U << 2),
v_metal_texture_bit_ext = (1U << 3),
v_metal_iosurface_bit_ext = (1U << 4),
v_metal_shared_event_bit_ext = (1U << 5)
};

enum class instance_create_flag_bits : ktl::u32
{
v_enumerate_portability_bit_khr = (1U << 0),
v_reserved_616_bit_ext = (1U << 1)
};

enum class image_compression_flag_bits_ext : ktl::u32
{
v_default_ext = 0,
v_ixed_rate_default_ext = (1U << 0),
v_ixed_rate_explicit_ext = (1U << 1),
v_disabled_ext = (1U << 2)
};

enum class image_compression_fixed_rate_flag_bits_ext : ktl::u32
{
v_none_ext = 0,
v_1bpc_bit_ext = (1U << 0),
v_2bpc_bit_ext = (1U << 1),
v_3bpc_bit_ext = (1U << 2),
v_4bpc_bit_ext = (1U << 3),
v_5bpc_bit_ext = (1U << 4),
v_6bpc_bit_ext = (1U << 5),
v_7bpc_bit_ext = (1U << 6),
v_8bpc_bit_ext = (1U << 7),
v_9bpc_bit_ext = (1U << 8),
v_10bpc_bit_ext = (1U << 9),
v_11bpc_bit_ext = (1U << 10),
v_12bpc_bit_ext = (1U << 11),
v_13bpc_bit_ext = (1U << 12),
v_14bpc_bit_ext = (1U << 13),
v_15bpc_bit_ext = (1U << 14),
v_16bpc_bit_ext = (1U << 15),
v_17bpc_bit_ext = (1U << 16),
v_18bpc_bit_ext = (1U << 17),
v_19bpc_bit_ext = (1U << 18),
v_20bpc_bit_ext = (1U << 19),
v_21bpc_bit_ext = (1U << 20),
v_22bpc_bit_ext = (1U << 21),
v_23bpc_bit_ext = (1U << 22),
v_24bpc_bit_ext = (1U << 23)
};

enum class pipeline_robustness_buffer_behavior : ktl::u32
{
v_device_default = 0,
v_disabled = 1,
v_robust_buffer_access = 2,
v_robust_buffer_access_2 = 3,
v_device_default_ext = v_device_default,
v_disabled_ext = v_disabled,
v_robust_buffer_access_ext = v_robust_buffer_access,
v_robust_buffer_access_2_ext = v_robust_buffer_access_2
};

enum class pipeline_robustness_image_behavior : ktl::u32
{
v_device_default = 0,
v_disabled = 1,
v_robust_image_access = 2,
v_robust_image_access_2 = 3,
v_device_default_ext = v_device_default,
v_disabled_ext = v_disabled,
v_robust_image_access_ext = v_robust_image_access,
v_robust_image_access_2_ext = v_robust_image_access_2
};

enum class optical_flow_grid_size_flag_bits_nv : ktl::u32
{
v_unknown_nv = 0,
v_1x1_bit_nv = (1U << 0),
v_2x2_bit_nv = (1U << 1),
v_4x4_bit_nv = (1U << 2),
v_8x8_bit_nv = (1U << 3)
};

enum class optical_flow_usage_flag_bits_nv : ktl::u32
{
v_unknown_nv = 0,
v_input_bit_nv = (1U << 0),
v_output_bit_nv = (1U << 1),
v_hint_bit_nv = (1U << 2),
v_cost_bit_nv = (1U << 3),
v_global_flow_bit_nv = (1U << 4)
};

enum class optical_flow_performance_level_nv : ktl::u32
{
v_unknown_nv = 0,
v_slow_nv = 1,
v_medium_nv = 2,
v_fast_nv = 3
};

enum class optical_flow_session_binding_point_nv : ktl::u32
{
v_unknown_nv = 0,
v_input_nv = 1,
v_reference_nv = 2,
v_hint_nv = 3,
v_flow_vector_nv = 4,
v_backward_flow_vector_nv = 5,
v_cost_nv = 6,
v_backward_cost_nv = 7,
v_global_flow_nv = 8
};

enum class optical_flow_session_create_flag_bits_nv : ktl::u32
{
v_enable_hint_bit_nv = (1U << 0),
v_enable_cost_bit_nv = (1U << 1),
v_enable_global_flow_bit_nv = (1U << 2),
v_allow_regions_bit_nv = (1U << 3),
v_both_directions_bit_nv = (1U << 4)
};

enum class optical_flow_execute_flag_bits_nv : ktl::u32
{
v_disable_temporal_hints_bit_nv = (1U << 0)
};

enum class micromap_type_ext : ktl::u32
{
v_opacity_micromap_ext = 0,
v_displacement_micromap_nv = 1397000
};

enum class build_micromap_flag_bits_ext : ktl::u32
{
v_prefer_fast_trace_bit_ext = (1U << 0),
v_prefer_fast_build_bit_ext = (1U << 1),
v_allow_compaction_bit_ext = (1U << 2)
};

enum class micromap_create_flag_bits_ext : ktl::u32
{
v_device_address_capture_replay_bit_ext = (1U << 0)
};

enum class copy_micromap_mode_ext : ktl::u32
{
v_clone_ext = 0,
v_serialize_ext = 1,
v_deserialize_ext = 2,
v_compact_ext = 3
};

enum class build_micromap_mode_ext : ktl::u32
{
v_build_ext = 0
};

enum class opacity_micromap_format_ext : ktl::u32
{
v_2_state_ext = 1,
v_4_state_ext = 2
};

enum class opacity_micromap_special_index_ext : ktl::i32
{
v_fully_transparent_ext = -1,
v_fully_opaque_ext = -2,
v_fully_unknown_transparent_ext = -3,
v_fully_unknown_opaque_ext = -4,
v_cluster_geometry_disable_opacity_micromap_nv = -5
};

enum class depth_bias_representation_ext : ktl::u32
{
v_least_representable_value_format_ext = 0,
v_least_representable_value_force_unorm_ext = 1,
v_float_ext = 2
};

enum class device_fault_flag_bits_khr : ktl::u32
{
v_device_lost_khr = (1U << 0),
v_memory_address_khr = (1U << 1),
v_instruction_address_khr = (1U << 2),
v_vendor_khr = (1U << 3),
v_watchdog_timeout_khr = (1U << 4),
v_overflow_khr = (1U << 5)
};

enum class device_fault_address_type_khr : ktl::u32
{
v_none_khr = 0,
v_read_invalid_khr = 1,
v_write_invalid_khr = 2,
v_execute_invalid_khr = 3,
v_instruction_pointer_unknown_khr = 4,
v_instruction_pointer_invalid_khr = 5,
v_instruction_pointer_fault_khr = 6,
v_none_ext = v_none_khr,
v_read_invalid_ext = v_read_invalid_khr,
v_write_invalid_ext = v_write_invalid_khr,
v_execute_invalid_ext = v_execute_invalid_khr,
v_instruction_pointer_unknown_ext = v_instruction_pointer_unknown_khr,
v_instruction_pointer_invalid_ext = v_instruction_pointer_invalid_khr,
v_instruction_pointer_fault_ext = v_instruction_pointer_fault_khr
};

enum class device_fault_vendor_binary_header_version_khr : ktl::u32
{
v_one_khr = 1,
v_one_ext = v_one_khr
};

enum class indirect_commands_layout_usage_flag_bits_ext : ktl::u32
{
v_explicit_preprocess_bit_ext = (1U << 0),
v_unordered_sequences_bit_ext = (1U << 1)
};

enum class indirect_execution_set_info_type_ext : ktl::u32
{
v_pipelines_ext = 0,
v_shader_objects_ext = 1
};

enum class indirect_commands_input_mode_flag_bits_ext : ktl::u32
{
v_vulkan_index_buffer_ext = (1U << 0),
v_dxgi_index_buffer_ext = (1U << 1)
};

enum class indirect_commands_token_type_ext : ktl::u32
{
v_ecution_set_ext = 0,
v_push_constant_ext = 1,
v_sequence_index_ext = 2,
v_index_buffer_ext = 3,
v_vertex_buffer_ext = 4,
v_draw_indexed_ext = 5,
v_draw_ext = 6,
v_draw_indexed_count_ext = 7,
v_draw_count_ext = 8,
v_dispatch_ext = 9,
v_push_data_ext = 1135000,
v_push_data_sequence_index_ext = 1135001,
v_draw_mesh_tasks_nv_ext = 1202002,
v_draw_mesh_tasks_count_nv_ext = 1202003,
v_draw_mesh_tasks_ext = 1328000,
v_draw_mesh_tasks_count_ext = 1328001,
v_trace_rays2_ext = 1386004
};

enum class displacement_micromap_format_nv : ktl::u32
{
v_64_triangles_64_bytes_nv = 1,
v_256_triangles_128_bytes_nv = 2,
v_1024_triangles_128_bytes_nv = 3
};

enum class shader_create_flag_bits_ext : ktl::u32
{
v_link_stage_bit_ext = (1U << 0),
v_reserved_17_bit_img = (1U << 17),
v_descriptor_heap_bit_ext = (1U << 10),
v_reserved_16_bit_khr = (1U << 16),
v_instrument_shader_bit_arm = (1U << 11),
v_allow_varying_subgroup_size_bit_ext = (1U << 1),
v_require_full_subgroups_bit_ext = (1U << 2),
v_no_task_shader_bit_ext = (1U << 3),
v_dispatch_base_bit_ext = (1U << 4),
v_ragment_shading_rate_attachment_bit_ext = (1U << 5),
v_ragment_density_map_attachment_bit_ext = (1U << 6),
v_indirect_bindable_bit_ext = (1U << 7),
v_reserved_8_bit_ext = (1U << 8),
v_reserved_9_bit_ext = (1U << 9),
v_reserved_12_bit_ext = (1U << 12),
v_64_bit_indexing_bit_ext = (1U << 15),
v_reserved_18_bit_khr = (1U << 18)
};

enum class shader_code_type_ext : ktl::u32
{
v_binary_ext = 0,
v_spirv_ext = 1
};

enum class scope_khr : ktl::u32
{
v_device_khr = 1,
v_workgroup_khr = 2,
v_subgroup_khr = 3,
v_queue_family_khr = 5,
v_device_nv = v_device_khr,
v_workgroup_nv = v_workgroup_khr,
v_subgroup_nv = v_subgroup_khr,
v_queue_family_nv = v_queue_family_khr
};

enum class component_type_khr : ktl::u32
{
v_float16_khr = 0,
v_float32_khr = 1,
v_float64_khr = 2,
v_sint8_khr = 3,
v_sint16_khr = 4,
v_sint32_khr = 5,
v_sint64_khr = 6,
v_uint8_khr = 7,
v_uint16_khr = 8,
v_uint32_khr = 9,
v_uint64_khr = 10,
v_bfloat16_khr = 1141000,
v_sint8_packed_nv = 1491000,
v_uint8_packed_nv = 1491001,
v_float8_e4m3_ext = 1567002,
v_float8_e5m2_ext = 1567003,
v_float16_nv = v_float16_khr,
v_float32_nv = v_float32_khr,
v_float64_nv = v_float64_khr,
v_sint8_nv = v_sint8_khr,
v_sint16_nv = v_sint16_khr,
v_sint32_nv = v_sint32_khr,
v_sint64_nv = v_sint64_khr,
v_uint8_nv = v_uint8_khr,
v_uint16_nv = v_uint16_khr,
v_uint32_nv = v_uint32_khr,
v_uint64_nv = v_uint64_khr,
v_float_e4m3_nv = v_float8_e4m3_ext,
v_float_e5m2_nv = v_float8_e5m2_ext
};

enum class cubic_filter_weights_qcom : ktl::u32
{
v_catmull_rom_qcom = 0,
v_zero_tangent_cardinal_qcom = 1,
v_b_spline_qcom = 2,
v_mitchell_netravali_qcom = 3
};

enum class block_match_window_compare_mode_qcom : ktl::u32
{
v_min_qcom = 0,
v_max_qcom = 1
};

enum class physical_device_layered_api_khr : ktl::u32
{
v_vulkan_khr = 0,
v_d3d12_khr = 1,
v_metal_khr = 2,
v_opengl_khr = 3,
v_opengles_khr = 4
};

enum class layered_driver_underlying_api_msft : ktl::u32
{
v_none_msft = 0,
v_d3d12_msft = 1
};

enum class latency_marker_nv : ktl::u32
{
v_simulation_start_nv = 0,
v_simulation_end_nv = 1,
v_rendersubmit_start_nv = 2,
v_rendersubmit_end_nv = 3,
v_present_start_nv = 4,
v_present_end_nv = 5,
v_input_sample_nv = 6,
v_trigger_flash_nv = 7,
v_out_of_band_rendersubmit_start_nv = 8,
v_out_of_band_rendersubmit_end_nv = 9,
v_out_of_band_present_start_nv = 10,
v_out_of_band_present_end_nv = 11
};

enum class out_of_band_queue_type_nv : ktl::u32
{
v_render_nv = 0,
v_present_nv = 1
};

enum class memory_unmap_flag_bits : ktl::u32
{
v_reserve_bit_ext = (1U << 0)
};

enum class compressed_triangle_format_amdx : ktl::u32
{
v_dgf1_amdx = 0
};

enum class wayland_surface_create_flag_bits_khr : ktl::u32
{
v_disable_color_management = (1U << 0)
};

enum class depth_clamp_mode_ext : ktl::u32
{
v_viewport_range_ext = 0,
v_user_defined_range_ext = 1
};

enum class access_flag_bits3khr : ktl::u64
{
v_3_none_khr = 0
};

enum class tile_shading_render_pass_flag_bits_qcom : ktl::u32
{
v_enable_bit_qcom = (1U << 0),
v_per_tile_execution_bit_qcom = (1U << 1)
};

enum class cooperative_vector_matrix_layout_nv : ktl::u32
{
v_row_major_nv = 0,
v_column_major_nv = 1,
v_inferencing_optimal_nv = 2,
v_training_optimal_nv = 3
};

enum class address_copy_flag_bits_khr : ktl::u32
{
v_device_local_bit_khr = (1U << 0),
v_sparse_bit_khr = (1U << 1),
v_protected_bit_khr = (1U << 2)
};

enum class tensor_create_flag_bits_arm : ktl::u64
{
v_mutable_format_bit_arm = (1ULL << 0),
v_protected_bit_arm = (1ULL << 1),
v_descriptor_heap_capture_replay_bit_arm = (1ULL << 3),
v_descriptor_buffer_capture_replay_bit_arm = (1ULL << 2)
};

enum class tensor_usage_flag_bits_arm : ktl::u64
{
v_shader_bit_arm = (1ULL << 1),
v_transfer_src_bit_arm = (1ULL << 2),
v_transfer_dst_bit_arm = (1ULL << 3),
v_image_aliasing_bit_arm = (1ULL << 4),
v_data_graph_bit_arm = (1ULL << 5)
};

enum class tensor_tiling_arm : ktl::u32
{
v_optimal_arm = 0,
v_linear_arm = 1
};

enum class tensor_view_create_flag_bits_arm : ktl::u64
{
v_descriptor_buffer_capture_replay_bit_arm = (1ULL << 0)
};

enum class default_vertex_attribute_value_khr : ktl::u32
{
v_zero_zero_zero_zero_khr = 0,
v_zero_zero_zero_one_khr = 1
};

enum class data_graph_pipeline_session_create_flag_bits_arm : ktl::u64
{
v_protected_bit_arm = (1ULL << 0),
v_optical_flow_cache_bit_arm = (1ULL << 1)
};

enum class data_graph_pipeline_session_bind_point_arm : ktl::u32
{
v_transient_arm = 0,
v_optical_flow_cache_arm = 1631001
};

enum class data_graph_pipeline_session_bind_point_type_arm : ktl::u32
{
v_memory_arm = 0
};

enum class data_graph_pipeline_property_arm : ktl::u32
{
v_creation_log_arm = 0,
v_identifier_arm = 1
};

enum class data_graph_pipeline_dispatch_flag_bits_arm : ktl::u64
{
};

enum class physical_device_data_graph_processing_engine_type_arm : ktl::u32
{
v_default_arm = 0,
v_neural_qcom = 1629000,
v_compute_qcom = 1629001
};

enum class physical_device_data_graph_operation_type_arm : ktl::u32
{
v_spirv_extended_instruction_set_arm = 0,
v_neural_model_qcom = 1629000,
v_builtin_model_qcom = 1629001,
v_optical_flow_arm = 1631000
};

enum class data_graph_model_cache_type_qcom : ktl::u32
{
v_generic_binary_qcom = 0
};

enum class perf_hint_type_qcom : ktl::u32
{
v_default_qcom = 0,
v_frequency_min_qcom = 1,
v_frequency_max_qcom = 2,
v_frequency_scaled_qcom = 3
};

enum class swapchain_image_usage_flag_bits_ohos : ktl::u32
{
v_shared_bit_ohos = (1U << 0)
};

enum class descriptor_mapping_source_ext : ktl::u32
{
v_heap_with_constant_offset_ext = 0,
v_heap_with_push_index_ext = 1,
v_heap_with_indirect_index_ext = 2,
v_heap_with_indirect_index_array_ext = 3,
v_resource_heap_data_ext = 4,
v_push_data_ext = 5,
v_push_address_ext = 6,
v_indirect_address_ext = 7,
v_heap_with_shader_record_index_ext = 8,
v_shader_record_data_ext = 9,
v_shader_record_address_ext = 10
};

enum class spirv_resource_type_flag_bits_ext : ktl::u32
{
v_all_ext = 0x7FFFFFFF,
v_sampler_bit_ext = (1U << 0),
v_sampled_image_bit_ext = (1U << 1),
v_read_only_image_bit_ext = (1U << 2),
v_read_write_image_bit_ext = (1U << 3),
v_combined_sampled_image_bit_ext = (1U << 4),
v_uniform_buffer_bit_ext = (1U << 5),
v_read_only_storage_buffer_bit_ext = (1U << 6),
v_read_write_storage_buffer_bit_ext = (1U << 7),
v_acceleration_structure_bit_ext = (1U << 8),
v_tensor_bit_arm = (1U << 9)
};

enum class address_command_flag_bits_khr : ktl::u32
{
v_protected_bit_khr = (1U << 0),
v_ully_bound_bit_khr = (1U << 1),
v_storage_buffer_usage_bit_khr = (1U << 2),
v_unknown_storage_buffer_usage_bit_khr = (1U << 3),
v_transform_feedback_buffer_usage_bit_khr = (1U << 4),
v_unknown_transform_feedback_buffer_usage_bit_khr = (1U << 5)
};

enum class data_graph_tosaquality_flag_bits_arm : ktl::u32
{
v_quality_accelerated_arm = (1U << 0),
v_quality_conformant_arm = (1U << 1),
v_quality_experimental_arm = (1U << 2),
v_quality_deprecated_arm = (1U << 3)
};

enum class data_graph_tosalevel_arm : ktl::u32
{
v_level_none_arm = 0,
v_level_8k_arm = 1
};

enum class data_graph_optical_flow_grid_size_flag_bits_arm : ktl::u32
{
v_unknown_arm = 0,
v_1x1_bit_arm = (1U << 0),
v_2x2_bit_arm = (1U << 1),
v_4x4_bit_arm = (1U << 2),
v_8x8_bit_arm = (1U << 3)
};

enum class data_graph_optical_flow_image_usage_flag_bits_arm : ktl::u32
{
v_unknown_arm = 0,
v_input_bit_arm = (1U << 0),
v_output_bit_arm = (1U << 1),
v_hint_bit_arm = (1U << 2),
v_cost_bit_arm = (1U << 3)
};

enum class data_graph_optical_flow_performance_level_arm : ktl::u32
{
v_unknown_arm = 0,
v_slow_arm = 1,
v_medium_arm = 2,
v_fast_arm = 3
};

enum class data_graph_pipeline_node_connection_type_arm : ktl::u32
{
v_optical_flow_input_arm = 1631000,
v_optical_flow_reference_arm = 1631001,
v_optical_flow_hint_arm = 1631002,
v_optical_flow_flow_vector_arm = 1631003,
v_optical_flow_cost_arm = 1631004
};

enum class data_graph_pipeline_node_type_arm : ktl::u32
{
v_optical_flow_arm = 1631000
};

enum class data_graph_optical_flow_create_flag_bits_arm : ktl::u32
{
v_enable_hint_bit_arm = (1U << 0),
v_enable_cost_bit_arm = (1U << 1),
v_reserved_30_bit_arm = (1U << 30)
};

enum class data_graph_optical_flow_execute_flag_bits_arm : ktl::u32
{
v_disable_temporal_hints_bit_arm = (1U << 0),
v_input_unchanged_bit_arm = (1U << 1),
v_reference_unchanged_bit_arm = (1U << 2),
v_input_is_previous_reference_bit_arm = (1U << 3),
v_reference_is_previous_input_bit_arm = (1U << 4)
};

using ray_tracing_invocation_reorder_mode_nv = ray_tracing_invocation_reorder_mode_ext;
using private_data_slot_create_flag_bits_ext = private_data_slot_create_flag_bits;
using descriptor_update_template_type_khr = descriptor_update_template_type;
using point_clipping_behavior_khr = point_clipping_behavior;
using queue_global_priority_khr = queue_global_priority;
using queue_global_priority_ext = queue_global_priority;
using time_domain_ext = time_domain_khr;
using resolve_mode_flag_bits_khr = resolve_mode_flag_bits;
using descriptor_binding_flag_bits_ext = descriptor_binding_flag_bits;
using semaphore_type_khr = semaphore_type;
using geometry_flag_bits_nv = geometry_flag_bits_khr;
using geometry_instance_flag_bits_nv = geometry_instance_flag_bits_khr;
using build_acceleration_structure_flag_bits_nv = build_acceleration_structure_flag_bits_khr;
using copy_acceleration_structure_mode_nv = copy_acceleration_structure_mode_khr;
using acceleration_structure_type_nv = acceleration_structure_type_khr;
using geometry_type_nv = geometry_type_khr;
using ray_tracing_shader_group_type_nv = ray_tracing_shader_group_type_khr;
using pipeline_creation_feedback_flag_bits_ext = pipeline_creation_feedback_flag_bits;
using semaphore_wait_flag_bits_khr = semaphore_wait_flag_bits;
using line_rasterization_mode_khr = line_rasterization_mode;
using line_rasterization_mode_ext = line_rasterization_mode;
using tool_purpose_flag_bits_ext = tool_purpose_flag_bits;
using access_flag_bits2khr = access_flag_bits2;
using pipeline_stage_flag_bits2khr = pipeline_stage_flag_bits2;
using host_image_copy_flag_bits_ext = host_image_copy_flag_bits;
using format_feature_flag_bits2khr = format_feature_flag_bits2;
using rendering_flag_bits_khr = rendering_flag_bits;
using pipeline_robustness_buffer_behavior_ext = pipeline_robustness_buffer_behavior;
using pipeline_robustness_image_behavior_ext = pipeline_robustness_image_behavior;
using device_fault_vendor_binary_header_version_ext = device_fault_vendor_binary_header_version_khr;
using memory_decompression_method_flag_bits_nv = memory_decompression_method_flag_bits_ext;
using pipeline_create_flag_bits2khr = pipeline_create_flag_bits2;
using buffer_usage_flag_bits2khr = buffer_usage_flag_bits2;
using scope_nv = scope_khr;
using component_type_nv = component_type_khr;
using external_memory_handle_type_flag_bits_khr = external_memory_handle_type_flag_bits;
using external_memory_feature_flag_bits_khr = external_memory_feature_flag_bits;
using external_semaphore_handle_type_flag_bits_khr = external_semaphore_handle_type_flag_bits;
using external_semaphore_feature_flag_bits_khr = external_semaphore_feature_flag_bits;
using semaphore_import_flag_bits_khr = semaphore_import_flag_bits;
using external_fence_handle_type_flag_bits_khr = external_fence_handle_type_flag_bits;
using external_fence_feature_flag_bits_khr = external_fence_feature_flag_bits;
using fence_import_flag_bits_khr = fence_import_flag_bits;
using peer_memory_feature_flag_bits_khr = peer_memory_feature_flag_bits;
using memory_allocate_flag_bits_khr = memory_allocate_flag_bits;
using tessellation_domain_origin_khr = tessellation_domain_origin;
using sampler_ycbcr_model_conversion_khr = sampler_ycbcr_model_conversion;
using sampler_ycbcr_range_khr = sampler_ycbcr_range;
using chroma_location_khr = chroma_location;
using sampler_reduction_mode_ext = sampler_reduction_mode;
using shader_float_controls_independence_khr = shader_float_controls_independence;
using submit_flag_bits_khr = submit_flag_bits;
using device_fault_address_type_ext = device_fault_address_type_khr;
using present_scaling_flag_bits_ext = present_scaling_flag_bits_khr;
using present_gravity_flag_bits_ext = present_gravity_flag_bits_khr;
using memory_unmap_flag_bits_khr = memory_unmap_flag_bits;
using driver_id_khr = driver_id;

template < typename T >
struct ptr_meta final
{
using parent = T::parent;
using type   = T::type;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = 0
};
};

struct opaque_instance;
using instance = opaque_instance *;
template <>
struct ptr_meta< instance > final
{
using parent = void;
using type = opaque_instance;
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
using type = opaque_physical_device;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_physical_device)
};
};

struct opaque_device;
using device = opaque_device *;
template <>
struct ptr_meta< device > final
{
using parent = opaque_physical_device;
using type = opaque_device;
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
using type = opaque_queue;
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
using type = opaque_command_buffer;
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
using type = opaque_device_memory;
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
using type = opaque_command_pool;
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
using type = opaque_buffer;
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
using type = opaque_buffer_view;
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
using type = opaque_image;
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
using type = opaque_image_view;
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
using type = opaque_shader_module;
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
using type = opaque_pipeline;
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
using type = opaque_pipeline_layout;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline_layout)
};
};

struct opaque_sampler;
using sampler = opaque_sampler *;
template <>
struct ptr_meta< sampler > final
{
using parent = opaque_device;
using type = opaque_sampler;
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
using type = opaque_descriptor_set;
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
using type = opaque_descriptor_set_layout;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_set_layout)
};
};

struct opaque_descriptor_pool;
using descriptor_pool = opaque_descriptor_pool *;
template <>
struct ptr_meta< descriptor_pool > final
{
using parent = opaque_device;
using type = opaque_descriptor_pool;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_pool)
};
};

struct opaque_fence;
using fence = opaque_fence *;
template <>
struct ptr_meta< fence > final
{
using parent = opaque_device;
using type = opaque_fence;
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
using type = opaque_semaphore;
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
using type = opaque_event;
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
using type = opaque_query_pool;
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
using type = opaque_framebuffer;
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
using type = opaque_render_pass;
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
using type = opaque_pipeline_cache;
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
using type = opaque_pipeline_binary_khr;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_pipeline_binary_khr)
};
};

struct opaque_indirect_commands_layout_nv;
using indirect_commands_layout_nv = opaque_indirect_commands_layout_nv *;
template <>
struct ptr_meta< indirect_commands_layout_nv > final
{
using parent = opaque_device;
using type = opaque_indirect_commands_layout_nv;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_indirect_commands_layout_nv)
};
};

struct opaque_indirect_commands_layout_ext;
using indirect_commands_layout_ext = opaque_indirect_commands_layout_ext *;
template <>
struct ptr_meta< indirect_commands_layout_ext > final
{
using parent = opaque_device;
using type = opaque_indirect_commands_layout_ext;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_indirect_commands_layout_ext)
};
};

struct opaque_indirect_execution_set_ext;
using indirect_execution_set_ext = opaque_indirect_execution_set_ext *;
template <>
struct ptr_meta< indirect_execution_set_ext > final
{
using parent = opaque_device;
using type = opaque_indirect_execution_set_ext;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_indirect_execution_set_ext)
};
};

struct opaque_descriptor_update_template;
using descriptor_update_template = opaque_descriptor_update_template *;
template <>
struct ptr_meta< descriptor_update_template > final
{
using parent = opaque_device;
using type = opaque_descriptor_update_template;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_descriptor_update_template)
};
};

using descriptor_update_template_khr = descriptor_update_template;

struct opaque_sampler_ycbcr_conversion;
using sampler_ycbcr_conversion = opaque_sampler_ycbcr_conversion *;
template <>
struct ptr_meta< sampler_ycbcr_conversion > final
{
using parent = opaque_device;
using type = opaque_sampler_ycbcr_conversion;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_sampler_ycbcr_conversion)
};
};

using sampler_ycbcr_conversion_khr = sampler_ycbcr_conversion;

struct opaque_validation_cache_ext;
using validation_cache_ext = opaque_validation_cache_ext *;
template <>
struct ptr_meta< validation_cache_ext > final
{
using parent = opaque_device;
using type = opaque_validation_cache_ext;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_validation_cache_ext)
};
};

struct opaque_acceleration_structure_khr;
using acceleration_structure_khr = opaque_acceleration_structure_khr *;
template <>
struct ptr_meta< acceleration_structure_khr > final
{
using parent = opaque_device;
using type = opaque_acceleration_structure_khr;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_acceleration_structure_khr)
};
};

struct opaque_acceleration_structure_nv;
using acceleration_structure_nv = opaque_acceleration_structure_nv *;
template <>
struct ptr_meta< acceleration_structure_nv > final
{
using parent = opaque_device;
using type = opaque_acceleration_structure_nv;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_acceleration_structure_nv)
};
};

struct opaque_performance_configuration_intel;
using performance_configuration_intel = opaque_performance_configuration_intel *;
template <>
struct ptr_meta< performance_configuration_intel > final
{
using parent = opaque_device;
using type = opaque_performance_configuration_intel;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_performance_configuration_intel)
};
};

struct opaque_buffer_collection_fuchsia;
using buffer_collection_fuchsia = opaque_buffer_collection_fuchsia *;
template <>
struct ptr_meta< buffer_collection_fuchsia > final
{
using parent = opaque_device;
using type = opaque_buffer_collection_fuchsia;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_buffer_collection_fuchsia)
};
};

struct opaque_deferred_operation_khr;
using deferred_operation_khr = opaque_deferred_operation_khr *;
template <>
struct ptr_meta< deferred_operation_khr > final
{
using parent = opaque_device;
using type = opaque_deferred_operation_khr;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_deferred_operation_khr)
};
};

struct opaque_private_data_slot;
using private_data_slot = opaque_private_data_slot *;
template <>
struct ptr_meta< private_data_slot > final
{
using parent = opaque_device;
using type = opaque_private_data_slot;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_private_data_slot)
};
};

using private_data_slot_ext = private_data_slot;

struct opaque_cu_module_nvx;
using cu_module_nvx = opaque_cu_module_nvx *;
template <>
struct ptr_meta< cu_module_nvx > final
{
using parent = opaque_device;
using type = opaque_cu_module_nvx;
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
using type = opaque_cu_function_nvx;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cu_function_nvx)
};
};

struct opaque_optical_flow_session_nv;
using optical_flow_session_nv = opaque_optical_flow_session_nv *;
template <>
struct ptr_meta< optical_flow_session_nv > final
{
using parent = opaque_device;
using type = opaque_optical_flow_session_nv;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_optical_flow_session_nv)
};
};

struct opaque_micromap_ext;
using micromap_ext = opaque_micromap_ext *;
template <>
struct ptr_meta< micromap_ext > final
{
using parent = opaque_device;
using type = opaque_micromap_ext;
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
using type = opaque_shader_ext;
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
using type = opaque_tensor_arm;
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
using type = opaque_tensor_view_arm;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_tensor_view_arm)
};
};

struct opaque_data_graph_pipeline_session_arm;
using data_graph_pipeline_session_arm = opaque_data_graph_pipeline_session_arm *;
template <>
struct ptr_meta< data_graph_pipeline_session_arm > final
{
using parent = opaque_device;
using type = opaque_data_graph_pipeline_session_arm;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_data_graph_pipeline_session_arm)
};
};

struct opaque_shader_instrumentation_arm;
using shader_instrumentation_arm = opaque_shader_instrumentation_arm *;
template <>
struct ptr_meta< shader_instrumentation_arm > final
{
using parent = opaque_device;
using type = opaque_shader_instrumentation_arm;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_shader_instrumentation_arm)
};
};

struct opaque_display_khr;
using display_khr = opaque_display_khr *;
template <>
struct ptr_meta< display_khr > final
{
using parent = opaque_physical_device;
using type = opaque_display_khr;
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
using type = opaque_display_mode_khr;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_display_mode_khr)
};
};

struct opaque_surface_khr;
using surface_khr = opaque_surface_khr *;
template <>
struct ptr_meta< surface_khr > final
{
using parent = opaque_instance;
using type = opaque_surface_khr;
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
using type = opaque_swapchain_khr;
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
using type = opaque_debug_report_callback_ext;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_debug_report_callback_ext)
};
};

struct opaque_debug_utils_messenger_ext;
using debug_utils_messenger_ext = opaque_debug_utils_messenger_ext *;
template <>
struct ptr_meta< debug_utils_messenger_ext > final
{
using parent = opaque_instance;
using type = opaque_debug_utils_messenger_ext;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_debug_utils_messenger_ext)
};
};

struct opaque_semaphore_sci_sync_pool_nv;
using semaphore_sci_sync_pool_nv = opaque_semaphore_sci_sync_pool_nv *;
template <>
struct ptr_meta< semaphore_sci_sync_pool_nv > final
{
using parent = opaque_device;
using type = opaque_semaphore_sci_sync_pool_nv;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_semaphore_sci_sync_pool_nv)
};
};

struct opaque_cuda_module_nv;
using cuda_module_nv = opaque_cuda_module_nv *;
template <>
struct ptr_meta< cuda_module_nv > final
{
using parent = opaque_device;
using type = opaque_cuda_module_nv;
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
using type = opaque_cuda_function_nv;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_cuda_function_nv)
};
};

struct opaque_external_compute_queue_nv;
using external_compute_queue_nv = opaque_external_compute_queue_nv *;
template <>
struct ptr_meta< external_compute_queue_nv > final
{
using parent = opaque_device;
using type = opaque_external_compute_queue_nv;
enum : std::underlying_type_t< ktl::api::object_type >
{
object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::v_external_compute_queue_nv)
};
};

union clear_color_value
{
float float32[4];
ktl::i32 int32[4];
ktl::i32 uint32[4];
};

union clear_value
{
ktl::api::clear_color_value color;
ktl::api::clear_depth_stencil_value depth_stencil;
};

union cluster_acceleration_structure_op_input_nv
{
ktl::api::cluster_acceleration_structure_clusters_bottom_level_input_nv* clusters_bottom_level;
ktl::api::cluster_acceleration_structure_triangle_cluster_input_nv* triangle_clusters;
ktl::api::cluster_acceleration_structure_move_objects_input_nv* move_objects;
};

union performance_counter_result_khr
{
ktl::i32 int32;
ktl::i64 int64;
ktl::i32 uint32;
ktl::u64 uint64;
float float32;
double float64;
};

union performance_value_data_intel
{
ktl::i32 value32;
ktl::u64 value64;
float value_float;
ktl::bool32 value_bool;
char* value_string;
};

union pipeline_executable_statistic_value_khr
{
ktl::bool32 b32;
ktl::i64 i64;
ktl::u64 u64;
double f64;
};

union device_or_host_address_khr
{
ktl::dvaddr device_address;
void* host_address;
};

union device_or_host_address_const_khr
{
ktl::dvaddr device_address;
void* host_address;
};

union device_or_host_address_const_amdx
{
ktl::dvaddr device_address;
void* host_address;
};

union acceleration_structure_geometry_data_khr
{
ktl::api::acceleration_structure_geometry_triangles_data_khr triangles;
ktl::api::acceleration_structure_geometry_aabbs_data_khr aabbs;
ktl::api::acceleration_structure_geometry_instances_data_khr instances;
};

union indirect_execution_set_info_ext
{
ktl::api::indirect_execution_set_pipeline_info_ext* pipeline_info;
ktl::api::indirect_execution_set_shader_info_ext* shader_info;
};

union indirect_commands_token_data_ext
{
ktl::api::indirect_commands_push_constant_token_ext* push_constant;
ktl::api::indirect_commands_vertex_buffer_token_ext* vertex_buffer;
ktl::api::indirect_commands_index_buffer_token_ext* index_buffer;
ktl::api::indirect_commands_execution_set_token_ext* execution_set;
};

union descriptor_data_ext
{
ktl::api::sampler* sampler;
ktl::api::descriptor_image_info* combined_image_sampler;
ktl::api::descriptor_image_info* input_attachment_image;
ktl::api::descriptor_image_info* sampled_image;
ktl::api::descriptor_image_info* storage_image;
ktl::api::descriptor_address_info_ext* uniform_texel_buffer;
ktl::api::descriptor_address_info_ext* storage_texel_buffer;
ktl::api::descriptor_address_info_ext* uniform_buffer;
ktl::api::descriptor_address_info_ext* storage_buffer;
ktl::dvaddr acceleration_structure;
};

union acceleration_structure_motion_instance_data_nv
{
ktl::api::acceleration_structure_instance_khr static_instance;
ktl::api::acceleration_structure_matrix_motion_instance_nv matrix_motion_instance;
ktl::api::acceleration_structure_srtmotion_instance_nv srt_motion_instance;
};

union resource_descriptor_data_ext
{
ktl::api::image_descriptor_info_ext* image;
ktl::api::texel_buffer_descriptor_info_ext* texel_buffer;
ktl::api::device_address_range_ext* address_range;
ktl::api::tensor_view_create_info_arm* tensor_arm;
};

union descriptor_mapping_source_data_ext
{
ktl::api::descriptor_mapping_source_constant_offset_ext constant_offset;
ktl::api::descriptor_mapping_source_push_index_ext push_index;
ktl::api::descriptor_mapping_source_indirect_index_ext indirect_index;
ktl::api::descriptor_mapping_source_indirect_index_array_ext indirect_index_array;
ktl::api::descriptor_mapping_source_heap_data_ext heap_data;
ktl::i32 push_data_offset;
ktl::i32 push_address_offset;
ktl::api::descriptor_mapping_source_indirect_address_ext indirect_address;
ktl::api::descriptor_mapping_source_shader_record_index_ext shader_record_index;
ktl::i32 shader_record_data_offset;
ktl::i32 shader_record_address_offset;
};

struct base_out_structure final
{
ktl::api::structure_type type;
ktl::api::base_out_structure * next = {};
};

struct base_in_structure final
{
ktl::api::structure_type type;
const ktl::api::base_in_structure * next = {};
};

struct offset2d final
{
ktl::i32 x;
ktl::i32 y;
};

struct offset3d final
{
ktl::i32 x;
ktl::i32 y;
ktl::i32 z;
};

struct extent2d final
{
ktl::i32 width;
ktl::i32 height;
};

struct extent3d final
{
ktl::i32 width;
ktl::i32 height;
ktl::i32 depth;
};

struct viewport final
{
float x;
float y;
float width;
float height;
float min_depth;
float max_depth;
};

struct rect2d final
{
ktl::api::offset2d offset;
ktl::api::extent2d extent;
};

struct clear_rect final
{
ktl::api::rect2d rect;
ktl::i32 base_array_layer;
ktl::i32 layer_count;
};

struct component_mapping final
{
ktl::api::component_swizzle r;
ktl::api::component_swizzle g;
ktl::api::component_swizzle b;
ktl::api::component_swizzle a;
};

struct physical_device_properties final
{
ktl::i32 api_version;
ktl::i32 driver_version;
ktl::i32 vendor_id;
ktl::i32 device_id;
ktl::api::physical_device_type device_type;
char device_name[KTL_API_MAX_PHYSICAL_DEVICE_NAME_SIZE];
ktl::u8 pipeline_cache_uuid[KTL_API_UUID_SIZE];
ktl::api::physical_device_limits limits;
ktl::api::physical_device_sparse_properties sparse_properties;
};

struct extension_properties final
{
char extension_name[KTL_API_MAX_EXTENSION_NAME_SIZE];
ktl::i32 spec_version;
};

struct layer_properties final
{
char layer_name[KTL_API_MAX_EXTENSION_NAME_SIZE];
ktl::i32 spec_version;
ktl::i32 implementation_version;
char description[KTL_API_MAX_DESCRIPTION_SIZE];
};

struct application_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_application_info;
const void * next = {};
const char * application_name = {};
ktl::i32 application_version;
const char * engine_name = {};
ktl::i32 engine_version;
ktl::i32 api_version;
};

struct allocation_callbacks final
{
void * user_data = {};
ktl::api::pfn_vk_allocation_function pfn_allocation;
ktl::api::pfn_vk_reallocation_function pfn_reallocation;
ktl::api::pfn_vk_free_function pfn_free;
ktl::api::pfn_vk_internal_allocation_notification pfn_internal_allocation = {};
ktl::api::pfn_vk_internal_free_notification pfn_internal_free = {};
};

struct device_queue_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_queue_create_info;
const void * next = {};
ktl::api::device_queue_create_flags flags = {};
ktl::i32 queue_family_index;
ktl::i32 queue_count;
const float * queue_priorities;
};

struct device_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_create_info;
const void * next = {};
ktl::api::device_create_flags flags = {};
ktl::i32 queue_create_info_count = {};
const ktl::api::device_queue_create_info * queue_create_infos;
ktl::i32 enabled_layer_count;
const char * enabled_layer_names;
ktl::i32 enabled_extension_count = {};
const char * enabled_extension_names;
const ktl::api::physical_device_features * enabled_features = {};
};

struct instance_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_instance_create_info;
const void * next = {};
ktl::api::instance_create_flags flags = {};
const ktl::api::application_info * application_info = {};
ktl::i32 enabled_layer_count = {};
const char * enabled_layer_names;
ktl::i32 enabled_extension_count = {};
const char * enabled_extension_names;
};

struct queue_family_properties final
{
ktl::api::queue_flags queue_flags = {};
ktl::i32 queue_count;
ktl::i32 timestamp_valid_bits;
ktl::api::extent3d min_image_transfer_granularity;
};

struct physical_device_memory_properties final
{
ktl::i32 memory_type_count;
ktl::api::memory_type memory_types[KTL_API_MAX_MEMORY_TYPES];
ktl::i32 memory_heap_count;
ktl::api::memory_heap memory_heaps[KTL_API_MAX_MEMORY_HEAPS];
};

struct memory_allocate_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_allocate_info;
const void * next = {};
ktl::dvsize allocation_size;
ktl::i32 memory_type_index;
};

struct memory_requirements final
{
ktl::dvsize size;
ktl::dvsize alignment;
ktl::i32 memory_type_bits;
};

struct sparse_image_format_properties final
{
ktl::api::image_aspect_flags aspect_mask = {};
ktl::api::extent3d image_granularity;
ktl::api::sparse_image_format_flags flags = {};
};

struct sparse_image_memory_requirements final
{
ktl::api::sparse_image_format_properties format_properties;
ktl::i32 image_mip_tail_first_lod;
ktl::dvsize image_mip_tail_size;
ktl::dvsize image_mip_tail_offset;
ktl::dvsize image_mip_tail_stride;
};

struct memory_type final
{
ktl::api::memory_property_flags property_flags = {};
ktl::i32 heap_index;
};

struct memory_heap final
{
ktl::dvsize size;
ktl::api::memory_heap_flags flags = {};
};

struct mapped_memory_range final
{
ktl::api::structure_type type = ktl::api::structure_type::v_mapped_memory_range;
const void * next = {};
ktl::api::device_memory memory;
ktl::dvsize offset;
ktl::dvsize size;
};

struct format_properties final
{
ktl::api::format_feature_flags linear_tiling_features = {};
ktl::api::format_feature_flags optimal_tiling_features = {};
ktl::api::format_feature_flags buffer_features = {};
};

struct image_format_properties final
{
ktl::api::extent3d max_extent;
ktl::i32 max_mip_levels;
ktl::i32 max_array_layers;
ktl::api::sample_count_flags sample_counts = {};
ktl::dvsize max_resource_size;
};

struct descriptor_buffer_info final
{
ktl::api::buffer buffer = {};
ktl::dvsize offset;
ktl::dvsize range;
};

struct descriptor_image_info final
{
ktl::api::sampler sampler;
ktl::api::image_view image_view;
ktl::api::image_layout image_layout;
};

struct write_descriptor_set final
{
ktl::api::structure_type type = ktl::api::structure_type::v_write_descriptor_set;
const void * next = {};
ktl::api::descriptor_set dst_set;
ktl::i32 dst_binding;
ktl::i32 dst_array_element;
ktl::i32 descriptor_count;
ktl::api::descriptor_type descriptor_type;
const ktl::api::descriptor_image_info * image_info;
const ktl::api::descriptor_buffer_info * buffer_info;
const ktl::api::buffer_view * texel_buffer_view;
};

struct copy_descriptor_set final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_descriptor_set;
const void * next = {};
ktl::api::descriptor_set src_set;
ktl::i32 src_binding;
ktl::i32 src_array_element;
ktl::api::descriptor_set dst_set;
ktl::i32 dst_binding;
ktl::i32 dst_array_element;
ktl::i32 descriptor_count;
};

struct buffer_usage_flags2create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_usage_flags_2_create_info;
const void * next = {};
ktl::api::buffer_usage_flags2 usage;
};

using buffer_usage_flags2create_info_khr = buffer_usage_flags2create_info;

struct buffer_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_create_info;
const void * next = {};
ktl::api::buffer_create_flags flags = {};
ktl::dvsize size;
ktl::api::buffer_usage_flags usage;
ktl::api::sharing_mode sharing_mode;
ktl::i32 queue_family_index_count = {};
const ktl::i32 * queue_family_indices;
};

struct buffer_view_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_view_create_info;
const void * next = {};
ktl::api::buffer_view_create_flags flags = {};
ktl::api::buffer buffer;
ktl::api::format format;
ktl::dvsize offset;
ktl::dvsize range;
};

struct image_subresource final
{
ktl::api::image_aspect_flags aspect_mask;
ktl::i32 mip_level;
ktl::i32 array_layer;
};

struct image_subresource_layers final
{
ktl::api::image_aspect_flags aspect_mask;
ktl::i32 mip_level;
ktl::i32 base_array_layer;
ktl::i32 layer_count;
};

struct image_subresource_range final
{
ktl::api::image_aspect_flags aspect_mask;
ktl::i32 base_mip_level;
ktl::i32 level_count;
ktl::i32 base_array_layer;
ktl::i32 layer_count;
};

struct memory_barrier final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_barrier;
const void * next = {};
ktl::api::access_flags src_access_mask = {};
ktl::api::access_flags dst_access_mask = {};
};

struct buffer_memory_barrier final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_memory_barrier;
const void * next = {};
ktl::api::access_flags src_access_mask;
ktl::api::access_flags dst_access_mask;
ktl::i32 src_queue_family_index;
ktl::i32 dst_queue_family_index;
ktl::api::buffer buffer;
ktl::dvsize offset;
ktl::dvsize size;
};

struct image_memory_barrier final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_memory_barrier;
const void * next = {};
ktl::api::access_flags src_access_mask;
ktl::api::access_flags dst_access_mask;
ktl::api::image_layout old_layout;
ktl::api::image_layout new_layout;
ktl::i32 src_queue_family_index;
ktl::i32 dst_queue_family_index;
ktl::api::image image;
ktl::api::image_subresource_range subresource_range;
};

struct image_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_create_info;
const void * next = {};
ktl::api::image_create_flags flags = {};
ktl::api::image_type image_type;
ktl::api::format format;
ktl::api::extent3d extent;
ktl::i32 mip_levels;
ktl::i32 array_layers;
ktl::api::sample_count_flag_bits samples;
ktl::api::image_tiling tiling;
ktl::api::image_usage_flags usage;
ktl::api::sharing_mode sharing_mode;
ktl::i32 queue_family_index_count = {};
const ktl::i32 * queue_family_indices;
ktl::api::image_layout initial_layout;
};

struct subresource_layout final
{
ktl::dvsize offset;
ktl::dvsize size;
ktl::dvsize row_pitch;
ktl::dvsize array_pitch;
ktl::dvsize depth_pitch;
};

struct image_view_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_view_create_info;
const void * next = {};
ktl::api::image_view_create_flags flags = {};
ktl::api::image image;
ktl::api::image_view_type view_type;
ktl::api::format format;
ktl::api::component_mapping components;
ktl::api::image_subresource_range subresource_range;
};

struct buffer_copy final
{
ktl::dvsize src_offset;
ktl::dvsize dst_offset;
ktl::dvsize size;
};

struct sparse_memory_bind final
{
ktl::dvsize resource_offset;
ktl::dvsize size;
ktl::api::device_memory memory = {};
ktl::dvsize memory_offset;
ktl::api::sparse_memory_bind_flags flags = {};
};

struct sparse_image_memory_bind final
{
ktl::api::image_subresource subresource;
ktl::api::offset3d offset;
ktl::api::extent3d extent;
ktl::api::device_memory memory = {};
ktl::dvsize memory_offset;
ktl::api::sparse_memory_bind_flags flags = {};
};

struct sparse_buffer_memory_bind_info final
{
ktl::api::buffer buffer;
ktl::i32 bind_count;
const ktl::api::sparse_memory_bind * binds;
};

struct sparse_image_opaque_memory_bind_info final
{
ktl::api::image image;
ktl::i32 bind_count;
const ktl::api::sparse_memory_bind * binds;
};

struct sparse_image_memory_bind_info final
{
ktl::api::image image;
ktl::i32 bind_count;
const ktl::api::sparse_image_memory_bind * binds;
};

struct bind_sparse_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_sparse_info;
const void * next = {};
ktl::i32 wait_semaphore_count = {};
const ktl::api::semaphore * wait_semaphores;
ktl::i32 buffer_bind_count = {};
const ktl::api::sparse_buffer_memory_bind_info * buffer_binds;
ktl::i32 image_opaque_bind_count = {};
const ktl::api::sparse_image_opaque_memory_bind_info * image_opaque_binds;
ktl::i32 image_bind_count = {};
const ktl::api::sparse_image_memory_bind_info * image_binds;
ktl::i32 signal_semaphore_count = {};
const ktl::api::semaphore * signal_semaphores;
};

struct image_copy final
{
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offset;
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offset;
ktl::api::extent3d extent;
};

struct image_blit final
{
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offsets[2];
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offsets[2];
};

struct buffer_image_copy final
{
ktl::dvsize buffer_offset;
ktl::i32 buffer_row_length;
ktl::i32 buffer_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};

struct strided_device_address_range_khr final
{
ktl::dvaddr address = {};
ktl::dvsize size;
ktl::dvsize stride;
};

struct copy_memory_indirect_command_khr final
{
ktl::dvaddr src_address;
ktl::dvaddr dst_address;
ktl::dvsize size;
};

using copy_memory_indirect_command_nv = copy_memory_indirect_command_khr;

struct copy_memory_indirect_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_memory_indirect_info_khr;
const void * next = {};
ktl::api::address_copy_flags_khr src_copy_flags = {};
ktl::api::address_copy_flags_khr dst_copy_flags = {};
ktl::i32 copy_count;
ktl::api::strided_device_address_range_khr copy_address_range;
};

struct copy_memory_to_image_indirect_command_khr final
{
ktl::dvaddr src_address;
ktl::i32 buffer_row_length;
ktl::i32 buffer_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};

using copy_memory_to_image_indirect_command_nv = copy_memory_to_image_indirect_command_khr;

struct copy_memory_to_image_indirect_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_memory_to_image_indirect_info_khr;
const void * next = {};
ktl::api::address_copy_flags_khr src_copy_flags = {};
ktl::i32 copy_count;
ktl::api::strided_device_address_range_khr copy_address_range;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
const ktl::api::image_subresource_layers * image_subresources;
};

struct image_resolve final
{
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offset;
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offset;
ktl::api::extent3d extent;
};

struct shader_module_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_shader_module_create_info;
const void * next = {};
ktl::api::shader_module_create_flags flags = {};
ktl::usize code_size;
const ktl::i32 * code;
};

struct descriptor_set_layout_binding final
{
ktl::i32 binding;
ktl::api::descriptor_type descriptor_type;
ktl::i32 descriptor_count = {};
ktl::api::shader_stage_flags stage_flags;
const ktl::api::sampler * immutable_samplers = {};
};

struct descriptor_set_layout_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_layout_create_info;
const void * next = {};
ktl::api::descriptor_set_layout_create_flags flags = {};
ktl::i32 binding_count = {};
const ktl::api::descriptor_set_layout_binding * bindings;
};

struct descriptor_pool_size final
{
ktl::api::descriptor_type type;
ktl::i32 descriptor_count;
};

struct descriptor_pool_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_pool_create_info;
const void * next = {};
ktl::api::descriptor_pool_create_flags flags = {};
ktl::i32 max_sets;
ktl::i32 pool_size_count = {};
const ktl::api::descriptor_pool_size * pool_sizes;
};

struct descriptor_set_allocate_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_allocate_info;
const void * next = {};
ktl::api::descriptor_pool descriptor_pool;
ktl::i32 descriptor_set_count;
const ktl::api::descriptor_set_layout * set_layouts;
};

struct specialization_map_entry final
{
const ktl::i32 constant_id;
ktl::i32 offset;
ktl::usize size;
};

struct specialization_info final
{
ktl::i32 map_entry_count = {};
const ktl::api::specialization_map_entry * map_entries;
ktl::usize data_size = {};
const void * data;
};

struct pipeline_shader_stage_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_shader_stage_create_info;
const void * next = {};
ktl::api::pipeline_shader_stage_create_flags flags = {};
ktl::api::shader_stage_flag_bits stage;
ktl::api::shader_module module = {};
const char * name;
const char * name = {};
const ktl::api::specialization_info * specialization_info = {};
};

struct compute_pipeline_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_compute_pipeline_create_info;
const void * next = {};
ktl::api::pipeline_create_flags flags = {};
ktl::api::pipeline_shader_stage_create_info stage;
ktl::api::pipeline_layout layout = {};
ktl::api::pipeline base_pipeline_handle = {};
ktl::i32 base_pipeline_index;
};

struct compute_pipeline_indirect_buffer_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_compute_pipeline_indirect_buffer_info_nv;
const void * next = {};
ktl::dvaddr device_address;
ktl::dvsize size;
ktl::dvaddr pipeline_device_address_capture_replay = {};
};

struct pipeline_create_flags2create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_create_flags_2_create_info;
const void * next = {};
ktl::api::pipeline_create_flags2 flags = {};
};

using pipeline_create_flags2create_info_khr = pipeline_create_flags2create_info;

struct vertex_input_binding_description final
{
ktl::i32 binding;
ktl::i32 stride;
ktl::api::vertex_input_rate input_rate;
};

struct vertex_input_attribute_description final
{
ktl::i32 location;
ktl::i32 binding;
ktl::api::format format;
ktl::i32 offset;
};

struct pipeline_vertex_input_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_vertex_input_state_create_info;
const void * next = {};
ktl::api::pipeline_vertex_input_state_create_flags flags = {};
ktl::i32 vertex_binding_description_count = {};
const ktl::api::vertex_input_binding_description * vertex_binding_descriptions;
ktl::i32 vertex_attribute_description_count = {};
const ktl::api::vertex_input_attribute_description * vertex_attribute_descriptions;
};

struct pipeline_input_assembly_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_input_assembly_state_create_info;
const void * next = {};
ktl::api::pipeline_input_assembly_state_create_flags flags = {};
ktl::api::primitive_topology topology;
ktl::bool32 primitive_restart_enable;
};

struct pipeline_tessellation_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_tessellation_state_create_info;
const void * next = {};
ktl::api::pipeline_tessellation_state_create_flags flags = {};
ktl::i32 patch_control_points;
};

struct pipeline_viewport_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_state_create_info;
const void * next = {};
ktl::api::pipeline_viewport_state_create_flags flags = {};
ktl::i32 viewport_count = {};
const ktl::api::viewport * viewports = {};
ktl::i32 scissor_count = {};
const ktl::api::rect2d * scissors = {};
};

struct pipeline_rasterization_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rasterization_state_create_info;
const void * next = {};
ktl::api::pipeline_rasterization_state_create_flags flags = {};
ktl::bool32 depth_clamp_enable;
ktl::bool32 rasterizer_discard_enable;
ktl::api::polygon_mode polygon_mode;
ktl::api::cull_mode_flags cull_mode = {};
ktl::api::front_face front_face;
ktl::bool32 depth_bias_enable;
float depth_bias_constant_factor;
float depth_bias_clamp;
float depth_bias_slope_factor;
float line_width;
};

struct pipeline_multisample_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_multisample_state_create_info;
const void * next = {};
ktl::api::pipeline_multisample_state_create_flags flags = {};
ktl::api::sample_count_flag_bits rasterization_samples;
ktl::bool32 sample_shading_enable;
float min_sample_shading;
const ktl::spmask * sample_mask = {};
ktl::bool32 alpha_to_coverage_enable;
ktl::bool32 alpha_to_one_enable;
};

struct pipeline_color_blend_attachment_state final
{
ktl::bool32 blend_enable;
ktl::api::blend_factor src_color_blend_factor;
ktl::api::blend_factor dst_color_blend_factor;
ktl::api::blend_op color_blend_op;
ktl::api::blend_factor src_alpha_blend_factor;
ktl::api::blend_factor dst_alpha_blend_factor;
ktl::api::blend_op alpha_blend_op;
ktl::api::color_component_flags color_write_mask = {};
};

struct pipeline_color_blend_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_color_blend_state_create_info;
const void * next = {};
ktl::api::pipeline_color_blend_state_create_flags flags = {};
ktl::bool32 logic_op_enable;
ktl::api::logic_op logic_op;
ktl::i32 attachment_count = {};
const ktl::api::pipeline_color_blend_attachment_state * attachments = {};
float blend_constants[4];
};

struct pipeline_dynamic_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_dynamic_state_create_info;
const void * next = {};
ktl::api::pipeline_dynamic_state_create_flags flags = {};
ktl::i32 dynamic_state_count = {};
const ktl::api::dynamic_state * dynamic_states;
};

struct stencil_op_state final
{
ktl::api::stencil_op fail_op;
ktl::api::stencil_op pass_op;
ktl::api::stencil_op depth_fail_op;
ktl::api::compare_op compare_op;
ktl::i32 compare_mask;
ktl::i32 write_mask;
ktl::i32 reference;
};

struct pipeline_depth_stencil_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_depth_stencil_state_create_info;
const void * next = {};
ktl::api::pipeline_depth_stencil_state_create_flags flags = {};
ktl::bool32 depth_test_enable;
ktl::bool32 depth_write_enable;
ktl::api::compare_op depth_compare_op;
ktl::bool32 depth_bounds_test_enable;
ktl::bool32 stencil_test_enable;
ktl::api::stencil_op_state front;
ktl::api::stencil_op_state back;
float min_depth_bounds;
float max_depth_bounds;
};

struct graphics_pipeline_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_graphics_pipeline_create_info;
const void * next = {};
ktl::api::pipeline_create_flags flags = {};
ktl::i32 stage_count = {};
const ktl::api::pipeline_shader_stage_create_info * stages = {};
const ktl::api::pipeline_shader_stage_create_info * stages;
const ktl::api::pipeline_vertex_input_state_create_info * vertex_input_state = {};
const ktl::api::pipeline_input_assembly_state_create_info * input_assembly_state = {};
const ktl::api::pipeline_tessellation_state_create_info * tessellation_state = {};
const ktl::api::pipeline_viewport_state_create_info * viewport_state = {};
const ktl::api::pipeline_rasterization_state_create_info * rasterization_state = {};
const ktl::api::pipeline_multisample_state_create_info * multisample_state = {};
const ktl::api::pipeline_depth_stencil_state_create_info * depth_stencil_state = {};
const ktl::api::pipeline_color_blend_state_create_info * color_blend_state = {};
const ktl::api::pipeline_dynamic_state_create_info * dynamic_state = {};
ktl::api::pipeline_layout layout = {};
ktl::api::render_pass render_pass = {};
ktl::i32 subpass;
ktl::api::pipeline base_pipeline_handle = {};
ktl::i32 base_pipeline_index;
};

struct pipeline_cache_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_cache_create_info;
const void * next = {};
ktl::api::pipeline_cache_create_flags flags = {};
ktl::usize initial_data_size = {};
ktl::usize initial_data_size;
const void * initial_data;
};

struct pipeline_cache_header_version_one final
{
ktl::i32 header_size;
ktl::api::pipeline_cache_header_version header_version;
ktl::i32 vendor_id;
ktl::i32 device_id;
ktl::u8 pipeline_cache_uuid[KTL_API_UUID_SIZE];
};

struct pipeline_cache_stage_validation_index_entry final
{
ktl::u64 code_size;
ktl::u64 code_offset;
};

struct pipeline_cache_safety_critical_index_entry final
{
ktl::u8 pipeline_identifier[KTL_API_UUID_SIZE];
ktl::u64 pipeline_memory_size;
ktl::u64 json_size;
ktl::u64 json_offset;
ktl::i32 stage_index_count;
ktl::i32 stage_index_stride;
ktl::u64 stage_index_offset;
};

struct pipeline_cache_header_version_safety_critical_one final
{
ktl::api::pipeline_cache_header_version_one header_version_one;
ktl::api::pipeline_cache_validation_version validation_version;
ktl::i32 implementation_data;
ktl::i32 pipeline_index_count;
ktl::i32 pipeline_index_stride;
ktl::u64 pipeline_index_offset;
};

struct pipeline_cache_header_version_data_graph_qcom final
{
ktl::i32 header_size;
ktl::api::pipeline_cache_header_version header_version;
ktl::api::data_graph_model_cache_type_qcom cache_type;
ktl::i32 cache_version;
ktl::i32 toolchain_version[KTL_API_DATA_GRAPH_MODEL_TOOLCHAIN_VERSION_LENGTH_QCOM];
};

struct push_constant_range final
{
ktl::api::shader_stage_flags stage_flags;
ktl::i32 offset;
ktl::i32 size;
};

struct pipeline_binary_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_binary_create_info_khr;
const void * next = {};
const ktl::api::pipeline_binary_keys_and_data_khr * keys_and_data_info = {};
ktl::api::pipeline pipeline = {};
const ktl::api::pipeline_create_info_khr * pipeline_create_info = {};
};

struct pipeline_binary_handles_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_binary_handles_info_khr;
const void * next = {};
ktl::i32 pipeline_binary_count;
ktl::api::pipeline_binary_khr * pipeline_binaries = {};
};

struct pipeline_binary_data_khr final
{
ktl::usize data_size;
void * data;
};

struct pipeline_binary_keys_and_data_khr final
{
ktl::i32 binary_count;
const ktl::api::pipeline_binary_key_khr * pipeline_binary_keys;
const ktl::api::pipeline_binary_data_khr * pipeline_binary_data;
};

struct pipeline_binary_key_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_binary_key_khr;
void * next = {};
ktl::i32 key_size;
ktl::u8 key[KTL_API_MAX_PIPELINE_BINARY_KEY_SIZE_KHR];
};

struct pipeline_binary_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_binary_info_khr;
const void * next = {};
ktl::i32 binary_count = {};
const ktl::api::pipeline_binary_khr * pipeline_binaries;
};

struct release_captured_pipeline_data_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_release_captured_pipeline_data_info_khr;
void * next = {};
ktl::api::pipeline pipeline;
};

struct pipeline_binary_data_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_binary_data_info_khr;
void * next = {};
ktl::api::pipeline_binary_khr pipeline_binary;
};

struct pipeline_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_create_info_khr;
void * next = {};
};

struct pipeline_layout_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_layout_create_info;
const void * next = {};
ktl::api::pipeline_layout_create_flags flags = {};
ktl::i32 set_layout_count = {};
const ktl::api::descriptor_set_layout * set_layouts;
const ktl::i32 push_constant_range_count = {};
const ktl::api::push_constant_range * push_constant_ranges;
};

struct sampler_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_create_info;
const void * next = {};
ktl::api::sampler_create_flags flags = {};
ktl::api::filter mag_filter;
ktl::api::filter min_filter;
ktl::api::sampler_mipmap_mode mipmap_mode;
ktl::api::sampler_address_mode address_mode_u;
ktl::api::sampler_address_mode address_mode_v;
ktl::api::sampler_address_mode address_mode_w;
float mip_lod_bias;
ktl::bool32 anisotropy_enable;
float max_anisotropy;
ktl::bool32 compare_enable;
ktl::api::compare_op compare_op;
float min_lod;
float max_lod;
ktl::api::border_color border_color;
ktl::bool32 unnormalized_coordinates;
};

struct command_pool_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_pool_create_info;
const void * next = {};
ktl::api::command_pool_create_flags flags = {};
ktl::i32 queue_family_index;
};

struct command_buffer_allocate_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_buffer_allocate_info;
const void * next = {};
ktl::api::command_pool command_pool;
ktl::api::command_buffer_level level;
ktl::i32 command_buffer_count;
};

struct command_buffer_inheritance_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_buffer_inheritance_info;
const void * next = {};
ktl::api::render_pass render_pass = {};
ktl::i32 subpass;
ktl::api::framebuffer framebuffer = {};
ktl::bool32 occlusion_query_enable;
ktl::api::query_control_flags query_flags = {};
ktl::api::query_pipeline_statistic_flags pipeline_statistics = {};
};

struct command_buffer_begin_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_buffer_begin_info;
const void * next = {};
ktl::api::command_buffer_usage_flags flags = {};
const ktl::api::command_buffer_inheritance_info * inheritance_info = {};
};

struct render_pass_begin_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_begin_info;
const void * next = {};
ktl::api::render_pass render_pass;
ktl::api::framebuffer framebuffer;
ktl::api::rect2d render_area;
ktl::i32 clear_value_count = {};
const ktl::api::clear_value * clear_values;
};

struct clear_depth_stencil_value final
{
float depth;
ktl::i32 stencil;
};

struct clear_attachment final
{
ktl::api::image_aspect_flags aspect_mask;
ktl::i32 color_attachment;
ktl::api::clear_value clear_value;
};

struct attachment_description final
{
ktl::api::attachment_description_flags flags = {};
ktl::api::format format;
ktl::api::sample_count_flag_bits samples;
ktl::api::attachment_load_op load_op;
ktl::api::attachment_store_op store_op;
ktl::api::attachment_load_op stencil_load_op;
ktl::api::attachment_store_op stencil_store_op;
ktl::api::image_layout initial_layout;
ktl::api::image_layout final_layout;
};

struct attachment_reference final
{
ktl::i32 attachment;
ktl::api::image_layout layout;
};

struct subpass_description final
{
ktl::api::subpass_description_flags flags = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::i32 input_attachment_count = {};
const ktl::api::attachment_reference * input_attachments;
ktl::i32 color_attachment_count = {};
const ktl::api::attachment_reference * color_attachments;
const ktl::api::attachment_reference * resolve_attachments = {};
const ktl::api::attachment_reference * depth_stencil_attachment = {};
ktl::i32 preserve_attachment_count = {};
const ktl::i32 * preserve_attachments;
};

struct subpass_dependency final
{
ktl::i32 src_subpass;
ktl::i32 dst_subpass;
ktl::api::pipeline_stage_flags src_stage_mask = {};
ktl::api::pipeline_stage_flags dst_stage_mask = {};
ktl::api::access_flags src_access_mask = {};
ktl::api::access_flags dst_access_mask = {};
ktl::api::dependency_flags dependency_flags = {};
};

struct render_pass_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_create_info;
const void * next = {};
ktl::api::render_pass_create_flags flags = {};
ktl::i32 attachment_count = {};
const ktl::api::attachment_description * attachments;
ktl::i32 subpass_count;
const ktl::api::subpass_description * subpasses;
ktl::i32 dependency_count = {};
const ktl::api::subpass_dependency * dependencies;
};

struct event_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_event_create_info;
const void * next = {};
ktl::api::event_create_flags flags = {};
};

struct fence_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_fence_create_info;
const void * next = {};
ktl::api::fence_create_flags flags = {};
};

struct physical_device_features final
{
ktl::bool32 robust_buffer_access;
ktl::bool32 full_draw_index_uint32;
ktl::bool32 image_cube_array;
ktl::bool32 independent_blend;
ktl::bool32 geometry_shader;
ktl::bool32 tessellation_shader;
ktl::bool32 sample_rate_shading;
ktl::bool32 dual_src_blend;
ktl::bool32 logic_op;
ktl::bool32 multi_draw_indirect;
ktl::bool32 draw_indirect_first_instance;
ktl::bool32 depth_clamp;
ktl::bool32 depth_bias_clamp;
ktl::bool32 fill_mode_non_solid;
ktl::bool32 depth_bounds;
ktl::bool32 wide_lines;
ktl::bool32 large_points;
ktl::bool32 alpha_to_one;
ktl::bool32 multi_viewport;
ktl::bool32 sampler_anisotropy;
ktl::bool32 texture_compression_etc2;
ktl::bool32 texture_compression_astc__ldr;
ktl::bool32 texture_compression_bc;
ktl::bool32 occlusion_query_precise;
ktl::bool32 pipeline_statistics_query;
ktl::bool32 vertex_pipeline_stores_and_atomics;
ktl::bool32 fragment_stores_and_atomics;
ktl::bool32 shader_tessellation_and_geometry_point_size;
ktl::bool32 shader_image_gather_extended;
ktl::bool32 shader_storage_image_extended_formats;
ktl::bool32 shader_storage_image_multisample;
ktl::bool32 shader_storage_image_read_without_format;
ktl::bool32 shader_storage_image_write_without_format;
ktl::bool32 shader_uniform_buffer_array_dynamic_indexing;
ktl::bool32 shader_sampled_image_array_dynamic_indexing;
ktl::bool32 shader_storage_buffer_array_dynamic_indexing;
ktl::bool32 shader_storage_image_array_dynamic_indexing;
ktl::bool32 shader_clip_distance;
ktl::bool32 shader_cull_distance;
ktl::bool32 shader_float64;
ktl::bool32 shader_int64;
ktl::bool32 shader_int16;
ktl::bool32 shader_resource_residency;
ktl::bool32 shader_resource_min_lod;
ktl::bool32 sparse_binding;
ktl::bool32 sparse_residency_buffer;
ktl::bool32 sparse_residency_image2d;
ktl::bool32 sparse_residency_image3d;
ktl::bool32 sparse_residency2samples;
ktl::bool32 sparse_residency4samples;
ktl::bool32 sparse_residency8samples;
ktl::bool32 sparse_residency16samples;
ktl::bool32 sparse_residency_aliased;
ktl::bool32 variable_multisample_rate;
ktl::bool32 inherited_queries;
};

struct physical_device_sparse_properties final
{
ktl::bool32 residency_standard2dblock_shape;
ktl::bool32 residency_standard2dmultisample_block_shape;
ktl::bool32 residency_standard3dblock_shape;
ktl::bool32 residency_aligned_mip_size;
ktl::bool32 residency_non_resident_strict;
};

struct physical_device_limits final
{
ktl::i32 max_image_dimension1d;
ktl::i32 max_image_dimension2d;
ktl::i32 max_image_dimension3d;
ktl::i32 max_image_dimension_cube;
ktl::i32 max_image_array_layers;
ktl::i32 max_texel_buffer_elements;
ktl::i32 max_uniform_buffer_range;
ktl::i32 max_storage_buffer_range;
const ktl::i32 max_push_constants_size;
ktl::i32 max_memory_allocation_count;
ktl::i32 max_sampler_allocation_count;
ktl::dvsize buffer_image_granularity;
ktl::dvsize sparse_address_space_size;
ktl::i32 max_bound_descriptor_sets;
ktl::i32 max_per_stage_descriptor_samplers;
ktl::i32 max_per_stage_descriptor_uniform_buffers;
ktl::i32 max_per_stage_descriptor_storage_buffers;
ktl::i32 max_per_stage_descriptor_sampled_images;
ktl::i32 max_per_stage_descriptor_storage_images;
ktl::i32 max_per_stage_descriptor_input_attachments;
ktl::i32 max_per_stage_resources;
ktl::i32 max_descriptor_set_samplers;
ktl::i32 max_descriptor_set_uniform_buffers;
ktl::i32 max_descriptor_set_uniform_buffers_dynamic;
ktl::i32 max_descriptor_set_storage_buffers;
ktl::i32 max_descriptor_set_storage_buffers_dynamic;
ktl::i32 max_descriptor_set_sampled_images;
ktl::i32 max_descriptor_set_storage_images;
ktl::i32 max_descriptor_set_input_attachments;
ktl::i32 max_vertex_input_attributes;
ktl::i32 max_vertex_input_bindings;
ktl::i32 max_vertex_input_attribute_offset;
ktl::i32 max_vertex_input_binding_stride;
ktl::i32 max_vertex_output_components;
ktl::i32 max_tessellation_generation_level;
ktl::i32 max_tessellation_patch_size;
ktl::i32 max_tessellation_control_per_vertex_input_components;
ktl::i32 max_tessellation_control_per_vertex_output_components;
ktl::i32 max_tessellation_control_per_patch_output_components;
ktl::i32 max_tessellation_control_total_output_components;
ktl::i32 max_tessellation_evaluation_input_components;
ktl::i32 max_tessellation_evaluation_output_components;
ktl::i32 max_geometry_shader_invocations;
ktl::i32 max_geometry_input_components;
ktl::i32 max_geometry_output_components;
ktl::i32 max_geometry_output_vertices;
ktl::i32 max_geometry_total_output_components;
ktl::i32 max_fragment_input_components;
ktl::i32 max_fragment_output_attachments;
ktl::i32 max_fragment_dual_src_attachments;
ktl::i32 max_fragment_combined_output_resources;
ktl::i32 max_compute_shared_memory_size;
ktl::i32 max_compute_work_group_count[3];
ktl::i32 max_compute_work_group_invocations;
ktl::i32 max_compute_work_group_size[3];
ktl::i32 sub_pixel_precision_bits;
ktl::i32 sub_texel_precision_bits;
ktl::i32 mipmap_precision_bits;
ktl::i32 max_draw_indexed_index_value;
ktl::i32 max_draw_indirect_count;
float max_sampler_lod_bias;
float max_sampler_anisotropy;
ktl::i32 max_viewports;
ktl::i32 max_viewport_dimensions[2];
float viewport_bounds_range[2];
ktl::i32 viewport_sub_pixel_bits;
ktl::usize min_memory_map_alignment;
ktl::dvsize min_texel_buffer_offset_alignment;
ktl::dvsize min_uniform_buffer_offset_alignment;
ktl::dvsize min_storage_buffer_offset_alignment;
ktl::i32 min_texel_offset;
ktl::i32 max_texel_offset;
ktl::i32 min_texel_gather_offset;
ktl::i32 max_texel_gather_offset;
float min_interpolation_offset;
float max_interpolation_offset;
ktl::i32 sub_pixel_interpolation_offset_bits;
ktl::i32 max_framebuffer_width;
ktl::i32 max_framebuffer_height;
ktl::i32 max_framebuffer_layers;
ktl::api::sample_count_flags framebuffer_color_sample_counts = {};
ktl::api::sample_count_flags framebuffer_depth_sample_counts = {};
ktl::api::sample_count_flags framebuffer_stencil_sample_counts = {};
ktl::api::sample_count_flags framebuffer_no_attachments_sample_counts = {};
ktl::i32 max_color_attachments;
ktl::api::sample_count_flags sampled_image_color_sample_counts = {};
ktl::api::sample_count_flags sampled_image_integer_sample_counts = {};
ktl::api::sample_count_flags sampled_image_depth_sample_counts = {};
ktl::api::sample_count_flags sampled_image_stencil_sample_counts = {};
ktl::api::sample_count_flags storage_image_sample_counts = {};
ktl::i32 max_sample_mask_words;
ktl::bool32 timestamp_compute_and_graphics;
float timestamp_period;
ktl::i32 max_clip_distances;
ktl::i32 max_cull_distances;
ktl::i32 max_combined_clip_and_cull_distances;
ktl::i32 discrete_queue_priorities;
float point_size_range[2];
float line_width_range[2];
float point_size_granularity;
float line_width_granularity;
ktl::bool32 strict_lines;
ktl::bool32 standard_sample_locations;
ktl::dvsize optimal_buffer_copy_offset_alignment;
ktl::dvsize optimal_buffer_copy_row_pitch_alignment;
ktl::dvsize non_coherent_atom_size;
};

struct semaphore_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_create_info;
const void * next = {};
ktl::api::semaphore_create_flags flags = {};
};

struct query_pool_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_query_pool_create_info;
const void * next = {};
ktl::api::query_pool_create_flags flags = {};
ktl::api::query_type query_type;
ktl::i32 query_count;
ktl::api::query_pipeline_statistic_flags pipeline_statistics = {};
};

struct framebuffer_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_framebuffer_create_info;
const void * next = {};
ktl::api::framebuffer_create_flags flags = {};
ktl::api::render_pass render_pass;
ktl::i32 attachment_count = {};
const ktl::api::image_view * attachments;
ktl::i32 width;
ktl::i32 height;
ktl::i32 layers;
};

struct draw_indirect_command final
{
ktl::i32 vertex_count;
ktl::i32 instance_count;
ktl::i32 first_vertex;
ktl::i32 first_instance;
};

struct draw_indexed_indirect_command final
{
ktl::i32 index_count;
ktl::i32 instance_count;
ktl::i32 first_index;
ktl::i32 vertex_offset;
ktl::i32 first_instance;
};

struct dispatch_indirect_command final
{
ktl::i32 x;
ktl::i32 y;
ktl::i32 z;
};

struct multi_draw_info_ext final
{
ktl::i32 first_vertex;
ktl::i32 vertex_count;
};

struct multi_draw_indexed_info_ext final
{
ktl::i32 first_index;
ktl::i32 index_count;
ktl::i32 vertex_offset;
};

struct submit_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_submit_info;
const void * next = {};
ktl::i32 wait_semaphore_count = {};
const ktl::api::semaphore * wait_semaphores;
const ktl::api::pipeline_stage_flags * wait_dst_stage_mask;
ktl::i32 command_buffer_count = {};
const ktl::api::command_buffer * command_buffers;
ktl::i32 signal_semaphore_count = {};
const ktl::api::semaphore * signal_semaphores;
};

struct display_properties_khr final
{
ktl::api::display_khr display;
const char * display_name;
ktl::api::extent2d physical_dimensions;
ktl::api::extent2d physical_resolution;
ktl::api::surface_transform_flags_khr supported_transforms = {};
ktl::bool32 plane_reorder_possible;
ktl::bool32 persistent_content;
};

struct display_plane_properties_khr final
{
ktl::api::display_khr current_display;
ktl::i32 current_stack_index;
};

struct display_mode_parameters_khr final
{
ktl::api::extent2d visible_region;
ktl::i32 refresh_rate;
};

struct display_mode_properties_khr final
{
ktl::api::display_mode_khr display_mode;
ktl::api::display_mode_parameters_khr parameters;
};

struct display_mode_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_mode_create_info_khr;
const void * next = {};
ktl::api::display_mode_create_flags_khr flags = {};
ktl::api::display_mode_parameters_khr parameters;
};

struct display_plane_capabilities_khr final
{
ktl::api::display_plane_alpha_flags_khr supported_alpha = {};
ktl::api::offset2d min_src_position;
ktl::api::offset2d max_src_position;
ktl::api::extent2d min_src_extent;
ktl::api::extent2d max_src_extent;
ktl::api::offset2d min_dst_position;
ktl::api::offset2d max_dst_position;
ktl::api::extent2d min_dst_extent;
ktl::api::extent2d max_dst_extent;
};

struct display_surface_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_surface_create_info_khr;
const void * next = {};
ktl::api::display_surface_create_flags_khr flags = {};
ktl::api::display_mode_khr display_mode;
ktl::i32 plane_index;
ktl::i32 plane_stack_index;
ktl::api::surface_transform_flag_bits_khr transform;
float global_alpha;
ktl::api::display_plane_alpha_flag_bits_khr alpha_mode;
ktl::api::extent2d image_extent;
};

struct display_surface_stereo_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_surface_stereo_create_info_nv;
const void * next = {};
ktl::api::display_surface_stereo_type_nv stereo_type;
};

struct display_present_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_present_info_khr;
const void * next = {};
ktl::api::rect2d src_rect;
ktl::api::rect2d dst_rect;
ktl::bool32 persistent;
};

struct surface_capabilities_khr final
{
ktl::i32 min_image_count;
ktl::i32 max_image_count;
ktl::api::extent2d current_extent;
ktl::api::extent2d min_image_extent;
ktl::api::extent2d max_image_extent;
ktl::i32 max_image_array_layers;
ktl::api::surface_transform_flags_khr supported_transforms;
ktl::api::surface_transform_flag_bits_khr current_transform;
ktl::api::composite_alpha_flags_khr supported_composite_alpha;
ktl::api::image_usage_flags supported_usage_flags;
};

struct android_surface_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_android_surface_create_info_khr;
const void * next = {};
ktl::api::android_surface_create_flags_khr flags = {};
ANativeWindow * window;
};

struct vi_surface_create_info_nn final
{
ktl::api::structure_type type = ktl::api::structure_type::v_vi_surface_create_info_nn;
const void * next = {};
ktl::api::vi_surface_create_flags_nn flags = {};
void * window;
};

struct wayland_surface_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_wayland_surface_create_info_khr;
const void * next = {};
ktl::api::wayland_surface_create_flags_khr flags = {};
wl_display * display;
wl_surface * surface;
};

struct ubm_surface_create_info_sec final
{
ktl::api::structure_type type = ktl::api::structure_type::v_ubm_surface_create_info_sec;
const void * next = {};
ktl::api::ubm_surface_create_flags_sec flags = {};
ubm_device * device;
ubm_surface * surface;
};

struct win32surface_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_win32_surface_create_info_khr;
const void * next = {};
ktl::api::win32surface_create_flags_khr flags = {};
HINSTANCE hinstance;
HWND hwnd;
};

struct xlib_surface_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_xlib_surface_create_info_khr;
const void * next = {};
ktl::api::xlib_surface_create_flags_khr flags = {};
Display * dpy;
Window window;
};

struct xcb_surface_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_xcb_surface_create_info_khr;
const void * next = {};
ktl::api::xcb_surface_create_flags_khr flags = {};
xcb_connection_t * connection;
xcb_window_t window;
};

struct direct_fbsurface_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_directfb_surface_create_info_ext;
const void * next = {};
ktl::api::direct_fbsurface_create_flags_ext flags = {};
IDirectFB * dfb;
IDirectFBSurface * surface;
};

struct image_pipe_surface_create_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_imagepipe_surface_create_info_fuchsia;
const void * next = {};
ktl::api::image_pipe_surface_create_flags_fuchsia flags = {};
zx_handle_t image_pipe_handle;
};

struct stream_descriptor_surface_create_info_ggp final
{
ktl::api::structure_type type = ktl::api::structure_type::v_stream_descriptor_surface_create_info_ggp;
const void * next = {};
ktl::api::stream_descriptor_surface_create_flags_ggp flags = {};
GgpStreamDescriptor stream_descriptor;
};

struct screen_surface_create_info_qnx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_screen_surface_create_info_qnx;
const void * next = {};
ktl::api::screen_surface_create_flags_qnx flags = {};
_screen_context * context;
_screen_window * window;
};

struct surface_format_khr final
{
ktl::api::format format;
ktl::api::color_space_khr color_space;
};

struct swapchain_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_create_info_khr;
const void * next = {};
ktl::api::swapchain_create_flags_khr flags = {};
ktl::api::surface_khr surface;
ktl::i32 min_image_count;
ktl::api::format image_format;
ktl::api::color_space_khr image_color_space;
ktl::api::extent2d image_extent;
ktl::i32 image_array_layers;
ktl::api::image_usage_flags image_usage;
ktl::api::sharing_mode image_sharing_mode;
ktl::i32 queue_family_index_count = {};
const ktl::i32 * queue_family_indices;
ktl::api::surface_transform_flag_bits_khr pre_transform;
ktl::api::composite_alpha_flag_bits_khr composite_alpha;
ktl::api::present_mode_khr present_mode;
ktl::bool32 clipped;
ktl::api::swapchain_khr old_swapchain = {};
ktl::api::swapchain_khr old_swapchain = {};
};

struct present_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_present_info_khr;
const void * next = {};
ktl::i32 wait_semaphore_count = {};
const ktl::api::semaphore * wait_semaphores;
ktl::i32 swapchain_count;
const ktl::api::swapchain_khr * swapchains;
const ktl::i32 * image_indices;
ktl::api::result * results = {};
};

struct debug_report_callback_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_debug_report_callback_create_info_ext;
const void * next = {};
ktl::api::debug_report_flags_ext flags = {};
ktl::api::pfn_vk_debug_report_callback_ext pfn_callback;
void * user_data = {};
};

struct validation_flags_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_validation_flags_ext;
const void * next = {};
ktl::i32 disabled_validation_check_count;
const ktl::api::validation_check_ext * disabled_validation_checks;
};

struct validation_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_validation_features_ext;
const void * next = {};
ktl::i32 enabled_validation_feature_count = {};
const ktl::api::validation_feature_enable_ext * enabled_validation_features;
ktl::i32 disabled_validation_feature_count = {};
const ktl::api::validation_feature_disable_ext * disabled_validation_features;
};

struct layer_settings_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_layer_settings_create_info_ext;
const void * next = {};
ktl::i32 setting_count = {};
const ktl::api::layer_setting_ext * settings;
};

struct layer_setting_ext final
{
const char * layer_name;
const char * setting_name;
ktl::api::layer_setting_type_ext type;
ktl::i32 value_count = {};
const void * values;
};

struct application_parameters_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_application_parameters_ext;
const void * next = {};
ktl::i32 vendor_id;
ktl::i32 device_id = {};
ktl::i32 key;
ktl::u64 value;
};

struct pipeline_rasterization_state_rasterization_order_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rasterization_state_rasterization_order_amd;
const void * next = {};
ktl::api::rasterization_order_amd rasterization_order;
};

struct debug_marker_object_name_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_debug_marker_object_name_info_ext;
const void * next = {};
ktl::api::debug_report_object_type_ext object_type;
ktl::u64 object;
const char * object_name;
};

struct debug_marker_object_tag_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_debug_marker_object_tag_info_ext;
const void * next = {};
ktl::api::debug_report_object_type_ext object_type;
ktl::u64 object;
ktl::u64 tag_name;
ktl::usize tag_size;
const void * tag;
};

struct debug_marker_marker_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_debug_marker_marker_info_ext;
const void * next = {};
const char * marker_name;
float color[4];
};

struct dedicated_allocation_image_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_dedicated_allocation_image_create_info_nv;
const void * next = {};
ktl::bool32 dedicated_allocation;
};

struct dedicated_allocation_buffer_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_dedicated_allocation_buffer_create_info_nv;
const void * next = {};
ktl::bool32 dedicated_allocation;
};

struct dedicated_allocation_memory_allocate_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_dedicated_allocation_memory_allocate_info_nv;
const void * next = {};
ktl::api::image image = {};
ktl::api::buffer buffer = {};
};

struct external_image_format_properties_nv final
{
ktl::api::image_format_properties image_format_properties;
ktl::api::external_memory_feature_flags_nv external_memory_features = {};
ktl::api::external_memory_handle_type_flags_nv export_from_imported_handle_types = {};
ktl::api::external_memory_handle_type_flags_nv compatible_handle_types = {};
};

struct external_memory_image_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_memory_image_create_info_nv;
const void * next = {};
ktl::api::external_memory_handle_type_flags_nv handle_types = {};
};

struct export_memory_allocate_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_memory_allocate_info_nv;
const void * next = {};
ktl::api::external_memory_handle_type_flags_nv handle_types = {};
};

struct import_memory_win32handle_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_win32_handle_info_nv;
const void * next = {};
ktl::api::external_memory_handle_type_flags_nv handle_type = {};
HANDLE handle = {};
};

struct export_memory_win32handle_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_memory_win32_handle_info_nv;
const void * next = {};
const SECURITY_ATTRIBUTES * attributes = {};
DWORD dw_access = {};
};

struct export_memory_sci_buf_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_memory_sci_buf_info_nv;
const void * next = {};
NvSciBufAttrList attributes;
};

struct import_memory_sci_buf_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_sci_buf_info_nv;
const void * next = {};
ktl::api::external_memory_handle_type_flag_bits handle_type;
NvSciBufObj handle;
};

struct memory_get_sci_buf_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_sci_buf_info_nv;
const void * next = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct memory_sci_buf_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_sci_buf_properties_nv;
const void * next = {};
ktl::i32 memory_type_bits;
};

struct physical_device_external_memory_sci_buf_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_memory_sci_buf_features_nv;
void * next = {};
ktl::bool32 sci_buf_import;
ktl::bool32 sci_buf_export;
};

using physical_device_external_sci_buf_features_nv = physical_device_external_memory_sci_buf_features_nv;

struct win32keyed_mutex_acquire_release_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_win32_keyed_mutex_acquire_release_info_nv;
const void * next = {};
ktl::i32 acquire_count = {};
const ktl::api::device_memory * acquire_syncs;
const ktl::u64 * acquire_keys;
const ktl::i32 * acquire_timeout_milliseconds;
ktl::i32 release_count = {};
const ktl::api::device_memory * release_syncs;
const ktl::u64 * release_keys;
};

struct physical_device_device_generated_commands_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_generated_commands_features_nv;
void * next = {};
ktl::bool32 device_generated_commands;
};

struct push_constant_bank_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_push_constant_bank_info_nv;
const void * next = {};
ktl::i32 bank;
};

struct physical_device_push_constant_bank_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_push_constant_bank_features_nv;
void * next = {};
ktl::bool32 push_constant_bank;
};

struct physical_device_push_constant_bank_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_push_constant_bank_properties_nv;
void * next = {};
ktl::i32 max_graphics_push_constant_banks;
ktl::i32 max_compute_push_constant_banks;
ktl::i32 max_graphics_push_data_banks;
ktl::i32 max_compute_push_data_banks;
};

struct physical_device_device_generated_commands_compute_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_generated_commands_compute_features_nv;
void * next = {};
ktl::bool32 device_generated_compute;
ktl::bool32 device_generated_compute_pipelines;
ktl::bool32 device_generated_compute_capture_replay;
};

struct device_private_data_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_private_data_create_info;
const void * next = {};
ktl::i32 private_data_slot_request_count;
};

using device_private_data_create_info_ext = device_private_data_create_info;

struct private_data_slot_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_private_data_slot_create_info;
const void * next = {};
ktl::api::private_data_slot_create_flags flags;
};

using private_data_slot_create_info_ext = private_data_slot_create_info;

struct physical_device_private_data_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_private_data_features;
void * next = {};
ktl::bool32 private_data;
};

using physical_device_private_data_features_ext = physical_device_private_data_features;

struct physical_device_device_generated_commands_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_generated_commands_properties_nv;
void * next = {};
ktl::i32 max_graphics_shader_group_count;
ktl::i32 max_indirect_sequence_count;
ktl::i32 max_indirect_commands_token_count;
ktl::i32 max_indirect_commands_stream_count;
ktl::i32 max_indirect_commands_token_offset;
ktl::i32 max_indirect_commands_stream_stride;
ktl::i32 min_sequences_count_buffer_offset_alignment;
ktl::i32 min_sequences_index_buffer_offset_alignment;
ktl::i32 min_indirect_commands_buffer_offset_alignment;
};

struct physical_device_cluster_acceleration_structure_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cluster_acceleration_structure_features_nv;
void * next = {};
ktl::bool32 cluster_acceleration_structure;
};

struct physical_device_cluster_acceleration_structure_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cluster_acceleration_structure_properties_nv;
void * next = {};
ktl::i32 max_vertices_per_cluster;
ktl::i32 max_triangles_per_cluster;
ktl::i32 cluster_scratch_byte_alignment;
ktl::i32 cluster_byte_alignment;
ktl::i32 cluster_template_byte_alignment;
ktl::i32 cluster_bottom_level_byte_alignment;
ktl::i32 cluster_template_bounds_byte_alignment;
ktl::i32 max_cluster_geometry_index;
};

struct strided_device_address_nv final
{
ktl::dvaddr start_address;
ktl::dvsize stride_in_bytes;
};

struct ray_tracing_pipeline_cluster_acceleration_structure_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_ray_tracing_pipeline_cluster_acceleration_structure_create_info_nv;
void * next = {};
ktl::bool32 allow_cluster_acceleration_structure;
};

struct cluster_acceleration_structure_geometry_index_and_geometry_flags_nv final
{
ktl::i32 geometry_index;
ktl::i32 reserved;
ktl::i32 geometry_flags;
};

struct cluster_acceleration_structure_move_objects_info_nv final
{
ktl::dvaddr src_acceleration_structure;
};

struct cluster_acceleration_structure_build_clusters_bottom_level_info_nv final
{
ktl::i32 cluster_references_count;
ktl::i32 cluster_references_stride;
ktl::dvaddr cluster_references;
};

struct cluster_acceleration_structure_get_template_indices_info_nv final
{
ktl::dvaddr cluster_template_address;
};

struct cluster_acceleration_structure_build_triangle_cluster_info_nv final
{
ktl::i32 cluster_id;
ktl::api::cluster_acceleration_structure_cluster_flags_nv cluster_flags = {};
ktl::i32 triangle_count;
ktl::i32 vertex_count;
ktl::i32 position_truncate_bit_count;
ktl::i32 index_type;
ktl::i32 opacity_micromap_index_type;
ktl::api::cluster_acceleration_structure_geometry_index_and_geometry_flags_nv base_geometry_index_and_geometry_flags;
ktl::u16 index_buffer_stride;
ktl::u16 vertex_buffer_stride;
ktl::u16 geometry_index_and_flags_buffer_stride;
ktl::u16 opacity_micromap_index_buffer_stride;
ktl::dvaddr index_buffer;
ktl::dvaddr vertex_buffer;
ktl::dvaddr geometry_index_and_flags_buffer = {};
ktl::dvaddr opacity_micromap_array = {};
ktl::dvaddr opacity_micromap_index_buffer = {};
};

struct cluster_acceleration_structure_build_triangle_cluster_template_info_nv final
{
ktl::i32 cluster_id;
ktl::api::cluster_acceleration_structure_cluster_flags_nv cluster_flags = {};
ktl::i32 triangle_count;
ktl::i32 vertex_count;
ktl::i32 position_truncate_bit_count;
ktl::i32 index_type;
ktl::i32 opacity_micromap_index_type;
ktl::api::cluster_acceleration_structure_geometry_index_and_geometry_flags_nv base_geometry_index_and_geometry_flags;
ktl::u16 index_buffer_stride;
ktl::u16 vertex_buffer_stride;
ktl::u16 geometry_index_and_flags_buffer_stride;
ktl::u16 opacity_micromap_index_buffer_stride;
ktl::dvaddr index_buffer;
ktl::dvaddr vertex_buffer = {};
ktl::dvaddr geometry_index_and_flags_buffer = {};
ktl::dvaddr opacity_micromap_array = {};
ktl::dvaddr opacity_micromap_index_buffer = {};
ktl::dvaddr instantiation_bounding_box_limit = {};
};

struct cluster_acceleration_structure_instantiate_cluster_info_nv final
{
ktl::i32 cluster_id_offset;
ktl::i32 geometry_index_offset;
ktl::i32 reserved;
ktl::dvaddr cluster_template_address;
ktl::api::strided_device_address_nv vertex_buffer;
};

struct cluster_acceleration_structure_clusters_bottom_level_input_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cluster_acceleration_structure_clusters_bottom_level_input_nv;
void * next = {};
ktl::i32 max_total_cluster_count;
ktl::i32 max_cluster_count_per_acceleration_structure;
};

struct cluster_acceleration_structure_triangle_cluster_input_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cluster_acceleration_structure_triangle_cluster_input_nv;
void * next = {};
ktl::api::format vertex_format;
ktl::i32 max_geometry_index_value;
ktl::i32 max_cluster_unique_geometry_count;
ktl::i32 max_cluster_triangle_count;
ktl::i32 max_cluster_vertex_count;
ktl::i32 max_total_triangle_count;
ktl::i32 max_total_vertex_count;
ktl::i32 min_position_truncate_bit_count;
};

struct cluster_acceleration_structure_move_objects_input_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cluster_acceleration_structure_move_objects_input_nv;
void * next = {};
ktl::api::cluster_acceleration_structure_type_nv type;
ktl::bool32 no_move_overlap;
ktl::dvsize max_moved_bytes;
};

struct cluster_acceleration_structure_input_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cluster_acceleration_structure_input_info_nv;
void * next = {};
ktl::i32 max_acceleration_structure_count;
ktl::api::build_acceleration_structure_flags_khr flags = {};
ktl::api::cluster_acceleration_structure_op_type_nv op_type;
ktl::api::cluster_acceleration_structure_op_mode_nv op_mode;
ktl::api::cluster_acceleration_structure_op_input_nv op_input;
};

struct cluster_acceleration_structure_commands_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cluster_acceleration_structure_commands_info_nv;
void * next = {};
ktl::api::cluster_acceleration_structure_input_info_nv input;
ktl::dvaddr dst_implicit_data = {};
ktl::dvaddr scratch_data;
ktl::api::strided_device_address_region_khr dst_addresses_array;
ktl::api::strided_device_address_region_khr dst_sizes_array;
ktl::api::strided_device_address_region_khr src_infos_array;
ktl::dvaddr src_infos_count = {};
ktl::api::cluster_acceleration_structure_address_resolution_flags_nv address_resolution_flags = {};
};

struct physical_device_multi_draw_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multi_draw_properties_ext;
void * next = {};
ktl::i32 max_multi_draw_count;
};

struct graphics_shader_group_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_graphics_shader_group_create_info_nv;
const void * next = {};
ktl::i32 stage_count;
const ktl::api::pipeline_shader_stage_create_info * stages;
const ktl::api::pipeline_vertex_input_state_create_info * vertex_input_state = {};
const ktl::api::pipeline_tessellation_state_create_info * tessellation_state = {};
};

struct graphics_pipeline_shader_groups_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_graphics_pipeline_shader_groups_create_info_nv;
const void * next = {};
ktl::i32 group_count = {};
const ktl::api::graphics_shader_group_create_info_nv * groups;
ktl::i32 pipeline_count = {};
const ktl::api::pipeline * pipelines;
};

struct bind_shader_group_indirect_command_nv final
{
ktl::i32 group_index;
};

struct bind_index_buffer_indirect_command_nv final
{
ktl::dvaddr buffer_address;
ktl::i32 size;
ktl::api::index_type index_type;
};

struct bind_vertex_buffer_indirect_command_nv final
{
ktl::dvaddr buffer_address;
ktl::i32 size;
ktl::i32 stride;
};

struct set_state_flags_indirect_command_nv final
{
ktl::i32 data;
};

struct indirect_commands_stream_nv final
{
ktl::api::buffer buffer;
ktl::dvsize offset;
};

struct indirect_commands_layout_token_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_indirect_commands_layout_token_nv;
const void * next = {};
ktl::api::indirect_commands_token_type_nv token_type;
ktl::i32 stream;
ktl::i32 offset;
ktl::i32 vertex_binding_unit;
ktl::bool32 vertex_dynamic_stride;
const ktl::api::pipeline_layout pushconstant_pipeline_layout = {};
const ktl::api::shader_stage_flags pushconstant_shader_stage_flags = {};
const ktl::i32 pushconstant_offset;
const ktl::i32 pushconstant_size;
ktl::api::indirect_state_flags_nv indirect_state_flags = {};
ktl::i32 index_type_count = {};
const ktl::api::index_type * index_types;
const ktl::i32 * index_type_values;
};

struct indirect_commands_layout_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_indirect_commands_layout_create_info_nv;
const void * next = {};
ktl::api::indirect_commands_layout_usage_flags_nv flags = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::i32 token_count;
const ktl::api::indirect_commands_layout_token_nv * tokens;
ktl::i32 stream_count;
const ktl::i32 * stream_strides;
};

struct generated_commands_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_generated_commands_info_nv;
const void * next = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::api::pipeline pipeline = {};
ktl::api::indirect_commands_layout_nv indirect_commands_layout;
ktl::i32 stream_count;
const ktl::api::indirect_commands_stream_nv * streams;
ktl::i32 sequences_count;
ktl::api::buffer preprocess_buffer;
ktl::dvsize preprocess_offset;
ktl::dvsize preprocess_size;
ktl::api::buffer sequences_count_buffer = {};
ktl::dvsize sequences_count_offset;
ktl::api::buffer sequences_index_buffer = {};
ktl::dvsize sequences_index_offset;
};

struct generated_commands_memory_requirements_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_generated_commands_memory_requirements_info_nv;
const void * next = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::api::pipeline pipeline = {};
ktl::api::indirect_commands_layout_nv indirect_commands_layout;
ktl::i32 max_sequences_count;
};

struct pipeline_indirect_device_address_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_indirect_device_address_info_nv;
const void * next = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::api::pipeline pipeline;
};

struct bind_pipeline_indirect_command_nv final
{
ktl::dvaddr pipeline_address;
};

struct physical_device_features2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_features_2;
void * next = {};
ktl::api::physical_device_features features;
};

using physical_device_features2khr = physical_device_features2;

struct physical_device_properties2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_properties_2;
void * next = {};
ktl::api::physical_device_properties properties;
};

using physical_device_properties2khr = physical_device_properties2;

struct format_properties2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_format_properties_2;
void * next = {};
ktl::api::format_properties format_properties;
};

using format_properties2khr = format_properties2;

struct image_format_properties2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_format_properties_2;
void * next = {};
ktl::api::image_format_properties image_format_properties;
};

using image_format_properties2khr = image_format_properties2;

struct physical_device_image_format_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_format_info_2;
const void * next = {};
ktl::api::format format;
ktl::api::image_type type;
ktl::api::image_tiling tiling;
ktl::api::image_usage_flags usage;
ktl::api::image_create_flags flags = {};
};

using physical_device_image_format_info2khr = physical_device_image_format_info2;

struct queue_family_properties2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_properties_2;
void * next = {};
ktl::api::queue_family_properties queue_family_properties;
};

using queue_family_properties2khr = queue_family_properties2;

struct physical_device_memory_properties2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_memory_properties_2;
void * next = {};
ktl::api::physical_device_memory_properties memory_properties;
};

using physical_device_memory_properties2khr = physical_device_memory_properties2;

struct sparse_image_format_properties2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sparse_image_format_properties_2;
void * next = {};
ktl::api::sparse_image_format_properties properties;
};

using sparse_image_format_properties2khr = sparse_image_format_properties2;

struct physical_device_sparse_image_format_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_sparse_image_format_info_2;
const void * next = {};
ktl::api::format format;
ktl::api::image_type type;
ktl::api::sample_count_flag_bits samples;
ktl::api::image_usage_flags usage;
ktl::api::image_tiling tiling;
};

using physical_device_sparse_image_format_info2khr = physical_device_sparse_image_format_info2;

struct physical_device_push_descriptor_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_push_descriptor_properties;
void * next = {};
ktl::i32 max_push_descriptors;
};

using physical_device_push_descriptor_properties_khr = physical_device_push_descriptor_properties;

struct conformance_version final
{
ktl::u8 major;
ktl::u8 minor;
ktl::u8 subminor;
ktl::u8 patch;
};

using conformance_version_khr = conformance_version;

struct physical_device_driver_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_driver_properties;
void * next = {};
ktl::api::driver_id driver_id;
char driver_name[KTL_API_MAX_DRIVER_NAME_SIZE];
char driver_info[KTL_API_MAX_DRIVER_INFO_SIZE];
ktl::api::conformance_version conformance_version;
};

using physical_device_driver_properties_khr = physical_device_driver_properties;

struct present_regions_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_present_regions_khr;
const void * next = {};
ktl::i32 swapchain_count;
const ktl::api::present_region_khr * regions = {};
};

struct present_region_khr final
{
ktl::i32 rectangle_count = {};
const ktl::api::rect_layer_khr * rectangles = {};
};

struct rect_layer_khr final
{
ktl::api::offset2d offset;
ktl::api::extent2d extent;
ktl::i32 layer;
};

struct physical_device_variable_pointers_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_variable_pointers_features;
void * next = {};
ktl::bool32 variable_pointers_storage_buffer;
ktl::bool32 variable_pointers;
};

using physical_device_variable_pointers_features_khr = physical_device_variable_pointers_features;

using physical_device_variable_pointer_features_khr = physical_device_variable_pointers_features;

using physical_device_variable_pointer_features = physical_device_variable_pointers_features;

struct external_memory_properties final
{
ktl::api::external_memory_feature_flags external_memory_features;
ktl::api::external_memory_handle_type_flags export_from_imported_handle_types = {};
ktl::api::external_memory_handle_type_flags compatible_handle_types;
};

using external_memory_properties_khr = external_memory_properties;

struct physical_device_external_image_format_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_image_format_info;
const void * next = {};
ktl::api::external_memory_handle_type_flag_bits handle_type = {};
};

using physical_device_external_image_format_info_khr = physical_device_external_image_format_info;

struct external_image_format_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_image_format_properties;
void * next = {};
ktl::api::external_memory_properties external_memory_properties;
};

using external_image_format_properties_khr = external_image_format_properties;

struct physical_device_external_buffer_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_buffer_info;
const void * next = {};
ktl::api::buffer_create_flags flags = {};
ktl::api::buffer_usage_flags usage = {};
ktl::api::external_memory_handle_type_flag_bits handle_type;
};

using physical_device_external_buffer_info_khr = physical_device_external_buffer_info;

struct external_buffer_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_buffer_properties;
void * next = {};
ktl::api::external_memory_properties external_memory_properties;
};

using external_buffer_properties_khr = external_buffer_properties;

struct physical_device_idproperties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_id_properties;
void * next = {};
ktl::u8 device_uuid[KTL_API_UUID_SIZE];
ktl::u8 driver_uuid[KTL_API_UUID_SIZE];
ktl::u8 device_luid[KTL_API_LUID_SIZE];
ktl::i32 device_node_mask;
ktl::bool32 device_luidvalid;
};

using physical_device_idproperties_khr = physical_device_idproperties;

struct external_memory_image_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_memory_image_create_info;
const void * next = {};
ktl::api::external_memory_handle_type_flags handle_types = {};
};

using external_memory_image_create_info_khr = external_memory_image_create_info;

struct external_memory_buffer_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_memory_buffer_create_info;
const void * next = {};
ktl::api::external_memory_handle_type_flags handle_types = {};
};

using external_memory_buffer_create_info_khr = external_memory_buffer_create_info;

struct export_memory_allocate_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_memory_allocate_info;
const void * next = {};
ktl::api::external_memory_handle_type_flags handle_types = {};
};

using export_memory_allocate_info_khr = export_memory_allocate_info;

struct import_memory_win32handle_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_win32_handle_info_khr;
const void * next = {};
ktl::api::external_memory_handle_type_flag_bits handle_type = {};
HANDLE handle = {};
LPCWSTR name = {};
};

struct export_memory_win32handle_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_memory_win32_handle_info_khr;
const void * next = {};
const SECURITY_ATTRIBUTES * attributes = {};
DWORD dw_access;
LPCWSTR name;
};

struct import_memory_zircon_handle_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_zircon_handle_info_fuchsia;
const void * next = {};
ktl::api::external_memory_handle_type_flag_bits handle_type = {};
zx_handle_t handle = {};
};

struct memory_zircon_handle_properties_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_zircon_handle_properties_fuchsia;
void * next = {};
ktl::i32 memory_type_bits;
};

struct memory_get_zircon_handle_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_zircon_handle_info_fuchsia;
const void * next = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct memory_win32handle_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_win32_handle_properties_khr;
void * next = {};
ktl::i32 memory_type_bits;
};

struct memory_get_win32handle_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_win32_handle_info_khr;
const void * next = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct import_memory_fd_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_fd_info_khr;
const void * next = {};
ktl::api::external_memory_handle_type_flag_bits handle_type = {};
int fd;
};

struct memory_fd_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_fd_properties_khr;
void * next = {};
ktl::i32 memory_type_bits;
};

struct memory_get_fd_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_fd_info_khr;
const void * next = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct win32keyed_mutex_acquire_release_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_win32_keyed_mutex_acquire_release_info_khr;
const void * next = {};
ktl::i32 acquire_count = {};
const ktl::api::device_memory * acquire_syncs;
const ktl::u64 * acquire_keys;
const ktl::i32 * acquire_timeouts;
ktl::i32 release_count = {};
const ktl::api::device_memory * release_syncs;
const ktl::u64 * release_keys;
};

struct import_memory_metal_handle_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_metal_handle_info_ext;
const void * next = {};
ktl::api::external_memory_handle_type_flag_bits handle_type = {};
void * handle = {};
};

struct memory_metal_handle_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_metal_handle_properties_ext;
void * next = {};
ktl::i32 memory_type_bits;
};

struct memory_get_metal_handle_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_metal_handle_info_ext;
const void * next = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct physical_device_external_semaphore_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_semaphore_info;
const void * next = {};
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};

using physical_device_external_semaphore_info_khr = physical_device_external_semaphore_info;

struct external_semaphore_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_semaphore_properties;
void * next = {};
ktl::api::external_semaphore_handle_type_flags export_from_imported_handle_types;
ktl::api::external_semaphore_handle_type_flags compatible_handle_types;
ktl::api::external_semaphore_feature_flags external_semaphore_features = {};
};

using external_semaphore_properties_khr = external_semaphore_properties;

struct export_semaphore_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_semaphore_create_info;
const void * next = {};
ktl::api::external_semaphore_handle_type_flags handle_types = {};
};

using export_semaphore_create_info_khr = export_semaphore_create_info;

struct import_semaphore_win32handle_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_semaphore_win32_handle_info_khr;
const void * next = {};
ktl::api::semaphore semaphore;
ktl::api::semaphore_import_flags flags = {};
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
HANDLE handle = {};
LPCWSTR name = {};
};

struct export_semaphore_win32handle_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_semaphore_win32_handle_info_khr;
const void * next = {};
const SECURITY_ATTRIBUTES * attributes = {};
DWORD dw_access;
LPCWSTR name;
};

struct d3d12fence_submit_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_d3d12_fence_submit_info_khr;
const void * next = {};
ktl::i32 wait_semaphore_values_count = {};
const ktl::u64 * wait_semaphore_values = {};
ktl::i32 signal_semaphore_values_count = {};
const ktl::u64 * signal_semaphore_values = {};
};

struct semaphore_get_win32handle_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_get_win32_handle_info_khr;
const void * next = {};
ktl::api::semaphore semaphore;
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};

struct import_semaphore_fd_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_semaphore_fd_info_khr;
const void * next = {};
ktl::api::semaphore semaphore;
ktl::api::semaphore_import_flags flags = {};
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
int fd;
};

struct semaphore_get_fd_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_get_fd_info_khr;
const void * next = {};
ktl::api::semaphore semaphore;
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};

struct import_semaphore_zircon_handle_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_semaphore_zircon_handle_info_fuchsia;
const void * next = {};
ktl::api::semaphore semaphore;
ktl::api::semaphore_import_flags flags = {};
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
zx_handle_t zircon_handle;
};

struct semaphore_get_zircon_handle_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_get_zircon_handle_info_fuchsia;
const void * next = {};
ktl::api::semaphore semaphore;
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};

struct physical_device_external_fence_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_fence_info;
const void * next = {};
ktl::api::external_fence_handle_type_flag_bits handle_type;
};

using physical_device_external_fence_info_khr = physical_device_external_fence_info;

struct external_fence_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_fence_properties;
void * next = {};
ktl::api::external_fence_handle_type_flags export_from_imported_handle_types;
ktl::api::external_fence_handle_type_flags compatible_handle_types;
ktl::api::external_fence_feature_flags external_fence_features = {};
};

using external_fence_properties_khr = external_fence_properties;

struct export_fence_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_fence_create_info;
const void * next = {};
ktl::api::external_fence_handle_type_flags handle_types = {};
};

using export_fence_create_info_khr = export_fence_create_info;

struct import_fence_win32handle_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_fence_win32_handle_info_khr;
const void * next = {};
ktl::api::fence fence;
ktl::api::fence_import_flags flags = {};
ktl::api::external_fence_handle_type_flag_bits handle_type;
HANDLE handle = {};
LPCWSTR name = {};
};

struct export_fence_win32handle_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_fence_win32_handle_info_khr;
const void * next = {};
const SECURITY_ATTRIBUTES * attributes = {};
DWORD dw_access;
LPCWSTR name;
};

struct fence_get_win32handle_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_fence_get_win32_handle_info_khr;
const void * next = {};
ktl::api::fence fence;
ktl::api::external_fence_handle_type_flag_bits handle_type;
};

struct import_fence_fd_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_fence_fd_info_khr;
const void * next = {};
ktl::api::fence fence;
ktl::api::fence_import_flags flags = {};
ktl::api::external_fence_handle_type_flag_bits handle_type;
int fd;
};

struct fence_get_fd_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_fence_get_fd_info_khr;
const void * next = {};
ktl::api::fence fence;
ktl::api::external_fence_handle_type_flag_bits handle_type;
};

struct export_fence_sci_sync_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_fence_sci_sync_info_nv;
const void * next = {};
NvSciSyncAttrList attributes;
};

struct import_fence_sci_sync_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_fence_sci_sync_info_nv;
const void * next = {};
ktl::api::fence fence;
ktl::api::external_fence_handle_type_flag_bits handle_type;
void * handle;
};

struct fence_get_sci_sync_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_fence_get_sci_sync_info_nv;
const void * next = {};
ktl::api::fence fence;
ktl::api::external_fence_handle_type_flag_bits handle_type;
};

struct export_semaphore_sci_sync_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_semaphore_sci_sync_info_nv;
const void * next = {};
NvSciSyncAttrList attributes;
};

struct import_semaphore_sci_sync_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_semaphore_sci_sync_info_nv;
const void * next = {};
ktl::api::semaphore semaphore;
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
void * handle;
};

struct semaphore_get_sci_sync_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_get_sci_sync_info_nv;
const void * next = {};
ktl::api::semaphore semaphore;
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};

struct sci_sync_attributes_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sci_sync_attributes_info_nv;
const void * next = {};
ktl::api::sci_sync_client_type_nv client_type;
ktl::api::sci_sync_primitive_type_nv primitive_type;
};

struct physical_device_external_sci_sync_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_sci_sync_features_nv;
void * next = {};
ktl::bool32 sci_sync_fence;
ktl::bool32 sci_sync_semaphore;
ktl::bool32 sci_sync_import;
ktl::bool32 sci_sync_export;
};

struct physical_device_external_sci_sync2features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_sci_sync_2_features_nv;
void * next = {};
ktl::bool32 sci_sync_fence;
ktl::bool32 sci_sync_semaphore2;
ktl::bool32 sci_sync_import;
ktl::bool32 sci_sync_export;
};

struct semaphore_sci_sync_pool_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_sci_sync_pool_create_info_nv;
const void * next = {};
NvSciSyncObj handle;
};

struct semaphore_sci_sync_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_sci_sync_create_info_nv;
const void * next = {};
ktl::api::semaphore_sci_sync_pool_nv semaphore_pool;
const NvSciSyncFence * fence;
};

struct device_semaphore_sci_sync_pool_reservation_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_semaphore_sci_sync_pool_reservation_create_info_nv;
const void * next = {};
ktl::i32 semaphore_sci_sync_pool_request_count;
};

struct physical_device_multiview_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multiview_features;
void * next = {};
ktl::bool32 multiview;
ktl::bool32 multiview_geometry_shader;
ktl::bool32 multiview_tessellation_shader;
};

using physical_device_multiview_features_khr = physical_device_multiview_features;

struct physical_device_multiview_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multiview_properties;
void * next = {};
ktl::i32 max_multiview_view_count;
ktl::i32 max_multiview_instance_index;
};

using physical_device_multiview_properties_khr = physical_device_multiview_properties;

struct render_pass_multiview_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_multiview_create_info;
const void * next = {};
ktl::i32 subpass_count = {};
const ktl::i32 * view_masks;
ktl::i32 dependency_count = {};
const ktl::i32 * view_offsets;
ktl::i32 correlation_mask_count = {};
const ktl::i32 * correlation_masks;
};

using render_pass_multiview_create_info_khr = render_pass_multiview_create_info;

struct surface_capabilities2ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_capabilities_2_ext;
void * next = {};
ktl::i32 min_image_count;
ktl::i32 max_image_count;
ktl::api::extent2d current_extent;
ktl::api::extent2d min_image_extent;
ktl::api::extent2d max_image_extent;
ktl::i32 max_image_array_layers;
ktl::api::surface_transform_flags_khr supported_transforms;
ktl::api::surface_transform_flag_bits_khr current_transform;
ktl::api::composite_alpha_flags_khr supported_composite_alpha;
ktl::api::image_usage_flags supported_usage_flags;
ktl::api::surface_counter_flags_ext supported_surface_counters = {};
};

struct display_power_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_power_info_ext;
const void * next = {};
ktl::api::display_power_state_ext power_state;
};

struct device_event_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_event_info_ext;
const void * next = {};
ktl::api::device_event_type_ext device_event;
};

struct display_event_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_event_info_ext;
const void * next = {};
ktl::api::display_event_type_ext display_event;
};

struct swapchain_counter_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_counter_create_info_ext;
const void * next = {};
ktl::api::surface_counter_flags_ext surface_counters = {};
};

struct physical_device_group_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_group_properties;
void * next = {};
ktl::i32 physical_device_count;
ktl::api::physical_device physical_devices[KTL_API_MAX_DEVICE_GROUP_SIZE];
ktl::bool32 subset_allocation;
};

using physical_device_group_properties_khr = physical_device_group_properties;

struct memory_allocate_flags_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_allocate_flags_info;
const void * next = {};
ktl::api::memory_allocate_flags flags = {};
ktl::i32 device_mask;
};

using memory_allocate_flags_info_khr = memory_allocate_flags_info;

struct bind_buffer_memory_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_buffer_memory_info;
const void * next = {};
ktl::api::buffer buffer;
ktl::api::device_memory memory;
ktl::dvsize memory_offset;
};

using bind_buffer_memory_info_khr = bind_buffer_memory_info;

struct bind_buffer_memory_device_group_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_buffer_memory_device_group_info;
const void * next = {};
ktl::i32 device_index_count = {};
const ktl::i32 * device_indices;
};

using bind_buffer_memory_device_group_info_khr = bind_buffer_memory_device_group_info;

struct bind_image_memory_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_image_memory_info;
const void * next = {};
ktl::api::image image;
ktl::api::device_memory memory;
ktl::dvsize memory_offset;
};

using bind_image_memory_info_khr = bind_image_memory_info;

struct bind_image_memory_device_group_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_image_memory_device_group_info;
const void * next = {};
ktl::i32 device_index_count = {};
const ktl::i32 * device_indices;
ktl::i32 split_instance_bind_region_count = {};
const ktl::api::rect2d * split_instance_bind_regions;
};

using bind_image_memory_device_group_info_khr = bind_image_memory_device_group_info;

struct device_group_render_pass_begin_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_group_render_pass_begin_info;
const void * next = {};
ktl::i32 device_mask;
ktl::i32 device_render_area_count = {};
const ktl::api::rect2d * device_render_areas;
};

using device_group_render_pass_begin_info_khr = device_group_render_pass_begin_info;

struct device_group_command_buffer_begin_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_group_command_buffer_begin_info;
const void * next = {};
ktl::i32 device_mask;
};

using device_group_command_buffer_begin_info_khr = device_group_command_buffer_begin_info;

struct device_group_submit_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_group_submit_info;
const void * next = {};
ktl::i32 wait_semaphore_count = {};
const ktl::i32 * wait_semaphore_device_indices;
ktl::i32 command_buffer_count = {};
const ktl::i32 * command_buffer_device_masks;
ktl::i32 signal_semaphore_count = {};
const ktl::i32 * signal_semaphore_device_indices;
};

using device_group_submit_info_khr = device_group_submit_info;

struct device_group_bind_sparse_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_group_bind_sparse_info;
const void * next = {};
ktl::i32 resource_device_index;
ktl::i32 memory_device_index;
};

using device_group_bind_sparse_info_khr = device_group_bind_sparse_info;

struct device_group_present_capabilities_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_group_present_capabilities_khr;
void * next = {};
ktl::i32 present_mask[KTL_API_MAX_DEVICE_GROUP_SIZE];
ktl::api::device_group_present_mode_flags_khr modes;
};

struct image_swapchain_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_swapchain_create_info_khr;
const void * next = {};
ktl::api::swapchain_khr swapchain = {};
};

struct bind_image_memory_swapchain_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_image_memory_swapchain_info_khr;
const void * next = {};
ktl::api::swapchain_khr swapchain;
ktl::i32 image_index;
};

struct acquire_next_image_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acquire_next_image_info_khr;
const void * next = {};
ktl::api::swapchain_khr swapchain;
ktl::u64 timeout;
ktl::api::semaphore semaphore = {};
ktl::api::fence fence = {};
ktl::i32 device_mask;
};

struct device_group_present_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_group_present_info_khr;
const void * next = {};
ktl::i32 swapchain_count = {};
const ktl::i32 * device_masks;
ktl::api::device_group_present_mode_flag_bits_khr mode;
};

struct device_group_device_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_group_device_create_info;
const void * next = {};
ktl::i32 physical_device_count = {};
const ktl::api::physical_device * physical_devices;
};

using device_group_device_create_info_khr = device_group_device_create_info;

struct device_group_swapchain_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_group_swapchain_create_info_khr;
const void * next = {};
ktl::api::device_group_present_mode_flags_khr modes;
};

struct descriptor_update_template_entry final
{
ktl::i32 dst_binding;
ktl::i32 dst_array_element;
ktl::i32 descriptor_count;
ktl::api::descriptor_type descriptor_type;
ktl::usize offset;
ktl::usize stride;
};

using descriptor_update_template_entry_khr = descriptor_update_template_entry;

struct descriptor_update_template_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_update_template_create_info;
const void * next = {};
ktl::api::descriptor_update_template_create_flags flags = {};
ktl::i32 descriptor_update_entry_count;
const ktl::api::descriptor_update_template_entry * descriptor_update_entries;
ktl::api::descriptor_update_template_type template_type;
ktl::api::descriptor_set_layout descriptor_set_layout;
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::api::pipeline_layout pipeline_layout;
ktl::i32 set;
};

using descriptor_update_template_create_info_khr = descriptor_update_template_create_info;

struct xycolor_ext final
{
float x;
float y;
};

struct physical_device_present_id_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_id_features_khr;
void * next = {};
ktl::bool32 present_id;
};

struct present_id_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_present_id_khr;
const void * next = {};
ktl::i32 swapchain_count;
const ktl::u64 * present_ids = {};
};

struct physical_device_present_id2features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_id_2_features_khr;
void * next = {};
ktl::bool32 present_id2;
};

struct present_id2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_present_id_2_khr;
const void * next = {};
ktl::i32 swapchain_count;
const ktl::u64 * present_ids = {};
};

struct present_wait2info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_present_wait_2_info_khr;
const void * next = {};
ktl::u64 present_id;
ktl::u64 timeout;
};

struct physical_device_present_wait_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_wait_features_khr;
void * next = {};
ktl::bool32 present_wait;
};

struct physical_device_present_wait2features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_wait_2_features_khr;
void * next = {};
ktl::bool32 present_wait2;
};

struct physical_device_present_timing_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_timing_features_ext;
void * next = {};
ktl::bool32 present_timing;
ktl::bool32 present_at_absolute_time;
ktl::bool32 present_at_relative_time;
};

struct present_timing_surface_capabilities_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_present_timing_surface_capabilities_ext;
void * next = {};
ktl::bool32 present_timing_supported;
ktl::bool32 present_at_absolute_time_supported;
ktl::bool32 present_at_relative_time_supported;
ktl::api::present_stage_flags_ext present_stage_queries;
};

struct swapchain_timing_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_timing_properties_ext;
void * next = {};
ktl::u64 refresh_duration;
ktl::u64 refresh_interval;
};

struct swapchain_time_domain_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_time_domain_properties_ext;
void * next = {};
ktl::i32 time_domain_count;
ktl::api::time_domain_khr * time_domains = {};
ktl::u64 * time_domain_ids = {};
};

struct present_stage_time_ext final
{
ktl::api::present_stage_flags_ext stage;
ktl::u64 time;
};

struct past_presentation_timing_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_past_presentation_timing_info_ext;
const void * next = {};
ktl::api::past_presentation_timing_flags_ext flags = {};
ktl::api::swapchain_khr swapchain;
};

struct past_presentation_timing_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_past_presentation_timing_properties_ext;
void * next = {};
ktl::u64 timing_properties_counter;
ktl::u64 time_domains_counter;
ktl::i32 presentation_timing_count;
ktl::api::past_presentation_timing_ext * presentation_timings;
};

struct past_presentation_timing_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_past_presentation_timing_ext;
void * next = {};
ktl::u64 present_id;
ktl::u64 target_time;
ktl::i32 present_stage_count;
ktl::api::present_stage_time_ext * present_stages;
ktl::api::time_domain_khr time_domain;
ktl::u64 time_domain_id;
ktl::bool32 report_complete;
};

struct present_timings_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_present_timings_info_ext;
const void * next = {};
ktl::i32 swapchain_count;
const ktl::api::present_timing_info_ext * timing_infos = {};
};

struct present_timing_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_present_timing_info_ext;
const void * next = {};
ktl::api::present_timing_info_flags_ext flags = {};
ktl::u64 target_time;
ktl::u64 time_domain_id;
ktl::api::present_stage_flags_ext present_stage_queries = {};
ktl::api::present_stage_flags_ext target_time_domain_present_stage = {};
};

struct swapchain_calibrated_timestamp_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_calibrated_timestamp_info_ext;
const void * next = {};
ktl::api::swapchain_khr swapchain;
ktl::api::present_stage_flags_ext present_stage = {};
ktl::u64 time_domain_id;
};

struct hdr_metadata_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_hdr_metadata_ext;
const void * next = {};
ktl::api::xycolor_ext display_primary_red;
ktl::api::xycolor_ext display_primary_green;
ktl::api::xycolor_ext display_primary_blue;
ktl::api::xycolor_ext white_point;
float max_luminance;
float min_luminance;
float max_content_light_level;
float max_frame_average_light_level;
};

struct hdr_vivid_dynamic_metadata_huawei final
{
ktl::api::structure_type type = ktl::api::structure_type::v_hdr_vivid_dynamic_metadata_huawei;
const void * next = {};
ktl::usize dynamic_metadata_size;
const void * dynamic_metadata;
};

struct display_native_hdr_surface_capabilities_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_native_hdr_surface_capabilities_amd;
void * next = {};
ktl::bool32 local_dimming_support;
};

struct swapchain_display_native_hdr_create_info_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_display_native_hdr_create_info_amd;
const void * next = {};
ktl::bool32 local_dimming_enable;
};

struct refresh_cycle_duration_google final
{
ktl::u64 refresh_duration;
};

struct past_presentation_timing_google final
{
ktl::i32 present_id;
ktl::u64 desired_present_time;
ktl::u64 actual_present_time;
ktl::u64 earliest_present_time;
ktl::u64 present_margin;
};

struct present_times_info_google final
{
ktl::api::structure_type type = ktl::api::structure_type::v_present_times_info_google;
const void * next = {};
ktl::i32 swapchain_count;
const ktl::api::present_time_google * times = {};
};

struct present_time_google final
{
ktl::i32 present_id;
ktl::u64 desired_present_time;
};

struct iossurface_create_info_mvk final
{
ktl::api::structure_type type = ktl::api::structure_type::v_ios_surface_create_info_mvk;
const void * next = {};
ktl::api::iossurface_create_flags_mvk flags = {};
const void * view;
};

struct mac_ossurface_create_info_mvk final
{
ktl::api::structure_type type = ktl::api::structure_type::v_macos_surface_create_info_mvk;
const void * next = {};
ktl::api::mac_ossurface_create_flags_mvk flags = {};
const void * view;
};

struct metal_surface_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_metal_surface_create_info_ext;
const void * next = {};
ktl::api::metal_surface_create_flags_ext flags = {};
const CAMetalLayer * layer;
};

struct viewport_wscaling_nv final
{
float xcoeff;
float ycoeff;
};

struct pipeline_viewport_wscaling_state_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_w_scaling_state_create_info_nv;
const void * next = {};
ktl::bool32 viewport_wscaling_enable;
ktl::i32 viewport_count;
const ktl::api::viewport_wscaling_nv * viewport_wscalings = {};
};

struct viewport_swizzle_nv final
{
ktl::api::viewport_coordinate_swizzle_nv x;
ktl::api::viewport_coordinate_swizzle_nv y;
ktl::api::viewport_coordinate_swizzle_nv z;
ktl::api::viewport_coordinate_swizzle_nv w;
};

struct pipeline_viewport_swizzle_state_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_swizzle_state_create_info_nv;
const void * next = {};
ktl::api::pipeline_viewport_swizzle_state_create_flags_nv flags = {};
ktl::i32 viewport_count;
const ktl::api::viewport_swizzle_nv * viewport_swizzles;
};

struct physical_device_discard_rectangle_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_discard_rectangle_properties_ext;
void * next = {};
ktl::i32 max_discard_rectangles;
};

struct pipeline_discard_rectangle_state_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_discard_rectangle_state_create_info_ext;
const void * next = {};
ktl::api::pipeline_discard_rectangle_state_create_flags_ext flags = {};
ktl::api::discard_rectangle_mode_ext discard_rectangle_mode;
ktl::i32 discard_rectangle_count = {};
const ktl::api::rect2d * discard_rectangles;
};

struct physical_device_multiview_per_view_attributes_properties_nvx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multiview_per_view_attributes_properties_nvx;
void * next = {};
ktl::bool32 per_view_position_all_components;
};

struct input_attachment_aspect_reference final
{
ktl::i32 subpass;
ktl::i32 input_attachment_index;
ktl::api::image_aspect_flags aspect_mask;
};

using input_attachment_aspect_reference_khr = input_attachment_aspect_reference;

struct render_pass_input_attachment_aspect_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_input_attachment_aspect_create_info;
const void * next = {};
ktl::i32 aspect_reference_count;
const ktl::api::input_attachment_aspect_reference * aspect_references;
};

using render_pass_input_attachment_aspect_create_info_khr = render_pass_input_attachment_aspect_create_info;

struct physical_device_surface_info2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_surface_info_2_khr;
const void * next = {};
ktl::api::surface_khr surface = {};
};

struct surface_capabilities2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_capabilities_2_khr;
void * next = {};
ktl::api::surface_capabilities_khr surface_capabilities;
};

struct surface_format2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_format_2_khr;
void * next = {};
ktl::api::surface_format_khr surface_format;
};

struct display_properties2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_properties_2_khr;
void * next = {};
ktl::api::display_properties_khr display_properties;
};

struct display_plane_properties2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_plane_properties_2_khr;
void * next = {};
ktl::api::display_plane_properties_khr display_plane_properties;
};

struct display_mode_properties2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_mode_properties_2_khr;
void * next = {};
ktl::api::display_mode_properties_khr display_mode_properties;
};

struct display_mode_stereo_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_mode_stereo_properties_nv;
void * next = {};
ktl::bool32 hdmi3dsupported;
};

struct display_plane_info2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_plane_info_2_khr;
const void * next = {};
ktl::api::display_mode_khr mode;
ktl::i32 plane_index;
};

struct display_plane_capabilities2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_display_plane_capabilities_2_khr;
void * next = {};
ktl::api::display_plane_capabilities_khr capabilities;
};

struct shared_present_surface_capabilities_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_shared_present_surface_capabilities_khr;
void * next = {};
ktl::api::image_usage_flags shared_present_supported_usage_flags = {};
};

struct physical_device16bit_storage_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_16bit_storage_features;
void * next = {};
ktl::bool32 storage_buffer16bit_access;
ktl::bool32 uniform_and_storage_buffer16bit_access;
ktl::bool32 storage_push_constant16;
ktl::bool32 storage_input_output16;
};

using physical_device16bit_storage_features_khr = physical_device16bit_storage_features;

struct physical_device_subgroup_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_subgroup_properties;
void * next = {};
ktl::i32 subgroup_size;
ktl::api::shader_stage_flags supported_stages;
ktl::api::subgroup_feature_flags supported_operations;
ktl::bool32 quad_operations_in_all_stages;
};

struct physical_device_shader_subgroup_extended_types_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_subgroup_extended_types_features;
void * next = {};
ktl::bool32 shader_subgroup_extended_types;
};

using physical_device_shader_subgroup_extended_types_features_khr = physical_device_shader_subgroup_extended_types_features;

struct buffer_memory_requirements_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_memory_requirements_info_2;
const void * next = {};
ktl::api::buffer buffer;
};

using buffer_memory_requirements_info2khr = buffer_memory_requirements_info2;

struct device_buffer_memory_requirements final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_buffer_memory_requirements;
const void * next = {};
const ktl::api::buffer_create_info * create_info;
};

using device_buffer_memory_requirements_khr = device_buffer_memory_requirements;

struct image_memory_requirements_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_memory_requirements_info_2;
const void * next = {};
ktl::api::image image;
};

using image_memory_requirements_info2khr = image_memory_requirements_info2;

struct image_sparse_memory_requirements_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_sparse_memory_requirements_info_2;
const void * next = {};
ktl::api::image image;
};

using image_sparse_memory_requirements_info2khr = image_sparse_memory_requirements_info2;

struct device_image_memory_requirements final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_image_memory_requirements;
const void * next = {};
const ktl::api::image_create_info * create_info;
ktl::api::image_aspect_flag_bits plane_aspect = {};
};

using device_image_memory_requirements_khr = device_image_memory_requirements;

struct memory_requirements2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_requirements_2;
void * next = {};
ktl::api::memory_requirements memory_requirements;
};

using memory_requirements2khr = memory_requirements2;

struct sparse_image_memory_requirements2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sparse_image_memory_requirements_2;
void * next = {};
ktl::api::sparse_image_memory_requirements memory_requirements;
};

using sparse_image_memory_requirements2khr = sparse_image_memory_requirements2;

struct physical_device_point_clipping_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_point_clipping_properties;
void * next = {};
ktl::api::point_clipping_behavior point_clipping_behavior;
};

using physical_device_point_clipping_properties_khr = physical_device_point_clipping_properties;

struct memory_dedicated_requirements final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_dedicated_requirements;
void * next = {};
ktl::bool32 prefers_dedicated_allocation;
ktl::bool32 requires_dedicated_allocation;
};

using memory_dedicated_requirements_khr = memory_dedicated_requirements;

struct memory_dedicated_allocate_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_dedicated_allocate_info;
const void * next = {};
ktl::api::image image = {};
ktl::api::buffer buffer = {};
};

using memory_dedicated_allocate_info_khr = memory_dedicated_allocate_info;

struct image_view_usage_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_view_usage_create_info;
const void * next = {};
ktl::api::image_usage_flags usage;
};

struct image_view_sliced_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_view_sliced_create_info_ext;
const void * next = {};
ktl::i32 slice_offset;
ktl::i32 slice_count;
};

using image_view_usage_create_info_khr = image_view_usage_create_info;

struct pipeline_tessellation_domain_origin_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_tessellation_domain_origin_state_create_info;
const void * next = {};
ktl::api::tessellation_domain_origin domain_origin;
};

using pipeline_tessellation_domain_origin_state_create_info_khr = pipeline_tessellation_domain_origin_state_create_info;

struct sampler_ycbcr_conversion_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_ycbcr_conversion_info;
const void * next = {};
ktl::api::sampler_ycbcr_conversion conversion;
};

using sampler_ycbcr_conversion_info_khr = sampler_ycbcr_conversion_info;

struct sampler_ycbcr_conversion_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_ycbcr_conversion_create_info;
const void * next = {};
ktl::api::format format;
ktl::api::sampler_ycbcr_model_conversion ycbcr_model;
ktl::api::sampler_ycbcr_range ycbcr_range;
ktl::api::component_mapping components;
ktl::api::chroma_location x_chroma_offset;
ktl::api::chroma_location y_chroma_offset;
ktl::api::filter chroma_filter;
const ktl::bool32 force_explicit_reconstruction;
};

using sampler_ycbcr_conversion_create_info_khr = sampler_ycbcr_conversion_create_info;

struct bind_image_plane_memory_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_image_plane_memory_info;
const void * next = {};
ktl::api::image_aspect_flag_bits plane_aspect;
};

using bind_image_plane_memory_info_khr = bind_image_plane_memory_info;

struct image_plane_memory_requirements_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_plane_memory_requirements_info;
const void * next = {};
ktl::api::image_aspect_flag_bits plane_aspect;
};

using image_plane_memory_requirements_info_khr = image_plane_memory_requirements_info;

struct physical_device_sampler_ycbcr_conversion_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_sampler_ycbcr_conversion_features;
void * next = {};
ktl::bool32 sampler_ycbcr_conversion;
};

using physical_device_sampler_ycbcr_conversion_features_khr = physical_device_sampler_ycbcr_conversion_features;

struct sampler_ycbcr_conversion_image_format_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_ycbcr_conversion_image_format_properties;
void * next = {};
ktl::i32 combined_image_sampler_descriptor_count;
};

using sampler_ycbcr_conversion_image_format_properties_khr = sampler_ycbcr_conversion_image_format_properties;

struct texture_lodgather_format_properties_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_texture_lod_gather_format_properties_amd;
void * next = {};
ktl::bool32 supports_texture_gather_lodbias_amd;
};

struct conditional_rendering_begin_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_conditional_rendering_begin_info_ext;
const void * next = {};
ktl::api::buffer buffer;
ktl::dvsize offset;
ktl::api::conditional_rendering_flags_ext flags = {};
};

struct protected_submit_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_protected_submit_info;
const void * next = {};
ktl::bool32 protected_submit;
};

struct physical_device_protected_memory_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_protected_memory_features;
void * next = {};
ktl::bool32 protected_memory;
};

struct physical_device_protected_memory_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_protected_memory_properties;
void * next = {};
ktl::bool32 protected_no_fault;
};

struct device_queue_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_queue_info_2;
const void * next = {};
ktl::api::device_queue_create_flags flags = {};
ktl::i32 queue_family_index;
ktl::i32 queue_index;
};

struct pipeline_coverage_to_color_state_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_coverage_to_color_state_create_info_nv;
const void * next = {};
ktl::api::pipeline_coverage_to_color_state_create_flags_nv flags = {};
ktl::bool32 coverage_to_color_enable;
ktl::i32 coverage_to_color_location = {};
};

struct physical_device_sampler_filter_minmax_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_sampler_filter_minmax_properties;
void * next = {};
ktl::bool32 filter_minmax_single_component_formats;
ktl::bool32 filter_minmax_image_component_mapping;
};

using physical_device_sampler_filter_minmax_properties_ext = physical_device_sampler_filter_minmax_properties;

struct sample_location_ext final
{
float x;
float y;
};

struct sample_locations_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sample_locations_info_ext;
const void * next = {};
ktl::api::sample_count_flag_bits sample_locations_per_pixel;
ktl::api::extent2d sample_location_grid_size;
ktl::i32 sample_locations_count = {};
const ktl::api::sample_location_ext * sample_locations;
};

struct attachment_sample_locations_ext final
{
ktl::i32 attachment_index;
ktl::api::sample_locations_info_ext sample_locations_info;
};

struct subpass_sample_locations_ext final
{
ktl::i32 subpass_index;
ktl::api::sample_locations_info_ext sample_locations_info;
};

struct render_pass_sample_locations_begin_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_sample_locations_begin_info_ext;
const void * next = {};
ktl::i32 attachment_initial_sample_locations_count = {};
const ktl::api::attachment_sample_locations_ext * attachment_initial_sample_locations;
ktl::i32 post_subpass_sample_locations_count = {};
const ktl::api::subpass_sample_locations_ext * post_subpass_sample_locations;
};

struct pipeline_sample_locations_state_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_sample_locations_state_create_info_ext;
const void * next = {};
ktl::bool32 sample_locations_enable;
ktl::api::sample_locations_info_ext sample_locations_info;
};

struct physical_device_sample_locations_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_sample_locations_properties_ext;
void * next = {};
ktl::api::sample_count_flags sample_location_sample_counts;
ktl::api::extent2d max_sample_location_grid_size;
float sample_location_coordinate_range[2];
ktl::i32 sample_location_sub_pixel_bits;
ktl::bool32 variable_sample_locations;
};

struct multisample_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_multisample_properties_ext;
void * next = {};
ktl::api::extent2d max_sample_location_grid_size;
};

struct sampler_reduction_mode_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_reduction_mode_create_info;
const void * next = {};
ktl::api::sampler_reduction_mode reduction_mode;
};

using sampler_reduction_mode_create_info_ext = sampler_reduction_mode_create_info;

struct physical_device_blend_operation_advanced_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_blend_operation_advanced_features_ext;
void * next = {};
ktl::bool32 advanced_blend_coherent_operations;
};

struct physical_device_multi_draw_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multi_draw_features_ext;
void * next = {};
ktl::bool32 multi_draw;
};

struct physical_device_blend_operation_advanced_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_blend_operation_advanced_properties_ext;
void * next = {};
ktl::i32 advanced_blend_max_color_attachments;
ktl::bool32 advanced_blend_independent_blend;
ktl::bool32 advanced_blend_non_premultiplied_src_color;
ktl::bool32 advanced_blend_non_premultiplied_dst_color;
ktl::bool32 advanced_blend_correlated_overlap;
ktl::bool32 advanced_blend_all_operations;
};

struct pipeline_color_blend_advanced_state_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_color_blend_advanced_state_create_info_ext;
const void * next = {};
ktl::bool32 src_premultiplied;
ktl::bool32 dst_premultiplied;
ktl::api::blend_overlap_ext blend_overlap;
};

struct physical_device_inline_uniform_block_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_inline_uniform_block_features;
void * next = {};
ktl::bool32 inline_uniform_block;
ktl::bool32 descriptor_binding_inline_uniform_block_update_after_bind;
};

using physical_device_inline_uniform_block_features_ext = physical_device_inline_uniform_block_features;

struct physical_device_inline_uniform_block_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_inline_uniform_block_properties;
void * next = {};
ktl::i32 max_inline_uniform_block_size;
ktl::i32 max_per_stage_descriptor_inline_uniform_blocks;
ktl::i32 max_per_stage_descriptor_update_after_bind_inline_uniform_blocks;
ktl::i32 max_descriptor_set_inline_uniform_blocks;
ktl::i32 max_descriptor_set_update_after_bind_inline_uniform_blocks;
};

using physical_device_inline_uniform_block_properties_ext = physical_device_inline_uniform_block_properties;

struct write_descriptor_set_inline_uniform_block final
{
ktl::api::structure_type type = ktl::api::structure_type::v_write_descriptor_set_inline_uniform_block;
const void * next = {};
ktl::i32 data_size;
const void * data;
};

using write_descriptor_set_inline_uniform_block_ext = write_descriptor_set_inline_uniform_block;

struct descriptor_pool_inline_uniform_block_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_pool_inline_uniform_block_create_info;
const void * next = {};
ktl::i32 max_inline_uniform_block_bindings;
};

using descriptor_pool_inline_uniform_block_create_info_ext = descriptor_pool_inline_uniform_block_create_info;

struct pipeline_coverage_modulation_state_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_coverage_modulation_state_create_info_nv;
const void * next = {};
ktl::api::pipeline_coverage_modulation_state_create_flags_nv flags = {};
ktl::api::coverage_modulation_mode_nv coverage_modulation_mode;
ktl::bool32 coverage_modulation_table_enable;
ktl::i32 coverage_modulation_table_count = {};
const float * coverage_modulation_table = {};
};

struct image_format_list_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_format_list_create_info;
const void * next = {};
ktl::i32 view_format_count = {};
const ktl::api::format * view_formats;
};

using image_format_list_create_info_khr = image_format_list_create_info;

struct validation_cache_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_validation_cache_create_info_ext;
const void * next = {};
ktl::api::validation_cache_create_flags_ext flags = {};
ktl::usize initial_data_size = {};
const void * initial_data;
};

struct shader_module_validation_cache_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_shader_module_validation_cache_create_info_ext;
const void * next = {};
ktl::api::validation_cache_ext validation_cache;
};

struct physical_device_maintenance3properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_3_properties;
void * next = {};
ktl::i32 max_per_set_descriptors;
ktl::dvsize max_memory_allocation_size;
};

using physical_device_maintenance3properties_khr = physical_device_maintenance3properties;

struct physical_device_maintenance4features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_4_features;
void * next = {};
ktl::bool32 maintenance4;
};

using physical_device_maintenance4features_khr = physical_device_maintenance4features;

struct physical_device_maintenance4properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_4_properties;
void * next = {};
ktl::dvsize max_buffer_size;
};

using physical_device_maintenance4properties_khr = physical_device_maintenance4properties;

struct physical_device_maintenance5features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_5_features;
void * next = {};
ktl::bool32 maintenance5;
};

using physical_device_maintenance5features_khr = physical_device_maintenance5features;

struct physical_device_maintenance5properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_5_properties;
void * next = {};
ktl::bool32 early_fragment_multisample_coverage_after_sample_counting;
ktl::bool32 early_fragment_sample_mask_test_before_sample_counting;
ktl::bool32 depth_stencil_swizzle_one_support;
ktl::bool32 polygon_mode_point_size;
ktl::bool32 non_strict_single_pixel_wide_lines_use_parallelogram;
ktl::bool32 non_strict_wide_lines_use_parallelogram;
};

using physical_device_maintenance5properties_khr = physical_device_maintenance5properties;

struct physical_device_maintenance6features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_6_features;
void * next = {};
ktl::bool32 maintenance6;
};

using physical_device_maintenance6features_khr = physical_device_maintenance6features;

struct physical_device_maintenance6properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_6_properties;
void * next = {};
ktl::bool32 block_texel_view_compatible_multiple_layers;
ktl::i32 max_combined_image_sampler_descriptor_count;
ktl::bool32 fragment_shading_rate_clamp_combiner_inputs;
};

using physical_device_maintenance6properties_khr = physical_device_maintenance6properties;

struct physical_device_maintenance7features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_7_features_khr;
void * next = {};
ktl::bool32 maintenance7;
};

struct physical_device_maintenance7properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_7_properties_khr;
void * next = {};
ktl::bool32 robust_fragment_shading_rate_attachment_access;
ktl::bool32 separate_depth_stencil_attachment_access;
ktl::i32 max_descriptor_set_total_uniform_buffers_dynamic;
ktl::i32 max_descriptor_set_total_storage_buffers_dynamic;
ktl::i32 max_descriptor_set_total_buffers_dynamic;
ktl::i32 max_descriptor_set_update_after_bind_total_uniform_buffers_dynamic;
ktl::i32 max_descriptor_set_update_after_bind_total_storage_buffers_dynamic;
ktl::i32 max_descriptor_set_update_after_bind_total_buffers_dynamic;
};

struct physical_device_layered_api_properties_list_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_layered_api_properties_list_khr;
void * next = {};
ktl::i32 layered_api_count = {};
ktl::api::physical_device_layered_api_properties_khr * layered_apis = {};
};

struct physical_device_layered_api_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_layered_api_properties_khr;
void * next = {};
ktl::i32 vendor_id;
ktl::i32 device_id;
ktl::api::physical_device_layered_api_khr layered_api;
char device_name[KTL_API_MAX_PHYSICAL_DEVICE_NAME_SIZE];
};

struct physical_device_layered_api_vulkan_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_layered_api_vulkan_properties_khr;
void * next = {};
ktl::api::physical_device_properties2 properties;
};

struct physical_device_maintenance8features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_8_features_khr;
void * next = {};
ktl::bool32 maintenance8;
};

struct physical_device_maintenance9features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_9_features_khr;
void * next = {};
ktl::bool32 maintenance9;
};

struct physical_device_maintenance9properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_9_properties_khr;
void * next = {};
ktl::bool32 image2dview_of3dsparse;
ktl::api::default_vertex_attribute_value_khr default_vertex_attribute_value;
};

struct physical_device_maintenance10properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_10_properties_khr;
void * next = {};
ktl::bool32 rgba4opaque_black_swizzled;
ktl::bool32 resolve_srgb_format_applies_transfer_function;
ktl::bool32 resolve_srgb_format_supports_transfer_function_control;
};

struct physical_device_maintenance10features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_10_features_khr;
void * next = {};
ktl::bool32 maintenance10;
};

struct queue_family_ownership_transfer_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_ownership_transfer_properties_khr;
void * next = {};
ktl::i32 optimal_image_transfer_to_queue_families;
};

struct rendering_area_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_rendering_area_info;
const void * next = {};
ktl::i32 view_mask;
ktl::i32 color_attachment_count = {};
const ktl::api::format * color_attachment_formats;
ktl::api::format depth_attachment_format;
ktl::api::format stencil_attachment_format;
};

using rendering_area_info_khr = rendering_area_info;

struct descriptor_set_layout_support final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_layout_support;
void * next = {};
ktl::bool32 supported;
};

using descriptor_set_layout_support_khr = descriptor_set_layout_support;

struct physical_device_shader_draw_parameters_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_draw_parameters_features;
void * next = {};
ktl::bool32 shader_draw_parameters;
};

using physical_device_shader_draw_parameter_features = physical_device_shader_draw_parameters_features;

struct physical_device_shader_float16int8features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_float16_int8_features;
void * next = {};
ktl::bool32 shader_float16;
ktl::bool32 shader_int8;
};

using physical_device_shader_float16int8features_khr = physical_device_shader_float16int8features;

using physical_device_float16int8features_khr = physical_device_shader_float16int8features;

struct physical_device_float_controls_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_float_controls_properties;
void * next = {};
ktl::api::shader_float_controls_independence denorm_behavior_independence;
ktl::api::shader_float_controls_independence rounding_mode_independence;
ktl::bool32 shader_signed_zero_inf_nan_preserve_float16;
ktl::bool32 shader_signed_zero_inf_nan_preserve_float32;
ktl::bool32 shader_signed_zero_inf_nan_preserve_float64;
ktl::bool32 shader_denorm_preserve_float16;
ktl::bool32 shader_denorm_preserve_float32;
ktl::bool32 shader_denorm_preserve_float64;
ktl::bool32 shader_denorm_flush_to_zero_float16;
ktl::bool32 shader_denorm_flush_to_zero_float32;
ktl::bool32 shader_denorm_flush_to_zero_float64;
ktl::bool32 shader_rounding_mode_rtefloat16;
ktl::bool32 shader_rounding_mode_rtefloat32;
ktl::bool32 shader_rounding_mode_rtefloat64;
ktl::bool32 shader_rounding_mode_rtzfloat16;
ktl::bool32 shader_rounding_mode_rtzfloat32;
ktl::bool32 shader_rounding_mode_rtzfloat64;
};

using physical_device_float_controls_properties_khr = physical_device_float_controls_properties;

struct physical_device_host_query_reset_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_host_query_reset_features;
void * next = {};
ktl::bool32 host_query_reset;
};

using physical_device_host_query_reset_features_ext = physical_device_host_query_reset_features;

struct native_buffer_usage2android final
{
ktl::u64 consumer;
ktl::u64 producer;
};

struct native_buffer_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_native_buffer_android;
const void * next = {};
const void * handle;
int stride;
int format;
int usage;
ktl::api::native_buffer_usage2android usage2;
};

struct swapchain_image_create_info_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_image_create_info_android;
const void * next = {};
ktl::api::swapchain_image_usage_flags_android usage;
};

struct physical_device_presentation_properties_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_presentation_properties_android;
void * next = {};
ktl::bool32 shared_image;
};

struct shader_resource_usage_amd final
{
ktl::i32 num_used_vgprs;
ktl::i32 num_used_sgprs;
ktl::i32 lds_size_per_local_work_group;
ktl::usize lds_usage_size_in_bytes;
ktl::usize scratch_mem_usage_in_bytes;
};

struct shader_statistics_info_amd final
{
ktl::api::shader_stage_flags shader_stage_mask;
ktl::api::shader_resource_usage_amd resource_usage;
ktl::i32 num_physical_vgprs;
ktl::i32 num_physical_sgprs;
ktl::i32 num_available_vgprs;
ktl::i32 num_available_sgprs;
ktl::i32 compute_work_group_size[3];
};

struct device_queue_global_priority_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_queue_global_priority_create_info;
const void * next = {};
ktl::api::queue_global_priority global_priority;
};

using device_queue_global_priority_create_info_khr = device_queue_global_priority_create_info;

using device_queue_global_priority_create_info_ext = device_queue_global_priority_create_info;

struct physical_device_global_priority_query_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_global_priority_query_features;
void * next = {};
ktl::bool32 global_priority_query;
};

using physical_device_global_priority_query_features_khr = physical_device_global_priority_query_features;

using physical_device_global_priority_query_features_ext = physical_device_global_priority_query_features;

struct queue_family_global_priority_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_global_priority_properties;
void * next = {};
ktl::i32 priority_count;
ktl::api::queue_global_priority priorities[KTL_API_MAX_GLOBAL_PRIORITY_SIZE];
};

using queue_family_global_priority_properties_khr = queue_family_global_priority_properties;

using queue_family_global_priority_properties_ext = queue_family_global_priority_properties;

struct debug_utils_object_name_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_debug_utils_object_name_info_ext;
const void * next = {};
ktl::api::object_type object_type;
ktl::u64 object_handle;
const char * object_name = {};
};

struct debug_utils_object_tag_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_debug_utils_object_tag_info_ext;
const void * next = {};
ktl::api::object_type object_type;
ktl::u64 object_handle;
ktl::u64 tag_name;
ktl::usize tag_size;
const void * tag;
};

struct debug_utils_label_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_debug_utils_label_ext;
const void * next = {};
const char * label_name;
float color[4];
};

struct debug_utils_messenger_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_debug_utils_messenger_create_info_ext;
const void * next = {};
ktl::api::debug_utils_messenger_create_flags_ext flags = {};
ktl::api::debug_utils_message_severity_flags_ext message_severity;
ktl::api::debug_utils_message_type_flags_ext message_type;
ktl::api::pfn_vk_debug_utils_messenger_callback_ext pfn_user_callback;
void * user_data = {};
};

struct debug_utils_messenger_callback_data_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_debug_utils_messenger_callback_data_ext;
const void * next = {};
ktl::api::debug_utils_messenger_callback_data_flags_ext flags = {};
const char * message_id_name = {};
ktl::i32 message_id_number;
const char * message = {};
ktl::i32 queue_label_count = {};
const ktl::api::debug_utils_label_ext * queue_labels;
ktl::i32 cmd_buf_label_count = {};
const ktl::api::debug_utils_label_ext * cmd_buf_labels;
ktl::i32 object_count = {};
const ktl::api::debug_utils_object_name_info_ext * objects;
};

struct physical_device_device_memory_report_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_memory_report_features_ext;
void * next = {};
ktl::bool32 device_memory_report;
};

struct device_device_memory_report_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_device_memory_report_create_info_ext;
const void * next = {};
ktl::api::device_memory_report_flags_ext flags;
ktl::api::pfn_vk_device_memory_report_callback_ext pfn_user_callback;
void * user_data = {};
};

struct device_memory_report_callback_data_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_memory_report_callback_data_ext;
void * next = {};
ktl::api::device_memory_report_flags_ext flags;
ktl::api::device_memory_report_event_type_ext type;
ktl::u64 memory_object_id;
ktl::dvsize size;
ktl::api::object_type object_type;
ktl::u64 object_handle;
ktl::i32 heap_index;
};

struct import_memory_host_pointer_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_host_pointer_info_ext;
const void * next = {};
ktl::api::external_memory_handle_type_flag_bits handle_type;
void * host_pointer;
};

struct memory_host_pointer_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_host_pointer_properties_ext;
void * next = {};
ktl::i32 memory_type_bits;
};

struct physical_device_external_memory_host_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_memory_host_properties_ext;
void * next = {};
ktl::dvsize min_imported_host_pointer_alignment;
};

struct physical_device_conservative_rasterization_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_conservative_rasterization_properties_ext;
void * next = {};
float primitive_overestimation_size;
float max_extra_primitive_overestimation_size;
float extra_primitive_overestimation_size_granularity;
ktl::bool32 primitive_underestimation;
ktl::bool32 conservative_point_and_line_rasterization;
ktl::bool32 degenerate_triangles_rasterized;
ktl::bool32 degenerate_lines_rasterized;
ktl::bool32 fully_covered_fragment_shader_input_variable;
ktl::bool32 conservative_rasterization_post_depth_coverage;
};

struct calibrated_timestamp_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_calibrated_timestamp_info_khr;
const void * next = {};
ktl::api::time_domain_khr time_domain;
};

using calibrated_timestamp_info_ext = calibrated_timestamp_info_khr;

struct physical_device_shader_core_properties_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_core_properties_amd;
void * next = {};
ktl::i32 shader_engine_count;
ktl::i32 shader_arrays_per_engine_count;
ktl::i32 compute_units_per_shader_array;
ktl::i32 simd_per_compute_unit;
ktl::i32 wavefronts_per_simd;
ktl::i32 wavefront_size;
ktl::i32 sgprs_per_simd;
ktl::i32 min_sgpr_allocation;
ktl::i32 max_sgpr_allocation;
ktl::i32 sgpr_allocation_granularity;
ktl::i32 vgprs_per_simd;
ktl::i32 min_vgpr_allocation;
ktl::i32 max_vgpr_allocation;
ktl::i32 vgpr_allocation_granularity;
};

struct physical_device_shader_core_properties2amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_core_properties_2_amd;
void * next = {};
ktl::api::shader_core_properties_flags_amd shader_core_features;
ktl::i32 active_compute_unit_count;
};

struct pipeline_rasterization_conservative_state_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rasterization_conservative_state_create_info_ext;
const void * next = {};
ktl::api::pipeline_rasterization_conservative_state_create_flags_ext flags = {};
ktl::api::conservative_rasterization_mode_ext conservative_rasterization_mode;
float extra_primitive_overestimation_size;
};

struct physical_device_descriptor_indexing_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_indexing_features;
void * next = {};
ktl::bool32 shader_input_attachment_array_dynamic_indexing;
ktl::bool32 shader_uniform_texel_buffer_array_dynamic_indexing;
ktl::bool32 shader_storage_texel_buffer_array_dynamic_indexing;
ktl::bool32 shader_uniform_buffer_array_non_uniform_indexing;
ktl::bool32 shader_sampled_image_array_non_uniform_indexing;
ktl::bool32 shader_storage_buffer_array_non_uniform_indexing;
ktl::bool32 shader_storage_image_array_non_uniform_indexing;
ktl::bool32 shader_input_attachment_array_non_uniform_indexing;
ktl::bool32 shader_uniform_texel_buffer_array_non_uniform_indexing;
ktl::bool32 shader_storage_texel_buffer_array_non_uniform_indexing;
ktl::bool32 descriptor_binding_uniform_buffer_update_after_bind;
ktl::bool32 descriptor_binding_sampled_image_update_after_bind;
ktl::bool32 descriptor_binding_storage_image_update_after_bind;
ktl::bool32 descriptor_binding_storage_buffer_update_after_bind;
ktl::bool32 descriptor_binding_uniform_texel_buffer_update_after_bind;
ktl::bool32 descriptor_binding_storage_texel_buffer_update_after_bind;
ktl::bool32 descriptor_binding_update_unused_while_pending;
ktl::bool32 descriptor_binding_partially_bound;
ktl::bool32 descriptor_binding_variable_descriptor_count;
ktl::bool32 runtime_descriptor_array;
};

using physical_device_descriptor_indexing_features_ext = physical_device_descriptor_indexing_features;

struct physical_device_descriptor_indexing_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_indexing_properties;
void * next = {};
ktl::i32 max_update_after_bind_descriptors_in_all_pools;
ktl::bool32 shader_uniform_buffer_array_non_uniform_indexing_native;
ktl::bool32 shader_sampled_image_array_non_uniform_indexing_native;
ktl::bool32 shader_storage_buffer_array_non_uniform_indexing_native;
ktl::bool32 shader_storage_image_array_non_uniform_indexing_native;
ktl::bool32 shader_input_attachment_array_non_uniform_indexing_native;
ktl::bool32 robust_buffer_access_update_after_bind;
ktl::bool32 quad_divergent_implicit_lod;
ktl::i32 max_per_stage_descriptor_update_after_bind_samplers;
ktl::i32 max_per_stage_descriptor_update_after_bind_uniform_buffers;
ktl::i32 max_per_stage_descriptor_update_after_bind_storage_buffers;
ktl::i32 max_per_stage_descriptor_update_after_bind_sampled_images;
ktl::i32 max_per_stage_descriptor_update_after_bind_storage_images;
ktl::i32 max_per_stage_descriptor_update_after_bind_input_attachments;
ktl::i32 max_per_stage_update_after_bind_resources;
ktl::i32 max_descriptor_set_update_after_bind_samplers;
ktl::i32 max_descriptor_set_update_after_bind_uniform_buffers;
ktl::i32 max_descriptor_set_update_after_bind_uniform_buffers_dynamic;
ktl::i32 max_descriptor_set_update_after_bind_storage_buffers;
ktl::i32 max_descriptor_set_update_after_bind_storage_buffers_dynamic;
ktl::i32 max_descriptor_set_update_after_bind_sampled_images;
ktl::i32 max_descriptor_set_update_after_bind_storage_images;
ktl::i32 max_descriptor_set_update_after_bind_input_attachments;
};

using physical_device_descriptor_indexing_properties_ext = physical_device_descriptor_indexing_properties;

struct descriptor_set_layout_binding_flags_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_layout_binding_flags_create_info;
const void * next = {};
ktl::i32 binding_count = {};
const ktl::api::descriptor_binding_flags * binding_flags;
};

using descriptor_set_layout_binding_flags_create_info_ext = descriptor_set_layout_binding_flags_create_info;

struct descriptor_set_variable_descriptor_count_allocate_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_variable_descriptor_count_allocate_info;
const void * next = {};
ktl::i32 descriptor_set_count = {};
const ktl::i32 * descriptor_counts;
};

using descriptor_set_variable_descriptor_count_allocate_info_ext = descriptor_set_variable_descriptor_count_allocate_info;

struct descriptor_set_variable_descriptor_count_layout_support final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_variable_descriptor_count_layout_support;
void * next = {};
ktl::i32 max_variable_descriptor_count;
};

using descriptor_set_variable_descriptor_count_layout_support_ext = descriptor_set_variable_descriptor_count_layout_support;

struct attachment_description2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_attachment_description_2;
const void * next = {};
ktl::api::attachment_description_flags flags = {};
ktl::api::format format;
ktl::api::sample_count_flag_bits samples;
ktl::api::attachment_load_op load_op;
ktl::api::attachment_store_op store_op;
ktl::api::attachment_load_op stencil_load_op;
ktl::api::attachment_store_op stencil_store_op;
ktl::api::image_layout initial_layout;
ktl::api::image_layout final_layout;
};

using attachment_description2khr = attachment_description2;

struct attachment_reference2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_attachment_reference_2;
const void * next = {};
ktl::i32 attachment;
ktl::api::image_layout layout;
ktl::api::image_aspect_flags aspect_mask;
};

using attachment_reference2khr = attachment_reference2;

struct subpass_description2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_subpass_description_2;
const void * next = {};
ktl::api::subpass_description_flags flags = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::i32 view_mask;
ktl::i32 input_attachment_count = {};
const ktl::api::attachment_reference2 * input_attachments;
ktl::i32 color_attachment_count = {};
const ktl::api::attachment_reference2 * color_attachments;
const ktl::api::attachment_reference2 * resolve_attachments = {};
const ktl::api::attachment_reference2 * depth_stencil_attachment = {};
ktl::i32 preserve_attachment_count = {};
const ktl::i32 * preserve_attachments;
};

using subpass_description2khr = subpass_description2;

struct subpass_dependency2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_subpass_dependency_2;
const void * next = {};
ktl::i32 src_subpass;
ktl::i32 dst_subpass;
ktl::api::pipeline_stage_flags src_stage_mask = {};
ktl::api::pipeline_stage_flags dst_stage_mask = {};
ktl::api::access_flags src_access_mask = {};
ktl::api::access_flags dst_access_mask = {};
ktl::api::dependency_flags dependency_flags = {};
ktl::i32 view_offset;
};

using subpass_dependency2khr = subpass_dependency2;

struct render_pass_create_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_create_info_2;
const void * next = {};
ktl::api::render_pass_create_flags flags = {};
ktl::i32 attachment_count = {};
const ktl::api::attachment_description2 * attachments;
ktl::i32 subpass_count;
const ktl::api::subpass_description2 * subpasses;
ktl::i32 dependency_count = {};
const ktl::api::subpass_dependency2 * dependencies;
ktl::i32 correlated_view_mask_count = {};
const ktl::i32 * correlated_view_masks;
};

using render_pass_create_info2khr = render_pass_create_info2;

struct subpass_begin_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_subpass_begin_info;
const void * next = {};
ktl::api::subpass_contents contents;
};

using subpass_begin_info_khr = subpass_begin_info;

struct subpass_end_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_subpass_end_info;
const void * next = {};
};

using subpass_end_info_khr = subpass_end_info;

struct physical_device_timeline_semaphore_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_timeline_semaphore_features;
void * next = {};
ktl::bool32 timeline_semaphore;
};

using physical_device_timeline_semaphore_features_khr = physical_device_timeline_semaphore_features;

struct physical_device_timeline_semaphore_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_timeline_semaphore_properties;
void * next = {};
ktl::u64 max_timeline_semaphore_value_difference;
};

using physical_device_timeline_semaphore_properties_khr = physical_device_timeline_semaphore_properties;

struct semaphore_type_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_type_create_info;
const void * next = {};
ktl::api::semaphore_type semaphore_type;
ktl::u64 initial_value;
};

using semaphore_type_create_info_khr = semaphore_type_create_info;

struct timeline_semaphore_submit_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_timeline_semaphore_submit_info;
const void * next = {};
ktl::i32 wait_semaphore_value_count = {};
const ktl::u64 * wait_semaphore_values = {};
ktl::i32 signal_semaphore_value_count = {};
const ktl::u64 * signal_semaphore_values = {};
};

using timeline_semaphore_submit_info_khr = timeline_semaphore_submit_info;

struct semaphore_wait_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_wait_info;
const void * next = {};
ktl::api::semaphore_wait_flags flags = {};
ktl::i32 semaphore_count;
const ktl::api::semaphore * semaphores;
const ktl::u64 * values;
};

using semaphore_wait_info_khr = semaphore_wait_info;

struct semaphore_signal_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_signal_info;
const void * next = {};
ktl::api::semaphore semaphore;
ktl::u64 value;
};

using semaphore_signal_info_khr = semaphore_signal_info;

struct vertex_input_binding_divisor_description final
{
ktl::i32 binding;
ktl::i32 divisor;
};

using vertex_input_binding_divisor_description_khr = vertex_input_binding_divisor_description;

using vertex_input_binding_divisor_description_ext = vertex_input_binding_divisor_description;

struct pipeline_vertex_input_divisor_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_vertex_input_divisor_state_create_info;
const void * next = {};
ktl::i32 vertex_binding_divisor_count;
const ktl::api::vertex_input_binding_divisor_description * vertex_binding_divisors;
};

using pipeline_vertex_input_divisor_state_create_info_khr = pipeline_vertex_input_divisor_state_create_info;

using pipeline_vertex_input_divisor_state_create_info_ext = pipeline_vertex_input_divisor_state_create_info;

struct physical_device_vertex_attribute_divisor_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vertex_attribute_divisor_properties_ext;
void * next = {};
ktl::i32 max_vertex_attrib_divisor;
};

struct physical_device_vertex_attribute_divisor_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vertex_attribute_divisor_properties;
void * next = {};
ktl::i32 max_vertex_attrib_divisor;
ktl::bool32 supports_non_zero_first_instance;
};

using physical_device_vertex_attribute_divisor_properties_khr = physical_device_vertex_attribute_divisor_properties;

struct physical_device_pcibus_info_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pci_bus_info_properties_ext;
void * next = {};
ktl::i32 pci_domain;
ktl::i32 pci_bus;
ktl::i32 pci_device;
ktl::i32 pci_function;
};

struct import_android_hardware_buffer_info_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_android_hardware_buffer_info_android;
const void * next = {};
AHardwareBuffer * buffer;
};

struct android_hardware_buffer_usage_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_android_hardware_buffer_usage_android;
void * next = {};
ktl::u64 android_hardware_buffer_usage;
};

struct android_hardware_buffer_properties_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_android_hardware_buffer_properties_android;
void * next = {};
ktl::dvsize allocation_size;
ktl::i32 memory_type_bits;
};

struct memory_get_android_hardware_buffer_info_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_android_hardware_buffer_info_android;
const void * next = {};
ktl::api::device_memory memory;
};

struct android_hardware_buffer_format_properties_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_android_hardware_buffer_format_properties_android;
void * next = {};
ktl::api::format format;
ktl::u64 external_format;
ktl::api::format_feature_flags format_features;
ktl::api::component_mapping sampler_ycbcr_conversion_components;
ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
ktl::api::sampler_ycbcr_range suggested_ycbcr_range;
ktl::api::chroma_location suggested_xchroma_offset;
ktl::api::chroma_location suggested_ychroma_offset;
};

struct command_buffer_inheritance_conditional_rendering_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_buffer_inheritance_conditional_rendering_info_ext;
const void * next = {};
ktl::bool32 conditional_rendering_enable;
};

struct external_format_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_format_android;
void * next = {};
ktl::u64 external_format;
};

struct physical_device8bit_storage_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_8bit_storage_features;
void * next = {};
ktl::bool32 storage_buffer8bit_access;
ktl::bool32 uniform_and_storage_buffer8bit_access;
ktl::bool32 storage_push_constant8;
};

using physical_device8bit_storage_features_khr = physical_device8bit_storage_features;

struct physical_device_conditional_rendering_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_conditional_rendering_features_ext;
void * next = {};
ktl::bool32 conditional_rendering;
ktl::bool32 inherited_conditional_rendering;
};

struct physical_device_vulkan_memory_model_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_memory_model_features;
void * next = {};
ktl::bool32 vulkan_memory_model;
ktl::bool32 vulkan_memory_model_device_scope;
ktl::bool32 vulkan_memory_model_availability_visibility_chains;
};

using physical_device_vulkan_memory_model_features_khr = physical_device_vulkan_memory_model_features;

struct physical_device_shader_atomic_int64features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_atomic_int64_features;
void * next = {};
ktl::bool32 shader_buffer_int64atomics;
ktl::bool32 shader_shared_int64atomics;
};

using physical_device_shader_atomic_int64features_khr = physical_device_shader_atomic_int64features;

struct physical_device_shader_atomic_float_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_atomic_float_features_ext;
void * next = {};
ktl::bool32 shader_buffer_float32atomics;
ktl::bool32 shader_buffer_float32atomic_add;
ktl::bool32 shader_buffer_float64atomics;
ktl::bool32 shader_buffer_float64atomic_add;
ktl::bool32 shader_shared_float32atomics;
ktl::bool32 shader_shared_float32atomic_add;
ktl::bool32 shader_shared_float64atomics;
ktl::bool32 shader_shared_float64atomic_add;
ktl::bool32 shader_image_float32atomics;
ktl::bool32 shader_image_float32atomic_add;
ktl::bool32 sparse_image_float32atomics;
ktl::bool32 sparse_image_float32atomic_add;
};

struct physical_device_shader_atomic_float2features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_atomic_float_2_features_ext;
void * next = {};
ktl::bool32 shader_buffer_float16atomics;
ktl::bool32 shader_buffer_float16atomic_add;
ktl::bool32 shader_buffer_float16atomic_min_max;
ktl::bool32 shader_buffer_float32atomic_min_max;
ktl::bool32 shader_buffer_float64atomic_min_max;
ktl::bool32 shader_shared_float16atomics;
ktl::bool32 shader_shared_float16atomic_add;
ktl::bool32 shader_shared_float16atomic_min_max;
ktl::bool32 shader_shared_float32atomic_min_max;
ktl::bool32 shader_shared_float64atomic_min_max;
ktl::bool32 shader_image_float32atomic_min_max;
ktl::bool32 sparse_image_float32atomic_min_max;
};

struct physical_device_vertex_attribute_divisor_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vertex_attribute_divisor_features;
void * next = {};
ktl::bool32 vertex_attribute_instance_rate_divisor;
ktl::bool32 vertex_attribute_instance_rate_zero_divisor;
};

using physical_device_vertex_attribute_divisor_features_khr = physical_device_vertex_attribute_divisor_features;

using physical_device_vertex_attribute_divisor_features_ext = physical_device_vertex_attribute_divisor_features;

struct queue_family_checkpoint_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_checkpoint_properties_nv;
void * next = {};
ktl::api::pipeline_stage_flags checkpoint_execution_stage_mask;
};

struct checkpoint_data_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_checkpoint_data_nv;
void * next = {};
ktl::api::pipeline_stage_flag_bits stage;
void * checkpoint_marker;
};

struct physical_device_depth_stencil_resolve_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_depth_stencil_resolve_properties;
void * next = {};
ktl::api::resolve_mode_flags supported_depth_resolve_modes;
ktl::api::resolve_mode_flags supported_stencil_resolve_modes;
ktl::bool32 independent_resolve_none;
ktl::bool32 independent_resolve;
};

using physical_device_depth_stencil_resolve_properties_khr = physical_device_depth_stencil_resolve_properties;

struct subpass_description_depth_stencil_resolve final
{
ktl::api::structure_type type = ktl::api::structure_type::v_subpass_description_depth_stencil_resolve;
const void * next = {};
ktl::api::resolve_mode_flag_bits depth_resolve_mode;
ktl::api::resolve_mode_flag_bits stencil_resolve_mode;
const ktl::api::attachment_reference2 * depth_stencil_resolve_attachment = {};
};

using subpass_description_depth_stencil_resolve_khr = subpass_description_depth_stencil_resolve;

struct image_view_astcdecode_mode_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_view_astc_decode_mode_ext;
const void * next = {};
ktl::api::format decode_mode;
};

struct physical_device_astcdecode_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_astc_decode_features_ext;
void * next = {};
ktl::bool32 decode_mode_shared_exponent;
};

struct physical_device_transform_feedback_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_transform_feedback_features_ext;
void * next = {};
ktl::bool32 transform_feedback;
ktl::bool32 geometry_streams;
};

struct physical_device_transform_feedback_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_transform_feedback_properties_ext;
void * next = {};
ktl::i32 max_transform_feedback_streams;
ktl::i32 max_transform_feedback_buffers;
ktl::dvsize max_transform_feedback_buffer_size;
ktl::i32 max_transform_feedback_stream_data_size;
ktl::i32 max_transform_feedback_buffer_data_size;
ktl::i32 max_transform_feedback_buffer_data_stride;
ktl::bool32 transform_feedback_queries;
ktl::bool32 transform_feedback_streams_lines_triangles;
ktl::bool32 transform_feedback_rasterization_stream_select;
ktl::bool32 transform_feedback_draw;
};

struct pipeline_rasterization_state_stream_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rasterization_state_stream_create_info_ext;
const void * next = {};
ktl::api::pipeline_rasterization_state_stream_create_flags_ext flags = {};
ktl::i32 rasterization_stream;
};

struct physical_device_representative_fragment_test_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_representative_fragment_test_features_nv;
void * next = {};
ktl::bool32 representative_fragment_test;
};

struct pipeline_representative_fragment_test_state_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_representative_fragment_test_state_create_info_nv;
const void * next = {};
ktl::bool32 representative_fragment_test_enable;
};

struct physical_device_exclusive_scissor_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_exclusive_scissor_features_nv;
void * next = {};
ktl::bool32 exclusive_scissor;
};

struct pipeline_viewport_exclusive_scissor_state_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_exclusive_scissor_state_create_info_nv;
const void * next = {};
ktl::i32 exclusive_scissor_count = {};
const ktl::api::rect2d * exclusive_scissors;
};

struct physical_device_corner_sampled_image_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_corner_sampled_image_features_nv;
void * next = {};
ktl::bool32 corner_sampled_image;
};

struct physical_device_compute_shader_derivatives_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_compute_shader_derivatives_features_khr;
void * next = {};
ktl::bool32 compute_derivative_group_quads;
ktl::bool32 compute_derivative_group_linear;
};

using physical_device_compute_shader_derivatives_features_nv = physical_device_compute_shader_derivatives_features_khr;

struct physical_device_compute_shader_derivatives_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_compute_shader_derivatives_properties_khr;
void * next = {};
ktl::bool32 mesh_and_task_shader_derivatives;
};

using physical_device_fragment_shader_barycentric_features_nv = physical_device_fragment_shader_barycentric_features_khr;

struct physical_device_shader_image_footprint_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_image_footprint_features_nv;
void * next = {};
ktl::bool32 image_footprint;
};

struct physical_device_dedicated_allocation_image_aliasing_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_dedicated_allocation_image_aliasing_features_nv;
void * next = {};
ktl::bool32 dedicated_allocation_image_aliasing;
};

struct physical_device_copy_memory_indirect_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_copy_memory_indirect_features_khr;
void * next = {};
ktl::bool32 indirect_memory_copy;
ktl::bool32 indirect_memory_to_image_copy;
};

struct physical_device_copy_memory_indirect_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_copy_memory_indirect_features_nv;
void * next = {};
ktl::bool32 indirect_copy;
};

struct physical_device_copy_memory_indirect_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_copy_memory_indirect_properties_khr;
void * next = {};
ktl::api::queue_flags supported_queues;
};

using physical_device_copy_memory_indirect_properties_nv = physical_device_copy_memory_indirect_properties_khr;

struct physical_device_memory_decompression_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_memory_decompression_features_ext;
void * next = {};
ktl::bool32 memory_decompression;
};

using physical_device_memory_decompression_features_nv = physical_device_memory_decompression_features_ext;

struct physical_device_memory_decompression_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_memory_decompression_properties_ext;
void * next = {};
ktl::api::memory_decompression_method_flags_ext decompression_methods;
ktl::u64 max_decompression_indirect_count;
};

using physical_device_memory_decompression_properties_nv = physical_device_memory_decompression_properties_ext;

struct shading_rate_palette_nv final
{
ktl::i32 shading_rate_palette_entry_count;
const ktl::api::shading_rate_palette_entry_nv * shading_rate_palette_entries;
};

struct pipeline_viewport_shading_rate_image_state_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_shading_rate_image_state_create_info_nv;
const void * next = {};
ktl::bool32 shading_rate_image_enable;
ktl::i32 viewport_count = {};
const ktl::api::shading_rate_palette_nv * shading_rate_palettes;
};

struct physical_device_shading_rate_image_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shading_rate_image_features_nv;
void * next = {};
ktl::bool32 shading_rate_image;
ktl::bool32 shading_rate_coarse_sample_order;
};

struct physical_device_shading_rate_image_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shading_rate_image_properties_nv;
void * next = {};
ktl::api::extent2d shading_rate_texel_size;
ktl::i32 shading_rate_palette_size;
ktl::i32 shading_rate_max_coarse_samples;
};

struct physical_device_invocation_mask_features_huawei final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_invocation_mask_features_huawei;
void * next = {};
ktl::bool32 invocation_mask;
};

struct coarse_sample_location_nv final
{
ktl::i32 pixel_x;
ktl::i32 pixel_y;
ktl::i32 sample;
};

struct coarse_sample_order_custom_nv final
{
ktl::api::shading_rate_palette_entry_nv shading_rate;
ktl::i32 sample_count;
ktl::i32 sample_location_count;
const ktl::api::coarse_sample_location_nv * sample_locations;
};

struct pipeline_viewport_coarse_sample_order_state_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_coarse_sample_order_state_create_info_nv;
const void * next = {};
ktl::api::coarse_sample_order_type_nv sample_order_type;
ktl::i32 custom_sample_order_count = {};
const ktl::api::coarse_sample_order_custom_nv * custom_sample_orders;
};

struct physical_device_mesh_shader_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_mesh_shader_features_nv;
void * next = {};
ktl::bool32 task_shader;
ktl::bool32 mesh_shader;
};

struct physical_device_mesh_shader_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_mesh_shader_properties_nv;
void * next = {};
ktl::i32 max_draw_mesh_tasks_count;
ktl::i32 max_task_work_group_invocations;
ktl::i32 max_task_work_group_size[3];
ktl::i32 max_task_total_memory_size;
ktl::i32 max_task_output_count;
ktl::i32 max_mesh_work_group_invocations;
ktl::i32 max_mesh_work_group_size[3];
ktl::i32 max_mesh_total_memory_size;
ktl::i32 max_mesh_output_vertices;
ktl::i32 max_mesh_output_primitives;
ktl::i32 max_mesh_multiview_view_count;
ktl::i32 mesh_output_per_vertex_granularity;
ktl::i32 mesh_output_per_primitive_granularity;
};

struct draw_mesh_tasks_indirect_command_nv final
{
ktl::i32 task_count;
ktl::i32 first_task;
};

struct physical_device_mesh_shader_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_mesh_shader_features_ext;
void * next = {};
ktl::bool32 task_shader;
ktl::bool32 mesh_shader;
ktl::bool32 multiview_mesh_shader;
ktl::bool32 primitive_fragment_shading_rate_mesh_shader;
ktl::bool32 mesh_shader_queries;
};

struct physical_device_mesh_shader_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_mesh_shader_properties_ext;
void * next = {};
ktl::i32 max_task_work_group_total_count;
ktl::i32 max_task_work_group_count[3];
ktl::i32 max_task_work_group_invocations;
ktl::i32 max_task_work_group_size[3];
ktl::i32 max_task_payload_size;
ktl::i32 max_task_shared_memory_size;
ktl::i32 max_task_payload_and_shared_memory_size;
ktl::i32 max_mesh_work_group_total_count;
ktl::i32 max_mesh_work_group_count[3];
ktl::i32 max_mesh_work_group_invocations;
ktl::i32 max_mesh_work_group_size[3];
ktl::i32 max_mesh_shared_memory_size;
ktl::i32 max_mesh_payload_and_shared_memory_size;
ktl::i32 max_mesh_output_memory_size;
ktl::i32 max_mesh_payload_and_output_memory_size;
ktl::i32 max_mesh_output_components;
ktl::i32 max_mesh_output_vertices;
ktl::i32 max_mesh_output_primitives;
ktl::i32 max_mesh_output_layers;
ktl::i32 max_mesh_multiview_view_count;
ktl::i32 mesh_output_per_vertex_granularity;
ktl::i32 mesh_output_per_primitive_granularity;
ktl::i32 max_preferred_task_work_group_invocations;
ktl::i32 max_preferred_mesh_work_group_invocations;
ktl::bool32 prefers_local_invocation_vertex_output;
ktl::bool32 prefers_local_invocation_primitive_output;
ktl::bool32 prefers_compact_vertex_output;
ktl::bool32 prefers_compact_primitive_output;
};

struct draw_mesh_tasks_indirect_command_ext final
{
ktl::i32 group_count_x;
ktl::i32 group_count_y;
ktl::i32 group_count_z;
};

struct ray_tracing_shader_group_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_ray_tracing_shader_group_create_info_nv;
const void * next = {};
ktl::api::ray_tracing_shader_group_type_khr type;
ktl::i32 general_shader;
ktl::i32 closest_hit_shader;
ktl::i32 any_hit_shader;
ktl::i32 intersection_shader;
};

struct ray_tracing_shader_group_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_ray_tracing_shader_group_create_info_khr;
const void * next = {};
ktl::api::ray_tracing_shader_group_type_khr type;
ktl::i32 general_shader;
ktl::i32 closest_hit_shader;
ktl::i32 any_hit_shader;
ktl::i32 intersection_shader;
const void * shader_group_capture_replay_handle = {};
};

struct ray_tracing_pipeline_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_ray_tracing_pipeline_create_info_nv;
const void * next = {};
ktl::api::pipeline_create_flags flags = {};
ktl::i32 stage_count;
const ktl::api::pipeline_shader_stage_create_info * stages;
ktl::i32 group_count;
const ktl::api::ray_tracing_shader_group_create_info_nv * groups;
ktl::i32 max_recursion_depth;
ktl::api::pipeline_layout layout = {};
ktl::api::pipeline base_pipeline_handle = {};
ktl::i32 base_pipeline_index;
};

struct ray_tracing_pipeline_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_ray_tracing_pipeline_create_info_khr;
const void * next = {};
ktl::api::pipeline_create_flags flags = {};
ktl::i32 stage_count = {};
const ktl::api::pipeline_shader_stage_create_info * stages;
ktl::i32 group_count = {};
const ktl::api::ray_tracing_shader_group_create_info_khr * groups;
ktl::i32 max_pipeline_ray_recursion_depth;
const ktl::api::pipeline_library_create_info_khr * library_info = {};
const ktl::api::ray_tracing_pipeline_interface_create_info_khr * library_interface = {};
const ktl::api::pipeline_dynamic_state_create_info * dynamic_state = {};
ktl::api::pipeline_layout layout = {};
ktl::api::pipeline base_pipeline_handle = {};
ktl::i32 base_pipeline_index;
};

struct geometry_triangles_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_geometry_triangles_nv;
const void * next = {};
ktl::api::buffer vertex_data = {};
ktl::dvsize vertex_offset;
ktl::i32 vertex_count;
ktl::dvsize vertex_stride;
ktl::api::format vertex_format;
ktl::api::buffer index_data = {};
ktl::dvsize index_offset;
ktl::i32 index_count;
ktl::api::index_type index_type;
ktl::api::buffer transform_data = {};
ktl::dvsize transform_offset;
};

struct geometry_aabbnv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_geometry_aabb_nv;
const void * next = {};
ktl::api::buffer aabb_data = {};
ktl::i32 num_aabbs;
ktl::i32 stride;
ktl::dvsize offset;
};

struct geometry_data_nv final
{
ktl::api::geometry_triangles_nv triangles;
ktl::api::geometry_aabbnv aabbs;
};

struct geometry_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_geometry_nv;
const void * next = {};
ktl::api::geometry_type_khr geometry_type;
ktl::api::geometry_data_nv geometry;
ktl::api::geometry_flags_khr flags = {};
};

struct acceleration_structure_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_info_nv;
const void * next = {};
ktl::api::acceleration_structure_type_nv type;
ktl::api::build_acceleration_structure_flags_khr flags = {};
ktl::i32 instance_count = {};
ktl::i32 geometry_count = {};
const ktl::api::geometry_nv * geometries;
};

struct acceleration_structure_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_create_info_nv;
const void * next = {};
ktl::dvsize compacted_size;
ktl::api::acceleration_structure_info_nv info;
};

struct bind_acceleration_structure_memory_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_acceleration_structure_memory_info_nv;
const void * next = {};
ktl::api::acceleration_structure_nv acceleration_structure;
ktl::api::device_memory memory;
ktl::dvsize memory_offset;
ktl::i32 device_index_count = {};
const ktl::i32 * device_indices;
};

struct write_descriptor_set_acceleration_structure_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_write_descriptor_set_acceleration_structure_khr;
const void * next = {};
ktl::i32 acceleration_structure_count;
const ktl::api::acceleration_structure_khr * acceleration_structures;
};

struct write_descriptor_set_acceleration_structure_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_write_descriptor_set_acceleration_structure_nv;
const void * next = {};
ktl::i32 acceleration_structure_count;
const ktl::api::acceleration_structure_nv * acceleration_structures;
};

struct acceleration_structure_memory_requirements_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_memory_requirements_info_nv;
const void * next = {};
ktl::api::acceleration_structure_memory_requirements_type_nv type;
ktl::api::acceleration_structure_nv acceleration_structure;
};

struct physical_device_acceleration_structure_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_acceleration_structure_features_khr;
void * next = {};
ktl::bool32 acceleration_structure;
ktl::bool32 acceleration_structure_capture_replay;
ktl::bool32 acceleration_structure_indirect_build;
ktl::bool32 acceleration_structure_host_commands;
ktl::bool32 descriptor_binding_acceleration_structure_update_after_bind;
};

struct physical_device_ray_tracing_pipeline_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_pipeline_features_khr;
void * next = {};
ktl::bool32 ray_tracing_pipeline;
ktl::bool32 ray_tracing_pipeline_shader_group_handle_capture_replay;
ktl::bool32 ray_tracing_pipeline_shader_group_handle_capture_replay_mixed;
ktl::bool32 ray_tracing_pipeline_trace_rays_indirect;
ktl::bool32 ray_traversal_primitive_culling;
};

struct physical_device_ray_query_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_query_features_khr;
void * next = {};
ktl::bool32 ray_query;
};

struct physical_device_acceleration_structure_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_acceleration_structure_properties_khr;
void * next = {};
ktl::u64 max_geometry_count;
ktl::u64 max_instance_count;
ktl::u64 max_primitive_count;
ktl::i32 max_per_stage_descriptor_acceleration_structures;
ktl::i32 max_per_stage_descriptor_update_after_bind_acceleration_structures;
ktl::i32 max_descriptor_set_acceleration_structures;
ktl::i32 max_descriptor_set_update_after_bind_acceleration_structures;
ktl::i32 min_acceleration_structure_scratch_offset_alignment;
};

struct physical_device_ray_tracing_pipeline_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_pipeline_properties_khr;
void * next = {};
ktl::i32 shader_group_handle_size;
ktl::i32 max_ray_recursion_depth;
ktl::i32 max_shader_group_stride;
ktl::i32 shader_group_base_alignment;
ktl::i32 shader_group_handle_capture_replay_size;
ktl::i32 max_ray_dispatch_invocation_count;
ktl::i32 shader_group_handle_alignment;
ktl::i32 max_ray_hit_attribute_size;
};

struct physical_device_ray_tracing_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_properties_nv;
void * next = {};
ktl::i32 shader_group_handle_size;
ktl::i32 max_recursion_depth;
ktl::i32 max_shader_group_stride;
ktl::i32 shader_group_base_alignment;
ktl::u64 max_geometry_count;
ktl::u64 max_instance_count;
ktl::u64 max_triangle_count;
ktl::i32 max_descriptor_set_acceleration_structures;
};

struct strided_device_address_region_khr final
{
ktl::dvaddr device_address = {};
ktl::dvsize stride;
ktl::dvsize size;
};

struct trace_rays_indirect_command_khr final
{
ktl::i32 width;
ktl::i32 height;
ktl::i32 depth;
};

struct trace_rays_indirect_command2khr final
{
ktl::dvaddr raygen_shader_record_address;
ktl::dvsize raygen_shader_record_size;
ktl::dvaddr miss_shader_binding_table_address;
ktl::dvsize miss_shader_binding_table_size;
ktl::dvsize miss_shader_binding_table_stride;
ktl::dvaddr hit_shader_binding_table_address;
ktl::dvsize hit_shader_binding_table_size;
ktl::dvsize hit_shader_binding_table_stride;
ktl::dvaddr callable_shader_binding_table_address;
ktl::dvsize callable_shader_binding_table_size;
ktl::dvsize callable_shader_binding_table_stride;
ktl::i32 width;
ktl::i32 height;
ktl::i32 depth;
};

struct physical_device_ray_tracing_maintenance1features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_maintenance_1_features_khr;
void * next = {};
ktl::bool32 ray_tracing_maintenance1;
ktl::bool32 ray_tracing_pipeline_trace_rays_indirect2;
};

struct drm_format_modifier_properties_list_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_drm_format_modifier_properties_list_ext;
void * next = {};
ktl::i32 drm_format_modifier_count = {};
ktl::api::drm_format_modifier_properties_ext * drm_format_modifier_properties = {};
};

struct drm_format_modifier_properties_ext final
{
ktl::u64 drm_format_modifier;
ktl::i32 drm_format_modifier_plane_count;
ktl::api::format_feature_flags drm_format_modifier_tiling_features;
};

struct physical_device_image_drm_format_modifier_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_drm_format_modifier_info_ext;
const void * next = {};
ktl::u64 drm_format_modifier;
ktl::api::sharing_mode sharing_mode;
ktl::i32 queue_family_index_count = {};
const ktl::i32 * queue_family_indices;
};

struct image_drm_format_modifier_list_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_drm_format_modifier_list_create_info_ext;
const void * next = {};
ktl::i32 drm_format_modifier_count;
const ktl::u64 * drm_format_modifiers;
};

struct image_drm_format_modifier_explicit_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_drm_format_modifier_explicit_create_info_ext;
const void * next = {};
ktl::u64 drm_format_modifier;
ktl::i32 drm_format_modifier_plane_count;
const ktl::api::subresource_layout * plane_layouts;
};

struct image_drm_format_modifier_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_drm_format_modifier_properties_ext;
void * next = {};
ktl::u64 drm_format_modifier;
};

struct image_stencil_usage_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_stencil_usage_create_info;
const void * next = {};
ktl::api::image_usage_flags stencil_usage;
};

using image_stencil_usage_create_info_ext = image_stencil_usage_create_info;

struct device_memory_overallocation_create_info_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_memory_overallocation_create_info_amd;
const void * next = {};
ktl::api::memory_overallocation_behavior_amd overallocation_behavior;
};

struct physical_device_fragment_density_map_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_features_ext;
void * next = {};
ktl::bool32 fragment_density_map;
ktl::bool32 fragment_density_map_dynamic;
ktl::bool32 fragment_density_map_non_subsampled_images;
};

struct physical_device_fragment_density_map2features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_2_features_ext;
void * next = {};
ktl::bool32 fragment_density_map_deferred;
};

struct physical_device_fragment_density_map_offset_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_offset_features_ext;
void * next = {};
ktl::bool32 fragment_density_map_offset;
};

using physical_device_fragment_density_map_offset_features_qcom = physical_device_fragment_density_map_offset_features_ext;

struct physical_device_fragment_density_map_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_properties_ext;
void * next = {};
ktl::api::extent2d min_fragment_density_texel_size;
ktl::api::extent2d max_fragment_density_texel_size;
ktl::bool32 fragment_density_invocations;
};

struct physical_device_fragment_density_map2properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_2_properties_ext;
void * next = {};
ktl::bool32 subsampled_loads;
const ktl::bool32 subsampled_coarse_reconstruction_early_access;
ktl::i32 max_subsampled_array_layers;
ktl::i32 max_descriptor_set_subsampled_samplers;
};

struct physical_device_fragment_density_map_offset_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_offset_properties_ext;
void * next = {};
ktl::api::extent2d fragment_density_offset_granularity;
};

using physical_device_fragment_density_map_offset_properties_qcom = physical_device_fragment_density_map_offset_properties_ext;

struct render_pass_fragment_density_map_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_fragment_density_map_create_info_ext;
const void * next = {};
ktl::api::attachment_reference fragment_density_map_attachment;
};

struct render_pass_fragment_density_map_offset_end_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_fragment_density_map_offset_end_info_ext;
const void * next = {};
ktl::i32 fragment_density_offset_count = {};
const ktl::api::offset2d * fragment_density_offsets;
};

using subpass_fragment_density_map_offset_end_info_qcom = render_pass_fragment_density_map_offset_end_info_ext;

struct physical_device_scalar_block_layout_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_scalar_block_layout_features;
void * next = {};
ktl::bool32 scalar_block_layout;
};

using physical_device_scalar_block_layout_features_ext = physical_device_scalar_block_layout_features;

struct surface_protected_capabilities_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_protected_capabilities_khr;
void * next = {};
ktl::bool32 supports_protected;
};

struct physical_device_uniform_buffer_standard_layout_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_uniform_buffer_standard_layout_features;
void * next = {};
ktl::bool32 uniform_buffer_standard_layout;
};

using physical_device_uniform_buffer_standard_layout_features_khr = physical_device_uniform_buffer_standard_layout_features;

struct physical_device_depth_clip_enable_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_depth_clip_enable_features_ext;
void * next = {};
ktl::bool32 depth_clip_enable;
};

struct pipeline_rasterization_depth_clip_state_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rasterization_depth_clip_state_create_info_ext;
const void * next = {};
ktl::api::pipeline_rasterization_depth_clip_state_create_flags_ext flags = {};
ktl::bool32 depth_clip_enable;
};

struct physical_device_memory_budget_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_memory_budget_properties_ext;
void * next = {};
ktl::dvsize heap_budget[KTL_API_MAX_MEMORY_HEAPS];
ktl::dvsize heap_usage[KTL_API_MAX_MEMORY_HEAPS];
};

struct physical_device_memory_priority_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_memory_priority_features_ext;
void * next = {};
ktl::bool32 memory_priority;
};

struct memory_priority_allocate_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_priority_allocate_info_ext;
const void * next = {};
float priority;
};

struct physical_device_pageable_device_local_memory_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pageable_device_local_memory_features_ext;
void * next = {};
ktl::bool32 pageable_device_local_memory;
};

struct physical_device_buffer_device_address_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_buffer_device_address_features;
void * next = {};
ktl::bool32 buffer_device_address;
ktl::bool32 buffer_device_address_capture_replay;
ktl::bool32 buffer_device_address_multi_device;
};

using physical_device_buffer_device_address_features_khr = physical_device_buffer_device_address_features;

struct physical_device_buffer_device_address_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_buffer_device_address_features_ext;
void * next = {};
ktl::bool32 buffer_device_address;
ktl::bool32 buffer_device_address_capture_replay;
ktl::bool32 buffer_device_address_multi_device;
};

using physical_device_buffer_address_features_ext = physical_device_buffer_device_address_features_ext;

struct buffer_device_address_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_device_address_info;
const void * next = {};
ktl::api::buffer buffer;
};

using buffer_device_address_info_khr = buffer_device_address_info;

using buffer_device_address_info_ext = buffer_device_address_info;

struct buffer_opaque_capture_address_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_opaque_capture_address_create_info;
const void * next = {};
ktl::u64 opaque_capture_address;
};

using buffer_opaque_capture_address_create_info_khr = buffer_opaque_capture_address_create_info;

struct buffer_device_address_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_device_address_create_info_ext;
const void * next = {};
ktl::dvaddr device_address = {};
};

struct physical_device_image_view_image_format_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_view_image_format_info_ext;
void * next = {};
ktl::api::image_view_type image_view_type;
};

struct filter_cubic_image_view_image_format_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_filter_cubic_image_view_image_format_properties_ext;
void * next = {};
ktl::bool32 filter_cubic;
ktl::bool32 filter_cubic_minmax;
};

struct physical_device_imageless_framebuffer_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_imageless_framebuffer_features;
void * next = {};
ktl::bool32 imageless_framebuffer;
};

using physical_device_imageless_framebuffer_features_khr = physical_device_imageless_framebuffer_features;

struct framebuffer_attachments_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_framebuffer_attachments_create_info;
const void * next = {};
ktl::i32 attachment_image_info_count = {};
const ktl::api::framebuffer_attachment_image_info * attachment_image_infos;
};

using framebuffer_attachments_create_info_khr = framebuffer_attachments_create_info;

struct framebuffer_attachment_image_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_framebuffer_attachment_image_info;
const void * next = {};
ktl::api::image_create_flags flags = {};
ktl::api::image_usage_flags usage;
ktl::i32 width;
ktl::i32 height;
ktl::i32 layer_count;
ktl::i32 view_format_count = {};
const ktl::api::format * view_formats;
};

using framebuffer_attachment_image_info_khr = framebuffer_attachment_image_info;

struct render_pass_attachment_begin_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_attachment_begin_info;
const void * next = {};
ktl::i32 attachment_count = {};
const ktl::api::image_view * attachments;
};

using render_pass_attachment_begin_info_khr = render_pass_attachment_begin_info;

struct physical_device_texture_compression_astchdrfeatures final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_texture_compression_astc_hdr_features;
void * next = {};
ktl::bool32 texture_compression_astc__hdr;
};

using physical_device_texture_compression_astchdrfeatures_ext = physical_device_texture_compression_astchdrfeatures;

struct physical_device_cooperative_matrix_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_matrix_features_nv;
void * next = {};
ktl::bool32 cooperative_matrix;
ktl::bool32 cooperative_matrix_robust_buffer_access;
};

struct physical_device_cooperative_matrix_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_matrix_properties_nv;
void * next = {};
ktl::api::shader_stage_flags cooperative_matrix_supported_stages;
};

struct cooperative_matrix_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cooperative_matrix_properties_nv;
void * next = {};
ktl::i32 msize;
ktl::i32 nsize;
ktl::i32 ksize;
ktl::api::component_type_nv atype;
ktl::api::component_type_nv btype;
ktl::api::component_type_nv ctype;
ktl::api::component_type_nv dtype;
ktl::api::scope_nv scope;
};

struct physical_device_ycbcr_image_arrays_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ycbcr_image_arrays_features_ext;
void * next = {};
ktl::bool32 ycbcr_image_arrays;
};

struct image_view_handle_info_nvx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_view_handle_info_nvx;
const void * next = {};
ktl::api::image_view image_view;
ktl::api::descriptor_type descriptor_type;
ktl::api::sampler sampler = {};
};

struct image_view_address_properties_nvx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_view_address_properties_nvx;
void * next = {};
ktl::dvaddr device_address;
ktl::dvsize size;
};

struct present_frame_token_ggp final
{
ktl::api::structure_type type = ktl::api::structure_type::v_present_frame_token_ggp;
const void * next = {};
GgpFrameToken frame_token;
};

struct pipeline_creation_feedback final
{
ktl::api::pipeline_creation_feedback_flags flags;
ktl::u64 duration;
};

using pipeline_creation_feedback_ext = pipeline_creation_feedback;

struct pipeline_creation_feedback_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_creation_feedback_create_info;
const void * next = {};
ktl::api::pipeline_creation_feedback * pipeline_creation_feedback;
ktl::i32 pipeline_stage_creation_feedback_count = {};
ktl::api::pipeline_creation_feedback * pipeline_stage_creation_feedbacks;
};

using pipeline_creation_feedback_create_info_ext = pipeline_creation_feedback_create_info;

struct surface_full_screen_exclusive_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_full_screen_exclusive_info_ext;
void * next = {};
ktl::api::full_screen_exclusive_ext full_screen_exclusive;
};

struct surface_full_screen_exclusive_win32info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_full_screen_exclusive_win32_info_ext;
const void * next = {};
HMONITOR hmonitor;
};

struct surface_capabilities_full_screen_exclusive_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_capabilities_full_screen_exclusive_ext;
void * next = {};
ktl::bool32 full_screen_exclusive_supported;
};

struct physical_device_present_barrier_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_barrier_features_nv;
void * next = {};
ktl::bool32 present_barrier;
};

struct surface_capabilities_present_barrier_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_capabilities_present_barrier_nv;
void * next = {};
ktl::bool32 present_barrier_supported;
};

struct swapchain_present_barrier_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_present_barrier_create_info_nv;
void * next = {};
ktl::bool32 present_barrier_enable;
};

struct physical_device_performance_query_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_performance_query_features_khr;
void * next = {};
ktl::bool32 performance_counter_query_pools;
ktl::bool32 performance_counter_multiple_query_pools;
};

struct physical_device_performance_query_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_performance_query_properties_khr;
void * next = {};
ktl::bool32 allow_command_buffer_query_copies;
};

struct performance_counter_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_performance_counter_khr;
void * next = {};
ktl::api::performance_counter_unit_khr unit;
ktl::api::performance_counter_scope_khr scope;
ktl::api::performance_counter_storage_khr storage;
ktl::u8 uuid[KTL_API_UUID_SIZE];
};

struct performance_counter_description_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_performance_counter_description_khr;
void * next = {};
ktl::api::performance_counter_description_flags_khr flags = {};
char name[KTL_API_MAX_DESCRIPTION_SIZE];
char category[KTL_API_MAX_DESCRIPTION_SIZE];
char description[KTL_API_MAX_DESCRIPTION_SIZE];
};

struct query_pool_performance_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_query_pool_performance_create_info_khr;
const void * next = {};
ktl::i32 queue_family_index;
ktl::i32 counter_index_count;
const ktl::i32 * counter_indices;
};

struct acquire_profiling_lock_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acquire_profiling_lock_info_khr;
const void * next = {};
ktl::api::acquire_profiling_lock_flags_khr flags = {};
ktl::u64 timeout;
};

struct performance_query_submit_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_performance_query_submit_info_khr;
const void * next = {};
ktl::i32 counter_pass_index;
};

struct performance_query_reservation_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_performance_query_reservation_info_khr;
const void * next = {};
ktl::i32 max_performance_queries_per_pool;
};

struct headless_surface_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_headless_surface_create_info_ext;
const void * next = {};
ktl::api::headless_surface_create_flags_ext flags = {};
};

struct physical_device_coverage_reduction_mode_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_coverage_reduction_mode_features_nv;
void * next = {};
ktl::bool32 coverage_reduction_mode;
};

struct pipeline_coverage_reduction_state_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_coverage_reduction_state_create_info_nv;
const void * next = {};
ktl::api::pipeline_coverage_reduction_state_create_flags_nv flags = {};
ktl::api::coverage_reduction_mode_nv coverage_reduction_mode;
};

struct framebuffer_mixed_samples_combination_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_framebuffer_mixed_samples_combination_nv;
void * next = {};
ktl::api::coverage_reduction_mode_nv coverage_reduction_mode;
ktl::api::sample_count_flag_bits rasterization_samples;
ktl::api::sample_count_flags depth_stencil_samples;
ktl::api::sample_count_flags color_samples;
};

struct physical_device_shader_integer_functions2features_intel final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_integer_functions_2_features_intel;
void * next = {};
ktl::bool32 shader_integer_functions2;
};

struct performance_value_intel final
{
ktl::api::performance_value_type_intel type;
ktl::api::performance_value_data_intel data;
};

struct initialize_performance_api_info_intel final
{
ktl::api::structure_type type = ktl::api::structure_type::v_initialize_performance_api_info_intel;
const void * next = {};
void * user_data = {};
};

struct query_pool_performance_query_create_info_intel final
{
ktl::api::structure_type type = ktl::api::structure_type::v_query_pool_performance_query_create_info_intel;
const void * next = {};
ktl::api::query_pool_sampling_mode_intel performance_counters_sampling;
};

using query_pool_create_info_intel = query_pool_performance_query_create_info_intel;

struct performance_marker_info_intel final
{
ktl::api::structure_type type = ktl::api::structure_type::v_performance_marker_info_intel;
const void * next = {};
ktl::u64 marker;
};

struct performance_stream_marker_info_intel final
{
ktl::api::structure_type type = ktl::api::structure_type::v_performance_stream_marker_info_intel;
const void * next = {};
ktl::i32 marker;
};

struct performance_override_info_intel final
{
ktl::api::structure_type type = ktl::api::structure_type::v_performance_override_info_intel;
const void * next = {};
ktl::api::performance_override_type_intel type;
ktl::bool32 enable;
ktl::u64 parameter;
};

struct performance_configuration_acquire_info_intel final
{
ktl::api::structure_type type = ktl::api::structure_type::v_performance_configuration_acquire_info_intel;
const void * next = {};
ktl::api::performance_configuration_type_intel type;
};

struct physical_device_shader_clock_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_clock_features_khr;
void * next = {};
ktl::bool32 shader_subgroup_clock;
ktl::bool32 shader_device_clock;
};

struct physical_device_index_type_uint8features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_index_type_uint8_features;
void * next = {};
ktl::bool32 index_type_uint8;
};

using physical_device_index_type_uint8features_khr = physical_device_index_type_uint8features;

using physical_device_index_type_uint8features_ext = physical_device_index_type_uint8features;

struct physical_device_shader_smbuiltins_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_sm_builtins_properties_nv;
void * next = {};
ktl::i32 shader_smcount;
ktl::i32 shader_warps_per_sm;
};

struct physical_device_shader_smbuiltins_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_sm_builtins_features_nv;
void * next = {};
ktl::bool32 shader_smbuiltins;
};

struct physical_device_fragment_shader_interlock_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shader_interlock_features_ext;
void * next = {};
ktl::bool32 fragment_shader_sample_interlock;
ktl::bool32 fragment_shader_pixel_interlock;
ktl::bool32 fragment_shader_shading_rate_interlock;
};

struct physical_device_separate_depth_stencil_layouts_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_separate_depth_stencil_layouts_features;
void * next = {};
ktl::bool32 separate_depth_stencil_layouts;
};

using physical_device_separate_depth_stencil_layouts_features_khr = physical_device_separate_depth_stencil_layouts_features;

struct attachment_reference_stencil_layout final
{
ktl::api::structure_type type = ktl::api::structure_type::v_attachment_reference_stencil_layout;
void * next = {};
ktl::api::image_layout stencil_layout;
};

struct physical_device_primitive_topology_list_restart_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_primitive_topology_list_restart_features_ext;
void * next = {};
ktl::bool32 primitive_topology_list_restart;
ktl::bool32 primitive_topology_patch_list_restart;
};

using attachment_reference_stencil_layout_khr = attachment_reference_stencil_layout;

struct attachment_description_stencil_layout final
{
ktl::api::structure_type type = ktl::api::structure_type::v_attachment_description_stencil_layout;
void * next = {};
ktl::api::image_layout stencil_initial_layout;
ktl::api::image_layout stencil_final_layout;
};

using attachment_description_stencil_layout_khr = attachment_description_stencil_layout;

struct physical_device_pipeline_executable_properties_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_executable_properties_features_khr;
void * next = {};
ktl::bool32 pipeline_executable_info;
};

struct pipeline_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_info_khr;
const void * next = {};
ktl::api::pipeline pipeline;
};

using pipeline_info_ext = pipeline_info_khr;

struct pipeline_executable_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_executable_properties_khr;
void * next = {};
ktl::api::shader_stage_flags stages;
char name[KTL_API_MAX_DESCRIPTION_SIZE];
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::i32 subgroup_size;
};

struct pipeline_executable_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_executable_info_khr;
const void * next = {};
ktl::api::pipeline pipeline;
ktl::i32 executable_index;
};

struct pipeline_executable_statistic_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_executable_statistic_khr;
void * next = {};
char name[KTL_API_MAX_DESCRIPTION_SIZE];
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::api::pipeline_executable_statistic_format_khr format;
ktl::api::pipeline_executable_statistic_value_khr value;
};

struct pipeline_executable_internal_representation_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_executable_internal_representation_khr;
void * next = {};
char name[KTL_API_MAX_DESCRIPTION_SIZE];
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::bool32 is_text;
ktl::usize data_size;
void * data = {};
};

struct physical_device_shader_demote_to_helper_invocation_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_demote_to_helper_invocation_features;
void * next = {};
ktl::bool32 shader_demote_to_helper_invocation;
};

using physical_device_shader_demote_to_helper_invocation_features_ext = physical_device_shader_demote_to_helper_invocation_features;

struct physical_device_texel_buffer_alignment_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_texel_buffer_alignment_features_ext;
void * next = {};
ktl::bool32 texel_buffer_alignment;
};

struct physical_device_texel_buffer_alignment_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_texel_buffer_alignment_properties;
void * next = {};
ktl::dvsize storage_texel_buffer_offset_alignment_bytes;
ktl::bool32 storage_texel_buffer_offset_single_texel_alignment;
ktl::dvsize uniform_texel_buffer_offset_alignment_bytes;
ktl::bool32 uniform_texel_buffer_offset_single_texel_alignment;
};

using physical_device_texel_buffer_alignment_properties_ext = physical_device_texel_buffer_alignment_properties;

struct physical_device_subgroup_size_control_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_subgroup_size_control_features;
void * next = {};
ktl::bool32 subgroup_size_control;
ktl::bool32 compute_full_subgroups;
};

using physical_device_subgroup_size_control_features_ext = physical_device_subgroup_size_control_features;

struct physical_device_subgroup_size_control_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_subgroup_size_control_properties;
void * next = {};
ktl::i32 min_subgroup_size;
ktl::i32 max_subgroup_size;
ktl::i32 max_compute_workgroup_subgroups;
ktl::api::shader_stage_flags required_subgroup_size_stages;
};

using physical_device_subgroup_size_control_properties_ext = physical_device_subgroup_size_control_properties;

struct pipeline_shader_stage_required_subgroup_size_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_shader_stage_required_subgroup_size_create_info;
const void * next = {};
ktl::i32 required_subgroup_size;
};

using pipeline_shader_stage_required_subgroup_size_create_info_ext = pipeline_shader_stage_required_subgroup_size_create_info;

using shader_required_subgroup_size_create_info_ext = pipeline_shader_stage_required_subgroup_size_create_info;

struct subpass_shading_pipeline_create_info_huawei final
{
ktl::api::structure_type type = ktl::api::structure_type::v_subpass_shading_pipeline_create_info_huawei;
void * next = {};
ktl::api::render_pass render_pass;
ktl::i32 subpass;
};

struct physical_device_subpass_shading_properties_huawei final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_subpass_shading_properties_huawei;
void * next = {};
ktl::i32 max_subpass_shading_workgroup_size_aspect_ratio;
};

struct physical_device_cluster_culling_shader_properties_huawei final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cluster_culling_shader_properties_huawei;
void * next = {};
ktl::i32 max_work_group_count[3];
ktl::i32 max_work_group_size[3];
ktl::i32 max_output_cluster_count;
ktl::dvsize indirect_buffer_offset_alignment;
};

struct memory_opaque_capture_address_allocate_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_opaque_capture_address_allocate_info;
const void * next = {};
ktl::u64 opaque_capture_address;
};

using memory_opaque_capture_address_allocate_info_khr = memory_opaque_capture_address_allocate_info;

struct device_memory_opaque_capture_address_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_memory_opaque_capture_address_info;
const void * next = {};
ktl::api::device_memory memory;
};

using device_memory_opaque_capture_address_info_khr = device_memory_opaque_capture_address_info;

struct physical_device_line_rasterization_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_line_rasterization_features;
void * next = {};
ktl::bool32 rectangular_lines;
ktl::bool32 bresenham_lines;
ktl::bool32 smooth_lines;
ktl::bool32 stippled_rectangular_lines;
ktl::bool32 stippled_bresenham_lines;
ktl::bool32 stippled_smooth_lines;
};

using physical_device_line_rasterization_features_khr = physical_device_line_rasterization_features;

using physical_device_line_rasterization_features_ext = physical_device_line_rasterization_features;

struct physical_device_line_rasterization_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_line_rasterization_properties;
void * next = {};
ktl::i32 line_sub_pixel_precision_bits;
};

using physical_device_line_rasterization_properties_khr = physical_device_line_rasterization_properties;

using physical_device_line_rasterization_properties_ext = physical_device_line_rasterization_properties;

struct pipeline_rasterization_line_state_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rasterization_line_state_create_info;
const void * next = {};
ktl::api::line_rasterization_mode line_rasterization_mode;
ktl::bool32 stippled_line_enable;
ktl::i32 line_stipple_factor;
ktl::u16 line_stipple_pattern;
};

using pipeline_rasterization_line_state_create_info_khr = pipeline_rasterization_line_state_create_info;

using pipeline_rasterization_line_state_create_info_ext = pipeline_rasterization_line_state_create_info;

struct physical_device_pipeline_creation_cache_control_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_creation_cache_control_features;
void * next = {};
ktl::bool32 pipeline_creation_cache_control;
};

using physical_device_pipeline_creation_cache_control_features_ext = physical_device_pipeline_creation_cache_control_features;

struct physical_device_vulkan11features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_1_features;
void * next = {};
ktl::bool32 storage_buffer16bit_access;
ktl::bool32 uniform_and_storage_buffer16bit_access;
ktl::bool32 storage_push_constant16;
ktl::bool32 storage_input_output16;
ktl::bool32 multiview;
ktl::bool32 multiview_geometry_shader;
ktl::bool32 multiview_tessellation_shader;
ktl::bool32 variable_pointers_storage_buffer;
ktl::bool32 variable_pointers;
ktl::bool32 protected_memory;
ktl::bool32 sampler_ycbcr_conversion;
ktl::bool32 shader_draw_parameters;
};

struct physical_device_vulkan11properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_1_properties;
void * next = {};
ktl::u8 device_uuid[KTL_API_UUID_SIZE];
ktl::u8 driver_uuid[KTL_API_UUID_SIZE];
ktl::u8 device_luid[KTL_API_LUID_SIZE];
ktl::i32 device_node_mask;
ktl::bool32 device_luidvalid;
ktl::i32 subgroup_size;
ktl::api::shader_stage_flags subgroup_supported_stages;
ktl::api::subgroup_feature_flags subgroup_supported_operations;
ktl::bool32 subgroup_quad_operations_in_all_stages;
ktl::api::point_clipping_behavior point_clipping_behavior;
ktl::i32 max_multiview_view_count;
ktl::i32 max_multiview_instance_index;
ktl::bool32 protected_no_fault;
ktl::i32 max_per_set_descriptors;
ktl::dvsize max_memory_allocation_size;
};

struct physical_device_vulkan12features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_2_features;
void * next = {};
ktl::bool32 sampler_mirror_clamp_to_edge;
ktl::bool32 draw_indirect_count;
ktl::bool32 storage_buffer8bit_access;
ktl::bool32 uniform_and_storage_buffer8bit_access;
ktl::bool32 storage_push_constant8;
ktl::bool32 shader_buffer_int64atomics;
ktl::bool32 shader_shared_int64atomics;
ktl::bool32 shader_float16;
ktl::bool32 shader_int8;
ktl::bool32 descriptor_indexing;
ktl::bool32 shader_input_attachment_array_dynamic_indexing;
ktl::bool32 shader_uniform_texel_buffer_array_dynamic_indexing;
ktl::bool32 shader_storage_texel_buffer_array_dynamic_indexing;
ktl::bool32 shader_uniform_buffer_array_non_uniform_indexing;
ktl::bool32 shader_sampled_image_array_non_uniform_indexing;
ktl::bool32 shader_storage_buffer_array_non_uniform_indexing;
ktl::bool32 shader_storage_image_array_non_uniform_indexing;
ktl::bool32 shader_input_attachment_array_non_uniform_indexing;
ktl::bool32 shader_uniform_texel_buffer_array_non_uniform_indexing;
ktl::bool32 shader_storage_texel_buffer_array_non_uniform_indexing;
ktl::bool32 descriptor_binding_uniform_buffer_update_after_bind;
ktl::bool32 descriptor_binding_sampled_image_update_after_bind;
ktl::bool32 descriptor_binding_storage_image_update_after_bind;
ktl::bool32 descriptor_binding_storage_buffer_update_after_bind;
ktl::bool32 descriptor_binding_uniform_texel_buffer_update_after_bind;
ktl::bool32 descriptor_binding_storage_texel_buffer_update_after_bind;
ktl::bool32 descriptor_binding_update_unused_while_pending;
ktl::bool32 descriptor_binding_partially_bound;
ktl::bool32 descriptor_binding_variable_descriptor_count;
ktl::bool32 runtime_descriptor_array;
ktl::bool32 sampler_filter_minmax;
ktl::bool32 scalar_block_layout;
ktl::bool32 imageless_framebuffer;
ktl::bool32 uniform_buffer_standard_layout;
ktl::bool32 shader_subgroup_extended_types;
ktl::bool32 separate_depth_stencil_layouts;
ktl::bool32 host_query_reset;
ktl::bool32 timeline_semaphore;
ktl::bool32 buffer_device_address;
ktl::bool32 buffer_device_address_capture_replay;
ktl::bool32 buffer_device_address_multi_device;
ktl::bool32 vulkan_memory_model;
ktl::bool32 vulkan_memory_model_device_scope;
ktl::bool32 vulkan_memory_model_availability_visibility_chains;
ktl::bool32 shader_output_viewport_index;
ktl::bool32 shader_output_layer;
ktl::bool32 subgroup_broadcast_dynamic_id;
};

struct physical_device_vulkan12properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_2_properties;
void * next = {};
ktl::api::driver_id driver_id;
char driver_name[KTL_API_MAX_DRIVER_NAME_SIZE];
char driver_info[KTL_API_MAX_DRIVER_INFO_SIZE];
ktl::api::conformance_version conformance_version;
ktl::api::shader_float_controls_independence denorm_behavior_independence;
ktl::api::shader_float_controls_independence rounding_mode_independence;
ktl::bool32 shader_signed_zero_inf_nan_preserve_float16;
ktl::bool32 shader_signed_zero_inf_nan_preserve_float32;
ktl::bool32 shader_signed_zero_inf_nan_preserve_float64;
ktl::bool32 shader_denorm_preserve_float16;
ktl::bool32 shader_denorm_preserve_float32;
ktl::bool32 shader_denorm_preserve_float64;
ktl::bool32 shader_denorm_flush_to_zero_float16;
ktl::bool32 shader_denorm_flush_to_zero_float32;
ktl::bool32 shader_denorm_flush_to_zero_float64;
ktl::bool32 shader_rounding_mode_rtefloat16;
ktl::bool32 shader_rounding_mode_rtefloat32;
ktl::bool32 shader_rounding_mode_rtefloat64;
ktl::bool32 shader_rounding_mode_rtzfloat16;
ktl::bool32 shader_rounding_mode_rtzfloat32;
ktl::bool32 shader_rounding_mode_rtzfloat64;
ktl::i32 max_update_after_bind_descriptors_in_all_pools;
ktl::bool32 shader_uniform_buffer_array_non_uniform_indexing_native;
ktl::bool32 shader_sampled_image_array_non_uniform_indexing_native;
ktl::bool32 shader_storage_buffer_array_non_uniform_indexing_native;
ktl::bool32 shader_storage_image_array_non_uniform_indexing_native;
ktl::bool32 shader_input_attachment_array_non_uniform_indexing_native;
ktl::bool32 robust_buffer_access_update_after_bind;
ktl::bool32 quad_divergent_implicit_lod;
ktl::i32 max_per_stage_descriptor_update_after_bind_samplers;
ktl::i32 max_per_stage_descriptor_update_after_bind_uniform_buffers;
ktl::i32 max_per_stage_descriptor_update_after_bind_storage_buffers;
ktl::i32 max_per_stage_descriptor_update_after_bind_sampled_images;
ktl::i32 max_per_stage_descriptor_update_after_bind_storage_images;
ktl::i32 max_per_stage_descriptor_update_after_bind_input_attachments;
ktl::i32 max_per_stage_update_after_bind_resources;
ktl::i32 max_descriptor_set_update_after_bind_samplers;
ktl::i32 max_descriptor_set_update_after_bind_uniform_buffers;
ktl::i32 max_descriptor_set_update_after_bind_uniform_buffers_dynamic;
ktl::i32 max_descriptor_set_update_after_bind_storage_buffers;
ktl::i32 max_descriptor_set_update_after_bind_storage_buffers_dynamic;
ktl::i32 max_descriptor_set_update_after_bind_sampled_images;
ktl::i32 max_descriptor_set_update_after_bind_storage_images;
ktl::i32 max_descriptor_set_update_after_bind_input_attachments;
ktl::api::resolve_mode_flags supported_depth_resolve_modes;
ktl::api::resolve_mode_flags supported_stencil_resolve_modes;
ktl::bool32 independent_resolve_none;
ktl::bool32 independent_resolve;
ktl::bool32 filter_minmax_single_component_formats;
ktl::bool32 filter_minmax_image_component_mapping;
ktl::u64 max_timeline_semaphore_value_difference;
ktl::api::sample_count_flags framebuffer_integer_color_sample_counts = {};
};

struct physical_device_vulkan13features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_3_features;
void * next = {};
ktl::bool32 robust_image_access;
ktl::bool32 inline_uniform_block;
ktl::bool32 descriptor_binding_inline_uniform_block_update_after_bind;
ktl::bool32 pipeline_creation_cache_control;
ktl::bool32 private_data;
ktl::bool32 shader_demote_to_helper_invocation;
ktl::bool32 shader_terminate_invocation;
ktl::bool32 subgroup_size_control;
ktl::bool32 compute_full_subgroups;
ktl::bool32 synchronization2;
ktl::bool32 texture_compression_astc__hdr;
ktl::bool32 shader_zero_initialize_workgroup_memory;
ktl::bool32 dynamic_rendering;
ktl::bool32 shader_integer_dot_product;
ktl::bool32 maintenance4;
};

struct physical_device_vulkan13properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_3_properties;
void * next = {};
ktl::i32 min_subgroup_size;
ktl::i32 max_subgroup_size;
ktl::i32 max_compute_workgroup_subgroups;
ktl::api::shader_stage_flags required_subgroup_size_stages;
ktl::i32 max_inline_uniform_block_size;
ktl::i32 max_per_stage_descriptor_inline_uniform_blocks;
ktl::i32 max_per_stage_descriptor_update_after_bind_inline_uniform_blocks;
ktl::i32 max_descriptor_set_inline_uniform_blocks;
ktl::i32 max_descriptor_set_update_after_bind_inline_uniform_blocks;
ktl::i32 max_inline_uniform_total_size;
ktl::bool32 integer_dot_product8bit_unsigned_accelerated;
ktl::bool32 integer_dot_product8bit_signed_accelerated;
ktl::bool32 integer_dot_product8bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product4x8bit_packed_unsigned_accelerated;
ktl::bool32 integer_dot_product4x8bit_packed_signed_accelerated;
ktl::bool32 integer_dot_product4x8bit_packed_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product16bit_unsigned_accelerated;
ktl::bool32 integer_dot_product16bit_signed_accelerated;
ktl::bool32 integer_dot_product16bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product32bit_unsigned_accelerated;
ktl::bool32 integer_dot_product32bit_signed_accelerated;
ktl::bool32 integer_dot_product32bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product64bit_unsigned_accelerated;
ktl::bool32 integer_dot_product64bit_signed_accelerated;
ktl::bool32 integer_dot_product64bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating8bit_unsigned_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating8bit_signed_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating16bit_unsigned_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating16bit_signed_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating32bit_unsigned_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating32bit_signed_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating64bit_unsigned_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating64bit_signed_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated;
ktl::dvsize storage_texel_buffer_offset_alignment_bytes;
ktl::bool32 storage_texel_buffer_offset_single_texel_alignment;
ktl::dvsize uniform_texel_buffer_offset_alignment_bytes;
ktl::bool32 uniform_texel_buffer_offset_single_texel_alignment;
ktl::dvsize max_buffer_size;
};

struct physical_device_vulkan14features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_4_features;
void * next = {};
ktl::bool32 global_priority_query;
ktl::bool32 shader_subgroup_rotate;
ktl::bool32 shader_subgroup_rotate_clustered;
ktl::bool32 shader_float_controls2;
ktl::bool32 shader_expect_assume;
ktl::bool32 rectangular_lines;
ktl::bool32 bresenham_lines;
ktl::bool32 smooth_lines;
ktl::bool32 stippled_rectangular_lines;
ktl::bool32 stippled_bresenham_lines;
ktl::bool32 stippled_smooth_lines;
ktl::bool32 vertex_attribute_instance_rate_divisor;
ktl::bool32 vertex_attribute_instance_rate_zero_divisor;
ktl::bool32 index_type_uint8;
ktl::bool32 dynamic_rendering_local_read;
ktl::bool32 maintenance5;
ktl::bool32 maintenance6;
ktl::bool32 pipeline_protected_access;
ktl::bool32 pipeline_robustness;
ktl::bool32 host_image_copy;
ktl::bool32 push_descriptor;
};

struct physical_device_vulkan14properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_4_properties;
void * next = {};
ktl::i32 line_sub_pixel_precision_bits;
ktl::i32 max_vertex_attrib_divisor;
ktl::bool32 supports_non_zero_first_instance;
ktl::i32 max_push_descriptors;
ktl::bool32 dynamic_rendering_local_read_depth_stencil_attachments;
ktl::bool32 dynamic_rendering_local_read_multisampled_attachments;
ktl::bool32 early_fragment_multisample_coverage_after_sample_counting;
ktl::bool32 early_fragment_sample_mask_test_before_sample_counting;
ktl::bool32 depth_stencil_swizzle_one_support;
ktl::bool32 polygon_mode_point_size;
ktl::bool32 non_strict_single_pixel_wide_lines_use_parallelogram;
ktl::bool32 non_strict_wide_lines_use_parallelogram;
ktl::bool32 block_texel_view_compatible_multiple_layers;
ktl::i32 max_combined_image_sampler_descriptor_count;
ktl::bool32 fragment_shading_rate_clamp_combiner_inputs;
ktl::api::pipeline_robustness_buffer_behavior default_robustness_storage_buffers;
ktl::api::pipeline_robustness_buffer_behavior default_robustness_uniform_buffers;
ktl::api::pipeline_robustness_buffer_behavior default_robustness_vertex_inputs;
ktl::api::pipeline_robustness_image_behavior default_robustness_images;
ktl::i32 copy_src_layout_count = {};
ktl::api::image_layout * copy_src_layouts = {};
ktl::i32 copy_dst_layout_count = {};
ktl::api::image_layout * copy_dst_layouts = {};
ktl::u8 optimal_tiling_layout_uuid[KTL_API_UUID_SIZE] = {};
ktl::bool32 identical_memory_type_requirements;
};

struct pipeline_compiler_control_create_info_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_compiler_control_create_info_amd;
const void * next = {};
ktl::api::pipeline_compiler_control_flags_amd compiler_control_flags = {};
};

struct physical_device_coherent_memory_features_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_coherent_memory_features_amd;
void * next = {};
ktl::bool32 device_coherent_memory;
};

struct fault_data final
{
ktl::api::structure_type type = ktl::api::structure_type::v_fault_data;
void * next = {};
ktl::api::fault_level fault_level;
ktl::api::fault_type fault_type;
};

struct fault_callback_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_fault_callback_info;
const void * next = {};
ktl::i32 fault_count = {};
ktl::api::fault_data * faults = {};
ktl::api::pfn_vk_fault_callback_function pfn_fault_callback;
};

struct physical_device_tool_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tool_properties;
void * next = {};
char name[KTL_API_MAX_EXTENSION_NAME_SIZE];
char version[KTL_API_MAX_EXTENSION_NAME_SIZE];
ktl::api::tool_purpose_flags purposes;
char description[KTL_API_MAX_DESCRIPTION_SIZE];
char layer[KTL_API_MAX_EXTENSION_NAME_SIZE];
};

using physical_device_tool_properties_ext = physical_device_tool_properties;

struct sampler_custom_border_color_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_custom_border_color_create_info_ext;
const void * next = {};
ktl::api::clear_color_value custom_border_color;
ktl::api::format format;
};

struct physical_device_custom_border_color_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_custom_border_color_properties_ext;
void * next = {};
ktl::i32 max_custom_border_color_samplers;
};

struct physical_device_custom_border_color_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_custom_border_color_features_ext;
void * next = {};
ktl::bool32 custom_border_colors;
ktl::bool32 custom_border_color_without_format;
};

struct sampler_border_color_component_mapping_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_border_color_component_mapping_create_info_ext;
const void * next = {};
ktl::api::component_mapping components;
ktl::bool32 srgb;
};

struct physical_device_border_color_swizzle_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_border_color_swizzle_features_ext;
void * next = {};
ktl::bool32 border_color_swizzle;
ktl::bool32 border_color_swizzle_from_image;
};

struct acceleration_structure_geometry_triangles_data_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_geometry_triangles_data_khr;
const void * next = {};
ktl::api::format vertex_format;
ktl::api::device_or_host_address_const_khr vertex_data;
ktl::dvsize vertex_stride;
ktl::i32 max_vertex;
ktl::api::index_type index_type;
ktl::api::device_or_host_address_const_khr index_data;
ktl::api::device_or_host_address_const_khr transform_data;
};

struct acceleration_structure_geometry_aabbs_data_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_geometry_aabbs_data_khr;
const void * next = {};
ktl::api::device_or_host_address_const_khr data;
ktl::dvsize stride;
};

struct acceleration_structure_geometry_instances_data_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_geometry_instances_data_khr;
const void * next = {};
ktl::bool32 array_of_pointers;
ktl::api::device_or_host_address_const_khr data;
};

struct acceleration_structure_geometry_linear_swept_spheres_data_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_geometry_linear_swept_spheres_data_nv;
const void * next = {};
ktl::api::format vertex_format;
ktl::api::device_or_host_address_const_khr vertex_data;
ktl::dvsize vertex_stride;
ktl::api::format radius_format;
ktl::api::device_or_host_address_const_khr radius_data;
ktl::dvsize radius_stride;
ktl::api::index_type index_type;
ktl::api::device_or_host_address_const_khr index_data;
ktl::dvsize index_stride;
ktl::api::ray_tracing_lss_indexing_mode_nv indexing_mode;
ktl::api::ray_tracing_lss_primitive_end_caps_mode_nv end_caps_mode;
};

struct acceleration_structure_geometry_spheres_data_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_geometry_spheres_data_nv;
const void * next = {};
ktl::api::format vertex_format;
ktl::api::device_or_host_address_const_khr vertex_data;
ktl::dvsize vertex_stride;
ktl::api::format radius_format;
ktl::api::device_or_host_address_const_khr radius_data;
ktl::dvsize radius_stride;
ktl::api::index_type index_type;
ktl::api::device_or_host_address_const_khr index_data;
ktl::dvsize index_stride;
};

struct acceleration_structure_geometry_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_geometry_khr;
const void * next = {};
ktl::api::geometry_type_khr geometry_type;
ktl::api::acceleration_structure_geometry_data_khr geometry;
ktl::api::geometry_flags_khr flags = {};
};

struct acceleration_structure_build_geometry_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_build_geometry_info_khr;
const void * next = {};
ktl::api::acceleration_structure_type_khr type;
ktl::api::build_acceleration_structure_flags_khr flags = {};
ktl::api::build_acceleration_structure_mode_khr mode;
ktl::api::acceleration_structure_khr src_acceleration_structure = {};
ktl::api::acceleration_structure_khr dst_acceleration_structure = {};
ktl::i32 geometry_count = {};
const ktl::api::acceleration_structure_geometry_khr * geometries = {};
const ktl::api::acceleration_structure_geometry_khr * geometries;
ktl::api::device_or_host_address_khr scratch_data;
};

struct acceleration_structure_build_range_info_khr final
{
ktl::i32 primitive_count;
ktl::i32 primitive_offset;
ktl::i32 first_vertex;
ktl::i32 transform_offset;
};

struct acceleration_structure_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_create_info_khr;
const void * next = {};
ktl::api::acceleration_structure_create_flags_khr create_flags = {};
ktl::api::buffer buffer;
ktl::dvsize offset;
ktl::dvsize size;
ktl::api::acceleration_structure_type_khr type;
ktl::dvaddr device_address = {};
};

struct aabb_positions_khr final
{
float min_x;
float min_y;
float min_z;
float max_x;
float max_y;
float max_z;
};

using aabb_positions_nv = aabb_positions_khr;

struct transform_matrix_khr final
{
float matrix[3];
};

using transform_matrix_nv = transform_matrix_khr;

struct acceleration_structure_instance_khr final
{
ktl::api::transform_matrix_khr transform;
ktl::i32 instance_custom_index;
ktl::i32 mask;
ktl::i32 instance_shader_binding_table_record_offset;
ktl::api::geometry_instance_flags_khr flags = {};
ktl::u64 acceleration_structure_reference;
};

using acceleration_structure_instance_nv = acceleration_structure_instance_khr;

struct acceleration_structure_device_address_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_device_address_info_khr;
const void * next = {};
ktl::api::acceleration_structure_khr acceleration_structure;
};

struct acceleration_structure_version_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_version_info_khr;
const void * next = {};
const ktl::u8 * version_data;
};

struct copy_acceleration_structure_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_acceleration_structure_info_khr;
const void * next = {};
ktl::api::acceleration_structure_khr src;
ktl::api::acceleration_structure_khr dst;
ktl::api::copy_acceleration_structure_mode_khr mode;
};

struct copy_acceleration_structure_to_memory_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_acceleration_structure_to_memory_info_khr;
const void * next = {};
ktl::api::acceleration_structure_khr src;
ktl::api::device_or_host_address_khr dst;
ktl::api::copy_acceleration_structure_mode_khr mode;
};

struct copy_memory_to_acceleration_structure_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_memory_to_acceleration_structure_info_khr;
const void * next = {};
ktl::api::device_or_host_address_const_khr src;
ktl::api::acceleration_structure_khr dst;
ktl::api::copy_acceleration_structure_mode_khr mode;
};

struct ray_tracing_pipeline_interface_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_ray_tracing_pipeline_interface_create_info_khr;
const void * next = {};
ktl::i32 max_pipeline_ray_payload_size;
ktl::i32 max_pipeline_ray_hit_attribute_size;
};

struct pipeline_library_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_library_create_info_khr;
const void * next = {};
ktl::i32 library_count = {};
const ktl::api::pipeline * libraries;
};

struct refresh_object_khr final
{
ktl::api::object_type object_type;
ktl::u64 object_handle;
ktl::api::refresh_object_flags_khr flags = {};
};

struct refresh_object_list_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_refresh_object_list_khr;
const void * next = {};
ktl::i32 object_count;
const ktl::api::refresh_object_khr * objects;
};

struct physical_device_extended_dynamic_state_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_extended_dynamic_state_features_ext;
void * next = {};
ktl::bool32 extended_dynamic_state;
};

struct physical_device_extended_dynamic_state2features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_extended_dynamic_state_2_features_ext;
void * next = {};
ktl::bool32 extended_dynamic_state2;
ktl::bool32 extended_dynamic_state2logic_op;
ktl::bool32 extended_dynamic_state2patch_control_points;
};

struct physical_device_extended_dynamic_state3features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_extended_dynamic_state_3_features_ext;
void * next = {};
ktl::bool32 extended_dynamic_state3tessellation_domain_origin;
ktl::bool32 extended_dynamic_state3depth_clamp_enable;
ktl::bool32 extended_dynamic_state3polygon_mode;
ktl::bool32 extended_dynamic_state3rasterization_samples;
ktl::bool32 extended_dynamic_state3sample_mask;
ktl::bool32 extended_dynamic_state3alpha_to_coverage_enable;
ktl::bool32 extended_dynamic_state3alpha_to_one_enable;
ktl::bool32 extended_dynamic_state3logic_op_enable;
ktl::bool32 extended_dynamic_state3color_blend_enable;
ktl::bool32 extended_dynamic_state3color_blend_equation;
ktl::bool32 extended_dynamic_state3color_write_mask;
ktl::bool32 extended_dynamic_state3rasterization_stream;
ktl::bool32 extended_dynamic_state3conservative_rasterization_mode;
ktl::bool32 extended_dynamic_state3extra_primitive_overestimation_size;
ktl::bool32 extended_dynamic_state3depth_clip_enable;
ktl::bool32 extended_dynamic_state3sample_locations_enable;
ktl::bool32 extended_dynamic_state3color_blend_advanced;
ktl::bool32 extended_dynamic_state3provoking_vertex_mode;
ktl::bool32 extended_dynamic_state3line_rasterization_mode;
ktl::bool32 extended_dynamic_state3line_stipple_enable;
ktl::bool32 extended_dynamic_state3depth_clip_negative_one_to_one;
ktl::bool32 extended_dynamic_state3viewport_wscaling_enable;
ktl::bool32 extended_dynamic_state3viewport_swizzle;
ktl::bool32 extended_dynamic_state3coverage_to_color_enable;
ktl::bool32 extended_dynamic_state3coverage_to_color_location;
ktl::bool32 extended_dynamic_state3coverage_modulation_mode;
ktl::bool32 extended_dynamic_state3coverage_modulation_table_enable;
ktl::bool32 extended_dynamic_state3coverage_modulation_table;
ktl::bool32 extended_dynamic_state3coverage_reduction_mode;
ktl::bool32 extended_dynamic_state3representative_fragment_test_enable;
ktl::bool32 extended_dynamic_state3shading_rate_image_enable;
};

struct physical_device_extended_dynamic_state3properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_extended_dynamic_state_3_properties_ext;
void * next = {};
ktl::bool32 dynamic_primitive_topology_unrestricted;
};

struct color_blend_equation_ext final
{
ktl::api::blend_factor src_color_blend_factor;
ktl::api::blend_factor dst_color_blend_factor;
ktl::api::blend_op color_blend_op;
ktl::api::blend_factor src_alpha_blend_factor;
ktl::api::blend_factor dst_alpha_blend_factor;
ktl::api::blend_op alpha_blend_op;
};

struct color_blend_advanced_ext final
{
ktl::api::blend_op advanced_blend_op;
ktl::bool32 src_premultiplied;
ktl::bool32 dst_premultiplied;
ktl::api::blend_overlap_ext blend_overlap;
ktl::bool32 clamp_results;
};

struct render_pass_transform_begin_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_transform_begin_info_qcom;
const void * next = {};
ktl::api::surface_transform_flag_bits_khr transform;
};

struct copy_command_transform_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_command_transform_info_qcom;
const void * next = {};
ktl::api::surface_transform_flag_bits_khr transform;
};

struct command_buffer_inheritance_render_pass_transform_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_buffer_inheritance_render_pass_transform_info_qcom;
const void * next = {};
ktl::api::surface_transform_flag_bits_khr transform;
ktl::api::rect2d render_area;
};

struct physical_device_partitioned_acceleration_structure_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_partitioned_acceleration_structure_features_nv;
void * next = {};
ktl::bool32 partitioned_acceleration_structure;
};

struct physical_device_partitioned_acceleration_structure_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_partitioned_acceleration_structure_properties_nv;
void * next = {};
ktl::i32 max_partition_count;
};

struct build_partitioned_acceleration_structure_indirect_command_nv final
{
ktl::api::partitioned_acceleration_structure_op_type_nv op_type;
ktl::i32 arg_count;
ktl::api::strided_device_address_nv arg_data;
};

struct partitioned_acceleration_structure_flags_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_partitioned_acceleration_structure_flags_nv;
void * next = {};
ktl::bool32 enable_partition_translation;
};

struct partitioned_acceleration_structure_write_instance_data_nv final
{
ktl::api::transform_matrix_khr transform;
float explicit_aabb[6];
ktl::i32 instance_id;
ktl::i32 instance_mask;
ktl::i32 instance_contribution_to_hit_group_index;
ktl::api::partitioned_acceleration_structure_instance_flags_nv instance_flags = {};
ktl::i32 instance_index;
ktl::i32 partition_index;
ktl::dvaddr acceleration_structure;
};

struct partitioned_acceleration_structure_update_instance_data_nv final
{
ktl::i32 instance_index;
ktl::i32 instance_contribution_to_hit_group_index;
ktl::dvaddr acceleration_structure;
};

struct partitioned_acceleration_structure_write_partition_translation_data_nv final
{
ktl::i32 partition_index;
float partition_translation[3];
};

struct write_descriptor_set_partitioned_acceleration_structure_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_write_descriptor_set_partitioned_acceleration_structure_nv;
void * next = {};
ktl::i32 acceleration_structure_count;
const ktl::dvaddr * acceleration_structures;
};

struct partitioned_acceleration_structure_instances_input_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_partitioned_acceleration_structure_instances_input_nv;
void * next = {};
ktl::api::build_acceleration_structure_flags_khr flags = {};
ktl::i32 instance_count;
ktl::i32 max_instance_per_partition_count;
ktl::i32 partition_count;
ktl::i32 max_instance_in_global_partition_count;
};

struct build_partitioned_acceleration_structure_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_build_partitioned_acceleration_structure_info_nv;
void * next = {};
ktl::api::partitioned_acceleration_structure_instances_input_nv input;
ktl::dvaddr src_acceleration_structure_data = {};
ktl::dvaddr dst_acceleration_structure_data;
ktl::dvaddr scratch_data;
ktl::dvaddr src_infos;
ktl::dvaddr src_infos_count;
};

struct physical_device_diagnostics_config_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_diagnostics_config_features_nv;
void * next = {};
ktl::bool32 diagnostics_config;
};

struct device_diagnostics_config_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_diagnostics_config_create_info_nv;
const void * next = {};
ktl::api::device_diagnostics_config_flags_nv flags = {};
};

struct pipeline_offline_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_offline_create_info;
const void * next = {};
ktl::u8 pipeline_identifier[KTL_API_UUID_SIZE];
ktl::api::pipeline_match_control match_control;
ktl::dvsize pool_entry_size;
};

struct physical_device_zero_initialize_workgroup_memory_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_zero_initialize_workgroup_memory_features;
void * next = {};
ktl::bool32 shader_zero_initialize_workgroup_memory;
};

using physical_device_zero_initialize_workgroup_memory_features_khr = physical_device_zero_initialize_workgroup_memory_features;

struct physical_device_shader_subgroup_uniform_control_flow_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_subgroup_uniform_control_flow_features_khr;
void * next = {};
ktl::bool32 shader_subgroup_uniform_control_flow;
};

struct physical_device_robustness2features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_robustness_2_features_khr;
void * next = {};
ktl::bool32 robust_buffer_access2;
ktl::bool32 robust_image_access2;
ktl::bool32 null_descriptor;
};

using physical_device_robustness2features_ext = physical_device_robustness2features_khr;

struct physical_device_robustness2properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_robustness_2_properties_khr;
void * next = {};
ktl::dvsize robust_storage_buffer_access_size_alignment;
ktl::dvsize robust_uniform_buffer_access_size_alignment;
};

using physical_device_robustness2properties_ext = physical_device_robustness2properties_khr;

struct physical_device_image_robustness_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_robustness_features;
void * next = {};
ktl::bool32 robust_image_access;
};

using physical_device_image_robustness_features_ext = physical_device_image_robustness_features;

struct physical_device_workgroup_memory_explicit_layout_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_workgroup_memory_explicit_layout_features_khr;
void * next = {};
ktl::bool32 workgroup_memory_explicit_layout;
ktl::bool32 workgroup_memory_explicit_layout_scalar_block_layout;
ktl::bool32 workgroup_memory_explicit_layout8bit_access;
ktl::bool32 workgroup_memory_explicit_layout16bit_access;
};

struct physical_device_portability_subset_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_portability_subset_features_khr;
void * next = {};
const ktl::bool32 constant_alpha_color_blend_factors;
ktl::bool32 events;
ktl::bool32 image_view_format_reinterpretation;
ktl::bool32 image_view_format_swizzle;
ktl::bool32 image_view2don3dimage;
ktl::bool32 multisample_array_image;
ktl::bool32 mutable_comparison_samplers;
ktl::bool32 point_polygons;
ktl::bool32 sampler_mip_lod_bias;
ktl::bool32 separate_stencil_mask_ref;
ktl::bool32 shader_sample_rate_interpolation_functions;
ktl::bool32 tessellation_isolines;
ktl::bool32 tessellation_point_mode;
ktl::bool32 triangle_fans;
ktl::bool32 vertex_attribute_access_beyond_stride;
};

struct physical_device_portability_subset_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_portability_subset_properties_khr;
void * next = {};
ktl::i32 min_vertex_input_binding_stride_alignment;
};

struct physical_device4444formats_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_4444_formats_features_ext;
void * next = {};
ktl::bool32 format_a4r4g4b4;
ktl::bool32 format_a4b4g4r4;
};

struct physical_device_subpass_shading_features_huawei final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_subpass_shading_features_huawei;
void * next = {};
ktl::bool32 subpass_shading;
};

struct physical_device_cluster_culling_shader_features_huawei final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cluster_culling_shader_features_huawei;
void * next = {};
ktl::bool32 clusterculling_shader;
ktl::bool32 multiview_cluster_culling_shader;
};

struct physical_device_cluster_culling_shader_vrs_features_huawei final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cluster_culling_shader_vrs_features_huawei;
void * next = {};
ktl::bool32 cluster_shading_rate;
};

struct buffer_copy2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_copy_2;
const void * next = {};
ktl::dvsize src_offset;
ktl::dvsize dst_offset;
ktl::dvsize size;
};

using buffer_copy2khr = buffer_copy2;

struct image_copy2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_copy_2;
const void * next = {};
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offset;
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offset;
ktl::api::extent3d extent;
};

using image_copy2khr = image_copy2;

struct image_blit2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_blit_2;
const void * next = {};
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offsets[2];
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offsets[2];
};

using image_blit2khr = image_blit2;

struct buffer_image_copy2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_image_copy_2;
const void * next = {};
ktl::dvsize buffer_offset;
ktl::i32 buffer_row_length;
ktl::i32 buffer_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};

using buffer_image_copy2khr = buffer_image_copy2;

struct image_resolve2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_resolve_2;
const void * next = {};
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offset;
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offset;
ktl::api::extent3d extent;
};

using image_resolve2khr = image_resolve2;

struct copy_buffer_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_buffer_info_2;
const void * next = {};
ktl::api::buffer src_buffer;
ktl::api::buffer dst_buffer;
ktl::i32 region_count;
const ktl::api::buffer_copy2 * regions;
};

using copy_buffer_info2khr = copy_buffer_info2;

struct copy_image_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_image_info_2;
const void * next = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::image_copy2 * regions;
};

using copy_image_info2khr = copy_image_info2;

struct blit_image_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_blit_image_info_2;
const void * next = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::image_blit2 * regions;
ktl::api::filter filter;
};

using blit_image_info2khr = blit_image_info2;

struct copy_buffer_to_image_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_buffer_to_image_info_2;
const void * next = {};
ktl::api::buffer src_buffer;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::buffer_image_copy2 * regions;
};

using copy_buffer_to_image_info2khr = copy_buffer_to_image_info2;

struct copy_image_to_buffer_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_image_to_buffer_info_2;
const void * next = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::api::buffer dst_buffer;
ktl::i32 region_count;
const ktl::api::buffer_image_copy2 * regions;
};

using copy_image_to_buffer_info2khr = copy_image_to_buffer_info2;

struct resolve_image_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_resolve_image_info_2;
const void * next = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::image_resolve2 * regions;
};

using resolve_image_info2khr = resolve_image_info2;

struct physical_device_shader_image_atomic_int64features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_image_atomic_int64_features_ext;
void * next = {};
ktl::bool32 shader_image_int64atomics;
ktl::bool32 sparse_image_int64atomics;
};

struct fragment_shading_rate_attachment_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_fragment_shading_rate_attachment_info_khr;
const void * next = {};
const ktl::api::attachment_reference2 * fragment_shading_rate_attachment = {};
ktl::api::extent2d shading_rate_attachment_texel_size;
};

struct pipeline_fragment_shading_rate_state_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_fragment_shading_rate_state_create_info_khr;
const void * next = {};
ktl::api::extent2d fragment_size;
ktl::api::fragment_shading_rate_combiner_op_khr combiner_ops[2];
};

struct physical_device_fragment_shading_rate_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shading_rate_features_khr;
void * next = {};
ktl::bool32 pipeline_fragment_shading_rate;
ktl::bool32 primitive_fragment_shading_rate;
ktl::bool32 attachment_fragment_shading_rate;
};

struct physical_device_fragment_shading_rate_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shading_rate_properties_khr;
void * next = {};
ktl::api::extent2d min_fragment_shading_rate_attachment_texel_size;
ktl::api::extent2d max_fragment_shading_rate_attachment_texel_size;
ktl::i32 max_fragment_shading_rate_attachment_texel_size_aspect_ratio;
ktl::bool32 primitive_fragment_shading_rate_with_multiple_viewports;
ktl::bool32 layered_shading_rate_attachments;
ktl::bool32 fragment_shading_rate_non_trivial_combiner_ops;
ktl::api::extent2d max_fragment_size;
ktl::i32 max_fragment_size_aspect_ratio;
ktl::i32 max_fragment_shading_rate_coverage_samples;
ktl::api::sample_count_flag_bits max_fragment_shading_rate_rasterization_samples;
ktl::bool32 fragment_shading_rate_with_shader_depth_stencil_writes;
ktl::bool32 fragment_shading_rate_with_sample_mask;
ktl::bool32 fragment_shading_rate_with_shader_sample_mask;
ktl::bool32 fragment_shading_rate_with_conservative_rasterization;
ktl::bool32 fragment_shading_rate_with_fragment_shader_interlock;
ktl::bool32 fragment_shading_rate_with_custom_sample_locations;
ktl::bool32 fragment_shading_rate_strict_multiply_combiner;
};

struct physical_device_fragment_shading_rate_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shading_rate_khr;
void * next = {};
ktl::api::sample_count_flags sample_counts;
ktl::api::extent2d fragment_size;
};

struct physical_device_shader_terminate_invocation_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_terminate_invocation_features;
void * next = {};
ktl::bool32 shader_terminate_invocation;
};

using physical_device_shader_terminate_invocation_features_khr = physical_device_shader_terminate_invocation_features;

struct physical_device_fragment_shading_rate_enums_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shading_rate_enums_features_nv;
void * next = {};
ktl::bool32 fragment_shading_rate_enums;
ktl::bool32 supersample_fragment_shading_rates;
ktl::bool32 no_invocation_fragment_shading_rates;
};

struct physical_device_fragment_shading_rate_enums_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shading_rate_enums_properties_nv;
void * next = {};
ktl::api::sample_count_flag_bits max_fragment_shading_rate_invocation_count;
};

struct pipeline_fragment_shading_rate_enum_state_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_fragment_shading_rate_enum_state_create_info_nv;
const void * next = {};
ktl::api::fragment_shading_rate_type_nv shading_rate_type;
ktl::api::fragment_shading_rate_nv shading_rate;
ktl::api::fragment_shading_rate_combiner_op_khr combiner_ops[2];
};

struct acceleration_structure_build_sizes_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_build_sizes_info_khr;
void * next = {};
ktl::dvsize acceleration_structure_size;
ktl::dvsize update_scratch_size;
ktl::dvsize build_scratch_size;
};

struct physical_device_image2dview_of3dfeatures_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_2d_view_of_3d_features_ext;
void * next = {};
ktl::bool32 image2dview_of3d;
ktl::bool32 sampler2dview_of3d;
};

struct physical_device_image_sliced_view_of3dfeatures_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_sliced_view_of_3d_features_ext;
void * next = {};
ktl::bool32 image_sliced_view_of3d;
};

struct physical_device_attachment_feedback_loop_dynamic_state_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_attachment_feedback_loop_dynamic_state_features_ext;
void * next = {};
ktl::bool32 attachment_feedback_loop_dynamic_state;
};

struct physical_device_legacy_vertex_attributes_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_legacy_vertex_attributes_features_ext;
void * next = {};
ktl::bool32 legacy_vertex_attributes;
};

struct physical_device_legacy_vertex_attributes_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_legacy_vertex_attributes_properties_ext;
void * next = {};
ktl::bool32 native_unaligned_performance;
};

struct physical_device_mutable_descriptor_type_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_mutable_descriptor_type_features_ext;
void * next = {};
ktl::bool32 mutable_descriptor_type;
};

using physical_device_mutable_descriptor_type_features_valve = physical_device_mutable_descriptor_type_features_ext;

struct mutable_descriptor_type_list_ext final
{
ktl::i32 descriptor_type_count = {};
const ktl::api::descriptor_type * descriptor_types;
};

using mutable_descriptor_type_list_valve = mutable_descriptor_type_list_ext;

struct mutable_descriptor_type_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_mutable_descriptor_type_create_info_ext;
const void * next = {};
ktl::i32 mutable_descriptor_type_list_count = {};
const ktl::api::mutable_descriptor_type_list_ext * mutable_descriptor_type_lists;
};

using mutable_descriptor_type_create_info_valve = mutable_descriptor_type_create_info_ext;

struct physical_device_depth_clip_control_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_depth_clip_control_features_ext;
void * next = {};
ktl::bool32 depth_clip_control;
};

struct physical_device_zero_initialize_device_memory_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_zero_initialize_device_memory_features_ext;
void * next = {};
ktl::bool32 zero_initialize_device_memory;
};

struct begin_custom_resolve_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_begin_custom_resolve_info_ext;
void * next = {};
};

struct physical_device_custom_resolve_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_custom_resolve_features_ext;
void * next = {};
ktl::bool32 custom_resolve;
};

struct custom_resolve_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_custom_resolve_create_info_ext;
const void * next = {};
ktl::bool32 custom_resolve;
ktl::i32 color_attachment_count = {};
const ktl::api::format * color_attachment_formats;
ktl::api::format depth_attachment_format;
ktl::api::format stencil_attachment_format;
};

struct physical_device_device_generated_commands_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_generated_commands_features_ext;
void * next = {};
ktl::bool32 device_generated_commands;
ktl::bool32 dynamic_generated_pipeline_layout;
};

struct physical_device_device_generated_commands_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_generated_commands_properties_ext;
void * next = {};
ktl::i32 max_indirect_pipeline_count;
ktl::i32 max_indirect_shader_object_count;
ktl::i32 max_indirect_sequence_count;
ktl::i32 max_indirect_commands_token_count;
ktl::i32 max_indirect_commands_token_offset;
ktl::i32 max_indirect_commands_indirect_stride;
ktl::api::indirect_commands_input_mode_flags_ext supported_indirect_commands_input_modes;
ktl::api::shader_stage_flags supported_indirect_commands_shader_stages;
ktl::api::shader_stage_flags supported_indirect_commands_shader_stages_pipeline_binding;
ktl::api::shader_stage_flags supported_indirect_commands_shader_stages_shader_binding;
ktl::bool32 device_generated_commands_transform_feedback;
ktl::bool32 device_generated_commands_multi_draw_indirect_count;
};

struct generated_commands_pipeline_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_generated_commands_pipeline_info_ext;
void * next = {};
ktl::api::pipeline pipeline;
};

struct generated_commands_shader_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_generated_commands_shader_info_ext;
void * next = {};
ktl::i32 shader_count;
const ktl::api::shader_ext * shaders;
};

struct generated_commands_memory_requirements_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_generated_commands_memory_requirements_info_ext;
const void * next = {};
ktl::api::indirect_execution_set_ext indirect_execution_set = {};
ktl::api::indirect_commands_layout_ext indirect_commands_layout;
ktl::i32 max_sequence_count;
ktl::i32 max_draw_count;
};

struct indirect_execution_set_pipeline_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_indirect_execution_set_pipeline_info_ext;
const void * next = {};
ktl::api::pipeline initial_pipeline;
ktl::i32 max_pipeline_count;
};

struct indirect_execution_set_shader_layout_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_indirect_execution_set_shader_layout_info_ext;
const void * next = {};
ktl::i32 set_layout_count = {};
const ktl::api::descriptor_set_layout * set_layouts;
};

struct indirect_execution_set_shader_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_indirect_execution_set_shader_info_ext;
const void * next = {};
ktl::i32 shader_count;
const ktl::api::shader_ext * initial_shaders;
const ktl::api::indirect_execution_set_shader_layout_info_ext * set_layout_infos = {};
ktl::i32 max_shader_count;
ktl::i32 push_constant_range_count = {};
const ktl::api::push_constant_range * push_constant_ranges;
};

struct indirect_execution_set_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_indirect_execution_set_create_info_ext;
const void * next = {};
ktl::api::indirect_execution_set_info_type_ext type;
ktl::api::indirect_execution_set_info_ext info;
};

struct generated_commands_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_generated_commands_info_ext;
const void * next = {};
ktl::api::shader_stage_flags shader_stages;
ktl::api::indirect_execution_set_ext indirect_execution_set = {};
ktl::api::indirect_commands_layout_ext indirect_commands_layout;
ktl::dvaddr indirect_address;
ktl::dvsize indirect_address_size;
ktl::dvaddr preprocess_address = {};
ktl::dvsize preprocess_size;
ktl::i32 max_sequence_count;
ktl::dvaddr sequence_count_address = {};
ktl::i32 max_draw_count;
};

struct write_indirect_execution_set_pipeline_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_write_indirect_execution_set_pipeline_ext;
const void * next = {};
ktl::i32 index;
ktl::api::pipeline pipeline;
};

struct write_indirect_execution_set_shader_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_write_indirect_execution_set_shader_ext;
const void * next = {};
ktl::i32 index;
ktl::api::shader_ext shader;
};

struct indirect_commands_layout_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_indirect_commands_layout_create_info_ext;
const void * next = {};
ktl::api::indirect_commands_layout_usage_flags_ext flags = {};
ktl::api::shader_stage_flags shader_stages;
ktl::i32 indirect_stride;
ktl::api::pipeline_layout pipeline_layout = {};
ktl::i32 token_count;
const ktl::api::indirect_commands_layout_token_ext * tokens;
};

struct indirect_commands_layout_token_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_indirect_commands_layout_token_ext;
const void * next = {};
ktl::api::indirect_commands_token_type_ext type;
ktl::api::indirect_commands_token_data_ext data;
ktl::i32 offset;
};

struct draw_indirect_count_indirect_command_ext final
{
ktl::dvaddr buffer_address;
ktl::i32 stride;
ktl::i32 command_count;
};

struct indirect_commands_vertex_buffer_token_ext final
{
ktl::i32 vertex_binding_unit;
};

struct bind_vertex_buffer_indirect_command_ext final
{
ktl::dvaddr buffer_address;
ktl::i32 size;
ktl::i32 stride;
};

struct indirect_commands_index_buffer_token_ext final
{
ktl::api::indirect_commands_input_mode_flag_bits_ext mode;
};

struct bind_index_buffer_indirect_command_ext final
{
ktl::dvaddr buffer_address;
ktl::i32 size;
ktl::api::index_type index_type;
};

struct indirect_commands_push_constant_token_ext final
{
ktl::api::push_constant_range update_range;
};

struct indirect_commands_execution_set_token_ext final
{
ktl::api::indirect_execution_set_info_type_ext type;
ktl::api::shader_stage_flags shader_stages;
};

struct pipeline_viewport_depth_clip_control_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_depth_clip_control_create_info_ext;
const void * next = {};
ktl::bool32 negative_one_to_one;
};

struct physical_device_depth_clamp_control_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_depth_clamp_control_features_ext;
void * next = {};
ktl::bool32 depth_clamp_control;
};

struct pipeline_viewport_depth_clamp_control_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_depth_clamp_control_create_info_ext;
const void * next = {};
ktl::api::depth_clamp_mode_ext depth_clamp_mode;
const ktl::api::depth_clamp_range_ext * depth_clamp_range = {};
};

struct physical_device_vertex_input_dynamic_state_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vertex_input_dynamic_state_features_ext;
void * next = {};
ktl::bool32 vertex_input_dynamic_state;
};

struct physical_device_external_memory_rdmafeatures_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_memory_rdma_features_nv;
void * next = {};
ktl::bool32 external_memory_rdma;
};

struct physical_device_shader_relaxed_extended_instruction_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_relaxed_extended_instruction_features_khr;
void * next = {};
ktl::bool32 shader_relaxed_extended_instruction;
};

struct vertex_input_binding_description2ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_vertex_input_binding_description_2_ext;
void * next = {};
ktl::i32 binding;
ktl::i32 stride;
ktl::api::vertex_input_rate input_rate;
ktl::i32 divisor;
};

struct vertex_input_attribute_description2ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_vertex_input_attribute_description_2_ext;
void * next = {};
ktl::i32 location;
ktl::i32 binding;
ktl::api::format format;
ktl::i32 offset;
};

struct physical_device_color_write_enable_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_color_write_enable_features_ext;
void * next = {};
ktl::bool32 color_write_enable;
};

struct pipeline_color_write_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_color_write_create_info_ext;
const void * next = {};
ktl::i32 attachment_count = {};
const ktl::bool32 * color_write_enables;
};

struct memory_barrier2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_barrier_2;
const void * next = {};
ktl::api::pipeline_stage_flags2 src_stage_mask = {};
ktl::api::access_flags2 src_access_mask = {};
ktl::api::pipeline_stage_flags2 dst_stage_mask = {};
ktl::api::access_flags2 dst_access_mask = {};
};

using memory_barrier2khr = memory_barrier2;

struct image_memory_barrier2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_memory_barrier_2;
const void * next = {};
ktl::api::pipeline_stage_flags2 src_stage_mask = {};
ktl::api::access_flags2 src_access_mask = {};
ktl::api::pipeline_stage_flags2 dst_stage_mask = {};
ktl::api::access_flags2 dst_access_mask = {};
ktl::api::image_layout old_layout;
ktl::api::image_layout new_layout;
ktl::i32 src_queue_family_index;
ktl::i32 dst_queue_family_index;
ktl::api::image image;
ktl::api::image_subresource_range subresource_range;
};

using image_memory_barrier2khr = image_memory_barrier2;

struct buffer_memory_barrier2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_memory_barrier_2;
const void * next = {};
ktl::api::pipeline_stage_flags2 src_stage_mask = {};
ktl::api::access_flags2 src_access_mask = {};
ktl::api::pipeline_stage_flags2 dst_stage_mask = {};
ktl::api::access_flags2 dst_access_mask = {};
ktl::i32 src_queue_family_index;
ktl::i32 dst_queue_family_index;
ktl::api::buffer buffer;
ktl::dvsize offset;
ktl::dvsize size;
};

using buffer_memory_barrier2khr = buffer_memory_barrier2;

struct memory_barrier_access_flags3khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_barrier_access_flags_3_khr;
const void * next = {};
ktl::api::access_flags3khr src_access_mask3 = {};
ktl::api::access_flags3khr dst_access_mask3 = {};
};

struct dependency_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_dependency_info;
const void * next = {};
ktl::api::dependency_flags dependency_flags = {};
ktl::i32 memory_barrier_count = {};
const ktl::api::memory_barrier2 * memory_barriers;
ktl::i32 buffer_memory_barrier_count = {};
const ktl::api::buffer_memory_barrier2 * buffer_memory_barriers;
ktl::i32 image_memory_barrier_count = {};
const ktl::api::image_memory_barrier2 * image_memory_barriers;
};

using dependency_info_khr = dependency_info;

struct semaphore_submit_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_submit_info;
const void * next = {};
ktl::api::semaphore semaphore;
ktl::u64 value;
ktl::api::pipeline_stage_flags2 stage_mask = {};
ktl::i32 device_index;
};

using semaphore_submit_info_khr = semaphore_submit_info;

struct command_buffer_submit_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_buffer_submit_info;
const void * next = {};
ktl::api::command_buffer command_buffer;
ktl::i32 device_mask;
};

using command_buffer_submit_info_khr = command_buffer_submit_info;

struct submit_info2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_submit_info_2;
const void * next = {};
ktl::api::submit_flags flags = {};
ktl::i32 wait_semaphore_info_count = {};
const ktl::api::semaphore_submit_info * wait_semaphore_infos;
ktl::i32 command_buffer_info_count = {};
const ktl::api::command_buffer_submit_info * command_buffer_infos;
ktl::i32 signal_semaphore_info_count = {};
const ktl::api::semaphore_submit_info * signal_semaphore_infos;
};

using submit_info2khr = submit_info2;

struct queue_family_checkpoint_properties2nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_checkpoint_properties_2_nv;
void * next = {};
ktl::api::pipeline_stage_flags2 checkpoint_execution_stage_mask;
};

struct checkpoint_data2nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_checkpoint_data_2_nv;
void * next = {};
ktl::api::pipeline_stage_flags2 stage;
void * checkpoint_marker;
};

struct physical_device_synchronization2features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_synchronization_2_features;
void * next = {};
ktl::bool32 synchronization2;
};

using physical_device_synchronization2features_khr = physical_device_synchronization2features;

struct physical_device_unified_image_layouts_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_unified_image_layouts_features_khr;
void * next = {};
ktl::bool32 unified_image_layouts;
ktl::bool32 unified_image_layouts_video;
};

struct physical_device_host_image_copy_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_host_image_copy_features;
void * next = {};
ktl::bool32 host_image_copy;
};

using physical_device_host_image_copy_features_ext = physical_device_host_image_copy_features;

struct physical_device_host_image_copy_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_host_image_copy_properties;
void * next = {};
ktl::i32 copy_src_layout_count = {};
ktl::api::image_layout * copy_src_layouts = {};
ktl::i32 copy_dst_layout_count = {};
ktl::api::image_layout * copy_dst_layouts = {};
ktl::u8 optimal_tiling_layout_uuid[KTL_API_UUID_SIZE] = {};
ktl::bool32 identical_memory_type_requirements;
};

using physical_device_host_image_copy_properties_ext = physical_device_host_image_copy_properties;

struct memory_to_image_copy final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_to_image_copy;
const void * next = {};
const void * host_pointer;
ktl::i32 memory_row_length;
ktl::i32 memory_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};

using memory_to_image_copy_ext = memory_to_image_copy;

struct image_to_memory_copy final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_to_memory_copy;
const void * next = {};
void * host_pointer;
ktl::i32 memory_row_length;
ktl::i32 memory_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};

using image_to_memory_copy_ext = image_to_memory_copy;

struct copy_memory_to_image_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_memory_to_image_info;
const void * next = {};
ktl::api::host_image_copy_flags flags = {};
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::memory_to_image_copy * regions;
};

using copy_memory_to_image_info_ext = copy_memory_to_image_info;

struct copy_image_to_memory_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_image_to_memory_info;
const void * next = {};
ktl::api::host_image_copy_flags flags = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::i32 region_count;
const ktl::api::image_to_memory_copy * regions;
};

using copy_image_to_memory_info_ext = copy_image_to_memory_info;

struct copy_image_to_image_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_image_to_image_info;
const void * next = {};
ktl::api::host_image_copy_flags flags = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::image_copy2 * regions;
};

using copy_image_to_image_info_ext = copy_image_to_image_info;

struct host_image_layout_transition_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_host_image_layout_transition_info;
const void * next = {};
ktl::api::image image;
ktl::api::image_layout old_layout;
ktl::api::image_layout new_layout;
ktl::api::image_subresource_range subresource_range;
};

using host_image_layout_transition_info_ext = host_image_layout_transition_info;

struct subresource_host_memcpy_size final
{
ktl::api::structure_type type = ktl::api::structure_type::v_subresource_host_memcpy_size;
void * next = {};
ktl::dvsize size;
};

using subresource_host_memcpy_size_ext = subresource_host_memcpy_size;

struct host_image_copy_device_performance_query final
{
ktl::api::structure_type type = ktl::api::structure_type::v_host_image_copy_device_performance_query;
void * next = {};
ktl::bool32 optimal_device_access;
ktl::bool32 identical_memory_layout;
};

using host_image_copy_device_performance_query_ext = host_image_copy_device_performance_query;

struct physical_device_vulkan_sc10properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_sc_1_0_properties;
void * next = {};
ktl::bool32 device_no_dynamic_host_allocations;
ktl::bool32 device_destroy_frees_memory;
ktl::bool32 command_pool_multiple_command_buffers_recording;
ktl::bool32 command_pool_reset_command_buffer;
ktl::bool32 command_buffer_simultaneous_use;
ktl::bool32 secondary_command_buffer_null_or_imageless_framebuffer;
ktl::bool32 recycle_descriptor_set_memory;
ktl::bool32 recycle_pipeline_memory;
ktl::i32 max_render_pass_subpasses;
ktl::i32 max_render_pass_dependencies;
ktl::i32 max_subpass_input_attachments;
ktl::i32 max_subpass_preserve_attachments;
ktl::i32 max_framebuffer_attachments;
ktl::i32 max_descriptor_set_layout_bindings;
ktl::i32 max_query_fault_count;
ktl::i32 max_callback_fault_count;
ktl::i32 max_command_pool_command_buffers;
ktl::dvsize max_command_buffer_size;
};

struct pipeline_pool_size final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_pool_size;
const void * next = {};
ktl::dvsize pool_entry_size;
ktl::i32 pool_entry_count;
};

struct device_object_reservation_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_object_reservation_create_info;
const void * next = {};
ktl::i32 pipeline_cache_create_info_count = {};
const ktl::api::pipeline_cache_create_info * pipeline_cache_create_infos;
ktl::i32 pipeline_pool_size_count = {};
const ktl::api::pipeline_pool_size * pipeline_pool_sizes;
ktl::i32 semaphore_request_count = {};
ktl::i32 command_buffer_request_count = {};
ktl::i32 fence_request_count = {};
ktl::i32 device_memory_request_count = {};
ktl::i32 buffer_request_count = {};
ktl::i32 image_request_count = {};
ktl::i32 event_request_count = {};
ktl::i32 query_pool_request_count = {};
ktl::i32 buffer_view_request_count = {};
ktl::i32 image_view_request_count = {};
ktl::i32 layered_image_view_request_count = {};
ktl::i32 pipeline_cache_request_count = {};
ktl::i32 pipeline_layout_request_count = {};
ktl::i32 render_pass_request_count = {};
ktl::i32 graphics_pipeline_request_count = {};
ktl::i32 compute_pipeline_request_count = {};
ktl::i32 descriptor_set_layout_request_count = {};
ktl::i32 sampler_request_count = {};
ktl::i32 descriptor_pool_request_count = {};
ktl::i32 descriptor_set_request_count = {};
ktl::i32 framebuffer_request_count = {};
ktl::i32 command_pool_request_count = {};
ktl::i32 sampler_ycbcr_conversion_request_count = {};
ktl::i32 surface_request_count = {};
ktl::i32 swapchain_request_count = {};
ktl::i32 display_mode_request_count = {};
ktl::i32 subpass_description_request_count = {};
ktl::i32 attachment_description_request_count = {};
ktl::i32 descriptor_set_layout_binding_request_count = {};
ktl::i32 descriptor_set_layout_binding_limit;
ktl::i32 max_image_view_mip_levels;
ktl::i32 max_image_view_array_layers;
ktl::i32 max_layered_image_view_mip_levels;
ktl::i32 max_occlusion_queries_per_pool;
ktl::i32 max_pipeline_statistics_queries_per_pool;
ktl::i32 max_timestamp_queries_per_pool;
ktl::i32 max_immutable_samplers_per_descriptor_set_layout;
};

struct command_pool_memory_reservation_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_pool_memory_reservation_create_info;
const void * next = {};
ktl::dvsize command_pool_reserved_size;
ktl::i32 command_pool_max_command_buffers;
};

struct command_pool_memory_consumption final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_pool_memory_consumption;
void * next = {};
ktl::dvsize command_pool_allocated;
ktl::dvsize command_pool_reserved_size;
ktl::dvsize command_buffer_allocated;
};

struct physical_device_vulkan_sc10features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_sc_1_0_features;
void * next = {};
ktl::bool32 shader_atomic_instructions;
};

struct physical_device_primitives_generated_query_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_primitives_generated_query_features_ext;
void * next = {};
ktl::bool32 primitives_generated_query;
ktl::bool32 primitives_generated_query_with_rasterizer_discard;
ktl::bool32 primitives_generated_query_with_non_zero_streams;
};

struct physical_device_legacy_dithering_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_legacy_dithering_features_ext;
void * next = {};
ktl::bool32 legacy_dithering;
};

struct physical_device_multisampled_render_to_single_sampled_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multisampled_render_to_single_sampled_features_ext;
void * next = {};
ktl::bool32 multisampled_render_to_single_sampled;
};

struct surface_capabilities_present_id2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_capabilities_present_id_2_khr;
void * next = {};
ktl::bool32 present_id2supported;
};

struct surface_capabilities_present_wait2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_capabilities_present_wait_2_khr;
void * next = {};
ktl::bool32 present_wait2supported;
};

struct subpass_resolve_performance_query_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_subpass_resolve_performance_query_ext;
void * next = {};
ktl::bool32 optimal;
};

struct multisampled_render_to_single_sampled_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_multisampled_render_to_single_sampled_info_ext;
const void * next = {};
ktl::bool32 multisampled_render_to_single_sampled_enable;
ktl::api::sample_count_flag_bits rasterization_samples;
};

struct physical_device_pipeline_protected_access_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_protected_access_features;
void * next = {};
ktl::bool32 pipeline_protected_access;
};

using physical_device_pipeline_protected_access_features_ext = physical_device_pipeline_protected_access_features;

struct queue_family_query_result_status_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_query_result_status_properties_khr;
void * next = {};
ktl::bool32 query_result_status_support;
};

struct physical_device_inherited_viewport_scissor_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_inherited_viewport_scissor_features_nv;
void * next = {};
ktl::bool32 inherited_viewport_scissor2d;
};

struct command_buffer_inheritance_viewport_scissor_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_buffer_inheritance_viewport_scissor_info_nv;
const void * next = {};
ktl::bool32 viewport_scissor2d;
ktl::i32 viewport_depth_count;
const ktl::api::viewport * viewport_depths;
};

struct physical_device_ycbcr2plane444formats_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ycbcr_2_plane_444_formats_features_ext;
void * next = {};
ktl::bool32 ycbcr2plane444formats;
};

struct physical_device_provoking_vertex_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_provoking_vertex_features_ext;
void * next = {};
ktl::bool32 provoking_vertex_last;
ktl::bool32 transform_feedback_preserves_provoking_vertex;
};

struct physical_device_provoking_vertex_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_provoking_vertex_properties_ext;
void * next = {};
ktl::bool32 provoking_vertex_mode_per_pipeline;
ktl::bool32 transform_feedback_preserves_triangle_fan_provoking_vertex;
};

struct pipeline_rasterization_provoking_vertex_state_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rasterization_provoking_vertex_state_create_info_ext;
const void * next = {};
ktl::api::provoking_vertex_mode_ext provoking_vertex_mode;
};

struct cu_module_create_info_nvx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cu_module_create_info_nvx;
const void * next = {};
ktl::usize data_size = {};
const void * data;
};

struct cu_module_texturing_mode_create_info_nvx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cu_module_texturing_mode_create_info_nvx;
const void * next = {};
ktl::bool32 use64bit_texturing;
};

struct cu_function_create_info_nvx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cu_function_create_info_nvx;
const void * next = {};
ktl::api::cu_module_nvx module;
const char * name;
};

struct cu_launch_info_nvx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cu_launch_info_nvx;
const void * next = {};
ktl::api::cu_function_nvx function;
ktl::i32 grid_dim_x;
ktl::i32 grid_dim_y;
ktl::i32 grid_dim_z;
ktl::i32 block_dim_x;
ktl::i32 block_dim_y;
ktl::i32 block_dim_z;
ktl::i32 shared_mem_bytes;
ktl::usize param_count = {};
const void * params;
ktl::usize extra_count = {};
const void * extras;
};

struct physical_device_descriptor_buffer_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_buffer_features_ext;
void * next = {};
ktl::bool32 descriptor_buffer;
ktl::bool32 descriptor_buffer_capture_replay;
ktl::bool32 descriptor_buffer_image_layout_ignored;
ktl::bool32 descriptor_buffer_push_descriptors;
};

struct physical_device_descriptor_buffer_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_buffer_properties_ext;
void * next = {};
ktl::bool32 combined_image_sampler_descriptor_single_array;
ktl::bool32 bufferless_push_descriptors;
ktl::bool32 allow_sampler_image_view_post_submit_creation;
ktl::dvsize descriptor_buffer_offset_alignment;
ktl::i32 max_descriptor_buffer_bindings;
ktl::i32 max_resource_descriptor_buffer_bindings;
ktl::i32 max_sampler_descriptor_buffer_bindings;
ktl::i32 max_embedded_immutable_sampler_bindings;
ktl::i32 max_embedded_immutable_samplers;
ktl::usize buffer_capture_replay_descriptor_data_size;
ktl::usize image_capture_replay_descriptor_data_size;
ktl::usize image_view_capture_replay_descriptor_data_size;
ktl::usize sampler_capture_replay_descriptor_data_size;
ktl::usize acceleration_structure_capture_replay_descriptor_data_size;
ktl::usize sampler_descriptor_size;
ktl::usize combined_image_sampler_descriptor_size;
ktl::usize sampled_image_descriptor_size;
ktl::usize storage_image_descriptor_size;
ktl::usize uniform_texel_buffer_descriptor_size;
ktl::usize robust_uniform_texel_buffer_descriptor_size;
ktl::usize storage_texel_buffer_descriptor_size;
ktl::usize robust_storage_texel_buffer_descriptor_size;
ktl::usize uniform_buffer_descriptor_size;
ktl::usize robust_uniform_buffer_descriptor_size;
ktl::usize storage_buffer_descriptor_size;
ktl::usize robust_storage_buffer_descriptor_size;
ktl::usize input_attachment_descriptor_size;
ktl::usize acceleration_structure_descriptor_size;
ktl::dvsize max_sampler_descriptor_buffer_range;
ktl::dvsize max_resource_descriptor_buffer_range;
ktl::dvsize sampler_descriptor_buffer_address_space_size;
ktl::dvsize resource_descriptor_buffer_address_space_size;
ktl::dvsize descriptor_buffer_address_space_size;
};

struct physical_device_descriptor_buffer_density_map_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_buffer_density_map_properties_ext;
void * next = {};
ktl::usize combined_image_sampler_density_map_descriptor_size;
};

struct descriptor_address_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_address_info_ext;
void * next = {};
ktl::dvaddr address = {};
ktl::dvsize range;
ktl::api::format format;
};

struct descriptor_buffer_binding_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_buffer_binding_info_ext;
const void * next = {};
ktl::dvaddr address;
ktl::api::buffer_usage_flags usage = {};
};

struct descriptor_buffer_binding_push_descriptor_buffer_handle_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_buffer_binding_push_descriptor_buffer_handle_ext;
const void * next = {};
ktl::api::buffer buffer;
};

struct descriptor_get_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_get_info_ext;
const void * next = {};
ktl::api::descriptor_type type;
ktl::api::descriptor_data_ext data;
};

struct buffer_capture_descriptor_data_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_capture_descriptor_data_info_ext;
const void * next = {};
ktl::api::buffer buffer;
};

struct image_capture_descriptor_data_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_capture_descriptor_data_info_ext;
const void * next = {};
ktl::api::image image;
};

struct image_view_capture_descriptor_data_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_view_capture_descriptor_data_info_ext;
const void * next = {};
ktl::api::image_view image_view;
};

struct sampler_capture_descriptor_data_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_capture_descriptor_data_info_ext;
const void * next = {};
ktl::api::sampler sampler;
};

struct acceleration_structure_capture_descriptor_data_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_capture_descriptor_data_info_ext;
const void * next = {};
ktl::api::acceleration_structure_khr acceleration_structure = {};
ktl::api::acceleration_structure_nv acceleration_structure_nv = {};
};

struct opaque_capture_descriptor_data_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_opaque_capture_descriptor_data_create_info_ext;
const void * next = {};
const void * opaque_capture_descriptor_data;
};

struct physical_device_shader_integer_dot_product_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_integer_dot_product_features;
void * next = {};
ktl::bool32 shader_integer_dot_product;
};

using physical_device_shader_integer_dot_product_features_khr = physical_device_shader_integer_dot_product_features;

struct physical_device_shader_integer_dot_product_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_integer_dot_product_properties;
void * next = {};
ktl::bool32 integer_dot_product8bit_unsigned_accelerated;
ktl::bool32 integer_dot_product8bit_signed_accelerated;
ktl::bool32 integer_dot_product8bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product4x8bit_packed_unsigned_accelerated;
ktl::bool32 integer_dot_product4x8bit_packed_signed_accelerated;
ktl::bool32 integer_dot_product4x8bit_packed_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product16bit_unsigned_accelerated;
ktl::bool32 integer_dot_product16bit_signed_accelerated;
ktl::bool32 integer_dot_product16bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product32bit_unsigned_accelerated;
ktl::bool32 integer_dot_product32bit_signed_accelerated;
ktl::bool32 integer_dot_product32bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product64bit_unsigned_accelerated;
ktl::bool32 integer_dot_product64bit_signed_accelerated;
ktl::bool32 integer_dot_product64bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating8bit_unsigned_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating8bit_signed_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating16bit_unsigned_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating16bit_signed_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating32bit_unsigned_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating32bit_signed_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating64bit_unsigned_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating64bit_signed_accelerated;
ktl::bool32 integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated;
};

using physical_device_shader_integer_dot_product_properties_khr = physical_device_shader_integer_dot_product_properties;

struct physical_device_drm_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_drm_properties_ext;
void * next = {};
ktl::bool32 has_primary;
ktl::bool32 has_render;
ktl::i64 primary_major;
ktl::i64 primary_minor;
ktl::i64 render_major;
ktl::i64 render_minor;
};

struct physical_device_fragment_shader_barycentric_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shader_barycentric_features_khr;
void * next = {};
ktl::bool32 fragment_shader_barycentric;
};

struct physical_device_fragment_shader_barycentric_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shader_barycentric_properties_khr;
void * next = {};
ktl::bool32 tri_strip_vertex_order_independent_of_provoking_vertex;
};

struct physical_device_shader_fma_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_fma_features_khr;
void * next = {};
ktl::bool32 shader_fma_float16;
ktl::bool32 shader_fma_float32;
ktl::bool32 shader_fma_float64;
};

struct physical_device_ray_tracing_motion_blur_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_motion_blur_features_nv;
void * next = {};
ktl::bool32 ray_tracing_motion_blur;
ktl::bool32 ray_tracing_motion_blur_pipeline_trace_rays_indirect;
};

struct physical_device_ray_tracing_validation_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_validation_features_nv;
void * next = {};
ktl::bool32 ray_tracing_validation;
};

struct physical_device_ray_tracing_linear_swept_spheres_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_linear_swept_spheres_features_nv;
void * next = {};
ktl::bool32 spheres;
ktl::bool32 linear_swept_spheres;
};

struct acceleration_structure_geometry_motion_triangles_data_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_geometry_motion_triangles_data_nv;
const void * next = {};
ktl::api::device_or_host_address_const_khr vertex_data;
};

struct acceleration_structure_motion_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_motion_info_nv;
const void * next = {};
ktl::i32 max_instances;
ktl::api::acceleration_structure_motion_info_flags_nv flags = {};
};

struct srtdata_nv final
{
float sx;
float a;
float b;
float pvx;
float sy;
float c;
float pvy;
float sz;
float pvz;
float qx;
float qy;
float qz;
float qw;
float tx;
float ty;
float tz;
};

struct acceleration_structure_srtmotion_instance_nv final
{
ktl::api::srtdata_nv transform_t0;
ktl::api::srtdata_nv transform_t1;
ktl::i32 instance_custom_index;
ktl::i32 mask;
ktl::i32 instance_shader_binding_table_record_offset;
ktl::api::geometry_instance_flags_khr flags = {};
ktl::u64 acceleration_structure_reference;
};

struct acceleration_structure_matrix_motion_instance_nv final
{
ktl::api::transform_matrix_khr transform_t0;
ktl::api::transform_matrix_khr transform_t1;
ktl::i32 instance_custom_index;
ktl::i32 mask;
ktl::i32 instance_shader_binding_table_record_offset;
ktl::api::geometry_instance_flags_khr flags = {};
ktl::u64 acceleration_structure_reference;
};

struct acceleration_structure_motion_instance_nv final
{
ktl::api::acceleration_structure_motion_instance_type_nv type;
ktl::api::acceleration_structure_motion_instance_flags_nv flags = {};
ktl::api::acceleration_structure_motion_instance_data_nv data;
};

struct memory_get_remote_address_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_remote_address_info_nv;
const void * next = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct import_memory_buffer_collection_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_buffer_collection_fuchsia;
const void * next = {};
ktl::api::buffer_collection_fuchsia collection;
ktl::i32 index;
};

struct buffer_collection_image_create_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_collection_image_create_info_fuchsia;
const void * next = {};
ktl::api::buffer_collection_fuchsia collection;
ktl::i32 index;
};

struct buffer_collection_buffer_create_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_collection_buffer_create_info_fuchsia;
const void * next = {};
ktl::api::buffer_collection_fuchsia collection;
ktl::i32 index;
};

struct buffer_collection_create_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_collection_create_info_fuchsia;
const void * next = {};
zx_handle_t collection_token;
};

struct buffer_collection_properties_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_collection_properties_fuchsia;
void * next = {};
ktl::i32 memory_type_bits;
ktl::i32 buffer_count;
ktl::i32 create_info_index;
ktl::u64 sysmem_pixel_format;
ktl::api::format_feature_flags format_features;
ktl::api::sysmem_color_space_fuchsia sysmem_color_space_index;
ktl::api::component_mapping sampler_ycbcr_conversion_components;
ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
ktl::api::sampler_ycbcr_range suggested_ycbcr_range;
ktl::api::chroma_location suggested_xchroma_offset;
ktl::api::chroma_location suggested_ychroma_offset;
};

struct buffer_constraints_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_constraints_info_fuchsia;
const void * next = {};
ktl::api::buffer_create_info create_info;
ktl::api::format_feature_flags required_format_features = {};
ktl::api::buffer_collection_constraints_info_fuchsia buffer_collection_constraints;
};

struct sysmem_color_space_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sysmem_color_space_fuchsia;
const void * next = {};
ktl::i32 color_space;
};

struct image_format_constraints_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_format_constraints_info_fuchsia;
const void * next = {};
ktl::api::image_create_info image_create_info;
ktl::api::format_feature_flags required_format_features;
ktl::api::image_format_constraints_flags_fuchsia flags = {};
ktl::u64 sysmem_pixel_format = {};
ktl::i32 color_space_count;
const ktl::api::sysmem_color_space_fuchsia * color_spaces;
};

struct image_constraints_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_constraints_info_fuchsia;
const void * next = {};
ktl::i32 format_constraints_count;
const ktl::api::image_format_constraints_info_fuchsia * format_constraints;
ktl::api::buffer_collection_constraints_info_fuchsia buffer_collection_constraints;
ktl::api::image_constraints_info_flags_fuchsia flags = {};
};

struct buffer_collection_constraints_info_fuchsia final
{
ktl::api::structure_type type = ktl::api::structure_type::v_buffer_collection_constraints_info_fuchsia;
const void * next = {};
ktl::i32 min_buffer_count;
ktl::i32 max_buffer_count;
ktl::i32 min_buffer_count_for_camping;
ktl::i32 min_buffer_count_for_dedicated_slack;
ktl::i32 min_buffer_count_for_shared_slack;
};

struct cuda_module_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cuda_module_create_info_nv;
const void * next = {};
ktl::usize data_size;
const void * data;
};

struct cuda_function_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cuda_function_create_info_nv;
const void * next = {};
ktl::api::cuda_module_nv module;
const char * name;
};

struct cuda_launch_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cuda_launch_info_nv;
const void * next = {};
ktl::api::cuda_function_nv function;
ktl::i32 grid_dim_x;
ktl::i32 grid_dim_y;
ktl::i32 grid_dim_z;
ktl::i32 block_dim_x;
ktl::i32 block_dim_y;
ktl::i32 block_dim_z;
ktl::i32 shared_mem_bytes;
ktl::usize param_count = {};
const void * params;
ktl::usize extra_count = {};
const void * extras;
};

struct physical_device_rgba10x6formats_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_rgba10x6_formats_features_ext;
void * next = {};
ktl::bool32 format_rgba10x6without_ycb_cr_sampler;
};

struct format_properties3 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_format_properties_3;
void * next = {};
ktl::api::format_feature_flags2 linear_tiling_features = {};
ktl::api::format_feature_flags2 optimal_tiling_features = {};
ktl::api::format_feature_flags2 buffer_features = {};
};

using format_properties3khr = format_properties3;

struct drm_format_modifier_properties_list2ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_drm_format_modifier_properties_list_2_ext;
void * next = {};
ktl::i32 drm_format_modifier_count = {};
ktl::api::drm_format_modifier_properties2ext * drm_format_modifier_properties = {};
};

struct drm_format_modifier_properties2ext final
{
ktl::u64 drm_format_modifier;
ktl::i32 drm_format_modifier_plane_count;
ktl::api::format_feature_flags2 drm_format_modifier_tiling_features;
};

struct android_hardware_buffer_format_properties2android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_android_hardware_buffer_format_properties_2_android;
void * next = {};
ktl::api::format format;
ktl::u64 external_format;
ktl::api::format_feature_flags2 format_features;
ktl::api::component_mapping sampler_ycbcr_conversion_components;
ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
ktl::api::sampler_ycbcr_range suggested_ycbcr_range;
ktl::api::chroma_location suggested_xchroma_offset;
ktl::api::chroma_location suggested_ychroma_offset;
};

struct pipeline_rendering_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rendering_create_info;
const void * next = {};
ktl::i32 view_mask;
ktl::i32 color_attachment_count = {};
const ktl::api::format * color_attachment_formats;
ktl::api::format depth_attachment_format;
ktl::api::format stencil_attachment_format;
};

using pipeline_rendering_create_info_khr = pipeline_rendering_create_info;

struct rendering_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_rendering_info;
const void * next = {};
ktl::api::rendering_flags flags = {};
ktl::api::rect2d render_area;
ktl::i32 layer_count;
ktl::i32 view_mask;
ktl::i32 color_attachment_count = {};
const ktl::api::rendering_attachment_info * color_attachments;
const ktl::api::rendering_attachment_info * depth_attachment = {};
const ktl::api::rendering_attachment_info * stencil_attachment = {};
};

using rendering_info_khr = rendering_info;

struct rendering_end_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_rendering_end_info_khr;
const void * next = {};
};

using rendering_end_info_ext = rendering_end_info_khr;

struct rendering_attachment_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_rendering_attachment_info;
const void * next = {};
ktl::api::image_view image_view = {};
ktl::api::image_layout image_layout;
ktl::api::resolve_mode_flag_bits resolve_mode = {};
ktl::api::image_view resolve_image_view = {};
ktl::api::image_layout resolve_image_layout;
ktl::api::attachment_load_op load_op;
ktl::api::attachment_store_op store_op;
ktl::api::clear_value clear_value;
};

using rendering_attachment_info_khr = rendering_attachment_info;

struct rendering_fragment_shading_rate_attachment_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_rendering_fragment_shading_rate_attachment_info_khr;
const void * next = {};
ktl::api::image_view image_view = {};
ktl::api::image_layout image_layout;
ktl::api::extent2d shading_rate_attachment_texel_size;
};

struct rendering_fragment_density_map_attachment_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_rendering_fragment_density_map_attachment_info_ext;
const void * next = {};
ktl::api::image_view image_view;
ktl::api::image_layout image_layout;
};

struct physical_device_dynamic_rendering_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_dynamic_rendering_features;
void * next = {};
ktl::bool32 dynamic_rendering;
};

using physical_device_dynamic_rendering_features_khr = physical_device_dynamic_rendering_features;

struct command_buffer_inheritance_rendering_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_buffer_inheritance_rendering_info;
const void * next = {};
ktl::api::rendering_flags flags = {};
ktl::i32 view_mask;
ktl::i32 color_attachment_count = {};
ktl::i32 color_attachment_count;
const ktl::api::format * color_attachment_formats;
ktl::api::format depth_attachment_format;
ktl::api::format stencil_attachment_format;
ktl::api::sample_count_flag_bits rasterization_samples = {};
};

using command_buffer_inheritance_rendering_info_khr = command_buffer_inheritance_rendering_info;

struct attachment_sample_count_info_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_attachment_sample_count_info_amd;
const void * next = {};
ktl::i32 color_attachment_count = {};
const ktl::api::sample_count_flag_bits * color_attachment_samples;
ktl::api::sample_count_flag_bits depth_stencil_attachment_samples = {};
};

using attachment_sample_count_info_nv = attachment_sample_count_info_amd;

struct multiview_per_view_attributes_info_nvx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_multiview_per_view_attributes_info_nvx;
const void * next = {};
ktl::bool32 per_view_attributes;
ktl::bool32 per_view_attributes_position_xonly;
};

struct physical_device_image_view_min_lod_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_view_min_lod_features_ext;
void * next = {};
ktl::bool32 min_lod;
};

struct image_view_min_lod_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_view_min_lod_create_info_ext;
const void * next = {};
float min_lod;
};

struct physical_device_rasterization_order_attachment_access_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_rasterization_order_attachment_access_features_ext;
void * next = {};
ktl::bool32 rasterization_order_color_attachment_access;
ktl::bool32 rasterization_order_depth_attachment_access;
ktl::bool32 rasterization_order_stencil_attachment_access;
};

using physical_device_rasterization_order_attachment_access_features_arm = physical_device_rasterization_order_attachment_access_features_ext;

struct physical_device_linear_color_attachment_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_linear_color_attachment_features_nv;
void * next = {};
ktl::bool32 linear_color_attachment;
};

struct physical_device_graphics_pipeline_library_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_graphics_pipeline_library_features_ext;
void * next = {};
ktl::bool32 graphics_pipeline_library;
};

struct physical_device_pipeline_binary_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_binary_features_khr;
void * next = {};
ktl::bool32 pipeline_binaries;
};

struct device_pipeline_binary_internal_cache_control_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_pipeline_binary_internal_cache_control_khr;
const void * next = {};
ktl::bool32 disable_internal_cache;
};

struct physical_device_pipeline_binary_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_binary_properties_khr;
void * next = {};
ktl::bool32 pipeline_binary_internal_cache;
ktl::bool32 pipeline_binary_internal_cache_control;
ktl::bool32 pipeline_binary_prefers_internal_cache;
ktl::bool32 pipeline_binary_precompiled_internal_cache;
ktl::bool32 pipeline_binary_compressed_data;
};

struct physical_device_graphics_pipeline_library_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_graphics_pipeline_library_properties_ext;
void * next = {};
ktl::bool32 graphics_pipeline_library_fast_linking;
ktl::bool32 graphics_pipeline_library_independent_interpolation_decoration;
};

struct graphics_pipeline_library_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_graphics_pipeline_library_create_info_ext;
const void * next = {};
ktl::api::graphics_pipeline_library_flags_ext flags;
};

struct physical_device_descriptor_set_host_mapping_features_valve final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_set_host_mapping_features_valve;
void * next = {};
ktl::bool32 descriptor_set_host_mapping;
};

struct descriptor_set_binding_reference_valve final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_binding_reference_valve;
const void * next = {};
ktl::api::descriptor_set_layout descriptor_set_layout;
ktl::i32 binding;
};

struct descriptor_set_layout_host_mapping_info_valve final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_layout_host_mapping_info_valve;
void * next = {};
ktl::usize descriptor_offset;
ktl::i32 descriptor_size;
};

struct physical_device_nested_command_buffer_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_nested_command_buffer_features_ext;
void * next = {};
ktl::bool32 nested_command_buffer;
ktl::bool32 nested_command_buffer_rendering;
ktl::bool32 nested_command_buffer_simultaneous_use;
};

struct physical_device_nested_command_buffer_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_nested_command_buffer_properties_ext;
void * next = {};
ktl::i32 max_command_buffer_nesting_level;
};

struct physical_device_shader_module_identifier_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_module_identifier_features_ext;
void * next = {};
ktl::bool32 shader_module_identifier;
};

struct physical_device_shader_module_identifier_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_module_identifier_properties_ext;
void * next = {};
ktl::u8 shader_module_identifier_algorithm_uuid[KTL_API_UUID_SIZE];
};

struct pipeline_shader_stage_module_identifier_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_shader_stage_module_identifier_create_info_ext;
const void * next = {};
ktl::i32 identifier_size = {};
const ktl::u8 * identifier;
};

struct shader_module_identifier_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_shader_module_identifier_ext;
void * next = {};
ktl::i32 identifier_size;
ktl::u8 identifier[KTL_API_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT];
};

struct image_compression_control_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_compression_control_ext;
const void * next = {};
ktl::api::image_compression_flags_ext flags;
ktl::i32 compression_control_plane_count = {};
ktl::api::image_compression_fixed_rate_flags_ext * fixed_rate_flags;
};

struct physical_device_image_compression_control_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_compression_control_features_ext;
void * next = {};
ktl::bool32 image_compression_control;
};

struct image_compression_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_compression_properties_ext;
void * next = {};
ktl::api::image_compression_flags_ext image_compression_flags;
ktl::api::image_compression_fixed_rate_flags_ext image_compression_fixed_rate_flags;
};

struct physical_device_image_compression_control_swapchain_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_compression_control_swapchain_features_ext;
void * next = {};
ktl::bool32 image_compression_control_swapchain;
};

struct image_subresource2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_subresource_2;
void * next = {};
ktl::api::image_subresource image_subresource;
};

using image_subresource2khr = image_subresource2;

using image_subresource2ext = image_subresource2;

struct subresource_layout2 final
{
ktl::api::structure_type type = ktl::api::structure_type::v_subresource_layout_2;
void * next = {};
ktl::api::subresource_layout subresource_layout;
};

using subresource_layout2khr = subresource_layout2;

using subresource_layout2ext = subresource_layout2;

struct render_pass_creation_control_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_creation_control_ext;
const void * next = {};
ktl::bool32 disallow_merging;
};

struct render_pass_creation_feedback_info_ext final
{
ktl::i32 post_merge_subpass_count;
};

struct render_pass_creation_feedback_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_creation_feedback_create_info_ext;
const void * next = {};
ktl::api::render_pass_creation_feedback_info_ext * render_pass_feedback;
};

struct render_pass_subpass_feedback_info_ext final
{
ktl::api::subpass_merge_status_ext subpass_merge_status;
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::i32 post_merge_index;
};

struct render_pass_subpass_feedback_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_subpass_feedback_create_info_ext;
const void * next = {};
ktl::api::render_pass_subpass_feedback_info_ext * subpass_feedback;
};

struct physical_device_subpass_merge_feedback_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_subpass_merge_feedback_features_ext;
void * next = {};
ktl::bool32 subpass_merge_feedback;
};

struct micromap_build_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_micromap_build_info_ext;
const void * next = {};
ktl::api::micromap_type_ext type;
ktl::api::build_micromap_flags_ext flags = {};
ktl::api::build_micromap_mode_ext mode;
ktl::api::micromap_ext dst_micromap = {};
ktl::i32 usage_counts_count = {};
const ktl::api::micromap_usage_ext * usage_counts = {};
const ktl::api::micromap_usage_ext * usage_counts;
ktl::api::device_or_host_address_const_khr data;
ktl::api::device_or_host_address_khr scratch_data;
ktl::api::device_or_host_address_const_khr triangle_array;
ktl::dvsize triangle_array_stride;
};

struct micromap_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_micromap_create_info_ext;
const void * next = {};
ktl::api::micromap_create_flags_ext create_flags = {};
ktl::api::buffer buffer;
ktl::dvsize offset;
ktl::dvsize size;
ktl::api::micromap_type_ext type;
ktl::dvaddr device_address = {};
};

struct micromap_version_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_micromap_version_info_ext;
const void * next = {};
const ktl::u8 * version_data;
};

struct copy_micromap_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_micromap_info_ext;
const void * next = {};
ktl::api::micromap_ext src;
ktl::api::micromap_ext dst;
ktl::api::copy_micromap_mode_ext mode;
};

struct copy_micromap_to_memory_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_micromap_to_memory_info_ext;
const void * next = {};
ktl::api::micromap_ext src;
ktl::api::device_or_host_address_khr dst;
ktl::api::copy_micromap_mode_ext mode;
};

struct copy_memory_to_micromap_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_memory_to_micromap_info_ext;
const void * next = {};
ktl::api::device_or_host_address_const_khr src;
ktl::api::micromap_ext dst;
ktl::api::copy_micromap_mode_ext mode;
};

struct micromap_build_sizes_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_micromap_build_sizes_info_ext;
const void * next = {};
ktl::dvsize micromap_size;
ktl::dvsize build_scratch_size;
ktl::bool32 discardable;
};

struct micromap_usage_ext final
{
ktl::i32 count;
ktl::i32 subdivision_level;
ktl::i32 format;
};

struct micromap_triangle_ext final
{
ktl::i32 data_offset;
ktl::u16 subdivision_level;
ktl::u16 format;
};

struct physical_device_opacity_micromap_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_opacity_micromap_features_ext;
void * next = {};
ktl::bool32 micromap;
ktl::bool32 micromap_capture_replay;
ktl::bool32 micromap_host_commands;
};

struct physical_device_opacity_micromap_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_opacity_micromap_properties_ext;
void * next = {};
ktl::i32 max_opacity2state_subdivision_level;
ktl::i32 max_opacity4state_subdivision_level;
};

struct acceleration_structure_triangles_opacity_micromap_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_triangles_opacity_micromap_ext;
void * next = {};
ktl::api::index_type index_type;
ktl::api::device_or_host_address_const_khr index_buffer;
ktl::dvsize index_stride;
ktl::i32 base_triangle;
ktl::i32 usage_counts_count = {};
const ktl::api::micromap_usage_ext * usage_counts = {};
const ktl::api::micromap_usage_ext * usage_counts;
ktl::api::micromap_ext micromap = {};
};

struct physical_device_displacement_micromap_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_displacement_micromap_features_nv;
void * next = {};
ktl::bool32 displacement_micromap;
};

struct physical_device_displacement_micromap_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_displacement_micromap_properties_nv;
void * next = {};
ktl::i32 max_displacement_micromap_subdivision_level;
};

struct acceleration_structure_triangles_displacement_micromap_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_triangles_displacement_micromap_nv;
void * next = {};
ktl::api::format displacement_bias_and_scale_format;
ktl::api::format displacement_vector_format;
ktl::api::device_or_host_address_const_khr displacement_bias_and_scale_buffer;
ktl::dvsize displacement_bias_and_scale_stride;
ktl::api::device_or_host_address_const_khr displacement_vector_buffer;
ktl::dvsize displacement_vector_stride;
ktl::api::device_or_host_address_const_khr displaced_micromap_primitive_flags;
ktl::dvsize displaced_micromap_primitive_flags_stride;
ktl::api::index_type index_type;
ktl::api::device_or_host_address_const_khr index_buffer;
ktl::dvsize index_stride;
ktl::i32 base_triangle;
ktl::i32 usage_counts_count = {};
const ktl::api::micromap_usage_ext * usage_counts = {};
const ktl::api::micromap_usage_ext * usage_counts;
ktl::api::micromap_ext micromap = {};
};

struct pipeline_properties_identifier_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_properties_identifier_ext;
void * next = {};
ktl::u8 pipeline_identifier[KTL_API_UUID_SIZE];
};

struct physical_device_pipeline_properties_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_properties_features_ext;
void * next = {};
ktl::bool32 pipeline_properties_identifier;
};

struct physical_device_shader_early_and_late_fragment_tests_features_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_early_and_late_fragment_tests_features_amd;
void * next = {};
ktl::bool32 shader_early_and_late_fragment_tests;
};

struct external_memory_acquire_unmodified_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_memory_acquire_unmodified_ext;
const void * next = {};
ktl::bool32 acquire_unmodified_memory;
};

struct export_metal_object_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_object_create_info_ext;
const void * next = {};
ktl::api::export_metal_object_type_flag_bits_ext export_object_type = {};
};

struct export_metal_objects_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_objects_info_ext;
const void * next = {};
};

struct export_metal_device_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_device_info_ext;
const void * next = {};
MTLDevice_id mtl_device;
};

struct export_metal_command_queue_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_command_queue_info_ext;
const void * next = {};
ktl::api::queue queue;
MTLCommandQueue_id mtl_command_queue;
};

struct export_metal_buffer_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_buffer_info_ext;
const void * next = {};
ktl::api::device_memory memory;
MTLBuffer_id mtl_buffer;
};

struct import_metal_buffer_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_metal_buffer_info_ext;
const void * next = {};
MTLBuffer_id mtl_buffer;
};

struct export_metal_texture_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_texture_info_ext;
const void * next = {};
ktl::api::image image = {};
ktl::api::image_view image_view = {};
ktl::api::buffer_view buffer_view = {};
ktl::api::image_aspect_flag_bits plane;
MTLTexture_id mtl_texture;
};

struct import_metal_texture_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_metal_texture_info_ext;
const void * next = {};
ktl::api::image_aspect_flag_bits plane;
MTLTexture_id mtl_texture;
};

struct export_metal_iosurface_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_io_surface_info_ext;
const void * next = {};
ktl::api::image image;
IOSurfaceRef io_surface;
};

struct import_metal_iosurface_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_metal_io_surface_info_ext;
const void * next = {};
IOSurfaceRef io_surface = {};
};

struct export_metal_shared_event_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_shared_event_info_ext;
const void * next = {};
ktl::api::semaphore semaphore = {};
ktl::api::event event = {};
MTLSharedEvent_id mtl_shared_event;
};

struct import_metal_shared_event_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_metal_shared_event_info_ext;
const void * next = {};
MTLSharedEvent_id mtl_shared_event;
};

struct physical_device_non_seamless_cube_map_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_non_seamless_cube_map_features_ext;
void * next = {};
ktl::bool32 non_seamless_cube_map;
};

struct physical_device_pipeline_robustness_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_robustness_features;
void * next = {};
ktl::bool32 pipeline_robustness;
};

using physical_device_pipeline_robustness_features_ext = physical_device_pipeline_robustness_features;

struct pipeline_robustness_create_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_robustness_create_info;
const void * next = {};
ktl::api::pipeline_robustness_buffer_behavior storage_buffers;
ktl::api::pipeline_robustness_buffer_behavior uniform_buffers;
ktl::api::pipeline_robustness_buffer_behavior vertex_inputs;
ktl::api::pipeline_robustness_image_behavior images;
};

using pipeline_robustness_create_info_ext = pipeline_robustness_create_info;

struct physical_device_pipeline_robustness_properties final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_robustness_properties;
void * next = {};
ktl::api::pipeline_robustness_buffer_behavior default_robustness_storage_buffers;
ktl::api::pipeline_robustness_buffer_behavior default_robustness_uniform_buffers;
ktl::api::pipeline_robustness_buffer_behavior default_robustness_vertex_inputs;
ktl::api::pipeline_robustness_image_behavior default_robustness_images;
};

using physical_device_pipeline_robustness_properties_ext = physical_device_pipeline_robustness_properties;

struct image_view_sample_weight_create_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_view_sample_weight_create_info_qcom;
const void * next = {};
ktl::api::offset2d filter_center;
ktl::api::extent2d filter_size;
ktl::i32 num_phases;
};

struct physical_device_image_processing_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_processing_features_qcom;
void * next = {};
ktl::bool32 texture_sample_weighted;
ktl::bool32 texture_box_filter;
ktl::bool32 texture_block_match;
};

struct physical_device_image_processing_properties_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_processing_properties_qcom;
void * next = {};
ktl::i32 max_weight_filter_phases = {};
ktl::api::extent2d max_weight_filter_dimension = {};
ktl::api::extent2d max_block_match_region = {};
ktl::api::extent2d max_box_filter_block_size = {};
};

struct physical_device_tile_properties_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tile_properties_features_qcom;
void * next = {};
ktl::bool32 tile_properties;
};

struct tile_properties_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tile_properties_qcom;
void * next = {};
ktl::api::extent3d tile_size;
ktl::api::extent2d apron_size;
ktl::api::offset2d origin;
};

struct tile_memory_bind_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tile_memory_bind_info_qcom;
const void * next = {};
ktl::api::device_memory memory;
};

struct physical_device_amigo_profiling_features_sec final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_amigo_profiling_features_sec;
void * next = {};
ktl::bool32 amigo_profiling;
};

struct amigo_profiling_submit_info_sec final
{
ktl::api::structure_type type = ktl::api::structure_type::v_amigo_profiling_submit_info_sec;
const void * next = {};
ktl::u64 first_draw_timestamp;
ktl::u64 swap_buffer_timestamp;
};

struct physical_device_attachment_feedback_loop_layout_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_attachment_feedback_loop_layout_features_ext;
void * next = {};
ktl::bool32 attachment_feedback_loop_layout;
};

using physical_device_depth_clamp_zero_one_features_ext = physical_device_depth_clamp_zero_one_features_khr;

struct attachment_feedback_loop_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_attachment_feedback_loop_info_ext;
const void * next = {};
ktl::bool32 feedback_loop_enable;
};

struct physical_device_address_binding_report_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_address_binding_report_features_ext;
void * next = {};
ktl::bool32 report_address_binding;
};

struct rendering_attachment_flags_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_rendering_attachment_flags_info_khr;
const void * next = {};
ktl::api::rendering_attachment_flags_khr flags = {};
};

struct resolve_image_mode_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_resolve_image_mode_info_khr;
const void * next = {};
ktl::api::resolve_image_flags_khr flags = {};
ktl::api::resolve_mode_flag_bits resolve_mode = {};
ktl::api::resolve_mode_flag_bits stencil_resolve_mode = {};
};

struct device_address_binding_callback_data_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_address_binding_callback_data_ext;
void * next = {};
ktl::api::device_address_binding_flags_ext flags = {};
ktl::dvaddr base_address;
ktl::dvsize size;
ktl::api::device_address_binding_type_ext binding_type;
};

struct physical_device_optical_flow_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_optical_flow_features_nv;
void * next = {};
ktl::bool32 optical_flow;
};

struct physical_device_optical_flow_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_optical_flow_properties_nv;
void * next = {};
ktl::api::optical_flow_grid_size_flags_nv supported_output_grid_sizes;
ktl::api::optical_flow_grid_size_flags_nv supported_hint_grid_sizes;
ktl::bool32 hint_supported;
ktl::bool32 cost_supported;
ktl::bool32 bidirectional_flow_supported;
ktl::bool32 global_flow_supported;
ktl::i32 min_width;
ktl::i32 min_height;
ktl::i32 max_width;
ktl::i32 max_height;
ktl::i32 max_num_regions_of_interest;
};

struct optical_flow_image_format_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_optical_flow_image_format_info_nv;
const void * next = {};
ktl::api::optical_flow_usage_flags_nv usage;
};

struct optical_flow_image_format_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_optical_flow_image_format_properties_nv;
void * next = {};
ktl::api::format format;
};

struct optical_flow_session_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_optical_flow_session_create_info_nv;
void * next = {};
ktl::i32 width;
ktl::i32 height;
ktl::api::format image_format;
ktl::api::format flow_vector_format;
ktl::api::format cost_format = {};
ktl::api::optical_flow_grid_size_flags_nv output_grid_size;
ktl::api::optical_flow_grid_size_flags_nv hint_grid_size = {};
ktl::api::optical_flow_performance_level_nv performance_level = {};
ktl::api::optical_flow_session_create_flags_nv flags = {};
};

struct optical_flow_session_create_private_data_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_optical_flow_session_create_private_data_info_nv;
void * next = {};
ktl::i32 id;
ktl::i32 size;
const void * private_data;
};

struct optical_flow_execute_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_optical_flow_execute_info_nv;
void * next = {};
ktl::api::optical_flow_execute_flags_nv flags = {};
ktl::i32 region_count = {};
const ktl::api::rect2d * regions;
};

struct physical_device_fault_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fault_features_ext;
void * next = {};
ktl::bool32 device_fault;
ktl::bool32 device_fault_vendor_binary;
};

struct device_fault_address_info_khr final
{
ktl::api::device_fault_address_type_khr address_type;
ktl::dvaddr reported_address;
ktl::dvsize address_precision;
};

using device_fault_address_info_ext = device_fault_address_info_khr;

struct device_fault_vendor_info_khr final
{
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::u64 vendor_fault_code;
ktl::u64 vendor_fault_data;
};

using device_fault_vendor_info_ext = device_fault_vendor_info_khr;

struct device_fault_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_fault_info_khr;
void * next = {};
ktl::api::device_fault_flags_khr flags;
ktl::u64 group_id;
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::api::device_fault_address_info_khr fault_address_info = {};
ktl::api::device_fault_address_info_khr instruction_address_info = {};
ktl::api::device_fault_vendor_info_khr vendor_info = {};
};

struct device_fault_debug_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_fault_debug_info_khr;
void * next = {};
ktl::i32 vendor_binary_size;
void * vendor_binary_data = {};
};

struct device_fault_counts_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_fault_counts_ext;
void * next = {};
ktl::i32 address_info_count = {};
ktl::i32 vendor_info_count = {};
ktl::dvsize vendor_binary_size = {};
};

struct device_fault_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_fault_info_ext;
void * next = {};
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::api::device_fault_address_info_khr * address_infos = {};
ktl::api::device_fault_vendor_info_khr * vendor_infos = {};
void * vendor_binary_data = {};
};

struct device_fault_vendor_binary_header_version_one_khr final
{
ktl::i32 header_size;
ktl::api::device_fault_vendor_binary_header_version_khr header_version;
ktl::i32 vendor_id;
ktl::i32 device_id;
ktl::i32 driver_version;
ktl::u8 pipeline_cache_uuid[KTL_API_UUID_SIZE];
ktl::i32 application_name_offset;
ktl::i32 application_version;
ktl::i32 engine_name_offset;
ktl::i32 engine_version;
ktl::i32 api_version;
};

using device_fault_vendor_binary_header_version_one_ext = device_fault_vendor_binary_header_version_one_khr;

struct physical_device_fault_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fault_features_khr;
void * next = {};
ktl::bool32 device_fault;
ktl::bool32 device_fault_vendor_binary;
ktl::bool32 device_fault_report_masked;
ktl::bool32 device_fault_device_lost_on_masked;
};

struct physical_device_fault_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fault_properties_khr;
void * next = {};
ktl::i32 max_device_fault_count;
};

struct physical_device_pipeline_library_group_handles_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_library_group_handles_features_ext;
void * next = {};
ktl::bool32 pipeline_library_group_handles;
};

struct depth_bias_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_depth_bias_info_ext;
const void * next = {};
float depth_bias_constant_factor;
float depth_bias_clamp;
float depth_bias_slope_factor;
};

struct depth_bias_representation_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_depth_bias_representation_info_ext;
const void * next = {};
ktl::api::depth_bias_representation_ext depth_bias_representation;
ktl::bool32 depth_bias_exact;
};

struct decompress_memory_region_nv final
{
ktl::dvaddr src_address;
ktl::dvaddr dst_address;
ktl::dvsize compressed_size;
ktl::dvsize decompressed_size;
ktl::api::memory_decompression_method_flags_ext decompression_method;
};

struct decompress_memory_region_ext final
{
ktl::dvaddr src_address;
ktl::dvaddr dst_address;
ktl::dvsize compressed_size;
ktl::dvsize decompressed_size;
};

struct decompress_memory_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_decompress_memory_info_ext;
const void * next = {};
ktl::api::memory_decompression_method_flags_ext decompression_method;
ktl::i32 region_count;
const ktl::api::decompress_memory_region_ext * regions;
};

struct physical_device_shader_core_builtins_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_core_builtins_properties_arm;
void * next = {};
ktl::u64 shader_core_mask;
ktl::i32 shader_core_count;
ktl::i32 shader_warps_per_core;
};

struct physical_device_shader_core_builtins_features_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_core_builtins_features_arm;
void * next = {};
ktl::bool32 shader_core_builtins;
};

struct frame_boundary_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_frame_boundary_ext;
const void * next = {};
ktl::api::frame_boundary_flags_ext flags = {};
ktl::u64 frame_id;
ktl::i32 image_count = {};
const ktl::api::image * images = {};
ktl::i32 buffer_count = {};
const ktl::api::buffer * buffers = {};
ktl::u64 tag_name = {};
ktl::usize tag_size = {};
const void * tag = {};
};

struct physical_device_frame_boundary_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_frame_boundary_features_ext;
void * next = {};
ktl::bool32 frame_boundary;
};

struct physical_device_dynamic_rendering_unused_attachments_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_dynamic_rendering_unused_attachments_features_ext;
void * next = {};
ktl::bool32 dynamic_rendering_unused_attachments;
};

struct physical_device_internally_synchronized_queues_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_internally_synchronized_queues_features_khr;
void * next = {};
ktl::bool32 internally_synchronized_queues;
};

struct surface_present_mode_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_present_mode_khr;
void * next = {};
ktl::api::present_mode_khr present_mode;
};

using surface_present_mode_ext = surface_present_mode_khr;

struct surface_present_scaling_capabilities_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_present_scaling_capabilities_khr;
void * next = {};
ktl::api::present_scaling_flags_khr supported_present_scaling = {};
ktl::api::present_gravity_flags_khr supported_present_gravity_x = {};
ktl::api::present_gravity_flags_khr supported_present_gravity_y = {};
ktl::api::extent2d min_scaled_image_extent = {};
ktl::api::extent2d max_scaled_image_extent = {};
};

using surface_present_scaling_capabilities_ext = surface_present_scaling_capabilities_khr;

struct surface_present_mode_compatibility_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_present_mode_compatibility_khr;
void * next = {};
ktl::i32 present_mode_count = {};
ktl::api::present_mode_khr * present_modes = {};
};

using surface_present_mode_compatibility_ext = surface_present_mode_compatibility_khr;

struct physical_device_swapchain_maintenance1features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_swapchain_maintenance_1_features_khr;
void * next = {};
ktl::bool32 swapchain_maintenance1;
};

using physical_device_swapchain_maintenance1features_ext = physical_device_swapchain_maintenance1features_khr;

struct swapchain_present_fence_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_present_fence_info_khr;
const void * next = {};
ktl::i32 swapchain_count;
const ktl::api::fence * fences;
};

using swapchain_present_fence_info_ext = swapchain_present_fence_info_khr;

struct swapchain_present_modes_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_present_modes_create_info_khr;
const void * next = {};
ktl::i32 present_mode_count;
const ktl::api::present_mode_khr * present_modes;
};

using swapchain_present_modes_create_info_ext = swapchain_present_modes_create_info_khr;

struct swapchain_present_mode_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_present_mode_info_khr;
const void * next = {};
ktl::i32 swapchain_count;
const ktl::api::present_mode_khr * present_modes;
};

using swapchain_present_mode_info_ext = swapchain_present_mode_info_khr;

struct swapchain_present_scaling_create_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_present_scaling_create_info_khr;
const void * next = {};
ktl::api::present_scaling_flags_khr scaling_behavior = {};
ktl::api::present_gravity_flags_khr present_gravity_x = {};
ktl::api::present_gravity_flags_khr present_gravity_y = {};
};

using swapchain_present_scaling_create_info_ext = swapchain_present_scaling_create_info_khr;

struct release_swapchain_images_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_release_swapchain_images_info_khr;
const void * next = {};
ktl::api::swapchain_khr swapchain;
ktl::i32 image_index_count;
const ktl::i32 * image_indices;
};

using release_swapchain_images_info_ext = release_swapchain_images_info_khr;

struct physical_device_depth_bias_control_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_depth_bias_control_features_ext;
void * next = {};
ktl::bool32 depth_bias_control;
ktl::bool32 least_representable_value_force_unorm_representation;
ktl::bool32 float_representation;
ktl::bool32 depth_bias_exact;
};

struct physical_device_ray_tracing_invocation_reorder_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_features_ext;
void * next = {};
ktl::bool32 ray_tracing_invocation_reorder;
};

struct physical_device_ray_tracing_invocation_reorder_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_features_nv;
void * next = {};
ktl::bool32 ray_tracing_invocation_reorder;
};

struct physical_device_ray_tracing_invocation_reorder_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_properties_ext;
void * next = {};
ktl::api::ray_tracing_invocation_reorder_mode_ext ray_tracing_invocation_reorder_reordering_hint;
ktl::i32 max_shader_binding_table_record_index;
};

struct physical_device_ray_tracing_invocation_reorder_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_properties_nv;
void * next = {};
ktl::api::ray_tracing_invocation_reorder_mode_ext ray_tracing_invocation_reorder_reordering_hint;
};

struct physical_device_extended_sparse_address_space_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_extended_sparse_address_space_features_nv;
void * next = {};
ktl::bool32 extended_sparse_address_space;
};

struct physical_device_extended_sparse_address_space_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_extended_sparse_address_space_properties_nv;
void * next = {};
ktl::dvsize extended_sparse_address_space_size;
ktl::api::image_usage_flags extended_sparse_image_usage_flags;
ktl::api::buffer_usage_flags extended_sparse_buffer_usage_flags;
};

struct direct_driver_loading_info_lunarg final
{
ktl::api::structure_type type = ktl::api::structure_type::v_direct_driver_loading_info_lunarg;
void * next = {};
ktl::api::direct_driver_loading_flags_lunarg flags;
ktl::api::pfn_vk_get_instance_proc_addr_lunarg pfn_get_instance_proc_addr;
};

struct direct_driver_loading_list_lunarg final
{
ktl::api::structure_type type = ktl::api::structure_type::v_direct_driver_loading_list_lunarg;
const void * next = {};
ktl::api::direct_driver_loading_mode_lunarg mode;
ktl::i32 driver_count;
const ktl::api::direct_driver_loading_info_lunarg * drivers;
};

struct physical_device_multiview_per_view_viewports_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multiview_per_view_viewports_features_qcom;
void * next = {};
ktl::bool32 multiview_per_view_viewports;
};

struct physical_device_ray_tracing_position_fetch_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_position_fetch_features_khr;
void * next = {};
ktl::bool32 ray_tracing_position_fetch;
};

struct device_image_subresource_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_image_subresource_info;
const void * next = {};
const ktl::api::image_create_info * create_info;
const ktl::api::image_subresource2 * subresource;
};

using device_image_subresource_info_khr = device_image_subresource_info;

struct physical_device_shader_core_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_core_properties_arm;
void * next = {};
ktl::i32 pixel_rate;
ktl::i32 texel_rate;
ktl::i32 fma_rate;
};

struct physical_device_multiview_per_view_render_areas_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multiview_per_view_render_areas_features_qcom;
void * next = {};
ktl::bool32 multiview_per_view_render_areas;
};

struct multiview_per_view_render_areas_render_pass_begin_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_multiview_per_view_render_areas_render_pass_begin_info_qcom;
const void * next = {};
ktl::i32 per_view_render_area_count = {};
const ktl::api::rect2d * per_view_render_areas;
};

struct query_low_latency_support_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_query_low_latency_support_nv;
const void * next = {};
void * queried_low_latency_data;
};

struct memory_map_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_map_info;
const void * next = {};
ktl::api::memory_map_flags flags = {};
ktl::api::device_memory memory;
ktl::dvsize offset;
ktl::dvsize size;
};

using memory_map_info_khr = memory_map_info;

struct memory_unmap_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_unmap_info;
const void * next = {};
ktl::api::memory_unmap_flags flags = {};
ktl::api::device_memory memory;
};

using memory_unmap_info_khr = memory_unmap_info;

struct physical_device_shader_object_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_object_features_ext;
void * next = {};
ktl::bool32 shader_object;
};

struct physical_device_shader_object_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_object_properties_ext;
void * next = {};
ktl::u8 shader_binary_uuid[KTL_API_UUID_SIZE];
ktl::i32 shader_binary_version;
};

struct shader_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_shader_create_info_ext;
const void * next = {};
ktl::api::shader_create_flags_ext flags = {};
ktl::api::shader_stage_flag_bits stage;
ktl::api::shader_stage_flags next_stage = {};
ktl::api::shader_code_type_ext code_type;
ktl::usize code_size;
const void * code;
const char * name = {};
ktl::i32 set_layout_count = {};
const ktl::api::descriptor_set_layout * set_layouts = {};
ktl::i32 push_constant_range_count = {};
const ktl::api::push_constant_range * push_constant_ranges = {};
const ktl::api::specialization_info * specialization_info = {};
};

struct physical_device_shader_tile_image_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_tile_image_features_ext;
void * next = {};
ktl::bool32 shader_tile_image_color_read_access;
ktl::bool32 shader_tile_image_depth_read_access;
ktl::bool32 shader_tile_image_stencil_read_access;
};

struct physical_device_shader_tile_image_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_tile_image_properties_ext;
void * next = {};
ktl::bool32 shader_tile_image_coherent_read_accelerated;
ktl::bool32 shader_tile_image_read_sample_from_pixel_rate_invocation;
ktl::bool32 shader_tile_image_read_from_helper_invocation;
};

struct import_screen_buffer_info_qnx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_screen_buffer_info_qnx;
const void * next = {};
_screen_buffer * buffer;
};

struct screen_buffer_properties_qnx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_screen_buffer_properties_qnx;
void * next = {};
ktl::dvsize allocation_size;
ktl::i32 memory_type_bits;
};

struct screen_buffer_format_properties_qnx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_screen_buffer_format_properties_qnx;
void * next = {};
ktl::api::format format;
ktl::u64 external_format;
ktl::u64 screen_usage;
ktl::api::format_feature_flags format_features;
ktl::api::component_mapping sampler_ycbcr_conversion_components;
ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
ktl::api::sampler_ycbcr_range suggested_ycbcr_range;
ktl::api::chroma_location suggested_xchroma_offset;
ktl::api::chroma_location suggested_ychroma_offset;
};

struct external_format_qnx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_format_qnx;
void * next = {};
ktl::u64 external_format;
};

struct physical_device_external_memory_screen_buffer_features_qnx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_memory_screen_buffer_features_qnx;
void * next = {};
ktl::bool32 screen_buffer_import;
};

struct physical_device_cooperative_matrix_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_matrix_features_khr;
void * next = {};
ktl::bool32 cooperative_matrix;
ktl::bool32 cooperative_matrix_robust_buffer_access;
};

struct cooperative_matrix_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cooperative_matrix_properties_khr;
void * next = {};
ktl::i32 msize;
ktl::i32 nsize;
ktl::i32 ksize;
ktl::api::component_type_khr atype;
ktl::api::component_type_khr btype;
ktl::api::component_type_khr ctype;
ktl::api::component_type_khr result_type;
ktl::bool32 saturating_accumulation;
ktl::api::scope_khr scope;
};

struct physical_device_cooperative_matrix_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_matrix_properties_khr;
void * next = {};
ktl::api::shader_stage_flags cooperative_matrix_supported_stages;
};

struct physical_device_cooperative_matrix_conversion_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_matrix_conversion_features_qcom;
void * next = {};
ktl::bool32 cooperative_matrix_conversion;
};

struct physical_device_shader_enqueue_properties_amdx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_enqueue_properties_amdx;
void * next = {};
ktl::i32 max_execution_graph_depth;
ktl::i32 max_execution_graph_shader_output_nodes;
ktl::i32 max_execution_graph_shader_payload_size;
ktl::i32 max_execution_graph_shader_payload_count;
ktl::i32 execution_graph_dispatch_address_alignment;
ktl::i32 max_execution_graph_workgroup_count[3];
ktl::i32 max_execution_graph_workgroups;
};

struct physical_device_shader_enqueue_features_amdx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_enqueue_features_amdx;
void * next = {};
ktl::bool32 shader_enqueue;
ktl::bool32 shader_mesh_enqueue;
};

struct execution_graph_pipeline_create_info_amdx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_execution_graph_pipeline_create_info_amdx;
const void * next = {};
ktl::api::pipeline_create_flags flags = {};
ktl::i32 stage_count = {};
const ktl::api::pipeline_shader_stage_create_info * stages = {};
const ktl::api::pipeline_library_create_info_khr * library_info = {};
ktl::api::pipeline_layout layout = {};
ktl::api::pipeline base_pipeline_handle = {};
ktl::i32 base_pipeline_index;
};

struct pipeline_shader_stage_node_create_info_amdx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_shader_stage_node_create_info_amdx;
const void * next = {};
const char * name = {};
ktl::i32 index;
};

struct execution_graph_pipeline_scratch_size_amdx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_execution_graph_pipeline_scratch_size_amdx;
void * next = {};
ktl::dvsize min_size;
ktl::dvsize max_size;
ktl::dvsize size_granularity;
};

struct dispatch_graph_info_amdx final
{
ktl::i32 node_index;
ktl::i32 payload_count = {};
ktl::api::device_or_host_address_const_amdx payloads;
ktl::u64 payload_stride;
};

struct dispatch_graph_count_info_amdx final
{
ktl::i32 count = {};
ktl::api::device_or_host_address_const_amdx infos;
ktl::u64 stride;
};

struct physical_device_anti_lag_features_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_anti_lag_features_amd;
void * next = {};
ktl::bool32 anti_lag;
};

struct anti_lag_data_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_anti_lag_data_amd;
const void * next = {};
ktl::api::anti_lag_mode_amd mode;
ktl::i32 max_fps;
const ktl::api::anti_lag_presentation_info_amd * presentation_info = {};
};

struct anti_lag_presentation_info_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_anti_lag_presentation_info_amd;
void * next = {};
ktl::api::anti_lag_stage_amd stage;
ktl::u64 frame_index;
};

struct bind_memory_status final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_memory_status;
const void * next = {};
ktl::api::result * result;
};

struct physical_device_tile_memory_heap_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tile_memory_heap_features_qcom;
void * next = {};
ktl::bool32 tile_memory_heap;
};

struct physical_device_tile_memory_heap_properties_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tile_memory_heap_properties_qcom;
void * next = {};
ktl::bool32 queue_submit_boundary;
ktl::bool32 tile_buffer_transfers;
};

struct tile_memory_size_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tile_memory_size_info_qcom;
const void * next = {};
ktl::dvsize size;
};

struct tile_memory_requirements_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tile_memory_requirements_qcom;
void * next = {};
ktl::dvsize size;
ktl::dvsize alignment;
};

using bind_memory_status_khr = bind_memory_status;

struct bind_descriptor_sets_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_descriptor_sets_info;
const void * next = {};
ktl::api::shader_stage_flags stage_flags;
ktl::api::pipeline_layout layout = {};
ktl::i32 first_set = {};
ktl::i32 descriptor_set_count;
const ktl::api::descriptor_set * descriptor_sets;
ktl::i32 dynamic_offset_count = {};
const ktl::i32 * dynamic_offsets;
};

using bind_descriptor_sets_info_khr = bind_descriptor_sets_info;

struct push_constants_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_push_constants_info;
const void * next = {};
ktl::api::pipeline_layout layout = {};
ktl::api::shader_stage_flags stage_flags;
ktl::i32 offset = {};
ktl::i32 size;
const void * values;
};

using push_constants_info_khr = push_constants_info;

struct push_descriptor_set_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_push_descriptor_set_info;
const void * next = {};
ktl::api::shader_stage_flags stage_flags;
ktl::api::pipeline_layout layout = {};
ktl::i32 set = {};
ktl::i32 descriptor_write_count;
const ktl::api::write_descriptor_set * descriptor_writes;
};

using push_descriptor_set_info_khr = push_descriptor_set_info;

struct push_descriptor_set_with_template_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_push_descriptor_set_with_template_info;
const void * next = {};
ktl::api::descriptor_update_template descriptor_update_template;
ktl::api::pipeline_layout layout = {};
ktl::i32 set = {};
const void * data;
};

using push_descriptor_set_with_template_info_khr = push_descriptor_set_with_template_info;

struct set_descriptor_buffer_offsets_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_set_descriptor_buffer_offsets_info_ext;
const void * next = {};
ktl::api::shader_stage_flags stage_flags;
ktl::api::pipeline_layout layout = {};
ktl::i32 first_set = {};
ktl::i32 set_count;
const ktl::i32 * buffer_indices;
const ktl::dvsize * offsets;
};

struct bind_descriptor_buffer_embedded_samplers_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_descriptor_buffer_embedded_samplers_info_ext;
const void * next = {};
ktl::api::shader_stage_flags stage_flags;
ktl::api::pipeline_layout layout = {};
ktl::i32 set = {};
};

struct physical_device_cubic_clamp_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cubic_clamp_features_qcom;
void * next = {};
ktl::bool32 cubic_range_clamp;
};

struct physical_device_ycbcr_degamma_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ycbcr_degamma_features_qcom;
void * next = {};
ktl::bool32 ycbcr_degamma;
};

struct sampler_ycbcr_conversion_ycbcr_degamma_create_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_ycbcr_conversion_ycbcr_degamma_create_info_qcom;
void * next = {};
ktl::bool32 enable_ydegamma;
ktl::bool32 enable_cb_cr_degamma;
};

struct physical_device_cubic_weights_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cubic_weights_features_qcom;
void * next = {};
ktl::bool32 selectable_cubic_weights;
};

struct sampler_cubic_weights_create_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_cubic_weights_create_info_qcom;
const void * next = {};
ktl::api::cubic_filter_weights_qcom cubic_weights;
};

struct blit_image_cubic_weights_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_blit_image_cubic_weights_info_qcom;
const void * next = {};
ktl::api::cubic_filter_weights_qcom cubic_weights;
};

struct physical_device_image_processing2features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_processing_2_features_qcom;
void * next = {};
ktl::bool32 texture_block_match2;
};

struct physical_device_image_processing2properties_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_processing_2_properties_qcom;
void * next = {};
ktl::api::extent2d max_block_match_window = {};
};

struct sampler_block_match_window_create_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_block_match_window_create_info_qcom;
const void * next = {};
ktl::api::extent2d window_extent;
ktl::api::block_match_window_compare_mode_qcom window_compare_mode;
};

struct physical_device_descriptor_pool_overallocation_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_pool_overallocation_features_nv;
void * next = {};
ktl::bool32 descriptor_pool_overallocation;
};

struct physical_device_layered_driver_properties_msft final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_layered_driver_properties_msft;
void * next = {};
ktl::api::layered_driver_underlying_api_msft underlying_api;
};

struct physical_device_per_stage_descriptor_set_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_per_stage_descriptor_set_features_nv;
void * next = {};
ktl::bool32 per_stage_descriptor_set;
ktl::bool32 dynamic_pipeline_layout;
};

struct physical_device_external_format_resolve_features_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_format_resolve_features_android;
void * next = {};
ktl::bool32 external_format_resolve;
};

struct physical_device_external_format_resolve_properties_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_format_resolve_properties_android;
void * next = {};
ktl::bool32 null_color_attachment_with_external_format_resolve;
ktl::api::chroma_location external_format_resolve_chroma_offset_x;
ktl::api::chroma_location external_format_resolve_chroma_offset_y;
};

struct android_hardware_buffer_format_resolve_properties_android final
{
ktl::api::structure_type type = ktl::api::structure_type::v_android_hardware_buffer_format_resolve_properties_android;
void * next = {};
ktl::api::format color_attachment_format;
};

struct latency_sleep_mode_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_latency_sleep_mode_info_nv;
const void * next = {};
ktl::bool32 low_latency_mode;
ktl::bool32 low_latency_boost;
ktl::i32 minimum_interval_us;
};

struct latency_sleep_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_latency_sleep_info_nv;
const void * next = {};
ktl::api::semaphore signal_semaphore;
ktl::u64 value;
};

struct set_latency_marker_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_set_latency_marker_info_nv;
const void * next = {};
ktl::u64 present_id;
ktl::api::latency_marker_nv marker;
};

struct get_latency_marker_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_get_latency_marker_info_nv;
const void * next = {};
ktl::i32 timing_count = {};
ktl::api::latency_timings_frame_report_nv * timings = {};
};

struct latency_timings_frame_report_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_latency_timings_frame_report_nv;
void * next = {};
ktl::u64 present_id;
ktl::u64 input_sample_time_us;
ktl::u64 sim_start_time_us;
ktl::u64 sim_end_time_us;
ktl::u64 render_submit_start_time_us;
ktl::u64 render_submit_end_time_us;
ktl::u64 present_start_time_us;
ktl::u64 present_end_time_us;
ktl::u64 driver_start_time_us;
ktl::u64 driver_end_time_us;
ktl::u64 os_render_queue_start_time_us;
ktl::u64 os_render_queue_end_time_us;
ktl::u64 gpu_render_start_time_us;
ktl::u64 gpu_render_end_time_us;
};

struct out_of_band_queue_type_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_out_of_band_queue_type_info_nv;
const void * next = {};
ktl::api::out_of_band_queue_type_nv queue_type;
};

struct latency_submission_present_id_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_latency_submission_present_id_nv;
const void * next = {};
ktl::u64 present_id;
};

struct swapchain_latency_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_latency_create_info_nv;
const void * next = {};
ktl::bool32 latency_mode_enable = {};
};

struct latency_surface_capabilities_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_latency_surface_capabilities_nv;
const void * next = {};
ktl::i32 present_mode_count = {};
ktl::api::present_mode_khr * present_modes = {};
};

struct physical_device_cuda_kernel_launch_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cuda_kernel_launch_features_nv;
void * next = {};
ktl::bool32 cuda_kernel_launch_features;
};

struct physical_device_cuda_kernel_launch_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cuda_kernel_launch_properties_nv;
void * next = {};
ktl::i32 compute_capability_minor;
ktl::i32 compute_capability_major;
};

struct device_queue_shader_core_control_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_queue_shader_core_control_create_info_arm;
void * next = {};
ktl::i32 shader_core_count;
};

struct physical_device_scheduling_controls_features_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_scheduling_controls_features_arm;
void * next = {};
ktl::bool32 scheduling_controls;
};

struct physical_device_scheduling_controls_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_scheduling_controls_properties_arm;
void * next = {};
ktl::api::physical_device_scheduling_controls_flags_arm scheduling_controls_flags;
};

struct physical_device_scheduling_controls_dispatch_parameters_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_scheduling_controls_dispatch_parameters_properties_arm;
void * next = {};
ktl::i32 scheduling_controls_max_warps_count;
ktl::i32 scheduling_controls_max_queued_batches_count;
ktl::i32 scheduling_controls_max_work_group_batch_size;
};

struct dispatch_parameters_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_dispatch_parameters_arm;
void * next = {};
ktl::i32 work_group_batch_size = {};
ktl::i32 max_queued_work_group_batches = {};
ktl::i32 max_warps_per_shader_core = {};
};

struct physical_device_relaxed_line_rasterization_features_img final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_relaxed_line_rasterization_features_img;
void * next = {};
ktl::bool32 relaxed_line_rasterization;
};

struct physical_device_render_pass_striped_features_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_render_pass_striped_features_arm;
void * next = {};
ktl::bool32 render_pass_striped;
};

struct physical_device_render_pass_striped_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_render_pass_striped_properties_arm;
void * next = {};
ktl::api::extent2d render_pass_stripe_granularity;
ktl::i32 max_render_pass_stripes;
};

struct render_pass_stripe_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_stripe_info_arm;
const void * next = {};
ktl::api::rect2d stripe_area;
};

struct render_pass_stripe_begin_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_stripe_begin_info_arm;
const void * next = {};
ktl::i32 stripe_info_count;
const ktl::api::render_pass_stripe_info_arm * stripe_infos;
};

struct render_pass_stripe_submit_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_stripe_submit_info_arm;
const void * next = {};
ktl::i32 stripe_semaphore_info_count;
const ktl::api::semaphore_submit_info * stripe_semaphore_infos;
};

struct physical_device_pipeline_opacity_micromap_features_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_opacity_micromap_features_arm;
void * next = {};
ktl::bool32 pipeline_opacity_micromap;
};

struct physical_device_shader_maximal_reconvergence_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_maximal_reconvergence_features_khr;
void * next = {};
ktl::bool32 shader_maximal_reconvergence;
};

struct physical_device_shader_subgroup_rotate_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_subgroup_rotate_features;
void * next = {};
ktl::bool32 shader_subgroup_rotate;
ktl::bool32 shader_subgroup_rotate_clustered;
};

using physical_device_shader_subgroup_rotate_features_khr = physical_device_shader_subgroup_rotate_features;

struct physical_device_shader_expect_assume_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_expect_assume_features;
void * next = {};
ktl::bool32 shader_expect_assume;
};

using physical_device_shader_expect_assume_features_khr = physical_device_shader_expect_assume_features;

struct physical_device_shader_float_controls2features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_float_controls_2_features;
void * next = {};
ktl::bool32 shader_float_controls2;
};

using physical_device_shader_float_controls2features_khr = physical_device_shader_float_controls2features;

struct physical_device_dynamic_rendering_local_read_features final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_dynamic_rendering_local_read_features;
void * next = {};
ktl::bool32 dynamic_rendering_local_read;
};

using physical_device_dynamic_rendering_local_read_features_khr = physical_device_dynamic_rendering_local_read_features;

struct rendering_attachment_location_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_rendering_attachment_location_info;
const void * next = {};
ktl::i32 color_attachment_count = {};
const ktl::i32 * color_attachment_locations;
};

using rendering_attachment_location_info_khr = rendering_attachment_location_info;

struct rendering_input_attachment_index_info final
{
ktl::api::structure_type type = ktl::api::structure_type::v_rendering_input_attachment_index_info;
const void * next = {};
ktl::i32 color_attachment_count = {};
const ktl::i32 * color_attachment_input_indices = {};
const ktl::i32 * depth_input_attachment_index = {};
const ktl::i32 * stencil_input_attachment_index = {};
};

using rendering_input_attachment_index_info_khr = rendering_input_attachment_index_info;

struct physical_device_shader_quad_control_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_quad_control_features_khr;
void * next = {};
ktl::bool32 shader_quad_control;
};

struct physical_device_shader_atomic_float16vector_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_atomic_float16_vector_features_nv;
void * next = {};
ktl::bool32 shader_float16vector_atomics;
};

struct physical_device_map_memory_placed_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_map_memory_placed_features_ext;
void * next = {};
ktl::bool32 memory_map_placed;
ktl::bool32 memory_map_range_placed;
ktl::bool32 memory_unmap_reserve;
};

struct physical_device_map_memory_placed_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_map_memory_placed_properties_ext;
void * next = {};
ktl::dvsize min_placed_memory_map_alignment;
};

struct memory_map_placed_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_map_placed_info_ext;
const void * next = {};
void * placed_address;
};

struct physical_device_shader_bfloat16features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_bfloat16_features_khr;
void * next = {};
ktl::bool32 shader_bfloat16type;
ktl::bool32 shader_bfloat16dot_product;
ktl::bool32 shader_bfloat16cooperative_matrix;
};

struct physical_device_raw_access_chains_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_raw_access_chains_features_nv;
void * next = {};
ktl::bool32 shader_raw_access_chains;
};

struct physical_device_command_buffer_inheritance_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_command_buffer_inheritance_features_nv;
void * next = {};
ktl::bool32 command_buffer_inheritance;
};

struct physical_device_image_alignment_control_features_mesa final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_alignment_control_features_mesa;
void * next = {};
ktl::bool32 image_alignment_control;
};

struct physical_device_image_alignment_control_properties_mesa final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_alignment_control_properties_mesa;
void * next = {};
ktl::i32 supported_image_alignment_mask;
};

struct image_alignment_control_create_info_mesa final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_alignment_control_create_info_mesa;
const void * next = {};
ktl::i32 maximum_requested_alignment;
};

struct physical_device_shader_replicated_composites_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_replicated_composites_features_ext;
void * next = {};
ktl::bool32 shader_replicated_composites;
};

using physical_device_present_mode_fifo_latest_ready_features_ext = physical_device_present_mode_fifo_latest_ready_features_khr;

struct physical_device_present_mode_fifo_latest_ready_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_mode_fifo_latest_ready_features_khr;
void * next = {};
ktl::bool32 present_mode_fifo_latest_ready;
};

struct depth_clamp_range_ext final
{
float min_depth_clamp;
float max_depth_clamp;
};

struct physical_device_cooperative_matrix2features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_matrix_2_features_nv;
void * next = {};
ktl::bool32 cooperative_matrix_workgroup_scope;
ktl::bool32 cooperative_matrix_flexible_dimensions;
ktl::bool32 cooperative_matrix_reductions;
ktl::bool32 cooperative_matrix_conversions;
ktl::bool32 cooperative_matrix_per_element_operations;
ktl::bool32 cooperative_matrix_tensor_addressing;
ktl::bool32 cooperative_matrix_block_loads;
};

struct physical_device_cooperative_matrix2properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_matrix_2_properties_nv;
void * next = {};
ktl::i32 cooperative_matrix_workgroup_scope_max_workgroup_size;
ktl::i32 cooperative_matrix_flexible_dimensions_max_dimension;
ktl::i32 cooperative_matrix_workgroup_scope_reserved_shared_memory;
};

struct cooperative_matrix_flexible_dimensions_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cooperative_matrix_flexible_dimensions_properties_nv;
void * next = {};
ktl::i32 mgranularity;
ktl::i32 ngranularity;
ktl::i32 kgranularity;
ktl::api::component_type_khr atype;
ktl::api::component_type_khr btype;
ktl::api::component_type_khr ctype;
ktl::api::component_type_khr result_type;
ktl::bool32 saturating_accumulation;
ktl::api::scope_khr scope;
ktl::i32 workgroup_invocations;
};

struct physical_device_hdr_vivid_features_huawei final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_hdr_vivid_features_huawei;
void * next = {};
ktl::bool32 hdr_vivid;
};

struct physical_device_vertex_attribute_robustness_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vertex_attribute_robustness_features_ext;
void * next = {};
ktl::bool32 vertex_attribute_robustness;
};

struct physical_device_dense_geometry_format_features_amdx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_dense_geometry_format_features_amdx;
void * next = {};
ktl::bool32 dense_geometry_format;
};

struct acceleration_structure_dense_geometry_format_triangles_data_amdx final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_dense_geometry_format_triangles_data_amdx;
const void * next = {};
ktl::api::device_or_host_address_const_khr compressed_data;
ktl::dvsize data_size;
ktl::i32 num_triangles;
ktl::i32 num_vertices;
ktl::i32 max_primitive_index;
ktl::i32 max_geometry_index;
ktl::api::compressed_triangle_format_amdx format;
};

struct physical_device_depth_clamp_zero_one_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_depth_clamp_zero_one_features_khr;
void * next = {};
ktl::bool32 depth_clamp_zero_one;
};

struct physical_device_cooperative_vector_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_vector_features_nv;
void * next = {};
ktl::bool32 cooperative_vector;
ktl::bool32 cooperative_vector_training;
};

struct cooperative_vector_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_cooperative_vector_properties_nv;
void * next = {};
ktl::api::component_type_khr input_type;
ktl::api::component_type_khr input_interpretation;
ktl::api::component_type_khr matrix_interpretation;
ktl::api::component_type_khr bias_interpretation;
ktl::api::component_type_khr result_type;
ktl::bool32 transpose;
};

struct physical_device_cooperative_vector_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_vector_properties_nv;
void * next = {};
ktl::api::shader_stage_flags cooperative_vector_supported_stages;
ktl::bool32 cooperative_vector_training_float16accumulation;
ktl::bool32 cooperative_vector_training_float32accumulation;
ktl::i32 max_cooperative_vector_components;
};

struct convert_cooperative_vector_matrix_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_convert_cooperative_vector_matrix_info_nv;
const void * next = {};
ktl::usize src_size;
ktl::api::device_or_host_address_const_khr src_data;
ktl::usize * dst_size;
ktl::api::device_or_host_address_khr dst_data;
ktl::api::component_type_khr src_component_type;
ktl::api::component_type_khr dst_component_type;
ktl::i32 num_rows;
ktl::i32 num_columns;
ktl::api::cooperative_vector_matrix_layout_nv src_layout;
ktl::usize src_stride;
ktl::api::cooperative_vector_matrix_layout_nv dst_layout;
ktl::usize dst_stride;
};

struct physical_device_tile_shading_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tile_shading_features_qcom;
void * next = {};
ktl::bool32 tile_shading;
ktl::bool32 tile_shading_fragment_stage;
ktl::bool32 tile_shading_color_attachments;
ktl::bool32 tile_shading_depth_attachments;
ktl::bool32 tile_shading_stencil_attachments;
ktl::bool32 tile_shading_input_attachments;
ktl::bool32 tile_shading_sampled_attachments;
ktl::bool32 tile_shading_per_tile_draw;
ktl::bool32 tile_shading_per_tile_dispatch;
ktl::bool32 tile_shading_dispatch_tile;
ktl::bool32 tile_shading_apron;
ktl::bool32 tile_shading_anisotropic_apron;
ktl::bool32 tile_shading_atomic_ops;
ktl::bool32 tile_shading_image_processing;
};

struct physical_device_tile_shading_properties_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tile_shading_properties_qcom;
void * next = {};
ktl::i32 max_apron_size;
ktl::bool32 prefer_non_coherent;
ktl::api::extent2d tile_granularity;
ktl::api::extent2d max_tile_shading_rate;
};

struct render_pass_tile_shading_create_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_tile_shading_create_info_qcom;
const void * next = {};
ktl::api::tile_shading_render_pass_flags_qcom flags = {};
ktl::api::extent2d tile_apron_size = {};
};

struct per_tile_begin_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_per_tile_begin_info_qcom;
const void * next = {};
};

struct per_tile_end_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_per_tile_end_info_qcom;
const void * next = {};
};

struct dispatch_tile_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_dispatch_tile_info_qcom;
const void * next = {};
};

struct physical_device_fragment_density_map_layered_properties_valve final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_layered_properties_valve;
void * next = {};
ktl::i32 max_fragment_density_map_layers;
};

struct physical_device_fragment_density_map_layered_features_valve final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_layered_features_valve;
void * next = {};
ktl::bool32 fragment_density_map_layered;
};

struct pipeline_fragment_density_map_layered_create_info_valve final
{
ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_fragment_density_map_layered_create_info_valve;
const void * next = {};
ktl::i32 max_fragment_density_map_layers;
};

struct set_present_config_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_set_present_config_nv;
const void * next = {};
ktl::i32 num_frames_per_batch;
ktl::i32 present_config_feedback;
};

struct physical_device_present_metering_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_metering_features_nv;
void * next = {};
ktl::bool32 present_metering;
};

struct external_compute_queue_device_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_compute_queue_device_create_info_nv;
const void * next = {};
ktl::i32 reserved_external_queues;
};

struct external_compute_queue_create_info_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_compute_queue_create_info_nv;
const void * next = {};
ktl::api::queue preferred_queue;
};

struct external_compute_queue_data_params_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_compute_queue_data_params_nv;
const void * next = {};
ktl::i32 device_index;
};

struct physical_device_external_compute_queue_properties_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_compute_queue_properties_nv;
void * next = {};
ktl::i32 external_data_size;
ktl::i32 max_external_queues;
};

struct physical_device_shader_uniform_buffer_unsized_array_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_uniform_buffer_unsized_array_features_ext;
void * next = {};
ktl::bool32 shader_uniform_buffer_unsized_array;
};

struct physical_device_shader_mixed_float_dot_product_features_valve final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_mixed_float_dot_product_features_valve;
void * next = {};
ktl::bool32 shader_mixed_float_dot_product_float16acc_float32;
ktl::bool32 shader_mixed_float_dot_product_float16acc_float16;
ktl::bool32 shader_mixed_float_dot_product_bfloat16acc;
ktl::bool32 shader_mixed_float_dot_product_float8acc_float32;
};

struct physical_device_primitive_restart_index_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_primitive_restart_index_features_ext;
void * next = {};
ktl::bool32 primitive_restart_index;
};

struct physical_device_format_pack_features_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_format_pack_features_arm;
void * next = {};
ktl::bool32 format_pack;
};

struct tensor_description_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tensor_description_arm;
const void * next = {};
ktl::api::tensor_tiling_arm tiling;
ktl::api::format format;
ktl::i32 dimension_count;
const ktl::i64 * dimensions;
const ktl::i64 * strides = {};
ktl::api::tensor_usage_flags_arm usage;
};

struct tensor_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tensor_create_info_arm;
const void * next = {};
ktl::api::tensor_create_flags_arm flags = {};
const ktl::api::tensor_description_arm * description;
ktl::api::sharing_mode sharing_mode;
ktl::i32 queue_family_index_count = {};
const ktl::i32 * queue_family_indices;
};

struct tensor_view_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tensor_view_create_info_arm;
const void * next = {};
ktl::api::tensor_view_create_flags_arm flags = {};
ktl::api::tensor_arm tensor;
ktl::api::format format;
};

struct tensor_memory_requirements_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tensor_memory_requirements_info_arm;
const void * next = {};
ktl::api::tensor_arm tensor;
};

struct bind_tensor_memory_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_tensor_memory_info_arm;
const void * next = {};
ktl::api::tensor_arm tensor;
ktl::api::device_memory memory;
ktl::dvsize memory_offset;
};

struct write_descriptor_set_tensor_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_write_descriptor_set_tensor_arm;
const void * next = {};
ktl::i32 tensor_view_count;
const ktl::api::tensor_view_arm * tensor_views;
};

struct tensor_format_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tensor_format_properties_arm;
void * next = {};
ktl::api::format_feature_flags2 optimal_tiling_tensor_features;
ktl::api::format_feature_flags2 linear_tiling_tensor_features;
};

struct physical_device_tensor_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tensor_properties_arm;
void * next = {};
ktl::i32 max_tensor_dimension_count;
ktl::u64 max_tensor_elements;
ktl::u64 max_per_dimension_tensor_elements;
ktl::i64 max_tensor_stride;
ktl::u64 max_tensor_size;
ktl::i32 max_tensor_shader_access_array_length;
ktl::i32 max_tensor_shader_access_size;
ktl::i32 max_descriptor_set_storage_tensors;
ktl::i32 max_per_stage_descriptor_set_storage_tensors;
ktl::i32 max_descriptor_set_update_after_bind_storage_tensors;
ktl::i32 max_per_stage_descriptor_update_after_bind_storage_tensors;
ktl::bool32 shader_storage_tensor_array_non_uniform_indexing_native;
ktl::api::shader_stage_flags shader_tensor_supported_stages;
};

struct tensor_memory_barrier_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tensor_memory_barrier_arm;
const void * next = {};
ktl::api::pipeline_stage_flags2 src_stage_mask = {};
ktl::api::access_flags2 src_access_mask = {};
ktl::api::pipeline_stage_flags2 dst_stage_mask = {};
ktl::api::access_flags2 dst_access_mask = {};
ktl::i32 src_queue_family_index;
ktl::i32 dst_queue_family_index;
ktl::api::tensor_arm tensor;
};

struct tensor_dependency_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tensor_dependency_info_arm;
const void * next = {};
ktl::i32 tensor_memory_barrier_count;
const ktl::api::tensor_memory_barrier_arm * tensor_memory_barriers;
};

struct physical_device_tensor_features_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tensor_features_arm;
void * next = {};
ktl::bool32 tensor_non_packed;
ktl::bool32 shader_tensor_access;
ktl::bool32 shader_storage_tensor_array_dynamic_indexing;
ktl::bool32 shader_storage_tensor_array_non_uniform_indexing;
ktl::bool32 descriptor_binding_storage_tensor_update_after_bind;
ktl::bool32 tensors;
};

struct device_tensor_memory_requirements_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_tensor_memory_requirements_arm;
const void * next = {};
const ktl::api::tensor_create_info_arm * create_info;
};

struct copy_tensor_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_tensor_info_arm;
const void * next = {};
ktl::api::tensor_arm src_tensor;
ktl::api::tensor_arm dst_tensor;
ktl::i32 region_count;
const ktl::api::tensor_copy_arm * regions;
};

struct tensor_copy_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tensor_copy_arm;
const void * next = {};
ktl::i32 dimension_count = {};
const ktl::u64 * src_offset = {};
const ktl::u64 * dst_offset = {};
const ktl::u64 * extent = {};
};

struct memory_dedicated_allocate_info_tensor_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_dedicated_allocate_info_tensor_arm;
const void * next = {};
ktl::api::tensor_arm tensor;
};

struct physical_device_descriptor_buffer_tensor_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_buffer_tensor_properties_arm;
void * next = {};
ktl::usize tensor_capture_replay_descriptor_data_size;
ktl::usize tensor_view_capture_replay_descriptor_data_size;
ktl::usize tensor_descriptor_size;
};

struct physical_device_descriptor_buffer_tensor_features_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_buffer_tensor_features_arm;
void * next = {};
ktl::bool32 descriptor_buffer_tensor_descriptors;
};

struct tensor_capture_descriptor_data_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tensor_capture_descriptor_data_info_arm;
const void * next = {};
ktl::api::tensor_arm tensor;
};

struct tensor_view_capture_descriptor_data_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_tensor_view_capture_descriptor_data_info_arm;
const void * next = {};
ktl::api::tensor_view_arm tensor_view;
};

struct descriptor_get_tensor_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_get_tensor_info_arm;
const void * next = {};
ktl::api::tensor_view_arm tensor_view = {};
};

struct frame_boundary_tensors_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_frame_boundary_tensors_arm;
const void * next = {};
ktl::i32 tensor_count;
const ktl::api::tensor_arm * tensors;
};

struct physical_device_external_tensor_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_tensor_info_arm;
const void * next = {};
ktl::api::tensor_create_flags_arm flags = {};
const ktl::api::tensor_description_arm * description;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct external_tensor_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_tensor_properties_arm;
const void * next = {};
ktl::api::external_memory_properties external_memory_properties;
};

struct external_memory_tensor_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_memory_tensor_create_info_arm;
const void * next = {};
ktl::api::external_memory_handle_type_flags handle_types = {};
};

struct physical_device_shader_float8features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_float8_features_ext;
void * next = {};
ktl::bool32 shader_float8;
ktl::bool32 shader_float8cooperative_matrix;
};

struct surface_create_info_ohos final
{
ktl::api::structure_type type = ktl::api::structure_type::v_surface_create_info_ohos;
const void * next = {};
ktl::api::surface_create_flags_ohos flags = {};
OHNativeWindow * window;
};

struct physical_device_data_graph_features_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_data_graph_features_arm;
void * next = {};
ktl::bool32 data_graph;
ktl::bool32 data_graph_update_after_bind;
ktl::bool32 data_graph_specialization_constants;
ktl::bool32 data_graph_descriptor_buffer;
ktl::bool32 data_graph_shader_module;
};

struct data_graph_pipeline_constant_tensor_semi_structured_sparsity_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_constant_tensor_semi_structured_sparsity_info_arm;
const void * next = {};
ktl::i32 dimension;
ktl::i32 zero_count;
ktl::i32 group_size;
};

struct data_graph_pipeline_constant_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_constant_arm;
const void * next = {};
ktl::i32 id;
const void * constant_data;
};

struct data_graph_pipeline_resource_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_resource_info_arm;
const void * next = {};
ktl::i32 descriptor_set;
ktl::i32 binding;
ktl::i32 array_element = {};
};

struct data_graph_pipeline_resource_info_image_layout_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_resource_info_image_layout_arm;
const void * next = {};
ktl::api::image_layout layout;
};

struct data_graph_pipeline_compiler_control_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_compiler_control_create_info_arm;
const void * next = {};
const char * vendor_options;
};

struct data_graph_pipeline_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_create_info_arm;
const void * next = {};
ktl::api::pipeline_create_flags2 flags = {};
ktl::api::pipeline_layout layout;
ktl::i32 resource_info_count = {};
const ktl::api::data_graph_pipeline_resource_info_arm * resource_infos;
};

struct data_graph_pipeline_shader_module_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_shader_module_create_info_arm;
const void * next = {};
ktl::api::shader_module module = {};
const char * name;
const ktl::api::specialization_info * specialization_info = {};
const ktl::i32 constant_count = {};
const ktl::api::data_graph_pipeline_constant_arm * constants = {};
};

struct data_graph_pipeline_session_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_session_create_info_arm;
const void * next = {};
ktl::api::data_graph_pipeline_session_create_flags_arm flags = {};
ktl::api::pipeline data_graph_pipeline;
};

struct data_graph_pipeline_session_bind_point_requirements_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_session_bind_point_requirements_info_arm;
const void * next = {};
ktl::api::data_graph_pipeline_session_arm session;
};

struct data_graph_pipeline_session_bind_point_requirement_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_session_bind_point_requirement_arm;
void * next = {};
ktl::api::data_graph_pipeline_session_bind_point_arm bind_point;
ktl::api::data_graph_pipeline_session_bind_point_type_arm bind_point_type;
ktl::i32 num_objects;
};

struct data_graph_pipeline_session_memory_requirements_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_session_memory_requirements_info_arm;
const void * next = {};
ktl::api::data_graph_pipeline_session_arm session;
ktl::api::data_graph_pipeline_session_bind_point_arm bind_point;
ktl::i32 object_index;
};

struct bind_data_graph_pipeline_session_memory_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_data_graph_pipeline_session_memory_info_arm;
const void * next = {};
ktl::api::data_graph_pipeline_session_arm session;
ktl::api::data_graph_pipeline_session_bind_point_arm bind_point;
ktl::i32 object_index;
ktl::api::device_memory memory;
ktl::dvsize memory_offset;
};

struct data_graph_pipeline_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_info_arm;
const void * next = {};
ktl::api::pipeline data_graph_pipeline;
};

struct data_graph_pipeline_property_query_result_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_property_query_result_arm;
void * next = {};
ktl::api::data_graph_pipeline_property_arm property;
ktl::bool32 is_text;
ktl::usize data_size = {};
void * data = {};
};

struct data_graph_pipeline_identifier_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_identifier_create_info_arm;
const void * next = {};
ktl::i32 identifier_size;
const ktl::u8 * identifier;
};

struct data_graph_pipeline_dispatch_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_dispatch_info_arm;
void * next = {};
ktl::api::data_graph_pipeline_dispatch_flags_arm flags = {};
};

struct physical_device_data_graph_processing_engine_arm final
{
ktl::api::physical_device_data_graph_processing_engine_type_arm type;
ktl::bool32 is_foreign;
};

struct physical_device_data_graph_operation_support_arm final
{
ktl::api::physical_device_data_graph_operation_type_arm operation_type;
char name[KTL_API_MAX_PHYSICAL_DEVICE_DATA_GRAPH_OPERATION_SET_NAME_SIZE_ARM];
ktl::i32 version;
};

struct queue_family_data_graph_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_data_graph_properties_arm;
void * next = {};
ktl::api::physical_device_data_graph_processing_engine_arm engine;
ktl::api::physical_device_data_graph_operation_support_arm operation;
};

struct physical_device_queue_family_data_graph_processing_engine_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_queue_family_data_graph_processing_engine_info_arm;
const void * next = {};
ktl::i32 queue_family_index;
ktl::api::physical_device_data_graph_processing_engine_type_arm engine_type;
};

struct queue_family_data_graph_processing_engine_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_data_graph_processing_engine_properties_arm;
void * next = {};
ktl::api::external_semaphore_handle_type_flags foreign_semaphore_handle_types;
ktl::api::external_memory_handle_type_flags foreign_memory_handle_types;
};

struct data_graph_processing_engine_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_processing_engine_create_info_arm;
const void * next = {};
ktl::i32 processing_engine_count;
ktl::api::physical_device_data_graph_processing_engine_arm * processing_engines;
};

struct physical_device_pipeline_cache_incremental_mode_features_sec final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_cache_incremental_mode_features_sec;
void * next = {};
ktl::bool32 pipeline_cache_incremental_mode;
};

struct data_graph_pipeline_builtin_model_create_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_builtin_model_create_info_qcom;
const void * next = {};
const ktl::api::physical_device_data_graph_operation_support_arm * operation;
};

struct physical_device_data_graph_model_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_data_graph_model_features_qcom;
void * next = {};
ktl::bool32 data_graph_model;
};

struct physical_device_shader_untyped_pointers_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_untyped_pointers_features_khr;
void * next = {};
ktl::bool32 shader_untyped_pointers;
};

struct native_buffer_ohos final
{
ktl::api::structure_type type = ktl::api::structure_type::v_native_buffer_ohos;
const void * next = {};
OHBufferHandle * handle;
};

struct swapchain_image_create_info_ohos final
{
ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_image_create_info_ohos;
const void * next = {};
ktl::api::swapchain_image_usage_flags_ohos usage;
};

struct physical_device_presentation_properties_ohos final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_presentation_properties_ohos;
void * next = {};
ktl::bool32 shared_image;
};

struct physical_device_shader64bit_indexing_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_64_bit_indexing_features_ext;
void * next = {};
ktl::bool32 shader64bit_indexing;
};

struct native_buffer_usage_ohos final
{
ktl::api::structure_type type = ktl::api::structure_type::v_native_buffer_usage_ohos;
void * next = {};
ktl::u64 ohosnative_buffer_usage;
};

struct native_buffer_properties_ohos final
{
ktl::api::structure_type type = ktl::api::structure_type::v_native_buffer_properties_ohos;
void * next = {};
ktl::dvsize allocation_size;
ktl::i32 memory_type_bits;
};

struct native_buffer_format_properties_ohos final
{
ktl::api::structure_type type = ktl::api::structure_type::v_native_buffer_format_properties_ohos;
void * next = {};
ktl::api::format format;
ktl::u64 external_format;
ktl::api::format_feature_flags format_features;
ktl::api::component_mapping sampler_ycbcr_conversion_components;
ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
ktl::api::sampler_ycbcr_range suggested_ycbcr_range;
ktl::api::chroma_location suggested_xchroma_offset;
ktl::api::chroma_location suggested_ychroma_offset;
};

struct import_native_buffer_info_ohos final
{
ktl::api::structure_type type = ktl::api::structure_type::v_import_native_buffer_info_ohos;
const void * next = {};
OH_NativeBuffer * buffer;
};

struct memory_get_native_buffer_info_ohos final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_native_buffer_info_ohos;
const void * next = {};
ktl::api::device_memory memory;
};

struct external_format_ohos final
{
ktl::api::structure_type type = ktl::api::structure_type::v_external_format_ohos;
void * next = {};
ktl::u64 external_format;
};

struct perf_hint_info_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_perf_hint_info_qcom;
void * next = {};
ktl::api::perf_hint_type_qcom type;
ktl::i32 scale;
};

struct physical_device_queue_perf_hint_features_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_queue_perf_hint_features_qcom;
void * next = {};
ktl::bool32 queue_perf_hint;
};

struct physical_device_queue_perf_hint_properties_qcom final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_queue_perf_hint_properties_qcom;
void * next = {};
ktl::api::queue_flags supported_queues;
};

struct physical_device_performance_counters_by_region_features_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_performance_counters_by_region_features_arm;
void * next = {};
ktl::bool32 performance_counters_by_region;
};

struct physical_device_performance_counters_by_region_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_performance_counters_by_region_properties_arm;
void * next = {};
ktl::i32 max_per_region_performance_counters;
ktl::api::extent2d performance_counter_region_size;
ktl::i32 row_stride_alignment;
ktl::i32 region_alignment;
ktl::bool32 identity_transform_order;
};

struct performance_counter_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_performance_counter_arm;
void * next = {};
ktl::i32 counter_id;
};

struct performance_counter_description_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_performance_counter_description_arm;
void * next = {};
ktl::api::performance_counter_description_flags_arm flags = {};
char name[KTL_API_MAX_DESCRIPTION_SIZE];
};

struct render_pass_performance_counters_by_region_begin_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_performance_counters_by_region_begin_info_arm;
void * next = {};
ktl::i32 counter_address_count;
const ktl::dvaddr * counter_addresses;
ktl::bool32 serialize_regions;
ktl::i32 counter_index_count;
ktl::i32 * counter_indices;
};

struct compute_occupancy_priority_parameters_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_compute_occupancy_priority_parameters_nv;
const void * next = {};
float occupancy_priority;
float occupancy_throttling;
};

struct physical_device_compute_occupancy_priority_features_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_compute_occupancy_priority_features_nv;
void * next = {};
ktl::bool32 compute_occupancy_priority;
};

struct physical_device_shader_long_vector_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_long_vector_features_ext;
void * next = {};
ktl::bool32 long_vector;
};

struct physical_device_shader_long_vector_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_long_vector_properties_ext;
void * next = {};
ktl::i32 max_vector_components;
};

struct physical_device_texture_compression_astc3dfeatures_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_texture_compression_astc_3d_features_ext;
void * next = {};
ktl::bool32 texture_compression_astc_3d;
};

struct physical_device_shader_subgroup_partitioned_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_subgroup_partitioned_features_ext;
void * next = {};
ktl::bool32 shader_subgroup_partitioned;
};

struct host_address_range_ext final
{
void * address;
ktl::usize size;
};

struct host_address_range_const_ext final
{
const void * address;
ktl::usize size;
};

struct texel_buffer_descriptor_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_texel_buffer_descriptor_info_ext;
const void * next = {};
ktl::api::format format;
ktl::api::device_address_range_ext address_range;
};

struct image_descriptor_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_image_descriptor_info_ext;
const void * next = {};
const ktl::api::image_view_create_info * view;
ktl::api::image_layout layout;
};

struct resource_descriptor_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_resource_descriptor_info_ext;
const void * next = {};
ktl::api::descriptor_type type;
ktl::api::resource_descriptor_data_ext data;
};

struct bind_heap_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_heap_info_ext;
const void * next = {};
ktl::api::device_address_range_ext heap_range;
ktl::dvsize reserved_range_offset;
ktl::dvsize reserved_range_size;
};

struct push_data_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_push_data_info_ext;
const void * next = {};
ktl::i32 offset;
ktl::api::host_address_range_const_ext data;
};

struct descriptor_mapping_source_constant_offset_ext final
{
ktl::i32 heap_offset;
ktl::i32 heap_array_stride;
const ktl::api::sampler_create_info * embedded_sampler = {};
ktl::i32 sampler_heap_offset;
ktl::i32 sampler_heap_array_stride;
};

struct descriptor_mapping_source_push_index_ext final
{
ktl::i32 heap_offset;
ktl::i32 push_offset;
ktl::i32 heap_index_stride;
ktl::i32 heap_array_stride;
const ktl::api::sampler_create_info * embedded_sampler = {};
ktl::bool32 use_combined_image_sampler_index;
ktl::i32 sampler_heap_offset;
ktl::i32 sampler_push_offset;
ktl::i32 sampler_heap_index_stride;
ktl::i32 sampler_heap_array_stride;
};

struct descriptor_mapping_source_indirect_index_ext final
{
ktl::i32 heap_offset;
ktl::i32 push_offset;
ktl::i32 address_offset;
ktl::i32 heap_index_stride;
ktl::i32 heap_array_stride;
const ktl::api::sampler_create_info * embedded_sampler = {};
ktl::bool32 use_combined_image_sampler_index;
ktl::i32 sampler_heap_offset;
ktl::i32 sampler_push_offset;
ktl::i32 sampler_address_offset;
ktl::i32 sampler_heap_index_stride;
ktl::i32 sampler_heap_array_stride;
};

struct descriptor_mapping_source_indirect_index_array_ext final
{
ktl::i32 heap_offset;
ktl::i32 push_offset;
ktl::i32 address_offset;
ktl::i32 heap_index_stride;
const ktl::api::sampler_create_info * embedded_sampler = {};
ktl::bool32 use_combined_image_sampler_index;
ktl::i32 sampler_heap_offset;
ktl::i32 sampler_push_offset;
ktl::i32 sampler_address_offset;
ktl::i32 sampler_heap_index_stride;
};

struct descriptor_mapping_source_heap_data_ext final
{
ktl::i32 heap_offset;
ktl::i32 push_offset;
};

struct descriptor_mapping_source_shader_record_index_ext final
{
ktl::i32 heap_offset;
ktl::i32 shader_record_offset;
ktl::i32 heap_index_stride;
ktl::i32 heap_array_stride;
const ktl::api::sampler_create_info * embedded_sampler = {};
ktl::bool32 use_combined_image_sampler_index;
ktl::i32 sampler_heap_offset;
ktl::i32 sampler_shader_record_offset;
ktl::i32 sampler_heap_index_stride;
ktl::i32 sampler_heap_array_stride;
};

struct descriptor_mapping_source_indirect_address_ext final
{
ktl::i32 push_offset;
ktl::i32 address_offset;
};

struct descriptor_set_and_binding_mapping_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_and_binding_mapping_ext;
const void * next = {};
ktl::i32 descriptor_set;
ktl::i32 first_binding;
ktl::i32 binding_count;
ktl::api::spirv_resource_type_flags_ext resource_mask;
ktl::api::descriptor_mapping_source_ext source;
ktl::api::descriptor_mapping_source_data_ext source_data;
};

struct shader_descriptor_set_and_binding_mapping_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_shader_descriptor_set_and_binding_mapping_info_ext;
const void * next = {};
ktl::i32 mapping_count = {};
const ktl::api::descriptor_set_and_binding_mapping_ext * mappings;
};

struct sampler_custom_border_color_index_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_sampler_custom_border_color_index_create_info_ext;
const void * next = {};
ktl::i32 index;
};

struct opaque_capture_data_create_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_opaque_capture_data_create_info_ext;
const void * next = {};
const ktl::api::host_address_range_const_ext * data = {};
};

struct indirect_commands_layout_push_data_token_nv final
{
ktl::api::structure_type type = ktl::api::structure_type::v_indirect_commands_layout_push_data_token_nv;
const void * next = {};
ktl::i32 push_data_offset;
ktl::i32 push_data_size;
};

struct subsampled_image_format_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_subsampled_image_format_properties_ext;
const void * next = {};
ktl::i32 subsampled_image_descriptor_count;
};

struct physical_device_descriptor_heap_features_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_heap_features_ext;
void * next = {};
ktl::bool32 descriptor_heap;
ktl::bool32 descriptor_heap_capture_replay;
};

struct physical_device_descriptor_heap_properties_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_heap_properties_ext;
void * next = {};
ktl::dvsize sampler_heap_alignment;
ktl::dvsize resource_heap_alignment;
ktl::dvsize max_sampler_heap_size;
ktl::dvsize max_resource_heap_size;
ktl::dvsize min_sampler_heap_reserved_range;
ktl::dvsize min_sampler_heap_reserved_range_with_embedded;
ktl::dvsize min_resource_heap_reserved_range;
ktl::dvsize sampler_descriptor_size;
ktl::dvsize image_descriptor_size;
ktl::dvsize buffer_descriptor_size;
ktl::dvsize sampler_descriptor_alignment;
ktl::dvsize image_descriptor_alignment;
ktl::dvsize buffer_descriptor_alignment;
ktl::dvsize max_push_data_size;
ktl::usize image_capture_replay_opaque_data_size;
ktl::i32 max_descriptor_heap_embedded_samplers;
ktl::i32 sampler_ycbcr_conversion_count;
ktl::bool32 sparse_descriptor_heaps;
ktl::bool32 protected_descriptor_heaps;
};

struct command_buffer_inheritance_descriptor_heap_info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_command_buffer_inheritance_descriptor_heap_info_ext;
const void * next = {};
const ktl::api::bind_heap_info_ext * sampler_heap_bind_info = {};
const ktl::api::bind_heap_info_ext * resource_heap_bind_info = {};
};

struct physical_device_descriptor_heap_tensor_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_heap_tensor_properties_arm;
void * next = {};
ktl::dvsize tensor_descriptor_size;
ktl::dvsize tensor_descriptor_alignment;
ktl::usize tensor_capture_replay_opaque_data_size;
};

struct physical_device_shader_instrumentation_features_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_instrumentation_features_arm;
void * next = {};
ktl::bool32 shader_instrumentation;
};

struct physical_device_shader_instrumentation_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_instrumentation_properties_arm;
void * next = {};
ktl::i32 num_metrics;
ktl::bool32 per_basic_block_granularity;
};

struct shader_instrumentation_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_shader_instrumentation_create_info_arm;
void * next = {};
};

struct shader_instrumentation_metric_description_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_shader_instrumentation_metric_description_arm;
void * next = {};
char name[KTL_API_MAX_DESCRIPTION_SIZE];
char description[KTL_API_MAX_DESCRIPTION_SIZE];
};

struct shader_instrumentation_metric_data_header_arm final
{
ktl::i32 result_index;
ktl::i32 result_sub_index;
ktl::api::shader_stage_flags stages;
ktl::i32 basic_block_index;
};

struct device_address_range_khr final
{
ktl::dvaddr address = {};
ktl::dvsize size;
};

using device_address_range_ext = device_address_range_khr;

struct device_memory_copy_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_memory_copy_khr;
const void * next = {};
ktl::api::device_address_range_khr src_range;
ktl::api::address_command_flags_khr src_flags = {};
ktl::api::device_address_range_khr dst_range;
ktl::api::address_command_flags_khr dst_flags = {};
};

struct copy_device_memory_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_device_memory_info_khr;
const void * next = {};
ktl::i32 region_count;
const ktl::api::device_memory_copy_khr * regions;
};

struct device_memory_image_copy_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_memory_image_copy_khr;
const void * next = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::i32 address_row_length;
ktl::i32 address_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::image_layout image_layout;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};

struct copy_device_memory_image_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_copy_device_memory_image_info_khr;
const void * next = {};
ktl::api::image image;
ktl::i32 region_count;
const ktl::api::device_memory_image_copy_khr * regions;
};

struct memory_range_barriers_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_range_barriers_info_khr;
const void * next = {};
ktl::i32 memory_range_barrier_count = {};
const ktl::api::memory_range_barrier_khr * memory_range_barriers;
};

struct memory_range_barrier_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_range_barrier_khr;
const void * next = {};
ktl::api::pipeline_stage_flags2 src_stage_mask = {};
ktl::api::access_flags2 src_access_mask = {};
ktl::api::pipeline_stage_flags2 dst_stage_mask = {};
ktl::api::access_flags2 dst_access_mask = {};
ktl::i32 src_queue_family_index;
ktl::i32 dst_queue_family_index;
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
};

struct physical_device_device_address_commands_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_address_commands_features_khr;
void * next = {};
ktl::bool32 device_address_commands;
};

struct conditional_rendering_begin_info2ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_conditional_rendering_begin_info_2_ext;
const void * next = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::api::conditional_rendering_flags_ext flags = {};
};

struct acceleration_structure_create_info2khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_create_info_2_khr;
const void * next = {};
ktl::api::acceleration_structure_create_flags_khr create_flags = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::api::acceleration_structure_type_khr type;
};

struct bind_index_buffer3info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_index_buffer_3_info_khr;
const void * next = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::api::index_type index_type;
};

struct bind_vertex_buffer3info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_vertex_buffer_3_info_khr;
const void * next = {};
ktl::bool32 set_stride;
ktl::api::strided_device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
};

struct draw_indirect2info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_draw_indirect_2_info_khr;
const void * next = {};
ktl::api::strided_device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::i32 draw_count;
};

struct draw_indirect_count2info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_draw_indirect_count_2_info_khr;
const void * next = {};
ktl::api::strided_device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::api::device_address_range_khr count_address_range;
ktl::api::address_command_flags_khr count_address_flags = {};
ktl::i32 max_draw_count;
};

struct dispatch_indirect2info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_dispatch_indirect_2_info_khr;
const void * next = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
};

struct bind_transform_feedback_buffer2info_ext final
{
ktl::api::structure_type type = ktl::api::structure_type::v_bind_transform_feedback_buffer_2_info_ext;
const void * next = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
};

struct memory_marker_info_amd final
{
ktl::api::structure_type type = ktl::api::structure_type::v_memory_marker_info_amd;
const void * next = {};
ktl::api::pipeline_stage_flags2khr stage;
ktl::api::device_address_range_khr dst_range;
ktl::api::address_command_flags_khr dst_flags = {};
ktl::i32 marker;
};

struct physical_device_shader_constant_data_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_constant_data_features_khr;
void * next = {};
ktl::bool32 shader_constant_data;
};

struct physical_device_shader_abort_features_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_abort_features_khr;
void * next = {};
ktl::bool32 shader_abort;
};

struct physical_device_shader_abort_properties_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_abort_properties_khr;
void * next = {};
ktl::u64 max_shader_abort_message_size;
};

struct device_fault_shader_abort_message_info_khr final
{
ktl::api::structure_type type = ktl::api::structure_type::v_device_fault_shader_abort_message_info_khr;
void * next = {};
ktl::u64 message_data_size = {};
void * message_data = {};
};

struct data_graph_tosaname_quality_arm final
{
char name[KTL_API_MAX_DATA_GRAPH_TOSA_NAME_SIZE_ARM];
ktl::api::data_graph_tosaquality_flags_arm quality_flags;
};

struct queue_family_data_graph_tosaproperties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_data_graph_tosa_properties_arm;
void * next = {};
ktl::i32 profile_count;
const ktl::api::data_graph_tosaname_quality_arm * profiles;
ktl::i32 extension_count;
const ktl::api::data_graph_tosaname_quality_arm * extensions;
ktl::api::data_graph_tosalevel_arm level;
};

struct data_graph_pipeline_single_node_connection_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_single_node_connection_arm;
void * next = {};
ktl::i32 set;
ktl::i32 binding;
ktl::api::data_graph_pipeline_node_connection_type_arm connection;
};

struct physical_device_data_graph_optical_flow_features_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_data_graph_optical_flow_features_arm;
void * next = {};
ktl::bool32 data_graph_optical_flow;
};

struct queue_family_data_graph_optical_flow_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_data_graph_optical_flow_properties_arm;
void * next = {};
ktl::api::data_graph_optical_flow_grid_size_flags_arm supported_output_grid_sizes;
ktl::api::data_graph_optical_flow_grid_size_flags_arm supported_hint_grid_sizes;
ktl::bool32 hint_supported;
ktl::bool32 cost_supported;
ktl::i32 min_width;
ktl::i32 min_height;
ktl::i32 max_width;
ktl::i32 max_height;
};

struct data_graph_optical_flow_image_format_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_optical_flow_image_format_info_arm;
const void * next = {};
ktl::api::data_graph_optical_flow_image_usage_flags_arm usage;
};

struct data_graph_optical_flow_image_format_properties_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_optical_flow_image_format_properties_arm;
void * next = {};
ktl::api::format format;
};

struct data_graph_pipeline_single_node_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_single_node_create_info_arm;
void * next = {};
ktl::api::data_graph_pipeline_node_type_arm node_type;
ktl::i32 connection_count;
const ktl::api::data_graph_pipeline_single_node_connection_arm * connections;
};

struct data_graph_pipeline_optical_flow_create_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_optical_flow_create_info_arm;
void * next = {};
ktl::i32 width;
ktl::i32 height;
ktl::api::format image_format;
ktl::api::format flow_vector_format;
ktl::api::format cost_format = {};
ktl::api::data_graph_optical_flow_grid_size_flags_arm output_grid_size;
ktl::api::data_graph_optical_flow_grid_size_flags_arm hint_grid_size;
ktl::api::data_graph_optical_flow_performance_level_arm performance_level = {};
ktl::api::data_graph_optical_flow_create_flags_arm flags = {};
};

struct data_graph_pipeline_optical_flow_dispatch_info_arm final
{
ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_optical_flow_dispatch_info_arm;
void * next = {};
ktl::api::data_graph_optical_flow_execute_flags_arm flags = {};
ktl::i32 mean_flow_l1norm_hint = {};
};

template < ktl::api::format FORMAT >
struct format_meta
{
struct component final
{
ktl::u32 bits        = {};
bool     has_plane   = {};
ktl::u32 plane_index = {};
bool     is_present  = {};
};
struct plane final
{
ktl::u32         width_divisor  = {};
ktl::u32         height_divisor = {};
ktl::api::format compatible     = {};
};

static constexpr ktl::u32 block_size       = {};
static constexpr ktl::u32 texels_per_block = {};
static constexpr ktl::u32 packed           = {};
static constexpr ktl::u32 chroma           = {};
static constexpr ktl::u32 block_width      = {};
static constexpr ktl::u32 block_height     = {};
static constexpr ktl::u32 block_depth      = {};
static constexpr bool     is_3d            = {};
static constexpr bool     is_compressed    = {};

static constexpr component              r             = {};
static constexpr component              g             = {};
static constexpr component              b             = {};
static constexpr component              a             = {};
static constexpr ktl::u32               planes_amount = {};
static constexpr std::array< plane, 3 > planes        = {};
};

template <>
struct format_meta< ktl::api::format::v_undefined >
{
struct component final
{
ktl::u32 bits        = {};
bool     has_plane   = {};
ktl::u32 plane_index = {};
bool     is_present  = {};
};
struct plane final
{
ktl::u32         width_divisor  = {};
ktl::u32         height_divisor = {};
ktl::api::format compatible     = {};
};

static constexpr ktl::u32 block_size       = {};
static constexpr ktl::u32 texels_per_block = {};
static constexpr ktl::u32 packed           = {};
static constexpr ktl::u32 chroma           = {};
static constexpr ktl::u32 block_width      = {};
static constexpr ktl::u32 block_height     = {};
static constexpr ktl::u32 block_depth      = {};
static constexpr bool     is_3d            = {};
static constexpr bool     is_compressed    = {};

static constexpr component              r             = {};
static constexpr component              g             = {};
static constexpr component              b             = {};
static constexpr component              a             = {};
static constexpr ktl::u32               planes_amount = {};
static constexpr std::array< plane, 3 > planes        = {};
};

template < >
struct format_meta< ktl::api::format::v_r4g4_unorm_pack8
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 8;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {4,
false,
0,
true
};
static constexpr component g = {4,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r4g4b4a4_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {4,
false,
0,
true
};
static constexpr component g = {4,
false,
0,
true
};
static constexpr component b = {4,
false,
0,
true
};
static constexpr component a = {4,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b4g4r4a4_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {4,
false,
0,
true
};
static constexpr component g = {4,
false,
0,
true
};
static constexpr component b = {4,
false,
0,
true
};
static constexpr component a = {4,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r5g6b5_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {5,
false,
0,
true
};
static constexpr component g = {6,
false,
0,
true
};
static constexpr component b = {5,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b5g6r5_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {5,
false,
0,
true
};
static constexpr component g = {6,
false,
0,
true
};
static constexpr component b = {5,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r5g5b5a1_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {5,
false,
0,
true
};
static constexpr component g = {5,
false,
0,
true
};
static constexpr component b = {5,
false,
0,
true
};
static constexpr component a = {1,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b5g5r5a1_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {5,
false,
0,
true
};
static constexpr component g = {5,
false,
0,
true
};
static constexpr component b = {5,
false,
0,
true
};
static constexpr component a = {1,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a1r5g5b5_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {5,
false,
0,
true
};
static constexpr component g = {5,
false,
0,
true
};
static constexpr component b = {5,
false,
0,
true
};
static constexpr component a = {1,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a1b5g5r5_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {5,
false,
0,
true
};
static constexpr component g = {5,
false,
0,
true
};
static constexpr component b = {5,
false,
0,
true
};
static constexpr component a = {1,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a8_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {0,
false,
0,
false
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8_snorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8_uscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8_sscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8_srgb
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8_snorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8_uscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8_sscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8_srgb
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8_snorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8_uscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8_sscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8_srgb
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8_snorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8_uscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8_sscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8_srgb
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8a8_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8a8_snorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8a8_uscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8a8_sscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8a8_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8a8_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8g8b8a8_srgb
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8a8_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8a8_snorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8a8_uscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8a8_sscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8a8_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8a8_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8a8_srgb
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a8b8g8r8_unorm_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a8b8g8r8_snorm_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a8b8g8r8_uscaled_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a8b8g8r8_sscaled_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a8b8g8r8_uint_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a8b8g8r8_sint_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a8b8g8r8_srgb_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {8,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2r10g10b10_unorm_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2r10g10b10_snorm_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2r10g10b10_uscaled_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2r10g10b10_sscaled_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2r10g10b10_uint_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2r10g10b10_sint_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2b10g10r10_unorm_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2b10g10r10_snorm_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2b10g10r10_uscaled_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2b10g10r10_sscaled_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2b10g10r10_uint_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a2b10g10r10_sint_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {2,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16_snorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16_uscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16_sscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16_snorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16_uscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16_sscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16_snorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16_uscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16_sscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16a16_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {16,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16a16_snorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {16,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16a16_uscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {16,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16a16_sscaled
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {16,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16a16_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {16,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16a16_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {16,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16b16a16_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {16,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32g32_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {32,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32g32_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {32,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32g32_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {32,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32g32b32_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 12;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {32,
false,
0,
true
};
static constexpr component b = {32,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32g32b32_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 12;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {32,
false,
0,
true
};
static constexpr component b = {32,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32g32b32_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 12;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {32,
false,
0,
true
};
static constexpr component b = {32,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32g32b32a32_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {32,
false,
0,
true
};
static constexpr component b = {32,
false,
0,
true
};
static constexpr component a = {32,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32g32b32a32_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {32,
false,
0,
true
};
static constexpr component b = {32,
false,
0,
true
};
static constexpr component a = {32,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r32g32b32a32_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {32,
false,
0,
true
};
static constexpr component g = {32,
false,
0,
true
};
static constexpr component b = {32,
false,
0,
true
};
static constexpr component a = {32,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64g64_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {64,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64g64_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {64,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64g64_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {64,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64g64b64_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 24;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {64,
false,
0,
true
};
static constexpr component b = {64,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64g64b64_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 24;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {64,
false,
0,
true
};
static constexpr component b = {64,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64g64b64_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 24;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {64,
false,
0,
true
};
static constexpr component b = {64,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64g64b64a64_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 32;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {64,
false,
0,
true
};
static constexpr component b = {64,
false,
0,
true
};
static constexpr component a = {64,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64g64b64a64_sint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 32;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {64,
false,
0,
true
};
static constexpr component b = {64,
false,
0,
true
};
static constexpr component a = {64,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r64g64b64a64_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 32;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {64,
false,
0,
true
};
static constexpr component g = {64,
false,
0,
true
};
static constexpr component b = {64,
false,
0,
true
};
static constexpr component a = {64,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b10g11r11_ufloat_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {11,
false,
0,
true
};
static constexpr component g = {11,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_e5b9g9r9_ufloat_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {9,
false,
0,
true
};
static constexpr component g = {9,
false,
0,
true
};
static constexpr component b = {9,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_d16_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {0,
false,
0,
false
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_x8_d24_unorm_pack32
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 32;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {0,
false,
0,
false
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_d32_sfloat
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {0,
false,
0,
false
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_s8_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {0,
false,
0,
false
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_d16_unorm_s8_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {0,
false,
0,
false
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_d24_unorm_s8_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {0,
false,
0,
false
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_d32_sfloat_s8_uint
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 5;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {0,
false,
0,
false
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc1_rgb_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc1_rgb_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc1_rgba_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc1_rgba_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc2_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc2_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc3_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc3_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc4_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc4_snorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc5_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc5_snorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc6h_ufloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc6h_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc7_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_bc7_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_etc2_r8g8b8_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_etc2_r8g8b8_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_etc2_r8g8b8a1_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_etc2_r8g8b8a1_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_etc2_r8g8b8a8_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_etc2_r8g8b8a8_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_eac_r11_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {11,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_eac_r11_snorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {11,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_eac_r11g11_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {11,
false,
0,
true
};
static constexpr component g = {11,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_eac_r11g11_snorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {11,
false,
0,
true
};
static constexpr component g = {11,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x4_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x4_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x4_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 20;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x4_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 20;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x5_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 25;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x5_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 25;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x5_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 30;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x5_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 30;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x6_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 36;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x6_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 36;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_8x5_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 40;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_8x5_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 40;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_8x6_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 48;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_8x6_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 48;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_8x8_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 64;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 8;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_8x8_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 64;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 8;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x5_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 50;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x5_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 50;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x6_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 60;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x6_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 60;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x8_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 80;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 8;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x8_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 80;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 8;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x10_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 100;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 10;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x10_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 100;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 10;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_12x10_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 120;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 12;
static constexpr ktl::u32 block_height = 10;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_12x10_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 120;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 12;
static constexpr ktl::u32 block_height = 10;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_12x12_unorm_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 144;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 12;
static constexpr ktl::u32 block_height = 12;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_12x12_srgb_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 144;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 12;
static constexpr ktl::u32 block_height = 12;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g8b8g8r8_422_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 2;
static constexpr ktl::u32 block_height = 1;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b8g8r8g8_422_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 2;
static constexpr ktl::u32 block_height = 1;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {8,
false,
0,
true
};
static constexpr component b = {8,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g8_b8_r8_3plane_420_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 420;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
true,
2,
true
};
static constexpr component g = {8,
true,
0,
true
};
static constexpr component b = {8,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r8_unorm
},
plane{
2,
2,
ktl::api::format::v_r8_unorm
},
plane{
2,
2,
ktl::api::format::v_r8_unorm
}
};
};

template < >
struct format_meta< ktl::api::format::v_g8_b8r8_2plane_420_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 420;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
true,
1,
true
};
static constexpr component g = {8,
true,
0,
true
};
static constexpr component b = {8,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r8_unorm
},
plane{
2,
2,
ktl::api::format::v_r8g8_unorm
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g8_b8_r8_3plane_422_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
true,
2,
true
};
static constexpr component g = {8,
true,
0,
true
};
static constexpr component b = {8,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r8_unorm
},
plane{
2,
1,
ktl::api::format::v_r8_unorm
},
plane{
2,
1,
ktl::api::format::v_r8_unorm
}
};
};

template < >
struct format_meta< ktl::api::format::v_g8_b8r8_2plane_422_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
true,
1,
true
};
static constexpr component g = {8,
true,
0,
true
};
static constexpr component b = {8,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r8_unorm
},
plane{
2,
1,
ktl::api::format::v_r8g8_unorm
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g8_b8_r8_3plane_444_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 444;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
true,
2,
true
};
static constexpr component g = {8,
true,
0,
true
};
static constexpr component b = {8,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r8_unorm
},
plane{
1,
1,
ktl::api::format::v_r8_unorm
},
plane{
1,
1,
ktl::api::format::v_r8_unorm
}
};
};

template < >
struct format_meta< ktl::api::format::v_r10x6_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r10x6g10x6_unorm_2pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r10x6g10x6b10x6a10x6_unorm_4pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 444;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {10,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g10x6b10x6g10x6r10x6_422_unorm_4pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 2;
static constexpr ktl::u32 block_height = 1;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b10x6g10x6r10x6g10x6_422_unorm_4pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 2;
static constexpr ktl::u32 block_height = 1;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g10x6_b10x6_r10x6_3plane_420_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 420;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
true,
2,
true
};
static constexpr component g = {10,
true,
0,
true
};
static constexpr component b = {10,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r10x6_unorm_pack16
},
plane{
2,
2,
ktl::api::format::v_r10x6_unorm_pack16
},
plane{
2,
2,
ktl::api::format::v_r10x6_unorm_pack16
}
};
};

template < >
struct format_meta< ktl::api::format::v_g10x6_b10x6r10x6_2plane_420_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 420;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
true,
1,
true
};
static constexpr component g = {10,
true,
0,
true
};
static constexpr component b = {10,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r10x6_unorm_pack16
},
plane{
2,
2,
ktl::api::format::v_r10x6g10x6_unorm_2pack16
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g10x6_b10x6_r10x6_3plane_422_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
true,
2,
true
};
static constexpr component g = {10,
true,
0,
true
};
static constexpr component b = {10,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r10x6_unorm_pack16
},
plane{
2,
1,
ktl::api::format::v_r10x6_unorm_pack16
},
plane{
2,
1,
ktl::api::format::v_r10x6_unorm_pack16
}
};
};

template < >
struct format_meta< ktl::api::format::v_g10x6_b10x6r10x6_2plane_422_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
true,
1,
true
};
static constexpr component g = {10,
true,
0,
true
};
static constexpr component b = {10,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r10x6_unorm_pack16
},
plane{
2,
1,
ktl::api::format::v_r10x6g10x6_unorm_2pack16
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g10x6_b10x6_r10x6_3plane_444_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 444;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
true,
2,
true
};
static constexpr component g = {10,
true,
0,
true
};
static constexpr component b = {10,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r10x6_unorm_pack16
},
plane{
1,
1,
ktl::api::format::v_r10x6_unorm_pack16
},
plane{
1,
1,
ktl::api::format::v_r10x6_unorm_pack16
}
};
};

template < >
struct format_meta< ktl::api::format::v_r12x4_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r12x4g12x4_unorm_2pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
false,
0,
true
};
static constexpr component g = {12,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r12x4g12x4b12x4a12x4_unorm_4pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 444;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
false,
0,
true
};
static constexpr component g = {12,
false,
0,
true
};
static constexpr component b = {12,
false,
0,
true
};
static constexpr component a = {12,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g12x4b12x4g12x4r12x4_422_unorm_4pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 2;
static constexpr ktl::u32 block_height = 1;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
false,
0,
true
};
static constexpr component g = {12,
false,
0,
true
};
static constexpr component b = {12,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b12x4g12x4r12x4g12x4_422_unorm_4pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 2;
static constexpr ktl::u32 block_height = 1;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
false,
0,
true
};
static constexpr component g = {12,
false,
0,
true
};
static constexpr component b = {12,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g12x4_b12x4_r12x4_3plane_420_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 420;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
true,
2,
true
};
static constexpr component g = {12,
true,
0,
true
};
static constexpr component b = {12,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r12x4_unorm_pack16
},
plane{
2,
2,
ktl::api::format::v_r12x4_unorm_pack16
},
plane{
2,
2,
ktl::api::format::v_r12x4_unorm_pack16
}
};
};

template < >
struct format_meta< ktl::api::format::v_g12x4_b12x4r12x4_2plane_420_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 420;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
true,
1,
true
};
static constexpr component g = {12,
true,
0,
true
};
static constexpr component b = {12,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r12x4_unorm_pack16
},
plane{
2,
2,
ktl::api::format::v_r12x4g12x4_unorm_2pack16
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g12x4_b12x4_r12x4_3plane_422_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
true,
2,
true
};
static constexpr component g = {12,
true,
0,
true
};
static constexpr component b = {12,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r12x4_unorm_pack16
},
plane{
2,
1,
ktl::api::format::v_r12x4_unorm_pack16
},
plane{
2,
1,
ktl::api::format::v_r12x4_unorm_pack16
}
};
};

template < >
struct format_meta< ktl::api::format::v_g12x4_b12x4r12x4_2plane_422_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
true,
1,
true
};
static constexpr component g = {12,
true,
0,
true
};
static constexpr component b = {12,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r12x4_unorm_pack16
},
plane{
2,
1,
ktl::api::format::v_r12x4g12x4_unorm_2pack16
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g12x4_b12x4_r12x4_3plane_444_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 444;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
true,
2,
true
};
static constexpr component g = {12,
true,
0,
true
};
static constexpr component b = {12,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r12x4_unorm_pack16
},
plane{
1,
1,
ktl::api::format::v_r12x4_unorm_pack16
},
plane{
1,
1,
ktl::api::format::v_r12x4_unorm_pack16
}
};
};

template < >
struct format_meta< ktl::api::format::v_g16b16g16r16_422_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 2;
static constexpr ktl::u32 block_height = 1;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_b16g16r16g16_422_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 2;
static constexpr ktl::u32 block_height = 1;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {16,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g16_b16_r16_3plane_420_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 420;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
true,
2,
true
};
static constexpr component g = {16,
true,
0,
true
};
static constexpr component b = {16,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r16_unorm
},
plane{
2,
2,
ktl::api::format::v_r16_unorm
},
plane{
2,
2,
ktl::api::format::v_r16_unorm
}
};
};

template < >
struct format_meta< ktl::api::format::v_g16_b16r16_2plane_420_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 420;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
true,
1,
true
};
static constexpr component g = {16,
true,
0,
true
};
static constexpr component b = {16,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r16_unorm
},
plane{
2,
2,
ktl::api::format::v_r16g16_unorm
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g16_b16_r16_3plane_422_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
true,
2,
true
};
static constexpr component g = {16,
true,
0,
true
};
static constexpr component b = {16,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r16_unorm
},
plane{
2,
1,
ktl::api::format::v_r16_unorm
},
plane{
2,
1,
ktl::api::format::v_r16_unorm
}
};
};

template < >
struct format_meta< ktl::api::format::v_g16_b16r16_2plane_422_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
true,
1,
true
};
static constexpr component g = {16,
true,
0,
true
};
static constexpr component b = {16,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r16_unorm
},
plane{
2,
1,
ktl::api::format::v_r16g16_unorm
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g16_b16_r16_3plane_444_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 444;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
true,
2,
true
};
static constexpr component g = {16,
true,
0,
true
};
static constexpr component b = {16,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 3;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r16_unorm
},
plane{
1,
1,
ktl::api::format::v_r16_unorm
},
plane{
1,
1,
ktl::api::format::v_r16_unorm
}
};
};

template < >
struct format_meta< ktl::api::format::v_pvrtc1_2bpp_unorm_block_img
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_pvrtc1_4bpp_unorm_block_img
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_pvrtc2_2bpp_unorm_block_img
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_pvrtc2_4bpp_unorm_block_img
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_pvrtc1_2bpp_srgb_block_img
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_pvrtc1_4bpp_srgb_block_img
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_pvrtc2_2bpp_srgb_block_img
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_pvrtc2_4bpp_srgb_block_img
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x4_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 16;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x4_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 20;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x5_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 25;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x5_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 30;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x6_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 36;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_8x5_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 40;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_8x6_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 48;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_8x8_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 64;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 8;
static constexpr ktl::u32 block_height = 8;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x5_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 50;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x6_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 60;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x8_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 80;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 8;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_10x10_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 100;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 10;
static constexpr ktl::u32 block_height = 10;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_12x10_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 120;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 12;
static constexpr ktl::u32 block_height = 10;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_12x12_sfloat_block
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 144;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 12;
static constexpr ktl::u32 block_height = 12;
static constexpr ktl::u32 block_depth = 1;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_3x3x3_unorm_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 27;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 3;
static constexpr ktl::u32 block_height = 3;
static constexpr ktl::u32 block_depth = 3;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_3x3x3_srgb_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 27;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 3;
static constexpr ktl::u32 block_height = 3;
static constexpr ktl::u32 block_depth = 3;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_3x3x3_sfloat_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 27;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 3;
static constexpr ktl::u32 block_height = 3;
static constexpr ktl::u32 block_depth = 3;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x3x3_unorm_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 36;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 3;
static constexpr ktl::u32 block_depth = 3;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x3x3_srgb_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 36;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 3;
static constexpr ktl::u32 block_depth = 3;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x3x3_sfloat_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 36;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 3;
static constexpr ktl::u32 block_depth = 3;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x4x3_unorm_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 48;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 3;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x4x3_srgb_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 48;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 3;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x4x3_sfloat_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 48;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 3;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x4x4_unorm_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 64;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 4;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x4x4_srgb_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 64;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 4;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_4x4x4_sfloat_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 64;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 4;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 4;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x4x4_unorm_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 80;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 4;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x4x4_srgb_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 80;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 4;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x4x4_sfloat_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 80;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 4;
static constexpr ktl::u32 block_depth = 4;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x5x4_unorm_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 100;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 4;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x5x4_srgb_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 100;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 4;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x5x4_sfloat_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 100;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 4;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x5x5_unorm_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 125;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 5;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x5x5_srgb_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 125;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 5;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_5x5x5_sfloat_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 125;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 5;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 5;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x5x5_unorm_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 150;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 5;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x5x5_srgb_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 150;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 5;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x5x5_sfloat_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 150;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 5;
static constexpr ktl::u32 block_depth = 5;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x6x5_unorm_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 180;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 5;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x6x5_srgb_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 180;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 5;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x6x5_sfloat_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 180;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 5;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x6x6_unorm_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 216;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 6;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x6x6_srgb_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 216;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 6;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_astc_6x6x6_sfloat_block_ext
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 16;
static constexpr ktl::u32 texels_per_block = 216;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 6;
static constexpr ktl::u32 block_height = 6;
static constexpr ktl::u32 block_depth = 6;
static constexpr bool is_3d = true;
static constexpr bool is_compressed = true;
static constexpr component r = {0,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
true
};
static constexpr component a = {0,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g8_b8r8_2plane_444_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 3;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 444;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
true,
1,
true
};
static constexpr component g = {8,
true,
0,
true
};
static constexpr component b = {8,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r8_unorm
},
plane{
1,
1,
ktl::api::format::v_r8g8_unorm
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g10x6_b10x6r10x6_2plane_444_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 444;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
true,
1,
true
};
static constexpr component g = {10,
true,
0,
true
};
static constexpr component b = {10,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r10x6_unorm_pack16
},
plane{
1,
1,
ktl::api::format::v_r10x6g10x6_unorm_2pack16
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g12x4_b12x4r12x4_2plane_444_unorm_3pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 444;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
true,
1,
true
};
static constexpr component g = {12,
true,
0,
true
};
static constexpr component b = {12,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r12x4_unorm_pack16
},
plane{
1,
1,
ktl::api::format::v_r12x4g12x4_unorm_2pack16
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g16_b16r16_2plane_444_unorm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 444;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
true,
1,
true
};
static constexpr component g = {16,
true,
0,
true
};
static constexpr component b = {16,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r16_unorm
},
plane{
1,
1,
ktl::api::format::v_r16g16_unorm
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a4r4g4b4_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {4,
false,
0,
true
};
static constexpr component g = {4,
false,
0,
true
};
static constexpr component b = {4,
false,
0,
true
};
static constexpr component a = {4,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_a4b4g4r4_unorm_pack16
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {4,
false,
0,
true
};
static constexpr component g = {4,
false,
0,
true
};
static constexpr component b = {4,
false,
0,
true
};
static constexpr component a = {4,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16g16_sfixed5_nv
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {16,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r10x6_uint_pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r10x6g10x6_uint_2pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r10x6g10x6b10x6a10x6_uint_4pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {10,
false,
0,
true
};
static constexpr component g = {10,
false,
0,
true
};
static constexpr component b = {10,
false,
0,
true
};
static constexpr component a = {10,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r12x4_uint_pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r12x4g12x4_uint_2pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
false,
0,
true
};
static constexpr component g = {12,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r12x4g12x4b12x4a12x4_uint_4pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {12,
false,
0,
true
};
static constexpr component g = {12,
false,
0,
true
};
static constexpr component b = {12,
false,
0,
true
};
static constexpr component a = {12,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r14x2_uint_pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {14,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r14x2g14x2_uint_2pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {14,
false,
0,
true
};
static constexpr component g = {14,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r14x2g14x2b14x2a14x2_uint_4pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {14,
false,
0,
true
};
static constexpr component g = {14,
false,
0,
true
};
static constexpr component b = {14,
false,
0,
true
};
static constexpr component a = {14,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r14x2_unorm_pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {14,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r14x2g14x2_unorm_2pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 4;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {14,
false,
0,
true
};
static constexpr component g = {14,
false,
0,
true
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r14x2g14x2b14x2a14x2_unorm_4pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 8;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {14,
false,
0,
true
};
static constexpr component g = {14,
false,
0,
true
};
static constexpr component b = {14,
false,
0,
true
};
static constexpr component a = {14,
false,
0,
true
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g14x2_b14x2r14x2_2plane_420_unorm_3pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 420;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {14,
true,
1,
true
};
static constexpr component g = {14,
true,
0,
true
};
static constexpr component b = {14,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r14x2_unorm_pack16_arm
},
plane{
2,
2,
ktl::api::format::v_r14x2g14x2_unorm_2pack16_arm
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_g14x2_b14x2r14x2_2plane_422_unorm_3pack16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 6;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 16;
static constexpr ktl::u32 chroma = 422;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {14,
true,
1,
true
};
static constexpr component g = {14,
true,
0,
true
};
static constexpr component b = {14,
true,
1,
true
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 2;
static constexpr std::array< plane, 3 > planes = {
plane{
1,
1,
ktl::api::format::v_r14x2_unorm_pack16_arm
},
plane{
2,
1,
ktl::api::format::v_r14x2g14x2_unorm_2pack16_arm
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8_bool_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r16_sfloat_fpencoding_bfloat16_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 2;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {16,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8_sfloat_fpencoding_float8e4m3_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

template < >
struct format_meta< ktl::api::format::v_r8_sfloat_fpencoding_float8e5m2_arm
>{
using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;
using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;

static constexpr ktl::u32 block_size = 1;
static constexpr ktl::u32 texels_per_block = 1;
static constexpr ktl::u32 packed = 0;
static constexpr ktl::u32 chroma = 0;
static constexpr ktl::u32 block_width = 0;
static constexpr ktl::u32 block_height = 0;
static constexpr ktl::u32 block_depth = 0;
static constexpr bool is_3d = false;
static constexpr bool is_compressed = false;
static constexpr component r = {8,
false,
0,
true
};
static constexpr component g = {0,
false,
0,
false
};
static constexpr component b = {0,
false,
0,
false
};
static constexpr component a = {0,
false,
0,
false
};
static constexpr ktl::u32 planes_amount = 0;
static constexpr std::array< plane, 3 > planes = {
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
},
plane{
0,
0,
ktl::api::format::v_undefined
}
};
};

}

#endif
