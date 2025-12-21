#pragma once

#include <vulkan/vulkan_core.h>
#include <span>
#include <cstddef>

struct extension_requirements final
{
    enum target
    {
        instance,
        device
    };

    uint32_t required_api_version;
    const char* promoted_to_core;
    std::span< const char * > required_extensions;
    const char * platform_protect;
    target extension_target;
};

namespace {
constexpr const char* all_extension_names[] = {
    "VK_AMDX_dense_geometry_format",
    "VK_AMDX_shader_enqueue",
    "VK_AMD_anti_lag",
    "VK_AMD_buffer_marker",
    "VK_AMD_device_coherent_memory",
    "VK_AMD_display_native_hdr",
    "VK_AMD_draw_indirect_count",
    "VK_AMD_extension_134",
    "VK_AMD_extension_140",
    "VK_AMD_extension_143",
    "VK_AMD_extension_17",
    "VK_AMD_extension_18",
    "VK_AMD_extension_183",
    "VK_AMD_extension_187",
    "VK_AMD_extension_20",
    "VK_AMD_extension_229",
    "VK_AMD_extension_231",
    "VK_AMD_extension_232",
    "VK_AMD_extension_234",
    "VK_AMD_extension_314",
    "VK_AMD_extension_316",
    "VK_AMD_extension_318",
    "VK_AMD_extension_319",
    "VK_AMD_extension_32",
    "VK_AMD_extension_320",
    "VK_AMD_extension_33",
    "VK_AMD_extension_35",
    "VK_AMD_extension_44",
    "VK_AMD_extension_46",
    "VK_AMD_extension_470",
    "VK_AMD_extension_472",
    "VK_AMD_extension_473",
    "VK_AMD_extension_474",
    "VK_AMD_extension_475",
    "VK_AMD_extension_476",
    "VK_AMD_extension_478",
    "VK_AMD_extension_649",
    "VK_AMD_extension_650",
    "VK_AMD_extension_651",
    "VK_AMD_extension_652",
    "VK_AMD_extension_653",
    "VK_AMD_gcn_shader",
    "VK_AMD_gpu_shader_half_float",
    "VK_AMD_gpu_shader_int16",
    "VK_AMD_memory_overallocation_behavior",
    "VK_AMD_mixed_attachment_samples",
    "VK_AMD_negative_viewport_height",
    "VK_AMD_pipeline_compiler_control",
    "VK_AMD_rasterization_order",
    "VK_AMD_shader_ballot",
    "VK_AMD_shader_core_properties",
    "VK_AMD_shader_core_properties2",
    "VK_AMD_shader_early_and_late_fragment_tests",
    "VK_AMD_shader_explicit_vertex_parameter",
    "VK_AMD_shader_fragment_mask",
    "VK_AMD_shader_image_load_store_lod",
    "VK_AMD_shader_info",
    "VK_AMD_shader_trinary_minmax",
    "VK_AMD_texture_gather_bias_lod",
    "VK_ANDROID_external_format_resolve",
    "VK_ANDROID_external_memory_android_hardware_buffer",
    "VK_ANDROID_native_buffer",
    "VK_ARM_data_graph",
    "VK_ARM_extension_344",
    "VK_ARM_extension_424",
    "VK_ARM_extension_566",
    "VK_ARM_extension_567",
    "VK_ARM_extension_632",
    "VK_ARM_extension_655",
    "VK_ARM_extension_656",
    "VK_ARM_extension_657",
    "VK_ARM_extension_659",
    "VK_ARM_format_pack",
    "VK_ARM_performance_counters_by_region",
    "VK_ARM_pipeline_opacity_micromap",
    "VK_ARM_rasterization_order_attachment_access",
    "VK_ARM_render_pass_striped",
    "VK_ARM_scheduling_controls",
    "VK_ARM_shader_core_builtins",
    "VK_ARM_shader_core_properties",
    "VK_ARM_tensors",
    "VK_BRCM_extension_264",
    "VK_BRCM_extension_265",
    "VK_COREAVI_extension_442",
    "VK_COREAVI_extension_443",
    "VK_COREAVI_extension_444",
    "VK_COREAVI_extension_445",
    "VK_COREAVI_extension_446",
    "VK_COREAVI_extension_447",
    "VK_EXT_4444_formats",
    "VK_EXT_acquire_drm_display",
    "VK_EXT_acquire_xlib_display",
    "VK_EXT_application_parameters",
    "VK_EXT_astc_decode_mode",
    "VK_EXT_attachment_feedback_loop_dynamic_state",
    "VK_EXT_attachment_feedback_loop_layout",
    "VK_EXT_blend_operation_advanced",
    "VK_EXT_border_color_swizzle",
    "VK_EXT_buffer_device_address",
    "VK_EXT_calibrated_timestamps",
    "VK_EXT_color_write_enable",
    "VK_EXT_conditional_rendering",
    "VK_EXT_conservative_rasterization",
    "VK_EXT_custom_border_color",
    "VK_EXT_custom_resolve",
    "VK_EXT_debug_marker",
    "VK_EXT_debug_report",
    "VK_EXT_debug_utils",
    "VK_EXT_depth_bias_control",
    "VK_EXT_depth_clamp_control",
    "VK_EXT_depth_clamp_zero_one",
    "VK_EXT_depth_clip_control",
    "VK_EXT_depth_clip_enable",
    "VK_EXT_depth_range_unrestricted",
    "VK_EXT_descriptor_buffer",
    "VK_EXT_descriptor_indexing",
    "VK_EXT_device_address_binding_report",
    "VK_EXT_device_fault",
    "VK_EXT_device_generated_commands",
    "VK_EXT_device_memory_report",
    "VK_EXT_direct_mode_display",
    "VK_EXT_directfb_surface",
    "VK_EXT_discard_rectangles",
    "VK_EXT_display_control",
    "VK_EXT_display_surface_counter",
    "VK_EXT_dynamic_rendering_unused_attachments",
    "VK_EXT_extended_dynamic_state",
    "VK_EXT_extended_dynamic_state2",
    "VK_EXT_extended_dynamic_state3",
    "VK_EXT_extension_160",
    "VK_EXT_extension_177",
    "VK_EXT_extension_220",
    "VK_EXT_extension_223",
    "VK_EXT_extension_259",
    "VK_EXT_extension_267",
    "VK_EXT_extension_28",
    "VK_EXT_extension_313",
    "VK_EXT_extension_359",
    "VK_EXT_extension_360",
    "VK_EXT_extension_363",
    "VK_EXT_extension_384",
    "VK_EXT_extension_390",
    "VK_EXT_extension_420",
    "VK_EXT_extension_437",
    "VK_EXT_extension_457",
    "VK_EXT_extension_458",
    "VK_EXT_extension_462",
    "VK_EXT_extension_468",
    "VK_EXT_extension_501",
    "VK_EXT_extension_502",
    "VK_EXT_extension_503",
    "VK_EXT_extension_505",
    "VK_EXT_extension_509",
    "VK_EXT_extension_523",
    "VK_EXT_extension_524",
    "VK_EXT_extension_533",
    "VK_EXT_extension_537",
    "VK_EXT_extension_538",
    "VK_EXT_extension_539",
    "VK_EXT_extension_540",
    "VK_EXT_extension_541",
    "VK_EXT_extension_542",
    "VK_EXT_extension_543",
    "VK_EXT_extension_561",
    "VK_EXT_extension_578",
    "VK_EXT_extension_579",
    "VK_EXT_extension_584",
    "VK_EXT_extension_602",
    "VK_EXT_extension_604",
    "VK_EXT_extension_616",
    "VK_EXT_extension_617",
    "VK_EXT_extension_618",
    "VK_EXT_extension_623",
    "VK_EXT_extension_626",
    "VK_EXT_extension_637",
    "VK_EXT_extension_639",
    "VK_EXT_extension_641",
    "VK_EXT_extension_642",
    "VK_EXT_extension_644",
    "VK_EXT_extension_645",
    "VK_EXT_extension_660",
    "VK_EXT_extension_663",
    "VK_EXT_extension_664",
    "VK_EXT_external_memory_acquire_unmodified",
    "VK_EXT_external_memory_dma_buf",
    "VK_EXT_external_memory_host",
    "VK_EXT_external_memory_metal",
    "VK_EXT_filter_cubic",
    "VK_EXT_fragment_density_map",
    "VK_EXT_fragment_density_map2",
    "VK_EXT_fragment_density_map_offset",
    "VK_EXT_fragment_shader_interlock",
    "VK_EXT_frame_boundary",
    "VK_EXT_full_screen_exclusive",
    "VK_EXT_global_priority",
    "VK_EXT_global_priority_query",
    "VK_EXT_graphics_pipeline_library",
    "VK_EXT_hdr_metadata",
    "VK_EXT_headless_surface",
    "VK_EXT_host_image_copy",
    "VK_EXT_host_query_reset",
    "VK_EXT_image_2d_view_of_3d",
    "VK_EXT_image_compression_control",
    "VK_EXT_image_compression_control_swapchain",
    "VK_EXT_image_drm_format_modifier",
    "VK_EXT_image_robustness",
    "VK_EXT_image_sliced_view_of_3d",
    "VK_EXT_image_view_min_lod",
    "VK_EXT_index_type_uint8",
    "VK_EXT_inline_uniform_block",
    "VK_EXT_layer_settings",
    "VK_EXT_legacy_dithering",
    "VK_EXT_legacy_vertex_attributes",
    "VK_EXT_line_rasterization",
    "VK_EXT_load_store_op_none",
    "VK_EXT_map_memory_placed",
    "VK_EXT_memory_budget",
    "VK_EXT_memory_decompression",
    "VK_EXT_memory_priority",
    "VK_EXT_mesh_shader",
    "VK_EXT_metal_objects",
    "VK_EXT_metal_surface",
    "VK_EXT_multi_draw",
    "VK_EXT_multisampled_render_to_single_sampled",
    "VK_EXT_mutable_descriptor_type",
    "VK_EXT_nested_command_buffer",
    "VK_EXT_non_seamless_cube_map",
    "VK_EXT_opacity_micromap",
    "VK_EXT_pageable_device_local_memory",
    "VK_EXT_pci_bus_info",
    "VK_EXT_physical_device_drm",
    "VK_EXT_pipeline_creation_cache_control",
    "VK_EXT_pipeline_creation_feedback",
    "VK_EXT_pipeline_library_group_handles",
    "VK_EXT_pipeline_properties",
    "VK_EXT_pipeline_protected_access",
    "VK_EXT_pipeline_robustness",
    "VK_EXT_post_depth_coverage",
    "VK_EXT_present_mode_fifo_latest_ready",
    "VK_EXT_present_timing",
    "VK_EXT_primitive_topology_list_restart",
    "VK_EXT_primitives_generated_query",
    "VK_EXT_private_data",
    "VK_EXT_provoking_vertex",
    "VK_EXT_queue_family_foreign",
    "VK_EXT_rasterization_order_attachment_access",
    "VK_EXT_ray_tracing_invocation_reorder",
    "VK_EXT_rgba10x6_formats",
    "VK_EXT_robustness2",
    "VK_EXT_sample_locations",
    "VK_EXT_sampler_filter_minmax",
    "VK_EXT_scalar_block_layout",
    "VK_EXT_separate_stencil_usage",
    "VK_EXT_shader_64bit_indexing",
    "VK_EXT_shader_atomic_float",
    "VK_EXT_shader_atomic_float2",
    "VK_EXT_shader_demote_to_helper_invocation",
    "VK_EXT_shader_float8",
    "VK_EXT_shader_image_atomic_int64",
    "VK_EXT_shader_long_vector",
    "VK_EXT_shader_module_identifier",
    "VK_EXT_shader_object",
    "VK_EXT_shader_replicated_composites",
    "VK_EXT_shader_stencil_export",
    "VK_EXT_shader_subgroup_ballot",
    "VK_EXT_shader_subgroup_vote",
    "VK_EXT_shader_tile_image",
    "VK_EXT_shader_uniform_buffer_unsized_array",
    "VK_EXT_shader_viewport_index_layer",
    "VK_EXT_subgroup_size_control",
    "VK_EXT_subpass_merge_feedback",
    "VK_EXT_surface_maintenance1",
    "VK_EXT_swapchain_colorspace",
    "VK_EXT_swapchain_maintenance1",
    "VK_EXT_texel_buffer_alignment",
    "VK_EXT_texture_compression_astc_3d",
    "VK_EXT_texture_compression_astc_hdr",
    "VK_EXT_tooling_info",
    "VK_EXT_transform_feedback",
    "VK_EXT_validation_cache",
    "VK_EXT_validation_features",
    "VK_EXT_validation_flags",
    "VK_EXT_vertex_attribute_divisor",
    "VK_EXT_vertex_attribute_robustness",
    "VK_EXT_vertex_input_dynamic_state",
    "VK_EXT_ycbcr_2plane_444_formats",
    "VK_EXT_ycbcr_image_arrays",
    "VK_EXT_zero_initialize_device_memory",
    "VK_FB_extension_402",
    "VK_FB_extension_403",
    "VK_FB_extension_404",
    "VK_FUCHSIA_buffer_collection",
    "VK_FUCHSIA_extension_364",
    "VK_FUCHSIA_extension_368",
    "VK_FUCHSIA_external_memory",
    "VK_FUCHSIA_external_semaphore",
    "VK_FUCHSIA_imagepipe_surface",
    "VK_GGP_extension_263",
    "VK_GGP_extension_407",
    "VK_GGP_extension_408",
    "VK_GGP_extension_409",
    "VK_GGP_extension_410",
    "VK_GGP_extension_411",
    "VK_GGP_frame_token",
    "VK_GGP_stream_descriptor_surface",
    "VK_GOOGLE_decorate_string",
    "VK_GOOGLE_display_timing",
    "VK_GOOGLE_extension_194",
    "VK_GOOGLE_extension_195",
    "VK_GOOGLE_extension_196",
    "VK_GOOGLE_extension_217",
    "VK_GOOGLE_extension_386",
    "VK_GOOGLE_extension_455",
    "VK_GOOGLE_extension_49",
    "VK_GOOGLE_extension_666",
    "VK_GOOGLE_hlsl_functionality1",
    "VK_GOOGLE_surfaceless_query",
    "VK_GOOGLE_user_type",
    "VK_HUAWEI_cluster_culling_shader",
    "VK_HUAWEI_extension_406",
    "VK_HUAWEI_extension_415",
    "VK_HUAWEI_extension_577",
    "VK_HUAWEI_extension_590",
    "VK_HUAWEI_extension_667",
    "VK_HUAWEI_extension_686",
    "VK_HUAWEI_hdr_vivid",
    "VK_HUAWEI_invocation_mask",
    "VK_HUAWEI_subpass_shading",
    "VK_IMG_extension_107",
    "VK_IMG_extension_108",
    "VK_IMG_extension_555",
    "VK_IMG_extension_586",
    "VK_IMG_extension_600",
    "VK_IMG_extension_601",
    "VK_IMG_filter_cubic",
    "VK_IMG_format_pvrtc",
    "VK_IMG_relaxed_line_rasterization",
    "VK_INTEL_extension_243",
    "VK_INTEL_performance_query",
    "VK_INTEL_shader_integer_functions2",
    "VK_JUICE_extension_399",
    "VK_JUICE_extension_400",
    "VK_KHR_16bit_storage",
    "VK_KHR_8bit_storage",
    "VK_KHR_acceleration_structure",
    "VK_KHR_android_surface",
    "VK_KHR_bind_memory2",
    "VK_KHR_buffer_device_address",
    "VK_KHR_calibrated_timestamps",
    "VK_KHR_compute_shader_derivatives",
    "VK_KHR_cooperative_matrix",
    "VK_KHR_copy_commands2",
    "VK_KHR_copy_memory_indirect",
    "VK_KHR_create_renderpass2",
    "VK_KHR_dedicated_allocation",
    "VK_KHR_deferred_host_operations",
    "VK_KHR_depth_clamp_zero_one",
    "VK_KHR_depth_stencil_resolve",
    "VK_KHR_descriptor_update_template",
    "VK_KHR_device_group",
    "VK_KHR_device_group_creation",
    "VK_KHR_display",
    "VK_KHR_display_swapchain",
    "VK_KHR_draw_indirect_count",
    "VK_KHR_driver_properties",
    "VK_KHR_dynamic_rendering",
    "VK_KHR_dynamic_rendering_local_read",
    "VK_KHR_extension_119",
    "VK_KHR_extension_136",
    "VK_KHR_extension_221",
    "VK_KHR_extension_280",
    "VK_KHR_extension_297",
    "VK_KHR_extension_299",
    "VK_KHR_extension_325",
    "VK_KHR_extension_335",
    "VK_KHR_extension_350",
    "VK_KHR_extension_358",
    "VK_KHR_extension_380",
    "VK_KHR_extension_381",
    "VK_KHR_extension_532",
    "VK_KHR_extension_558",
    "VK_KHR_extension_562",
    "VK_KHR_extension_574",
    "VK_KHR_extension_596",
    "VK_KHR_extension_598",
    "VK_KHR_extension_599",
    "VK_KHR_extension_607",
    "VK_KHR_extension_608",
    "VK_KHR_extension_624",
    "VK_KHR_extension_625",
    "VK_KHR_extension_647",
    "VK_KHR_extension_648",
    "VK_KHR_extension_658",
    "VK_KHR_extension_661",
    "VK_KHR_extension_669",
    "VK_KHR_external_fence",
    "VK_KHR_external_fence_capabilities",
    "VK_KHR_external_fence_fd",
    "VK_KHR_external_fence_win32",
    "VK_KHR_external_memory",
    "VK_KHR_external_memory_capabilities",
    "VK_KHR_external_memory_fd",
    "VK_KHR_external_memory_win32",
    "VK_KHR_external_semaphore",
    "VK_KHR_external_semaphore_capabilities",
    "VK_KHR_external_semaphore_fd",
    "VK_KHR_external_semaphore_win32",
    "VK_KHR_format_feature_flags2",
    "VK_KHR_fragment_shader_barycentric",
    "VK_KHR_fragment_shading_rate",
    "VK_KHR_get_display_properties2",
    "VK_KHR_get_memory_requirements2",
    "VK_KHR_get_physical_device_properties2",
    "VK_KHR_get_surface_capabilities2",
    "VK_KHR_global_priority",
    "VK_KHR_image_format_list",
    "VK_KHR_imageless_framebuffer",
    "VK_KHR_incremental_present",
    "VK_KHR_index_type_uint8",
    "VK_KHR_line_rasterization",
    "VK_KHR_load_store_op_none",
    "VK_KHR_maintenance1",
    "VK_KHR_maintenance10",
    "VK_KHR_maintenance2",
    "VK_KHR_maintenance3",
    "VK_KHR_maintenance4",
    "VK_KHR_maintenance5",
    "VK_KHR_maintenance6",
    "VK_KHR_maintenance7",
    "VK_KHR_maintenance8",
    "VK_KHR_maintenance9",
    "VK_KHR_map_memory2",
    "VK_KHR_mir_surface",
    "VK_KHR_multiview",
    "VK_KHR_object_refresh",
    "VK_KHR_performance_query",
    "VK_KHR_pipeline_binary",
    "VK_KHR_pipeline_executable_properties",
    "VK_KHR_pipeline_library",
    "VK_KHR_portability_enumeration",
    "VK_KHR_portability_subset",
    "VK_KHR_present_id",
    "VK_KHR_present_id2",
    "VK_KHR_present_mode_fifo_latest_ready",
    "VK_KHR_present_wait",
    "VK_KHR_present_wait2",
    "VK_KHR_push_descriptor",
    "VK_KHR_ray_query",
    "VK_KHR_ray_tracing_maintenance1",
    "VK_KHR_ray_tracing_pipeline",
    "VK_KHR_ray_tracing_position_fetch",
    "VK_KHR_relaxed_block_layout",
    "VK_KHR_robustness2",
    "VK_KHR_sampler_mirror_clamp_to_edge",
    "VK_KHR_sampler_ycbcr_conversion",
    "VK_KHR_separate_depth_stencil_layouts",
    "VK_KHR_shader_atomic_int64",
    "VK_KHR_shader_bfloat16",
    "VK_KHR_shader_clock",
    "VK_KHR_shader_draw_parameters",
    "VK_KHR_shader_expect_assume",
    "VK_KHR_shader_float16_int8",
    "VK_KHR_shader_float_controls",
    "VK_KHR_shader_float_controls2",
    "VK_KHR_shader_fma",
    "VK_KHR_shader_integer_dot_product",
    "VK_KHR_shader_maximal_reconvergence",
    "VK_KHR_shader_non_semantic_info",
    "VK_KHR_shader_quad_control",
    "VK_KHR_shader_relaxed_extended_instruction",
    "VK_KHR_shader_subgroup_extended_types",
    "VK_KHR_shader_subgroup_rotate",
    "VK_KHR_shader_subgroup_uniform_control_flow",
    "VK_KHR_shader_terminate_invocation",
    "VK_KHR_shader_untyped_pointers",
    "VK_KHR_shared_presentable_image",
    "VK_KHR_spirv_1_4",
    "VK_KHR_storage_buffer_storage_class",
    "VK_KHR_surface",
    "VK_KHR_surface_maintenance1",
    "VK_KHR_surface_protected_capabilities",
    "VK_KHR_swapchain",
    "VK_KHR_swapchain_maintenance1",
    "VK_KHR_swapchain_mutable_format",
    "VK_KHR_synchronization2",
    "VK_KHR_timeline_semaphore",
    "VK_KHR_unified_image_layouts",
    "VK_KHR_uniform_buffer_standard_layout",
    "VK_KHR_variable_pointers",
    "VK_KHR_vertex_attribute_divisor",
    "VK_KHR_video_decode_av1",
    "VK_KHR_video_decode_h264",
    "VK_KHR_video_decode_h265",
    "VK_KHR_video_decode_queue",
    "VK_KHR_video_decode_vp9",
    "VK_KHR_video_encode_av1",
    "VK_KHR_video_encode_h264",
    "VK_KHR_video_encode_h265",
    "VK_KHR_video_encode_intra_refresh",
    "VK_KHR_video_encode_quantization_map",
    "VK_KHR_video_encode_queue",
    "VK_KHR_video_maintenance1",
    "VK_KHR_video_maintenance2",
    "VK_KHR_video_queue",
    "VK_KHR_vulkan_memory_model",
    "VK_KHR_wayland_surface",
    "VK_KHR_win32_keyed_mutex",
    "VK_KHR_win32_surface",
    "VK_KHR_workgroup_memory_explicit_layout",
    "VK_KHR_xcb_surface",
    "VK_KHR_xlib_surface",
    "VK_KHR_zero_initialize_workgroup_memory",
    "VK_LUNARG_direct_driver_loading",
    "VK_MESA_extension_244",
    "VK_MESA_extension_385",
    "VK_MESA_extension_510",
    "VK_MESA_extension_518",
    "VK_MESA_image_alignment_control",
    "VK_MSFT_layered_driver",
    "VK_MTK_extension_633",
    "VK_MTK_extension_635",
    "VK_MVK_ios_surface",
    "VK_MVK_macos_surface",
    "VK_MVK_moltenvk",
    "VK_NN_vi_surface",
    "VK_NVX_binary_import",
    "VK_NVX_device_generated_commands",
    "VK_NVX_extension_48",
    "VK_NVX_image_view_handle",
    "VK_NVX_multiview_per_view_attributes",
    "VK_NV_acquire_winrt_display",
    "VK_NV_clip_space_w_scaling",
    "VK_NV_cluster_acceleration_structure",
    "VK_NV_command_buffer_inheritance",
    "VK_NV_compute_occupancy_priority",
    "VK_NV_compute_shader_derivatives",
    "VK_NV_cooperative_matrix",
    "VK_NV_cooperative_matrix2",
    "VK_NV_cooperative_vector",
    "VK_NV_copy_memory_indirect",
    "VK_NV_corner_sampled_image",
    "VK_NV_coverage_reduction_mode",
    "VK_NV_cuda_kernel_launch",
    "VK_NV_dedicated_allocation",
    "VK_NV_dedicated_allocation_image_aliasing",
    "VK_NV_descriptor_pool_overallocation",
    "VK_NV_device_diagnostic_checkpoints",
    "VK_NV_device_diagnostics_config",
    "VK_NV_device_generated_commands",
    "VK_NV_device_generated_commands_compute",
    "VK_NV_displacement_micromap",
    "VK_NV_display_stereo",
    "VK_NV_extended_sparse_address_space",
    "VK_NV_extension_101",
    "VK_NV_extension_104",
    "VK_NV_extension_152",
    "VK_NV_extension_168",
    "VK_NV_extension_292",
    "VK_NV_extension_330",
    "VK_NV_extension_332",
    "VK_NV_extension_351",
    "VK_NV_extension_432",
    "VK_NV_extension_433",
    "VK_NV_extension_494",
    "VK_NV_extension_504",
    "VK_NV_extension_53",
    "VK_NV_extension_549",
    "VK_NV_extension_572",
    "VK_NV_extension_581",
    "VK_NV_extension_592",
    "VK_NV_extension_593",
    "VK_NV_extension_595",
    "VK_NV_extension_611",
    "VK_NV_extension_627",
    "VK_NV_extension_634",
    "VK_NV_extension_640",
    "VK_NV_extension_668",
    "VK_NV_external_compute_queue",
    "VK_NV_external_memory",
    "VK_NV_external_memory_capabilities",
    "VK_NV_external_memory_rdma",
    "VK_NV_external_memory_sci_buf",
    "VK_NV_external_memory_win32",
    "VK_NV_external_sci_sync",
    "VK_NV_external_sci_sync2",
    "VK_NV_fill_rectangle",
    "VK_NV_fragment_coverage_to_color",
    "VK_NV_fragment_shader_barycentric",
    "VK_NV_fragment_shading_rate_enums",
    "VK_NV_framebuffer_mixed_samples",
    "VK_NV_geometry_shader_passthrough",
    "VK_NV_glsl_shader",
    "VK_NV_inherited_viewport_scissor",
    "VK_NV_linear_color_attachment",
    "VK_NV_low_latency",
    "VK_NV_low_latency2",
    "VK_NV_memory_decompression",
    "VK_NV_mesh_shader",
    "VK_NV_optical_flow",
    "VK_NV_partitioned_acceleration_structure",
    "VK_NV_per_stage_descriptor_set",
    "VK_NV_present_barrier",
    "VK_NV_present_metering",
    "VK_NV_private_vendor_info",
    "VK_NV_raw_access_chains",
    "VK_NV_ray_tracing",
    "VK_NV_ray_tracing_invocation_reorder",
    "VK_NV_ray_tracing_linear_swept_spheres",
    "VK_NV_ray_tracing_motion_blur",
    "VK_NV_ray_tracing_validation",
    "VK_NV_representative_fragment_test",
    "VK_NV_sample_mask_override_coverage",
    "VK_NV_scissor_exclusive",
    "VK_NV_shader_atomic_float16_vector",
    "VK_NV_shader_image_footprint",
    "VK_NV_shader_sm_builtins",
    "VK_NV_shader_subgroup_partitioned",
    "VK_NV_shading_rate_image",
    "VK_NV_viewport_array2",
    "VK_NV_viewport_swizzle",
    "VK_NV_win32_keyed_mutex",
    "VK_OHOS_external_memory",
    "VK_OHOS_native_buffer",
    "VK_OHOS_surface",
    "VK_QCOM_data_graph_model",
    "VK_QCOM_extension_173",
    "VK_QCOM_extension_174",
    "VK_QCOM_extension_303",
    "VK_QCOM_extension_304",
    "VK_QCOM_extension_305",
    "VK_QCOM_extension_306",
    "VK_QCOM_extension_307",
    "VK_QCOM_extension_369",
    "VK_QCOM_extension_440",
    "VK_QCOM_extension_536",
    "VK_QCOM_extension_615",
    "VK_QCOM_filter_cubic_clamp",
    "VK_QCOM_filter_cubic_weights",
    "VK_QCOM_fragment_density_map_offset",
    "VK_QCOM_image_processing",
    "VK_QCOM_image_processing2",
    "VK_QCOM_multiview_per_view_render_areas",
    "VK_QCOM_multiview_per_view_viewports",
    "VK_QCOM_render_pass_shader_resolve",
    "VK_QCOM_render_pass_store_ops",
    "VK_QCOM_render_pass_transform",
    "VK_QCOM_rotated_copy_commands",
    "VK_QCOM_tile_memory_heap",
    "VK_QCOM_tile_properties",
    "VK_QCOM_tile_shading",
    "VK_QCOM_ycbcr_degamma",
    "VK_QNX_external_memory_screen_buffer",
    "VK_QNX_screen_surface",
    "VK_RESERVED_do_not_use_146",
    "VK_RESERVED_do_not_use_94",
    "VK_SEC_amigo_profiling",
    "VK_SEC_extension_439",
    "VK_SEC_extension_448",
    "VK_SEC_extension_449",
    "VK_SEC_extension_450",
    "VK_SEC_extension_451",
    "VK_SEC_extension_665",
    "VK_SEC_pipeline_cache_incremental_mode",
    "VK_VALVE_descriptor_set_host_mapping",
    "VK_VALVE_extension_654",
    "VK_VALVE_extension_662",
    "VK_VALVE_fragment_density_map_layered",
    "VK_VALVE_mutable_descriptor_type",
    "VK_VALVE_video_encode_rgb_conversion",
};

constexpr const char* all_dependency_names[] = {
    "VK_AMD_shader_core_properties",
    "VK_ANDROID_external_memory_android_hardware_buffer",
    "VK_ARM_data_graph",
    "VK_ARM_shader_core_builtins",
    "VK_EXT_custom_border_color",
    "VK_EXT_debug_report",
    "VK_EXT_direct_mode_display",
    "VK_EXT_filter_cubic",
    "VK_EXT_fragment_density_map",
    "VK_EXT_image_compression_control",
    "VK_EXT_memory_priority",
    "VK_EXT_opacity_micromap",
    "VK_EXT_shader_atomic_float",
    "VK_EXT_transform_feedback",
    "VK_EXT_vertex_input_dynamic_state",
    "VK_KHR_acceleration_structure",
    "VK_KHR_cooperative_matrix",
    "VK_KHR_device_group_creation",
    "VK_KHR_display",
    "VK_KHR_external_fence",
    "VK_KHR_external_fence_capabilities",
    "VK_KHR_external_memory_fd",
    "VK_KHR_external_memory_win32",
    "VK_KHR_external_semaphore",
    "VK_KHR_external_semaphore_capabilities",
    "VK_KHR_fragment_shading_rate",
    "VK_KHR_get_physical_device_properties2",
    "VK_KHR_maintenance3",
    "VK_KHR_maintenance5",
    "VK_KHR_ray_tracing_pipeline",
    "VK_KHR_surface",
    "VK_KHR_swapchain",
    "VK_KHR_video_decode_queue",
    "VK_KHR_video_encode_queue",
    "VK_KHR_video_queue",
    "VK_NV_device_generated_commands",
    "VK_NV_external_memory",
    "VK_NV_external_memory_capabilities",
    "VK_NV_external_memory_win32",
    "VK_QCOM_image_processing",
};

constexpr extension_requirements all_requirements[] = {
    { // VK_AMDX_dense_geometry_format
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMDX_shader_enqueue
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_anti_lag
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_buffer_marker
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_device_coherent_memory
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_display_native_hdr
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_draw_indirect_count
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_134
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_140
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_143
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_17
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_18
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_183
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_187
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_20
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_229
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_231
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_232
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_234
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_314
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_316
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_318
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_319
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_32
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_320
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_33
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_35
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_44
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_46
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_470
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_472
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_473
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_474
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_475
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_476
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_478
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_649
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_650
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_651
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_652
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_extension_653
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_gcn_shader
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_gpu_shader_half_float
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_gpu_shader_int16
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_memory_overallocation_behavior
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_mixed_attachment_samples
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_negative_viewport_height
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_pipeline_compiler_control
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_rasterization_order
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_shader_ballot
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_shader_core_properties
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_shader_core_properties2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 0, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_shader_early_and_late_fragment_tests
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_shader_explicit_vertex_parameter
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_shader_fragment_mask
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_shader_image_load_store_lod
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_shader_info
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_shader_trinary_minmax
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_AMD_texture_gather_bias_lod
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ANDROID_external_format_resolve
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 1, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ANDROID_external_memory_android_hardware_buffer
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ANDROID_native_buffer
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_data_graph
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_extension_344
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_extension_424
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_extension_566
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_extension_567
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_extension_632
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_extension_655
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_extension_656
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_extension_657
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_extension_659
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_format_pack
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_performance_counters_by_region
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_pipeline_opacity_micromap
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 11, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_rasterization_order_attachment_access
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_render_pass_striped
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_scheduling_controls
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 3, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_shader_core_builtins
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_shader_core_properties
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_ARM_tensors
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_BRCM_extension_264
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_BRCM_extension_265
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_COREAVI_extension_442
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_COREAVI_extension_443
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_COREAVI_extension_444
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_COREAVI_extension_445
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_COREAVI_extension_446
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_COREAVI_extension_447
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_4444_formats
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_acquire_drm_display
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 6, 3},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_acquire_xlib_display
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 6, 3},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_application_parameters
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_astc_decode_mode
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_attachment_feedback_loop_dynamic_state
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_attachment_feedback_loop_layout
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_blend_operation_advanced
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_border_color_swizzle
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 4, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_buffer_device_address
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_calibrated_timestamps
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_color_write_enable
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_conditional_rendering
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_conservative_rasterization
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_custom_border_color
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_custom_resolve
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_debug_marker
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 5, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_debug_report
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_debug_utils
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_depth_bias_control
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_depth_clamp_control
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_depth_clamp_zero_one
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_depth_clip_control
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_depth_clip_enable
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_depth_range_unrestricted
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_descriptor_buffer
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_descriptor_indexing
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_device_address_binding_report
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_device_fault
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_device_generated_commands
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_device_memory_report
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_direct_mode_display
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 18, 2},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_directfb_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_discard_rectangles
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_display_control
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_display_surface_counter
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 18, 2},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_dynamic_rendering_unused_attachments
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extended_dynamic_state
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extended_dynamic_state2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extended_dynamic_state3
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_160
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_177
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_220
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_223
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_259
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_267
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_28
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_313
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_359
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_360
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_363
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_384
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_extension_390
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_420
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_437
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_457
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_458
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_462
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_468
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_501
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_502
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_503
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_505
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_509
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_523
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_524
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_533
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_537
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_538
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_539
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_540
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_541
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_542
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_543
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_561
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_578
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_579
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_584
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_602
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_604
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_616
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_617
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_618
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_623
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_626
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_637
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_639
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_641
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_642
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_644
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_645
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_660
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_663
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_extension_664
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_external_memory_acquire_unmodified
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_external_memory_dma_buf
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 21, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_external_memory_host
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_external_memory_metal
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_filter_cubic
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_fragment_density_map
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_fragment_density_map2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 8, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_fragment_density_map_offset
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_fragment_shader_interlock
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_frame_boundary
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_full_screen_exclusive
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_global_priority
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_global_priority_query
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_graphics_pipeline_library
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_hdr_metadata
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 2},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_headless_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_host_image_copy
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_host_query_reset
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_image_2d_view_of_3d
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_image_compression_control
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_image_compression_control_swapchain
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 9, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_image_drm_format_modifier
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_image_robustness
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_image_sliced_view_of_3d
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_image_view_min_lod
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_index_type_uint8
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_inline_uniform_block
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_layer_settings
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_legacy_dithering
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_legacy_vertex_attributes
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 14, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_line_rasterization
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_load_store_op_none
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_map_memory_placed
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_memory_budget
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_memory_decompression
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_memory_priority
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_mesh_shader
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_metal_objects
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_metal_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_multi_draw
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_multisampled_render_to_single_sampled
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_mutable_descriptor_type
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_nested_command_buffer
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_non_seamless_cube_map
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_opacity_micromap
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_pageable_device_local_memory
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 10, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_pci_bus_info
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_physical_device_drm
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_pipeline_creation_cache_control
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_pipeline_creation_feedback
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_pipeline_library_group_handles
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_pipeline_properties
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_pipeline_protected_access
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_pipeline_robustness
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_post_depth_coverage
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_present_mode_fifo_latest_ready
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 2},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_present_timing
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_primitive_topology_list_restart
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_primitives_generated_query
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 13, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_private_data
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_provoking_vertex
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_queue_family_foreign
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_rasterization_order_attachment_access
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_ray_tracing_invocation_reorder
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 29, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_rgba10x6_formats
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_robustness2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_sample_locations
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_sampler_filter_minmax
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_scalar_block_layout
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_separate_stencil_usage
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_64bit_indexing
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_atomic_float
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_atomic_float2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 12, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_demote_to_helper_invocation
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_float8
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_image_atomic_int64
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_long_vector
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_module_identifier
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_object
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_replicated_composites
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_stencil_export
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_subgroup_ballot
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_subgroup_vote
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_tile_image
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_uniform_buffer_unsized_array
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_shader_viewport_index_layer
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_subgroup_size_control
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_subpass_merge_feedback
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_surface_maintenance1
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_swapchain_colorspace
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_swapchain_maintenance1
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_texel_buffer_alignment
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_texture_compression_astc_3d
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_texture_compression_astc_hdr
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_tooling_info
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_transform_feedback
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_validation_cache
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_validation_features
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_validation_flags
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_EXT_vertex_attribute_divisor
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_vertex_attribute_robustness
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_vertex_input_dynamic_state
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_ycbcr_2plane_444_formats
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_ycbcr_image_arrays
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_EXT_zero_initialize_device_memory
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_FB_extension_402
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_FB_extension_403
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_FB_extension_404
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_FUCHSIA_buffer_collection
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_FUCHSIA_extension_364
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_FUCHSIA_extension_368
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_FUCHSIA_external_memory
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_FUCHSIA_external_semaphore
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_FUCHSIA_imagepipe_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_GGP_extension_263
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GGP_extension_407
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GGP_extension_408
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GGP_extension_409
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GGP_extension_410
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GGP_extension_411
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GGP_frame_token
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GGP_stream_descriptor_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_GOOGLE_decorate_string
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GOOGLE_display_timing
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 2},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GOOGLE_extension_194
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GOOGLE_extension_195
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GOOGLE_extension_196
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GOOGLE_extension_217
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GOOGLE_extension_386
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GOOGLE_extension_455
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GOOGLE_extension_49
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GOOGLE_extension_666
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GOOGLE_hlsl_functionality1
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_GOOGLE_surfaceless_query
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_GOOGLE_user_type
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_HUAWEI_cluster_culling_shader
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_HUAWEI_extension_406
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_HUAWEI_extension_415
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_HUAWEI_extension_577
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_HUAWEI_extension_590
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_HUAWEI_extension_667
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_HUAWEI_extension_686
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_HUAWEI_hdr_vivid
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_HUAWEI_invocation_mask
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_HUAWEI_subpass_shading
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_IMG_extension_107
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_IMG_extension_108
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_IMG_extension_555
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_IMG_extension_586
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_IMG_extension_600
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_IMG_extension_601
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_IMG_filter_cubic
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_IMG_format_pvrtc
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_IMG_relaxed_line_rasterization
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_INTEL_extension_243
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_INTEL_performance_query
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_INTEL_shader_integer_functions2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_JUICE_extension_399
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_JUICE_extension_400
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_16bit_storage
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_8bit_storage
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_acceleration_structure
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_android_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_bind_memory2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_buffer_device_address
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_calibrated_timestamps
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_compute_shader_derivatives
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_cooperative_matrix
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_copy_commands2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_copy_memory_indirect
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_create_renderpass2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_dedicated_allocation
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_deferred_host_operations
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_depth_clamp_zero_one
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_depth_stencil_resolve
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_descriptor_update_template
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_device_group
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 17, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_device_group_creation
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_display
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_display_swapchain
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_draw_indirect_count
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_driver_properties
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_dynamic_rendering
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_dynamic_rendering_local_read
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_119
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_136
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 28, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_221
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_280
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_297
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_299
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_325
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_335
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_350
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_358
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_380
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_381
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_532
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_558
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_562
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_574
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_596
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_598
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_599
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_607
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_608
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_624
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_625
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_647
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_648
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_658
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_661
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_extension_669
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_external_fence
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 20, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_external_fence_capabilities
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_external_fence_fd
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_external_fence_win32
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 19, 2},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_external_memory
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_external_memory_capabilities
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_external_memory_fd
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_external_memory_win32
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_external_semaphore
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 24, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_external_semaphore_capabilities
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_external_semaphore_fd
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_external_semaphore_win32
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 23, 2},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_format_feature_flags2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_fragment_shader_barycentric
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_fragment_shading_rate
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_get_display_properties2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 18, 2},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_get_memory_requirements2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_get_physical_device_properties2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_get_surface_capabilities2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_global_priority
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_image_format_list
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_imageless_framebuffer
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_incremental_present
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 2},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_index_type_uint8
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_line_rasterization
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_load_store_op_none
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_maintenance1
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_maintenance10
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_maintenance2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_maintenance3
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_maintenance4
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_maintenance5
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_maintenance6
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_maintenance7
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_maintenance8
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_maintenance9
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_map_memory2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_mir_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_multiview
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_object_refresh
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_performance_query
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_pipeline_binary
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_pipeline_executable_properties
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_pipeline_library
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_portability_enumeration
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_portability_subset
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_present_id
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_present_id2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_present_mode_fifo_latest_ready
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 2},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_present_wait
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_present_wait2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_push_descriptor
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_ray_query
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_ray_tracing_maintenance1
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 15, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_ray_tracing_pipeline
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_ray_tracing_position_fetch
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 15, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_relaxed_block_layout
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_robustness2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_sampler_mirror_clamp_to_edge
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_sampler_ycbcr_conversion
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_separate_depth_stencil_layouts
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_atomic_int64
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_bfloat16
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_clock
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_draw_parameters
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_expect_assume
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_float16_int8
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_float_controls
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_float_controls2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_fma
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_integer_dot_product
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_maximal_reconvergence
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_non_semantic_info
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_quad_control
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_relaxed_extended_instruction
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_subgroup_extended_types
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_subgroup_rotate
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_subgroup_uniform_control_flow
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_terminate_invocation
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shader_untyped_pointers
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 26, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_shared_presentable_image
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_spirv_1_4
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_storage_buffer_storage_class
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_surface_maintenance1
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_surface_protected_capabilities
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_swapchain
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_swapchain_maintenance1
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_swapchain_mutable_format
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_synchronization2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_timeline_semaphore
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_unified_image_layouts
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_uniform_buffer_standard_layout
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_variable_pointers
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_vertex_attribute_divisor
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_decode_av1
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 32, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_decode_h264
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 32, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_decode_h265
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 32, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_decode_queue
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_decode_vp9
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 32, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_encode_av1
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 33, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_encode_h264
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 33, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_encode_h265
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 33, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_encode_intra_refresh
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 33, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_encode_quantization_map
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_encode_queue
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_maintenance1
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 34, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_maintenance2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 34, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_video_queue
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_vulkan_memory_model
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_wayland_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_win32_keyed_mutex
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 22, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_win32_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_workgroup_memory_explicit_layout
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_KHR_xcb_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_xlib_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_KHR_zero_initialize_workgroup_memory
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_LUNARG_direct_driver_loading
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_MESA_extension_244
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_MESA_extension_385
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_MESA_extension_510
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_MESA_extension_518
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_MESA_image_alignment_control
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_MSFT_layered_driver
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_MTK_extension_633
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_MTK_extension_635
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_MVK_ios_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_MVK_macos_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_MVK_moltenvk
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_NN_vi_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_NVX_binary_import
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NVX_device_generated_commands
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NVX_extension_48
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NVX_image_view_handle
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NVX_multiview_per_view_attributes
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_acquire_winrt_display
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 6, 3},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_clip_space_w_scaling
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_cluster_acceleration_structure
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 15, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_command_buffer_inheritance
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_compute_occupancy_priority
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_compute_shader_derivatives
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_cooperative_matrix
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_cooperative_matrix2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 16, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_cooperative_vector
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_copy_memory_indirect
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_corner_sampled_image
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_coverage_reduction_mode
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_cuda_kernel_launch
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_dedicated_allocation
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_dedicated_allocation_image_aliasing
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_descriptor_pool_overallocation
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_device_diagnostic_checkpoints
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_device_diagnostics_config
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_device_generated_commands
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_device_generated_commands_compute
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 35, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_displacement_micromap
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 11, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_display_stereo
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_NV_extended_sparse_address_space
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_101
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_104
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_152
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_168
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_292
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_330
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_332
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_351
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_432
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_433
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_494
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_504
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_NV_extension_53
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_549
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_572
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_581
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_592
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_593
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_595
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_611
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_627
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_634
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_640
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_extension_668
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_external_compute_queue
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_external_memory
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 37, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_external_memory_capabilities
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_NV_external_memory_rdma
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_external_memory_sci_buf
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_external_memory_win32
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 36, 2},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_external_sci_sync
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_external_sci_sync2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_fill_rectangle
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_fragment_coverage_to_color
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_fragment_shader_barycentric
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_fragment_shading_rate_enums
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 25, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_framebuffer_mixed_samples
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_geometry_shader_passthrough
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_glsl_shader
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_inherited_viewport_scissor
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_linear_color_attachment
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_low_latency
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_low_latency2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_memory_decompression
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_mesh_shader
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_optical_flow
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_partitioned_acceleration_structure
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 15, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_per_stage_descriptor_set
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_present_barrier
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_present_metering
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_private_vendor_info
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_raw_access_chains
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_ray_tracing
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_ray_tracing_invocation_reorder
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 29, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_ray_tracing_linear_swept_spheres
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 29, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_ray_tracing_motion_blur
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 29, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_ray_tracing_validation
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_representative_fragment_test
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_sample_mask_override_coverage
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_scissor_exclusive
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_shader_atomic_float16_vector
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_shader_image_footprint
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_shader_sm_builtins
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_shader_subgroup_partitioned
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_shading_rate_image
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_viewport_array2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_viewport_swizzle
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_NV_win32_keyed_mutex
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 36, 3},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_OHOS_external_memory
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_OHOS_native_buffer
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_OHOS_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_QCOM_data_graph_model
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 2, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_extension_173
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_extension_174
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_extension_303
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_extension_304
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_extension_305
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_extension_306
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_extension_307
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_extension_369
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_extension_440
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_extension_536
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_extension_615
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_filter_cubic_clamp
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_filter_cubic_weights
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 7, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_fragment_density_map_offset
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_image_processing
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_image_processing2
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 39, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_multiview_per_view_render_areas
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_multiview_per_view_viewports
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_render_pass_shader_resolve
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_render_pass_store_ops
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_render_pass_transform
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_rotated_copy_commands
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_tile_memory_heap
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_tile_properties
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_tile_shading
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QCOM_ycbcr_degamma
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QNX_external_memory_screen_buffer
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_QNX_screen_surface
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 30, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::instance
    },
    { // VK_RESERVED_do_not_use_146
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_RESERVED_do_not_use_94
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_SEC_amigo_profiling
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_SEC_extension_439
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_SEC_extension_448
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_SEC_extension_449
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_SEC_extension_450
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_SEC_extension_451
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_SEC_extension_665
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_SEC_pipeline_cache_incremental_mode
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_VALVE_descriptor_set_host_mapping
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_VALVE_extension_654
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_VALVE_extension_662
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_VALVE_fragment_density_map_layered
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_VALVE_mutable_descriptor_type
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span{all_dependency_names + 27, 1},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
    { // VK_VALVE_video_encode_rgb_conversion
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{}),
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    },
};
} // anonymous namespace

constexpr extension_requirements get_extension_requirements(const char * extension_name) {
    for (size_t i = 0; i < sizeof(all_extension_names) / sizeof(all_extension_names[0]); ++i) {
        if (all_extension_names[i] == nullptr) continue;
        // compare C strings
        const char* p1 = extension_name;
        const char* p2 = all_extension_names[i];
        while (*p1 && *p2 && *p1 == *p2) {
            ++p1;
            ++p2;
        }
        if (*p1 == '\0' && *p2 == '\0') {
            return all_requirements[i];
        }
    }
    // Unknown extension: return empty requirements
    return extension_requirements{
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    };
}
