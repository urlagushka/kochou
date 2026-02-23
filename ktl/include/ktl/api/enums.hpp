#ifndef KTL_ENUMS_HPP
#define KTL_ENUMS_HPP

#include <cstdint>

namespace ktl
{
    enum class image_layout
        : std::uint32_t
    {
        undefined                        = 0,
        general                          = 1,
        color_attachment_optimal         = 2,
        depth_stencil_attachment_optimal = 3,
        depth_stencil_read_only_optimal  = 4,
        shader_read_only_optimal         = 5,
        transfer_src_optimal             = 6,
        transfer_dst_optimal             = 7,
        preinitialized                   = 8
    };

    enum class attachment_load_op
        : std::uint32_t
    {
        load      = 0,
        clear     = 1,
        dont_care = 2
    };

    enum class attachment_store_op
        : std::uint32_t
    {
        store     = 0,
        dont_care = 1
    };

    enum class image_type
        : std::uint32_t
    {
        i1d = 0,
        i2d = 1,
        i3d = 2
    };

    enum class image_tiling
        : std::uint32_t
    {
        optimal = 0,
        linear  = 1
    };

    enum class image_view_type
        : std::uint32_t
    {
        i1d        = 0,
        i2d        = 1,
        i3d        = 2,
        cube       = 3,
        i1d_array  = 4,
        i2d_array  = 5,
        cube_array = 6
    };

    enum class command_buffer_level
        : std::uint32_t
    {
        primary   = 0,
        secondary = 1
    };

    enum class component_swizzle
        : std::uint32_t
    {
        identity = 0,
        zero     = 1,
        one      = 2,
        r        = 3,
        g        = 4,
        b        = 5,
        a        = 6
    };

    enum class descriptor_type
        : std::uint32_t
    {
        sampler                = 0,
        combined_image_sampler = 1,
        sampled_image          = 2,
        storage_image          = 3,
        uniform_texel_buffer   = 4,
        storage_texel_buffer   = 5,
        uniform_buffer         = 6,
        storage_buffer         = 7,
        uniform_buffer_dynamic = 8,
        storage_buffer_dynamic = 9,
        input_attachment       = 10
    };

    enum class query_type
        : std::uint32_t
    {
        occlusion           = 0,
        pipeline_statistics = 1,
        timestamp           = 2
    };

    enum class border_color
        : std::uint32_t
    {
        float_transparent_black = 0,
        int_transparent_black   = 1,
        float_opaque_black      = 2,
        int_opaque_black        = 3,
        float_opaque_white      = 4,
        int_opaque_white        = 5
    };

    enum class pipeline_bind_point
        : std::uint32_t
    {
        graphics = 0,
        compute  = 1
    };

    enum class pipeline_cache_header_version
        : std::uint32_t
    {
        one = 1
    };

    enum class pipeline_cache_create_flag_bits
        : std::uint32_t
    {
    };

    enum class primitive_topology
        : std::uint32_t
    {
        point_list                    = 0,
        line_list                     = 1,
        line_strip                    = 2,
        triangle_list                 = 3,
        triangle_strip                = 4,
        triangle_fan                  = 5,
        line_list_with_adjacency      = 6,
        line_strip_with_adjacency     = 7,
        triangle_list_with_adjacency  = 8,
        triangle_strip_with_adjacency = 9,
        patch_list                    = 10
    };

    enum class sharing_mode
        : std::uint32_t
    {
        exclusive  = 0,
        concurrent = 1
    };

    enum class index_type
        : std::uint32_t
    {
        uint16 = 0,
        uint32 = 1
    };

    enum class filter
        : std::uint32_t
    {
        nearest = 0,
        linear  = 1
    };

    enum class sampler_mipmap_mode
        : std::uint32_t
    {
        nearest = 0,
        linear  = 1
    };

    enum class sampler_address_mode
        : std::uint32_t
    {
        repeat          = 0,
        mirrored_repeat = 1,
        clamp_to_edge   = 2,
        clamp_to_border = 3
    };

    enum class compare_op
        : std::uint32_t
    {
        never            = 0,
        less             = 1,
        equal            = 2,
        less_or_equal    = 3,
        greater          = 4,
        not_equal        = 5,
        greater_or_equal = 6,
        always           = 7
    };

    enum class polygon_mode
        : std::uint32_t
    {
        fill  = 0,
        line  = 1,
        point = 2
    };

    enum class front_face
        : std::uint32_t
    {
        counter_clockwise = 0,
        clockwise         = 1
    };

    enum class blend_factor
        : std::uint32_t
    {
        zero                     = 0,
        one                      = 1,
        src_color                = 2,
        one_minus_src_color      = 3,
        dst_color                = 4,
        one_minus_dst_color      = 5,
        src_alpha                = 6,
        one_minus_src_alpha      = 7,
        dst_alpha                = 8,
        one_minus_dst_alpha      = 9,
        constant_color           = 10,
        one_minus_constant_color = 11,
        constant_alpha           = 12,
        one_minus_constant_alpha = 13,
        src_alpha_saturate       = 14,
        src1_color               = 15,
        one_minus_src1_color     = 16,
        src1_alpha               = 17,
        one_minus_src1_alpha     = 18
    };

    enum class blend_op
        : std::uint32_t
    {
        add              = 0,
        subtract         = 1,
        reverse_subtract = 2,
        min              = 3,
        max              = 4
    };

    enum class stencil_op
        : std::uint32_t
    {
        keep                = 0,
        zero                = 1,
        replace             = 2,
        increment_and_clamp = 3,
        decrement_and_clamp = 4,
        invert              = 5,
        increment_and_wrap  = 6,
        decrement_and_wrap  = 7
    };

    enum class logic_op
        : std::uint32_t
    {
        clear         = 0,
        and           = 1,
        and_reverse   = 2,
        copy          = 3,
        and_inverted  = 4,
        no_op         = 5,
        xor           = 6,
        or            = 7,
        nor           = 8,
        equivalent    = 9,
        invert        = 10,
        or_reverse    = 11,
        copy_inverted = 12,
        or_inverted   = 13,
        nand          = 14,
        set           = 15
    };

    enum class internal_allocation_type
        : std::uint32_t
    {
        executable = 0
    };

    enum class system_allocation_scope
        : std::uint32_t
    {
        command  = 0,
        object   = 1,
        cache    = 2,
        device   = 3,
        instance = 4
    };

    enum class physical_device_type
        : std::uint32_t
    {
        other          = 0,
        integrated_gpu = 1,
        discrete_gpu   = 2,
        virtual_gpu    = 3,
        cpu            = 4
    };

    enum class vertex_input_rate
        : std::uint32_t
    {
        vertex   = 0,
        instance = 1
    };

    enum class format
        : std::uint32_t
    {
        undefined                  = 0,
        r4g4_unorm_pack8           = 1,
        r4g4b4a4_unorm_pack16      = 2,
        b4g4r4a4_unorm_pack16      = 3,
        r5g6b5_unorm_pack16        = 4,
        b5g6r5_unorm_pack16        = 5,
        r5g5b5a1_unorm_pack16      = 6,
        b5g5r5a1_unorm_pack16      = 7,
        a1r5g5b5_unorm_pack16      = 8,
        r8_unorm                   = 9,
        r8_snorm                   = 10,
        r8_uscaled                 = 11,
        r8_sscaled                 = 12,
        r8_uint                    = 13,
        r8_sint                    = 14,
        r8_srgb                    = 15,
        r8g8_unorm                 = 16,
        r8g8_snorm                 = 17,
        r8g8_uscaled               = 18,
        r8g8_sscaled               = 19,
        r8g8_uint                  = 20,
        r8g8_sint                  = 21,
        r8g8_srgb                  = 22,
        r8g8b8_unorm               = 23,
        r8g8b8_snorm               = 24,
        r8g8b8_uscaled             = 25,
        r8g8b8_sscaled             = 26,
        r8g8b8_uint                = 27,
        r8g8b8_sint                = 28,
        r8g8b8_srgb                = 29,
        b8g8r8_unorm               = 30,
        b8g8r8_snorm               = 31,
        b8g8r8_uscaled             = 32,
        b8g8r8_sscaled             = 33,
        b8g8r8_uint                = 34,
        b8g8r8_sint                = 35,
        b8g8r8_srgb                = 36,
        r8g8b8a8_unorm             = 37,
        r8g8b8a8_snorm             = 38,
        r8g8b8a8_uscaled           = 39,
        r8g8b8a8_sscaled           = 40,
        r8g8b8a8_uint              = 41,
        r8g8b8a8_sint              = 42,
        r8g8b8a8_srgb              = 43,
        b8g8r8a8_unorm             = 44,
        b8g8r8a8_snorm             = 45,
        b8g8r8a8_uscaled           = 46,
        b8g8r8a8_sscaled           = 47,
        b8g8r8a8_uint              = 48,
        b8g8r8a8_sint              = 49,
        b8g8r8a8_srgb              = 50,
        a8b8g8r8_unorm_pack32      = 51,
        a8b8g8r8_snorm_pack32      = 52,
        a8b8g8r8_uscaled_pack32    = 53,
        a8b8g8r8_sscaled_pack32    = 54,
        a8b8g8r8_uint_pack32       = 55,
        a8b8g8r8_sint_pack32       = 56,
        a8b8g8r8_srgb_pack32       = 57,
        a2r10g10b10_unorm_pack32   = 58,
        a2r10g10b10_snorm_pack32   = 59,
        a2r10g10b10_uscaled_pack32 = 60,
        a2r10g10b10_sscaled_pack32 = 61,
        a2r10g10b10_uint_pack32    = 62,
        a2r10g10b10_sint_pack32    = 63,
        a2b10g10r10_unorm_pack32   = 64,
        a2b10g10r10_snorm_pack32   = 65,
        a2b10g10r10_uscaled_pack32 = 66,
        a2b10g10r10_sscaled_pack32 = 67,
        a2b10g10r10_uint_pack32    = 68,
        a2b10g10r10_sint_pack32    = 69,
        r16_unorm                  = 70,
        r16_snorm                  = 71,
        r16_uscaled                = 72,
        r16_sscaled                = 73,
        r16_uint                   = 74,
        r16_sint                   = 75,
        r16_sfloat                 = 76,
        r16g16_unorm               = 77,
        r16g16_snorm               = 78,
        r16g16_uscaled             = 79,
        r16g16_sscaled             = 80,
        r16g16_uint                = 81,
        r16g16_sint                = 82,
        r16g16_sfloat              = 83,
        r16g16b16_unorm            = 84,
        r16g16b16_snorm            = 85,
        r16g16b16_uscaled          = 86,
        r16g16b16_sscaled          = 87,
        r16g16b16_uint             = 88,
        r16g16b16_sint             = 89,
        r16g16b16_sfloat           = 90,
        r16g16b16a16_unorm         = 91,
        r16g16b16a16_snorm         = 92,
        r16g16b16a16_uscaled       = 93,
        r16g16b16a16_sscaled       = 94,
        r16g16b16a16_uint          = 95,
        r16g16b16a16_sint          = 96,
        r16g16b16a16_sfloat        = 97,
        r32_uint                   = 98,
        r32_sint                   = 99,
        r32_sfloat                 = 100,
        r32g32_uint                = 101,
        r32g32_sint                = 102,
        r32g32_sfloat              = 103,
        r32g32b32_uint             = 104,
        r32g32b32_sint             = 105,
        r32g32b32_sfloat           = 106,
        r32g32b32a32_uint          = 107,
        r32g32b32a32_sint          = 108,
        r32g32b32a32_sfloat        = 109,
        r64_uint                   = 110,
        r64_sint                   = 111,
        r64_sfloat                 = 112,
        r64g64_uint                = 113,
        r64g64_sint                = 114,
        r64g64_sfloat              = 115,
        r64g64b64_uint             = 116,
        r64g64b64_sint             = 117,
        r64g64b64_sfloat           = 118,
        r64g64b64a64_uint          = 119,
        r64g64b64a64_sint          = 120,
        r64g64b64a64_sfloat        = 121,
        b10g11r11_ufloat_pack32    = 122,
        e5b9g9r9_ufloat_pack32     = 123,
        d16_unorm                  = 124,
        x8_d24_unorm_pack32        = 125,
        d32_sfloat                 = 126,
        s8_uint                    = 127,
        d16_unorm_s8_uint          = 128,
        d24_unorm_s8_uint          = 129,
        d32_sfloat_s8_uint         = 130,
        bc1_rgb_unorm_block        = 131,
        bc1_rgb_srgb_block         = 132,
        bc1_rgba_unorm_block       = 133,
        bc1_rgba_srgb_block        = 134,
        bc2_unorm_block            = 135,
        bc2_srgb_block             = 136,
        bc3_unorm_block            = 137,
        bc3_srgb_block             = 138,
        bc4_unorm_block            = 139,
        bc4_snorm_block            = 140,
        bc5_unorm_block            = 141,
        bc5_snorm_block            = 142,
        bc6h_ufloat_block          = 143,
        bc6h_sfloat_block          = 144,
        bc7_unorm_block            = 145,
        bc7_srgb_block             = 146,
        etc2_r8g8b8_unorm_block    = 147,
        etc2_r8g8b8_srgb_block     = 148,
        etc2_r8g8b8a1_unorm_block  = 149,
        etc2_r8g8b8a1_srgb_block   = 150,
        etc2_r8g8b8a8_unorm_block  = 151,
        etc2_r8g8b8a8_srgb_block   = 152,
        eac_r11_unorm_block        = 153,
        eac_r11_snorm_block        = 154,
        eac_r11g11_unorm_block     = 155,
        eac_r11g11_snorm_block     = 156,
        astc_4x4_unorm_block       = 157,
        astc_4x4_srgb_block        = 158,
        astc_5x4_unorm_block       = 159,
        astc_5x4_srgb_block        = 160,
        astc_5x5_unorm_block       = 161,
        astc_5x5_srgb_block        = 162,
        astc_6x5_unorm_block       = 163,
        astc_6x5_srgb_block        = 164,
        astc_6x6_unorm_block       = 165,
        astc_6x6_srgb_block        = 166,
        astc_8x5_unorm_block       = 167,
        astc_8x5_srgb_block        = 168,
        astc_8x6_unorm_block       = 169,
        astc_8x6_srgb_block        = 170,
        astc_8x8_unorm_block       = 171,
        astc_8x8_srgb_block        = 172,
        astc_10x5_unorm_block      = 173,
        astc_10x5_srgb_block       = 174,
        astc_10x6_unorm_block      = 175,
        astc_10x6_srgb_block       = 176,
        astc_10x8_unorm_block      = 177,
        astc_10x8_srgb_block       = 178,
        astc_10x10_unorm_block     = 179,
        astc_10x10_srgb_block      = 180,
        astc_12x10_unorm_block     = 181,
        astc_12x10_srgb_block      = 182,
        astc_12x12_unorm_block     = 183,
        astc_12x12_srgb_block      = 184
    };

    enum class structure_type
        : std::uint32_t
    {
        application_info                          = 0,
        instance_create_info                      = 1,
        device_queue_create_info                  = 2,
        device_create_info                        = 3,
        submit_info                               = 4,
        memory_allocate_info                      = 5,
        mapped_memory_range                       = 6,
        bind_sparse_info                          = 7,
        fence_create_info                         = 8,
        semaphore_create_info                     = 9,
        event_create_info                         = 10,
        query_pool_create_info                    = 11,
        buffer_create_info                        = 12,
        buffer_view_create_info                   = 13,
        image_create_info                         = 14,
        image_view_create_info                    = 15,
        shader_module_create_info                 = 16,
        pipeline_cache_create_info                = 17,
        pipeline_shader_stage_create_info         = 18,
        pipeline_vertex_input_state_create_info   = 19,
        pipeline_input_assembly_state_create_info = 20,
        pipeline_tessellation_state_create_info   = 21,
        pipeline_viewport_state_create_info       = 22,
        pipeline_rasterization_state_create_info  = 23,
        pipeline_multisample_state_create_info    = 24,
        pipeline_depth_stencil_state_create_info  = 25,
        pipeline_color_blend_state_create_info    = 26,
        pipeline_dynamic_state_create_info        = 27,
        graphics_pipeline_create_info             = 28,
        compute_pipeline_create_info              = 29,
        pipeline_layout_create_info               = 30,
        sampler_create_info                       = 31,
        descriptor_set_layout_create_info         = 32,
        descriptor_pool_create_info               = 33,
        descriptor_set_allocate_info              = 34,
        write_descriptor_set                      = 35,
        copy_descriptor_set                       = 36,
        framebuffer_create_info                   = 37,
        render_pass_create_info                   = 38,
        command_pool_create_info                  = 39,
        command_buffer_allocate_info              = 40,
        command_buffer_inheritance_info           = 41,
        command_buffer_begin_info                 = 42,
        render_pass_begin_info                    = 43,
        buffer_memory_barrier                     = 44,
        image_memory_barrier                      = 45,
        memory_barrier                            = 46,
        loader_instance_create_info               = 47,
        loader_device_create_info                 = 48
    };

    enum class subpass_contents
        : std::uint32_t
    {
        inline                    = 0,
        secondary_command_buffers = 1
    };

    enum class result
        : std::int32_t
    {
        success                     = 0,
        not_ready                   = 1,
        timeout                     = 2,
        event_set                   = 3,
        event_reset                 = 4,
        incomplete                  = 5,
        error_out_of_host_memory    = -1,
        error_out_of_device_memory  = -2,
        error_initialization_failed = -3,
        error_device_lost           = -4,
        error_memory_map_failed     = -5,
        error_layer_not_present     = -6,
        error_extension_not_present = -7,
        error_feature_not_present   = -8,
        error_incompatible_driver   = -9,
        error_too_many_objects      = -10,
        error_format_not_supported  = -11,
        error_fragmented_pool       = -12,
        error_unknown               = -13
    };

    enum class dynamic_state
        : std::uint32_t
    {
        viewport             = 0,
        scissor              = 1,
        line_width           = 2,
        depth_bias           = 3,
        blend_constants      = 4,
        depth_bounds         = 5,
        stencil_compare_mask = 6,
        stencil_write_mask   = 7,
        stencil_reference    = 8
    };

    enum class descriptor_update_template_type
        : std::uint32_t
    {
        descriptor_set = 0
    };

    enum class object_type
        : std::uint32_t
    {
        unknown               = 0,
        instance              = 1,
        physical_device       = 2,
        device                = 3,
        queue                 = 4,
        semaphore             = 5,
        command_buffer        = 6,
        fence                 = 7,
        device_memory         = 8,
        buffer                = 9,
        image                 = 10,
        event                 = 11,
        query_pool            = 12,
        buffer_view           = 13,
        image_view            = 14,
        shader_module         = 15,
        pipeline_cache        = 16,
        pipeline_layout       = 17,
        render_pass           = 18,
        pipeline              = 19,
        descriptor_set_layout = 20,
        sampler               = 21,
        descriptor_pool       = 22,
        descriptor_set        = 23,
        framebuffer           = 24,
        command_pool          = 25
    };

    enum class ray_tracing_invocation_reorder_mode_ext
        : std::uint32_t
    {
        none_ext    = 0,
        reorder_ext = 1
    };

    enum class ray_tracing_lss_indexing_mode_nv
        : std::uint32_t
    {
        list_nv       = 0,
        successive_nv = 1
    };

    enum class ray_tracing_lss_primitive_end_caps_mode_nv
        : std::uint32_t
    {
        one_nv     = 0,
        chained_nv = 1
    };

    enum class direct_driver_loading_mode_lunarg
        : std::uint32_t
    {
        exclusive_lunarg = 0,
        inclusive_lunarg = 1
    };

    enum class anti_lag_mode_amd
        : std::uint32_t
    {
        driver_control_amd = 0,
        on_amd             = 1,
        off_amd            = 2
    };

    enum class anti_lag_stage_amd
        : std::uint32_t
    {
        input_amd   = 0,
        present_amd = 1
    };

    enum class queue_flag_bits
        : std::uint32_t
    {
        graphics_bit       = (1U << 0),
        compute_bit        = (1U << 1),
        transfer_bit       = (1U << 2),
        sparse_binding_bit = (1U << 3)
    };

    enum class cull_mode_flag_bits
        : std::uint32_t
    {
        none          = 0,
        ront_bit      = (1U << 0),
        back_bit      = (1U << 1),
        ront_and_back = 0x00000003
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
        device_local_bit     = (1U << 0),
        host_visible_bit     = (1U << 1),
        host_coherent_bit    = (1U << 2),
        host_cached_bit      = (1U << 3),
        lazily_allocated_bit = (1U << 4)
    };

    enum class memory_heap_flag_bits
        : std::uint32_t
    {
        device_local_bit = (1U << 0)
    };

    enum class access_flag_bits
        : std::uint32_t
    {
        indirect_command_read_bit          = (1U << 0),
        index_read_bit                     = (1U << 1),
        vertex_attribute_read_bit          = (1U << 2),
        uniform_read_bit                   = (1U << 3),
        input_attachment_read_bit          = (1U << 4),
        shader_read_bit                    = (1U << 5),
        shader_write_bit                   = (1U << 6),
        color_attachment_read_bit          = (1U << 7),
        color_attachment_write_bit         = (1U << 8),
        depth_stencil_attachment_read_bit  = (1U << 9),
        depth_stencil_attachment_write_bit = (1U << 10),
        transfer_read_bit                  = (1U << 11),
        transfer_write_bit                 = (1U << 12),
        host_read_bit                      = (1U << 13),
        host_write_bit                     = (1U << 14),
        memory_read_bit                    = (1U << 15),
        memory_write_bit                   = (1U << 16)
    };

    enum class buffer_usage_flag_bits
        : std::uint32_t
    {
        transfer_src_bit         = (1U << 0),
        transfer_dst_bit         = (1U << 1),
        uniform_texel_buffer_bit = (1U << 2),
        storage_texel_buffer_bit = (1U << 3),
        uniform_buffer_bit       = (1U << 4),
        storage_buffer_bit       = (1U << 5),
        index_buffer_bit         = (1U << 6),
        vertex_buffer_bit        = (1U << 7),
        indirect_buffer_bit      = (1U << 8)
    };

    enum class buffer_usage_flag_bits2
        : std::uint64_t
    {
        i2_transfer_src_bit         = (1ULL << 0),
        i2_transfer_dst_bit         = (1ULL << 1),
        i2_uniform_texel_buffer_bit = (1ULL << 2),
        i2_storage_texel_buffer_bit = (1ULL << 3),
        i2_uniform_buffer_bit       = (1ULL << 4),
        i2_storage_buffer_bit       = (1ULL << 5),
        i2_index_buffer_bit         = (1ULL << 6),
        i2_vertex_buffer_bit        = (1ULL << 7),
        i2_indirect_buffer_bit      = (1ULL << 8)
    };

    enum class buffer_create_flag_bits
        : std::uint32_t
    {
        sparse_binding_bit   = (1U << 0),
        sparse_residency_bit = (1U << 1),
        sparse_aliased_bit   = (1U << 2)
    };

    enum class shader_stage_flag_bits
        : std::uint32_t
    {
        vertex_bit                  = (1U << 0),
        tessellation_control_bit    = (1U << 1),
        tessellation_evaluation_bit = (1U << 2),
        geometry_bit                = (1U << 3),
        ragment_bit                 = (1U << 4),
        compute_bit                 = (1U << 5),
        all_graphics                = 0x0000001F,
        all                         = 0x7FFFFFFF
    };

    enum class image_usage_flag_bits
        : std::uint32_t
    {
        transfer_src_bit             = (1U << 0),
        transfer_dst_bit             = (1U << 1),
        sampled_bit                  = (1U << 2),
        storage_bit                  = (1U << 3),
        color_attachment_bit         = (1U << 4),
        depth_stencil_attachment_bit = (1U << 5),
        transient_attachment_bit     = (1U << 6),
        input_attachment_bit         = (1U << 7)
    };

    enum class image_create_flag_bits
        : std::uint32_t
    {
        sparse_binding_bit   = (1U << 0),
        sparse_residency_bit = (1U << 1),
        sparse_aliased_bit   = (1U << 2),
        mutable_format_bit   = (1U << 3),
        cube_compatible_bit  = (1U << 4)
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
        disable_optimization_bit = (1U << 0),
        allow_derivatives_bit    = (1U << 1),
        derivative_bit           = (1U << 2)
    };

    enum class pipeline_create_flag_bits2
        : std::uint64_t
    {
        i2_disable_optimization_bit              = (1ULL << 0),
        i2_allow_derivatives_bit                 = (1ULL << 1),
        i2_derivative_bit                        = (1ULL << 2),
        i2_view_index_from_device_index_bit      = (1ULL << 3),
        i2_dispatch_base_bit                     = (1ULL << 4),
        i2_fail_on_pipeline_compile_required_bit = (1ULL << 8),
        i2_early_return_on_failure_bit           = (1ULL << 9),
        i2_no_protected_access_bit               = (1ULL << 27),
        i2_protected_access_only_bit             = (1ULL << 30)
    };

    enum class pipeline_shader_stage_create_flag_bits
        : std::uint32_t
    {
    };

    enum class color_component_flag_bits
        : std::uint32_t
    {
        r_bit = (1U << 0),
        g_bit = (1U << 1),
        b_bit = (1U << 2),
        a_bit = (1U << 3)
    };

    enum class fence_create_flag_bits
        : std::uint32_t
    {
        signaled_bit = (1U << 0)
    };

    enum class semaphore_create_flag_bits
        : std::uint32_t
    {
    };

    enum class format_feature_flag_bits
        : std::uint32_t
    {
        sampled_image_bit               = (1U << 0),
        storage_image_bit               = (1U << 1),
        storage_image_atomic_bit        = (1U << 2),
        uniform_texel_buffer_bit        = (1U << 3),
        storage_texel_buffer_bit        = (1U << 4),
        storage_texel_buffer_atomic_bit = (1U << 5),
        vertex_buffer_bit               = (1U << 6),
        color_attachment_bit            = (1U << 7),
        color_attachment_blend_bit      = (1U << 8),
        depth_stencil_attachment_bit    = (1U << 9),
        blit_src_bit                    = (1U << 10),
        blit_dst_bit                    = (1U << 11),
        sampled_image_filter_linear_bit = (1U << 12)
    };

    enum class query_control_flag_bits
        : std::uint32_t
    {
        precise_bit = (1U << 0)
    };

    enum class query_result_flag_bits
        : std::uint32_t
    {
        i64_bit               = (1U << 0),
        wait_bit              = (1U << 1),
        with_availability_bit = (1U << 2),
        partial_bit           = (1U << 3)
    };

    enum class command_buffer_usage_flag_bits
        : std::uint32_t
    {
        one_time_submit_bit      = (1U << 0),
        render_pass_continue_bit = (1U << 1),
        simultaneous_use_bit     = (1U << 2)
    };

    enum class query_pipeline_statistic_flag_bits
        : std::uint32_t
    {
        input_assembly_vertices_bit                    = (1U << 0),
        input_assembly_primitives_bit                  = (1U << 1),
        vertex_shader_invocations_bit                  = (1U << 2),
        geometry_shader_invocations_bit                = (1U << 3),
        geometry_shader_primitives_bit                 = (1U << 4),
        clipping_invocations_bit                       = (1U << 5),
        clipping_primitives_bit                        = (1U << 6),
        ragment_shader_invocations_bit                 = (1U << 7),
        tessellation_control_shader_patches_bit        = (1U << 8),
        tessellation_evaluation_shader_invocations_bit = (1U << 9),
        compute_shader_invocations_bit                 = (1U << 10)
    };

    enum class memory_map_flag_bits
        : std::uint32_t
    {
    };

    enum class image_aspect_flag_bits
        : std::uint32_t
    {
        color_bit    = (1U << 0),
        depth_bit    = (1U << 1),
        stencil_bit  = (1U << 2),
        metadata_bit = (1U << 3)
    };

    enum class sparse_image_format_flag_bits
        : std::uint32_t
    {
        single_miptail_bit         = (1U << 0),
        aligned_mip_size_bit       = (1U << 1),
        nonstandard_block_size_bit = (1U << 2)
    };

    enum class sparse_memory_bind_flag_bits
        : std::uint32_t
    {
        metadata_bit = (1U << 0)
    };

    enum class pipeline_stage_flag_bits
        : std::uint32_t
    {
        top_of_pipe_bit                    = (1U << 0),
        draw_indirect_bit                  = (1U << 1),
        vertex_input_bit                   = (1U << 2),
        vertex_shader_bit                  = (1U << 3),
        tessellation_control_shader_bit    = (1U << 4),
        tessellation_evaluation_shader_bit = (1U << 5),
        geometry_shader_bit                = (1U << 6),
        ragment_shader_bit                 = (1U << 7),
        early_fragment_tests_bit           = (1U << 8),
        late_fragment_tests_bit            = (1U << 9),
        color_attachment_output_bit        = (1U << 10),
        compute_shader_bit                 = (1U << 11),
        transfer_bit                       = (1U << 12),
        bottom_of_pipe_bit                 = (1U << 13),
        host_bit                           = (1U << 14),
        all_graphics_bit                   = (1U << 15),
        all_commands_bit                   = (1U << 16)
    };

    enum class command_pool_create_flag_bits
        : std::uint32_t
    {
        transient_bit            = (1U << 0),
        reset_command_buffer_bit = (1U << 1)
    };

    enum class command_pool_reset_flag_bits
        : std::uint32_t
    {
        release_resources_bit = (1U << 0)
    };

    enum class command_buffer_reset_flag_bits
        : std::uint32_t
    {
        release_resources_bit = (1U << 0)
    };

    enum class sample_count_flag_bits
        : std::uint32_t
    {
        i1_bit  = (1U << 0),
        i2_bit  = (1U << 1),
        i4_bit  = (1U << 2),
        i8_bit  = (1U << 3),
        i16_bit = (1U << 4),
        i32_bit = (1U << 5),
        i64_bit = (1U << 6)
    };

    enum class attachment_description_flag_bits
        : std::uint32_t
    {
        may_alias_bit = (1U << 0)
    };

    enum class stencil_face_flag_bits
        : std::uint32_t
    {
                       ront_bit      = (1U << 0),
                       back_bit      = (1U << 1),
        [[deprecated]] ront_and_back = 0x00000003
    };

    enum class descriptor_pool_create_flag_bits
        : std::uint32_t
    {
        ree_descriptor_set_bit = (1U << 0)
    };

    enum class dependency_flag_bits
        : std::uint32_t
    {
        by_region_bit = (1U << 0)
    };

    enum class semaphore_type
        : std::uint32_t
    {
        binary   = 0,
        timeline = 1
    };

    enum class semaphore_wait_flag_bits
        : std::uint32_t
    {
        any_bit = (1U << 0)
    };

    enum class present_mode_khr
        : std::uint32_t
    {
        immediate_khr    = 0,
        mailbox_khr      = 1,
        fifo_khr         = 2,
        fifo_relaxed_khr = 3
    };

    enum class color_space_khr
        : std::uint32_t
    {
                       srgb_nonlinear_khr       = 0,
        [[deprecated]] space_srgb_nonlinear_khr = 0
    };

    enum class display_plane_alpha_flag_bits_khr
        : std::uint32_t
    {
        opaque_bit_khr                  = (1U << 0),
        global_bit_khr                  = (1U << 1),
        per_pixel_bit_khr               = (1U << 2),
        per_pixel_premultiplied_bit_khr = (1U << 3)
    };

    enum class composite_alpha_flag_bits_khr
        : std::uint32_t
    {
        opaque_bit_khr          = (1U << 0),
        pre_multiplied_bit_khr  = (1U << 1),
        post_multiplied_bit_khr = (1U << 2),
        inherit_bit_khr         = (1U << 3)
    };

    enum class surface_transform_flag_bits_khr
        : std::uint32_t
    {
        identity_bit_khr                     = (1U << 0),
        rotate_90_bit_khr                    = (1U << 1),
        rotate_180_bit_khr                   = (1U << 2),
        rotate_270_bit_khr                   = (1U << 3),
        horizontal_mirror_bit_khr            = (1U << 4),
        horizontal_mirror_rotate_90_bit_khr  = (1U << 5),
        horizontal_mirror_rotate_180_bit_khr = (1U << 6),
        horizontal_mirror_rotate_270_bit_khr = (1U << 7),
        inherit_bit_khr                      = (1U << 8)
    };

    enum class display_surface_stereo_type_nv
        : std::uint32_t
    {
        one_nv                = 0,
        onboard_din_nv        = 1,
        hdmi_3d_nv            = 2,
        inband_displayport_nv = 3
    };

    enum class swapchain_image_usage_flag_bits_android
        : std::uint32_t
    {
        shared_bit_android = (1U << 0)
    };

    enum class time_domain_khr
        : std::uint32_t
    {
        device_khr                    = 0,
        clock_monotonic_khr           = 1,
        clock_monotonic_raw_khr       = 2,
        query_performance_counter_khr = 3
    };

    enum class debug_report_flag_bits_ext
        : std::uint32_t
    {
        information_bit_ext         = (1U << 0),
        warning_bit_ext             = (1U << 1),
        performance_warning_bit_ext = (1U << 2),
        error_bit_ext               = (1U << 3),
        debug_bit_ext               = (1U << 4)
    };

    enum class debug_report_object_type_ext
        : std::uint32_t
    {
                       unknown_ext                   = 0,
                       instance_ext                  = 1,
                       physical_device_ext           = 2,
                       device_ext                    = 3,
                       queue_ext                     = 4,
                       semaphore_ext                 = 5,
                       command_buffer_ext            = 6,
                       fence_ext                     = 7,
                       device_memory_ext             = 8,
                       buffer_ext                    = 9,
                       image_ext                     = 10,
                       vent_ext                      = 11,
                       query_pool_ext                = 12,
                       buffer_view_ext               = 13,
                       image_view_ext                = 14,
                       shader_module_ext             = 15,
                       pipeline_cache_ext            = 16,
                       pipeline_layout_ext           = 17,
                       render_pass_ext               = 18,
                       pipeline_ext                  = 19,
                       descriptor_set_layout_ext     = 20,
                       sampler_ext                   = 21,
                       descriptor_pool_ext           = 22,
                       descriptor_set_ext            = 23,
                       framebuffer_ext               = 24,
                       command_pool_ext              = 25,
                       surface_khr_ext               = 26,
                       swapchain_khr_ext             = 27,
                       debug_report_callback_ext_ext = 28,
        [[deprecated]] debug_report_ext              = 28,
                       display_khr_ext               = 29,
                       display_mode_khr_ext          = 30,
                       validation_cache_ext_ext      = 33,
        [[deprecated]] validation_cache_ext          = 33
    };

    enum class device_memory_report_event_type_ext
        : std::uint32_t
    {
        allocate_ext          = 0,
        free_ext              = 1,
        import_ext            = 2,
        unimport_ext          = 3,
        allocation_failed_ext = 4
    };

    enum class rasterization_order_amd
        : std::uint32_t
    {
        strict_amd  = 0,
        relaxed_amd = 1
    };

    enum class external_memory_handle_type_flag_bits_nv
        : std::uint32_t
    {
        opaque_win32_bit_nv     = (1U << 0),
        opaque_win32_kmt_bit_nv = (1U << 1),
        d3d11_image_bit_nv      = (1U << 2),
        d3d11_image_kmt_bit_nv  = (1U << 3)
    };

    enum class external_memory_feature_flag_bits_nv
        : std::uint32_t
    {
        dedicated_only_bit_nv = (1U << 0),
        exportable_bit_nv     = (1U << 1),
        importable_bit_nv     = (1U << 2)
    };

    enum class cluster_acceleration_structure_index_format_flag_bits_nv
        : std::uint32_t
    {
        i8bit_nv  = (1U << 0),
        i16bit_nv = (1U << 1),
        i32bit_nv = (1U << 2)
    };

    enum class cluster_acceleration_structure_type_nv
        : std::uint32_t
    {
        clusters_bottom_level_nv     = 0,
        triangle_cluster_nv          = 1,
        triangle_cluster_template_nv = 2
    };

    enum class cluster_acceleration_structure_op_type_nv
        : std::uint32_t
    {
        move_objects_nv                    = 0,
        build_clusters_bottom_level_nv     = 1,
        build_triangle_cluster_nv          = 2,
        build_triangle_cluster_template_nv = 3,
        instantiate_triangle_cluster_nv    = 4,
        get_cluster_template_indices_nv    = 5
    };

    enum class cluster_acceleration_structure_op_mode_nv
        : std::uint32_t
    {
        implicit_destinations_nv = 0,
        explicit_destinations_nv = 1,
        compute_sizes_nv         = 2
    };

    enum class cluster_acceleration_structure_cluster_flag_bits_nv
        : std::uint32_t
    {
        allow_disable_opacity_micromaps_nv = (1U << 0)
    };

    enum class cluster_acceleration_structure_geometry_flag_bits_nv
        : std::uint32_t
    {
        cull_disable_bit_nv                   = (1U << 0),
        no_duplicate_anyhit_invocation_bit_nv = (1U << 1),
        opaque_bit_nv                         = (1U << 2)
    };

    enum class cluster_acceleration_structure_address_resolution_flag_bits_nv
        : std::uint32_t
    {
        none_nv                             = 0,
        indirected_dst_implicit_data_bit_nv = (1U << 0),
        indirected_scratch_data_bit_nv      = (1U << 1),
        indirected_dst_address_array_bit_nv = (1U << 2),
        indirected_dst_sizes_array_bit_nv   = (1U << 3),
        indirected_src_infos_array_bit_nv   = (1U << 4),
        indirected_src_infos_count_bit_nv   = (1U << 5)
    };

    enum class validation_check_ext
        : std::uint32_t
    {
        all_ext     = 0,
        shaders_ext = 1
    };

    enum class validation_feature_enable_ext
        : std::uint32_t
    {
        gpu_assisted_ext                      = 0,
        gpu_assisted_reserve_binding_slot_ext = 1,
        best_practices_ext                    = 2,
        debug_printf_ext                      = 3,
        synchronization_validation_ext        = 4
    };

    enum class validation_feature_disable_ext
        : std::uint32_t
    {
        all_ext                     = 0,
        shaders_ext                 = 1,
        thread_safety_ext           = 2,
        api_parameters_ext          = 3,
        object_lifetimes_ext        = 4,
        core_checks_ext             = 5,
        unique_handles_ext          = 6,
        shader_validation_cache_ext = 7
    };

    enum class layer_setting_type_ext
        : std::uint32_t
    {
        bool32_ext  = 0,
        int32_ext   = 1,
        int64_ext   = 2,
        uint32_ext  = 3,
        uint64_ext  = 4,
        float32_ext = 5,
        float64_ext = 6,
        string_ext  = 7
    };

    enum class subgroup_feature_flag_bits
        : std::uint32_t
    {
        basic_bit            = (1U << 0),
        vote_bit             = (1U << 1),
        arithmetic_bit       = (1U << 2),
        ballot_bit           = (1U << 3),
        shuffle_bit          = (1U << 4),
        shuffle_relative_bit = (1U << 5),
        clustered_bit        = (1U << 6),
        quad_bit             = (1U << 7)
    };

    enum class indirect_commands_layout_usage_flag_bits_nv
        : std::uint32_t
    {
        explicit_preprocess_bit_nv = (1U << 0),
        indexed_sequences_bit_nv   = (1U << 1),
        unordered_sequences_bit_nv = (1U << 2)
    };

    enum class indirect_state_flag_bits_nv
        : std::uint32_t
    {
        frontface_bit_nv = (1U << 0)
    };

    enum class indirect_commands_token_type_nv
        : std::uint32_t
    {
        shader_group_nv  = 0,
        state_flags_nv   = 1,
        index_buffer_nv  = 2,
        vertex_buffer_nv = 3,
        push_constant_nv = 4,
        draw_indexed_nv  = 5,
        draw_nv          = 6,
        draw_tasks_nv    = 7
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
        opaque_fd_bit         = (1U << 0),
        opaque_win32_bit      = (1U << 1),
        opaque_win32_kmt_bit  = (1U << 2),
        d3d11_texture_bit     = (1U << 3),
        d3d11_texture_kmt_bit = (1U << 4),
        d3d12_heap_bit        = (1U << 5),
        d3d12_resource_bit    = (1U << 6)
    };

    enum class external_memory_feature_flag_bits
        : std::uint32_t
    {
        dedicated_only_bit = (1U << 0),
        exportable_bit     = (1U << 1),
        importable_bit     = (1U << 2)
    };

    enum class external_semaphore_handle_type_flag_bits
        : std::uint32_t
    {
        opaque_fd_bit        = (1U << 0),
        opaque_win32_bit     = (1U << 1),
        opaque_win32_kmt_bit = (1U << 2),
        d3d12_fence_bit      = (1U << 3),
        d3d11_fence_bit      = (1U << 3),
        sync_fd_bit          = (1U << 4)
    };

    enum class external_semaphore_feature_flag_bits
        : std::uint32_t
    {
        exportable_bit = (1U << 0),
        importable_bit = (1U << 1)
    };

    enum class semaphore_import_flag_bits
        : std::uint32_t
    {
        temporary_bit = (1U << 0)
    };

    enum class external_fence_handle_type_flag_bits
        : std::uint32_t
    {
        opaque_fd_bit        = (1U << 0),
        opaque_win32_bit     = (1U << 1),
        opaque_win32_kmt_bit = (1U << 2),
        sync_fd_bit          = (1U << 3)
    };

    enum class external_fence_feature_flag_bits
        : std::uint32_t
    {
        exportable_bit = (1U << 0),
        importable_bit = (1U << 1)
    };

    enum class fence_import_flag_bits
        : std::uint32_t
    {
        temporary_bit = (1U << 0)
    };

    enum class surface_counter_flag_bits_ext
        : std::uint32_t
    {
                       vblank_bit_ext = (1U << 0),
        [[deprecated]] vblank_ext     = (1U << 0)
    };

    enum class display_power_state_ext
        : std::uint32_t
    {
        off_ext     = 0,
        suspend_ext = 1,
        on_ext      = 2
    };

    enum class device_event_type_ext
        : std::uint32_t
    {
        display_hotplug_ext = 0
    };

    enum class display_event_type_ext
        : std::uint32_t
    {
        first_pixel_out_ext = 0
    };

    enum class peer_memory_feature_flag_bits
        : std::uint32_t
    {
        copy_src_bit    = (1U << 0),
        copy_dst_bit    = (1U << 1),
        generic_src_bit = (1U << 2),
        generic_dst_bit = (1U << 3)
    };

    enum class memory_allocate_flag_bits
        : std::uint32_t
    {
        device_mask_bit = (1U << 0)
    };

    enum class device_group_present_mode_flag_bits_khr
        : std::uint32_t
    {
        local_bit_khr              = (1U << 0),
        remote_bit_khr             = (1U << 1),
        sum_bit_khr                = (1U << 2),
        local_multi_device_bit_khr = (1U << 3)
    };

    enum class swapchain_create_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class viewport_coordinate_swizzle_nv
        : std::uint32_t
    {
        positive_x_nv = 0,
        egative_x_nv  = 1,
        positive_y_nv = 2,
        egative_y_nv  = 3,
        positive_z_nv = 4,
        egative_z_nv  = 5,
        positive_w_nv = 6,
        egative_w_nv  = 7
    };

    enum class discard_rectangle_mode_ext
        : std::uint32_t
    {
        inclusive_ext = 0,
        clusive_ext   = 1
    };

    enum class subpass_description_flag_bits
        : std::uint32_t
    {
    };

    enum class point_clipping_behavior
        : std::uint32_t
    {
        all_clip_planes       = 0,
        user_clip_planes_only = 1
    };

    enum class sampler_reduction_mode
        : std::uint32_t
    {
        weighted_average = 0,
        min              = 1,
        max              = 2
    };

    enum class tessellation_domain_origin
        : std::uint32_t
    {
        upper_left = 0,
        lower_left = 1
    };

    enum class sampler_ycbcr_model_conversion
        : std::uint32_t
    {
        rgb_identity   = 0,
        ycbcr_identity = 1,
        ycbcr_709      = 2,
        ycbcr_601      = 3,
        ycbcr_2020     = 4
    };

    enum class sampler_ycbcr_range
        : std::uint32_t
    {
        itu_full   = 0,
        itu_narrow = 1
    };

    enum class chroma_location
        : std::uint32_t
    {
        cosited_even = 0,
        midpoint     = 1
    };

    enum class blend_overlap_ext
        : std::uint32_t
    {
        uncorrelated_ext = 0,
        disjoint_ext     = 1,
        conjoint_ext     = 2
    };

    enum class coverage_modulation_mode_nv
        : std::uint32_t
    {
        one_nv   = 0,
        rgb_nv   = 1,
        alpha_nv = 2,
        rgba_nv  = 3
    };

    enum class coverage_reduction_mode_nv
        : std::uint32_t
    {
        merge_nv    = 0,
        truncate_nv = 1
    };

    enum class validation_cache_header_version_ext
        : std::uint32_t
    {
        one_ext = 1
    };

    enum class shader_info_type_amd
        : std::uint32_t
    {
        statistics_amd  = 0,
        binary_amd      = 1,
        disassembly_amd = 2
    };

    enum class queue_global_priority
        : std::uint32_t
    {
        low      = 128,
        medium   = 256,
        high     = 512,
        realtime = 1024
    };

    enum class debug_utils_message_severity_flag_bits_ext
        : std::uint32_t
    {
        verbose_bit_ext = (1U << 0),
        info_bit_ext    = (1U << 4),
        warning_bit_ext = (1U << 8),
        error_bit_ext   = (1U << 12)
    };

    enum class debug_utils_message_type_flag_bits_ext
        : std::uint32_t
    {
        general_bit_ext     = (1U << 0),
        validation_bit_ext  = (1U << 1),
        performance_bit_ext = (1U << 2)
    };

    enum class conservative_rasterization_mode_ext
        : std::uint32_t
    {
        disabled_ext      = 0,
        overestimate_ext  = 1,
        underestimate_ext = 2
    };

    enum class descriptor_binding_flag_bits
        : std::uint32_t
    {
        update_after_bind_bit           = (1U << 0),
        update_unused_while_pending_bit = (1U << 1),
        partially_bound_bit             = (1U << 2),
        variable_descriptor_count_bit   = (1U << 3)
    };

    enum class vendor_id
        : std::uint32_t
    {
        khronos  = 0x10000,
        viv      = 0x10001,
        vsi      = 0x10002,
        kazan    = 0x10003,
        codeplay = 0x10004,
        mesa     = 0x10005,
        pocl     = 0x10006,
        mobileye = 0x10007
    };

    enum class driver_id
        : std::uint32_t
    {
        amd_proprietary               = 1,
        amd_open_source               = 2,
        mesa_radv                     = 3,
        nvidia_proprietary            = 4,
        intel_proprietary_windows     = 5,
        intel_open_source_mesa        = 6,
        imagination_proprietary       = 7,
        qualcomm_proprietary          = 8,
        arm_proprietary               = 9,
        google_swiftshader            = 10,
        ggp_proprietary               = 11,
        broadcom_proprietary          = 12,
        mesa_llvmpipe                 = 13,
        moltenvk                      = 14,
        coreavi_proprietary           = 15,
        juice_proprietary             = 16,
        verisilicon_proprietary       = 17,
        mesa_turnip                   = 18,
        mesa_v3dv                     = 19,
        mesa_panvk                    = 20,
        samsung_proprietary           = 21,
        mesa_venus                    = 22,
        mesa_dozen                    = 23,
        mesa_nvk                      = 24,
        imagination_open_source_mesa  = 25,
        mesa_honeykrisp               = 26,
        vulkan_sc_emulation_on_vulkan = 27,
        mesa_kosmickrisp              = 28
    };

    enum class conditional_rendering_flag_bits_ext
        : std::uint32_t
    {
        inverted_bit_ext = (1U << 0)
    };

    enum class resolve_mode_flag_bits
        : std::uint32_t
    {
        none            = 0,
        sample_zero_bit = (1U << 0),
        average_bit     = (1U << 1),
        min_bit         = (1U << 2),
        max_bit         = (1U << 3)
    };

    enum class shading_rate_palette_entry_nv
        : std::uint32_t
    {
        o_invocations_nv                = 0,
        i16_invocations_per_pixel_nv    = 1,
        i8_invocations_per_pixel_nv     = 2,
        i4_invocations_per_pixel_nv     = 3,
        i2_invocations_per_pixel_nv     = 4,
        i1_invocation_per_pixel_nv      = 5,
        i1_invocation_per_2x1_pixels_nv = 6,
        i1_invocation_per_1x2_pixels_nv = 7,
        i1_invocation_per_2x2_pixels_nv = 8,
        i1_invocation_per_4x2_pixels_nv = 9,
        i1_invocation_per_2x4_pixels_nv = 10,
        i1_invocation_per_4x4_pixels_nv = 11
    };

    enum class coarse_sample_order_type_nv
        : std::uint32_t
    {
        default_nv      = 0,
        custom_nv       = 1,
        pixel_major_nv  = 2,
        sample_major_nv = 3
    };

    enum class geometry_instance_flag_bits_khr
        : std::uint32_t
    {
        triangle_facing_cull_disable_bit_khr    = (1U << 0),
        triangle_flip_facing_bit_khr            = (1U << 1),
        orce_opaque_bit_khr                     = (1U << 2),
        orce_no_opaque_bit_khr                  = (1U << 3),
        triangle_front_counterclockwise_bit_khr = (1U << 1)
    };

    enum class geometry_flag_bits_khr
        : std::uint32_t
    {
        opaque_bit_khr                          = (1U << 0),
        no_duplicate_any_hit_invocation_bit_khr = (1U << 1)
    };

    enum class build_acceleration_structure_flag_bits_khr
        : std::uint32_t
    {
        allow_update_bit_khr      = (1U << 0),
        allow_compaction_bit_khr  = (1U << 1),
        prefer_fast_trace_bit_khr = (1U << 2),
        prefer_fast_build_bit_khr = (1U << 3),
        low_memory_bit_khr        = (1U << 4)
    };

    enum class acceleration_structure_create_flag_bits_khr
        : std::uint32_t
    {
        device_address_capture_replay_bit_khr = (1U << 0)
    };

    enum class copy_acceleration_structure_mode_khr
        : std::uint32_t
    {
        clone_khr   = 0,
        compact_khr = 1
    };

    enum class build_acceleration_structure_mode_khr
        : std::uint32_t
    {
        build_khr  = 0,
        update_khr = 1
    };

    enum class acceleration_structure_type_khr
        : std::uint32_t
    {
        top_level_khr    = 0,
        bottom_level_khr = 1,
        generic_khr      = 2
    };

    enum class geometry_type_khr
        : std::uint32_t
    {
        triangles_khr = 0,
        aabbs_khr     = 1,
        instances_khr = 2
    };

    enum class acceleration_structure_memory_requirements_type_nv
        : std::uint32_t
    {
        object_nv         = 0,
        build_scratch_nv  = 1,
        update_scratch_nv = 2
    };

    enum class acceleration_structure_build_type_khr
        : std::uint32_t
    {
        host_khr           = 0,
        device_khr         = 1,
        host_or_device_khr = 2
    };

    enum class ray_tracing_shader_group_type_khr
        : std::uint32_t
    {
        general_khr              = 0,
        triangles_hit_group_khr  = 1,
        procedural_hit_group_khr = 2
    };

    enum class acceleration_structure_compatibility_khr
        : std::uint32_t
    {
        compatible_khr   = 0,
        incompatible_khr = 1
    };

    enum class shader_group_shader_khr
        : std::uint32_t
    {
        general_khr      = 0,
        closest_hit_khr  = 1,
        any_hit_khr      = 2,
        intersection_khr = 3
    };

    enum class memory_overallocation_behavior_amd
        : std::uint32_t
    {
        default_amd    = 0,
        llowed_amd     = 1,
        disallowed_amd = 2
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
        enable_shader_debug_info_bit_nv      = (1U << 0),
        enable_resource_tracking_bit_nv      = (1U << 1),
        enable_automatic_checkpoints_bit_nv  = (1U << 2),
        enable_shader_error_reporting_bit_nv = (1U << 3)
    };

    enum class pipeline_creation_feedback_flag_bits
        : std::uint32_t
    {
        valid_bit                          = (1U << 0),
        application_pipeline_cache_hit_bit = (1U << 1),
        base_pipeline_acceleration_bit     = (1U << 2)
    };

    enum class full_screen_exclusive_ext
        : std::uint32_t
    {
        default_ext                = 0,
        allowed_ext                = 1,
        disallowed_ext             = 2,
        application_controlled_ext = 3
    };

    enum class performance_counter_scope_khr
        : std::uint32_t
    {
                       command_buffer_khr             = 0,
                       render_pass_khr                = 1,
                       command_khr                    = 2,
        [[deprecated]] query_scope_command_buffer_khr = 0,
        [[deprecated]] query_scope_render_pass_khr    = 1,
        [[deprecated]] query_scope_command_khr        = 2
    };

    enum class memory_decompression_method_flag_bits_ext
        : std::uint64_t
    {
        gdeflate_1_0_bit_ext = (1ULL << 0),
        gdeflate_1_0_bit_nv  = (1ULL << 0)
    };

    enum class performance_counter_unit_khr
        : std::uint32_t
    {
        generic_khr          = 0,
        percentage_khr       = 1,
        nanoseconds_khr      = 2,
        bytes_khr            = 3,
        bytes_per_second_khr = 4,
        elvin_khr            = 5,
        watts_khr            = 6,
        volts_khr            = 7,
        amps_khr             = 8,
        hertz_khr            = 9,
        cycles_khr           = 10
    };

    enum class performance_counter_storage_khr
        : std::uint32_t
    {
        int32_khr   = 0,
        int64_khr   = 1,
        uint32_khr  = 2,
        uint64_khr  = 3,
        float32_khr = 4,
        float64_khr = 5
    };

    enum class performance_counter_description_flag_bits_khr
        : std::uint32_t
    {
                       performance_impacting_bit_khr = (1U << 0),
        [[deprecated]] performance_impacting_khr     = (1U << 0),
                       concurrently_impacted_bit_khr = (1U << 1),
        [[deprecated]] concurrently_impacted_khr     = (1U << 1)
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
        command_queue_metrics_discovery_activated_intel = 0
    };

    enum class query_pool_sampling_mode_intel
        : std::uint32_t
    {
        manual_intel = 0
    };

    enum class performance_override_type_intel
        : std::uint32_t
    {
        null_hardware_intel    = 0,
        flush_gpu_caches_intel = 1
    };

    enum class performance_parameter_type_intel
        : std::uint32_t
    {
        hw_counters_supported_intel    = 0,
        stream_marker_valid_bits_intel = 1
    };

    enum class performance_value_type_intel
        : std::uint32_t
    {
        uint32_intel = 0,
        uint64_intel = 1,
        float_intel  = 2,
        bool_intel   = 3,
        string_intel = 4
    };

    enum class shader_float_controls_independence
        : std::uint32_t
    {
        i32_bit_only = 0,
        all          = 1,
        none         = 2
    };

    enum class pipeline_executable_statistic_format_khr
        : std::uint32_t
    {
        bool32_khr  = 0,
        int64_khr   = 1,
        uint64_khr  = 2,
        float64_khr = 3
    };

    enum class line_rasterization_mode
        : std::uint32_t
    {
        default            = 0,
        rectangular        = 1,
        bresenham          = 2,
        rectangular_smooth = 3
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
        unassigned  = 0,
        critical    = 1,
        recoverable = 2,
        warning     = 3
    };

    enum class fault_type
        : std::uint32_t
    {
        invalid             = 0,
        unassigned          = 1,
        implementation      = 2,
        system              = 3,
        physical_device     = 4,
        command_buffer_full = 5,
        invalid_api_usage   = 6
    };

    enum class fault_query_behavior
        : std::uint32_t
    {
        get_and_clear_all_faults = 0
    };

    enum class tool_purpose_flag_bits
        : std::uint32_t
    {
        validation_bit          = (1U << 0),
        profiling_bit           = (1U << 1),
        tracing_bit             = (1U << 2),
        additional_features_bit = (1U << 3),
        modifying_features_bit  = (1U << 4)
    };

    enum class pipeline_match_control
        : std::uint32_t
    {
        application_uuid_exact_match = 0
    };

    enum class fragment_shading_rate_combiner_op_khr
        : std::uint32_t
    {
        eep_khr     = 0,
        replace_khr = 1,
        min_khr     = 2,
        max_khr     = 3,
        mul_khr     = 4
    };

    enum class fragment_shading_rate_nv
        : std::uint32_t
    {
        i1_invocation_per_pixel_nv      = 0,
        i1_invocation_per_1x2_pixels_nv = 1,
        i1_invocation_per_2x1_pixels_nv = 4,
        i1_invocation_per_2x2_pixels_nv = 5,
        i1_invocation_per_2x4_pixels_nv = 6,
        i1_invocation_per_4x2_pixels_nv = 9,
        i1_invocation_per_4x4_pixels_nv = 10,
        i2_invocations_per_pixel_nv     = 11,
        i4_invocations_per_pixel_nv     = 12,
        i8_invocations_per_pixel_nv     = 13,
        i16_invocations_per_pixel_nv    = 14,
        o_invocations_nv                = 15
    };

    enum class fragment_shading_rate_type_nv
        : std::uint32_t
    {
        fragment_size_nv = 0,
        enums_nv         = 1
    };

    enum class subpass_merge_status_ext
        : std::uint32_t
    {
        merged_ext                                   = 0,
        disallowed_ext                               = 1,
        not_merged_side_effects_ext                  = 2,
        not_merged_samples_mismatch_ext              = 3,
        not_merged_views_mismatch_ext                = 4,
        not_merged_aliasing_ext                      = 5,
        not_merged_dependencies_ext                  = 6,
        not_merged_incompatible_input_attachment_ext = 7,
        not_merged_too_many_attachments_ext          = 8,
        not_merged_insufficient_storage_ext          = 9,
        not_merged_depth_stencil_count_ext           = 10,
        not_merged_resolve_attachment_reuse_ext      = 11,
        not_merged_single_subpass_ext                = 12,
        not_merged_unspecified_ext                   = 13
    };

    enum class access_flag_bits2
        : std::uint64_t
    {
        i2_none                               = 0,
        i2_indirect_command_read_bit          = (1ULL << 0),
        i2_index_read_bit                     = (1ULL << 1),
        i2_vertex_attribute_read_bit          = (1ULL << 2),
        i2_uniform_read_bit                   = (1ULL << 3),
        i2_input_attachment_read_bit          = (1ULL << 4),
        i2_shader_read_bit                    = (1ULL << 5),
        i2_shader_write_bit                   = (1ULL << 6),
        i2_color_attachment_read_bit          = (1ULL << 7),
        i2_color_attachment_write_bit         = (1ULL << 8),
        i2_depth_stencil_attachment_read_bit  = (1ULL << 9),
        i2_depth_stencil_attachment_write_bit = (1ULL << 10),
        i2_transfer_read_bit                  = (1ULL << 11),
        i2_transfer_write_bit                 = (1ULL << 12),
        i2_host_read_bit                      = (1ULL << 13),
        i2_host_write_bit                     = (1ULL << 14),
        i2_memory_read_bit                    = (1ULL << 15),
        i2_memory_write_bit                   = (1ULL << 16),
        i2_shader_sampled_read_bit            = (1ULL << 32),
        i2_shader_storage_read_bit            = (1ULL << 33),
        i2_shader_storage_write_bit           = (1ULL << 34)
    };

    enum class pipeline_stage_flag_bits2
        : std::uint64_t
    {
        i2_none                               = 0,
        i2_top_of_pipe_bit                    = (1ULL << 0),
        i2_draw_indirect_bit                  = (1ULL << 1),
        i2_vertex_input_bit                   = (1ULL << 2),
        i2_vertex_shader_bit                  = (1ULL << 3),
        i2_tessellation_control_shader_bit    = (1ULL << 4),
        i2_tessellation_evaluation_shader_bit = (1ULL << 5),
        i2_geometry_shader_bit                = (1ULL << 6),
        i2_fragment_shader_bit                = (1ULL << 7),
        i2_early_fragment_tests_bit           = (1ULL << 8),
        i2_late_fragment_tests_bit            = (1ULL << 9),
        i2_color_attachment_output_bit        = (1ULL << 10),
        i2_compute_shader_bit                 = (1ULL << 11),
        i2_all_transfer_bit                   = (1ULL << 12),
        i2_transfer_bit                       = (1ULL << 12),
        i2_bottom_of_pipe_bit                 = (1ULL << 13),
        i2_host_bit                           = (1ULL << 14),
        i2_all_graphics_bit                   = (1ULL << 15),
        i2_all_commands_bit                   = (1ULL << 16),
        i2_copy_bit                           = (1ULL << 32),
        i2_resolve_bit                        = (1ULL << 33),
        i2_blit_bit                           = (1ULL << 34),
        i2_clear_bit                          = (1ULL << 35),
        i2_index_input_bit                    = (1ULL << 36),
        i2_vertex_attribute_input_bit         = (1ULL << 37),
        i2_pre_rasterization_shaders_bit      = (1ULL << 38)
    };

    enum class submit_flag_bits
        : std::uint32_t
    {
        protected_bit = (1U << 0)
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
        signaler_nv        = 0,
        waiter_nv          = 1,
        signaler_waiter_nv = 2
    };

    enum class sci_sync_primitive_type_nv
        : std::uint32_t
    {
        fence_nv     = 0,
        semaphore_nv = 1
    };

    enum class provoking_vertex_mode_ext
        : std::uint32_t
    {
        first_vertex_ext = 0,
        last_vertex_ext  = 1
    };

    enum class pipeline_cache_validation_version
        : std::uint32_t
    {
        safety_critical_one = 1
    };

    enum class acceleration_structure_motion_instance_type_nv
        : std::uint32_t
    {
        static_nv        = 0,
        matrix_motion_nv = 1,
        srt_motion_nv    = 2
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
        vertex_input_interface_bit_ext    = (1U << 0),
        pre_rasterization_shaders_bit_ext = (1U << 1),
        ragment_shader_bit_ext            = (1U << 2),
        ragment_output_interface_bit_ext  = (1U << 3)
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
        internal_object_bit_ext = (1U << 0)
    };

    enum class device_address_binding_type_ext
        : std::uint32_t
    {
        bind_ext   = 0,
        unbind_ext = 1
    };

    enum class frame_boundary_flag_bits_ext
        : std::uint32_t
    {
        rame_end_bit_ext = (1U << 0)
    };

    enum class present_scaling_flag_bits_khr
        : std::uint32_t
    {
        one_to_one_bit_khr           = (1U << 0),
        one_to_one_bit_ext           = (1U << 0),
        aspect_ratio_stretch_bit_khr = (1U << 1),
        aspect_ratio_stretch_bit_ext = (1U << 1),
        stretch_bit_khr              = (1U << 2),
        stretch_bit_ext              = (1U << 2)
    };

    enum class present_gravity_flag_bits_khr
        : std::uint32_t
    {
        min_bit_khr      = (1U << 0),
        min_bit_ext      = (1U << 0),
        max_bit_khr      = (1U << 1),
        max_bit_ext      = (1U << 1),
        centered_bit_khr = (1U << 2),
        centered_bit_ext = (1U << 2)
    };

    enum class physical_device_scheduling_controls_flag_bits_arm
        : std::uint64_t
    {
        shader_core_count_arm = (1ULL << 0)
    };

    enum class present_stage_flag_bits_ext
        : std::uint32_t
    {
        queue_operations_end_bit_ext      = (1U << 0),
        request_dequeued_bit_ext          = (1U << 1),
        image_first_pixel_out_bit_ext     = (1U << 2),
        image_first_pixel_visible_bit_ext = (1U << 3)
    };

    enum class past_presentation_timing_flag_bits_ext
        : std::uint32_t
    {
        allow_partial_results_bit_ext      = (1U << 0),
        allow_out_of_order_results_bit_ext = (1U << 1)
    };

    enum class present_timing_info_flag_bits_ext
        : std::uint32_t
    {
        present_at_relative_time_bit_ext         = (1U << 0),
        present_at_nearest_refresh_cycle_bit_ext = (1U << 1)
    };

    enum class video_codec_operation_flag_bits_khr
        : std::uint32_t
    {
        none_khr = 0
    };

    enum class video_chroma_subsampling_flag_bits_khr
        : std::uint32_t
    {
        invalid_khr        = 0,
        monochrome_bit_khr = (1U << 0),
        i420_bit_khr       = (1U << 1),
        i422_bit_khr       = (1U << 2),
        i444_bit_khr       = (1U << 3)
    };

    enum class video_component_bit_depth_flag_bits_khr
        : std::uint32_t
    {
        invalid_khr = 0,
        i8_bit_khr  = (1U << 0),
        i10_bit_khr = (1U << 2),
        i12_bit_khr = (1U << 4)
    };

    enum class video_capability_flag_bits_khr
        : std::uint32_t
    {
        protected_content_bit_khr         = (1U << 0),
        separate_reference_images_bit_khr = (1U << 1)
    };

    enum class video_session_create_flag_bits_khr
        : std::uint32_t
    {
        protected_content_bit_khr = (1U << 0)
    };

    enum class video_session_parameters_create_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class video_decode_h264_picture_layout_flag_bits_khr
        : std::uint32_t
    {
        progressive_khr                      = 0,
        interlaced_interleaved_lines_bit_khr = (1U << 0),
        interlaced_separate_planes_bit_khr   = (1U << 1)
    };

    enum class video_coding_control_flag_bits_khr
        : std::uint32_t
    {
        reset_bit_khr = (1U << 0)
    };

    enum class query_result_status_khr
        : std::int32_t
    {
        error_khr     = -1,
        not_ready_khr = 0,
        complete_khr  = 1
    };

    enum class video_decode_usage_flag_bits_khr
        : std::uint32_t
    {
        default_khr         = 0,
        transcoding_bit_khr = (1U << 0),
        offline_bit_khr     = (1U << 1),
        streaming_bit_khr   = (1U << 2)
    };

    enum class video_decode_capability_flag_bits_khr
        : std::uint32_t
    {
        dpb_and_output_coincide_bit_khr = (1U << 0),
        dpb_and_output_distinct_bit_khr = (1U << 1)
    };

    enum class video_encode_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class video_encode_usage_flag_bits_khr
        : std::uint32_t
    {
        default_khr          = 0,
        transcoding_bit_khr  = (1U << 0),
        streaming_bit_khr    = (1U << 1),
        recording_bit_khr    = (1U << 2),
        conferencing_bit_khr = (1U << 3)
    };

    enum class video_encode_content_flag_bits_khr
        : std::uint32_t
    {
        default_khr      = 0,
        camera_bit_khr   = (1U << 0),
        desktop_bit_khr  = (1U << 1),
        rendered_bit_khr = (1U << 2)
    };

    enum class video_encode_tuning_mode_khr
        : std::uint32_t
    {
        default_khr           = 0,
        high_quality_khr      = 1,
        low_latency_khr       = 2,
        ultra_low_latency_khr = 3,
        lossless_khr          = 4
    };

    enum class video_encode_capability_flag_bits_khr
        : std::uint32_t
    {
        preceding_externally_encoded_bytes_bit_khr            = (1U << 0),
        insufficient_bitstream_buffer_range_detection_bit_khr = (1U << 1)
    };

    enum class video_encode_feedback_flag_bits_khr
        : std::uint32_t
    {
        bitstream_buffer_offset_bit_khr = (1U << 0),
        bitstream_bytes_written_bit_khr = (1U << 1),
        bitstream_has_overrides_bit_khr = (1U << 2)
    };

    enum class video_encode_rate_control_mode_flag_bits_khr
        : std::uint32_t
    {
        default_khr      = 0,
        disabled_bit_khr = (1U << 0),
        cbr_bit_khr      = (1U << 1),
        vbr_bit_khr      = (1U << 2)
    };

    enum class video_encode_intra_refresh_mode_flag_bits_khr
        : std::uint32_t
    {
        none_khr                      = 0,
        per_picture_partition_bit_khr = (1U << 0),
        block_based_bit_khr           = (1U << 1),
        block_row_based_bit_khr       = (1U << 2),
        block_column_based_bit_khr    = (1U << 3)
    };

    enum class video_encode_h264_capability_flag_bits_khr
        : std::uint32_t
    {
        hrd_compliance_bit_khr                    = (1U << 0),
        prediction_weight_table_generated_bit_khr = (1U << 1),
        row_unaligned_slice_bit_khr               = (1U << 2),
        different_slice_type_bit_khr              = (1U << 3),
        b_frame_in_l0_list_bit_khr                = (1U << 4),
        b_frame_in_l1_list_bit_khr                = (1U << 5),
        per_picture_type_min_max_qp_bit_khr       = (1U << 6),
        per_slice_constant_qp_bit_khr             = (1U << 7),
        generate_prefix_nalu_bit_khr              = (1U << 8)
    };

    enum class video_encode_h264_std_flag_bits_khr
        : std::uint32_t
    {
        separate_color_plane_flag_set_bit_khr            = (1U << 0),
        qpprime_y_zero_transform_bypass_flag_set_bit_khr = (1U << 1),
        scaling_matrix_present_flag_set_bit_khr          = (1U << 2),
        chroma_qp_index_offset_bit_khr                   = (1U << 3),
        second_chroma_qp_index_offset_bit_khr            = (1U << 4),
        pic_init_qp_minus26_bit_khr                      = (1U << 5),
        weighted_pred_flag_set_bit_khr                   = (1U << 6),
        weighted_bipred_idc_explicit_bit_khr             = (1U << 7),
        weighted_bipred_idc_implicit_bit_khr             = (1U << 8),
        transform_8x8_mode_flag_set_bit_khr              = (1U << 9),
        direct_spatial_mv_pred_flag_unset_bit_khr        = (1U << 10),
        entropy_coding_mode_flag_unset_bit_khr           = (1U << 11),
        entropy_coding_mode_flag_set_bit_khr             = (1U << 12),
        direct_8x8_inference_flag_unset_bit_khr          = (1U << 13),
        constrained_intra_pred_flag_set_bit_khr          = (1U << 14),
        deblocking_filter_disabled_bit_khr               = (1U << 15),
        deblocking_filter_enabled_bit_khr                = (1U << 16),
        deblocking_filter_partial_bit_khr                = (1U << 17),
        slice_qp_delta_bit_khr                           = (1U << 19),
        different_slice_qp_delta_bit_khr                 = (1U << 20)
    };

    enum class video_encode_h264_rate_control_flag_bits_khr
        : std::uint32_t
    {
        attempt_hrd_compliance_bit_khr        = (1U << 0),
        regular_gop_bit_khr                   = (1U << 1),
        reference_pattern_flat_bit_khr        = (1U << 2),
        reference_pattern_dyadic_bit_khr      = (1U << 3),
        temporal_layer_pattern_dyadic_bit_khr = (1U << 4)
    };

    enum class host_image_copy_flag_bits
        : std::uint32_t
    {
                       memcpy_bit = (1U << 0),
        [[deprecated]] memcpy     = (1U << 0)
    };

    enum class partitioned_acceleration_structure_op_type_nv
        : std::uint32_t
    {
        write_instance_nv              = 0,
        update_instance_nv             = 1,
        write_partition_translation_nv = 2
    };

    enum class partitioned_acceleration_structure_instance_flag_bits_nv
        : std::uint32_t
    {
        triangle_facing_cull_disable_bit_nv = (1U << 0),
        triangle_flip_facing_bit_nv         = (1U << 1),
        force_opaque_bit_nv                 = (1U << 2),
        force_no_opaque_bit_nv              = (1U << 3),
        enable_explicit_bounding_box_nv     = (1U << 4)
    };

    enum class image_format_constraints_flag_bits_fuchsia
        : std::uint32_t
    {
    };

    enum class image_constraints_info_flag_bits_fuchsia
        : std::uint32_t
    {
        cpu_read_rarely_fuchsia    = (1U << 0),
        cpu_read_often_fuchsia     = (1U << 1),
        cpu_write_rarely_fuchsia   = (1U << 2),
        cpu_write_often_fuchsia    = (1U << 3),
        protected_optional_fuchsia = (1U << 4)
    };

    enum class format_feature_flag_bits2
        : std::uint64_t
    {
        i2_sampled_image_bit                                                           = (1ULL << 0),
        i2_storage_image_bit                                                           = (1ULL << 1),
        i2_storage_image_atomic_bit                                                    = (1ULL << 2),
        i2_uniform_texel_buffer_bit                                                    = (1ULL << 3),
        i2_storage_texel_buffer_bit                                                    = (1ULL << 4),
        i2_storage_texel_buffer_atomic_bit                                             = (1ULL << 5),
        i2_vertex_buffer_bit                                                           = (1ULL << 6),
        i2_color_attachment_bit                                                        = (1ULL << 7),
        i2_color_attachment_blend_bit                                                  = (1ULL << 8),
        i2_depth_stencil_attachment_bit                                                = (1ULL << 9),
        i2_blit_src_bit                                                                = (1ULL << 10),
        i2_blit_dst_bit                                                                = (1ULL << 11),
        i2_sampled_image_filter_linear_bit                                             = (1ULL << 12),
        i2_transfer_src_bit                                                            = (1ULL << 14),
        i2_transfer_dst_bit                                                            = (1ULL << 15),
        i2_sampled_image_filter_minmax_bit                                             = (1ULL << 16),
        i2_midpoint_chroma_samples_bit                                                 = (1ULL << 17),
        i2_sampled_image_ycbcr_conversion_linear_filter_bit                            = (1ULL << 18),
        i2_sampled_image_ycbcr_conversion_separate_reconstruction_filter_bit           = (1ULL << 19),
        i2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_bit           = (1ULL << 20),
        i2_sampled_image_ycbcr_conversion_chroma_reconstruction_explicit_forceable_bit = (1ULL << 21),
        i2_disjoint_bit                                                                = (1ULL << 22),
        i2_cosited_chroma_samples_bit                                                  = (1ULL << 23),
        i2_storage_read_without_format_bit                                             = (1ULL << 31),
        i2_storage_write_without_format_bit                                            = (1ULL << 32),
        i2_sampled_image_depth_comparison_bit                                          = (1ULL << 33)
    };

    enum class rendering_flag_bits
        : std::uint32_t
    {
        contents_secondary_command_buffers_bit = (1U << 0),
        suspending_bit                         = (1U << 1),
        resuming_bit                           = (1U << 2)
    };

    enum class video_encode_h265_capability_flag_bits_khr
        : std::uint32_t
    {
        hrd_compliance_bit_khr                    = (1U << 0),
        prediction_weight_table_generated_bit_khr = (1U << 1),
        row_unaligned_slice_segment_bit_khr       = (1U << 2),
        different_slice_segment_type_bit_khr      = (1U << 3),
        b_frame_in_l0_list_bit_khr                = (1U << 4),
        b_frame_in_l1_list_bit_khr                = (1U << 5),
        per_picture_type_min_max_qp_bit_khr       = (1U << 6),
        per_slice_segment_constant_qp_bit_khr     = (1U << 7),
        multiple_tiles_per_slice_segment_bit_khr  = (1U << 8),
        multiple_slice_segments_per_tile_bit_khr  = (1U << 9)
    };

    enum class video_encode_h265_std_flag_bits_khr
        : std::uint32_t
    {
        separate_color_plane_flag_set_bit_khr                = (1U << 0),
        sample_adaptive_offset_enabled_flag_set_bit_khr      = (1U << 1),
        scaling_list_data_present_flag_set_bit_khr           = (1U << 2),
        pcm_enabled_flag_set_bit_khr                         = (1U << 3),
        sps_temporal_mvp_enabled_flag_set_bit_khr            = (1U << 4),
        init_qp_minus26_bit_khr                              = (1U << 5),
        weighted_pred_flag_set_bit_khr                       = (1U << 6),
        weighted_bipred_flag_set_bit_khr                     = (1U << 7),
        log2_parallel_merge_level_minus2_bit_khr             = (1U << 8),
        sign_data_hiding_enabled_flag_set_bit_khr            = (1U << 9),
        transform_skip_enabled_flag_set_bit_khr              = (1U << 10),
        transform_skip_enabled_flag_unset_bit_khr            = (1U << 11),
        pps_slice_chroma_qp_offsets_present_flag_set_bit_khr = (1U << 12),
        transquant_bypass_enabled_flag_set_bit_khr           = (1U << 13),
        constrained_intra_pred_flag_set_bit_khr              = (1U << 14),
        entropy_coding_sync_enabled_flag_set_bit_khr         = (1U << 15),
        deblocking_filter_override_enabled_flag_set_bit_khr  = (1U << 16),
        dependent_slice_segments_enabled_flag_set_bit_khr    = (1U << 17),
        dependent_slice_segment_flag_set_bit_khr             = (1U << 18),
        slice_qp_delta_bit_khr                               = (1U << 19),
        different_slice_qp_delta_bit_khr                     = (1U << 20)
    };

    enum class video_encode_h265_rate_control_flag_bits_khr
        : std::uint32_t
    {
        attempt_hrd_compliance_bit_khr            = (1U << 0),
        regular_gop_bit_khr                       = (1U << 1),
        reference_pattern_flat_bit_khr            = (1U << 2),
        reference_pattern_dyadic_bit_khr          = (1U << 3),
        temporal_sub_layer_pattern_dyadic_bit_khr = (1U << 4)
    };

    enum class video_encode_h265_ctb_size_flag_bits_khr
        : std::uint32_t
    {
        i16_bit_khr = (1U << 0),
        i32_bit_khr = (1U << 1),
        i64_bit_khr = (1U << 2)
    };

    enum class video_encode_h265_transform_block_size_flag_bits_khr
        : std::uint32_t
    {
        i4_bit_khr  = (1U << 0),
        i8_bit_khr  = (1U << 1),
        i16_bit_khr = (1U << 2),
        i32_bit_khr = (1U << 3)
    };

    enum class video_encode_av1_capability_flag_bits_khr
        : std::uint32_t
    {
        per_rate_control_group_min_max_q_index_bit_khr = (1U << 0),
        generate_obu_extension_header_bit_khr          = (1U << 1),
        primary_reference_cdf_only_bit_khr             = (1U << 2),
        rame_size_override_bit_khr                     = (1U << 3),
        motion_vector_scaling_bit_khr                  = (1U << 4)
    };

    enum class video_encode_av1_std_flag_bits_khr
        : std::uint32_t
    {
        uniform_tile_spacing_flag_set_bit_khr = (1U << 0),
        skip_mode_present_unset_bit_khr       = (1U << 1),
        primary_ref_frame_bit_khr             = (1U << 2),
        delta_q_bit_khr                       = (1U << 3)
    };

    enum class video_encode_av1_rate_control_flag_bits_khr
        : std::uint32_t
    {
        regular_gop_bit_khr                   = (1U << 0),
        temporal_layer_pattern_dyadic_bit_khr = (1U << 1),
        reference_pattern_flat_bit_khr        = (1U << 2),
        reference_pattern_dyadic_bit_khr      = (1U << 3)
    };

    enum class video_encode_av1_superblock_size_flag_bits_khr
        : std::uint32_t
    {
        i64_bit_khr  = (1U << 0),
        i128_bit_khr = (1U << 1)
    };

    enum class video_encode_av1_prediction_mode_khr
        : std::uint32_t
    {
        intra_only_khr              = 0,
        single_reference_khr        = 1,
        unidirectional_compound_khr = 2,
        bidirectional_compound_khr  = 3
    };

    enum class video_encode_av1_rate_control_group_khr
        : std::uint32_t
    {
        intra_khr        = 0,
        predictive_khr   = 1,
        bipredictive_khr = 2
    };

    enum class export_metal_object_type_flag_bits_ext
        : std::uint32_t
    {
        metal_device_bit_ext        = (1U << 0),
        metal_command_queue_bit_ext = (1U << 1),
        metal_buffer_bit_ext        = (1U << 2),
        metal_texture_bit_ext       = (1U << 3),
        metal_iosurface_bit_ext     = (1U << 4),
        metal_shared_event_bit_ext  = (1U << 5)
    };

    enum class instance_create_flag_bits
        : std::uint32_t
    {
    };

    enum class image_compression_flag_bits_ext
        : std::uint32_t
    {
        default_ext            = 0,
        ixed_rate_default_ext  = (1U << 0),
        ixed_rate_explicit_ext = (1U << 1),
        disabled_ext           = (1U << 2)
    };

    enum class image_compression_fixed_rate_flag_bits_ext
        : std::uint32_t
    {
        none_ext       = 0,
        i1bpc_bit_ext  = (1U << 0),
        i2bpc_bit_ext  = (1U << 1),
        i3bpc_bit_ext  = (1U << 2),
        i4bpc_bit_ext  = (1U << 3),
        i5bpc_bit_ext  = (1U << 4),
        i6bpc_bit_ext  = (1U << 5),
        i7bpc_bit_ext  = (1U << 6),
        i8bpc_bit_ext  = (1U << 7),
        i9bpc_bit_ext  = (1U << 8),
        i10bpc_bit_ext = (1U << 9),
        i11bpc_bit_ext = (1U << 10),
        i12bpc_bit_ext = (1U << 11),
        i13bpc_bit_ext = (1U << 12),
        i14bpc_bit_ext = (1U << 13),
        i15bpc_bit_ext = (1U << 14),
        i16bpc_bit_ext = (1U << 15),
        i17bpc_bit_ext = (1U << 16),
        i18bpc_bit_ext = (1U << 17),
        i19bpc_bit_ext = (1U << 18),
        i20bpc_bit_ext = (1U << 19),
        i21bpc_bit_ext = (1U << 20),
        i22bpc_bit_ext = (1U << 21),
        i23bpc_bit_ext = (1U << 22),
        i24bpc_bit_ext = (1U << 23)
    };

    enum class pipeline_robustness_buffer_behavior
        : std::uint32_t
    {
        device_default         = 0,
        disabled               = 1,
        robust_buffer_access   = 2,
        robust_buffer_access_2 = 3
    };

    enum class pipeline_robustness_image_behavior
        : std::uint32_t
    {
        device_default        = 0,
        disabled              = 1,
        robust_image_access   = 2,
        robust_image_access_2 = 3
    };

    enum class optical_flow_grid_size_flag_bits_nv
        : std::uint32_t
    {
        unknown_nv  = 0,
        i1x1_bit_nv = (1U << 0),
        i2x2_bit_nv = (1U << 1),
        i4x4_bit_nv = (1U << 2),
        i8x8_bit_nv = (1U << 3)
    };

    enum class optical_flow_usage_flag_bits_nv
        : std::uint32_t
    {
        unknown_nv         = 0,
        input_bit_nv       = (1U << 0),
        output_bit_nv      = (1U << 1),
        hint_bit_nv        = (1U << 2),
        cost_bit_nv        = (1U << 3),
        global_flow_bit_nv = (1U << 4)
    };

    enum class optical_flow_performance_level_nv
        : std::uint32_t
    {
        unknown_nv = 0,
        slow_nv    = 1,
        medium_nv  = 2,
        fast_nv    = 3
    };

    enum class optical_flow_session_binding_point_nv
        : std::uint32_t
    {
        unknown_nv              = 0,
        input_nv                = 1,
        reference_nv            = 2,
        hint_nv                 = 3,
        flow_vector_nv          = 4,
        backward_flow_vector_nv = 5,
        cost_nv                 = 6,
        backward_cost_nv        = 7,
        global_flow_nv          = 8
    };

    enum class optical_flow_session_create_flag_bits_nv
        : std::uint32_t
    {
        enable_hint_bit_nv        = (1U << 0),
        enable_cost_bit_nv        = (1U << 1),
        enable_global_flow_bit_nv = (1U << 2),
        allow_regions_bit_nv      = (1U << 3),
        both_directions_bit_nv    = (1U << 4)
    };

    enum class optical_flow_execute_flag_bits_nv
        : std::uint32_t
    {
        disable_temporal_hints_bit_nv = (1U << 0)
    };

    enum class micromap_type_ext
        : std::uint32_t
    {
        opacity_micromap_ext = 0
    };

    enum class build_micromap_flag_bits_ext
        : std::uint32_t
    {
        prefer_fast_trace_bit_ext = (1U << 0),
        prefer_fast_build_bit_ext = (1U << 1),
        allow_compaction_bit_ext  = (1U << 2)
    };

    enum class micromap_create_flag_bits_ext
        : std::uint32_t
    {
        device_address_capture_replay_bit_ext = (1U << 0)
    };

    enum class copy_micromap_mode_ext
        : std::uint32_t
    {
        clone_ext       = 0,
        serialize_ext   = 1,
        deserialize_ext = 2,
        compact_ext     = 3
    };

    enum class build_micromap_mode_ext
        : std::uint32_t
    {
        build_ext = 0
    };

    enum class opacity_micromap_format_ext
        : std::uint32_t
    {
        i2_state_ext = 1,
        i4_state_ext = 2
    };

    enum class opacity_micromap_special_index_ext
        : std::int32_t
    {
        fully_transparent_ext         = -1,
        fully_opaque_ext              = -2,
        fully_unknown_transparent_ext = -3,
        fully_unknown_opaque_ext      = -4
    };

    enum class depth_bias_representation_ext
        : std::uint32_t
    {
        least_representable_value_format_ext      = 0,
        least_representable_value_force_unorm_ext = 1,
        float_ext                                 = 2
    };

    enum class device_fault_address_type_ext
        : std::uint32_t
    {
        none_ext                        = 0,
        read_invalid_ext                = 1,
        write_invalid_ext               = 2,
        ecute_invalid_ext               = 3,
        instruction_pointer_unknown_ext = 4,
        instruction_pointer_invalid_ext = 5,
        instruction_pointer_fault_ext   = 6
    };

    enum class device_fault_vendor_binary_header_version_ext
        : std::uint32_t
    {
        one_ext = 1
    };

    enum class indirect_commands_layout_usage_flag_bits_ext
        : std::uint32_t
    {
        explicit_preprocess_bit_ext = (1U << 0),
        unordered_sequences_bit_ext = (1U << 1)
    };

    enum class indirect_execution_set_info_type_ext
        : std::uint32_t
    {
        pipelines_ext      = 0,
        shader_objects_ext = 1
    };

    enum class indirect_commands_input_mode_flag_bits_ext
        : std::uint32_t
    {
        vulkan_index_buffer_ext = (1U << 0),
        dxgi_index_buffer_ext   = (1U << 1)
    };

    enum class indirect_commands_token_type_ext
        : std::uint32_t
    {
        ecution_set_ext        = 0,
        push_constant_ext      = 1,
        sequence_index_ext     = 2,
        index_buffer_ext       = 3,
        vertex_buffer_ext      = 4,
        draw_indexed_ext       = 5,
        draw_ext               = 6,
        draw_indexed_count_ext = 7,
        draw_count_ext         = 8,
        dispatch_ext           = 9
    };

    enum class displacement_micromap_format_nv
        : std::uint32_t
    {
        i64_triangles_64_bytes_nv    = 1,
        i256_triangles_128_bytes_nv  = 2,
        i1024_triangles_128_bytes_nv = 3
    };

    enum class shader_create_flag_bits_ext
        : std::uint32_t
    {
        link_stage_bit_ext = (1U << 0)
    };

    enum class shader_code_type_ext
        : std::uint32_t
    {
        binary_ext = 0,
        spirv_ext  = 1
    };

    enum class scope_khr
        : std::uint32_t
    {
        device_khr       = 1,
        workgroup_khr    = 2,
        subgroup_khr     = 3,
        queue_family_khr = 5
    };

    enum class component_type_khr
        : std::uint32_t
    {
        float16_khr = 0,
        float32_khr = 1,
        float64_khr = 2,
        sint8_khr   = 3,
        sint16_khr  = 4,
        sint32_khr  = 5,
        sint64_khr  = 6,
        uint8_khr   = 7,
        uint16_khr  = 8,
        uint32_khr  = 9,
        uint64_khr  = 10
    };

    enum class cubic_filter_weights_qcom
        : std::uint32_t
    {
        catmull_rom_qcom           = 0,
        zero_tangent_cardinal_qcom = 1,
        b_spline_qcom              = 2,
        mitchell_netravali_qcom    = 3
    };

    enum class block_match_window_compare_mode_qcom
        : std::uint32_t
    {
        min_qcom = 0,
        max_qcom = 1
    };

    enum class physical_device_layered_api_khr
        : std::uint32_t
    {
        vulkan_khr   = 0,
        d3d12_khr    = 1,
        metal_khr    = 2,
        opengl_khr   = 3,
        opengles_khr = 4
    };

    enum class layered_driver_underlying_api_msft
        : std::uint32_t
    {
        none_msft  = 0,
        d3d12_msft = 1
    };

    enum class latency_marker_nv
        : std::uint32_t
    {
        simulation_start_nv               = 0,
        simulation_end_nv                 = 1,
        rendersubmit_start_nv             = 2,
        rendersubmit_end_nv               = 3,
        present_start_nv                  = 4,
        present_end_nv                    = 5,
        input_sample_nv                   = 6,
        trigger_flash_nv                  = 7,
        out_of_band_rendersubmit_start_nv = 8,
        out_of_band_rendersubmit_end_nv   = 9,
        out_of_band_present_start_nv      = 10,
        out_of_band_present_end_nv        = 11
    };

    enum class out_of_band_queue_type_nv
        : std::uint32_t
    {
        render_nv  = 0,
        present_nv = 1
    };

    enum class memory_unmap_flag_bits
        : std::uint32_t
    {
    };

    enum class compressed_triangle_format_amdx
        : std::uint32_t
    {
        dgf1_amdx = 0
    };

    enum class wayland_surface_create_flag_bits_khr
        : std::uint32_t
    {
    };

    enum class depth_clamp_mode_ext
        : std::uint32_t
    {
        viewport_range_ext     = 0,
        user_defined_range_ext = 1
    };

    enum class access_flag_bits3_khr
        : std::uint64_t
    {
        i3_none_khr = 0
    };

    enum class tile_shading_render_pass_flag_bits_qcom
        : std::uint32_t
    {
        enable_bit_qcom             = (1U << 0),
        per_tile_execution_bit_qcom = (1U << 1)
    };

    enum class cooperative_vector_matrix_layout_nv
        : std::uint32_t
    {
        row_major_nv           = 0,
        column_major_nv        = 1,
        inferencing_optimal_nv = 2,
        training_optimal_nv    = 3
    };

    enum class address_copy_flag_bits_khr
        : std::uint32_t
    {
        device_local_bit_khr = (1U << 0),
        sparse_bit_khr       = (1U << 1),
        protected_bit_khr    = (1U << 2)
    };

    enum class tensor_create_flag_bits_arm
        : std::uint64_t
    {
        mutable_format_bit_arm = (1ULL << 0),
        protected_bit_arm      = (1ULL << 1)
    };

    enum class tensor_usage_flag_bits_arm
        : std::uint64_t
    {
        shader_bit_arm         = (1ULL << 1),
        transfer_src_bit_arm   = (1ULL << 2),
        transfer_dst_bit_arm   = (1ULL << 3),
        image_aliasing_bit_arm = (1ULL << 4)
    };

    enum class tensor_tiling_arm
        : std::uint32_t
    {
        optimal_arm = 0,
        linear_arm  = 1
    };

    enum class tensor_view_create_flag_bits_arm
        : std::uint64_t
    {
    };

    enum class default_vertex_attribute_value_khr
        : std::uint32_t
    {
        zero_zero_zero_zero_khr = 0,
        zero_zero_zero_one_khr  = 1
    };

    enum class data_graph_pipeline_session_create_flag_bits_arm
        : std::uint64_t
    {
        protected_bit_arm = (1ULL << 0)
    };

    enum class data_graph_pipeline_session_bind_point_arm
        : std::uint32_t
    {
        transient_arm = 0
    };

    enum class data_graph_pipeline_session_bind_point_type_arm
        : std::uint32_t
    {
        memory_arm = 0
    };

    enum class data_graph_pipeline_property_arm
        : std::uint32_t
    {
        creation_log_arm = 0,
        identifier_arm   = 1
    };

    enum class data_graph_pipeline_dispatch_flag_bits_arm
        : std::uint64_t
    {
    };

    enum class physical_device_data_graph_processing_engine_type_arm
        : std::uint32_t
    {
        default_arm = 0
    };

    enum class physical_device_data_graph_operation_type_arm
        : std::uint32_t
    {
        spirv_extended_instruction_set_arm = 0
    };

    enum class data_graph_model_cache_type_qcom
        : std::uint32_t
    {
        generic_binary_qcom = 0
    };

    enum class video_encode_rgb_model_conversion_flag_bits_valve
        : std::uint32_t
    {
        rgb_identity_bit_valve   = (1U << 0),
        ycbcr_identity_bit_valve = (1U << 1),
        ycbcr_709_bit_valve      = (1U << 2),
        ycbcr_601_bit_valve      = (1U << 3),
        ycbcr_2020_bit_valve     = (1U << 4)
    };

    enum class video_encode_rgb_range_compression_flag_bits_valve
        : std::uint32_t
    {
        ull_range_bit_valve    = (1U << 0),
        narrow_range_bit_valve = (1U << 1)
    };

    enum class video_encode_rgb_chroma_offset_flag_bits_valve
        : std::uint32_t
    {
        cosited_even_bit_valve = (1U << 0),
        midpoint_bit_valve     = (1U << 1)
    };

    enum class swapchain_image_usage_flag_bits_ohos
        : std::uint32_t
    {
        shared_bit_ohos = (1U << 0)
    };

    enum class descriptor_mapping_source_ext
        : std::uint32_t
    {
        heap_with_constant_offset_ext      = 0,
        heap_with_push_index_ext           = 1,
        heap_with_indirect_index_ext       = 2,
        heap_with_indirect_index_array_ext = 3,
        resource_heap_data_ext             = 4,
        push_data_ext                      = 5,
        push_address_ext                   = 6,
        indirect_address_ext               = 7
    };

    enum class spirv_resource_type_flag_bits_ext
        : std::uint32_t
    {
        all_ext                           = 0x7FFFFFFF,
        sampler_bit_ext                   = (1U << 0),
        sampled_image_bit_ext             = (1U << 1),
        read_only_image_bit_ext           = (1U << 2),
        read_write_image_bit_ext          = (1U << 3),
        combined_sampled_image_bit_ext    = (1U << 4),
        uniform_buffer_bit_ext            = (1U << 5),
        read_only_storage_buffer_bit_ext  = (1U << 6),
        read_write_storage_buffer_bit_ext = (1U << 7)
    };

}

#endif
