#ifndef KTL_API_EXTENSIONS_HPP
#define KTL_API_EXTENSIONS_HPP

#include <array>

#ifndef KTL_API_API_HPP
#include "common.hpp"
#endif

namespace ktl::api
{
enum class extension : ktl::u32;

template < ktl::api::extension >
struct extension_meta
{
    static constexpr ktl::api::version                    version;
    static constexpr std::array< ktl::api::extension, 0 > extensions;
    static constexpr std::array< ktl::u32, 0 >            commands;
    static constexpr bool                                 is_promoted;
    static constexpr ktl::api::version                    promoted;
};

enum class extension : ktl::u32
{
    khr_surface,
    khr_swapchain,
    khr_display,
    khr_display_swapchain,
    khr_xlib_surface,
    khr_xcb_surface,
    khr_wayland_surface,
    khr_mir_surface,
    khr_android_surface,
    khr_win32_surface,
    android_native_buffer,
    ext_debug_report,
    nv_glsl_shader,
    ext_depth_range_unrestricted,
    khr_sampler_mirror_clamp_to_edge,
    img_filter_cubic,
    amd_extension_17,
    amd_extension_18,
    amd_rasterization_order,
    amd_extension_20,
    amd_shader_trinary_minmax,
    amd_shader_explicit_vertex_parameter,
    ext_debug_marker,
    khr_video_queue,
    amd_gcn_shader,
    nv_dedicated_allocation,
    ext_extension_28,
    ext_transform_feedback,
    nvx_binary_import,
    nvx_image_view_handle,
    amd_extension_32,
    amd_extension_33,
    amd_draw_indirect_count,
    amd_extension_35,
    amd_negative_viewport_height,
    amd_gpu_shader_half_float,
    amd_shader_ballot,
    amd_texture_gather_bias_lod,
    amd_shader_info,
    amd_extension_44,
    khr_dynamic_rendering,
    amd_extension_46,
    amd_shader_image_load_store_lod,
    nvx_extension_48,
    google_extension_49,
    ggp_stream_descriptor_surface,
    nv_corner_sampled_image,
    nv_private_vendor_info,
    nv_extension_53,
    khr_multiview,
    img_format_pvrtc,
    nv_external_memory_capabilities,
    nv_external_memory,
    nv_external_memory_win32,
    nv_win32_keyed_mutex,
    khr_get_physical_device_properties2,
    khr_device_group,
    ext_validation_flags,
    nn_vi_surface,
    khr_shader_draw_parameters,
    ext_shader_subgroup_ballot,
    ext_shader_subgroup_vote,
    ext_texture_compression_astc_hdr,
    ext_astc_decode_mode,
    ext_pipeline_robustness,
    khr_maintenance1,
    khr_device_group_creation,
    khr_external_memory_capabilities,
    khr_external_memory,
    khr_external_memory_win32,
    khr_external_memory_fd,
    khr_win32_keyed_mutex,
    khr_external_semaphore_capabilities,
    khr_external_semaphore,
    khr_external_semaphore_win32,
    khr_external_semaphore_fd,
    khr_push_descriptor,
    ext_conditional_rendering,
    khr_shader_float16_int8,
    khr_16bit_storage,
    khr_incremental_present,
    khr_descriptor_update_template,
    nvx_device_generated_commands,
    nv_clip_space_w_scaling,
    ext_direct_mode_display,
    ext_acquire_xlib_display,
    ext_display_surface_counter,
    ext_display_control,
    google_display_timing,
    reserved_do_not_use_94,
    nv_sample_mask_override_coverage,
    nv_geometry_shader_passthrough,
    nv_viewport_array2,
    nvx_multiview_per_view_attributes,
    nv_viewport_swizzle,
    ext_discard_rectangles,
    nv_extension_101,
    ext_conservative_rasterization,
    ext_depth_clip_enable,
    nv_extension_104,
    ext_swapchain_colorspace,
    ext_hdr_metadata,
    img_extension_107,
    img_extension_108,
    khr_imageless_framebuffer,
    khr_create_renderpass2,
    img_relaxed_line_rasterization,
    khr_shared_presentable_image,
    khr_external_fence_capabilities,
    khr_external_fence,
    khr_external_fence_win32,
    khr_external_fence_fd,
    khr_performance_query,
    khr_maintenance2,
    khr_extension_119,
    khr_get_surface_capabilities2,
    khr_variable_pointers,
    khr_get_display_properties2,
    mvk_ios_surface,
    mvk_macos_surface,
    mvk_moltenvk,
    ext_external_memory_dma_buf,
    ext_queue_family_foreign,
    khr_dedicated_allocation,
    ext_debug_utils,
    android_external_memory_android_hardware_buffer,
    ext_sampler_filter_minmax,
    khr_storage_buffer_storage_class,
    amd_gpu_shader_int16,
    amd_extension_134,
    amdx_shader_enqueue,
    ext_descriptor_heap,
    amd_mixed_attachment_samples,
    amd_shader_fragment_mask,
    ext_inline_uniform_block,
    amd_extension_140,
    ext_shader_stencil_export,
    khr_shader_bfloat16,
    amd_extension_143,
    ext_sample_locations,
    khr_relaxed_block_layout,
    reserved_do_not_use_146,
    khr_get_memory_requirements2,
    khr_image_format_list,
    ext_blend_operation_advanced,
    nv_fragment_coverage_to_color,
    khr_acceleration_structure,
    khr_ray_tracing_pipeline,
    khr_ray_query,
    nv_extension_152,
    nv_framebuffer_mixed_samples,
    nv_fill_rectangle,
    nv_shader_sm_builtins,
    ext_post_depth_coverage,
    khr_sampler_ycbcr_conversion,
    khr_bind_memory2,
    ext_image_drm_format_modifier,
    ext_extension_160,
    ext_validation_cache,
    ext_descriptor_indexing,
    ext_shader_viewport_index_layer,
    khr_portability_subset,
    nv_shading_rate_image,
    nv_ray_tracing,
    nv_representative_fragment_test,
    nv_extension_168,
    khr_maintenance3,
    khr_draw_indirect_count,
    ext_filter_cubic,
    qcom_render_pass_shader_resolve,
    qcom_cooperative_matrix_conversion,
    qcom_extension_174,
    ext_global_priority,
    khr_shader_subgroup_extended_types,
    ext_extension_177,
    khr_8bit_storage,
    ext_external_memory_host,
    amd_buffer_marker,
    khr_shader_atomic_int64,
    khr_shader_clock,
    amd_extension_183,
    amd_pipeline_compiler_control,
    ext_calibrated_timestamps,
    amd_shader_core_properties,
    amd_extension_187,
    khr_global_priority,
    amd_memory_overallocation_behavior,
    ext_vertex_attribute_divisor,
    ggp_frame_token,
    ext_pipeline_creation_feedback,
    google_extension_194,
    google_extension_195,
    google_extension_196,
    khr_driver_properties,
    khr_shader_float_controls,
    nv_shader_subgroup_partitioned,
    khr_depth_stencil_resolve,
    khr_swapchain_mutable_format,
    nv_compute_shader_derivatives,
    nv_mesh_shader,
    nv_fragment_shader_barycentric,
    nv_shader_image_footprint,
    nv_scissor_exclusive,
    nv_device_diagnostic_checkpoints,
    khr_timeline_semaphore,
    ext_present_timing,
    intel_shader_integer_functions2,
    intel_performance_query,
    khr_vulkan_memory_model,
    ext_pci_bus_info,
    amd_display_native_hdr,
    fuchsia_imagepipe_surface,
    khr_shader_terminate_invocation,
    google_extension_217,
    ext_metal_surface,
    ext_fragment_density_map,
    ext_extension_220,
    khr_extension_221,
    ext_scalar_block_layout,
    ext_extension_223,
    google_hlsl_functionality1,
    google_decorate_string,
    ext_subgroup_size_control,
    khr_fragment_shading_rate,
    amd_shader_core_properties2,
    amd_extension_229,
    amd_device_coherent_memory,
    amd_extension_231,
    khr_shader_constant_data,
    khr_dynamic_rendering_local_read,
    khr_shader_abort,
    ext_shader_image_atomic_int64,
    khr_shader_quad_control,
    khr_spirv_1_4,
    ext_memory_budget,
    ext_memory_priority,
    khr_surface_protected_capabilities,
    nv_dedicated_allocation_image_aliasing,
    khr_separate_depth_stencil_layouts,
    intel_extension_243,
    mesa_extension_244,
    ext_buffer_device_address,
    ext_tooling_info,
    ext_separate_stencil_usage,
    ext_validation_features,
    khr_present_wait,
    nv_cooperative_matrix,
    nv_coverage_reduction_mode,
    ext_fragment_shader_interlock,
    ext_ycbcr_image_arrays,
    khr_uniform_buffer_standard_layout,
    ext_provoking_vertex,
    ext_full_screen_exclusive,
    ext_headless_surface,
    khr_buffer_device_address,
    ext_extension_259,
    ext_line_rasterization,
    ext_shader_atomic_float,
    ext_host_query_reset,
    ggp_extension_263,
    brcm_extension_264,
    brcm_extension_265,
    ext_index_type_uint8,
    ext_extension_267,
    ext_extended_dynamic_state,
    khr_deferred_host_operations,
    khr_pipeline_executable_properties,
    ext_host_image_copy,
    khr_map_memory2,
    ext_map_memory_placed,
    ext_shader_atomic_float2,
    ext_surface_maintenance1,
    ext_swapchain_maintenance1,
    ext_shader_demote_to_helper_invocation,
    nv_device_generated_commands,
    nv_inherited_viewport_scissor,
    khr_extension_280,
    khr_shader_integer_dot_product,
    ext_texel_buffer_alignment,
    qcom_render_pass_transform,
    ext_depth_bias_control,
    ext_device_memory_report,
    ext_acquire_drm_display,
    ext_robustness2,
    ext_custom_border_color,
    ext_texture_compression_astc_3d,
    google_user_type,
    khr_pipeline_library,
    nv_extension_292,
    nv_present_barrier,
    khr_shader_non_semantic_info,
    khr_present_id,
    ext_private_data,
    khr_extension_297,
    ext_pipeline_creation_cache_control,
    khr_extension_299,
    nv_device_diagnostics_config,
    qcom_render_pass_store_ops,
    qcom_queue_perf_hint,
    qcom_extension_304,
    qcom_extension_305,
    qcom_extension_306,
    qcom_extension_307,
    nv_cuda_kernel_launch,
    khr_object_refresh,
    qcom_tile_shading,
    nv_low_latency,
    ext_metal_objects,
    ext_extension_313,
    amd_extension_314,
    khr_synchronization2,
    amd_extension_316,
    ext_descriptor_buffer,
    amd_extension_318,
    khr_device_address_commands,
    amd_extension_320,
    ext_graphics_pipeline_library,
    amd_shader_early_and_late_fragment_tests,
    khr_fragment_shader_barycentric,
    khr_shader_subgroup_uniform_control_flow,
    khr_extension_325,
    khr_zero_initialize_workgroup_memory,
    nv_fragment_shading_rate_enums,
    nv_ray_tracing_motion_blur,
    ext_mesh_shader,
    nv_extension_330,
    ext_ycbcr_2plane_444_formats,
    nv_extension_332,
    ext_fragment_density_map2,
    qcom_rotated_copy_commands,
    khr_extension_335,
    ext_image_robustness,
    khr_workgroup_memory_explicit_layout,
    khr_copy_commands2,
    ext_image_compression_control,
    ext_attachment_feedback_loop_layout,
    ext_4444_formats,
    ext_device_fault,
    arm_rasterization_order_attachment_access,
    arm_extension_344,
    ext_rgba10x6_formats,
    nv_acquire_winrt_display,
    ext_directfb_surface,
    khr_extension_350,
    nv_extension_351,
    valve_mutable_descriptor_type,
    ext_vertex_input_dynamic_state,
    ext_physical_device_drm,
    ext_device_address_binding_report,
    ext_depth_clip_control,
    ext_primitive_topology_list_restart,
    khr_extension_358,
    ext_extension_359,
    ext_extension_360,
    khr_format_feature_flags2,
    ext_present_mode_fifo_latest_ready,
    ext_extension_363,
    fuchsia_extension_364,
    fuchsia_external_memory,
    fuchsia_external_semaphore,
    fuchsia_buffer_collection,
    fuchsia_extension_368,
    qcom_extension_369,
    huawei_subpass_shading,
    huawei_invocation_mask,
    nv_external_memory_rdma,
    ext_pipeline_properties,
    nv_external_sci_sync,
    nv_external_memory_sci_buf,
    ext_frame_boundary,
    ext_multisampled_render_to_single_sampled,
    ext_extended_dynamic_state2,
    qnx_screen_surface,
    khr_extension_380,
    khr_extension_381,
    ext_color_write_enable,
    ext_primitives_generated_query,
    ext_extension_384,
    mesa_extension_385,
    google_extension_386,
    khr_ray_tracing_maintenance1,
    khr_shader_untyped_pointers,
    ext_global_priority_query,
    ext_extension_390,
    ext_image_view_min_lod,
    ext_multi_draw,
    ext_image_2d_view_of_3d,
    khr_portability_enumeration,
    ext_shader_tile_image,
    ext_opacity_micromap,
    nv_displacement_micromap,
    juice_extension_399,
    juice_extension_400,
    ext_load_store_op_none,
    fb_extension_402,
    fb_extension_403,
    fb_extension_404,
    huawei_cluster_culling_shader,
    huawei_extension_406,
    ggp_extension_407,
    ggp_extension_408,
    ggp_extension_409,
    ggp_extension_410,
    ggp_extension_411,
    ext_border_color_swizzle,
    ext_pageable_device_local_memory,
    khr_maintenance4,
    huawei_extension_415,
    arm_shader_core_properties,
    khr_shader_subgroup_rotate,
    arm_scheduling_controls,
    ext_image_sliced_view_of_3d,
    ext_extension_420,
    valve_descriptor_set_host_mapping,
    ext_depth_clamp_zero_one,
    ext_non_seamless_cube_map,
    arm_extension_424,
    arm_render_pass_striped,
    qcom_fragment_density_map_offset,
    nv_copy_memory_indirect,
    nv_memory_decompression,
    nv_device_generated_commands_compute,
    nv_ray_tracing_linear_swept_spheres,
    nv_linear_color_attachment,
    nv_extension_432,
    nv_extension_433,
    google_surfaceless_query,
    khr_shader_maximal_reconvergence,
    ext_application_parameters,
    ext_extension_437,
    ext_image_compression_control_swapchain,
    sec_extension_439,
    qcom_extension_440,
    qcom_image_processing,
    coreavi_extension_442,
    coreavi_extension_443,
    coreavi_extension_444,
    coreavi_extension_445,
    coreavi_extension_446,
    coreavi_extension_447,
    sec_extension_448,
    sec_extension_449,
    sec_extension_450,
    sec_extension_451,
    ext_nested_command_buffer,
    ohos_external_memory,
    ext_external_memory_acquire_unmodified,
    google_extension_455,
    ext_extended_dynamic_state3,
    ext_extension_457,
    ext_extension_458,
    ext_subpass_merge_feedback,
    lunarg_direct_driver_loading,
    arm_tensors,
    ext_extension_462,
    ext_shader_module_identifier,
    ext_rasterization_order_attachment_access,
    nv_optical_flow,
    ext_legacy_dithering,
    ext_pipeline_protected_access,
    ext_extension_468,
    android_external_format_resolve,
    amd_extension_470,
    khr_maintenance5,
    amd_extension_472,
    amd_extension_473,
    amd_extension_474,
    amd_extension_475,
    amd_extension_476,
    amd_anti_lag,
    amd_extension_478,
    amdx_dense_geometry_format,
    khr_present_id2,
    khr_present_wait2,
    khr_ray_tracing_position_fetch,
    ext_shader_object,
    khr_pipeline_binary,
    qcom_tile_properties,
    sec_amigo_profiling,
    khr_surface_maintenance1,
    khr_swapchain_maintenance1,
    qcom_multiview_per_view_viewports,
    nv_external_sci_sync2,
    nv_ray_tracing_invocation_reorder,
    nv_cooperative_vector,
    nv_extended_sparse_address_space,
    nv_extension_494,
    ext_mutable_descriptor_type,
    ext_legacy_vertex_attributes,
    ext_layer_settings,
    arm_shader_core_builtins,
    ext_pipeline_library_group_handles,
    ext_dynamic_rendering_unused_attachments,
    ext_extension_501,
    ext_extension_502,
    ext_extension_503,
    nv_extension_504,
    khr_internally_synchronized_queues,
    nv_low_latency2,
    khr_cooperative_matrix,
    arm_data_graph,
    arm_data_graph_instruction_set_tosa,
    mesa_extension_510,
    qcom_multiview_per_view_render_areas,
    khr_compute_shader_derivatives,
    nv_per_stage_descriptor_set,
    mesa_extension_518,
    qcom_image_processing2,
    qcom_filter_cubic_weights,
    qcom_ycbcr_degamma,
    qcom_filter_cubic_clamp,
    ext_extension_523,
    ext_extension_524,
    ext_attachment_feedback_loop_dynamic_state,
    khr_vertex_attribute_divisor,
    khr_load_store_op_none,
    khr_unified_image_layouts,
    khr_shader_float_controls2,
    qnx_external_memory_screen_buffer,
    msft_layered_driver,
    khr_extension_532,
    ext_extension_533,
    khr_index_type_uint8,
    khr_line_rasterization,
    qcom_extension_536,
    ext_extension_537,
    ext_extension_538,
    ext_extension_539,
    ext_extension_540,
    ext_extension_541,
    ext_extension_542,
    ext_extension_543,
    khr_calibrated_timestamps,
    khr_shader_expect_assume,
    khr_maintenance6,
    nv_descriptor_pool_overallocation,
    qcom_tile_memory_heap,
    nv_extension_549,
    khr_copy_memory_indirect,
    ext_memory_decompression,
    nv_display_stereo,
    img_extension_555,
    nv_raw_access_chains,
    nv_external_compute_queue,
    khr_extension_558,
    khr_shader_relaxed_extended_instruction,
    nv_command_buffer_inheritance,
    ext_extension_561,
    khr_extension_562,
    khr_maintenance7,
    nv_shader_atomic_float16_vector,
    ext_shader_replicated_composites,
    arm_extension_566,
    arm_extension_567,
    ext_shader_float8,
    nv_ray_tracing_validation,
    nv_cluster_acceleration_structure,
    nv_partitioned_acceleration_structure,
    nv_extension_572,
    ext_device_generated_commands,
    khr_device_fault,
    khr_maintenance8,
    mesa_image_alignment_control,
    huawei_extension_577,
    ext_extension_578,
    ext_extension_579,
    khr_shader_fma,
    nv_push_constant_bank,
    ext_ray_tracing_invocation_reorder,
    ext_depth_clamp_control,
    ext_extension_584,
    khr_maintenance9,
    img_extension_586,
    ohos_surface,
    huawei_extension_686,
    ohos_native_buffer,
    huawei_extension_590,
    huawei_hdr_vivid,
    nv_extension_592,
    nv_extension_593,
    nv_cooperative_matrix2,
    nv_extension_595,
    khr_extension_596,
    arm_pipeline_opacity_micromap,
    khr_extension_598,
    khr_extension_599,
    img_extension_600,
    img_extension_601,
    ext_extension_602,
    ext_external_memory_metal,
    ext_extension_604,
    khr_depth_clamp_zero_one,
    arm_performance_counters_by_region,
    khr_extension_607,
    arm_shader_instrumentation,
    ext_vertex_attribute_robustness,
    arm_format_pack,
    nv_extension_611,
    valve_fragment_density_map_layered,
    khr_robustness2,
    nv_present_metering,
    qcom_extension_615,
    ext_extension_616,
    ext_extension_617,
    ext_extension_618,
    ext_fragment_density_map_offset,
    ext_zero_initialize_device_memory,
    khr_present_mode_fifo_latest_ready,
    ext_extension_623,
    khr_extension_624,
    khr_extension_625,
    ext_extension_626,
    nv_extension_627,
    ext_shader_64bit_indexing,
    ext_custom_resolve,
    qcom_data_graph_model,
    khr_maintenance10,
    arm_data_graph_optical_flow,
    mtk_extension_633,
    nv_extension_634,
    mtk_extension_635,
    ext_shader_long_vector,
    ext_extension_637,
    sec_pipeline_cache_incremental_mode,
    ext_extension_639,
    nv_extension_640,
    ext_extension_641,
    ext_extension_642,
    ext_shader_uniform_buffer_unsized_array,
    ext_extension_644,
    ext_extension_645,
    nv_compute_occupancy_priority,
    khr_extension_647,
    khr_extension_648,
    amd_extension_649,
    amd_extension_650,
    amd_extension_651,
    amd_extension_652,
    amd_extension_653,
    valve_extension_654,
    arm_extension_655,
    arm_extension_656,
    arm_extension_657,
    khr_extension_658,
    arm_extension_659,
    ext_extension_660,
    khr_extension_661,
    valve_extension_662,
    ext_shader_subgroup_partitioned,
    ext_extension_664,
    sec_ubm_surface,
    google_extension_666,
    huawei_extension_667,
    nv_extension_668,
    khr_extension_669,
    nv_extension_670,
    arm_extension_671,
    khr_extension_672,
    ext_extension_673,
    valve_shader_mixed_float_dot_product,
    sec_extension_675,
    ext_extension_676,
    arm_extension_677,
    ext_extension_678,
    ext_primitive_restart_index,
    ext_extension_680,
    khr_extension_681,
    valve_extension_682
};

template <>
struct extension_meta< ktl::api::extension::khr_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_swapchain >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_display >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_display_swapchain >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_xlib_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_xcb_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_wayland_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_mir_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_android_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_win32_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::android_native_buffer >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_debug_report >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_glsl_shader >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_depth_range_unrestricted >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_sampler_mirror_clamp_to_edge >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::img_filter_cubic >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_17 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_18 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_rasterization_order >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_20 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_shader_trinary_minmax >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_shader_explicit_vertex_parameter >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_debug_marker >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_EXT_debug_utils;
};

template <>
struct extension_meta< ktl::api::extension::khr_video_queue >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_gcn_shader >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_dedicated_allocation >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_28 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_transform_feedback >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nvx_binary_import >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nvx_image_view_handle >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_32 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_33 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_draw_indirect_count >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_draw_indirect_count;
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_35 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_negative_viewport_height >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_gpu_shader_half_float >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_shader_ballot >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_texture_gather_bias_lod >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_shader_info >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_44 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_dynamic_rendering >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_46 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_shader_image_load_store_lod >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nvx_extension_48 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::google_extension_49 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ggp_stream_descriptor_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_corner_sampled_image >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_private_vendor_info >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_53 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_multiview >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::img_format_pvrtc >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_external_memory_capabilities >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_external_memory >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_external_memory_win32 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_win32_keyed_mutex >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_win32_keyed_mutex;
};

template <>
struct extension_meta< ktl::api::extension::khr_get_physical_device_properties2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_device_group >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::ext_validation_flags >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nn_vi_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_draw_parameters >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_subgroup_ballot >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_subgroup_vote >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_texture_compression_astc_hdr >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::ext_astc_decode_mode >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_pipeline_robustness >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::khr_maintenance1 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_device_group_creation >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_external_memory_capabilities >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_external_memory >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_external_memory_win32 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_external_memory_fd >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_win32_keyed_mutex >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_external_semaphore_capabilities >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_external_semaphore >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_external_semaphore_win32 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_external_semaphore_fd >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_push_descriptor >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::ext_conditional_rendering >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_float16_int8 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::khr_16bit_storage >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_incremental_present >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_descriptor_update_template >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::nvx_device_generated_commands >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_clip_space_w_scaling >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_direct_mode_display >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_acquire_xlib_display >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_display_surface_counter >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_display_control >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::google_display_timing >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::reserved_do_not_use_94 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_sample_mask_override_coverage >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_geometry_shader_passthrough >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_viewport_array2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nvx_multiview_per_view_attributes >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_viewport_swizzle >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_discard_rectangles >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_101 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_conservative_rasterization >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_depth_clip_enable >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_104 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_swapchain_colorspace >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_hdr_metadata >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::img_extension_107 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::img_extension_108 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_imageless_framebuffer >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::khr_create_renderpass2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::img_relaxed_line_rasterization >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shared_presentable_image >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_external_fence_capabilities >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_external_fence >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_external_fence_win32 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_external_fence_fd >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_performance_query >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_maintenance2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_119 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_get_surface_capabilities2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_variable_pointers >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_get_display_properties2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::mvk_ios_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::mvk_macos_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::mvk_moltenvk >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_external_memory_dma_buf >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_queue_family_foreign >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_dedicated_allocation >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::ext_debug_utils >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::android_external_memory_android_hardware_buffer >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_sampler_filter_minmax >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::khr_storage_buffer_storage_class >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::amd_gpu_shader_int16 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_134 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amdx_shader_enqueue >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_descriptor_heap >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_mixed_attachment_samples >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_shader_fragment_mask >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_inline_uniform_block >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_140 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_stencil_export >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_bfloat16 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_143 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_sample_locations >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_relaxed_block_layout >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::reserved_do_not_use_146 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_get_memory_requirements2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_image_format_list >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_blend_operation_advanced >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_fragment_coverage_to_color >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_acceleration_structure >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_ray_tracing_pipeline >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_ray_query >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_152 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_framebuffer_mixed_samples >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_fill_rectangle >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_shader_sm_builtins >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_post_depth_coverage >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_sampler_ycbcr_conversion >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_bind_memory2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::ext_image_drm_format_modifier >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_160 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_validation_cache >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_descriptor_indexing >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_viewport_index_layer >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::khr_portability_subset >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_shading_rate_image >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_ray_tracing >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_representative_fragment_test >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_168 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_maintenance3 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_1;
};

template <>
struct extension_meta< ktl::api::extension::khr_draw_indirect_count >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_filter_cubic >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_render_pass_shader_resolve >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_EXT_custom_resolve;
};

template <>
struct extension_meta< ktl::api::extension::qcom_cooperative_matrix_conversion >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_extension_174 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_global_priority >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_global_priority;
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_subgroup_extended_types >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_177 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_8bit_storage >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_external_memory_host >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_buffer_marker >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_atomic_int64 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_clock >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_183 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_pipeline_compiler_control >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_calibrated_timestamps >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_calibrated_timestamps;
};

template <>
struct extension_meta< ktl::api::extension::amd_shader_core_properties >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_187 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_global_priority >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::amd_memory_overallocation_behavior >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_vertex_attribute_divisor >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_vertex_attribute_divisor;
};

template <>
struct extension_meta< ktl::api::extension::ggp_frame_token >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_pipeline_creation_feedback >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::google_extension_194 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::google_extension_195 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::google_extension_196 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_driver_properties >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_float_controls >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::nv_shader_subgroup_partitioned >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_EXT_shader_subgroup_partitioned;
};

template <>
struct extension_meta< ktl::api::extension::khr_depth_stencil_resolve >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::khr_swapchain_mutable_format >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_compute_shader_derivatives >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_compute_shader_derivatives;
};

template <>
struct extension_meta< ktl::api::extension::nv_mesh_shader >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_fragment_shader_barycentric >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_fragment_shader_barycentric;
};

template <>
struct extension_meta< ktl::api::extension::nv_shader_image_footprint >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_scissor_exclusive >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_device_diagnostic_checkpoints >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_timeline_semaphore >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_present_timing >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::intel_shader_integer_functions2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::intel_performance_query >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_vulkan_memory_model >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_pci_bus_info >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_display_native_hdr >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::fuchsia_imagepipe_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_terminate_invocation >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::google_extension_217 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_metal_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_fragment_density_map >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_220 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_221 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_scalar_block_layout >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_223 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::google_hlsl_functionality1 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::google_decorate_string >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_subgroup_size_control >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::khr_fragment_shading_rate >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_shader_core_properties2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_229 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_device_coherent_memory >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_231 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_constant_data >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_dynamic_rendering_local_read >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_abort >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_image_atomic_int64 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_quad_control >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_spirv_1_4 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_memory_budget >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_memory_priority >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_surface_protected_capabilities >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_dedicated_allocation_image_aliasing >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_separate_depth_stencil_layouts >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::intel_extension_243 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::mesa_extension_244 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_buffer_device_address >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_tooling_info >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::ext_separate_stencil_usage >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_validation_features >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_present_wait >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_cooperative_matrix >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_coverage_reduction_mode >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_fragment_shader_interlock >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_ycbcr_image_arrays >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_uniform_buffer_standard_layout >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_provoking_vertex >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_full_screen_exclusive >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_headless_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_buffer_device_address >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_259 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_line_rasterization >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_line_rasterization;
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_atomic_float >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_host_query_reset >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_2;
};

template <>
struct extension_meta< ktl::api::extension::ggp_extension_263 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::brcm_extension_264 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::brcm_extension_265 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_index_type_uint8 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_index_type_uint8;
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_267 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extended_dynamic_state >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::khr_deferred_host_operations >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_pipeline_executable_properties >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_host_image_copy >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::khr_map_memory2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::ext_map_memory_placed >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_atomic_float2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_surface_maintenance1 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_surface_maintenance1;
};

template <>
struct extension_meta< ktl::api::extension::ext_swapchain_maintenance1 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_swapchain_maintenance1;
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_demote_to_helper_invocation >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::nv_device_generated_commands >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_inherited_viewport_scissor >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_280 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_integer_dot_product >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::ext_texel_buffer_alignment >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::qcom_render_pass_transform >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_depth_bias_control >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_device_memory_report >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_acquire_drm_display >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_robustness2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_robustness2;
};

template <>
struct extension_meta< ktl::api::extension::ext_custom_border_color >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_texture_compression_astc_3d >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::google_user_type >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_pipeline_library >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_292 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_present_barrier >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_non_semantic_info >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::khr_present_id >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_private_data >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_297 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_pipeline_creation_cache_control >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_299 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_device_diagnostics_config >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_render_pass_store_ops >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_queue_perf_hint >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_extension_304 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_extension_305 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_extension_306 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_extension_307 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_cuda_kernel_launch >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_object_refresh >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_tile_shading >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_low_latency >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_metal_objects >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_313 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_314 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_synchronization2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_316 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_descriptor_buffer >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_318 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_device_address_commands >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_320 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_graphics_pipeline_library >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_shader_early_and_late_fragment_tests >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_fragment_shader_barycentric >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_subgroup_uniform_control_flow >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_325 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_zero_initialize_workgroup_memory >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::nv_fragment_shading_rate_enums >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_ray_tracing_motion_blur >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_mesh_shader >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_330 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_ycbcr_2plane_444_formats >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_332 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_fragment_density_map2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_rotated_copy_commands >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_335 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_image_robustness >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::khr_workgroup_memory_explicit_layout >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_copy_commands2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::ext_image_compression_control >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_attachment_feedback_loop_layout >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_4444_formats >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::ext_device_fault >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_device_fault;
};

template <>
struct extension_meta< ktl::api::extension::arm_rasterization_order_attachment_access >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_EXT_rasterization_order_attachment_access;
};

template <>
struct extension_meta< ktl::api::extension::arm_extension_344 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_rgba10x6_formats >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_acquire_winrt_display >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_directfb_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_350 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_351 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::valve_mutable_descriptor_type >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_EXT_mutable_descriptor_type;
};

template <>
struct extension_meta< ktl::api::extension::ext_vertex_input_dynamic_state >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_physical_device_drm >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_device_address_binding_report >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_depth_clip_control >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_primitive_topology_list_restart >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_358 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_359 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_360 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_format_feature_flags2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::ext_present_mode_fifo_latest_ready >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_present_mode_fifo_latest_ready;
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_363 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::fuchsia_extension_364 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::fuchsia_external_memory >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::fuchsia_external_semaphore >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::fuchsia_buffer_collection >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::fuchsia_extension_368 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_extension_369 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::huawei_subpass_shading >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::huawei_invocation_mask >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_external_memory_rdma >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_pipeline_properties >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_external_sci_sync >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_external_memory_sci_buf >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_frame_boundary >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_multisampled_render_to_single_sampled >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extended_dynamic_state2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::qnx_screen_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_380 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_381 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_color_write_enable >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_primitives_generated_query >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_384 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::mesa_extension_385 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::google_extension_386 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_ray_tracing_maintenance1 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_untyped_pointers >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_global_priority_query >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_global_priority;
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_390 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_image_view_min_lod >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_multi_draw >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_image_2d_view_of_3d >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_portability_enumeration >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_tile_image >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_opacity_micromap >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_displacement_micromap >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::juice_extension_399 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::juice_extension_400 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_load_store_op_none >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_load_store_op_none;
};

template <>
struct extension_meta< ktl::api::extension::fb_extension_402 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::fb_extension_403 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::fb_extension_404 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::huawei_cluster_culling_shader >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::huawei_extension_406 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ggp_extension_407 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ggp_extension_408 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ggp_extension_409 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ggp_extension_410 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ggp_extension_411 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_border_color_swizzle >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_pageable_device_local_memory >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_maintenance4 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_3;
};

template <>
struct extension_meta< ktl::api::extension::huawei_extension_415 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_shader_core_properties >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_subgroup_rotate >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::arm_scheduling_controls >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_image_sliced_view_of_3d >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_420 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::valve_descriptor_set_host_mapping >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_depth_clamp_zero_one >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_depth_clamp_zero_one;
};

template <>
struct extension_meta< ktl::api::extension::ext_non_seamless_cube_map >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_extension_424 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_render_pass_striped >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_fragment_density_map_offset >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_EXT_fragment_density_map_offset;
};

template <>
struct extension_meta< ktl::api::extension::nv_copy_memory_indirect >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_copy_memory_indirect;
};

template <>
struct extension_meta< ktl::api::extension::nv_memory_decompression >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_EXT_memory_decompression;
};

template <>
struct extension_meta< ktl::api::extension::nv_device_generated_commands_compute >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_ray_tracing_linear_swept_spheres >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_linear_color_attachment >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_432 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_433 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::google_surfaceless_query >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_maximal_reconvergence >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_application_parameters >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_437 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_image_compression_control_swapchain >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::sec_extension_439 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_extension_440 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_image_processing >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::coreavi_extension_442 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::coreavi_extension_443 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::coreavi_extension_444 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::coreavi_extension_445 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::coreavi_extension_446 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::coreavi_extension_447 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::sec_extension_448 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::sec_extension_449 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::sec_extension_450 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::sec_extension_451 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_nested_command_buffer >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ohos_external_memory >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_external_memory_acquire_unmodified >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::google_extension_455 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extended_dynamic_state3 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_457 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_458 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_subpass_merge_feedback >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::lunarg_direct_driver_loading >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_tensors >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_462 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_module_identifier >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_rasterization_order_attachment_access >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_optical_flow >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_legacy_dithering >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_pipeline_protected_access >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_468 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::android_external_format_resolve >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_470 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_maintenance5 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_472 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_473 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_474 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_475 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_476 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_anti_lag >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_478 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amdx_dense_geometry_format >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_present_id2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_present_wait2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_ray_tracing_position_fetch >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_object >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_pipeline_binary >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_tile_properties >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::sec_amigo_profiling >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_surface_maintenance1 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_swapchain_maintenance1 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_multiview_per_view_viewports >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_external_sci_sync2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_ray_tracing_invocation_reorder >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_EXT_ray_tracing_invocation_reorder;
};

template <>
struct extension_meta< ktl::api::extension::nv_cooperative_vector >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extended_sparse_address_space >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_494 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_mutable_descriptor_type >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_legacy_vertex_attributes >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_layer_settings >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_shader_core_builtins >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_pipeline_library_group_handles >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_dynamic_rendering_unused_attachments >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_501 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_502 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_503 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_504 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_internally_synchronized_queues >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_low_latency2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_cooperative_matrix >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_data_graph >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_data_graph_instruction_set_tosa >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::mesa_extension_510 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_multiview_per_view_render_areas >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_compute_shader_derivatives >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_per_stage_descriptor_set >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::mesa_extension_518 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_image_processing2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_filter_cubic_weights >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_ycbcr_degamma >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_filter_cubic_clamp >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_523 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_524 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_attachment_feedback_loop_dynamic_state >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_vertex_attribute_divisor >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::khr_load_store_op_none >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::khr_unified_image_layouts >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_float_controls2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::qnx_external_memory_screen_buffer >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::msft_layered_driver >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_532 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_533 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_index_type_uint8 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::khr_line_rasterization >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::qcom_extension_536 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_537 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_538 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_539 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_540 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_541 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_542 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_543 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_calibrated_timestamps >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_expect_assume >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::khr_maintenance6 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_VERSION_1_4;
};

template <>
struct extension_meta< ktl::api::extension::nv_descriptor_pool_overallocation >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_tile_memory_heap >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_549 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_copy_memory_indirect >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_memory_decompression >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_display_stereo >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::img_extension_555 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_raw_access_chains >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_external_compute_queue >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_558 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_relaxed_extended_instruction >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_command_buffer_inheritance >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_561 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_562 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_maintenance7 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_shader_atomic_float16_vector >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_replicated_composites >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_extension_566 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_extension_567 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_float8 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_ray_tracing_validation >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_cluster_acceleration_structure >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_partitioned_acceleration_structure >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_572 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_device_generated_commands >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_device_fault >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_maintenance8 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::mesa_image_alignment_control >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::huawei_extension_577 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_578 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_579 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_shader_fma >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_push_constant_bank >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_ray_tracing_invocation_reorder >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_depth_clamp_control >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_584 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_maintenance9 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::img_extension_586 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ohos_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::huawei_extension_686 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ohos_native_buffer >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::huawei_extension_590 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::huawei_hdr_vivid >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_592 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_593 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_cooperative_matrix2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_595 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_596 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_pipeline_opacity_micromap >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_598 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_599 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::img_extension_600 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::img_extension_601 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_602 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_external_memory_metal >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_604 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_depth_clamp_zero_one >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_performance_counters_by_region >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_607 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_shader_instrumentation >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_vertex_attribute_robustness >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = true;
    static constexpr ktl::api::version                    promoted    = VK_KHR_maintenance9;
};

template <>
struct extension_meta< ktl::api::extension::arm_format_pack >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_611 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::valve_fragment_density_map_layered >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_robustness2 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_present_metering >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_extension_615 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_616 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_617 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_618 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_fragment_density_map_offset >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_zero_initialize_device_memory >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_present_mode_fifo_latest_ready >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_623 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_624 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_625 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_626 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_627 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_64bit_indexing >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_custom_resolve >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::qcom_data_graph_model >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_maintenance10 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_data_graph_optical_flow >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::mtk_extension_633 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_634 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::mtk_extension_635 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_long_vector >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_637 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::sec_pipeline_cache_incremental_mode >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_639 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_640 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_641 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_642 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_uniform_buffer_unsized_array >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_644 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_645 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_compute_occupancy_priority >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_647 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_648 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_649 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_650 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_651 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_652 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::amd_extension_653 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::valve_extension_654 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_extension_655 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_extension_656 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_extension_657 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_658 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_extension_659 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_660 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_661 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::valve_extension_662 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_shader_subgroup_partitioned >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_664 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::sec_ubm_surface >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::google_extension_666 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::huawei_extension_667 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_668 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_669 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::nv_extension_670 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_extension_671 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_672 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_673 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::valve_shader_mixed_float_dot_product >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::sec_extension_675 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_676 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::arm_extension_677 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_678 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_primitive_restart_index >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::ext_extension_680 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::khr_extension_681 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};

template <>
struct extension_meta< ktl::api::extension::valve_extension_682 >
{
    static constexpr ktl::api::version                    version     = NULL;
    static constexpr std::array< ktl::api::extension, 0 > extensions  = [];
    static constexpr std::array< ktl::u32, 0 >            commands    = [];
    static constexpr bool                                 is_promoted = false;
    static constexpr ktl::api::version                    promoted    = {};
};
} // namespace ktl::api

#endif
