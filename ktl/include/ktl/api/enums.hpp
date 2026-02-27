#ifndef KTL_ENUMS_HPP
#define KTL_ENUMS_HPP

#include <cstdint>

namespace ktl::api
{
    enum class image_layout
        : std::uint32_t
    {
        v_undefined                        = 0,
        v_general                          = 1,
        v_color_attachment_optimal         = 2,
        v_depth_stencil_attachment_optimal = 3,
        v_depth_stencil_read_only_optimal  = 4,
        v_shader_read_only_optimal         = 5,
        v_transfer_src_optimal             = 6,
        v_transfer_dst_optimal             = 7,
        v_preinitialized                   = 8
    };

    enum class attachment_load_op
        : std::uint32_t
    {
        v_load      = 0,
        v_clear     = 1,
        v_dont_care = 2
    };

    enum class attachment_store_op
        : std::uint32_t
    {
        v_store     = 0,
        v_dont_care = 1
    };

    enum class image_type
        : std::uint32_t
    {
        v_1d = 0,
        v_2d = 1,
        v_3d = 2
    };

    enum class image_tiling
        : std::uint32_t
    {
        v_optimal = 0,
        v_linear  = 1
    };

    enum class image_view_type
        : std::uint32_t
    {
        v_1d         = 0,
        v_2d         = 1,
        v_3d         = 2,
        v_cube       = 3,
        v_1d_array   = 4,
        v_2d_array   = 5,
        v_cube_array = 6
    };

    enum class command_buffer_level
        : std::uint32_t
    {
        v_primary   = 0,
        v_secondary = 1
    };

    enum class component_swizzle
        : std::uint32_t
    {
        v_identity = 0,
        v_zero     = 1,
        v_one      = 2,
        v_r        = 3,
        v_g        = 4,
        v_b        = 5,
        v_a        = 6
    };

    enum class descriptor_type
        : std::uint32_t
    {
        v_sampler                = 0,
        v_combined_image_sampler = 1,
        v_sampled_image          = 2,
        v_storage_image          = 3,
        v_uniform_texel_buffer   = 4,
        v_storage_texel_buffer   = 5,
        v_uniform_buffer         = 6,
        v_storage_buffer         = 7,
        v_uniform_buffer_dynamic = 8,
        v_storage_buffer_dynamic = 9,
        v_input_attachment       = 10
    };

    enum class query_type
        : std::uint32_t
    {
        v_occlusion           = 0,
        v_pipeline_statistics = 1,
        v_timestamp           = 2
    };

    enum class border_color
        : std::uint32_t
    {
        v_float_transparent_black = 0,
        v_int_transparent_black   = 1,
        v_float_opaque_black      = 2,
        v_int_opaque_black        = 3,
        v_float_opaque_white      = 4,
        v_int_opaque_white        = 5
    };

    enum class pipeline_bind_point
        : std::uint32_t
    {
        v_graphics = 0,
        v_compute  = 1
    };

    enum class pipeline_cache_header_version
        : std::uint32_t
    {
        v_one = 1
    };

    enum class pipeline_cache_create_flag_bits
        : std::uint32_t
    {
    };

    enum class primitive_topology
        : std::uint32_t
    {
        v_point_list                    = 0,
        v_line_list                     = 1,
        v_line_strip                    = 2,
        v_triangle_list                 = 3,
        v_triangle_strip                = 4,
        v_triangle_fan                  = 5,
        v_line_list_with_adjacency      = 6,
        v_line_strip_with_adjacency     = 7,
        v_triangle_list_with_adjacency  = 8,
        v_triangle_strip_with_adjacency = 9,
        v_patch_list                    = 10
    };

    enum class sharing_mode
        : std::uint32_t
    {
        v_exclusive  = 0,
        v_concurrent = 1
    };

    enum class index_type
        : std::uint32_t
    {
        v_uint16 = 0,
        v_uint32 = 1
    };

    enum class filter
        : std::uint32_t
    {
        v_nearest = 0,
        v_linear  = 1
    };

    enum class sampler_mipmap_mode
        : std::uint32_t
    {
        v_nearest = 0,
        v_linear  = 1
    };

    enum class sampler_address_mode
        : std::uint32_t
    {
        v_repeat          = 0,
        v_mirrored_repeat = 1,
        v_clamp_to_edge   = 2,
        v_clamp_to_border = 3
    };

    enum class compare_op
        : std::uint32_t
    {
        v_never            = 0,
        v_less             = 1,
        v_equal            = 2,
        v_less_or_equal    = 3,
        v_greater          = 4,
        v_not_equal        = 5,
        v_greater_or_equal = 6,
        v_always           = 7
    };

    enum class polygon_mode
        : std::uint32_t
    {
        v_fill  = 0,
        v_line  = 1,
        v_point = 2
    };

    enum class front_face
        : std::uint32_t
    {
        v_counter_clockwise = 0,
        v_clockwise         = 1
    };

    enum class blend_factor
        : std::uint32_t
    {
        v_zero                     = 0,
        v_one                      = 1,
        v_src_color                = 2,
        v_one_minus_src_color      = 3,
        v_dst_color                = 4,
        v_one_minus_dst_color      = 5,
        v_src_alpha                = 6,
        v_one_minus_src_alpha      = 7,
        v_dst_alpha                = 8,
        v_one_minus_dst_alpha      = 9,
        v_constant_color           = 10,
        v_one_minus_constant_color = 11,
        v_constant_alpha           = 12,
        v_one_minus_constant_alpha = 13,
        v_src_alpha_saturate       = 14,
        v_src1_color               = 15,
        v_one_minus_src1_color     = 16,
        v_src1_alpha               = 17,
        v_one_minus_src1_alpha     = 18
    };

    enum class blend_op
        : std::uint32_t
    {
        v_add              = 0,
        v_subtract         = 1,
        v_reverse_subtract = 2,
        v_min              = 3,
        v_max              = 4
    };

    enum class stencil_op
        : std::uint32_t
    {
        v_keep                = 0,
        v_zero                = 1,
        v_replace             = 2,
        v_increment_and_clamp = 3,
        v_decrement_and_clamp = 4,
        v_invert              = 5,
        v_increment_and_wrap  = 6,
        v_decrement_and_wrap  = 7
    };

    enum class logic_op
        : std::uint32_t
    {
        v_clear         = 0,
        v_and           = 1,
        v_and_reverse   = 2,
        v_copy          = 3,
        v_and_inverted  = 4,
        v_no_op         = 5,
        v_xor           = 6,
        v_or            = 7,
        v_nor           = 8,
        v_equivalent    = 9,
        v_invert        = 10,
        v_or_reverse    = 11,
        v_copy_inverted = 12,
        v_or_inverted   = 13,
        v_nand          = 14,
        v_set           = 15
    };

    enum class internal_allocation_type
        : std::uint32_t
    {
        v_executable = 0
    };

    enum class system_allocation_scope
        : std::uint32_t
    {
        v_command  = 0,
        v_object   = 1,
        v_cache    = 2,
        v_device   = 3,
        v_instance = 4
    };

    enum class physical_device_type
        : std::uint32_t
    {
        v_other          = 0,
        v_integrated_gpu = 1,
        v_discrete_gpu   = 2,
        v_virtual_gpu    = 3,
        v_cpu            = 4
    };

    enum class vertex_input_rate
        : std::uint32_t
    {
        v_vertex   = 0,
        v_instance = 1
    };

    enum class format
        : std::uint32_t
    {
        v_undefined                  = 0,
        v_r4g4_unorm_pack8           = 1,
        v_r4g4b4a4_unorm_pack16      = 2,
        v_b4g4r4a4_unorm_pack16      = 3,
        v_r5g6b5_unorm_pack16        = 4,
        v_b5g6r5_unorm_pack16        = 5,
        v_r5g5b5a1_unorm_pack16      = 6,
        v_b5g5r5a1_unorm_pack16      = 7,
        v_a1r5g5b5_unorm_pack16      = 8,
        v_r8_unorm                   = 9,
        v_r8_snorm                   = 10,
        v_r8_uscaled                 = 11,
        v_r8_sscaled                 = 12,
        v_r8_uint                    = 13,
        v_r8_sint                    = 14,
        v_r8_srgb                    = 15,
        v_r8g8_unorm                 = 16,
        v_r8g8_snorm                 = 17,
        v_r8g8_uscaled               = 18,
        v_r8g8_sscaled               = 19,
        v_r8g8_uint                  = 20,
        v_r8g8_sint                  = 21,
        v_r8g8_srgb                  = 22,
        v_r8g8b8_unorm               = 23,
        v_r8g8b8_snorm               = 24,
        v_r8g8b8_uscaled             = 25,
        v_r8g8b8_sscaled             = 26,
        v_r8g8b8_uint                = 27,
        v_r8g8b8_sint                = 28,
        v_r8g8b8_srgb                = 29,
        v_b8g8r8_unorm               = 30,
        v_b8g8r8_snorm               = 31,
        v_b8g8r8_uscaled             = 32,
        v_b8g8r8_sscaled             = 33,
        v_b8g8r8_uint                = 34,
        v_b8g8r8_sint                = 35,
        v_b8g8r8_srgb                = 36,
        v_r8g8b8a8_unorm             = 37,
        v_r8g8b8a8_snorm             = 38,
        v_r8g8b8a8_uscaled           = 39,
        v_r8g8b8a8_sscaled           = 40,
        v_r8g8b8a8_uint              = 41,
        v_r8g8b8a8_sint              = 42,
        v_r8g8b8a8_srgb              = 43,
        v_b8g8r8a8_unorm             = 44,
        v_b8g8r8a8_snorm             = 45,
        v_b8g8r8a8_uscaled           = 46,
        v_b8g8r8a8_sscaled           = 47,
        v_b8g8r8a8_uint              = 48,
        v_b8g8r8a8_sint              = 49,
        v_b8g8r8a8_srgb              = 50,
        v_a8b8g8r8_unorm_pack32      = 51,
        v_a8b8g8r8_snorm_pack32      = 52,
        v_a8b8g8r8_uscaled_pack32    = 53,
        v_a8b8g8r8_sscaled_pack32    = 54,
        v_a8b8g8r8_uint_pack32       = 55,
        v_a8b8g8r8_sint_pack32       = 56,
        v_a8b8g8r8_srgb_pack32       = 57,
        v_a2r10g10b10_unorm_pack32   = 58,
        v_a2r10g10b10_snorm_pack32   = 59,
        v_a2r10g10b10_uscaled_pack32 = 60,
        v_a2r10g10b10_sscaled_pack32 = 61,
        v_a2r10g10b10_uint_pack32    = 62,
        v_a2r10g10b10_sint_pack32    = 63,
        v_a2b10g10r10_unorm_pack32   = 64,
        v_a2b10g10r10_snorm_pack32   = 65,
        v_a2b10g10r10_uscaled_pack32 = 66,
        v_a2b10g10r10_sscaled_pack32 = 67,
        v_a2b10g10r10_uint_pack32    = 68,
        v_a2b10g10r10_sint_pack32    = 69,
        v_r16_unorm                  = 70,
        v_r16_snorm                  = 71,
        v_r16_uscaled                = 72,
        v_r16_sscaled                = 73,
        v_r16_uint                   = 74,
        v_r16_sint                   = 75,
        v_r16_sfloat                 = 76,
        v_r16g16_unorm               = 77,
        v_r16g16_snorm               = 78,
        v_r16g16_uscaled             = 79,
        v_r16g16_sscaled             = 80,
        v_r16g16_uint                = 81,
        v_r16g16_sint                = 82,
        v_r16g16_sfloat              = 83,
        v_r16g16b16_unorm            = 84,
        v_r16g16b16_snorm            = 85,
        v_r16g16b16_uscaled          = 86,
        v_r16g16b16_sscaled          = 87,
        v_r16g16b16_uint             = 88,
        v_r16g16b16_sint             = 89,
        v_r16g16b16_sfloat           = 90,
        v_r16g16b16a16_unorm         = 91,
        v_r16g16b16a16_snorm         = 92,
        v_r16g16b16a16_uscaled       = 93,
        v_r16g16b16a16_sscaled       = 94,
        v_r16g16b16a16_uint          = 95,
        v_r16g16b16a16_sint          = 96,
        v_r16g16b16a16_sfloat        = 97,
        v_r32_uint                   = 98,
        v_r32_sint                   = 99,
        v_r32_sfloat                 = 100,
        v_r32g32_uint                = 101,
        v_r32g32_sint                = 102,
        v_r32g32_sfloat              = 103,
        v_r32g32b32_uint             = 104,
        v_r32g32b32_sint             = 105,
        v_r32g32b32_sfloat           = 106,
        v_r32g32b32a32_uint          = 107,
        v_r32g32b32a32_sint          = 108,
        v_r32g32b32a32_sfloat        = 109,
        v_r64_uint                   = 110,
        v_r64_sint                   = 111,
        v_r64_sfloat                 = 112,
        v_r64g64_uint                = 113,
        v_r64g64_sint                = 114,
        v_r64g64_sfloat              = 115,
        v_r64g64b64_uint             = 116,
        v_r64g64b64_sint             = 117,
        v_r64g64b64_sfloat           = 118,
        v_r64g64b64a64_uint          = 119,
        v_r64g64b64a64_sint          = 120,
        v_r64g64b64a64_sfloat        = 121,
        v_b10g11r11_ufloat_pack32    = 122,
        v_e5b9g9r9_ufloat_pack32     = 123,
        v_d16_unorm                  = 124,
        v_x8_d24_unorm_pack32        = 125,
        v_d32_sfloat                 = 126,
        v_s8_uint                    = 127,
        v_d16_unorm_s8_uint          = 128,
        v_d24_unorm_s8_uint          = 129,
        v_d32_sfloat_s8_uint         = 130,
        v_bc1_rgb_unorm_block        = 131,
        v_bc1_rgb_srgb_block         = 132,
        v_bc1_rgba_unorm_block       = 133,
        v_bc1_rgba_srgb_block        = 134,
        v_bc2_unorm_block            = 135,
        v_bc2_srgb_block             = 136,
        v_bc3_unorm_block            = 137,
        v_bc3_srgb_block             = 138,
        v_bc4_unorm_block            = 139,
        v_bc4_snorm_block            = 140,
        v_bc5_unorm_block            = 141,
        v_bc5_snorm_block            = 142,
        v_bc6h_ufloat_block          = 143,
        v_bc6h_sfloat_block          = 144,
        v_bc7_unorm_block            = 145,
        v_bc7_srgb_block             = 146,
        v_etc2_r8g8b8_unorm_block    = 147,
        v_etc2_r8g8b8_srgb_block     = 148,
        v_etc2_r8g8b8a1_unorm_block  = 149,
        v_etc2_r8g8b8a1_srgb_block   = 150,
        v_etc2_r8g8b8a8_unorm_block  = 151,
        v_etc2_r8g8b8a8_srgb_block   = 152,
        v_eac_r11_unorm_block        = 153,
        v_eac_r11_snorm_block        = 154,
        v_eac_r11g11_unorm_block     = 155,
        v_eac_r11g11_snorm_block     = 156,
        v_astc_4x4_unorm_block       = 157,
        v_astc_4x4_srgb_block        = 158,
        v_astc_5x4_unorm_block       = 159,
        v_astc_5x4_srgb_block        = 160,
        v_astc_5x5_unorm_block       = 161,
        v_astc_5x5_srgb_block        = 162,
        v_astc_6x5_unorm_block       = 163,
        v_astc_6x5_srgb_block        = 164,
        v_astc_6x6_unorm_block       = 165,
        v_astc_6x6_srgb_block        = 166,
        v_astc_8x5_unorm_block       = 167,
        v_astc_8x5_srgb_block        = 168,
        v_astc_8x6_unorm_block       = 169,
        v_astc_8x6_srgb_block        = 170,
        v_astc_8x8_unorm_block       = 171,
        v_astc_8x8_srgb_block        = 172,
        v_astc_10x5_unorm_block      = 173,
        v_astc_10x5_srgb_block       = 174,
        v_astc_10x6_unorm_block      = 175,
        v_astc_10x6_srgb_block       = 176,
        v_astc_10x8_unorm_block      = 177,
        v_astc_10x8_srgb_block       = 178,
        v_astc_10x10_unorm_block     = 179,
        v_astc_10x10_srgb_block      = 180,
        v_astc_12x10_unorm_block     = 181,
        v_astc_12x10_srgb_block      = 182,
        v_astc_12x12_unorm_block     = 183,
        v_astc_12x12_srgb_block      = 184
    };

    enum class structure_type
        : std::uint32_t
    {
        v_application_info                          = 0,
        v_instance_create_info                      = 1,
        v_device_queue_create_info                  = 2,
        v_device_create_info                        = 3,
        v_submit_info                               = 4,
        v_memory_allocate_info                      = 5,
        v_mapped_memory_range                       = 6,
        v_bind_sparse_info                          = 7,
        v_fence_create_info                         = 8,
        v_semaphore_create_info                     = 9,
        v_event_create_info                         = 10,
        v_query_pool_create_info                    = 11,
        v_buffer_create_info                        = 12,
        v_buffer_view_create_info                   = 13,
        v_image_create_info                         = 14,
        v_image_view_create_info                    = 15,
        v_shader_module_create_info                 = 16,
        v_pipeline_cache_create_info                = 17,
        v_pipeline_shader_stage_create_info         = 18,
        v_pipeline_vertex_input_state_create_info   = 19,
        v_pipeline_input_assembly_state_create_info = 20,
        v_pipeline_tessellation_state_create_info   = 21,
        v_pipeline_viewport_state_create_info       = 22,
        v_pipeline_rasterization_state_create_info  = 23,
        v_pipeline_multisample_state_create_info    = 24,
        v_pipeline_depth_stencil_state_create_info  = 25,
        v_pipeline_color_blend_state_create_info    = 26,
        v_pipeline_dynamic_state_create_info        = 27,
        v_graphics_pipeline_create_info             = 28,
        v_compute_pipeline_create_info              = 29,
        v_pipeline_layout_create_info               = 30,
        v_sampler_create_info                       = 31,
        v_descriptor_set_layout_create_info         = 32,
        v_descriptor_pool_create_info               = 33,
        v_descriptor_set_allocate_info              = 34,
        v_write_descriptor_set                      = 35,
        v_copy_descriptor_set                       = 36,
        v_framebuffer_create_info                   = 37,
        v_render_pass_create_info                   = 38,
        v_command_pool_create_info                  = 39,
        v_command_buffer_allocate_info              = 40,
        v_command_buffer_inheritance_info           = 41,
        v_command_buffer_begin_info                 = 42,
        v_render_pass_begin_info                    = 43,
        v_buffer_memory_barrier                     = 44,
        v_image_memory_barrier                      = 45,
        v_memory_barrier                            = 46,
        v_loader_instance_create_info               = 47,
        v_loader_device_create_info                 = 48
    };

    enum class subpass_contents
        : std::uint32_t
    {
        v_inline                    = 0,
        v_secondary_command_buffers = 1
    };

    enum class result
        : std::int32_t
    {
        v_success                     = 0,
        v_not_ready                   = 1,
        v_timeout                     = 2,
        v_event_set                   = 3,
        v_event_reset                 = 4,
        v_incomplete                  = 5,
        v_error_out_of_host_memory    = -1,
        v_error_out_of_device_memory  = -2,
        v_error_initialization_failed = -3,
        v_error_device_lost           = -4,
        v_error_memory_map_failed     = -5,
        v_error_layer_not_present     = -6,
        v_error_extension_not_present = -7,
        v_error_feature_not_present   = -8,
        v_error_incompatible_driver   = -9,
        v_error_too_many_objects      = -10,
        v_error_format_not_supported  = -11,
        v_error_fragmented_pool       = -12,
        v_error_unknown               = -13
    };

    enum class dynamic_state
        : std::uint32_t
    {
        v_viewport             = 0,
        v_scissor              = 1,
        v_line_width           = 2,
        v_depth_bias           = 3,
        v_blend_constants      = 4,
        v_depth_bounds         = 5,
        v_stencil_compare_mask = 6,
        v_stencil_write_mask   = 7,
        v_stencil_reference    = 8
    };

    enum class descriptor_update_template_type
        : std::uint32_t
    {
        v_descriptor_set = 0
    };

    enum class object_type
        : std::uint32_t
    {
        v_unknown               = 0,
        v_instance              = 1,
        v_physical_device       = 2,
        v_device                = 3,
        v_queue                 = 4,
        v_semaphore             = 5,
        v_command_buffer        = 6,
        v_fence                 = 7,
        v_device_memory         = 8,
        v_buffer                = 9,
        v_image                 = 10,
        v_event                 = 11,
        v_query_pool            = 12,
        v_buffer_view           = 13,
        v_image_view            = 14,
        v_shader_module         = 15,
        v_pipeline_cache        = 16,
        v_pipeline_layout       = 17,
        v_render_pass           = 18,
        v_pipeline              = 19,
        v_descriptor_set_layout = 20,
        v_sampler               = 21,
        v_descriptor_pool       = 22,
        v_descriptor_set        = 23,
        v_framebuffer           = 24,
        v_command_pool          = 25
    };

    enum class ray_tracing_invocation_reorder_mode_ext
        : std::uint32_t
    {
        v_none_ext    = 0,
        v_reorder_ext = 1
    };

    enum class ray_tracing_lss_indexing_mode_nv
        : std::uint32_t
    {
        v_list_nv       = 0,
        v_successive_nv = 1
    };

    enum class ray_tracing_lss_primitive_end_caps_mode_nv
        : std::uint32_t
    {
        v_one_nv     = 0,
        v_chained_nv = 1
    };

    enum class direct_driver_loading_mode_lunarg
        : std::uint32_t
    {
        v_exclusive_lunarg = 0,
        v_inclusive_lunarg = 1
    };

    enum class anti_lag_mode_amd
        : std::uint32_t
    {
        v_driver_control_amd = 0,
        v_on_amd             = 1,
        v_off_amd            = 2
    };

    enum class anti_lag_stage_amd
        : std::uint32_t
    {
        v_input_amd   = 0,
        v_present_amd = 1
    };

    enum class queue_flag_bits
        : std::uint32_t
    {
        v_graphics_bit       = (1U << 0),
        v_compute_bit        = (1U << 1),
        v_transfer_bit       = (1U << 2),
        v_sparse_binding_bit = (1U << 3)
    };

    enum class cull_mode_flag_bits
        : std::uint32_t
    {
        v_none          = 0,
        v_ront_bit      = (1U << 0),
        v_back_bit      = (1U << 1),
        v_ront_and_back = 0x00000003
    };

    enum class render_pass_create_flag_bits
        : std::uint32_t
    {
    };

    enum class device_queue_create_flag_bits
        : std::uint32_t
    {
    };

    enum class memory_property_flag_bits
        : std::uint32_t
    {
        v_device_local_bit     = (1U << 0),
        v_host_visible_bit     = (1U << 1),
        v_host_coherent_bit    = (1U << 2),
        v_host_cached_bit      = (1U << 3),
        v_lazily_allocated_bit = (1U << 4)
    };

    enum class memory_heap_flag_bits
        : std::uint32_t
    {
        v_device_local_bit = (1U << 0)
    };

    enum class access_flag_bits
        : std::uint32_t
    {
        v_indirect_command_read_bit          = (1U << 0),
        v_index_read_bit                     = (1U << 1),
        v_vertex_attribute_read_bit          = (1U << 2),
        v_uniform_read_bit                   = (1U << 3),
        v_input_attachment_read_bit          = (1U << 4),
        v_shader_read_bit                    = (1U << 5),
        v_shader_write_bit                   = (1U << 6),
        v_color_attachment_read_bit          = (1U << 7),
        v_color_attachment_write_bit         = (1U << 8),
        v_depth_stencil_attachment_read_bit  = (1U << 9),
        v_depth_stencil_attachment_write_bit = (1U << 10),
        v_transfer_read_bit                  = (1U << 11),
        v_transfer_write_bit                 = (1U << 12),
        v_host_read_bit                      = (1U << 13),
        v_host_write_bit                     = (1U << 14),
        v_memory_read_bit                    = (1U << 15),
        v_memory_write_bit                   = (1U << 16)
    };

    enum class buffer_usage_flag_bits
        : std::uint32_t
    {
        v_transfer_src_bit         = (1U << 0),
        v_transfer_dst_bit         = (1U << 1),
        v_uniform_texel_buffer_bit = (1U << 2),
        v_storage_texel_buffer_bit = (1U << 3),
        v_uniform_buffer_bit       = (1U << 4),
        v_storage_buffer_bit       = (1U << 5),
        v_index_buffer_bit         = (1U << 6),
        v_vertex_buffer_bit        = (1U << 7),
        v_indirect_buffer_bit      = (1U << 8)
    };

    enum class buffer_usage_flag_bits2
        : std::uint64_t
    {
        v_2_transfer_src_bit         = (1ULL << 0),
        v_2_transfer_dst_bit         = (1ULL << 1),
        v_2_uniform_texel_buffer_bit = (1ULL << 2),
        v_2_storage_texel_buffer_bit = (1ULL << 3),
        v_2_uniform_buffer_bit       = (1ULL << 4),
        v_2_storage_buffer_bit       = (1ULL << 5),
        v_2_index_buffer_bit         = (1ULL << 6),
        v_2_vertex_buffer_bit        = (1ULL << 7),
        v_2_indirect_buffer_bit      = (1ULL << 8)
    };

    enum class buffer_create_flag_bits
        : std::uint32_t
    {
        v_sparse_binding_bit   = (1U << 0),
        v_sparse_residency_bit = (1U << 1),
        v_sparse_aliased_bit   = (1U << 2)
    };

    enum class shader_stage_flag_bits
        : std::uint32_t
    {
        v_vertex_bit                  = (1U << 0),
        v_tessellation_control_bit    = (1U << 1),
        v_tessellation_evaluation_bit = (1U << 2),
        v_geometry_bit                = (1U << 3),
        v_ragment_bit                 = (1U << 4),
        v_compute_bit                 = (1U << 5),
        v_all_graphics                = 0x0000001F,
        v_all                         = 0x7FFFFFFF
    };

    enum class image_usage_flag_bits
        : std::uint32_t
    {
        v_transfer_src_bit             = (1U << 0),
        v_transfer_dst_bit             = (1U << 1),
        v_sampled_bit                  = (1U << 2),
        v_storage_bit                  = (1U << 3),
        v_color_attachment_bit         = (1U << 4),
        v_depth_stencil_attachment_bit = (1U << 5),
        v_transient_attachment_bit     = (1U << 6),
        v_input_attachment_bit         = (1U << 7)
    };

    enum class image_create_flag_bits
        : std::uint32_t
    {
        v_sparse_binding_bit   = (1U << 0),
        v_sparse_residency_bit = (1U << 1),
        v_sparse_aliased_bit   = (1U << 2),
        v_mutable_format_bit   = (1U << 3),
        v_cube_compatible_bit  = (1U << 4)
    };

    enum class image_view_create_flag_bits
        : std::uint32_t
    {
    };

    enum class sampler_create_flag_bits
        : std::uint32_t
    {
    };

    enum class pipeline_create_flag_bits
        : std::uint32_t
    {
        v_disable_optimization_bit = (1U << 0),
        v_allow_derivatives_bit    = (1U << 1),
        v_derivative_bit           = (1U << 2)
    };

    enum class pipeline_create_flag_bits2
        : std::uint64_t
    {
        v_2_disable_optimization_bit              = (1ULL << 0),
        v_2_allow_derivatives_bit                 = (1ULL << 1),
        v_2_derivative_bit                        = (1ULL << 2),
        v_2_view_index_from_device_index_bit      = (1ULL << 3),
        v_2_dispatch_base_bit                     = (1ULL << 4),
        v_2_fail_on_pipeline_compile_required_bit = (1ULL << 8),
        v_2_early_return_on_failure_bit           = (1ULL << 9),
        v_2_no_protected_access_bit               = (1ULL << 27),
        v_2_protected_access_only_bit             = (1ULL << 30)
    };

    enum class pipeline_shader_stage_create_flag_bits
        : std::uint32_t
    {
    };

    enum class color_component_flag_bits
        : std::uint32_t
    {
        v_r_bit = (1U << 0),
        v_g_bit = (1U << 1),
        v_b_bit = (1U << 2),
        v_a_bit = (1U << 3)
    };

    enum class fence_create_flag_bits
        : std::uint32_t
    {
        v_signaled_bit = (1U << 0)
    };

    enum class semaphore_create_flag_bits
        : std::uint32_t
    {
    };

    enum class format_feature_flag_bits
        : std::uint32_t
    {
        v_sampled_image_bit               = (1U << 0),
        v_storage_image_bit               = (1U << 1),
        v_storage_image_atomic_bit        = (1U << 2),
        v_uniform_texel_buffer_bit        = (1U << 3),
        v_storage_texel_buffer_bit        = (1U << 4),
        v_storage_texel_buffer_atomic_bit = (1U << 5),
        v_vertex_buffer_bit               = (1U << 6),
        v_color_attachment_bit            = (1U << 7),
        v_color_attachment_blend_bit      = (1U << 8),
        v_depth_stencil_attachment_bit    = (1U << 9),
        v_blit_src_bit                    = (1U << 10),
        v_blit_dst_bit                    = (1U << 11),
        v_sampled_image_filter_linear_bit = (1U << 12)
    };

    enum class query_control_flag_bits
        : std::uint32_t
    {
        v_precise_bit = (1U << 0)
    };

    enum class query_result_flag_bits
        : std::uint32_t
    {
        v_64_bit                = (1U << 0),
        v_wait_bit              = (1U << 1),
        v_with_availability_bit = (1U << 2),
        v_partial_bit           = (1U << 3)
    };

    enum class command_buffer_usage_flag_bits
        : std::uint32_t
    {
        v_one_time_submit_bit      = (1U << 0),
        v_render_pass_continue_bit = (1U << 1),
        v_simultaneous_use_bit     = (1U << 2)
    };

    enum class query_pipeline_statistic_flag_bits
        : std::uint32_t
    {
        v_input_assembly_vertices_bit                    = (1U << 0),
        v_input_assembly_primitives_bit                  = (1U << 1),
        v_vertex_shader_invocations_bit                  = (1U << 2),
        v_geometry_shader_invocations_bit                = (1U << 3),
        v_geometry_shader_primitives_bit                 = (1U << 4),
        v_clipping_invocations_bit                       = (1U << 5),
        v_clipping_primitives_bit                        = (1U << 6),
        v_ragment_shader_invocations_bit                 = (1U << 7),
        v_tessellation_control_shader_patches_bit        = (1U << 8),
        v_tessellation_evaluation_shader_invocations_bit = (1U << 9),
        v_compute_shader_invocations_bit                 = (1U << 10)
    };

    enum class memory_map_flag_bits
        : std::uint32_t
    {
    };

    enum class image_aspect_flag_bits
        : std::uint32_t
    {
        v_color_bit    = (1U << 0),
        v_depth_bit    = (1U << 1),
        v_stencil_bit  = (1U << 2),
        v_metadata_bit = (1U << 3)
    };

    enum class sparse_image_format_flag_bits
        : std::uint32_t
    {
        v_single_miptail_bit         = (1U << 0),
        v_aligned_mip_size_bit       = (1U << 1),
        v_nonstandard_block_size_bit = (1U << 2)
    };

    enum class sparse_memory_bind_flag_bits
        : std::uint32_t
    {
        v_metadata_bit = (1U << 0)
    };

    enum class pipeline_stage_flag_bits
        : std::uint32_t
    {
        v_top_of_pipe_bit                    = (1U << 0),
        v_draw_indirect_bit                  = (1U << 1),
        v_vertex_input_bit                   = (1U << 2),
        v_vertex_shader_bit                  = (1U << 3),
        v_tessellation_control_shader_bit    = (1U << 4),
        v_tessellation_evaluation_shader_bit = (1U << 5),
        v_geometry_shader_bit                = (1U << 6),
        v_ragment_shader_bit                 = (1U << 7),
        v_early_fragment_tests_bit           = (1U << 8),
        v_late_fragment_tests_bit            = (1U << 9),
        v_color_attachment_output_bit        = (1U << 10),
        v_compute_shader_bit                 = (1U << 11),
        v_transfer_bit                       = (1U << 12),
        v_bottom_of_pipe_bit                 = (1U << 13),
        v_host_bit                           = (1U << 14),
        v_all_graphics_bit                   = (1U << 15),
        v_all_commands_bit                   = (1U << 16)
    };

    enum class command_pool_create_flag_bits
        : std::uint32_t
    {
        v_transient_bit            = (1U << 0),
        v_reset_command_buffer_bit = (1U << 1)
    };

    enum class command_pool_reset_flag_bits
        : std::uint32_t
    {
        v_release_resources_bit = (1U << 0)
    };

    enum class command_buffer_reset_flag_bits
        : std::uint32_t
    {
        v_release_resources_bit = (1U << 0)
    };

    enum class sample_count_flag_bits
        : std::uint32_t
    {
        v_1_bit  = (1U << 0),
        v_2_bit  = (1U << 1),
        v_4_bit  = (1U << 2),
        v_8_bit  = (1U << 3),
        v_16_bit = (1U << 4),
        v_32_bit = (1U << 5),
        v_64_bit = (1U << 6)
    };

    enum class attachment_description_flag_bits
        : std::uint32_t
    {
        v_may_alias_bit = (1U << 0)
    };

    enum class stencil_face_flag_bits
        : std::uint32_t
    {
        v_ront_bit                     = (1U << 0),
        v_back_bit                     = (1U << 1),
        v_ront_and_back [[deprecated]] = 0x00000003
    };

    enum class descriptor_pool_create_flag_bits
        : std::uint32_t
    {
        v_ree_descriptor_set_bit = (1U << 0)
    };

    enum class dependency_flag_bits
        : std::uint32_t
    {
        v_by_region_bit = (1U << 0)
    };

    enum class semaphore_type
        : std::uint32_t
    {
        v_binary   = 0,
        v_timeline = 1
    };

    enum class semaphore_wait_flag_bits
        : std::uint32_t
    {
        v_any_bit = (1U << 0)
    };

    enum class present_mode_khr
        : std::uint32_t
    {
        v_immediate_khr    = 0,
        v_mailbox_khr      = 1,
        v_fifo_khr         = 2,
        v_fifo_relaxed_khr = 3
    };

    enum class color_space_khr
        : std::uint32_t
    {
        v_srgb_nonlinear_khr                      = 0,
        v_space_srgb_nonlinear_khr [[deprecated]] = 0
    };

    enum class display_plane_alpha_flag_bits_khr
        : std::uint32_t
    {
        v_opaque_bit_khr                  = (1U << 0),
        v_global_bit_khr                  = (1U << 1),
        v_per_pixel_bit_khr               = (1U << 2),
        v_per_pixel_premultiplied_bit_khr = (1U << 3)
    };

    enum class composite_alpha_flag_bits_khr
        : std::uint32_t
    {
        v_opaque_bit_khr          = (1U << 0),
        v_pre_multiplied_bit_khr  = (1U << 1),
        v_post_multiplied_bit_khr = (1U << 2),
        v_inherit_bit_khr         = (1U << 3)
    };

    enum class surface_transform_flag_bits_khr
        : std::uint32_t
    {
        v_identity_bit_khr                     = (1U << 0),
        v_rotate_90_bit_khr                    = (1U << 1),
        v_rotate_180_bit_khr                   = (1U << 2),
        v_rotate_270_bit_khr                   = (1U << 3),
        v_horizontal_mirror_bit_khr            = (1U << 4),
        v_horizontal_mirror_rotate_90_bit_khr  = (1U << 5),
        v_horizontal_mirror_rotate_180_bit_khr = (1U << 6),
        v_horizontal_mirror_rotate_270_bit_khr = (1U << 7),
        v_inherit_bit_khr                      = (1U << 8)
    };

    enum class display_surface_stereo_type_nv
        : std::uint32_t
    {
        v_one_nv                = 0,
        v_onboard_din_nv        = 1,
        v_hdmi_3d_nv            = 2,
        v_inband_displayport_nv = 3
    };

    enum class swapchain_image_usage_flag_bits_android
        : std::uint32_t
    {
        v_shared_bit_android = (1U << 0)
    };

    enum class time_domain_khr
        : std::uint32_t
    {
        v_device_khr                    = 0,
        v_clock_monotonic_khr           = 1,
        v_clock_monotonic_raw_khr       = 2,
        v_query_performance_counter_khr = 3
    };

    enum class debug_report_flag_bits_ext
        : std::uint32_t
    {
        v_information_bit_ext         = (1U << 0),
        v_warning_bit_ext             = (1U << 1),
        v_performance_warning_bit_ext = (1U << 2),
        v_error_bit_ext               = (1U << 3),
        v_debug_bit_ext               = (1U << 4)
    };

    enum class debug_report_object_type_ext
        : std::uint32_t
    {
        v_unknown_ext                                  = 0,
        v_instance_ext                                 = 1,
        v_physical_device_ext                          = 2,
        v_device_ext                                   = 3,
        v_queue_ext                                    = 4,
        v_semaphore_ext                                = 5,
        v_command_buffer_ext                           = 6,
        v_fence_ext                                    = 7,
        v_device_memory_ext                            = 8,
        v_buffer_ext                                   = 9,
        v_image_ext                                    = 10,
        v_vent_ext                                     = 11,
        v_query_pool_ext                               = 12,
        v_buffer_view_ext                              = 13,
        v_image_view_ext                               = 14,
        v_shader_module_ext                            = 15,
        v_pipeline_cache_ext                           = 16,
        v_pipeline_layout_ext                          = 17,
        v_render_pass_ext                              = 18,
        v_pipeline_ext                                 = 19,
        v_descriptor_set_layout_ext                    = 20,
        v_sampler_ext                                  = 21,
        v_descriptor_pool_ext                          = 22,
        v_descriptor_set_ext                           = 23,
        v_framebuffer_ext                              = 24,
        v_command_pool_ext                             = 25,
        v_surface_khr_ext                              = 26,
        v_swapchain_khr_ext                            = 27,
        v_debug_report_callback_ext_ext                = 28,
        v_debug_report_ext              [[deprecated]] = 28,
        v_display_khr_ext                              = 29,
        v_display_mode_khr_ext                         = 30,
        v_validation_cache_ext_ext                     = 33,
        v_validation_cache_ext          [[deprecated]] = 33
    };

    enum class device_memory_report_event_type_ext
        : std::uint32_t
    {
        v_allocate_ext          = 0,
        v_free_ext              = 1,
        v_import_ext            = 2,
        v_unimport_ext          = 3,
        v_allocation_failed_ext = 4
    };

    enum class rasterization_order_amd
        : std::uint32_t
    {
        v_strict_amd  = 0,
        v_relaxed_amd = 1
    };

    enum class external_memory_handle_type_flag_bits_nv
        : std::uint32_t
    {
        v_opaque_win32_bit_nv     = (1U << 0),
        v_opaque_win32_kmt_bit_nv = (1U << 1),
        v_d3d11_image_bit_nv      = (1U << 2),
        v_d3d11_image_kmt_bit_nv  = (1U << 3)
    };

    enum class external_memory_feature_flag_bits_nv
        : std::uint32_t
    {
        v_dedicated_only_bit_nv = (1U << 0),
        v_exportable_bit_nv     = (1U << 1),
        v_importable_bit_nv     = (1U << 2)
    };

    enum class cluster_acceleration_structure_index_format_flag_bits_nv
        : std::uint32_t
    {
        v_8bit_nv  = (1U << 0),
        v_16bit_nv = (1U << 1),
        v_32bit_nv = (1U << 2)
    };

    enum class cluster_acceleration_structure_type_nv
        : std::uint32_t
    {
        v_clusters_bottom_level_nv     = 0,
        v_triangle_cluster_nv          = 1,
        v_triangle_cluster_template_nv = 2
    };

    enum class cluster_acceleration_structure_op_type_nv
        : std::uint32_t
    {
        v_move_objects_nv                    = 0,
        v_build_clusters_bottom_level_nv     = 1,
        v_build_triangle_cluster_nv          = 2,
        v_build_triangle_cluster_template_nv = 3,
        v_instantiate_triangle_cluster_nv    = 4,
        v_get_cluster_template_indices_nv    = 5
    };

    enum class cluster_acceleration_structure_op_mode_nv
        : std::uint32_t
    {
        v_implicit_destinations_nv = 0,
        v_explicit_destinations_nv = 1,
        v_compute_sizes_nv         = 2
    };

    enum class cluster_acceleration_structure_cluster_flag_bits_nv
        : std::uint32_t
    {
        v_allow_disable_opacity_micromaps_nv = (1U << 0)
    };

    enum class cluster_acceleration_structure_geometry_flag_bits_nv
        : std::uint32_t
    {
        v_cull_disable_bit_nv                   = (1U << 0),
        v_no_duplicate_anyhit_invocation_bit_nv = (1U << 1),
        v_opaque_bit_nv                         = (1U << 2)
    };

    enum class cluster_acceleration_structure_address_resolution_flag_bits_nv
        : std::uint32_t
    {
        v_none_nv                             = 0,
        v_indirected_dst_implicit_data_bit_nv = (1U << 0),
        v_indirected_scratch_data_bit_nv      = (1U << 1),
        v_indirected_dst_address_array_bit_nv = (1U << 2),
        v_indirected_dst_sizes_array_bit_nv   = (1U << 3),
        v_indirected_src_infos_array_bit_nv   = (1U << 4),
        v_indirected_src_infos_count_bit_nv   = (1U << 5)
    };

    enum class validation_check_ext
        : std::uint32_t
    {
        v_all_ext     = 0,
        v_shaders_ext = 1
    };

    enum class validation_feature_enable_ext
        : std::uint32_t
    {
        v_gpu_assisted_ext                      = 0,
        v_gpu_assisted_reserve_binding_slot_ext = 1,
        v_best_practices_ext                    = 2,
        v_debug_printf_ext                      = 3,
        v_synchronization_validation_ext        = 4
    };

    enum class validation_feature_disable_ext
        : std::uint32_t
    {
        v_all_ext                     = 0,
        v_shaders_ext                 = 1,
        v_thread_safety_ext           = 2,
        v_api_parameters_ext          = 3,
        v_object_lifetimes_ext        = 4,
        v_core_checks_ext             = 5,
        v_unique_handles_ext          = 6,
        v_shader_validation_cache_ext = 7
    };

    enum class layer_setting_type_ext
        : std::uint32_t
    {
        v_bool32_ext  = 0,
        v_int32_ext   = 1,
        v_int64_ext   = 2,
        v_uint32_ext  = 3,
        v_uint64_ext  = 4,
        v_float32_ext = 5,
        v_float64_ext = 6,
        v_string_ext  = 7
    };

    enum class subgroup_feature_flag_bits
        : std::uint32_t
    {
        v_basic_bit            = (1U << 0),
        v_vote_bit             = (1U << 1),
        v_arithmetic_bit       = (1U << 2),
        v_ballot_bit           = (1U << 3),
        v_shuffle_bit          = (1U << 4),
        v_shuffle_relative_bit = (1U << 5),
        v_clustered_bit        = (1U << 6),
        v_quad_bit             = (1U << 7)
    };

    enum class indirect_commands_layout_usage_flag_bits_nv
        : std::uint32_t
    {
        v_explicit_preprocess_bit_nv = (1U << 0),
        v_indexed_sequences_bit_nv   = (1U << 1),
        v_unordered_sequences_bit_nv = (1U << 2)
    };

    enum class indirect_state_flag_bits_nv
        : std::uint32_t
    {
        v_frontface_bit_nv = (1U << 0)
    };

    enum class indirect_commands_token_type_nv
        : std::uint32_t
    {
        v_shader_group_nv  = 0,
        v_state_flags_nv   = 1,
        v_index_buffer_nv  = 2,
        v_vertex_buffer_nv = 3,
        v_push_constant_nv = 4,
        v_draw_indexed_nv  = 5,
        v_draw_nv          = 6,
        v_draw_tasks_nv    = 7
    };

    enum class private_data_slot_create_flag_bits
        : std::uint32_t
    {
    };

    enum class descriptor_set_layout_create_flag_bits
        : std::uint32_t
    {
    };

    enum class external_memory_handle_type_flag_bits
        : std::uint32_t
    {
        v_opaque_fd_bit         = (1U << 0),
        v_opaque_win32_bit      = (1U << 1),
        v_opaque_win32_kmt_bit  = (1U << 2),
        v_d3d11_texture_bit     = (1U << 3),
        v_d3d11_texture_kmt_bit = (1U << 4),
        v_d3d12_heap_bit        = (1U << 5),
        v_d3d12_resource_bit    = (1U << 6)
    };

    enum class external_memory_feature_flag_bits
        : std::uint32_t
    {
        v_dedicated_only_bit = (1U << 0),
        v_exportable_bit     = (1U << 1),
        v_importable_bit     = (1U << 2)
    };

    enum class external_semaphore_handle_type_flag_bits
        : std::uint32_t
    {
        v_opaque_fd_bit        = (1U << 0),
        v_opaque_win32_bit     = (1U << 1),
        v_opaque_win32_kmt_bit = (1U << 2),
        v_d3d12_fence_bit      = (1U << 3),
        v_d3d11_fence_bit      = (1U << 3),
        v_sync_fd_bit          = (1U << 4)
    };

    enum class external_semaphore_feature_flag_bits
        : std::uint32_t
    {
        v_exportable_bit = (1U << 0),
        v_importable_bit = (1U << 1)
    };

    enum class semaphore_import_flag_bits
        : std::uint32_t
    {
        v_temporary_bit = (1U << 0)
    };

    enum class external_fence_handle_type_flag_bits
        : std::uint32_t
    {
        v_opaque_fd_bit        = (1U << 0),
        v_opaque_win32_bit     = (1U << 1),
        v_opaque_win32_kmt_bit = (1U << 2),
        v_sync_fd_bit          = (1U << 3)
    };

    enum class external_fence_feature_flag_bits
        : std::uint32_t
    {
        v_exportable_bit = (1U << 0),
        v_importable_bit = (1U << 1)
    };

    enum class fence_import_flag_bits
        : std::uint32_t
    {
        v_temporary_bit = (1U << 0)
    };

    enum class surface_counter_flag_bits_ext
        : std::uint32_t
    {
        v_vblank_bit_ext                = (1U << 0),
        v_vblank_ext     [[deprecated]] = (1U << 0)
    };

    enum class display_power_state_ext
        : std::uint32_t
    {
        v_off_ext     = 0,
        v_suspend_ext = 1,
        v_on_ext      = 2
    };

    enum class device_event_type_ext
        : std::uint32_t
    {
        v_display_hotplug_ext = 0
    };

    enum class display_event_type_ext
        : std::uint32_t
    {
        v_first_pixel_out_ext = 0
    };

    enum class peer_memory_feature_flag_bits
        : std::uint32_t
    {
        v_copy_src_bit    = (1U << 0),
        v_copy_dst_bit    = (1U << 1),
        v_generic_src_bit = (1U << 2),
        v_generic_dst_bit = (1U << 3)
    };

    enum class memory_allocate_flag_bits
        : std::uint32_t
    {
        v_device_mask_bit = (1U << 0)
    };

    enum class device_group_present_mode_flag_bits_khr
        : std::uint32_t
    {
        v_local_bit_khr              = (1U << 0),
        v_remote_bit_khr             = (1U << 1),
        v_sum_bit_khr                = (1U << 2),
        v_local_multi_device_bit_khr = (1U << 3)
    };

    enum class swapchain_create_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class viewport_coordinate_swizzle_nv
        : std::uint32_t
    {
        v_positive_x_nv = 0,
        v_egative_x_nv  = 1,
        v_positive_y_nv = 2,
        v_egative_y_nv  = 3,
        v_positive_z_nv = 4,
        v_egative_z_nv  = 5,
        v_positive_w_nv = 6,
        v_egative_w_nv  = 7
    };

    enum class discard_rectangle_mode_ext
        : std::uint32_t
    {
        v_inclusive_ext = 0,
        v_clusive_ext   = 1
    };

    enum class subpass_description_flag_bits
        : std::uint32_t
    {
    };

    enum class point_clipping_behavior
        : std::uint32_t
    {
        v_all_clip_planes       = 0,
        v_user_clip_planes_only = 1
    };

    enum class sampler_reduction_mode
        : std::uint32_t
    {
        v_weighted_average = 0,
        v_min              = 1,
        v_max              = 2
    };

    enum class tessellation_domain_origin
        : std::uint32_t
    {
        v_upper_left = 0,
        v_lower_left = 1
    };

    enum class sampler_ycbcr_model_conversion
        : std::uint32_t
    {
        v_rgb_identity   = 0,
        v_ycbcr_identity = 1,
        v_ycbcr_709      = 2,
        v_ycbcr_601      = 3,
        v_ycbcr_2020     = 4
    };

    enum class sampler_ycbcr_range
        : std::uint32_t
    {
        v_itu_full   = 0,
        v_itu_narrow = 1
    };

    enum class chroma_location
        : std::uint32_t
    {
        v_cosited_even = 0,
        v_midpoint     = 1
    };

    enum class blend_overlap_ext
        : std::uint32_t
    {
        v_uncorrelated_ext = 0,
        v_disjoint_ext     = 1,
        v_conjoint_ext     = 2
    };

    enum class coverage_modulation_mode_nv
        : std::uint32_t
    {
        v_one_nv   = 0,
        v_rgb_nv   = 1,
        v_alpha_nv = 2,
        v_rgba_nv  = 3
    };

    enum class coverage_reduction_mode_nv
        : std::uint32_t
    {
        v_merge_nv    = 0,
        v_truncate_nv = 1
    };

    enum class validation_cache_header_version_ext
        : std::uint32_t
    {
        v_one_ext = 1
    };

    enum class shader_info_type_amd
        : std::uint32_t
    {
        v_statistics_amd  = 0,
        v_binary_amd      = 1,
        v_disassembly_amd = 2
    };

    enum class queue_global_priority
        : std::uint32_t
    {
        v_low      = 128,
        v_medium   = 256,
        v_high     = 512,
        v_realtime = 1024
    };

    enum class debug_utils_message_severity_flag_bits_ext
        : std::uint32_t
    {
        v_verbose_bit_ext = (1U << 0),
        v_info_bit_ext    = (1U << 4),
        v_warning_bit_ext = (1U << 8),
        v_error_bit_ext   = (1U << 12)
    };

    enum class debug_utils_message_type_flag_bits_ext
        : std::uint32_t
    {
        v_general_bit_ext     = (1U << 0),
        v_validation_bit_ext  = (1U << 1),
        v_performance_bit_ext = (1U << 2)
    };

    enum class conservative_rasterization_mode_ext
        : std::uint32_t
    {
        v_disabled_ext      = 0,
        v_overestimate_ext  = 1,
        v_underestimate_ext = 2
    };

    enum class descriptor_binding_flag_bits
        : std::uint32_t
    {
        v_update_after_bind_bit           = (1U << 0),
        v_update_unused_while_pending_bit = (1U << 1),
        v_partially_bound_bit             = (1U << 2),
        v_variable_descriptor_count_bit   = (1U << 3)
    };

    enum class vendor_id
        : std::uint32_t
    {
        v_khronos  = 0x10000,
        v_viv      = 0x10001,
        v_vsi      = 0x10002,
        v_kazan    = 0x10003,
        v_codeplay = 0x10004,
        v_mesa     = 0x10005,
        v_pocl     = 0x10006,
        v_mobileye = 0x10007
    };

    enum class driver_id
        : std::uint32_t
    {
        v_amd_proprietary               = 1,
        v_amd_open_source               = 2,
        v_mesa_radv                     = 3,
        v_nvidia_proprietary            = 4,
        v_intel_proprietary_windows     = 5,
        v_intel_open_source_mesa        = 6,
        v_imagination_proprietary       = 7,
        v_qualcomm_proprietary          = 8,
        v_arm_proprietary               = 9,
        v_google_swiftshader            = 10,
        v_ggp_proprietary               = 11,
        v_broadcom_proprietary          = 12,
        v_mesa_llvmpipe                 = 13,
        v_moltenvk                      = 14,
        v_coreavi_proprietary           = 15,
        v_juice_proprietary             = 16,
        v_verisilicon_proprietary       = 17,
        v_mesa_turnip                   = 18,
        v_mesa_v3dv                     = 19,
        v_mesa_panvk                    = 20,
        v_samsung_proprietary           = 21,
        v_mesa_venus                    = 22,
        v_mesa_dozen                    = 23,
        v_mesa_nvk                      = 24,
        v_imagination_open_source_mesa  = 25,
        v_mesa_honeykrisp               = 26,
        v_vulkan_sc_emulation_on_vulkan = 27,
        v_mesa_kosmickrisp              = 28
    };

    enum class conditional_rendering_flag_bits_ext
        : std::uint32_t
    {
        v_inverted_bit_ext = (1U << 0)
    };

    enum class resolve_mode_flag_bits
        : std::uint32_t
    {
        v_none            = 0,
        v_sample_zero_bit = (1U << 0),
        v_average_bit     = (1U << 1),
        v_min_bit         = (1U << 2),
        v_max_bit         = (1U << 3)
    };

    enum class shading_rate_palette_entry_nv
        : std::uint32_t
    {
        v_o_invocations_nv               = 0,
        v_16_invocations_per_pixel_nv    = 1,
        v_8_invocations_per_pixel_nv     = 2,
        v_4_invocations_per_pixel_nv     = 3,
        v_2_invocations_per_pixel_nv     = 4,
        v_1_invocation_per_pixel_nv      = 5,
        v_1_invocation_per_2x1_pixels_nv = 6,
        v_1_invocation_per_1x2_pixels_nv = 7,
        v_1_invocation_per_2x2_pixels_nv = 8,
        v_1_invocation_per_4x2_pixels_nv = 9,
        v_1_invocation_per_2x4_pixels_nv = 10,
        v_1_invocation_per_4x4_pixels_nv = 11
    };

    enum class coarse_sample_order_type_nv
        : std::uint32_t
    {
        v_default_nv      = 0,
        v_custom_nv       = 1,
        v_pixel_major_nv  = 2,
        v_sample_major_nv = 3
    };

    enum class geometry_instance_flag_bits_khr
        : std::uint32_t
    {
        v_triangle_facing_cull_disable_bit_khr    = (1U << 0),
        v_triangle_flip_facing_bit_khr            = (1U << 1),
        v_orce_opaque_bit_khr                     = (1U << 2),
        v_orce_no_opaque_bit_khr                  = (1U << 3),
        v_triangle_front_counterclockwise_bit_khr = (1U << 1)
    };

    enum class geometry_flag_bits_khr
        : std::uint32_t
    {
        v_opaque_bit_khr                          = (1U << 0),
        v_no_duplicate_any_hit_invocation_bit_khr = (1U << 1)
    };

    enum class build_acceleration_structure_flag_bits_khr
        : std::uint32_t
    {
        v_allow_update_bit_khr      = (1U << 0),
        v_allow_compaction_bit_khr  = (1U << 1),
        v_prefer_fast_trace_bit_khr = (1U << 2),
        v_prefer_fast_build_bit_khr = (1U << 3),
        v_low_memory_bit_khr        = (1U << 4)
    };

    enum class acceleration_structure_create_flag_bits_khr
        : std::uint32_t
    {
        v_device_address_capture_replay_bit_khr = (1U << 0)
    };

    enum class copy_acceleration_structure_mode_khr
        : std::uint32_t
    {
        v_clone_khr   = 0,
        v_compact_khr = 1
    };

    enum class build_acceleration_structure_mode_khr
        : std::uint32_t
    {
        v_build_khr  = 0,
        v_update_khr = 1
    };

    enum class acceleration_structure_type_khr
        : std::uint32_t
    {
        v_top_level_khr    = 0,
        v_bottom_level_khr = 1,
        v_generic_khr      = 2
    };

    enum class geometry_type_khr
        : std::uint32_t
    {
        v_triangles_khr = 0,
        v_aabbs_khr     = 1,
        v_instances_khr = 2
    };

    enum class acceleration_structure_memory_requirements_type_nv
        : std::uint32_t
    {
        v_object_nv         = 0,
        v_build_scratch_nv  = 1,
        v_update_scratch_nv = 2
    };

    enum class acceleration_structure_build_type_khr
        : std::uint32_t
    {
        v_host_khr           = 0,
        v_device_khr         = 1,
        v_host_or_device_khr = 2
    };

    enum class ray_tracing_shader_group_type_khr
        : std::uint32_t
    {
        v_general_khr              = 0,
        v_triangles_hit_group_khr  = 1,
        v_procedural_hit_group_khr = 2
    };

    enum class acceleration_structure_compatibility_khr
        : std::uint32_t
    {
        v_compatible_khr   = 0,
        v_incompatible_khr = 1
    };

    enum class shader_group_shader_khr
        : std::uint32_t
    {
        v_general_khr      = 0,
        v_closest_hit_khr  = 1,
        v_any_hit_khr      = 2,
        v_intersection_khr = 3
    };

    enum class memory_overallocation_behavior_amd
        : std::uint32_t
    {
        v_default_amd    = 0,
        v_llowed_amd     = 1,
        v_disallowed_amd = 2
    };

    enum class framebuffer_create_flag_bits
        : std::uint32_t
    {
    };

    enum class query_pool_create_flag_bits
        : std::uint32_t
    {
    };

    enum class device_diagnostics_config_flag_bits_nv
        : std::uint32_t
    {
        v_enable_shader_debug_info_bit_nv      = (1U << 0),
        v_enable_resource_tracking_bit_nv      = (1U << 1),
        v_enable_automatic_checkpoints_bit_nv  = (1U << 2),
        v_enable_shader_error_reporting_bit_nv = (1U << 3)
    };

    enum class pipeline_creation_feedback_flag_bits
        : std::uint32_t
    {
        v_valid_bit                          = (1U << 0),
        v_application_pipeline_cache_hit_bit = (1U << 1),
        v_base_pipeline_acceleration_bit     = (1U << 2)
    };

    enum class full_screen_exclusive_ext
        : std::uint32_t
    {
        v_default_ext                = 0,
        v_allowed_ext                = 1,
        v_disallowed_ext             = 2,
        v_application_controlled_ext = 3
    };

    enum class performance_counter_scope_khr
        : std::uint32_t
    {
        v_command_buffer_khr                            = 0,
        v_render_pass_khr                               = 1,
        v_command_khr                                   = 2,
        v_query_scope_command_buffer_khr [[deprecated]] = 0,
        v_query_scope_render_pass_khr    [[deprecated]] = 1,
        v_query_scope_command_khr        [[deprecated]] = 2
    };

    enum class memory_decompression_method_flag_bits_ext
        : std::uint64_t
    {
        v_gdeflate_1_0_bit_ext = (1ULL << 0),
        v_gdeflate_1_0_bit_nv  = (1ULL << 0)
    };

    enum class performance_counter_unit_khr
        : std::uint32_t
    {
        v_generic_khr          = 0,
        v_percentage_khr       = 1,
        v_nanoseconds_khr      = 2,
        v_bytes_khr            = 3,
        v_bytes_per_second_khr = 4,
        v_elvin_khr            = 5,
        v_watts_khr            = 6,
        v_volts_khr            = 7,
        v_amps_khr             = 8,
        v_hertz_khr            = 9,
        v_cycles_khr           = 10
    };

    enum class performance_counter_storage_khr
        : std::uint32_t
    {
        v_int32_khr   = 0,
        v_int64_khr   = 1,
        v_uint32_khr  = 2,
        v_uint64_khr  = 3,
        v_float32_khr = 4,
        v_float64_khr = 5
    };

    enum class performance_counter_description_flag_bits_khr
        : std::uint32_t
    {
        v_performance_impacting_bit_khr                = (1U << 0),
        v_performance_impacting_khr     [[deprecated]] = (1U << 0),
        v_concurrently_impacted_bit_khr                = (1U << 1),
        v_concurrently_impacted_khr     [[deprecated]] = (1U << 1)
    };

    enum class acquire_profiling_lock_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class shader_core_properties_flag_bits_amd
        : std::uint32_t
    {
    };

    enum class refresh_object_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class performance_configuration_type_intel
        : std::uint32_t
    {
        v_command_queue_metrics_discovery_activated_intel = 0
    };

    enum class query_pool_sampling_mode_intel
        : std::uint32_t
    {
        v_manual_intel = 0
    };

    enum class performance_override_type_intel
        : std::uint32_t
    {
        v_null_hardware_intel    = 0,
        v_flush_gpu_caches_intel = 1
    };

    enum class performance_parameter_type_intel
        : std::uint32_t
    {
        v_hw_counters_supported_intel    = 0,
        v_stream_marker_valid_bits_intel = 1
    };

    enum class performance_value_type_intel
        : std::uint32_t
    {
        v_uint32_intel = 0,
        v_uint64_intel = 1,
        v_float_intel  = 2,
        v_bool_intel   = 3,
        v_string_intel = 4
    };

    enum class shader_float_controls_independence
        : std::uint32_t
    {
        v_32_bit_only = 0,
        v_all         = 1,
        v_none        = 2
    };

    enum class pipeline_executable_statistic_format_khr
        : std::uint32_t
    {
        v_bool32_khr  = 0,
        v_int64_khr   = 1,
        v_uint64_khr  = 2,
        v_float64_khr = 3
    };

    enum class line_rasterization_mode
        : std::uint32_t
    {
        v_default            = 0,
        v_rectangular        = 1,
        v_bresenham          = 2,
        v_rectangular_smooth = 3
    };

    enum class shader_module_create_flag_bits
        : std::uint32_t
    {
    };

    enum class pipeline_compiler_control_flag_bits_amd
        : std::uint32_t
    {
    };

    enum class fault_level
        : std::uint32_t
    {
        v_unassigned  = 0,
        v_critical    = 1,
        v_recoverable = 2,
        v_warning     = 3
    };

    enum class fault_type
        : std::uint32_t
    {
        v_invalid             = 0,
        v_unassigned          = 1,
        v_implementation      = 2,
        v_system              = 3,
        v_physical_device     = 4,
        v_command_buffer_full = 5,
        v_invalid_api_usage   = 6
    };

    enum class fault_query_behavior
        : std::uint32_t
    {
        v_get_and_clear_all_faults = 0
    };

    enum class tool_purpose_flag_bits
        : std::uint32_t
    {
        v_validation_bit          = (1U << 0),
        v_profiling_bit           = (1U << 1),
        v_tracing_bit             = (1U << 2),
        v_additional_features_bit = (1U << 3),
        v_modifying_features_bit  = (1U << 4)
    };

    enum class pipeline_match_control
        : std::uint32_t
    {
        v_application_uuid_exact_match = 0
    };

    enum class fragment_shading_rate_combiner_op_khr
        : std::uint32_t
    {
        v_eep_khr     = 0,
        v_replace_khr = 1,
        v_min_khr     = 2,
        v_max_khr     = 3,
        v_mul_khr     = 4
    };

    enum class fragment_shading_rate_nv
        : std::uint32_t
    {
        v_1_invocation_per_pixel_nv      = 0,
        v_1_invocation_per_1x2_pixels_nv = 1,
        v_1_invocation_per_2x1_pixels_nv = 4,
        v_1_invocation_per_2x2_pixels_nv = 5,
        v_1_invocation_per_2x4_pixels_nv = 6,
        v_1_invocation_per_4x2_pixels_nv = 9,
        v_1_invocation_per_4x4_pixels_nv = 10,
        v_2_invocations_per_pixel_nv     = 11,
        v_4_invocations_per_pixel_nv     = 12,
        v_8_invocations_per_pixel_nv     = 13,
        v_16_invocations_per_pixel_nv    = 14,
        v_o_invocations_nv               = 15
    };

    enum class fragment_shading_rate_type_nv
        : std::uint32_t
    {
        v_fragment_size_nv = 0,
        v_enums_nv         = 1
    };

    enum class subpass_merge_status_ext
        : std::uint32_t
    {
        v_merged_ext                                   = 0,
        v_disallowed_ext                               = 1,
        v_not_merged_side_effects_ext                  = 2,
        v_not_merged_samples_mismatch_ext              = 3,
        v_not_merged_views_mismatch_ext                = 4,
        v_not_merged_aliasing_ext                      = 5,
        v_not_merged_dependencies_ext                  = 6,
        v_not_merged_incompatible_input_attachment_ext = 7,
        v_not_merged_too_many_attachments_ext          = 8,
        v_not_merged_insufficient_storage_ext          = 9,
        v_not_merged_depth_stencil_count_ext           = 10,
        v_not_merged_resolve_attachment_reuse_ext      = 11,
        v_not_merged_single_subpass_ext                = 12,
        v_not_merged_unspecified_ext                   = 13
    };

    enum class access_flag_bits2
        : std::uint64_t
    {
        v_2_none                               = 0,
        v_2_indirect_command_read_bit          = (1ULL << 0),
        v_2_index_read_bit                     = (1ULL << 1),
        v_2_vertex_attribute_read_bit          = (1ULL << 2),
        v_2_uniform_read_bit                   = (1ULL << 3),
        v_2_input_attachment_read_bit          = (1ULL << 4),
        v_2_shader_read_bit                    = (1ULL << 5),
        v_2_shader_write_bit                   = (1ULL << 6),
        v_2_color_attachment_read_bit          = (1ULL << 7),
        v_2_color_attachment_write_bit         = (1ULL << 8),
        v_2_depth_stencil_attachment_read_bit  = (1ULL << 9),
        v_2_depth_stencil_attachment_write_bit = (1ULL << 10),
        v_2_transfer_read_bit                  = (1ULL << 11),
        v_2_transfer_write_bit                 = (1ULL << 12),
        v_2_host_read_bit                      = (1ULL << 13),
        v_2_host_write_bit                     = (1ULL << 14),
        v_2_memory_read_bit                    = (1ULL << 15),
        v_2_memory_write_bit                   = (1ULL << 16),
        v_2_shader_sampled_read_bit            = (1ULL << 32),
        v_2_shader_storage_read_bit            = (1ULL << 33),
        v_2_shader_storage_write_bit           = (1ULL << 34)
    };

    enum class pipeline_stage_flag_bits2
        : std::uint64_t
    {
        v_2_none                               = 0,
        v_2_top_of_pipe_bit                    = (1ULL << 0),
        v_2_draw_indirect_bit                  = (1ULL << 1),
        v_2_vertex_input_bit                   = (1ULL << 2),
        v_2_vertex_shader_bit                  = (1ULL << 3),
        v_2_tessellation_control_shader_bit    = (1ULL << 4),
        v_2_tessellation_evaluation_shader_bit = (1ULL << 5),
        v_2_geometry_shader_bit                = (1ULL << 6),
        v_2_fragment_shader_bit                = (1ULL << 7),
        v_2_early_fragment_tests_bit           = (1ULL << 8),
        v_2_late_fragment_tests_bit            = (1ULL << 9),
        v_2_color_attachment_output_bit        = (1ULL << 10),
        v_2_compute_shader_bit                 = (1ULL << 11),
        v_2_all_transfer_bit                   = (1ULL << 12),
        v_2_transfer_bit                       = (1ULL << 12),
        v_2_bottom_of_pipe_bit                 = (1ULL << 13),
        v_2_host_bit                           = (1ULL << 14),
        v_2_all_graphics_bit                   = (1ULL << 15),
        v_2_all_commands_bit                   = (1ULL << 16),
        v_2_copy_bit                           = (1ULL << 32),
        v_2_resolve_bit                        = (1ULL << 33),
        v_2_blit_bit                           = (1ULL << 34),
        v_2_clear_bit                          = (1ULL << 35),
        v_2_index_input_bit                    = (1ULL << 36),
        v_2_vertex_attribute_input_bit         = (1ULL << 37),
        v_2_pre_rasterization_shaders_bit      = (1ULL << 38)
    };

    enum class submit_flag_bits
        : std::uint32_t
    {
        v_protected_bit = (1U << 0)
    };

    enum class event_create_flag_bits
        : std::uint32_t
    {
    };

    enum class pipeline_layout_create_flag_bits
        : std::uint32_t
    {
    };

    enum class sci_sync_client_type_nv
        : std::uint32_t
    {
        v_signaler_nv        = 0,
        v_waiter_nv          = 1,
        v_signaler_waiter_nv = 2
    };

    enum class sci_sync_primitive_type_nv
        : std::uint32_t
    {
        v_fence_nv     = 0,
        v_semaphore_nv = 1
    };

    enum class provoking_vertex_mode_ext
        : std::uint32_t
    {
        v_first_vertex_ext = 0,
        v_last_vertex_ext  = 1
    };

    enum class pipeline_cache_validation_version
        : std::uint32_t
    {
        v_safety_critical_one = 1
    };

    enum class acceleration_structure_motion_instance_type_nv
        : std::uint32_t
    {
        v_static_nv        = 0,
        v_matrix_motion_nv = 1,
        v_srt_motion_nv    = 2
    };

    enum class pipeline_color_blend_state_create_flag_bits
        : std::uint32_t
    {
    };

    enum class pipeline_depth_stencil_state_create_flag_bits
        : std::uint32_t
    {
    };

    enum class graphics_pipeline_library_flag_bits_ext
        : std::uint32_t
    {
        v_vertex_input_interface_bit_ext    = (1U << 0),
        v_pre_rasterization_shaders_bit_ext = (1U << 1),
        v_ragment_shader_bit_ext            = (1U << 2),
        v_ragment_output_interface_bit_ext  = (1U << 3)
    };

    enum class rendering_attachment_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class resolve_image_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class device_address_binding_flag_bits_ext
        : std::uint32_t
    {
        v_internal_object_bit_ext = (1U << 0)
    };

    enum class device_address_binding_type_ext
        : std::uint32_t
    {
        v_bind_ext   = 0,
        v_unbind_ext = 1
    };

    enum class frame_boundary_flag_bits_ext
        : std::uint32_t
    {
        v_rame_end_bit_ext = (1U << 0)
    };

    enum class present_scaling_flag_bits_khr
        : std::uint32_t
    {
        v_one_to_one_bit_khr           = (1U << 0),
        v_one_to_one_bit_ext           = (1U << 0),
        v_aspect_ratio_stretch_bit_khr = (1U << 1),
        v_aspect_ratio_stretch_bit_ext = (1U << 1),
        v_stretch_bit_khr              = (1U << 2),
        v_stretch_bit_ext              = (1U << 2)
    };

    enum class present_gravity_flag_bits_khr
        : std::uint32_t
    {
        v_min_bit_khr      = (1U << 0),
        v_min_bit_ext      = (1U << 0),
        v_max_bit_khr      = (1U << 1),
        v_max_bit_ext      = (1U << 1),
        v_centered_bit_khr = (1U << 2),
        v_centered_bit_ext = (1U << 2)
    };

    enum class physical_device_scheduling_controls_flag_bits_arm
        : std::uint64_t
    {
        v_shader_core_count_arm = (1ULL << 0)
    };

    enum class present_stage_flag_bits_ext
        : std::uint32_t
    {
        v_queue_operations_end_bit_ext      = (1U << 0),
        v_request_dequeued_bit_ext          = (1U << 1),
        v_image_first_pixel_out_bit_ext     = (1U << 2),
        v_image_first_pixel_visible_bit_ext = (1U << 3)
    };

    enum class past_presentation_timing_flag_bits_ext
        : std::uint32_t
    {
        v_allow_partial_results_bit_ext      = (1U << 0),
        v_allow_out_of_order_results_bit_ext = (1U << 1)
    };

    enum class present_timing_info_flag_bits_ext
        : std::uint32_t
    {
        v_present_at_relative_time_bit_ext         = (1U << 0),
        v_present_at_nearest_refresh_cycle_bit_ext = (1U << 1)
    };

    enum class video_codec_operation_flag_bits_khr
        : std::uint32_t
    {
        v_none_khr = 0
    };

    enum class video_chroma_subsampling_flag_bits_khr
        : std::uint32_t
    {
        v_invalid_khr        = 0,
        v_monochrome_bit_khr = (1U << 0),
        v_420_bit_khr        = (1U << 1),
        v_422_bit_khr        = (1U << 2),
        v_444_bit_khr        = (1U << 3)
    };

    enum class video_component_bit_depth_flag_bits_khr
        : std::uint32_t
    {
        v_invalid_khr = 0,
        v_8_bit_khr   = (1U << 0),
        v_10_bit_khr  = (1U << 2),
        v_12_bit_khr  = (1U << 4)
    };

    enum class video_capability_flag_bits_khr
        : std::uint32_t
    {
        v_protected_content_bit_khr         = (1U << 0),
        v_separate_reference_images_bit_khr = (1U << 1)
    };

    enum class video_session_create_flag_bits_khr
        : std::uint32_t
    {
        v_protected_content_bit_khr = (1U << 0)
    };

    enum class video_session_parameters_create_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class video_decode_h264_picture_layout_flag_bits_khr
        : std::uint32_t
    {
        v_progressive_khr                      = 0,
        v_interlaced_interleaved_lines_bit_khr = (1U << 0),
        v_interlaced_separate_planes_bit_khr   = (1U << 1)
    };

    enum class video_coding_control_flag_bits_khr
        : std::uint32_t
    {
        v_reset_bit_khr = (1U << 0)
    };

    enum class query_result_status_khr
        : std::int32_t
    {
        v_error_khr     = -1,
        v_not_ready_khr = 0,
        v_complete_khr  = 1
    };

    enum class video_decode_usage_flag_bits_khr
        : std::uint32_t
    {
        v_default_khr         = 0,
        v_transcoding_bit_khr = (1U << 0),
        v_offline_bit_khr     = (1U << 1),
        v_streaming_bit_khr   = (1U << 2)
    };

    enum class video_decode_capability_flag_bits_khr
        : std::uint32_t
    {
        v_dpb_and_output_coincide_bit_khr = (1U << 0),
        v_dpb_and_output_distinct_bit_khr = (1U << 1)
    };

    enum class video_encode_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class video_encode_usage_flag_bits_khr
        : std::uint32_t
    {
        v_default_khr          = 0,
        v_transcoding_bit_khr  = (1U << 0),
        v_streaming_bit_khr    = (1U << 1),
        v_recording_bit_khr    = (1U << 2),
        v_conferencing_bit_khr = (1U << 3)
    };

    enum class video_encode_content_flag_bits_khr
        : std::uint32_t
    {
        v_default_khr      = 0,
        v_camera_bit_khr   = (1U << 0),
        v_desktop_bit_khr  = (1U << 1),
        v_rendered_bit_khr = (1U << 2)
    };

    enum class video_encode_tuning_mode_khr
        : std::uint32_t
    {
        v_default_khr           = 0,
        v_high_quality_khr      = 1,
        v_low_latency_khr       = 2,
        v_ultra_low_latency_khr = 3,
        v_lossless_khr          = 4
    };

    enum class video_encode_capability_flag_bits_khr
        : std::uint32_t
    {
        v_preceding_externally_encoded_bytes_bit_khr            = (1U << 0),
        v_insufficient_bitstream_buffer_range_detection_bit_khr = (1U << 1)
    };

    enum class video_encode_feedback_flag_bits_khr
        : std::uint32_t
    {
        v_bitstream_buffer_offset_bit_khr = (1U << 0),
        v_bitstream_bytes_written_bit_khr = (1U << 1),
        v_bitstream_has_overrides_bit_khr = (1U << 2)
    };

    enum class video_encode_rate_control_mode_flag_bits_khr
        : std::uint32_t
    {
        v_default_khr      = 0,
        v_disabled_bit_khr = (1U << 0),
        v_cbr_bit_khr      = (1U << 1),
        v_vbr_bit_khr      = (1U << 2)
    };

    enum class video_encode_intra_refresh_mode_flag_bits_khr
        : std::uint32_t
    {
        v_none_khr                      = 0,
        v_per_picture_partition_bit_khr = (1U << 0),
        v_block_based_bit_khr           = (1U << 1),
        v_block_row_based_bit_khr       = (1U << 2),
        v_block_column_based_bit_khr    = (1U << 3)
    };

    enum class video_encode_h264_capability_flag_bits_khr
        : std::uint32_t
    {
        v_hrd_compliance_bit_khr                    = (1U << 0),
        v_prediction_weight_table_generated_bit_khr = (1U << 1),
        v_row_unaligned_slice_bit_khr               = (1U << 2),
        v_different_slice_type_bit_khr              = (1U << 3),
        v_b_frame_in_l0_list_bit_khr                = (1U << 4),
        v_b_frame_in_l1_list_bit_khr                = (1U << 5),
        v_per_picture_type_min_max_qp_bit_khr       = (1U << 6),
        v_per_slice_constant_qp_bit_khr             = (1U << 7),
        v_generate_prefix_nalu_bit_khr              = (1U << 8)
    };

    enum class video_encode_h264_std_flag_bits_khr
        : std::uint32_t
    {
        v_separate_color_plane_flag_set_bit_khr            = (1U << 0),
        v_qpprime_y_zero_transform_bypass_flag_set_bit_khr = (1U << 1),
        v_scaling_matrix_present_flag_set_bit_khr          = (1U << 2),
        v_chroma_qp_index_offset_bit_khr                   = (1U << 3),
        v_second_chroma_qp_index_offset_bit_khr            = (1U << 4),
        v_pic_init_qp_minus26_bit_khr                      = (1U << 5),
        v_weighted_pred_flag_set_bit_khr                   = (1U << 6),
        v_weighted_bipred_idc_explicit_bit_khr             = (1U << 7),
        v_weighted_bipred_idc_implicit_bit_khr             = (1U << 8),
        v_transform_8x8_mode_flag_set_bit_khr              = (1U << 9),
        v_direct_spatial_mv_pred_flag_unset_bit_khr        = (1U << 10),
        v_entropy_coding_mode_flag_unset_bit_khr           = (1U << 11),
        v_entropy_coding_mode_flag_set_bit_khr             = (1U << 12),
        v_direct_8x8_inference_flag_unset_bit_khr          = (1U << 13),
        v_constrained_intra_pred_flag_set_bit_khr          = (1U << 14),
        v_deblocking_filter_disabled_bit_khr               = (1U << 15),
        v_deblocking_filter_enabled_bit_khr                = (1U << 16),
        v_deblocking_filter_partial_bit_khr                = (1U << 17),
        v_slice_qp_delta_bit_khr                           = (1U << 19),
        v_different_slice_qp_delta_bit_khr                 = (1U << 20)
    };

    enum class video_encode_h264_rate_control_flag_bits_khr
        : std::uint32_t
    {
        v_attempt_hrd_compliance_bit_khr        = (1U << 0),
        v_regular_gop_bit_khr                   = (1U << 1),
        v_reference_pattern_flat_bit_khr        = (1U << 2),
        v_reference_pattern_dyadic_bit_khr      = (1U << 3),
        v_temporal_layer_pattern_dyadic_bit_khr = (1U << 4)
    };

    enum class host_image_copy_flag_bits
        : std::uint32_t
    {
        v_memcpy_bit                = (1U << 0),
        v_memcpy     [[deprecated]] = (1U << 0)
    };

    enum class partitioned_acceleration_structure_op_type_nv
        : std::uint32_t
    {
        v_write_instance_nv              = 0,
        v_update_instance_nv             = 1,
        v_write_partition_translation_nv = 2
    };

    enum class partitioned_acceleration_structure_instance_flag_bits_nv
        : std::uint32_t
    {
        v_triangle_facing_cull_disable_bit_nv = (1U << 0),
        v_triangle_flip_facing_bit_nv         = (1U << 1),
        v_force_opaque_bit_nv                 = (1U << 2),
        v_force_no_opaque_bit_nv              = (1U << 3),
        v_enable_explicit_bounding_box_nv     = (1U << 4)
    };

    enum class image_format_constraints_flag_bits_fuchsia
        : std::uint32_t
    {
    };

    enum class image_constraints_info_flag_bits_fuchsia
        : std::uint32_t
    {
        v_cpu_read_rarely_fuchsia    = (1U << 0),
        v_cpu_read_often_fuchsia     = (1U << 1),
        v_cpu_write_rarely_fuchsia   = (1U << 2),
        v_cpu_write_often_fuchsia    = (1U << 3),
        v_protected_optional_fuchsia = (1U << 4)
    };

    enum class format_feature_flag_bits2
        : std::uint64_t
    {
        v_2_sampled_image_bit                                                           = (1ULL << 0),
        v_2_storage_image_bit                                                           = (1ULL << 1),
        v_2_storage_image_atomic_bit                                                    = (1ULL << 2),
        v_2_uniform_texel_buffer_bit                                                    = (1ULL << 3),
        v_2_storage_texel_buffer_bit                                                    = (1ULL << 4),
        v_2_storage_texel_buffer_atomic_bit                                             = (1ULL << 5),
        v_2_vertex_buffer_bit                                                           = (1ULL << 6),
        v_2_color_attachment_bit                                                        = (1ULL << 7),
        v_2_color_attachment_blend_bit                                                  = (1ULL << 8),
        v_2_depth_stencil_attachment_bit                                                = (1ULL << 9),
        v_2_blit_src_bit                                                                = (1ULL << 10),
        v_2_blit_dst_bit                                                                = (1ULL << 11),
        v_2_sampled_image_filter_linear_bit                                             = (1ULL << 12),
        v_2_transfer_src_bit                                                            = (1ULL << 14),
        v_2_transfer_dst_bit                                                            = (1ULL << 15),
        v_2_sampled_image_filter_minmax_bit                                             = (1ULL << 16),
        v_2_midpoint_chroma_samples_bit                                                 = (1ULL << 17),
        v_2_sampled_image_ycbcr_conversion_linear_filter_bit                            = (1ULL << 18),
        v_2_sampled_image_ycbcr_conversion_separate_reconstruction_filter_bit           = (1ULL << 19),
        v_2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_bit           = (1ULL << 20),
        v_2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_bit = (1ULL << 21),
        v_2_disjoint_bit                                                                = (1ULL << 22),
        v_2_cosited_chroma_samples_bit                                                  = (1ULL << 23),
        v_2_storage_read_without_format_bit                                             = (1ULL << 31),
        v_2_storage_write_without_format_bit                                            = (1ULL << 32),
        v_2_sampled_image_depth_comparison_bit                                          = (1ULL << 33)
    };

    enum class rendering_flag_bits
        : std::uint32_t
    {
        v_contents_secondary_command_buffers_bit = (1U << 0),
        v_suspending_bit                         = (1U << 1),
        v_resuming_bit                           = (1U << 2)
    };

    enum class video_encode_h265_capability_flag_bits_khr
        : std::uint32_t
    {
        v_hrd_compliance_bit_khr                    = (1U << 0),
        v_prediction_weight_table_generated_bit_khr = (1U << 1),
        v_row_unaligned_slice_segment_bit_khr       = (1U << 2),
        v_different_slice_segment_type_bit_khr      = (1U << 3),
        v_b_frame_in_l0_list_bit_khr                = (1U << 4),
        v_b_frame_in_l1_list_bit_khr                = (1U << 5),
        v_per_picture_type_min_max_qp_bit_khr       = (1U << 6),
        v_per_slice_segment_constant_qp_bit_khr     = (1U << 7),
        v_multiple_tiles_per_slice_segment_bit_khr  = (1U << 8),
        v_multiple_slice_segments_per_tile_bit_khr  = (1U << 9)
    };

    enum class video_encode_h265_std_flag_bits_khr
        : std::uint32_t
    {
        v_separate_color_plane_flag_set_bit_khr                = (1U << 0),
        v_sample_adaptive_offset_enabled_flag_set_bit_khr      = (1U << 1),
        v_scaling_list_data_present_flag_set_bit_khr           = (1U << 2),
        v_pcm_enabled_flag_set_bit_khr                         = (1U << 3),
        v_sps_temporal_mvp_enabled_flag_set_bit_khr            = (1U << 4),
        v_init_qp_minus26_bit_khr                              = (1U << 5),
        v_weighted_pred_flag_set_bit_khr                       = (1U << 6),
        v_weighted_bipred_flag_set_bit_khr                     = (1U << 7),
        v_log2_parallel_merge_level_minus2_bit_khr             = (1U << 8),
        v_sign_data_hiding_enabled_flag_set_bit_khr            = (1U << 9),
        v_transform_skip_enabled_flag_set_bit_khr              = (1U << 10),
        v_transform_skip_enabled_flag_unset_bit_khr            = (1U << 11),
        v_pps_slice_chroma_qp_offsets_present_flag_set_bit_khr = (1U << 12),
        v_transquant_bypass_enabled_flag_set_bit_khr           = (1U << 13),
        v_constrained_intra_pred_flag_set_bit_khr              = (1U << 14),
        v_entropy_coding_sync_enabled_flag_set_bit_khr         = (1U << 15),
        v_deblocking_filter_override_enabled_flag_set_bit_khr  = (1U << 16),
        v_dependent_slice_segments_enabled_flag_set_bit_khr    = (1U << 17),
        v_dependent_slice_segment_flag_set_bit_khr             = (1U << 18),
        v_slice_qp_delta_bit_khr                               = (1U << 19),
        v_different_slice_qp_delta_bit_khr                     = (1U << 20)
    };

    enum class video_encode_h265_rate_control_flag_bits_khr
        : std::uint32_t
    {
        v_attempt_hrd_compliance_bit_khr            = (1U << 0),
        v_regular_gop_bit_khr                       = (1U << 1),
        v_reference_pattern_flat_bit_khr            = (1U << 2),
        v_reference_pattern_dyadic_bit_khr          = (1U << 3),
        v_temporal_sub_layer_pattern_dyadic_bit_khr = (1U << 4)
    };

    enum class video_encode_h265_ctb_size_flag_bits_khr
        : std::uint32_t
    {
        v_16_bit_khr = (1U << 0),
        v_32_bit_khr = (1U << 1),
        v_64_bit_khr = (1U << 2)
    };

    enum class video_encode_h265_transform_block_size_flag_bits_khr
        : std::uint32_t
    {
        v_4_bit_khr  = (1U << 0),
        v_8_bit_khr  = (1U << 1),
        v_16_bit_khr = (1U << 2),
        v_32_bit_khr = (1U << 3)
    };

    enum class video_encode_av1_capability_flag_bits_khr
        : std::uint32_t
    {
        v_per_rate_control_group_min_max_q_index_bit_khr = (1U << 0),
        v_generate_obu_extension_header_bit_khr          = (1U << 1),
        v_primary_reference_cdf_only_bit_khr             = (1U << 2),
        v_rame_size_override_bit_khr                     = (1U << 3),
        v_motion_vector_scaling_bit_khr                  = (1U << 4)
    };

    enum class video_encode_av1_std_flag_bits_khr
        : std::uint32_t
    {
        v_uniform_tile_spacing_flag_set_bit_khr = (1U << 0),
        v_skip_mode_present_unset_bit_khr       = (1U << 1),
        v_primary_ref_frame_bit_khr             = (1U << 2),
        v_delta_q_bit_khr                       = (1U << 3)
    };

    enum class video_encode_av1_rate_control_flag_bits_khr
        : std::uint32_t
    {
        v_regular_gop_bit_khr                   = (1U << 0),
        v_temporal_layer_pattern_dyadic_bit_khr = (1U << 1),
        v_reference_pattern_flat_bit_khr        = (1U << 2),
        v_reference_pattern_dyadic_bit_khr      = (1U << 3)
    };

    enum class video_encode_av1_superblock_size_flag_bits_khr
        : std::uint32_t
    {
        v_64_bit_khr  = (1U << 0),
        v_128_bit_khr = (1U << 1)
    };

    enum class video_encode_av1_prediction_mode_khr
        : std::uint32_t
    {
        v_intra_only_khr              = 0,
        v_single_reference_khr        = 1,
        v_unidirectional_compound_khr = 2,
        v_bidirectional_compound_khr  = 3
    };

    enum class video_encode_av1_rate_control_group_khr
        : std::uint32_t
    {
        v_intra_khr        = 0,
        v_predictive_khr   = 1,
        v_bipredictive_khr = 2
    };

    enum class export_metal_object_type_flag_bits_ext
        : std::uint32_t
    {
        v_metal_device_bit_ext        = (1U << 0),
        v_metal_command_queue_bit_ext = (1U << 1),
        v_metal_buffer_bit_ext        = (1U << 2),
        v_metal_texture_bit_ext       = (1U << 3),
        v_metal_iosurface_bit_ext     = (1U << 4),
        v_metal_shared_event_bit_ext  = (1U << 5)
    };

    enum class instance_create_flag_bits
        : std::uint32_t
    {
    };

    enum class image_compression_flag_bits_ext
        : std::uint32_t
    {
        v_default_ext            = 0,
        v_ixed_rate_default_ext  = (1U << 0),
        v_ixed_rate_explicit_ext = (1U << 1),
        v_disabled_ext           = (1U << 2)
    };

    enum class image_compression_fixed_rate_flag_bits_ext
        : std::uint32_t
    {
        v_none_ext      = 0,
        v_1bpc_bit_ext  = (1U << 0),
        v_2bpc_bit_ext  = (1U << 1),
        v_3bpc_bit_ext  = (1U << 2),
        v_4bpc_bit_ext  = (1U << 3),
        v_5bpc_bit_ext  = (1U << 4),
        v_6bpc_bit_ext  = (1U << 5),
        v_7bpc_bit_ext  = (1U << 6),
        v_8bpc_bit_ext  = (1U << 7),
        v_9bpc_bit_ext  = (1U << 8),
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

    enum class pipeline_robustness_buffer_behavior
        : std::uint32_t
    {
        v_device_default         = 0,
        v_disabled               = 1,
        v_robust_buffer_access   = 2,
        v_robust_buffer_access_2 = 3
    };

    enum class pipeline_robustness_image_behavior
        : std::uint32_t
    {
        v_device_default        = 0,
        v_disabled              = 1,
        v_robust_image_access   = 2,
        v_robust_image_access_2 = 3
    };

    enum class optical_flow_grid_size_flag_bits_nv
        : std::uint32_t
    {
        v_unknown_nv = 0,
        v_1x1_bit_nv = (1U << 0),
        v_2x2_bit_nv = (1U << 1),
        v_4x4_bit_nv = (1U << 2),
        v_8x8_bit_nv = (1U << 3)
    };

    enum class optical_flow_usage_flag_bits_nv
        : std::uint32_t
    {
        v_unknown_nv         = 0,
        v_input_bit_nv       = (1U << 0),
        v_output_bit_nv      = (1U << 1),
        v_hint_bit_nv        = (1U << 2),
        v_cost_bit_nv        = (1U << 3),
        v_global_flow_bit_nv = (1U << 4)
    };

    enum class optical_flow_performance_level_nv
        : std::uint32_t
    {
        v_unknown_nv = 0,
        v_slow_nv    = 1,
        v_medium_nv  = 2,
        v_fast_nv    = 3
    };

    enum class optical_flow_session_binding_point_nv
        : std::uint32_t
    {
        v_unknown_nv              = 0,
        v_input_nv                = 1,
        v_reference_nv            = 2,
        v_hint_nv                 = 3,
        v_flow_vector_nv          = 4,
        v_backward_flow_vector_nv = 5,
        v_cost_nv                 = 6,
        v_backward_cost_nv        = 7,
        v_global_flow_nv          = 8
    };

    enum class optical_flow_session_create_flag_bits_nv
        : std::uint32_t
    {
        v_enable_hint_bit_nv        = (1U << 0),
        v_enable_cost_bit_nv        = (1U << 1),
        v_enable_global_flow_bit_nv = (1U << 2),
        v_allow_regions_bit_nv      = (1U << 3),
        v_both_directions_bit_nv    = (1U << 4)
    };

    enum class optical_flow_execute_flag_bits_nv
        : std::uint32_t
    {
        v_disable_temporal_hints_bit_nv = (1U << 0)
    };

    enum class micromap_type_ext
        : std::uint32_t
    {
        v_opacity_micromap_ext = 0
    };

    enum class build_micromap_flag_bits_ext
        : std::uint32_t
    {
        v_prefer_fast_trace_bit_ext = (1U << 0),
        v_prefer_fast_build_bit_ext = (1U << 1),
        v_allow_compaction_bit_ext  = (1U << 2)
    };

    enum class micromap_create_flag_bits_ext
        : std::uint32_t
    {
        v_device_address_capture_replay_bit_ext = (1U << 0)
    };

    enum class copy_micromap_mode_ext
        : std::uint32_t
    {
        v_clone_ext       = 0,
        v_serialize_ext   = 1,
        v_deserialize_ext = 2,
        v_compact_ext     = 3
    };

    enum class build_micromap_mode_ext
        : std::uint32_t
    {
        v_build_ext = 0
    };

    enum class opacity_micromap_format_ext
        : std::uint32_t
    {
        v_2_state_ext = 1,
        v_4_state_ext = 2
    };

    enum class opacity_micromap_special_index_ext
        : std::int32_t
    {
        v_fully_transparent_ext         = -1,
        v_fully_opaque_ext              = -2,
        v_fully_unknown_transparent_ext = -3,
        v_fully_unknown_opaque_ext      = -4
    };

    enum class depth_bias_representation_ext
        : std::uint32_t
    {
        v_least_representable_value_format_ext      = 0,
        v_least_representable_value_force_unorm_ext = 1,
        v_float_ext                                 = 2
    };

    enum class device_fault_address_type_ext
        : std::uint32_t
    {
        v_none_ext                        = 0,
        v_read_invalid_ext                = 1,
        v_write_invalid_ext               = 2,
        v_ecute_invalid_ext               = 3,
        v_instruction_pointer_unknown_ext = 4,
        v_instruction_pointer_invalid_ext = 5,
        v_instruction_pointer_fault_ext   = 6
    };

    enum class device_fault_vendor_binary_header_version_ext
        : std::uint32_t
    {
        v_one_ext = 1
    };

    enum class indirect_commands_layout_usage_flag_bits_ext
        : std::uint32_t
    {
        v_explicit_preprocess_bit_ext = (1U << 0),
        v_unordered_sequences_bit_ext = (1U << 1)
    };

    enum class indirect_execution_set_info_type_ext
        : std::uint32_t
    {
        v_pipelines_ext      = 0,
        v_shader_objects_ext = 1
    };

    enum class indirect_commands_input_mode_flag_bits_ext
        : std::uint32_t
    {
        v_vulkan_index_buffer_ext = (1U << 0),
        v_dxgi_index_buffer_ext   = (1U << 1)
    };

    enum class indirect_commands_token_type_ext
        : std::uint32_t
    {
        v_ecution_set_ext        = 0,
        v_push_constant_ext      = 1,
        v_sequence_index_ext     = 2,
        v_index_buffer_ext       = 3,
        v_vertex_buffer_ext      = 4,
        v_draw_indexed_ext       = 5,
        v_draw_ext               = 6,
        v_draw_indexed_count_ext = 7,
        v_draw_count_ext         = 8,
        v_dispatch_ext           = 9
    };

    enum class displacement_micromap_format_nv
        : std::uint32_t
    {
        v_64_triangles_64_bytes_nv    = 1,
        v_256_triangles_128_bytes_nv  = 2,
        v_1024_triangles_128_bytes_nv = 3
    };

    enum class shader_create_flag_bits_ext
        : std::uint32_t
    {
        v_link_stage_bit_ext = (1U << 0)
    };

    enum class shader_code_type_ext
        : std::uint32_t
    {
        v_binary_ext = 0,
        v_spirv_ext  = 1
    };

    enum class scope_khr
        : std::uint32_t
    {
        v_device_khr       = 1,
        v_workgroup_khr    = 2,
        v_subgroup_khr     = 3,
        v_queue_family_khr = 5
    };

    enum class component_type_khr
        : std::uint32_t
    {
        v_float16_khr = 0,
        v_float32_khr = 1,
        v_float64_khr = 2,
        v_sint8_khr   = 3,
        v_sint16_khr  = 4,
        v_sint32_khr  = 5,
        v_sint64_khr  = 6,
        v_uint8_khr   = 7,
        v_uint16_khr  = 8,
        v_uint32_khr  = 9,
        v_uint64_khr  = 10
    };

    enum class cubic_filter_weights_qcom
        : std::uint32_t
    {
        v_catmull_rom_qcom           = 0,
        v_zero_tangent_cardinal_qcom = 1,
        v_b_spline_qcom              = 2,
        v_mitchell_netravali_qcom    = 3
    };

    enum class block_match_window_compare_mode_qcom
        : std::uint32_t
    {
        v_min_qcom = 0,
        v_max_qcom = 1
    };

    enum class physical_device_layered_api_khr
        : std::uint32_t
    {
        v_vulkan_khr   = 0,
        v_d3d12_khr    = 1,
        v_metal_khr    = 2,
        v_opengl_khr   = 3,
        v_opengles_khr = 4
    };

    enum class layered_driver_underlying_api_msft
        : std::uint32_t
    {
        v_none_msft  = 0,
        v_d3d12_msft = 1
    };

    enum class latency_marker_nv
        : std::uint32_t
    {
        v_simulation_start_nv               = 0,
        v_simulation_end_nv                 = 1,
        v_rendersubmit_start_nv             = 2,
        v_rendersubmit_end_nv               = 3,
        v_present_start_nv                  = 4,
        v_present_end_nv                    = 5,
        v_input_sample_nv                   = 6,
        v_trigger_flash_nv                  = 7,
        v_out_of_band_rendersubmit_start_nv = 8,
        v_out_of_band_rendersubmit_end_nv   = 9,
        v_out_of_band_present_start_nv      = 10,
        v_out_of_band_present_end_nv        = 11
    };

    enum class out_of_band_queue_type_nv
        : std::uint32_t
    {
        v_render_nv  = 0,
        v_present_nv = 1
    };

    enum class memory_unmap_flag_bits
        : std::uint32_t
    {
    };

    enum class compressed_triangle_format_amdx
        : std::uint32_t
    {
        v_dgf1_amdx = 0
    };

    enum class wayland_surface_create_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class depth_clamp_mode_ext
        : std::uint32_t
    {
        v_viewport_range_ext     = 0,
        v_user_defined_range_ext = 1
    };

    enum class access_flag_bits3_khr
        : std::uint64_t
    {
        v_3_none_khr = 0
    };

    enum class tile_shading_render_pass_flag_bits_qcom
        : std::uint32_t
    {
        v_enable_bit_qcom             = (1U << 0),
        v_per_tile_execution_bit_qcom = (1U << 1)
    };

    enum class cooperative_vector_matrix_layout_nv
        : std::uint32_t
    {
        v_row_major_nv           = 0,
        v_column_major_nv        = 1,
        v_inferencing_optimal_nv = 2,
        v_training_optimal_nv    = 3
    };

    enum class address_copy_flag_bits_khr
        : std::uint32_t
    {
        v_device_local_bit_khr = (1U << 0),
        v_sparse_bit_khr       = (1U << 1),
        v_protected_bit_khr    = (1U << 2)
    };

    enum class tensor_create_flag_bits_arm
        : std::uint64_t
    {
        v_mutable_format_bit_arm = (1ULL << 0),
        v_protected_bit_arm      = (1ULL << 1)
    };

    enum class tensor_usage_flag_bits_arm
        : std::uint64_t
    {
        v_shader_bit_arm         = (1ULL << 1),
        v_transfer_src_bit_arm   = (1ULL << 2),
        v_transfer_dst_bit_arm   = (1ULL << 3),
        v_image_aliasing_bit_arm = (1ULL << 4)
    };

    enum class tensor_tiling_arm
        : std::uint32_t
    {
        v_optimal_arm = 0,
        v_linear_arm  = 1
    };

    enum class tensor_view_create_flag_bits_arm
        : std::uint64_t
    {
    };

    enum class default_vertex_attribute_value_khr
        : std::uint32_t
    {
        v_zero_zero_zero_zero_khr = 0,
        v_zero_zero_zero_one_khr  = 1
    };

    enum class data_graph_pipeline_session_create_flag_bits_arm
        : std::uint64_t
    {
        v_protected_bit_arm = (1ULL << 0)
    };

    enum class data_graph_pipeline_session_bind_point_arm
        : std::uint32_t
    {
        v_transient_arm = 0
    };

    enum class data_graph_pipeline_session_bind_point_type_arm
        : std::uint32_t
    {
        v_memory_arm = 0
    };

    enum class data_graph_pipeline_property_arm
        : std::uint32_t
    {
        v_creation_log_arm = 0,
        v_identifier_arm   = 1
    };

    enum class data_graph_pipeline_dispatch_flag_bits_arm
        : std::uint64_t
    {
    };

    enum class physical_device_data_graph_processing_engine_type_arm
        : std::uint32_t
    {
        v_default_arm = 0
    };

    enum class physical_device_data_graph_operation_type_arm
        : std::uint32_t
    {
        v_spirv_extended_instruction_set_arm = 0
    };

    enum class data_graph_model_cache_type_qcom
        : std::uint32_t
    {
        v_generic_binary_qcom = 0
    };

    enum class video_encode_rgb_model_conversion_flag_bits_valve
        : std::uint32_t
    {
        v_rgb_identity_bit_valve   = (1U << 0),
        v_ycbcr_identity_bit_valve = (1U << 1),
        v_ycbcr_709_bit_valve      = (1U << 2),
        v_ycbcr_601_bit_valve      = (1U << 3),
        v_ycbcr_2020_bit_valve     = (1U << 4)
    };

    enum class video_encode_rgb_range_compression_flag_bits_valve
        : std::uint32_t
    {
        v_ull_range_bit_valve    = (1U << 0),
        v_narrow_range_bit_valve = (1U << 1)
    };

    enum class video_encode_rgb_chroma_offset_flag_bits_valve
        : std::uint32_t
    {
        v_cosited_even_bit_valve = (1U << 0),
        v_midpoint_bit_valve     = (1U << 1)
    };

    enum class swapchain_image_usage_flag_bits_ohos
        : std::uint32_t
    {
        v_shared_bit_ohos = (1U << 0)
    };

    enum class descriptor_mapping_source_ext
        : std::uint32_t
    {
        v_heap_with_constant_offset_ext      = 0,
        v_heap_with_push_index_ext           = 1,
        v_heap_with_indirect_index_ext       = 2,
        v_heap_with_indirect_index_array_ext = 3,
        v_resource_heap_data_ext             = 4,
        v_push_data_ext                      = 5,
        v_push_address_ext                   = 6,
        v_indirect_address_ext               = 7
    };

    enum class spirv_resource_type_flag_bits_ext
        : std::uint32_t
    {
        v_all_ext                           = 0x7FFFFFFF,
        v_sampler_bit_ext                   = (1U << 0),
        v_sampled_image_bit_ext             = (1U << 1),
        v_read_only_image_bit_ext           = (1U << 2),
        v_read_write_image_bit_ext          = (1U << 3),
        v_combined_sampled_image_bit_ext    = (1U << 4),
        v_uniform_buffer_bit_ext            = (1U << 5),
        v_read_only_storage_buffer_bit_ext  = (1U << 6),
        v_read_write_storage_buffer_bit_ext = (1U << 7)
    };

}

#endif
