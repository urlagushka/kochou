#ifndef KTL_API_ENUMS_HPP
#define KTL_API_ENUMS_HPP

#ifndef KTL_API_API_HPP
#include "common.hpp"
#endif

namespace ktl::api
{

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
}

#endif
