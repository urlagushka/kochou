enum class image_layout
    : uint32_t
{
    iimage_layout_undefined                        = 0,
    iimage_layout_general                          = 1,
    iimage_layout_color_attachment_optimal         = 2,
    iimage_layout_depth_stencil_attachment_optimal = 3,
    iimage_layout_depth_stencil_read_only_optimal  = 4,
    iimage_layout_shader_read_only_optimal         = 5,
    iimage_layout_transfer_src_optimal             = 6,
    iimage_layout_transfer_dst_optimal             = 7,
    iimage_layout_preinitialized                   = 8
};

enum class attachment_load_op
    : uint32_t
{
    iattachment_load_op_load      = 0,
    iattachment_load_op_clear     = 1,
    iattachment_load_op_dont_care = 2
};

enum class attachment_store_op
    : uint32_t
{
    iattachment_store_op_store     = 0,
    iattachment_store_op_dont_care = 1
};

enum class image_type
    : uint32_t
{
    iimage_type_1d = 0,
    iimage_type_2d = 1,
    iimage_type_3d = 2
};

enum class image_tiling
    : uint32_t
{
    iimage_tiling_optimal = 0,
    iimage_tiling_linear  = 1
};

enum class image_view_type
    : uint32_t
{
    iimage_view_type_1d         = 0,
    iimage_view_type_2d         = 1,
    iimage_view_type_3d         = 2,
    iimage_view_type_cube       = 3,
    iimage_view_type_1d_array   = 4,
    iimage_view_type_2d_array   = 5,
    iimage_view_type_cube_array = 6
};

enum class command_buffer_level
    : uint32_t
{
    icommand_buffer_level_primary   = 0,
    icommand_buffer_level_secondary = 1
};

enum class component_swizzle
    : uint32_t
{
    icomponent_swizzle_identity = 0,
    icomponent_swizzle_zero     = 1,
    icomponent_swizzle_one      = 2,
    icomponent_swizzle_r        = 3,
    icomponent_swizzle_g        = 4,
    icomponent_swizzle_b        = 5,
    icomponent_swizzle_a        = 6
};

enum class descriptor_type
    : uint32_t
{
    idescriptor_type_sampler                = 0,
    idescriptor_type_combined_image_sampler = 1,
    idescriptor_type_sampled_image          = 2,
    idescriptor_type_storage_image          = 3,
    idescriptor_type_uniform_texel_buffer   = 4,
    idescriptor_type_storage_texel_buffer   = 5,
    idescriptor_type_uniform_buffer         = 6,
    idescriptor_type_storage_buffer         = 7,
    idescriptor_type_uniform_buffer_dynamic = 8,
    idescriptor_type_storage_buffer_dynamic = 9,
    idescriptor_type_input_attachment       = 10
};

enum class query_type
    : uint32_t
{
    iquery_type_occlusion           = 0,
    iquery_type_pipeline_statistics = 1,
    iquery_type_timestamp           = 2
};

enum class border_color
    : uint32_t
{
    iborder_color_float_transparent_black = 0,
    iborder_color_int_transparent_black   = 1,
    iborder_color_float_opaque_black      = 2,
    iborder_color_int_opaque_black        = 3,
    iborder_color_float_opaque_white      = 4,
    iborder_color_int_opaque_white        = 5
};

enum class pipeline_bind_point
    : uint32_t
{
    ipipeline_bind_point_graphics = 0,
    ipipeline_bind_point_compute  = 1
};

enum class pipeline_cache_header_version
    : uint32_t
{
    ipipeline_cache_header_version_one = 1
};

enum class pipeline_cache_create_flag_bits
    : uint32_t
{
};

enum class primitive_topology
    : uint32_t
{
    iprimitive_topology_point_list                    = 0,
    iprimitive_topology_line_list                     = 1,
    iprimitive_topology_line_strip                    = 2,
    iprimitive_topology_triangle_list                 = 3,
    iprimitive_topology_triangle_strip                = 4,
    iprimitive_topology_triangle_fan                  = 5,
    iprimitive_topology_line_list_with_adjacency      = 6,
    iprimitive_topology_line_strip_with_adjacency     = 7,
    iprimitive_topology_triangle_list_with_adjacency  = 8,
    iprimitive_topology_triangle_strip_with_adjacency = 9,
    iprimitive_topology_patch_list                    = 10
};

enum class sharing_mode
    : uint32_t
{
    isharing_mode_exclusive  = 0,
    isharing_mode_concurrent = 1
};

enum class index_type
    : uint32_t
{
    iindex_type_uint16 = 0,
    iindex_type_uint32 = 1
};

enum class filter
    : uint32_t
{
    ifilter_nearest = 0,
    ifilter_linear  = 1
};

enum class sampler_mipmap_mode
    : uint32_t
{
    isampler_mipmap_mode_nearest = 0,
    isampler_mipmap_mode_linear  = 1
};

enum class sampler_address_mode
    : uint32_t
{
    isampler_address_mode_repeat          = 0,
    isampler_address_mode_mirrored_repeat = 1,
    isampler_address_mode_clamp_to_edge   = 2,
    isampler_address_mode_clamp_to_border = 3
};

enum class compare_op
    : uint32_t
{
    icompare_op_never            = 0,
    icompare_op_less             = 1,
    icompare_op_equal            = 2,
    icompare_op_less_or_equal    = 3,
    icompare_op_greater          = 4,
    icompare_op_not_equal        = 5,
    icompare_op_greater_or_equal = 6,
    icompare_op_always           = 7
};

enum class polygon_mode
    : uint32_t
{
    ipolygon_mode_fill  = 0,
    ipolygon_mode_line  = 1,
    ipolygon_mode_point = 2
};

enum class front_face
    : uint32_t
{
    ifront_face_counter_clockwise = 0,
    ifront_face_clockwise         = 1
};

enum class blend_factor
    : uint32_t
{
    iblend_factor_zero                     = 0,
    iblend_factor_one                      = 1,
    iblend_factor_src_color                = 2,
    iblend_factor_one_minus_src_color      = 3,
    iblend_factor_dst_color                = 4,
    iblend_factor_one_minus_dst_color      = 5,
    iblend_factor_src_alpha                = 6,
    iblend_factor_one_minus_src_alpha      = 7,
    iblend_factor_dst_alpha                = 8,
    iblend_factor_one_minus_dst_alpha      = 9,
    iblend_factor_constant_color           = 10,
    iblend_factor_one_minus_constant_color = 11,
    iblend_factor_constant_alpha           = 12,
    iblend_factor_one_minus_constant_alpha = 13,
    iblend_factor_src_alpha_saturate       = 14,
    iblend_factor_src1_color               = 15,
    iblend_factor_one_minus_src1_color     = 16,
    iblend_factor_src1_alpha               = 17,
    iblend_factor_one_minus_src1_alpha     = 18
};

enum class blend_op
    : uint32_t
{
    iblend_op_add              = 0,
    iblend_op_subtract         = 1,
    iblend_op_reverse_subtract = 2,
    iblend_op_min              = 3,
    iblend_op_max              = 4
};

enum class stencil_op
    : uint32_t
{
    istencil_op_keep                = 0,
    istencil_op_zero                = 1,
    istencil_op_replace             = 2,
    istencil_op_increment_and_clamp = 3,
    istencil_op_decrement_and_clamp = 4,
    istencil_op_invert              = 5,
    istencil_op_increment_and_wrap  = 6,
    istencil_op_decrement_and_wrap  = 7
};

enum class logic_op
    : uint32_t
{
    ilogic_op_clear         = 0,
    ilogic_op_and           = 1,
    ilogic_op_and_reverse   = 2,
    ilogic_op_copy          = 3,
    ilogic_op_and_inverted  = 4,
    ilogic_op_no_op         = 5,
    ilogic_op_xor           = 6,
    ilogic_op_or            = 7,
    ilogic_op_nor           = 8,
    ilogic_op_equivalent    = 9,
    ilogic_op_invert        = 10,
    ilogic_op_or_reverse    = 11,
    ilogic_op_copy_inverted = 12,
    ilogic_op_or_inverted   = 13,
    ilogic_op_nand          = 14,
    ilogic_op_set           = 15
};

enum class internal_allocation_type
    : uint32_t
{
    iinternal_allocation_type_executable = 0
};

enum class system_allocation_scope
    : uint32_t
{
    isystem_allocation_scope_command  = 0,
    isystem_allocation_scope_object   = 1,
    isystem_allocation_scope_cache    = 2,
    isystem_allocation_scope_device   = 3,
    isystem_allocation_scope_instance = 4
};

enum class physical_device_type
    : uint32_t
{
    iphysical_device_type_other          = 0,
    iphysical_device_type_integrated_gpu = 1,
    iphysical_device_type_discrete_gpu   = 2,
    iphysical_device_type_virtual_gpu    = 3,
    iphysical_device_type_cpu            = 4
};

enum class vertex_input_rate
    : uint32_t
{
    ivertex_input_rate_vertex   = 0,
    ivertex_input_rate_instance = 1
};

enum class format
    : uint32_t
{
    iformat_undefined                  = 0,
    iformat_r4g4_unorm_pack8           = 1,
    iformat_r4g4b4a4_unorm_pack16      = 2,
    iformat_b4g4r4a4_unorm_pack16      = 3,
    iformat_r5g6b5_unorm_pack16        = 4,
    iformat_b5g6r5_unorm_pack16        = 5,
    iformat_r5g5b5a1_unorm_pack16      = 6,
    iformat_b5g5r5a1_unorm_pack16      = 7,
    iformat_a1r5g5b5_unorm_pack16      = 8,
    iformat_r8_unorm                   = 9,
    iformat_r8_snorm                   = 10,
    iformat_r8_uscaled                 = 11,
    iformat_r8_sscaled                 = 12,
    iformat_r8_uint                    = 13,
    iformat_r8_sint                    = 14,
    iformat_r8_srgb                    = 15,
    iformat_r8g8_unorm                 = 16,
    iformat_r8g8_snorm                 = 17,
    iformat_r8g8_uscaled               = 18,
    iformat_r8g8_sscaled               = 19,
    iformat_r8g8_uint                  = 20,
    iformat_r8g8_sint                  = 21,
    iformat_r8g8_srgb                  = 22,
    iformat_r8g8b8_unorm               = 23,
    iformat_r8g8b8_snorm               = 24,
    iformat_r8g8b8_uscaled             = 25,
    iformat_r8g8b8_sscaled             = 26,
    iformat_r8g8b8_uint                = 27,
    iformat_r8g8b8_sint                = 28,
    iformat_r8g8b8_srgb                = 29,
    iformat_b8g8r8_unorm               = 30,
    iformat_b8g8r8_snorm               = 31,
    iformat_b8g8r8_uscaled             = 32,
    iformat_b8g8r8_sscaled             = 33,
    iformat_b8g8r8_uint                = 34,
    iformat_b8g8r8_sint                = 35,
    iformat_b8g8r8_srgb                = 36,
    iformat_r8g8b8a8_unorm             = 37,
    iformat_r8g8b8a8_snorm             = 38,
    iformat_r8g8b8a8_uscaled           = 39,
    iformat_r8g8b8a8_sscaled           = 40,
    iformat_r8g8b8a8_uint              = 41,
    iformat_r8g8b8a8_sint              = 42,
    iformat_r8g8b8a8_srgb              = 43,
    iformat_b8g8r8a8_unorm             = 44,
    iformat_b8g8r8a8_snorm             = 45,
    iformat_b8g8r8a8_uscaled           = 46,
    iformat_b8g8r8a8_sscaled           = 47,
    iformat_b8g8r8a8_uint              = 48,
    iformat_b8g8r8a8_sint              = 49,
    iformat_b8g8r8a8_srgb              = 50,
    iformat_a8b8g8r8_unorm_pack32      = 51,
    iformat_a8b8g8r8_snorm_pack32      = 52,
    iformat_a8b8g8r8_uscaled_pack32    = 53,
    iformat_a8b8g8r8_sscaled_pack32    = 54,
    iformat_a8b8g8r8_uint_pack32       = 55,
    iformat_a8b8g8r8_sint_pack32       = 56,
    iformat_a8b8g8r8_srgb_pack32       = 57,
    iformat_a2r10g10b10_unorm_pack32   = 58,
    iformat_a2r10g10b10_snorm_pack32   = 59,
    iformat_a2r10g10b10_uscaled_pack32 = 60,
    iformat_a2r10g10b10_sscaled_pack32 = 61,
    iformat_a2r10g10b10_uint_pack32    = 62,
    iformat_a2r10g10b10_sint_pack32    = 63,
    iformat_a2b10g10r10_unorm_pack32   = 64,
    iformat_a2b10g10r10_snorm_pack32   = 65,
    iformat_a2b10g10r10_uscaled_pack32 = 66,
    iformat_a2b10g10r10_sscaled_pack32 = 67,
    iformat_a2b10g10r10_uint_pack32    = 68,
    iformat_a2b10g10r10_sint_pack32    = 69,
    iformat_r16_unorm                  = 70,
    iformat_r16_snorm                  = 71,
    iformat_r16_uscaled                = 72,
    iformat_r16_sscaled                = 73,
    iformat_r16_uint                   = 74,
    iformat_r16_sint                   = 75,
    iformat_r16_sfloat                 = 76,
    iformat_r16g16_unorm               = 77,
    iformat_r16g16_snorm               = 78,
    iformat_r16g16_uscaled             = 79,
    iformat_r16g16_sscaled             = 80,
    iformat_r16g16_uint                = 81,
    iformat_r16g16_sint                = 82,
    iformat_r16g16_sfloat              = 83,
    iformat_r16g16b16_unorm            = 84,
    iformat_r16g16b16_snorm            = 85,
    iformat_r16g16b16_uscaled          = 86,
    iformat_r16g16b16_sscaled          = 87,
    iformat_r16g16b16_uint             = 88,
    iformat_r16g16b16_sint             = 89,
    iformat_r16g16b16_sfloat           = 90,
    iformat_r16g16b16a16_unorm         = 91,
    iformat_r16g16b16a16_snorm         = 92,
    iformat_r16g16b16a16_uscaled       = 93,
    iformat_r16g16b16a16_sscaled       = 94,
    iformat_r16g16b16a16_uint          = 95,
    iformat_r16g16b16a16_sint          = 96,
    iformat_r16g16b16a16_sfloat        = 97,
    iformat_r32_uint                   = 98,
    iformat_r32_sint                   = 99,
    iformat_r32_sfloat                 = 100,
    iformat_r32g32_uint                = 101,
    iformat_r32g32_sint                = 102,
    iformat_r32g32_sfloat              = 103,
    iformat_r32g32b32_uint             = 104,
    iformat_r32g32b32_sint             = 105,
    iformat_r32g32b32_sfloat           = 106,
    iformat_r32g32b32a32_uint          = 107,
    iformat_r32g32b32a32_sint          = 108,
    iformat_r32g32b32a32_sfloat        = 109,
    iformat_r64_uint                   = 110,
    iformat_r64_sint                   = 111,
    iformat_r64_sfloat                 = 112,
    iformat_r64g64_uint                = 113,
    iformat_r64g64_sint                = 114,
    iformat_r64g64_sfloat              = 115,
    iformat_r64g64b64_uint             = 116,
    iformat_r64g64b64_sint             = 117,
    iformat_r64g64b64_sfloat           = 118,
    iformat_r64g64b64a64_uint          = 119,
    iformat_r64g64b64a64_sint          = 120,
    iformat_r64g64b64a64_sfloat        = 121,
    iformat_b10g11r11_ufloat_pack32    = 122,
    iformat_e5b9g9r9_ufloat_pack32     = 123,
    iformat_d16_unorm                  = 124,
    iformat_x8_d24_unorm_pack32        = 125,
    iformat_d32_sfloat                 = 126,
    iformat_s8_uint                    = 127,
    iformat_d16_unorm_s8_uint          = 128,
    iformat_d24_unorm_s8_uint          = 129,
    iformat_d32_sfloat_s8_uint         = 130,
    iformat_bc1_rgb_unorm_block        = 131,
    iformat_bc1_rgb_srgb_block         = 132,
    iformat_bc1_rgba_unorm_block       = 133,
    iformat_bc1_rgba_srgb_block        = 134,
    iformat_bc2_unorm_block            = 135,
    iformat_bc2_srgb_block             = 136,
    iformat_bc3_unorm_block            = 137,
    iformat_bc3_srgb_block             = 138,
    iformat_bc4_unorm_block            = 139,
    iformat_bc4_snorm_block            = 140,
    iformat_bc5_unorm_block            = 141,
    iformat_bc5_snorm_block            = 142,
    iformat_bc6h_ufloat_block          = 143,
    iformat_bc6h_sfloat_block          = 144,
    iformat_bc7_unorm_block            = 145,
    iformat_bc7_srgb_block             = 146,
    iformat_etc2_r8g8b8_unorm_block    = 147,
    iformat_etc2_r8g8b8_srgb_block     = 148,
    iformat_etc2_r8g8b8a1_unorm_block  = 149,
    iformat_etc2_r8g8b8a1_srgb_block   = 150,
    iformat_etc2_r8g8b8a8_unorm_block  = 151,
    iformat_etc2_r8g8b8a8_srgb_block   = 152,
    iformat_eac_r11_unorm_block        = 153,
    iformat_eac_r11_snorm_block        = 154,
    iformat_eac_r11g11_unorm_block     = 155,
    iformat_eac_r11g11_snorm_block     = 156,
    iformat_astc_4x4_unorm_block       = 157,
    iformat_astc_4x4_srgb_block        = 158,
    iformat_astc_5x4_unorm_block       = 159,
    iformat_astc_5x4_srgb_block        = 160,
    iformat_astc_5x5_unorm_block       = 161,
    iformat_astc_5x5_srgb_block        = 162,
    iformat_astc_6x5_unorm_block       = 163,
    iformat_astc_6x5_srgb_block        = 164,
    iformat_astc_6x6_unorm_block       = 165,
    iformat_astc_6x6_srgb_block        = 166,
    iformat_astc_8x5_unorm_block       = 167,
    iformat_astc_8x5_srgb_block        = 168,
    iformat_astc_8x6_unorm_block       = 169,
    iformat_astc_8x6_srgb_block        = 170,
    iformat_astc_8x8_unorm_block       = 171,
    iformat_astc_8x8_srgb_block        = 172,
    iformat_astc_10x5_unorm_block      = 173,
    iformat_astc_10x5_srgb_block       = 174,
    iformat_astc_10x6_unorm_block      = 175,
    iformat_astc_10x6_srgb_block       = 176,
    iformat_astc_10x8_unorm_block      = 177,
    iformat_astc_10x8_srgb_block       = 178,
    iformat_astc_10x10_unorm_block     = 179,
    iformat_astc_10x10_srgb_block      = 180,
    iformat_astc_12x10_unorm_block     = 181,
    iformat_astc_12x10_srgb_block      = 182,
    iformat_astc_12x12_unorm_block     = 183,
    iformat_astc_12x12_srgb_block      = 184
};

enum class structure_type
    : uint32_t
{
    istructure_type_application_info                          = 0,
    istructure_type_instance_create_info                      = 1,
    istructure_type_device_queue_create_info                  = 2,
    istructure_type_device_create_info                        = 3,
    istructure_type_submit_info                               = 4,
    istructure_type_memory_allocate_info                      = 5,
    istructure_type_mapped_memory_range                       = 6,
    istructure_type_bind_sparse_info                          = 7,
    istructure_type_fence_create_info                         = 8,
    istructure_type_semaphore_create_info                     = 9,
    istructure_type_event_create_info                         = 10,
    istructure_type_query_pool_create_info                    = 11,
    istructure_type_buffer_create_info                        = 12,
    istructure_type_buffer_view_create_info                   = 13,
    istructure_type_image_create_info                         = 14,
    istructure_type_image_view_create_info                    = 15,
    istructure_type_shader_module_create_info                 = 16,
    istructure_type_pipeline_cache_create_info                = 17,
    istructure_type_pipeline_shader_stage_create_info         = 18,
    istructure_type_pipeline_vertex_input_state_create_info   = 19,
    istructure_type_pipeline_input_assembly_state_create_info = 20,
    istructure_type_pipeline_tessellation_state_create_info   = 21,
    istructure_type_pipeline_viewport_state_create_info       = 22,
    istructure_type_pipeline_rasterization_state_create_info  = 23,
    istructure_type_pipeline_multisample_state_create_info    = 24,
    istructure_type_pipeline_depth_stencil_state_create_info  = 25,
    istructure_type_pipeline_color_blend_state_create_info    = 26,
    istructure_type_pipeline_dynamic_state_create_info        = 27,
    istructure_type_graphics_pipeline_create_info             = 28,
    istructure_type_compute_pipeline_create_info              = 29,
    istructure_type_pipeline_layout_create_info               = 30,
    istructure_type_sampler_create_info                       = 31,
    istructure_type_descriptor_set_layout_create_info         = 32,
    istructure_type_descriptor_pool_create_info               = 33,
    istructure_type_descriptor_set_allocate_info              = 34,
    istructure_type_write_descriptor_set                      = 35,
    istructure_type_copy_descriptor_set                       = 36,
    istructure_type_framebuffer_create_info                   = 37,
    istructure_type_render_pass_create_info                   = 38,
    istructure_type_command_pool_create_info                  = 39,
    istructure_type_command_buffer_allocate_info              = 40,
    istructure_type_command_buffer_inheritance_info           = 41,
    istructure_type_command_buffer_begin_info                 = 42,
    istructure_type_render_pass_begin_info                    = 43,
    istructure_type_buffer_memory_barrier                     = 44,
    istructure_type_image_memory_barrier                      = 45,
    istructure_type_memory_barrier                            = 46,
    istructure_type_loader_instance_create_info               = 47,
    istructure_type_loader_device_create_info                 = 48
};

enum class subpass_contents
    : uint32_t
{
    isubpass_contents_inline                    = 0,
    isubpass_contents_secondary_command_buffers = 1
};

enum class result
    : uint32_t
{
    isuccess                     = 0,
    inot_ready                   = 1,
    itimeout                     = 2,
    ievent_set                   = 3,
    ievent_reset                 = 4,
    iincomplete                  = 5,
    ierror_out_of_host_memory    = -1,
    ierror_out_of_device_memory  = -2,
    ierror_initialization_failed = -3,
    ierror_device_lost           = -4,
    ierror_memory_map_failed     = -5,
    ierror_layer_not_present     = -6,
    ierror_extension_not_present = -7,
    ierror_feature_not_present   = -8,
    ierror_incompatible_driver   = -9,
    ierror_too_many_objects      = -10,
    ierror_format_not_supported  = -11,
    ierror_fragmented_pool       = -12,
    ierror_unknown               = -13
};

enum class dynamic_state
    : uint32_t
{
    idynamic_state_viewport             = 0,
    idynamic_state_scissor              = 1,
    idynamic_state_line_width           = 2,
    idynamic_state_depth_bias           = 3,
    idynamic_state_blend_constants      = 4,
    idynamic_state_depth_bounds         = 5,
    idynamic_state_stencil_compare_mask = 6,
    idynamic_state_stencil_write_mask   = 7,
    idynamic_state_stencil_reference    = 8
};

enum class descriptor_update_template_type
    : uint32_t
{
    idescriptor_update_template_type_descriptor_set = 0
};

enum class object_type
    : uint32_t
{
    iobject_type_unknown               = 0,
    iobject_type_instance              = 1,
    iobject_type_physical_device       = 2,
    iobject_type_device                = 3,
    iobject_type_queue                 = 4,
    iobject_type_semaphore             = 5,
    iobject_type_command_buffer        = 6,
    iobject_type_fence                 = 7,
    iobject_type_device_memory         = 8,
    iobject_type_buffer                = 9,
    iobject_type_image                 = 10,
    iobject_type_event                 = 11,
    iobject_type_query_pool            = 12,
    iobject_type_buffer_view           = 13,
    iobject_type_image_view            = 14,
    iobject_type_shader_module         = 15,
    iobject_type_pipeline_cache        = 16,
    iobject_type_pipeline_layout       = 17,
    iobject_type_render_pass           = 18,
    iobject_type_pipeline              = 19,
    iobject_type_descriptor_set_layout = 20,
    iobject_type_sampler               = 21,
    iobject_type_descriptor_pool       = 22,
    iobject_type_descriptor_set        = 23,
    iobject_type_framebuffer           = 24,
    iobject_type_command_pool          = 25
};

enum class ray_tracing_invocation_reorder_mode_ext
    : uint32_t
{
    iray_tracing_invocation_reorder_mode_none_ext    = 0,
    iray_tracing_invocation_reorder_mode_reorder_ext = 1
};

enum class ray_tracing_lss_indexing_mode_nv
    : uint32_t
{
    iray_tracing_lss_indexing_mode_list_nv       = 0,
    iray_tracing_lss_indexing_mode_successive_nv = 1
};

enum class ray_tracing_lss_primitive_end_caps_mode_nv
    : uint32_t
{
    iray_tracing_lss_primitive_end_caps_mode_none_nv    = 0,
    iray_tracing_lss_primitive_end_caps_mode_chained_nv = 1
};

enum class direct_driver_loading_mode_lunarg
    : uint32_t
{
    idirect_driver_loading_mode_exclusive_lunarg = 0,
    idirect_driver_loading_mode_inclusive_lunarg = 1
};

enum class anti_lag_mode_amd
    : uint32_t
{
    ianti_lag_mode_driver_control_amd = 0,
    ianti_lag_mode_on_amd             = 1,
    ianti_lag_mode_off_amd            = 2
};

enum class anti_lag_stage_amd
    : uint32_t
{
    ianti_lag_stage_input_amd   = 0,
    ianti_lag_stage_present_amd = 1
};

enum class queue_flag_bits
    : uint32_t
{
    iqueue_graphics_bit       = (1U << 0),
    iqueue_compute_bit        = (1U << 1),
    iqueue_transfer_bit       = (1U << 2),
    iqueue_sparse_binding_bit = (1U << 3)
};

enum class cull_mode_flag_bits
    : uint32_t
{
    icull_mode_none           = 0,
    icull_mode_front_bit      = (1U << 0),
    icull_mode_back_bit       = (1U << 1),
    icull_mode_front_and_back = 0x00000003
};

enum class render_pass_create_flag_bits
    : uint32_t
{
};

enum class device_queue_create_flag_bits
    : uint32_t
{
};

enum class memory_property_flag_bits
    : uint32_t
{
    imemory_property_device_local_bit     = (1U << 0),
    imemory_property_host_visible_bit     = (1U << 1),
    imemory_property_host_coherent_bit    = (1U << 2),
    imemory_property_host_cached_bit      = (1U << 3),
    imemory_property_lazily_allocated_bit = (1U << 4)
};

enum class memory_heap_flag_bits
    : uint32_t
{
    imemory_heap_device_local_bit = (1U << 0)
};

enum class access_flag_bits
    : uint32_t
{
    iaccess_indirect_command_read_bit          = (1U << 0),
    iaccess_index_read_bit                     = (1U << 1),
    iaccess_vertex_attribute_read_bit          = (1U << 2),
    iaccess_uniform_read_bit                   = (1U << 3),
    iaccess_input_attachment_read_bit          = (1U << 4),
    iaccess_shader_read_bit                    = (1U << 5),
    iaccess_shader_write_bit                   = (1U << 6),
    iaccess_color_attachment_read_bit          = (1U << 7),
    iaccess_color_attachment_write_bit         = (1U << 8),
    iaccess_depth_stencil_attachment_read_bit  = (1U << 9),
    iaccess_depth_stencil_attachment_write_bit = (1U << 10),
    iaccess_transfer_read_bit                  = (1U << 11),
    iaccess_transfer_write_bit                 = (1U << 12),
    iaccess_host_read_bit                      = (1U << 13),
    iaccess_host_write_bit                     = (1U << 14),
    iaccess_memory_read_bit                    = (1U << 15),
    iaccess_memory_write_bit                   = (1U << 16)
};

enum class buffer_usage_flag_bits
    : uint32_t
{
    ibuffer_usage_transfer_src_bit         = (1U << 0),
    ibuffer_usage_transfer_dst_bit         = (1U << 1),
    ibuffer_usage_uniform_texel_buffer_bit = (1U << 2),
    ibuffer_usage_storage_texel_buffer_bit = (1U << 3),
    ibuffer_usage_uniform_buffer_bit       = (1U << 4),
    ibuffer_usage_storage_buffer_bit       = (1U << 5),
    ibuffer_usage_index_buffer_bit         = (1U << 6),
    ibuffer_usage_vertex_buffer_bit        = (1U << 7),
    ibuffer_usage_indirect_buffer_bit      = (1U << 8)
};

enum class buffer_usage_flag_bits2
    : uint64_t
{
    ibuffer_usage_2_transfer_src_bit         = (1ULL << 0),
    ibuffer_usage_2_transfer_dst_bit         = (1ULL << 1),
    ibuffer_usage_2_uniform_texel_buffer_bit = (1ULL << 2),
    ibuffer_usage_2_storage_texel_buffer_bit = (1ULL << 3),
    ibuffer_usage_2_uniform_buffer_bit       = (1ULL << 4),
    ibuffer_usage_2_storage_buffer_bit       = (1ULL << 5),
    ibuffer_usage_2_index_buffer_bit         = (1ULL << 6),
    ibuffer_usage_2_vertex_buffer_bit        = (1ULL << 7),
    ibuffer_usage_2_indirect_buffer_bit      = (1ULL << 8)
};

enum class buffer_create_flag_bits
    : uint32_t
{
    ibuffer_create_sparse_binding_bit   = (1U << 0),
    ibuffer_create_sparse_residency_bit = (1U << 1),
    ibuffer_create_sparse_aliased_bit   = (1U << 2)
};

enum class shader_stage_flag_bits
    : uint32_t
{
    ishader_stage_vertex_bit                  = (1U << 0),
    ishader_stage_tessellation_control_bit    = (1U << 1),
    ishader_stage_tessellation_evaluation_bit = (1U << 2),
    ishader_stage_geometry_bit                = (1U << 3),
    ishader_stage_fragment_bit                = (1U << 4),
    ishader_stage_compute_bit                 = (1U << 5),
    ishader_stage_all_graphics                = 0x0000001F,
    ishader_stage_all                         = 0x7FFFFFFF
};

enum class image_usage_flag_bits
    : uint32_t
{
    iimage_usage_transfer_src_bit             = (1U << 0),
    iimage_usage_transfer_dst_bit             = (1U << 1),
    iimage_usage_sampled_bit                  = (1U << 2),
    iimage_usage_storage_bit                  = (1U << 3),
    iimage_usage_color_attachment_bit         = (1U << 4),
    iimage_usage_depth_stencil_attachment_bit = (1U << 5),
    iimage_usage_transient_attachment_bit     = (1U << 6),
    iimage_usage_input_attachment_bit         = (1U << 7)
};

enum class image_create_flag_bits
    : uint32_t
{
    iimage_create_sparse_binding_bit   = (1U << 0),
    iimage_create_sparse_residency_bit = (1U << 1),
    iimage_create_sparse_aliased_bit   = (1U << 2),
    iimage_create_mutable_format_bit   = (1U << 3),
    iimage_create_cube_compatible_bit  = (1U << 4)
};

enum class image_view_create_flag_bits
    : uint32_t
{
};

enum class sampler_create_flag_bits
    : uint32_t
{
};

enum class pipeline_create_flag_bits
    : uint32_t
{
    ipipeline_create_disable_optimization_bit = (1U << 0),
    ipipeline_create_allow_derivatives_bit    = (1U << 1),
    ipipeline_create_derivative_bit           = (1U << 2)
};

enum class pipeline_create_flag_bits2
    : uint64_t
{
    ipipeline_create_2_disable_optimization_bit              = (1ULL << 0),
    ipipeline_create_2_allow_derivatives_bit                 = (1ULL << 1),
    ipipeline_create_2_derivative_bit                        = (1ULL << 2),
    ipipeline_create_2_view_index_from_device_index_bit      = (1ULL << 3),
    ipipeline_create_2_dispatch_base_bit                     = (1ULL << 4),
    ipipeline_create_2_fail_on_pipeline_compile_required_bit = (1ULL << 8),
    ipipeline_create_2_early_return_on_failure_bit           = (1ULL << 9),
    ipipeline_create_2_no_protected_access_bit               = (1ULL << 27),
    ipipeline_create_2_protected_access_only_bit             = (1ULL << 30)
};

enum class pipeline_shader_stage_create_flag_bits
    : uint32_t
{
};

enum class color_component_flag_bits
    : uint32_t
{
    icolor_component_r_bit = (1U << 0),
    icolor_component_g_bit = (1U << 1),
    icolor_component_b_bit = (1U << 2),
    icolor_component_a_bit = (1U << 3)
};

enum class fence_create_flag_bits
    : uint32_t
{
    ifence_create_signaled_bit = (1U << 0)
};

enum class semaphore_create_flag_bits
    : uint32_t
{
};

enum class format_feature_flag_bits
    : uint32_t
{
    iformat_feature_sampled_image_bit               = (1U << 0),
    iformat_feature_storage_image_bit               = (1U << 1),
    iformat_feature_storage_image_atomic_bit        = (1U << 2),
    iformat_feature_uniform_texel_buffer_bit        = (1U << 3),
    iformat_feature_storage_texel_buffer_bit        = (1U << 4),
    iformat_feature_storage_texel_buffer_atomic_bit = (1U << 5),
    iformat_feature_vertex_buffer_bit               = (1U << 6),
    iformat_feature_color_attachment_bit            = (1U << 7),
    iformat_feature_color_attachment_blend_bit      = (1U << 8),
    iformat_feature_depth_stencil_attachment_bit    = (1U << 9),
    iformat_feature_blit_src_bit                    = (1U << 10),
    iformat_feature_blit_dst_bit                    = (1U << 11),
    iformat_feature_sampled_image_filter_linear_bit = (1U << 12)
};

enum class query_control_flag_bits
    : uint32_t
{
    iquery_control_precise_bit = (1U << 0)
};

enum class query_result_flag_bits
    : uint32_t
{
    iquery_result_64_bit                = (1U << 0),
    iquery_result_wait_bit              = (1U << 1),
    iquery_result_with_availability_bit = (1U << 2),
    iquery_result_partial_bit           = (1U << 3)
};

enum class command_buffer_usage_flag_bits
    : uint32_t
{
    icommand_buffer_usage_one_time_submit_bit      = (1U << 0),
    icommand_buffer_usage_render_pass_continue_bit = (1U << 1),
    icommand_buffer_usage_simultaneous_use_bit     = (1U << 2)
};

enum class query_pipeline_statistic_flag_bits
    : uint32_t
{
    iquery_pipeline_statistic_input_assembly_vertices_bit                    = (1U << 0),
    iquery_pipeline_statistic_input_assembly_primitives_bit                  = (1U << 1),
    iquery_pipeline_statistic_vertex_shader_invocations_bit                  = (1U << 2),
    iquery_pipeline_statistic_geometry_shader_invocations_bit                = (1U << 3),
    iquery_pipeline_statistic_geometry_shader_primitives_bit                 = (1U << 4),
    iquery_pipeline_statistic_clipping_invocations_bit                       = (1U << 5),
    iquery_pipeline_statistic_clipping_primitives_bit                        = (1U << 6),
    iquery_pipeline_statistic_fragment_shader_invocations_bit                = (1U << 7),
    iquery_pipeline_statistic_tessellation_control_shader_patches_bit        = (1U << 8),
    iquery_pipeline_statistic_tessellation_evaluation_shader_invocations_bit = (1U << 9),
    iquery_pipeline_statistic_compute_shader_invocations_bit                 = (1U << 10)
};

enum class memory_map_flag_bits
    : uint32_t
{
};

enum class image_aspect_flag_bits
    : uint32_t
{
    iimage_aspect_color_bit    = (1U << 0),
    iimage_aspect_depth_bit    = (1U << 1),
    iimage_aspect_stencil_bit  = (1U << 2),
    iimage_aspect_metadata_bit = (1U << 3)
};

enum class sparse_image_format_flag_bits
    : uint32_t
{
    isparse_image_format_single_miptail_bit         = (1U << 0),
    isparse_image_format_aligned_mip_size_bit       = (1U << 1),
    isparse_image_format_nonstandard_block_size_bit = (1U << 2)
};

enum class sparse_memory_bind_flag_bits
    : uint32_t
{
    isparse_memory_bind_metadata_bit = (1U << 0)
};

enum class pipeline_stage_flag_bits
    : uint32_t
{
    ipipeline_stage_top_of_pipe_bit                    = (1U << 0),
    ipipeline_stage_draw_indirect_bit                  = (1U << 1),
    ipipeline_stage_vertex_input_bit                   = (1U << 2),
    ipipeline_stage_vertex_shader_bit                  = (1U << 3),
    ipipeline_stage_tessellation_control_shader_bit    = (1U << 4),
    ipipeline_stage_tessellation_evaluation_shader_bit = (1U << 5),
    ipipeline_stage_geometry_shader_bit                = (1U << 6),
    ipipeline_stage_fragment_shader_bit                = (1U << 7),
    ipipeline_stage_early_fragment_tests_bit           = (1U << 8),
    ipipeline_stage_late_fragment_tests_bit            = (1U << 9),
    ipipeline_stage_color_attachment_output_bit        = (1U << 10),
    ipipeline_stage_compute_shader_bit                 = (1U << 11),
    ipipeline_stage_transfer_bit                       = (1U << 12),
    ipipeline_stage_bottom_of_pipe_bit                 = (1U << 13),
    ipipeline_stage_host_bit                           = (1U << 14),
    ipipeline_stage_all_graphics_bit                   = (1U << 15),
    ipipeline_stage_all_commands_bit                   = (1U << 16)
};

enum class command_pool_create_flag_bits
    : uint32_t
{
    icommand_pool_create_transient_bit            = (1U << 0),
    icommand_pool_create_reset_command_buffer_bit = (1U << 1)
};

enum class command_pool_reset_flag_bits
    : uint32_t
{
    icommand_pool_reset_release_resources_bit = (1U << 0)
};

enum class command_buffer_reset_flag_bits
    : uint32_t
{
    icommand_buffer_reset_release_resources_bit = (1U << 0)
};

enum class sample_count_flag_bits
    : uint32_t
{
    isample_count_1_bit  = (1U << 0),
    isample_count_2_bit  = (1U << 1),
    isample_count_4_bit  = (1U << 2),
    isample_count_8_bit  = (1U << 3),
    isample_count_16_bit = (1U << 4),
    isample_count_32_bit = (1U << 5),
    isample_count_64_bit = (1U << 6)
};

enum class attachment_description_flag_bits
    : uint32_t
{
    iattachment_description_may_alias_bit = (1U << 0)
};

enum class stencil_face_flag_bits
    : uint32_t
{
                   istencil_face_front_bit      = (1U << 0),
                   istencil_face_back_bit       = (1U << 1),
                   istencil_face_front_and_back = 0x00000003,
    [[deprecated]] istencil_front_and_back      = 0x00000003
};

enum class descriptor_pool_create_flag_bits
    : uint32_t
{
    idescriptor_pool_create_free_descriptor_set_bit = (1U << 0)
};

enum class dependency_flag_bits
    : uint32_t
{
    idependency_by_region_bit = (1U << 0)
};

enum class semaphore_type
    : uint32_t
{
    isemaphore_type_binary   = 0,
    isemaphore_type_timeline = 1
};

enum class semaphore_wait_flag_bits
    : uint32_t
{
    isemaphore_wait_any_bit = (1U << 0)
};

enum class present_mode_khr
    : uint32_t
{
    ipresent_mode_immediate_khr    = 0,
    ipresent_mode_mailbox_khr      = 1,
    ipresent_mode_fifo_khr         = 2,
    ipresent_mode_fifo_relaxed_khr = 3
};

enum class color_space_khr
    : uint32_t
{
                   icolor_space_srgb_nonlinear_khr = 0,
    [[deprecated]] icolorspace_srgb_nonlinear_khr  = 0
};

enum class display_plane_alpha_flag_bits_khr
    : uint32_t
{
    idisplay_plane_alpha_opaque_bit_khr                  = (1U << 0),
    idisplay_plane_alpha_global_bit_khr                  = (1U << 1),
    idisplay_plane_alpha_per_pixel_bit_khr               = (1U << 2),
    idisplay_plane_alpha_per_pixel_premultiplied_bit_khr = (1U << 3)
};

enum class composite_alpha_flag_bits_khr
    : uint32_t
{
    icomposite_alpha_opaque_bit_khr          = (1U << 0),
    icomposite_alpha_pre_multiplied_bit_khr  = (1U << 1),
    icomposite_alpha_post_multiplied_bit_khr = (1U << 2),
    icomposite_alpha_inherit_bit_khr         = (1U << 3)
};

enum class surface_transform_flag_bits_khr
    : uint32_t
{
    isurface_transform_identity_bit_khr                     = (1U << 0),
    isurface_transform_rotate_90_bit_khr                    = (1U << 1),
    isurface_transform_rotate_180_bit_khr                   = (1U << 2),
    isurface_transform_rotate_270_bit_khr                   = (1U << 3),
    isurface_transform_horizontal_mirror_bit_khr            = (1U << 4),
    isurface_transform_horizontal_mirror_rotate_90_bit_khr  = (1U << 5),
    isurface_transform_horizontal_mirror_rotate_180_bit_khr = (1U << 6),
    isurface_transform_horizontal_mirror_rotate_270_bit_khr = (1U << 7),
    isurface_transform_inherit_bit_khr                      = (1U << 8)
};

enum class display_surface_stereo_type_nv
    : uint32_t
{
    idisplay_surface_stereo_type_none_nv               = 0,
    idisplay_surface_stereo_type_onboard_din_nv        = 1,
    idisplay_surface_stereo_type_hdmi_3d_nv            = 2,
    idisplay_surface_stereo_type_inband_displayport_nv = 3
};

enum class swapchain_image_usage_flag_bits_android
    : uint32_t
{
    iswapchain_image_usage_shared_bit_android = (1U << 0)
};

enum class time_domain_khr
    : uint32_t
{
    itime_domain_device_khr                    = 0,
    itime_domain_clock_monotonic_khr           = 1,
    itime_domain_clock_monotonic_raw_khr       = 2,
    itime_domain_query_performance_counter_khr = 3
};

enum class debug_report_flag_bits_ext
    : uint32_t
{
    idebug_report_information_bit_ext         = (1U << 0),
    idebug_report_warning_bit_ext             = (1U << 1),
    idebug_report_performance_warning_bit_ext = (1U << 2),
    idebug_report_error_bit_ext               = (1U << 3),
    idebug_report_debug_bit_ext               = (1U << 4)
};

enum class debug_report_object_type_ext
    : uint32_t
{
                   idebug_report_object_type_unknown_ext                   = 0,
                   idebug_report_object_type_instance_ext                  = 1,
                   idebug_report_object_type_physical_device_ext           = 2,
                   idebug_report_object_type_device_ext                    = 3,
                   idebug_report_object_type_queue_ext                     = 4,
                   idebug_report_object_type_semaphore_ext                 = 5,
                   idebug_report_object_type_command_buffer_ext            = 6,
                   idebug_report_object_type_fence_ext                     = 7,
                   idebug_report_object_type_device_memory_ext             = 8,
                   idebug_report_object_type_buffer_ext                    = 9,
                   idebug_report_object_type_image_ext                     = 10,
                   idebug_report_object_type_event_ext                     = 11,
                   idebug_report_object_type_query_pool_ext                = 12,
                   idebug_report_object_type_buffer_view_ext               = 13,
                   idebug_report_object_type_image_view_ext                = 14,
                   idebug_report_object_type_shader_module_ext             = 15,
                   idebug_report_object_type_pipeline_cache_ext            = 16,
                   idebug_report_object_type_pipeline_layout_ext           = 17,
                   idebug_report_object_type_render_pass_ext               = 18,
                   idebug_report_object_type_pipeline_ext                  = 19,
                   idebug_report_object_type_descriptor_set_layout_ext     = 20,
                   idebug_report_object_type_sampler_ext                   = 21,
                   idebug_report_object_type_descriptor_pool_ext           = 22,
                   idebug_report_object_type_descriptor_set_ext            = 23,
                   idebug_report_object_type_framebuffer_ext               = 24,
                   idebug_report_object_type_command_pool_ext              = 25,
                   idebug_report_object_type_surface_khr_ext               = 26,
                   idebug_report_object_type_swapchain_khr_ext             = 27,
                   idebug_report_object_type_debug_report_callback_ext_ext = 28,
    [[deprecated]] idebug_report_object_type_debug_report_ext              = 28,
                   idebug_report_object_type_display_khr_ext               = 29,
                   idebug_report_object_type_display_mode_khr_ext          = 30,
                   idebug_report_object_type_validation_cache_ext_ext      = 33,
    [[deprecated]] idebug_report_object_type_validation_cache_ext          = 33
};

enum class device_memory_report_event_type_ext
    : uint32_t
{
    idevice_memory_report_event_type_allocate_ext          = 0,
    idevice_memory_report_event_type_free_ext              = 1,
    idevice_memory_report_event_type_import_ext            = 2,
    idevice_memory_report_event_type_unimport_ext          = 3,
    idevice_memory_report_event_type_allocation_failed_ext = 4
};

enum class rasterization_order_amd
    : uint32_t
{
    irasterization_order_strict_amd  = 0,
    irasterization_order_relaxed_amd = 1
};

enum class external_memory_handle_type_flag_bits_nv
    : uint32_t
{
    iexternal_memory_handle_type_opaque_win32_bit_nv     = (1U << 0),
    iexternal_memory_handle_type_opaque_win32_kmt_bit_nv = (1U << 1),
    iexternal_memory_handle_type_d3d11_image_bit_nv      = (1U << 2),
    iexternal_memory_handle_type_d3d11_image_kmt_bit_nv  = (1U << 3)
};

enum class external_memory_feature_flag_bits_nv
    : uint32_t
{
    iexternal_memory_feature_dedicated_only_bit_nv = (1U << 0),
    iexternal_memory_feature_exportable_bit_nv     = (1U << 1),
    iexternal_memory_feature_importable_bit_nv     = (1U << 2)
};

enum class cluster_acceleration_structure_index_format_flag_bits_nv
    : uint32_t
{
    icluster_acceleration_structure_index_format_8bit_nv  = (1U << 0),
    icluster_acceleration_structure_index_format_16bit_nv = (1U << 1),
    icluster_acceleration_structure_index_format_32bit_nv = (1U << 2)
};

enum class cluster_acceleration_structure_type_nv
    : uint32_t
{
    icluster_acceleration_structure_type_clusters_bottom_level_nv     = 0,
    icluster_acceleration_structure_type_triangle_cluster_nv          = 1,
    icluster_acceleration_structure_type_triangle_cluster_template_nv = 2
};

enum class cluster_acceleration_structure_op_type_nv
    : uint32_t
{
    icluster_acceleration_structure_op_type_move_objects_nv                    = 0,
    icluster_acceleration_structure_op_type_build_clusters_bottom_level_nv     = 1,
    icluster_acceleration_structure_op_type_build_triangle_cluster_nv          = 2,
    icluster_acceleration_structure_op_type_build_triangle_cluster_template_nv = 3,
    icluster_acceleration_structure_op_type_instantiate_triangle_cluster_nv    = 4,
    icluster_acceleration_structure_op_type_get_cluster_template_indices_nv    = 5
};

enum class cluster_acceleration_structure_op_mode_nv
    : uint32_t
{
    icluster_acceleration_structure_op_mode_implicit_destinations_nv = 0,
    icluster_acceleration_structure_op_mode_explicit_destinations_nv = 1,
    icluster_acceleration_structure_op_mode_compute_sizes_nv         = 2
};

enum class cluster_acceleration_structure_cluster_flag_bits_nv
    : uint32_t
{
    icluster_acceleration_structure_cluster_allow_disable_opacity_micromaps_nv = (1U << 0)
};

enum class cluster_acceleration_structure_geometry_flag_bits_nv
    : uint32_t
{
    icluster_acceleration_structure_geometry_cull_disable_bit_nv                   = (1U << 0),
    icluster_acceleration_structure_geometry_no_duplicate_anyhit_invocation_bit_nv = (1U << 1),
    icluster_acceleration_structure_geometry_opaque_bit_nv                         = (1U << 2)
};

enum class cluster_acceleration_structure_address_resolution_flag_bits_nv
    : uint32_t
{
    icluster_acceleration_structure_address_resolution_none_nv                             = 0,
    icluster_acceleration_structure_address_resolution_indirected_dst_implicit_data_bit_nv = (1U << 0),
    icluster_acceleration_structure_address_resolution_indirected_scratch_data_bit_nv      = (1U << 1),
    icluster_acceleration_structure_address_resolution_indirected_dst_address_array_bit_nv = (1U << 2),
    icluster_acceleration_structure_address_resolution_indirected_dst_sizes_array_bit_nv   = (1U << 3),
    icluster_acceleration_structure_address_resolution_indirected_src_infos_array_bit_nv   = (1U << 4),
    icluster_acceleration_structure_address_resolution_indirected_src_infos_count_bit_nv   = (1U << 5)
};

enum class validation_check_ext
    : uint32_t
{
    ivalidation_check_all_ext     = 0,
    ivalidation_check_shaders_ext = 1
};

enum class validation_feature_enable_ext
    : uint32_t
{
    ivalidation_feature_enable_gpu_assisted_ext                      = 0,
    ivalidation_feature_enable_gpu_assisted_reserve_binding_slot_ext = 1,
    ivalidation_feature_enable_best_practices_ext                    = 2,
    ivalidation_feature_enable_debug_printf_ext                      = 3,
    ivalidation_feature_enable_synchronization_validation_ext        = 4
};

enum class validation_feature_disable_ext
    : uint32_t
{
    ivalidation_feature_disable_all_ext                     = 0,
    ivalidation_feature_disable_shaders_ext                 = 1,
    ivalidation_feature_disable_thread_safety_ext           = 2,
    ivalidation_feature_disable_api_parameters_ext          = 3,
    ivalidation_feature_disable_object_lifetimes_ext        = 4,
    ivalidation_feature_disable_core_checks_ext             = 5,
    ivalidation_feature_disable_unique_handles_ext          = 6,
    ivalidation_feature_disable_shader_validation_cache_ext = 7
};

enum class layer_setting_type_ext
    : uint32_t
{
    ilayer_setting_type_bool32_ext  = 0,
    ilayer_setting_type_int32_ext   = 1,
    ilayer_setting_type_int64_ext   = 2,
    ilayer_setting_type_uint32_ext  = 3,
    ilayer_setting_type_uint64_ext  = 4,
    ilayer_setting_type_float32_ext = 5,
    ilayer_setting_type_float64_ext = 6,
    ilayer_setting_type_string_ext  = 7
};

enum class subgroup_feature_flag_bits
    : uint32_t
{
    isubgroup_feature_basic_bit            = (1U << 0),
    isubgroup_feature_vote_bit             = (1U << 1),
    isubgroup_feature_arithmetic_bit       = (1U << 2),
    isubgroup_feature_ballot_bit           = (1U << 3),
    isubgroup_feature_shuffle_bit          = (1U << 4),
    isubgroup_feature_shuffle_relative_bit = (1U << 5),
    isubgroup_feature_clustered_bit        = (1U << 6),
    isubgroup_feature_quad_bit             = (1U << 7)
};

enum class indirect_commands_layout_usage_flag_bits_nv
    : uint32_t
{
    iindirect_commands_layout_usage_explicit_preprocess_bit_nv = (1U << 0),
    iindirect_commands_layout_usage_indexed_sequences_bit_nv   = (1U << 1),
    iindirect_commands_layout_usage_unordered_sequences_bit_nv = (1U << 2)
};

enum class indirect_state_flag_bits_nv
    : uint32_t
{
    iindirect_state_flag_frontface_bit_nv = (1U << 0)
};

enum class indirect_commands_token_type_nv
    : uint32_t
{
    iindirect_commands_token_type_shader_group_nv  = 0,
    iindirect_commands_token_type_state_flags_nv   = 1,
    iindirect_commands_token_type_index_buffer_nv  = 2,
    iindirect_commands_token_type_vertex_buffer_nv = 3,
    iindirect_commands_token_type_push_constant_nv = 4,
    iindirect_commands_token_type_draw_indexed_nv  = 5,
    iindirect_commands_token_type_draw_nv          = 6,
    iindirect_commands_token_type_draw_tasks_nv    = 7
};

enum class private_data_slot_create_flag_bits
    : uint32_t
{
};

enum class descriptor_set_layout_create_flag_bits
    : uint32_t
{
};

enum class external_memory_handle_type_flag_bits
    : uint32_t
{
    iexternal_memory_handle_type_opaque_fd_bit         = (1U << 0),
    iexternal_memory_handle_type_opaque_win32_bit      = (1U << 1),
    iexternal_memory_handle_type_opaque_win32_kmt_bit  = (1U << 2),
    iexternal_memory_handle_type_d3d11_texture_bit     = (1U << 3),
    iexternal_memory_handle_type_d3d11_texture_kmt_bit = (1U << 4),
    iexternal_memory_handle_type_d3d12_heap_bit        = (1U << 5),
    iexternal_memory_handle_type_d3d12_resource_bit    = (1U << 6)
};

enum class external_memory_feature_flag_bits
    : uint32_t
{
    iexternal_memory_feature_dedicated_only_bit = (1U << 0),
    iexternal_memory_feature_exportable_bit     = (1U << 1),
    iexternal_memory_feature_importable_bit     = (1U << 2)
};

enum class external_semaphore_handle_type_flag_bits
    : uint32_t
{
    iexternal_semaphore_handle_type_opaque_fd_bit        = (1U << 0),
    iexternal_semaphore_handle_type_opaque_win32_bit     = (1U << 1),
    iexternal_semaphore_handle_type_opaque_win32_kmt_bit = (1U << 2),
    iexternal_semaphore_handle_type_d3d12_fence_bit      = (1U << 3),
    iexternal_semaphore_handle_type_d3d11_fence_bit      = (1U << 3),
    iexternal_semaphore_handle_type_sync_fd_bit          = (1U << 4)
};

enum class external_semaphore_feature_flag_bits
    : uint32_t
{
    iexternal_semaphore_feature_exportable_bit = (1U << 0),
    iexternal_semaphore_feature_importable_bit = (1U << 1)
};

enum class semaphore_import_flag_bits
    : uint32_t
{
    isemaphore_import_temporary_bit = (1U << 0)
};

enum class external_fence_handle_type_flag_bits
    : uint32_t
{
    iexternal_fence_handle_type_opaque_fd_bit        = (1U << 0),
    iexternal_fence_handle_type_opaque_win32_bit     = (1U << 1),
    iexternal_fence_handle_type_opaque_win32_kmt_bit = (1U << 2),
    iexternal_fence_handle_type_sync_fd_bit          = (1U << 3)
};

enum class external_fence_feature_flag_bits
    : uint32_t
{
    iexternal_fence_feature_exportable_bit = (1U << 0),
    iexternal_fence_feature_importable_bit = (1U << 1)
};

enum class fence_import_flag_bits
    : uint32_t
{
    ifence_import_temporary_bit = (1U << 0)
};

enum class surface_counter_flag_bits_ext
    : uint32_t
{
                   isurface_counter_vblank_bit_ext = (1U << 0),
    [[deprecated]] isurface_counter_vblank_ext     = (1U << 0)
};

enum class display_power_state_ext
    : uint32_t
{
    idisplay_power_state_off_ext     = 0,
    idisplay_power_state_suspend_ext = 1,
    idisplay_power_state_on_ext      = 2
};

enum class device_event_type_ext
    : uint32_t
{
    idevice_event_type_display_hotplug_ext = 0
};

enum class display_event_type_ext
    : uint32_t
{
    idisplay_event_type_first_pixel_out_ext = 0
};

enum class peer_memory_feature_flag_bits
    : uint32_t
{
    ipeer_memory_feature_copy_src_bit    = (1U << 0),
    ipeer_memory_feature_copy_dst_bit    = (1U << 1),
    ipeer_memory_feature_generic_src_bit = (1U << 2),
    ipeer_memory_feature_generic_dst_bit = (1U << 3)
};

enum class memory_allocate_flag_bits
    : uint32_t
{
    imemory_allocate_device_mask_bit = (1U << 0)
};

enum class device_group_present_mode_flag_bits_khr
    : uint32_t
{
    idevice_group_present_mode_local_bit_khr              = (1U << 0),
    idevice_group_present_mode_remote_bit_khr             = (1U << 1),
    idevice_group_present_mode_sum_bit_khr                = (1U << 2),
    idevice_group_present_mode_local_multi_device_bit_khr = (1U << 3)
};

enum class swapchain_create_flag_bits_khr
    : uint32_t
{
};

enum class viewport_coordinate_swizzle_nv
    : uint32_t
{
    iviewport_coordinate_swizzle_positive_x_nv = 0,
    iviewport_coordinate_swizzle_negative_x_nv = 1,
    iviewport_coordinate_swizzle_positive_y_nv = 2,
    iviewport_coordinate_swizzle_negative_y_nv = 3,
    iviewport_coordinate_swizzle_positive_z_nv = 4,
    iviewport_coordinate_swizzle_negative_z_nv = 5,
    iviewport_coordinate_swizzle_positive_w_nv = 6,
    iviewport_coordinate_swizzle_negative_w_nv = 7
};

enum class discard_rectangle_mode_ext
    : uint32_t
{
    idiscard_rectangle_mode_inclusive_ext = 0,
    idiscard_rectangle_mode_exclusive_ext = 1
};

enum class subpass_description_flag_bits
    : uint32_t
{
};

enum class point_clipping_behavior
    : uint32_t
{
    ipoint_clipping_behavior_all_clip_planes       = 0,
    ipoint_clipping_behavior_user_clip_planes_only = 1
};

enum class sampler_reduction_mode
    : uint32_t
{
    isampler_reduction_mode_weighted_average = 0,
    isampler_reduction_mode_min              = 1,
    isampler_reduction_mode_max              = 2
};

enum class tessellation_domain_origin
    : uint32_t
{
    itessellation_domain_origin_upper_left = 0,
    itessellation_domain_origin_lower_left = 1
};

enum class sampler_ycbcr_model_conversion
    : uint32_t
{
    isampler_ycbcr_model_conversion_rgb_identity   = 0,
    isampler_ycbcr_model_conversion_ycbcr_identity = 1,
    isampler_ycbcr_model_conversion_ycbcr_709      = 2,
    isampler_ycbcr_model_conversion_ycbcr_601      = 3,
    isampler_ycbcr_model_conversion_ycbcr_2020     = 4
};

enum class sampler_ycbcr_range
    : uint32_t
{
    isampler_ycbcr_range_itu_full   = 0,
    isampler_ycbcr_range_itu_narrow = 1
};

enum class chroma_location
    : uint32_t
{
    ichroma_location_cosited_even = 0,
    ichroma_location_midpoint     = 1
};

enum class blend_overlap_ext
    : uint32_t
{
    iblend_overlap_uncorrelated_ext = 0,
    iblend_overlap_disjoint_ext     = 1,
    iblend_overlap_conjoint_ext     = 2
};

enum class coverage_modulation_mode_nv
    : uint32_t
{
    icoverage_modulation_mode_none_nv  = 0,
    icoverage_modulation_mode_rgb_nv   = 1,
    icoverage_modulation_mode_alpha_nv = 2,
    icoverage_modulation_mode_rgba_nv  = 3
};

enum class coverage_reduction_mode_nv
    : uint32_t
{
    icoverage_reduction_mode_merge_nv    = 0,
    icoverage_reduction_mode_truncate_nv = 1
};

enum class validation_cache_header_version_ext
    : uint32_t
{
    ivalidation_cache_header_version_one_ext = 1
};

enum class shader_info_type_amd
    : uint32_t
{
    ishader_info_type_statistics_amd  = 0,
    ishader_info_type_binary_amd      = 1,
    ishader_info_type_disassembly_amd = 2
};

enum class queue_global_priority
    : uint32_t
{
    iqueue_global_priority_low      = 128,
    iqueue_global_priority_medium   = 256,
    iqueue_global_priority_high     = 512,
    iqueue_global_priority_realtime = 1024
};

enum class debug_utils_message_severity_flag_bits_ext
    : uint32_t
{
    idebug_utils_message_severity_verbose_bit_ext = (1U << 0),
    idebug_utils_message_severity_info_bit_ext    = (1U << 4),
    idebug_utils_message_severity_warning_bit_ext = (1U << 8),
    idebug_utils_message_severity_error_bit_ext   = (1U << 12)
};

enum class debug_utils_message_type_flag_bits_ext
    : uint32_t
{
    idebug_utils_message_type_general_bit_ext     = (1U << 0),
    idebug_utils_message_type_validation_bit_ext  = (1U << 1),
    idebug_utils_message_type_performance_bit_ext = (1U << 2)
};

enum class conservative_rasterization_mode_ext
    : uint32_t
{
    iconservative_rasterization_mode_disabled_ext      = 0,
    iconservative_rasterization_mode_overestimate_ext  = 1,
    iconservative_rasterization_mode_underestimate_ext = 2
};

enum class descriptor_binding_flag_bits
    : uint32_t
{
    idescriptor_binding_update_after_bind_bit           = (1U << 0),
    idescriptor_binding_update_unused_while_pending_bit = (1U << 1),
    idescriptor_binding_partially_bound_bit             = (1U << 2),
    idescriptor_binding_variable_descriptor_count_bit   = (1U << 3)
};

enum class vendor_id
    : uint32_t
{
    ivendor_id_khronos  = 0x10000,
    ivendor_id_viv      = 0x10001,
    ivendor_id_vsi      = 0x10002,
    ivendor_id_kazan    = 0x10003,
    ivendor_id_codeplay = 0x10004,
    ivendor_id_mesa     = 0x10005,
    ivendor_id_pocl     = 0x10006,
    ivendor_id_mobileye = 0x10007
};

enum class driver_id
    : uint32_t
{
    idriver_id_amd_proprietary               = 1,
    idriver_id_amd_open_source               = 2,
    idriver_id_mesa_radv                     = 3,
    idriver_id_nvidia_proprietary            = 4,
    idriver_id_intel_proprietary_windows     = 5,
    idriver_id_intel_open_source_mesa        = 6,
    idriver_id_imagination_proprietary       = 7,
    idriver_id_qualcomm_proprietary          = 8,
    idriver_id_arm_proprietary               = 9,
    idriver_id_google_swiftshader            = 10,
    idriver_id_ggp_proprietary               = 11,
    idriver_id_broadcom_proprietary          = 12,
    idriver_id_mesa_llvmpipe                 = 13,
    idriver_id_moltenvk                      = 14,
    idriver_id_coreavi_proprietary           = 15,
    idriver_id_juice_proprietary             = 16,
    idriver_id_verisilicon_proprietary       = 17,
    idriver_id_mesa_turnip                   = 18,
    idriver_id_mesa_v3dv                     = 19,
    idriver_id_mesa_panvk                    = 20,
    idriver_id_samsung_proprietary           = 21,
    idriver_id_mesa_venus                    = 22,
    idriver_id_mesa_dozen                    = 23,
    idriver_id_mesa_nvk                      = 24,
    idriver_id_imagination_open_source_mesa  = 25,
    idriver_id_mesa_honeykrisp               = 26,
    idriver_id_vulkan_sc_emulation_on_vulkan = 27,
    idriver_id_mesa_kosmickrisp              = 28
};

enum class conditional_rendering_flag_bits_ext
    : uint32_t
{
    iconditional_rendering_inverted_bit_ext = (1U << 0)
};

enum class resolve_mode_flag_bits
    : uint32_t
{
    iresolve_mode_none            = 0,
    iresolve_mode_sample_zero_bit = (1U << 0),
    iresolve_mode_average_bit     = (1U << 1),
    iresolve_mode_min_bit         = (1U << 2),
    iresolve_mode_max_bit         = (1U << 3)
};

enum class shading_rate_palette_entry_nv
    : uint32_t
{
    ishading_rate_palette_entry_no_invocations_nv              = 0,
    ishading_rate_palette_entry_16_invocations_per_pixel_nv    = 1,
    ishading_rate_palette_entry_8_invocations_per_pixel_nv     = 2,
    ishading_rate_palette_entry_4_invocations_per_pixel_nv     = 3,
    ishading_rate_palette_entry_2_invocations_per_pixel_nv     = 4,
    ishading_rate_palette_entry_1_invocation_per_pixel_nv      = 5,
    ishading_rate_palette_entry_1_invocation_per_2x1_pixels_nv = 6,
    ishading_rate_palette_entry_1_invocation_per_1x2_pixels_nv = 7,
    ishading_rate_palette_entry_1_invocation_per_2x2_pixels_nv = 8,
    ishading_rate_palette_entry_1_invocation_per_4x2_pixels_nv = 9,
    ishading_rate_palette_entry_1_invocation_per_2x4_pixels_nv = 10,
    ishading_rate_palette_entry_1_invocation_per_4x4_pixels_nv = 11
};

enum class coarse_sample_order_type_nv
    : uint32_t
{
    icoarse_sample_order_type_default_nv      = 0,
    icoarse_sample_order_type_custom_nv       = 1,
    icoarse_sample_order_type_pixel_major_nv  = 2,
    icoarse_sample_order_type_sample_major_nv = 3
};

enum class geometry_instance_flag_bits_khr
    : uint32_t
{
    igeometry_instance_triangle_facing_cull_disable_bit_khr    = (1U << 0),
    igeometry_instance_triangle_flip_facing_bit_khr            = (1U << 1),
    igeometry_instance_force_opaque_bit_khr                    = (1U << 2),
    igeometry_instance_force_no_opaque_bit_khr                 = (1U << 3),
    igeometry_instance_triangle_front_counterclockwise_bit_khr = (1U << 1)
};

enum class geometry_flag_bits_khr
    : uint32_t
{
    igeometry_opaque_bit_khr                          = (1U << 0),
    igeometry_no_duplicate_any_hit_invocation_bit_khr = (1U << 1)
};

enum class build_acceleration_structure_flag_bits_khr
    : uint32_t
{
    ibuild_acceleration_structure_allow_update_bit_khr      = (1U << 0),
    ibuild_acceleration_structure_allow_compaction_bit_khr  = (1U << 1),
    ibuild_acceleration_structure_prefer_fast_trace_bit_khr = (1U << 2),
    ibuild_acceleration_structure_prefer_fast_build_bit_khr = (1U << 3),
    ibuild_acceleration_structure_low_memory_bit_khr        = (1U << 4)
};

enum class acceleration_structure_create_flag_bits_khr
    : uint32_t
{
    iacceleration_structure_create_device_address_capture_replay_bit_khr = (1U << 0)
};

enum class copy_acceleration_structure_mode_khr
    : uint32_t
{
    icopy_acceleration_structure_mode_clone_khr   = 0,
    icopy_acceleration_structure_mode_compact_khr = 1
};

enum class build_acceleration_structure_mode_khr
    : uint32_t
{
    ibuild_acceleration_structure_mode_build_khr  = 0,
    ibuild_acceleration_structure_mode_update_khr = 1
};

enum class acceleration_structure_type_khr
    : uint32_t
{
    iacceleration_structure_type_top_level_khr    = 0,
    iacceleration_structure_type_bottom_level_khr = 1,
    iacceleration_structure_type_generic_khr      = 2
};

enum class geometry_type_khr
    : uint32_t
{
    igeometry_type_triangles_khr = 0,
    igeometry_type_aabbs_khr     = 1,
    igeometry_type_instances_khr = 2
};

enum class acceleration_structure_memory_requirements_type_nv
    : uint32_t
{
    iacceleration_structure_memory_requirements_type_object_nv         = 0,
    iacceleration_structure_memory_requirements_type_build_scratch_nv  = 1,
    iacceleration_structure_memory_requirements_type_update_scratch_nv = 2
};

enum class acceleration_structure_build_type_khr
    : uint32_t
{
    iacceleration_structure_build_type_host_khr           = 0,
    iacceleration_structure_build_type_device_khr         = 1,
    iacceleration_structure_build_type_host_or_device_khr = 2
};

enum class ray_tracing_shader_group_type_khr
    : uint32_t
{
    iray_tracing_shader_group_type_general_khr              = 0,
    iray_tracing_shader_group_type_triangles_hit_group_khr  = 1,
    iray_tracing_shader_group_type_procedural_hit_group_khr = 2
};

enum class acceleration_structure_compatibility_khr
    : uint32_t
{
    iacceleration_structure_compatibility_compatible_khr   = 0,
    iacceleration_structure_compatibility_incompatible_khr = 1
};

enum class shader_group_shader_khr
    : uint32_t
{
    ishader_group_shader_general_khr      = 0,
    ishader_group_shader_closest_hit_khr  = 1,
    ishader_group_shader_any_hit_khr      = 2,
    ishader_group_shader_intersection_khr = 3
};

enum class memory_overallocation_behavior_amd
    : uint32_t
{
    imemory_overallocation_behavior_default_amd    = 0,
    imemory_overallocation_behavior_allowed_amd    = 1,
    imemory_overallocation_behavior_disallowed_amd = 2
};

enum class framebuffer_create_flag_bits
    : uint32_t
{
};

enum class query_pool_create_flag_bits
    : uint32_t
{
};

enum class device_diagnostics_config_flag_bits_nv
    : uint32_t
{
    idevice_diagnostics_config_enable_shader_debug_info_bit_nv      = (1U << 0),
    idevice_diagnostics_config_enable_resource_tracking_bit_nv      = (1U << 1),
    idevice_diagnostics_config_enable_automatic_checkpoints_bit_nv  = (1U << 2),
    idevice_diagnostics_config_enable_shader_error_reporting_bit_nv = (1U << 3)
};

enum class pipeline_creation_feedback_flag_bits
    : uint32_t
{
    ipipeline_creation_feedback_valid_bit                          = (1U << 0),
    ipipeline_creation_feedback_application_pipeline_cache_hit_bit = (1U << 1),
    ipipeline_creation_feedback_base_pipeline_acceleration_bit     = (1U << 2)
};

enum class full_screen_exclusive_ext
    : uint32_t
{
    ifull_screen_exclusive_default_ext                = 0,
    ifull_screen_exclusive_allowed_ext                = 1,
    ifull_screen_exclusive_disallowed_ext             = 2,
    ifull_screen_exclusive_application_controlled_ext = 3
};

enum class performance_counter_scope_khr
    : uint32_t
{
                   iperformance_counter_scope_command_buffer_khr = 0,
                   iperformance_counter_scope_render_pass_khr    = 1,
                   iperformance_counter_scope_command_khr        = 2,
    [[deprecated]] iquery_scope_command_buffer_khr               = 0,
    [[deprecated]] iquery_scope_render_pass_khr                  = 1,
    [[deprecated]] iquery_scope_command_khr                      = 2
};

enum class memory_decompression_method_flag_bits_ext
    : uint64_t
{
    imemory_decompression_method_gdeflate_1_0_bit_ext = (1ULL << 0),
    imemory_decompression_method_gdeflate_1_0_bit_nv  = (1ULL << 0)
};

enum class performance_counter_unit_khr
    : uint32_t
{
    iperformance_counter_unit_generic_khr          = 0,
    iperformance_counter_unit_percentage_khr       = 1,
    iperformance_counter_unit_nanoseconds_khr      = 2,
    iperformance_counter_unit_bytes_khr            = 3,
    iperformance_counter_unit_bytes_per_second_khr = 4,
    iperformance_counter_unit_kelvin_khr           = 5,
    iperformance_counter_unit_watts_khr            = 6,
    iperformance_counter_unit_volts_khr            = 7,
    iperformance_counter_unit_amps_khr             = 8,
    iperformance_counter_unit_hertz_khr            = 9,
    iperformance_counter_unit_cycles_khr           = 10
};

enum class performance_counter_storage_khr
    : uint32_t
{
    iperformance_counter_storage_int32_khr   = 0,
    iperformance_counter_storage_int64_khr   = 1,
    iperformance_counter_storage_uint32_khr  = 2,
    iperformance_counter_storage_uint64_khr  = 3,
    iperformance_counter_storage_float32_khr = 4,
    iperformance_counter_storage_float64_khr = 5
};

enum class performance_counter_description_flag_bits_khr
    : uint32_t
{
                   iperformance_counter_description_performance_impacting_bit_khr = (1U << 0),
    [[deprecated]] iperformance_counter_description_performance_impacting_khr     = (1U << 0),
                   iperformance_counter_description_concurrently_impacted_bit_khr = (1U << 1),
    [[deprecated]] iperformance_counter_description_concurrently_impacted_khr     = (1U << 1)
};

enum class acquire_profiling_lock_flag_bits_khr
    : uint32_t
{
};

enum class shader_core_properties_flag_bits_amd
    : uint32_t
{
};

enum class refresh_object_flag_bits_khr
    : uint32_t
{
};

enum class performance_configuration_type_intel
    : uint32_t
{
    iperformance_configuration_type_command_queue_metrics_discovery_activated_intel = 0
};

enum class query_pool_sampling_mode_intel
    : uint32_t
{
    iquery_pool_sampling_mode_manual_intel = 0
};

enum class performance_override_type_intel
    : uint32_t
{
    iperformance_override_type_null_hardware_intel    = 0,
    iperformance_override_type_flush_gpu_caches_intel = 1
};

enum class performance_parameter_type_intel
    : uint32_t
{
    iperformance_parameter_type_hw_counters_supported_intel    = 0,
    iperformance_parameter_type_stream_marker_valid_bits_intel = 1
};

enum class performance_value_type_intel
    : uint32_t
{
    iperformance_value_type_uint32_intel = 0,
    iperformance_value_type_uint64_intel = 1,
    iperformance_value_type_float_intel  = 2,
    iperformance_value_type_bool_intel   = 3,
    iperformance_value_type_string_intel = 4
};

enum class shader_float_controls_independence
    : uint32_t
{
    ishader_float_controls_independence_32_bit_only = 0,
    ishader_float_controls_independence_all         = 1,
    ishader_float_controls_independence_none        = 2
};

enum class pipeline_executable_statistic_format_khr
    : uint32_t
{
    ipipeline_executable_statistic_format_bool32_khr  = 0,
    ipipeline_executable_statistic_format_int64_khr   = 1,
    ipipeline_executable_statistic_format_uint64_khr  = 2,
    ipipeline_executable_statistic_format_float64_khr = 3
};

enum class line_rasterization_mode
    : uint32_t
{
    iline_rasterization_mode_default            = 0,
    iline_rasterization_mode_rectangular        = 1,
    iline_rasterization_mode_bresenham          = 2,
    iline_rasterization_mode_rectangular_smooth = 3
};

enum class shader_module_create_flag_bits
    : uint32_t
{
};

enum class pipeline_compiler_control_flag_bits_amd
    : uint32_t
{
};

enum class fault_level
    : uint32_t
{
    ifault_level_unassigned  = 0,
    ifault_level_critical    = 1,
    ifault_level_recoverable = 2,
    ifault_level_warning     = 3
};

enum class fault_type
    : uint32_t
{
    ifault_type_invalid             = 0,
    ifault_type_unassigned          = 1,
    ifault_type_implementation      = 2,
    ifault_type_system              = 3,
    ifault_type_physical_device     = 4,
    ifault_type_command_buffer_full = 5,
    ifault_type_invalid_api_usage   = 6
};

enum class fault_query_behavior
    : uint32_t
{
    ifault_query_behavior_get_and_clear_all_faults = 0
};

enum class tool_purpose_flag_bits
    : uint32_t
{
    itool_purpose_validation_bit          = (1U << 0),
    itool_purpose_profiling_bit           = (1U << 1),
    itool_purpose_tracing_bit             = (1U << 2),
    itool_purpose_additional_features_bit = (1U << 3),
    itool_purpose_modifying_features_bit  = (1U << 4)
};

enum class pipeline_match_control
    : uint32_t
{
    ipipeline_match_control_application_uuid_exact_match = 0
};

enum class fragment_shading_rate_combiner_op_khr
    : uint32_t
{
    ifragment_shading_rate_combiner_op_keep_khr    = 0,
    ifragment_shading_rate_combiner_op_replace_khr = 1,
    ifragment_shading_rate_combiner_op_min_khr     = 2,
    ifragment_shading_rate_combiner_op_max_khr     = 3,
    ifragment_shading_rate_combiner_op_mul_khr     = 4
};

enum class fragment_shading_rate_nv
    : uint32_t
{
    ifragment_shading_rate_1_invocation_per_pixel_nv      = 0,
    ifragment_shading_rate_1_invocation_per_1x2_pixels_nv = 1,
    ifragment_shading_rate_1_invocation_per_2x1_pixels_nv = 4,
    ifragment_shading_rate_1_invocation_per_2x2_pixels_nv = 5,
    ifragment_shading_rate_1_invocation_per_2x4_pixels_nv = 6,
    ifragment_shading_rate_1_invocation_per_4x2_pixels_nv = 9,
    ifragment_shading_rate_1_invocation_per_4x4_pixels_nv = 10,
    ifragment_shading_rate_2_invocations_per_pixel_nv     = 11,
    ifragment_shading_rate_4_invocations_per_pixel_nv     = 12,
    ifragment_shading_rate_8_invocations_per_pixel_nv     = 13,
    ifragment_shading_rate_16_invocations_per_pixel_nv    = 14,
    ifragment_shading_rate_no_invocations_nv              = 15
};

enum class fragment_shading_rate_type_nv
    : uint32_t
{
    ifragment_shading_rate_type_fragment_size_nv = 0,
    ifragment_shading_rate_type_enums_nv         = 1
};

enum class subpass_merge_status_ext
    : uint32_t
{
    isubpass_merge_status_merged_ext                                   = 0,
    isubpass_merge_status_disallowed_ext                               = 1,
    isubpass_merge_status_not_merged_side_effects_ext                  = 2,
    isubpass_merge_status_not_merged_samples_mismatch_ext              = 3,
    isubpass_merge_status_not_merged_views_mismatch_ext                = 4,
    isubpass_merge_status_not_merged_aliasing_ext                      = 5,
    isubpass_merge_status_not_merged_dependencies_ext                  = 6,
    isubpass_merge_status_not_merged_incompatible_input_attachment_ext = 7,
    isubpass_merge_status_not_merged_too_many_attachments_ext          = 8,
    isubpass_merge_status_not_merged_insufficient_storage_ext          = 9,
    isubpass_merge_status_not_merged_depth_stencil_count_ext           = 10,
    isubpass_merge_status_not_merged_resolve_attachment_reuse_ext      = 11,
    isubpass_merge_status_not_merged_single_subpass_ext                = 12,
    isubpass_merge_status_not_merged_unspecified_ext                   = 13
};

enum class access_flag_bits2
    : uint64_t
{
    iaccess_2_none                               = 0,
    iaccess_2_indirect_command_read_bit          = (1ULL << 0),
    iaccess_2_index_read_bit                     = (1ULL << 1),
    iaccess_2_vertex_attribute_read_bit          = (1ULL << 2),
    iaccess_2_uniform_read_bit                   = (1ULL << 3),
    iaccess_2_input_attachment_read_bit          = (1ULL << 4),
    iaccess_2_shader_read_bit                    = (1ULL << 5),
    iaccess_2_shader_write_bit                   = (1ULL << 6),
    iaccess_2_color_attachment_read_bit          = (1ULL << 7),
    iaccess_2_color_attachment_write_bit         = (1ULL << 8),
    iaccess_2_depth_stencil_attachment_read_bit  = (1ULL << 9),
    iaccess_2_depth_stencil_attachment_write_bit = (1ULL << 10),
    iaccess_2_transfer_read_bit                  = (1ULL << 11),
    iaccess_2_transfer_write_bit                 = (1ULL << 12),
    iaccess_2_host_read_bit                      = (1ULL << 13),
    iaccess_2_host_write_bit                     = (1ULL << 14),
    iaccess_2_memory_read_bit                    = (1ULL << 15),
    iaccess_2_memory_write_bit                   = (1ULL << 16),
    iaccess_2_shader_sampled_read_bit            = (1ULL << 32),
    iaccess_2_shader_storage_read_bit            = (1ULL << 33),
    iaccess_2_shader_storage_write_bit           = (1ULL << 34)
};

enum class pipeline_stage_flag_bits2
    : uint64_t
{
    ipipeline_stage_2_none                               = 0,
    ipipeline_stage_2_top_of_pipe_bit                    = (1ULL << 0),
    ipipeline_stage_2_draw_indirect_bit                  = (1ULL << 1),
    ipipeline_stage_2_vertex_input_bit                   = (1ULL << 2),
    ipipeline_stage_2_vertex_shader_bit                  = (1ULL << 3),
    ipipeline_stage_2_tessellation_control_shader_bit    = (1ULL << 4),
    ipipeline_stage_2_tessellation_evaluation_shader_bit = (1ULL << 5),
    ipipeline_stage_2_geometry_shader_bit                = (1ULL << 6),
    ipipeline_stage_2_fragment_shader_bit                = (1ULL << 7),
    ipipeline_stage_2_early_fragment_tests_bit           = (1ULL << 8),
    ipipeline_stage_2_late_fragment_tests_bit            = (1ULL << 9),
    ipipeline_stage_2_color_attachment_output_bit        = (1ULL << 10),
    ipipeline_stage_2_compute_shader_bit                 = (1ULL << 11),
    ipipeline_stage_2_all_transfer_bit                   = (1ULL << 12),
    ipipeline_stage_2_transfer_bit                       = (1ULL << 12),
    ipipeline_stage_2_bottom_of_pipe_bit                 = (1ULL << 13),
    ipipeline_stage_2_host_bit                           = (1ULL << 14),
    ipipeline_stage_2_all_graphics_bit                   = (1ULL << 15),
    ipipeline_stage_2_all_commands_bit                   = (1ULL << 16),
    ipipeline_stage_2_copy_bit                           = (1ULL << 32),
    ipipeline_stage_2_resolve_bit                        = (1ULL << 33),
    ipipeline_stage_2_blit_bit                           = (1ULL << 34),
    ipipeline_stage_2_clear_bit                          = (1ULL << 35),
    ipipeline_stage_2_index_input_bit                    = (1ULL << 36),
    ipipeline_stage_2_vertex_attribute_input_bit         = (1ULL << 37),
    ipipeline_stage_2_pre_rasterization_shaders_bit      = (1ULL << 38)
};

enum class submit_flag_bits
    : uint32_t
{
    isubmit_protected_bit = (1U << 0)
};

enum class event_create_flag_bits
    : uint32_t
{
};

enum class pipeline_layout_create_flag_bits
    : uint32_t
{
};

enum class sci_sync_client_type_nv
    : uint32_t
{
    isci_sync_client_type_signaler_nv        = 0,
    isci_sync_client_type_waiter_nv          = 1,
    isci_sync_client_type_signaler_waiter_nv = 2
};

enum class sci_sync_primitive_type_nv
    : uint32_t
{
    isci_sync_primitive_type_fence_nv     = 0,
    isci_sync_primitive_type_semaphore_nv = 1
};

enum class provoking_vertex_mode_ext
    : uint32_t
{
    iprovoking_vertex_mode_first_vertex_ext = 0,
    iprovoking_vertex_mode_last_vertex_ext  = 1
};

enum class pipeline_cache_validation_version
    : uint32_t
{
    ipipeline_cache_validation_version_safety_critical_one = 1
};

enum class acceleration_structure_motion_instance_type_nv
    : uint32_t
{
    iacceleration_structure_motion_instance_type_static_nv        = 0,
    iacceleration_structure_motion_instance_type_matrix_motion_nv = 1,
    iacceleration_structure_motion_instance_type_srt_motion_nv    = 2
};

enum class pipeline_color_blend_state_create_flag_bits
    : uint32_t
{
};

enum class pipeline_depth_stencil_state_create_flag_bits
    : uint32_t
{
};

enum class graphics_pipeline_library_flag_bits_ext
    : uint32_t
{
    igraphics_pipeline_library_vertex_input_interface_bit_ext    = (1U << 0),
    igraphics_pipeline_library_pre_rasterization_shaders_bit_ext = (1U << 1),
    igraphics_pipeline_library_fragment_shader_bit_ext           = (1U << 2),
    igraphics_pipeline_library_fragment_output_interface_bit_ext = (1U << 3)
};

enum class rendering_attachment_flag_bits_khr
    : uint32_t
{
};

enum class resolve_image_flag_bits_khr
    : uint32_t
{
};

enum class device_address_binding_flag_bits_ext
    : uint32_t
{
    idevice_address_binding_internal_object_bit_ext = (1U << 0)
};

enum class device_address_binding_type_ext
    : uint32_t
{
    idevice_address_binding_type_bind_ext   = 0,
    idevice_address_binding_type_unbind_ext = 1
};

enum class frame_boundary_flag_bits_ext
    : uint32_t
{
    iframe_boundary_frame_end_bit_ext = (1U << 0)
};

enum class present_scaling_flag_bits_khr
    : uint32_t
{
    ipresent_scaling_one_to_one_bit_khr           = (1U << 0),
    ipresent_scaling_one_to_one_bit_ext           = (1U << 0),
    ipresent_scaling_aspect_ratio_stretch_bit_khr = (1U << 1),
    ipresent_scaling_aspect_ratio_stretch_bit_ext = (1U << 1),
    ipresent_scaling_stretch_bit_khr              = (1U << 2),
    ipresent_scaling_stretch_bit_ext              = (1U << 2)
};

enum class present_gravity_flag_bits_khr
    : uint32_t
{
    ipresent_gravity_min_bit_khr      = (1U << 0),
    ipresent_gravity_min_bit_ext      = (1U << 0),
    ipresent_gravity_max_bit_khr      = (1U << 1),
    ipresent_gravity_max_bit_ext      = (1U << 1),
    ipresent_gravity_centered_bit_khr = (1U << 2),
    ipresent_gravity_centered_bit_ext = (1U << 2)
};

enum class physical_device_scheduling_controls_flag_bits_arm
    : uint64_t
{
    iphysical_device_scheduling_controls_shader_core_count_arm = (1ULL << 0)
};

enum class present_stage_flag_bits_ext
    : uint32_t
{
    ipresent_stage_queue_operations_end_bit_ext      = (1U << 0),
    ipresent_stage_request_dequeued_bit_ext          = (1U << 1),
    ipresent_stage_image_first_pixel_out_bit_ext     = (1U << 2),
    ipresent_stage_image_first_pixel_visible_bit_ext = (1U << 3)
};

enum class past_presentation_timing_flag_bits_ext
    : uint32_t
{
    ipast_presentation_timing_allow_partial_results_bit_ext      = (1U << 0),
    ipast_presentation_timing_allow_out_of_order_results_bit_ext = (1U << 1)
};

enum class present_timing_info_flag_bits_ext
    : uint32_t
{
    ipresent_timing_info_present_at_relative_time_bit_ext         = (1U << 0),
    ipresent_timing_info_present_at_nearest_refresh_cycle_bit_ext = (1U << 1)
};

enum class video_codec_operation_flag_bits_khr
    : uint32_t
{
    ivideo_codec_operation_none_khr = 0
};

enum class video_chroma_subsampling_flag_bits_khr
    : uint32_t
{
    ivideo_chroma_subsampling_invalid_khr        = 0,
    ivideo_chroma_subsampling_monochrome_bit_khr = (1U << 0),
    ivideo_chroma_subsampling_420_bit_khr        = (1U << 1),
    ivideo_chroma_subsampling_422_bit_khr        = (1U << 2),
    ivideo_chroma_subsampling_444_bit_khr        = (1U << 3)
};

enum class video_component_bit_depth_flag_bits_khr
    : uint32_t
{
    ivideo_component_bit_depth_invalid_khr = 0,
    ivideo_component_bit_depth_8_bit_khr   = (1U << 0),
    ivideo_component_bit_depth_10_bit_khr  = (1U << 2),
    ivideo_component_bit_depth_12_bit_khr  = (1U << 4)
};

enum class video_capability_flag_bits_khr
    : uint32_t
{
    ivideo_capability_protected_content_bit_khr         = (1U << 0),
    ivideo_capability_separate_reference_images_bit_khr = (1U << 1)
};

enum class video_session_create_flag_bits_khr
    : uint32_t
{
    ivideo_session_create_protected_content_bit_khr = (1U << 0)
};

enum class video_session_parameters_create_flag_bits_khr
    : uint32_t
{
};

enum class video_decode_h264_picture_layout_flag_bits_khr
    : uint32_t
{
    ivideo_decode_h264_picture_layout_progressive_khr                      = 0,
    ivideo_decode_h264_picture_layout_interlaced_interleaved_lines_bit_khr = (1U << 0),
    ivideo_decode_h264_picture_layout_interlaced_separate_planes_bit_khr   = (1U << 1)
};

enum class video_coding_control_flag_bits_khr
    : uint32_t
{
    ivideo_coding_control_reset_bit_khr = (1U << 0)
};

enum class query_result_status_khr
    : uint32_t
{
    iquery_result_status_error_khr     = -1,
    iquery_result_status_not_ready_khr = 0,
    iquery_result_status_complete_khr  = 1
};

enum class video_decode_usage_flag_bits_khr
    : uint32_t
{
    ivideo_decode_usage_default_khr         = 0,
    ivideo_decode_usage_transcoding_bit_khr = (1U << 0),
    ivideo_decode_usage_offline_bit_khr     = (1U << 1),
    ivideo_decode_usage_streaming_bit_khr   = (1U << 2)
};

enum class video_decode_capability_flag_bits_khr
    : uint32_t
{
    ivideo_decode_capability_dpb_and_output_coincide_bit_khr = (1U << 0),
    ivideo_decode_capability_dpb_and_output_distinct_bit_khr = (1U << 1)
};

enum class video_encode_flag_bits_khr
    : uint32_t
{
};

enum class video_encode_usage_flag_bits_khr
    : uint32_t
{
    ivideo_encode_usage_default_khr          = 0,
    ivideo_encode_usage_transcoding_bit_khr  = (1U << 0),
    ivideo_encode_usage_streaming_bit_khr    = (1U << 1),
    ivideo_encode_usage_recording_bit_khr    = (1U << 2),
    ivideo_encode_usage_conferencing_bit_khr = (1U << 3)
};

enum class video_encode_content_flag_bits_khr
    : uint32_t
{
    ivideo_encode_content_default_khr      = 0,
    ivideo_encode_content_camera_bit_khr   = (1U << 0),
    ivideo_encode_content_desktop_bit_khr  = (1U << 1),
    ivideo_encode_content_rendered_bit_khr = (1U << 2)
};

enum class video_encode_tuning_mode_khr
    : uint32_t
{
    ivideo_encode_tuning_mode_default_khr           = 0,
    ivideo_encode_tuning_mode_high_quality_khr      = 1,
    ivideo_encode_tuning_mode_low_latency_khr       = 2,
    ivideo_encode_tuning_mode_ultra_low_latency_khr = 3,
    ivideo_encode_tuning_mode_lossless_khr          = 4
};

enum class video_encode_capability_flag_bits_khr
    : uint32_t
{
    ivideo_encode_capability_preceding_externally_encoded_bytes_bit_khr            = (1U << 0),
    ivideo_encode_capability_insufficient_bitstream_buffer_range_detection_bit_khr = (1U << 1)
};

enum class video_encode_feedback_flag_bits_khr
    : uint32_t
{
    ivideo_encode_feedback_bitstream_buffer_offset_bit_khr = (1U << 0),
    ivideo_encode_feedback_bitstream_bytes_written_bit_khr = (1U << 1),
    ivideo_encode_feedback_bitstream_has_overrides_bit_khr = (1U << 2)
};

enum class video_encode_rate_control_mode_flag_bits_khr
    : uint32_t
{
    ivideo_encode_rate_control_mode_default_khr      = 0,
    ivideo_encode_rate_control_mode_disabled_bit_khr = (1U << 0),
    ivideo_encode_rate_control_mode_cbr_bit_khr      = (1U << 1),
    ivideo_encode_rate_control_mode_vbr_bit_khr      = (1U << 2)
};

enum class video_encode_intra_refresh_mode_flag_bits_khr
    : uint32_t
{
    ivideo_encode_intra_refresh_mode_none_khr                      = 0,
    ivideo_encode_intra_refresh_mode_per_picture_partition_bit_khr = (1U << 0),
    ivideo_encode_intra_refresh_mode_block_based_bit_khr           = (1U << 1),
    ivideo_encode_intra_refresh_mode_block_row_based_bit_khr       = (1U << 2),
    ivideo_encode_intra_refresh_mode_block_column_based_bit_khr    = (1U << 3)
};

enum class video_encode_h264_capability_flag_bits_khr
    : uint32_t
{
    ivideo_encode_h264_capability_hrd_compliance_bit_khr                    = (1U << 0),
    ivideo_encode_h264_capability_prediction_weight_table_generated_bit_khr = (1U << 1),
    ivideo_encode_h264_capability_row_unaligned_slice_bit_khr               = (1U << 2),
    ivideo_encode_h264_capability_different_slice_type_bit_khr              = (1U << 3),
    ivideo_encode_h264_capability_b_frame_in_l0_list_bit_khr                = (1U << 4),
    ivideo_encode_h264_capability_b_frame_in_l1_list_bit_khr                = (1U << 5),
    ivideo_encode_h264_capability_per_picture_type_min_max_qp_bit_khr       = (1U << 6),
    ivideo_encode_h264_capability_per_slice_constant_qp_bit_khr             = (1U << 7),
    ivideo_encode_h264_capability_generate_prefix_nalu_bit_khr              = (1U << 8)
};

enum class video_encode_h264_std_flag_bits_khr
    : uint32_t
{
    ivideo_encode_h264_std_separate_color_plane_flag_set_bit_khr            = (1U << 0),
    ivideo_encode_h264_std_qpprime_y_zero_transform_bypass_flag_set_bit_khr = (1U << 1),
    ivideo_encode_h264_std_scaling_matrix_present_flag_set_bit_khr          = (1U << 2),
    ivideo_encode_h264_std_chroma_qp_index_offset_bit_khr                   = (1U << 3),
    ivideo_encode_h264_std_second_chroma_qp_index_offset_bit_khr            = (1U << 4),
    ivideo_encode_h264_std_pic_init_qp_minus26_bit_khr                      = (1U << 5),
    ivideo_encode_h264_std_weighted_pred_flag_set_bit_khr                   = (1U << 6),
    ivideo_encode_h264_std_weighted_bipred_idc_explicit_bit_khr             = (1U << 7),
    ivideo_encode_h264_std_weighted_bipred_idc_implicit_bit_khr             = (1U << 8),
    ivideo_encode_h264_std_transform_8x8_mode_flag_set_bit_khr              = (1U << 9),
    ivideo_encode_h264_std_direct_spatial_mv_pred_flag_unset_bit_khr        = (1U << 10),
    ivideo_encode_h264_std_entropy_coding_mode_flag_unset_bit_khr           = (1U << 11),
    ivideo_encode_h264_std_entropy_coding_mode_flag_set_bit_khr             = (1U << 12),
    ivideo_encode_h264_std_direct_8x8_inference_flag_unset_bit_khr          = (1U << 13),
    ivideo_encode_h264_std_constrained_intra_pred_flag_set_bit_khr          = (1U << 14),
    ivideo_encode_h264_std_deblocking_filter_disabled_bit_khr               = (1U << 15),
    ivideo_encode_h264_std_deblocking_filter_enabled_bit_khr                = (1U << 16),
    ivideo_encode_h264_std_deblocking_filter_partial_bit_khr                = (1U << 17),
    ivideo_encode_h264_std_slice_qp_delta_bit_khr                           = (1U << 19),
    ivideo_encode_h264_std_different_slice_qp_delta_bit_khr                 = (1U << 20)
};

enum class video_encode_h264_rate_control_flag_bits_khr
    : uint32_t
{
    ivideo_encode_h264_rate_control_attempt_hrd_compliance_bit_khr        = (1U << 0),
    ivideo_encode_h264_rate_control_regular_gop_bit_khr                   = (1U << 1),
    ivideo_encode_h264_rate_control_reference_pattern_flat_bit_khr        = (1U << 2),
    ivideo_encode_h264_rate_control_reference_pattern_dyadic_bit_khr      = (1U << 3),
    ivideo_encode_h264_rate_control_temporal_layer_pattern_dyadic_bit_khr = (1U << 4)
};

enum class host_image_copy_flag_bits
    : uint32_t
{
                   ihost_image_copy_memcpy_bit = (1U << 0),
    [[deprecated]] ihost_image_copy_memcpy     = (1U << 0)
};

enum class partitioned_acceleration_structure_op_type_nv
    : uint32_t
{
    ipartitioned_acceleration_structure_op_type_write_instance_nv              = 0,
    ipartitioned_acceleration_structure_op_type_update_instance_nv             = 1,
    ipartitioned_acceleration_structure_op_type_write_partition_translation_nv = 2
};

enum class partitioned_acceleration_structure_instance_flag_bits_nv
    : uint32_t
{
    ipartitioned_acceleration_structure_instance_flag_triangle_facing_cull_disable_bit_nv = (1U << 0),
    ipartitioned_acceleration_structure_instance_flag_triangle_flip_facing_bit_nv         = (1U << 1),
    ipartitioned_acceleration_structure_instance_flag_force_opaque_bit_nv                 = (1U << 2),
    ipartitioned_acceleration_structure_instance_flag_force_no_opaque_bit_nv              = (1U << 3),
    ipartitioned_acceleration_structure_instance_flag_enable_explicit_bounding_box_nv     = (1U << 4)
};

enum class image_format_constraints_flag_bits_fuchsia
    : uint32_t
{
};

enum class image_constraints_info_flag_bits_fuchsia
    : uint32_t
{
    iimage_constraints_info_cpu_read_rarely_fuchsia    = (1U << 0),
    iimage_constraints_info_cpu_read_often_fuchsia     = (1U << 1),
    iimage_constraints_info_cpu_write_rarely_fuchsia   = (1U << 2),
    iimage_constraints_info_cpu_write_often_fuchsia    = (1U << 3),
    iimage_constraints_info_protected_optional_fuchsia = (1U << 4)
};

enum class format_feature_flag_bits2
    : uint64_t
{
    iformat_feature_2_sampled_image_bit                                                           = (1ULL << 0),
    iformat_feature_2_storage_image_bit                                                           = (1ULL << 1),
    iformat_feature_2_storage_image_atomic_bit                                                    = (1ULL << 2),
    iformat_feature_2_uniform_texel_buffer_bit                                                    = (1ULL << 3),
    iformat_feature_2_storage_texel_buffer_bit                                                    = (1ULL << 4),
    iformat_feature_2_storage_texel_buffer_atomic_bit                                             = (1ULL << 5),
    iformat_feature_2_vertex_buffer_bit                                                           = (1ULL << 6),
    iformat_feature_2_color_attachment_bit                                                        = (1ULL << 7),
    iformat_feature_2_color_attachment_blend_bit                                                  = (1ULL << 8),
    iformat_feature_2_depth_stencil_attachment_bit                                                = (1ULL << 9),
    iformat_feature_2_blit_src_bit                                                                = (1ULL << 10),
    iformat_feature_2_blit_dst_bit                                                                = (1ULL << 11),
    iformat_feature_2_sampled_image_filter_linear_bit                                             = (1ULL << 12),
    iformat_feature_2_transfer_src_bit                                                            = (1ULL << 14),
    iformat_feature_2_transfer_dst_bit                                                            = (1ULL << 15),
    iformat_feature_2_sampled_image_filter_minmax_bit                                             = (1ULL << 16),
    iformat_feature_2_midpoint_chroma_samples_bit                                                 = (1ULL << 17),
    iformat_feature_2_sampled_image_ycbcr_conversion_linear_filter_bit                            = (1ULL << 18),
    iformat_feature_2_sampled_image_ycbcr_conversion_separate_reconstruction_filter_bit           = (1ULL << 19),
    iformat_feature_2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_bit           = (1ULL << 20),
    iformat_feature_2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_bit = (1ULL << 21),
    iformat_feature_2_disjoint_bit                                                                = (1ULL << 22),
    iformat_feature_2_cosited_chroma_samples_bit                                                  = (1ULL << 23),
    iformat_feature_2_storage_read_without_format_bit                                             = (1ULL << 31),
    iformat_feature_2_storage_write_without_format_bit                                            = (1ULL << 32),
    iformat_feature_2_sampled_image_depth_comparison_bit                                          = (1ULL << 33)
};

enum class rendering_flag_bits
    : uint32_t
{
    irendering_contents_secondary_command_buffers_bit = (1U << 0),
    irendering_suspending_bit                         = (1U << 1),
    irendering_resuming_bit                           = (1U << 2)
};

enum class video_encode_h265_capability_flag_bits_khr
    : uint32_t
{
    ivideo_encode_h265_capability_hrd_compliance_bit_khr                    = (1U << 0),
    ivideo_encode_h265_capability_prediction_weight_table_generated_bit_khr = (1U << 1),
    ivideo_encode_h265_capability_row_unaligned_slice_segment_bit_khr       = (1U << 2),
    ivideo_encode_h265_capability_different_slice_segment_type_bit_khr      = (1U << 3),
    ivideo_encode_h265_capability_b_frame_in_l0_list_bit_khr                = (1U << 4),
    ivideo_encode_h265_capability_b_frame_in_l1_list_bit_khr                = (1U << 5),
    ivideo_encode_h265_capability_per_picture_type_min_max_qp_bit_khr       = (1U << 6),
    ivideo_encode_h265_capability_per_slice_segment_constant_qp_bit_khr     = (1U << 7),
    ivideo_encode_h265_capability_multiple_tiles_per_slice_segment_bit_khr  = (1U << 8),
    ivideo_encode_h265_capability_multiple_slice_segments_per_tile_bit_khr  = (1U << 9)
};

enum class video_encode_h265_std_flag_bits_khr
    : uint32_t
{
    ivideo_encode_h265_std_separate_color_plane_flag_set_bit_khr                = (1U << 0),
    ivideo_encode_h265_std_sample_adaptive_offset_enabled_flag_set_bit_khr      = (1U << 1),
    ivideo_encode_h265_std_scaling_list_data_present_flag_set_bit_khr           = (1U << 2),
    ivideo_encode_h265_std_pcm_enabled_flag_set_bit_khr                         = (1U << 3),
    ivideo_encode_h265_std_sps_temporal_mvp_enabled_flag_set_bit_khr            = (1U << 4),
    ivideo_encode_h265_std_init_qp_minus26_bit_khr                              = (1U << 5),
    ivideo_encode_h265_std_weighted_pred_flag_set_bit_khr                       = (1U << 6),
    ivideo_encode_h265_std_weighted_bipred_flag_set_bit_khr                     = (1U << 7),
    ivideo_encode_h265_std_log2_parallel_merge_level_minus2_bit_khr             = (1U << 8),
    ivideo_encode_h265_std_sign_data_hiding_enabled_flag_set_bit_khr            = (1U << 9),
    ivideo_encode_h265_std_transform_skip_enabled_flag_set_bit_khr              = (1U << 10),
    ivideo_encode_h265_std_transform_skip_enabled_flag_unset_bit_khr            = (1U << 11),
    ivideo_encode_h265_std_pps_slice_chroma_qp_offsets_present_flag_set_bit_khr = (1U << 12),
    ivideo_encode_h265_std_transquant_bypass_enabled_flag_set_bit_khr           = (1U << 13),
    ivideo_encode_h265_std_constrained_intra_pred_flag_set_bit_khr              = (1U << 14),
    ivideo_encode_h265_std_entropy_coding_sync_enabled_flag_set_bit_khr         = (1U << 15),
    ivideo_encode_h265_std_deblocking_filter_override_enabled_flag_set_bit_khr  = (1U << 16),
    ivideo_encode_h265_std_dependent_slice_segments_enabled_flag_set_bit_khr    = (1U << 17),
    ivideo_encode_h265_std_dependent_slice_segment_flag_set_bit_khr             = (1U << 18),
    ivideo_encode_h265_std_slice_qp_delta_bit_khr                               = (1U << 19),
    ivideo_encode_h265_std_different_slice_qp_delta_bit_khr                     = (1U << 20)
};

enum class video_encode_h265_rate_control_flag_bits_khr
    : uint32_t
{
    ivideo_encode_h265_rate_control_attempt_hrd_compliance_bit_khr            = (1U << 0),
    ivideo_encode_h265_rate_control_regular_gop_bit_khr                       = (1U << 1),
    ivideo_encode_h265_rate_control_reference_pattern_flat_bit_khr            = (1U << 2),
    ivideo_encode_h265_rate_control_reference_pattern_dyadic_bit_khr          = (1U << 3),
    ivideo_encode_h265_rate_control_temporal_sub_layer_pattern_dyadic_bit_khr = (1U << 4)
};

enum class video_encode_h265_ctb_size_flag_bits_khr
    : uint32_t
{
    ivideo_encode_h265_ctb_size_16_bit_khr = (1U << 0),
    ivideo_encode_h265_ctb_size_32_bit_khr = (1U << 1),
    ivideo_encode_h265_ctb_size_64_bit_khr = (1U << 2)
};

enum class video_encode_h265_transform_block_size_flag_bits_khr
    : uint32_t
{
    ivideo_encode_h265_transform_block_size_4_bit_khr  = (1U << 0),
    ivideo_encode_h265_transform_block_size_8_bit_khr  = (1U << 1),
    ivideo_encode_h265_transform_block_size_16_bit_khr = (1U << 2),
    ivideo_encode_h265_transform_block_size_32_bit_khr = (1U << 3)
};

enum class video_encode_av1_capability_flag_bits_khr
    : uint32_t
{
    ivideo_encode_av1_capability_per_rate_control_group_min_max_q_index_bit_khr = (1U << 0),
    ivideo_encode_av1_capability_generate_obu_extension_header_bit_khr          = (1U << 1),
    ivideo_encode_av1_capability_primary_reference_cdf_only_bit_khr             = (1U << 2),
    ivideo_encode_av1_capability_frame_size_override_bit_khr                    = (1U << 3),
    ivideo_encode_av1_capability_motion_vector_scaling_bit_khr                  = (1U << 4)
};

enum class video_encode_av1_std_flag_bits_khr
    : uint32_t
{
    ivideo_encode_av1_std_uniform_tile_spacing_flag_set_bit_khr = (1U << 0),
    ivideo_encode_av1_std_skip_mode_present_unset_bit_khr       = (1U << 1),
    ivideo_encode_av1_std_primary_ref_frame_bit_khr             = (1U << 2),
    ivideo_encode_av1_std_delta_q_bit_khr                       = (1U << 3)
};

enum class video_encode_av1_rate_control_flag_bits_khr
    : uint32_t
{
    ivideo_encode_av1_rate_control_regular_gop_bit_khr                   = (1U << 0),
    ivideo_encode_av1_rate_control_temporal_layer_pattern_dyadic_bit_khr = (1U << 1),
    ivideo_encode_av1_rate_control_reference_pattern_flat_bit_khr        = (1U << 2),
    ivideo_encode_av1_rate_control_reference_pattern_dyadic_bit_khr      = (1U << 3)
};

enum class video_encode_av1_superblock_size_flag_bits_khr
    : uint32_t
{
    ivideo_encode_av1_superblock_size_64_bit_khr  = (1U << 0),
    ivideo_encode_av1_superblock_size_128_bit_khr = (1U << 1)
};

enum class video_encode_av1_prediction_mode_khr
    : uint32_t
{
    ivideo_encode_av1_prediction_mode_intra_only_khr              = 0,
    ivideo_encode_av1_prediction_mode_single_reference_khr        = 1,
    ivideo_encode_av1_prediction_mode_unidirectional_compound_khr = 2,
    ivideo_encode_av1_prediction_mode_bidirectional_compound_khr  = 3
};

enum class video_encode_av1_rate_control_group_khr
    : uint32_t
{
    ivideo_encode_av1_rate_control_group_intra_khr        = 0,
    ivideo_encode_av1_rate_control_group_predictive_khr   = 1,
    ivideo_encode_av1_rate_control_group_bipredictive_khr = 2
};

enum class export_metal_object_type_flag_bits_ext
    : uint32_t
{
    iexport_metal_object_type_metal_device_bit_ext        = (1U << 0),
    iexport_metal_object_type_metal_command_queue_bit_ext = (1U << 1),
    iexport_metal_object_type_metal_buffer_bit_ext        = (1U << 2),
    iexport_metal_object_type_metal_texture_bit_ext       = (1U << 3),
    iexport_metal_object_type_metal_iosurface_bit_ext     = (1U << 4),
    iexport_metal_object_type_metal_shared_event_bit_ext  = (1U << 5)
};

enum class instance_create_flag_bits
    : uint32_t
{
};

enum class image_compression_flag_bits_ext
    : uint32_t
{
    iimage_compression_default_ext             = 0,
    iimage_compression_fixed_rate_default_ext  = (1U << 0),
    iimage_compression_fixed_rate_explicit_ext = (1U << 1),
    iimage_compression_disabled_ext            = (1U << 2)
};

enum class image_compression_fixed_rate_flag_bits_ext
    : uint32_t
{
    iimage_compression_fixed_rate_none_ext      = 0,
    iimage_compression_fixed_rate_1bpc_bit_ext  = (1U << 0),
    iimage_compression_fixed_rate_2bpc_bit_ext  = (1U << 1),
    iimage_compression_fixed_rate_3bpc_bit_ext  = (1U << 2),
    iimage_compression_fixed_rate_4bpc_bit_ext  = (1U << 3),
    iimage_compression_fixed_rate_5bpc_bit_ext  = (1U << 4),
    iimage_compression_fixed_rate_6bpc_bit_ext  = (1U << 5),
    iimage_compression_fixed_rate_7bpc_bit_ext  = (1U << 6),
    iimage_compression_fixed_rate_8bpc_bit_ext  = (1U << 7),
    iimage_compression_fixed_rate_9bpc_bit_ext  = (1U << 8),
    iimage_compression_fixed_rate_10bpc_bit_ext = (1U << 9),
    iimage_compression_fixed_rate_11bpc_bit_ext = (1U << 10),
    iimage_compression_fixed_rate_12bpc_bit_ext = (1U << 11),
    iimage_compression_fixed_rate_13bpc_bit_ext = (1U << 12),
    iimage_compression_fixed_rate_14bpc_bit_ext = (1U << 13),
    iimage_compression_fixed_rate_15bpc_bit_ext = (1U << 14),
    iimage_compression_fixed_rate_16bpc_bit_ext = (1U << 15),
    iimage_compression_fixed_rate_17bpc_bit_ext = (1U << 16),
    iimage_compression_fixed_rate_18bpc_bit_ext = (1U << 17),
    iimage_compression_fixed_rate_19bpc_bit_ext = (1U << 18),
    iimage_compression_fixed_rate_20bpc_bit_ext = (1U << 19),
    iimage_compression_fixed_rate_21bpc_bit_ext = (1U << 20),
    iimage_compression_fixed_rate_22bpc_bit_ext = (1U << 21),
    iimage_compression_fixed_rate_23bpc_bit_ext = (1U << 22),
    iimage_compression_fixed_rate_24bpc_bit_ext = (1U << 23)
};

enum class pipeline_robustness_buffer_behavior
    : uint32_t
{
    ipipeline_robustness_buffer_behavior_device_default         = 0,
    ipipeline_robustness_buffer_behavior_disabled               = 1,
    ipipeline_robustness_buffer_behavior_robust_buffer_access   = 2,
    ipipeline_robustness_buffer_behavior_robust_buffer_access_2 = 3
};

enum class pipeline_robustness_image_behavior
    : uint32_t
{
    ipipeline_robustness_image_behavior_device_default        = 0,
    ipipeline_robustness_image_behavior_disabled              = 1,
    ipipeline_robustness_image_behavior_robust_image_access   = 2,
    ipipeline_robustness_image_behavior_robust_image_access_2 = 3
};

enum class optical_flow_grid_size_flag_bits_nv
    : uint32_t
{
    ioptical_flow_grid_size_unknown_nv = 0,
    ioptical_flow_grid_size_1x1_bit_nv = (1U << 0),
    ioptical_flow_grid_size_2x2_bit_nv = (1U << 1),
    ioptical_flow_grid_size_4x4_bit_nv = (1U << 2),
    ioptical_flow_grid_size_8x8_bit_nv = (1U << 3)
};

enum class optical_flow_usage_flag_bits_nv
    : uint32_t
{
    ioptical_flow_usage_unknown_nv         = 0,
    ioptical_flow_usage_input_bit_nv       = (1U << 0),
    ioptical_flow_usage_output_bit_nv      = (1U << 1),
    ioptical_flow_usage_hint_bit_nv        = (1U << 2),
    ioptical_flow_usage_cost_bit_nv        = (1U << 3),
    ioptical_flow_usage_global_flow_bit_nv = (1U << 4)
};

enum class optical_flow_performance_level_nv
    : uint32_t
{
    ioptical_flow_performance_level_unknown_nv = 0,
    ioptical_flow_performance_level_slow_nv    = 1,
    ioptical_flow_performance_level_medium_nv  = 2,
    ioptical_flow_performance_level_fast_nv    = 3
};

enum class optical_flow_session_binding_point_nv
    : uint32_t
{
    ioptical_flow_session_binding_point_unknown_nv              = 0,
    ioptical_flow_session_binding_point_input_nv                = 1,
    ioptical_flow_session_binding_point_reference_nv            = 2,
    ioptical_flow_session_binding_point_hint_nv                 = 3,
    ioptical_flow_session_binding_point_flow_vector_nv          = 4,
    ioptical_flow_session_binding_point_backward_flow_vector_nv = 5,
    ioptical_flow_session_binding_point_cost_nv                 = 6,
    ioptical_flow_session_binding_point_backward_cost_nv        = 7,
    ioptical_flow_session_binding_point_global_flow_nv          = 8
};

enum class optical_flow_session_create_flag_bits_nv
    : uint32_t
{
    ioptical_flow_session_create_enable_hint_bit_nv        = (1U << 0),
    ioptical_flow_session_create_enable_cost_bit_nv        = (1U << 1),
    ioptical_flow_session_create_enable_global_flow_bit_nv = (1U << 2),
    ioptical_flow_session_create_allow_regions_bit_nv      = (1U << 3),
    ioptical_flow_session_create_both_directions_bit_nv    = (1U << 4)
};

enum class optical_flow_execute_flag_bits_nv
    : uint32_t
{
    ioptical_flow_execute_disable_temporal_hints_bit_nv = (1U << 0)
};

enum class micromap_type_ext
    : uint32_t
{
    imicromap_type_opacity_micromap_ext = 0
};

enum class build_micromap_flag_bits_ext
    : uint32_t
{
    ibuild_micromap_prefer_fast_trace_bit_ext = (1U << 0),
    ibuild_micromap_prefer_fast_build_bit_ext = (1U << 1),
    ibuild_micromap_allow_compaction_bit_ext  = (1U << 2)
};

enum class micromap_create_flag_bits_ext
    : uint32_t
{
    imicromap_create_device_address_capture_replay_bit_ext = (1U << 0)
};

enum class copy_micromap_mode_ext
    : uint32_t
{
    icopy_micromap_mode_clone_ext       = 0,
    icopy_micromap_mode_serialize_ext   = 1,
    icopy_micromap_mode_deserialize_ext = 2,
    icopy_micromap_mode_compact_ext     = 3
};

enum class build_micromap_mode_ext
    : uint32_t
{
    ibuild_micromap_mode_build_ext = 0
};

enum class opacity_micromap_format_ext
    : uint32_t
{
    iopacity_micromap_format_2_state_ext = 1,
    iopacity_micromap_format_4_state_ext = 2
};

enum class opacity_micromap_special_index_ext
    : uint32_t
{
    iopacity_micromap_special_index_fully_transparent_ext         = -1,
    iopacity_micromap_special_index_fully_opaque_ext              = -2,
    iopacity_micromap_special_index_fully_unknown_transparent_ext = -3,
    iopacity_micromap_special_index_fully_unknown_opaque_ext      = -4
};

enum class depth_bias_representation_ext
    : uint32_t
{
    idepth_bias_representation_least_representable_value_format_ext      = 0,
    idepth_bias_representation_least_representable_value_force_unorm_ext = 1,
    idepth_bias_representation_float_ext                                 = 2
};

enum class device_fault_address_type_ext
    : uint32_t
{
    idevice_fault_address_type_none_ext                        = 0,
    idevice_fault_address_type_read_invalid_ext                = 1,
    idevice_fault_address_type_write_invalid_ext               = 2,
    idevice_fault_address_type_execute_invalid_ext             = 3,
    idevice_fault_address_type_instruction_pointer_unknown_ext = 4,
    idevice_fault_address_type_instruction_pointer_invalid_ext = 5,
    idevice_fault_address_type_instruction_pointer_fault_ext   = 6
};

enum class device_fault_vendor_binary_header_version_ext
    : uint32_t
{
    idevice_fault_vendor_binary_header_version_one_ext = 1
};

enum class indirect_commands_layout_usage_flag_bits_ext
    : uint32_t
{
    iindirect_commands_layout_usage_explicit_preprocess_bit_ext = (1U << 0),
    iindirect_commands_layout_usage_unordered_sequences_bit_ext = (1U << 1)
};

enum class indirect_execution_set_info_type_ext
    : uint32_t
{
    iindirect_execution_set_info_type_pipelines_ext      = 0,
    iindirect_execution_set_info_type_shader_objects_ext = 1
};

enum class indirect_commands_input_mode_flag_bits_ext
    : uint32_t
{
    iindirect_commands_input_mode_vulkan_index_buffer_ext = (1U << 0),
    iindirect_commands_input_mode_dxgi_index_buffer_ext   = (1U << 1)
};

enum class indirect_commands_token_type_ext
    : uint32_t
{
    iindirect_commands_token_type_execution_set_ext      = 0,
    iindirect_commands_token_type_push_constant_ext      = 1,
    iindirect_commands_token_type_sequence_index_ext     = 2,
    iindirect_commands_token_type_index_buffer_ext       = 3,
    iindirect_commands_token_type_vertex_buffer_ext      = 4,
    iindirect_commands_token_type_draw_indexed_ext       = 5,
    iindirect_commands_token_type_draw_ext               = 6,
    iindirect_commands_token_type_draw_indexed_count_ext = 7,
    iindirect_commands_token_type_draw_count_ext         = 8,
    iindirect_commands_token_type_dispatch_ext           = 9
};

enum class displacement_micromap_format_nv
    : uint32_t
{
    idisplacement_micromap_format_64_triangles_64_bytes_nv    = 1,
    idisplacement_micromap_format_256_triangles_128_bytes_nv  = 2,
    idisplacement_micromap_format_1024_triangles_128_bytes_nv = 3
};

enum class shader_create_flag_bits_ext
    : uint32_t
{
    ishader_create_link_stage_bit_ext = (1U << 0)
};

enum class shader_code_type_ext
    : uint32_t
{
    ishader_code_type_binary_ext = 0,
    ishader_code_type_spirv_ext  = 1
};

enum class scope_khr
    : uint32_t
{
    iscope_device_khr       = 1,
    iscope_workgroup_khr    = 2,
    iscope_subgroup_khr     = 3,
    iscope_queue_family_khr = 5
};

enum class component_type_khr
    : uint32_t
{
    icomponent_type_float16_khr = 0,
    icomponent_type_float32_khr = 1,
    icomponent_type_float64_khr = 2,
    icomponent_type_sint8_khr   = 3,
    icomponent_type_sint16_khr  = 4,
    icomponent_type_sint32_khr  = 5,
    icomponent_type_sint64_khr  = 6,
    icomponent_type_uint8_khr   = 7,
    icomponent_type_uint16_khr  = 8,
    icomponent_type_uint32_khr  = 9,
    icomponent_type_uint64_khr  = 10
};

enum class cubic_filter_weights_qcom
    : uint32_t
{
    icubic_filter_weights_catmull_rom_qcom           = 0,
    icubic_filter_weights_zero_tangent_cardinal_qcom = 1,
    icubic_filter_weights_b_spline_qcom              = 2,
    icubic_filter_weights_mitchell_netravali_qcom    = 3
};

enum class block_match_window_compare_mode_qcom
    : uint32_t
{
    iblock_match_window_compare_mode_min_qcom = 0,
    iblock_match_window_compare_mode_max_qcom = 1
};

enum class physical_device_layered_api_khr
    : uint32_t
{
    iphysical_device_layered_api_vulkan_khr   = 0,
    iphysical_device_layered_api_d3d12_khr    = 1,
    iphysical_device_layered_api_metal_khr    = 2,
    iphysical_device_layered_api_opengl_khr   = 3,
    iphysical_device_layered_api_opengles_khr = 4
};

enum class layered_driver_underlying_api_msft
    : uint32_t
{
    ilayered_driver_underlying_api_none_msft  = 0,
    ilayered_driver_underlying_api_d3d12_msft = 1
};

enum class latency_marker_nv
    : uint32_t
{
    ilatency_marker_simulation_start_nv               = 0,
    ilatency_marker_simulation_end_nv                 = 1,
    ilatency_marker_rendersubmit_start_nv             = 2,
    ilatency_marker_rendersubmit_end_nv               = 3,
    ilatency_marker_present_start_nv                  = 4,
    ilatency_marker_present_end_nv                    = 5,
    ilatency_marker_input_sample_nv                   = 6,
    ilatency_marker_trigger_flash_nv                  = 7,
    ilatency_marker_out_of_band_rendersubmit_start_nv = 8,
    ilatency_marker_out_of_band_rendersubmit_end_nv   = 9,
    ilatency_marker_out_of_band_present_start_nv      = 10,
    ilatency_marker_out_of_band_present_end_nv        = 11
};

enum class out_of_band_queue_type_nv
    : uint32_t
{
    iout_of_band_queue_type_render_nv  = 0,
    iout_of_band_queue_type_present_nv = 1
};

enum class memory_unmap_flag_bits
    : uint32_t
{
};

enum class compressed_triangle_format_amdx
    : uint32_t
{
    icompressed_triangle_format_dgf1_amdx = 0
};

enum class wayland_surface_create_flag_bits_khr
    : uint32_t
{
};

enum class depth_clamp_mode_ext
    : uint32_t
{
    idepth_clamp_mode_viewport_range_ext     = 0,
    idepth_clamp_mode_user_defined_range_ext = 1
};

enum class access_flag_bits3_khr
    : uint64_t
{
    iaccess_3_none_khr = 0
};

enum class tile_shading_render_pass_flag_bits_qcom
    : uint32_t
{
    itile_shading_render_pass_enable_bit_qcom             = (1U << 0),
    itile_shading_render_pass_per_tile_execution_bit_qcom = (1U << 1)
};

enum class cooperative_vector_matrix_layout_nv
    : uint32_t
{
    icooperative_vector_matrix_layout_row_major_nv           = 0,
    icooperative_vector_matrix_layout_column_major_nv        = 1,
    icooperative_vector_matrix_layout_inferencing_optimal_nv = 2,
    icooperative_vector_matrix_layout_training_optimal_nv    = 3
};

enum class address_copy_flag_bits_khr
    : uint32_t
{
    iaddress_copy_device_local_bit_khr = (1U << 0),
    iaddress_copy_sparse_bit_khr       = (1U << 1),
    iaddress_copy_protected_bit_khr    = (1U << 2)
};

enum class tensor_create_flag_bits_arm
    : uint64_t
{
    itensor_create_mutable_format_bit_arm = (1ULL << 0),
    itensor_create_protected_bit_arm      = (1ULL << 1)
};

enum class tensor_usage_flag_bits_arm
    : uint64_t
{
    itensor_usage_shader_bit_arm         = (1ULL << 1),
    itensor_usage_transfer_src_bit_arm   = (1ULL << 2),
    itensor_usage_transfer_dst_bit_arm   = (1ULL << 3),
    itensor_usage_image_aliasing_bit_arm = (1ULL << 4)
};

enum class tensor_tiling_arm
    : uint32_t
{
    itensor_tiling_optimal_arm = 0,
    itensor_tiling_linear_arm  = 1
};

enum class tensor_view_create_flag_bits_arm
    : uint64_t
{
};

enum class default_vertex_attribute_value_khr
    : uint32_t
{
    idefault_vertex_attribute_value_zero_zero_zero_zero_khr = 0,
    idefault_vertex_attribute_value_zero_zero_zero_one_khr  = 1
};

enum class data_graph_pipeline_session_create_flag_bits_arm
    : uint64_t
{
    idata_graph_pipeline_session_create_protected_bit_arm = (1ULL << 0)
};

enum class data_graph_pipeline_session_bind_point_arm
    : uint32_t
{
    idata_graph_pipeline_session_bind_point_transient_arm = 0
};

enum class data_graph_pipeline_session_bind_point_type_arm
    : uint32_t
{
    idata_graph_pipeline_session_bind_point_type_memory_arm = 0
};

enum class data_graph_pipeline_property_arm
    : uint32_t
{
    idata_graph_pipeline_property_creation_log_arm = 0,
    idata_graph_pipeline_property_identifier_arm   = 1
};

enum class data_graph_pipeline_dispatch_flag_bits_arm
    : uint64_t
{
};

enum class physical_device_data_graph_processing_engine_type_arm
    : uint32_t
{
    iphysical_device_data_graph_processing_engine_type_default_arm = 0
};

enum class physical_device_data_graph_operation_type_arm
    : uint32_t
{
    iphysical_device_data_graph_operation_type_spirv_extended_instruction_set_arm = 0
};

enum class data_graph_model_cache_type_qcom
    : uint32_t
{
    idata_graph_model_cache_type_generic_binary_qcom = 0
};

enum class video_encode_rgb_model_conversion_flag_bits_valve
    : uint32_t
{
    ivideo_encode_rgb_model_conversion_rgb_identity_bit_valve   = (1U << 0),
    ivideo_encode_rgb_model_conversion_ycbcr_identity_bit_valve = (1U << 1),
    ivideo_encode_rgb_model_conversion_ycbcr_709_bit_valve      = (1U << 2),
    ivideo_encode_rgb_model_conversion_ycbcr_601_bit_valve      = (1U << 3),
    ivideo_encode_rgb_model_conversion_ycbcr_2020_bit_valve     = (1U << 4)
};

enum class video_encode_rgb_range_compression_flag_bits_valve
    : uint32_t
{
    ivideo_encode_rgb_range_compression_full_range_bit_valve   = (1U << 0),
    ivideo_encode_rgb_range_compression_narrow_range_bit_valve = (1U << 1)
};

enum class video_encode_rgb_chroma_offset_flag_bits_valve
    : uint32_t
{
    ivideo_encode_rgb_chroma_offset_cosited_even_bit_valve = (1U << 0),
    ivideo_encode_rgb_chroma_offset_midpoint_bit_valve     = (1U << 1)
};

enum class swapchain_image_usage_flag_bits_ohos
    : uint32_t
{
    iswapchain_image_usage_shared_bit_ohos = (1U << 0)
};

