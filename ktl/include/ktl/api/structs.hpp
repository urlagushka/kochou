#ifndef KTL_API_STRUCTS_HPP
#define KTL_API_STRUCTS_HPP

#ifndef KTL_API_API_HPP
#include "common.hpp"
#include "enums.hpp"
#endif

namespace ktl::api
{
struct base_out_structure
{
ktl::api::structure_type stype;
ktl::api::base_out_structure * pnext = {};
};
struct base_in_structure
{
ktl::api::structure_type stype;
const ktl::api::base_in_structure * pnext = {};
};
struct offset2d
{
ktl::i32 x;
ktl::i32 y;
};
struct offset3d
{
ktl::i32 x;
ktl::i32 y;
ktl::i32 z;
};
struct extent2d
{
ktl::i32 width;
ktl::i32 height;
};
struct extent3d
{
ktl::i32 width;
ktl::i32 height;
ktl::i32 depth;
};
struct viewport
{
float x;
float y;
float width;
float height;
float min_depth;
float max_depth;
};
struct component_mapping
{
ktl::api::component_swizzle r;
ktl::api::component_swizzle g;
ktl::api::component_swizzle b;
ktl::api::component_swizzle a;
};
struct extension_properties
{
char extension_name[KTL_API_MAX_EXTENSION_NAME_SIZE];
ktl::i32 spec_version;
};
struct layer_properties
{
char layer_name[KTL_API_MAX_EXTENSION_NAME_SIZE];
ktl::i32 spec_version;
ktl::i32 implementation_version;
char description[KTL_API_MAX_DESCRIPTION_SIZE];
};
struct application_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_application_info;
const void * pnext = {};
const char * p_application_name = {};
ktl::i32 application_version;
const char * p_engine_name = {};
ktl::i32 engine_version;
ktl::i32 api_version;
};
struct allocation_callbacks
{
void * p_user_data = {};
ktl::api::pfn_allocation_function pfn_allocation;
ktl::api::pfn_reallocation_function pfn_reallocation;
ktl::api::pfn_free_function pfn_free;
ktl::api::pfn_internal_allocation_notification pfn_internal_allocation = {};
ktl::api::pfn_internal_free_notification pfn_internal_free = {};
};
struct device_queue_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_queue_create_info;
const void * pnext = {};
ktl::api::device_queue_create_flags flags = {};
ktl::i32 queue_family_index;
ktl::i32 queue_count;
const float * p_queue_priorities;
};
struct memory_allocate_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_allocate_info;
const void * pnext = {};
ktl::api::dvsize allocation_size;
ktl::i32 memory_type_index;
};
struct memory_requirements
{
ktl::api::dvsize size;
ktl::api::dvsize alignment;
ktl::i32 memory_type_bits;
};
struct memory_type
{
ktl::api::memory_property_flags property_flags = {};
ktl::i32 heap_index;
};
struct memory_heap
{
ktl::api::dvsize size;
ktl::api::memory_heap_flags flags = {};
};
struct mapped_memory_range
{
ktl::api::structure_type stype = ktl::api::structure_type::v_mapped_memory_range;
const void * pnext = {};
ktl::api::device_memory memory;
ktl::api::dvsize offset;
ktl::api::dvsize size;
};
struct format_properties
{
ktl::api::format_feature_flags linear_tiling_features = {};
ktl::api::format_feature_flags optimal_tiling_features = {};
ktl::api::format_feature_flags buffer_features = {};
};
struct descriptor_buffer_info
{
ktl::api::buffer buffer = {};
ktl::api::dvsize offset;
ktl::api::dvsize range;
};
struct descriptor_image_info
{
ktl::api::sampler sampler;
ktl::api::image_view image_view;
ktl::api::image_layout image_layout;
};
struct copy_descriptor_set
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_descriptor_set;
const void * pnext = {};
ktl::api::descriptor_set src_set;
ktl::i32 src_binding;
ktl::i32 src_array_element;
ktl::api::descriptor_set dst_set;
ktl::i32 dst_binding;
ktl::i32 dst_array_element;
ktl::i32 descriptor_count;
};
struct buffer_usage_flags2create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_usage_flags_2_create_info;
const void * pnext = {};
ktl::api::buffer_usage_flags2 usage;
};
struct buffer_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_create_info;
const void * pnext = {};
ktl::api::buffer_create_flags flags = {};
ktl::api::dvsize size;
ktl::api::buffer_usage_flags usage;
ktl::api::sharing_mode sharing_mode;
ktl::i32 queue_family_index_count = {};
const ktl::i32 * p_queue_family_indices;
};
struct buffer_view_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_view_create_info;
const void * pnext = {};
ktl::api::buffer_view_create_flags flags = {};
ktl::api::buffer buffer;
ktl::api::format format;
ktl::api::dvsize offset;
ktl::api::dvsize range;
};
struct image_subresource
{
ktl::api::image_aspect_flags aspect_mask;
ktl::i32 mip_level;
ktl::i32 array_layer;
};
struct image_subresource_layers
{
ktl::api::image_aspect_flags aspect_mask;
ktl::i32 mip_level;
ktl::i32 base_array_layer;
ktl::i32 layer_count;
};
struct image_subresource_range
{
ktl::api::image_aspect_flags aspect_mask;
ktl::i32 base_mip_level;
ktl::i32 level_count;
ktl::i32 base_array_layer;
ktl::i32 layer_count;
};
struct memory_barrier
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_barrier;
const void * pnext = {};
ktl::api::access_flags src_access_mask = {};
ktl::api::access_flags dst_access_mask = {};
};
struct buffer_memory_barrier
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_memory_barrier;
const void * pnext = {};
ktl::api::access_flags src_access_mask;
ktl::api::access_flags dst_access_mask;
ktl::i32 src_queue_family_index;
ktl::i32 dst_queue_family_index;
ktl::api::buffer buffer;
ktl::api::dvsize offset;
ktl::api::dvsize size;
};
struct subresource_layout
{
ktl::api::dvsize offset;
ktl::api::dvsize size;
ktl::api::dvsize row_pitch;
ktl::api::dvsize array_pitch;
ktl::api::dvsize depth_pitch;
};
struct buffer_copy
{
ktl::api::dvsize src_offset;
ktl::api::dvsize dst_offset;
ktl::api::dvsize size;
};
struct sparse_memory_bind
{
ktl::api::dvsize resource_offset;
ktl::api::dvsize size;
ktl::api::device_memory memory = {};
ktl::api::dvsize memory_offset;
ktl::api::sparse_memory_bind_flags flags = {};
};
struct strided_device_address_range_khr
{
ktl::api::dvaddr address = {};
ktl::api::dvsize size;
ktl::api::dvsize stride;
};
struct copy_memory_indirect_command_khr
{
ktl::api::dvaddr src_address;
ktl::api::dvaddr dst_address;
ktl::api::dvsize size;
};
struct shader_module_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_shader_module_create_info;
const void * pnext = {};
ktl::api::shader_module_create_flags flags = {};
ktl::usize code_size;
const ktl::i32 * p_code;
};
struct descriptor_set_layout_binding
{
ktl::i32 binding;
ktl::api::descriptor_type descriptor_type;
ktl::i32 descriptor_count = {};
ktl::api::shader_stage_flags stage_flags;
const ktl::api::sampler * p_immutable_samplers = {};
};
struct descriptor_pool_size
{
ktl::api::descriptor_type type;
ktl::i32 descriptor_count;
};
struct descriptor_set_allocate_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_set_allocate_info;
const void * pnext = {};
ktl::api::descriptor_pool descriptor_pool;
ktl::i32 descriptor_set_count;
const ktl::api::descriptor_set_layout * p_set_layouts;
};
struct specialization_map_entry
{
const ktl::i32 constant_id;
ktl::i32 offset;
ktl::usize size;
};
struct compute_pipeline_indirect_buffer_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_compute_pipeline_indirect_buffer_info_nv;
const void * pnext = {};
ktl::api::dvaddr device_address;
ktl::api::dvsize size;
ktl::api::dvaddr pipeline_device_address_capture_replay = {};
};
struct pipeline_create_flags2create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_create_flags_2_create_info;
const void * pnext = {};
ktl::api::pipeline_create_flags2 flags = {};
};
struct vertex_input_binding_description
{
ktl::i32 binding;
ktl::i32 stride;
ktl::api::vertex_input_rate input_rate;
};
struct vertex_input_attribute_description
{
ktl::i32 location;
ktl::i32 binding;
ktl::api::format format;
ktl::i32 offset;
};
struct pipeline_input_assembly_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_input_assembly_state_create_info;
const void * pnext = {};
ktl::api::pipeline_input_assembly_state_create_flags flags = {};
ktl::api::primitive_topology topology;
ktl::api::bool32 primitive_restart_enable;
};
struct pipeline_tessellation_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_tessellation_state_create_info;
const void * pnext = {};
ktl::api::pipeline_tessellation_state_create_flags flags = {};
ktl::i32 patch_control_points;
};
struct pipeline_rasterization_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_rasterization_state_create_info;
const void * pnext = {};
ktl::api::pipeline_rasterization_state_create_flags flags = {};
ktl::api::bool32 depth_clamp_enable;
ktl::api::bool32 rasterizer_discard_enable;
ktl::api::polygon_mode polygon_mode;
ktl::api::cull_mode_flags cull_mode = {};
ktl::api::front_face front_face;
ktl::api::bool32 depth_bias_enable;
float depth_bias_constant_factor;
float depth_bias_clamp;
float depth_bias_slope_factor;
float line_width;
};
struct pipeline_multisample_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_multisample_state_create_info;
const void * pnext = {};
ktl::api::pipeline_multisample_state_create_flags flags = {};
ktl::api::sample_count_flag_bits rasterization_samples;
ktl::api::bool32 sample_shading_enable;
float min_sample_shading;
const ktl::api::spmask * p_sample_mask = {};
ktl::api::bool32 alpha_to_coverage_enable;
ktl::api::bool32 alpha_to_one_enable;
};
struct pipeline_color_blend_attachment_state
{
ktl::api::bool32 blend_enable;
ktl::api::blend_factor src_color_blend_factor;
ktl::api::blend_factor dst_color_blend_factor;
ktl::api::blend_op color_blend_op;
ktl::api::blend_factor src_alpha_blend_factor;
ktl::api::blend_factor dst_alpha_blend_factor;
ktl::api::blend_op alpha_blend_op;
ktl::api::color_component_flags color_write_mask = {};
};
struct pipeline_dynamic_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_dynamic_state_create_info;
const void * pnext = {};
ktl::api::pipeline_dynamic_state_create_flags flags = {};
ktl::i32 dynamic_state_count = {};
const ktl::api::dynamic_state * p_dynamic_states;
};
struct stencil_op_state
{
ktl::api::stencil_op fail_op;
ktl::api::stencil_op pass_op;
ktl::api::stencil_op depth_fail_op;
ktl::api::compare_op compare_op;
ktl::i32 compare_mask;
ktl::i32 write_mask;
ktl::i32 reference;
};
struct pipeline_cache_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_cache_create_info;
const void * pnext = {};
ktl::api::pipeline_cache_create_flags flags = {};
ktl::usize initial_data_size = {};
const void * p_initial_data;
};
struct pipeline_cache_header_version_one
{
ktl::i32 header_size;
ktl::api::pipeline_cache_header_version header_version;
ktl::i32 vendor_id;
ktl::i32 device_id;
ktl::u8 pipeline_cache_uuid[KTL_API_UUID_SIZE];
};
struct pipeline_cache_stage_validation_index_entry
{
ktl::u64 code_size;
ktl::u64 code_offset;
};
struct pipeline_cache_safety_critical_index_entry
{
ktl::u8 pipeline_identifier[KTL_API_UUID_SIZE];
ktl::u64 pipeline_memory_size;
ktl::u64 json_size;
ktl::u64 json_offset;
ktl::i32 stage_index_count;
ktl::i32 stage_index_stride;
ktl::u64 stage_index_offset;
};
struct pipeline_cache_header_version_data_graph_qcom
{
ktl::i32 header_size;
ktl::api::pipeline_cache_header_version header_version;
ktl::api::data_graph_model_cache_type_qcom cache_type;
ktl::i32 cache_version;
ktl::i32 toolchain_version[KTL_API_DATA_GRAPH_MODEL_TOOLCHAIN_VERSION_LENGTH_QCOM];
};
struct push_constant_range
{
ktl::api::shader_stage_flags stage_flags;
ktl::i32 offset;
ktl::i32 size;
};
struct pipeline_binary_handles_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_binary_handles_info_khr;
const void * pnext = {};
ktl::i32 pipeline_binary_count;
ktl::api::pipeline_binary_khr * p_pipeline_binaries = {};
};
struct pipeline_binary_data_khr
{
ktl::usize data_size;
void * p_data;
};
struct pipeline_binary_key_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_binary_key_khr;
void * pnext = {};
ktl::i32 key_size;
ktl::u8 key[KTL_API_MAX_PIPELINE_BINARY_KEY_SIZE_KHR];
};
struct pipeline_binary_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_binary_info_khr;
const void * pnext = {};
ktl::i32 binary_count = {};
const ktl::api::pipeline_binary_khr * p_pipeline_binaries;
};
struct release_captured_pipeline_data_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_release_captured_pipeline_data_info_khr;
void * pnext = {};
ktl::api::pipeline pipeline;
};
struct pipeline_binary_data_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_binary_data_info_khr;
void * pnext = {};
ktl::api::pipeline_binary_khr pipeline_binary;
};
struct pipeline_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_create_info_khr;
void * pnext = {};
};
struct sampler_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_create_info;
const void * pnext = {};
ktl::api::sampler_create_flags flags = {};
ktl::api::filter mag_filter;
ktl::api::filter min_filter;
ktl::api::sampler_mipmap_mode mipmap_mode;
ktl::api::sampler_address_mode address_mode_u;
ktl::api::sampler_address_mode address_mode_v;
ktl::api::sampler_address_mode address_mode_w;
float mip_lod_bias;
ktl::api::bool32 anisotropy_enable;
float max_anisotropy;
ktl::api::bool32 compare_enable;
ktl::api::compare_op compare_op;
float min_lod;
float max_lod;
ktl::api::border_color border_color;
ktl::api::bool32 unnormalized_coordinates;
};
struct command_pool_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_pool_create_info;
const void * pnext = {};
ktl::api::command_pool_create_flags flags = {};
ktl::i32 queue_family_index;
};
struct command_buffer_allocate_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_buffer_allocate_info;
const void * pnext = {};
ktl::api::command_pool command_pool;
ktl::api::command_buffer_level level;
ktl::i32 command_buffer_count;
};
struct command_buffer_inheritance_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_buffer_inheritance_info;
const void * pnext = {};
ktl::api::render_pass render_pass = {};
ktl::i32 subpass;
ktl::api::framebuffer framebuffer = {};
ktl::api::bool32 occlusion_query_enable;
ktl::api::query_control_flags query_flags = {};
ktl::api::query_pipeline_statistic_flags pipeline_statistics = {};
};
union clear_color_value
{
float float32[4];
ktl::i32 int32[4];
ktl::i32 uint32[4];
};
struct clear_depth_stencil_value
{
float depth;
ktl::i32 stencil;
};
struct attachment_description
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
struct attachment_reference
{
ktl::i32 attachment;
ktl::api::image_layout layout;
};
struct subpass_dependency
{
ktl::i32 src_subpass;
ktl::i32 dst_subpass;
ktl::api::pipeline_stage_flags src_stage_mask = {};
ktl::api::pipeline_stage_flags dst_stage_mask = {};
ktl::api::access_flags src_access_mask = {};
ktl::api::access_flags dst_access_mask = {};
ktl::api::dependency_flags dependency_flags = {};
};
struct event_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_event_create_info;
const void * pnext = {};
ktl::api::event_create_flags flags = {};
};
struct fence_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_fence_create_info;
const void * pnext = {};
ktl::api::fence_create_flags flags = {};
};
struct physical_device_features
{
ktl::api::bool32 robust_buffer_access;
ktl::api::bool32 full_draw_index_uint32;
ktl::api::bool32 image_cube_array;
ktl::api::bool32 independent_blend;
ktl::api::bool32 geometry_shader;
ktl::api::bool32 tessellation_shader;
ktl::api::bool32 sample_rate_shading;
ktl::api::bool32 dual_src_blend;
ktl::api::bool32 logic_op;
ktl::api::bool32 multi_draw_indirect;
ktl::api::bool32 draw_indirect_first_instance;
ktl::api::bool32 depth_clamp;
ktl::api::bool32 depth_bias_clamp;
ktl::api::bool32 fill_mode_non_solid;
ktl::api::bool32 depth_bounds;
ktl::api::bool32 wide_lines;
ktl::api::bool32 large_points;
ktl::api::bool32 alpha_to_one;
ktl::api::bool32 multi_viewport;
ktl::api::bool32 sampler_anisotropy;
ktl::api::bool32 texture_compression_etc2;
ktl::api::bool32 texture_compression_astc__ldr;
ktl::api::bool32 texture_compression_bc;
ktl::api::bool32 occlusion_query_precise;
ktl::api::bool32 pipeline_statistics_query;
ktl::api::bool32 vertex_pipeline_stores_and_atomics;
ktl::api::bool32 fragment_stores_and_atomics;
ktl::api::bool32 shader_tessellation_and_geometry_point_size;
ktl::api::bool32 shader_image_gather_extended;
ktl::api::bool32 shader_storage_image_extended_formats;
ktl::api::bool32 shader_storage_image_multisample;
ktl::api::bool32 shader_storage_image_read_without_format;
ktl::api::bool32 shader_storage_image_write_without_format;
ktl::api::bool32 shader_uniform_buffer_array_dynamic_indexing;
ktl::api::bool32 shader_sampled_image_array_dynamic_indexing;
ktl::api::bool32 shader_storage_buffer_array_dynamic_indexing;
ktl::api::bool32 shader_storage_image_array_dynamic_indexing;
ktl::api::bool32 shader_clip_distance;
ktl::api::bool32 shader_cull_distance;
ktl::api::bool32 shader_float64;
ktl::api::bool32 shader_int64;
ktl::api::bool32 shader_int16;
ktl::api::bool32 shader_resource_residency;
ktl::api::bool32 shader_resource_min_lod;
ktl::api::bool32 sparse_binding;
ktl::api::bool32 sparse_residency_buffer;
ktl::api::bool32 sparse_residency_image2d;
ktl::api::bool32 sparse_residency_image3d;
ktl::api::bool32 sparse_residency2samples;
ktl::api::bool32 sparse_residency4samples;
ktl::api::bool32 sparse_residency8samples;
ktl::api::bool32 sparse_residency16samples;
ktl::api::bool32 sparse_residency_aliased;
ktl::api::bool32 variable_multisample_rate;
ktl::api::bool32 inherited_queries;
};
struct physical_device_sparse_properties
{
ktl::api::bool32 residency_standard2dblock_shape;
ktl::api::bool32 residency_standard2dmultisample_block_shape;
ktl::api::bool32 residency_standard3dblock_shape;
ktl::api::bool32 residency_aligned_mip_size;
ktl::api::bool32 residency_non_resident_strict;
};
struct physical_device_limits
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
ktl::api::dvsize buffer_image_granularity;
ktl::api::dvsize sparse_address_space_size;
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
ktl::api::dvsize min_texel_buffer_offset_alignment;
ktl::api::dvsize min_uniform_buffer_offset_alignment;
ktl::api::dvsize min_storage_buffer_offset_alignment;
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
ktl::api::bool32 timestamp_compute_and_graphics;
float timestamp_period;
ktl::i32 max_clip_distances;
ktl::i32 max_cull_distances;
ktl::i32 max_combined_clip_and_cull_distances;
ktl::i32 discrete_queue_priorities;
float point_size_range[2];
float line_width_range[2];
float point_size_granularity;
float line_width_granularity;
ktl::api::bool32 strict_lines;
ktl::api::bool32 standard_sample_locations;
ktl::api::dvsize optimal_buffer_copy_offset_alignment;
ktl::api::dvsize optimal_buffer_copy_row_pitch_alignment;
ktl::api::dvsize non_coherent_atom_size;
};
struct semaphore_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_semaphore_create_info;
const void * pnext = {};
ktl::api::semaphore_create_flags flags = {};
};
struct query_pool_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_query_pool_create_info;
const void * pnext = {};
ktl::api::query_pool_create_flags flags = {};
ktl::api::query_type query_type;
ktl::i32 query_count;
ktl::api::query_pipeline_statistic_flags pipeline_statistics = {};
};
struct framebuffer_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_framebuffer_create_info;
const void * pnext = {};
ktl::api::framebuffer_create_flags flags = {};
ktl::api::render_pass render_pass;
ktl::i32 attachment_count = {};
const ktl::api::image_view * p_attachments;
ktl::i32 width;
ktl::i32 height;
ktl::i32 layers;
};
struct draw_indirect_command
{
ktl::i32 vertex_count;
ktl::i32 instance_count;
ktl::i32 first_vertex;
ktl::i32 first_instance;
};
struct draw_indexed_indirect_command
{
ktl::i32 index_count;
ktl::i32 instance_count;
ktl::i32 first_index;
ktl::i32 vertex_offset;
ktl::i32 first_instance;
};
struct dispatch_indirect_command
{
ktl::i32 x;
ktl::i32 y;
ktl::i32 z;
};
struct multi_draw_info_ext
{
ktl::i32 first_vertex;
ktl::i32 vertex_count;
};
struct multi_draw_indexed_info_ext
{
ktl::i32 first_index;
ktl::i32 index_count;
ktl::i32 vertex_offset;
};
struct submit_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_submit_info;
const void * pnext = {};
ktl::i32 wait_semaphore_count = {};
const ktl::api::semaphore * p_wait_semaphores;
const ktl::api::pipeline_stage_flags * p_wait_dst_stage_mask;
ktl::i32 command_buffer_count = {};
const ktl::api::command_buffer * p_command_buffers;
ktl::i32 signal_semaphore_count = {};
const ktl::api::semaphore * p_signal_semaphores;
};
struct display_plane_properties_khr
{
ktl::api::display_khr current_display;
ktl::i32 current_stack_index;
};
struct display_surface_stereo_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_surface_stereo_create_info_nv;
const void * pnext = {};
ktl::api::display_surface_stereo_type_nv stereo_type;
};
struct android_surface_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_android_surface_create_info_khr;
const void * pnext = {};
ktl::api::android_surface_create_flags_khr flags = {};
ANativeWindow * window;
};
struct vi_surface_create_info_nn
{
ktl::api::structure_type stype = ktl::api::structure_type::v_vi_surface_create_info_nn;
const void * pnext = {};
ktl::api::vi_surface_create_flags_nn flags = {};
void * window;
};
struct wayland_surface_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_wayland_surface_create_info_khr;
const void * pnext = {};
ktl::api::wayland_surface_create_flags_khr flags = {};
wl_display * display;
wl_surface * surface;
};
struct ubm_surface_create_info_sec
{
ktl::api::structure_type stype = ktl::api::structure_type::v_ubm_surface_create_info_sec;
const void * pnext = {};
ktl::api::ubm_surface_create_flags_sec flags = {};
ubm_device * device;
ubm_surface * surface;
};
struct win32surface_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_win32_surface_create_info_khr;
const void * pnext = {};
ktl::api::win32surface_create_flags_khr flags = {};
HINSTANCE hinstance;
HWND hwnd;
};
struct xlib_surface_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_xlib_surface_create_info_khr;
const void * pnext = {};
ktl::api::xlib_surface_create_flags_khr flags = {};
Display * dpy;
Window window;
};
struct xcb_surface_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_xcb_surface_create_info_khr;
const void * pnext = {};
ktl::api::xcb_surface_create_flags_khr flags = {};
xcb_connection_t * connection;
xcb_window_t window;
};
struct direct_fbsurface_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_directfb_surface_create_info_ext;
const void * pnext = {};
ktl::api::direct_fbsurface_create_flags_ext flags = {};
IDirectFB * dfb;
IDirectFBSurface * surface;
};
struct image_pipe_surface_create_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_imagepipe_surface_create_info_fuchsia;
const void * pnext = {};
ktl::api::image_pipe_surface_create_flags_fuchsia flags = {};
zx_handle_t image_pipe_handle;
};
struct stream_descriptor_surface_create_info_ggp
{
ktl::api::structure_type stype = ktl::api::structure_type::v_stream_descriptor_surface_create_info_ggp;
const void * pnext = {};
ktl::api::stream_descriptor_surface_create_flags_ggp flags = {};
GgpStreamDescriptor stream_descriptor;
};
struct screen_surface_create_info_qnx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_screen_surface_create_info_qnx;
const void * pnext = {};
ktl::api::screen_surface_create_flags_qnx flags = {};
_screen_context * context;
_screen_window * window;
};
struct surface_format_khr
{
ktl::api::format format;
ktl::api::color_space_khr color_space;
};
struct present_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_present_info_khr;
const void * pnext = {};
ktl::i32 wait_semaphore_count = {};
const ktl::api::semaphore * p_wait_semaphores;
ktl::i32 swapchain_count;
const ktl::api::swapchain_khr * p_swapchains;
const ktl::i32 * p_image_indices;
ktl::api::result * p_results = {};
};
struct debug_report_callback_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_debug_report_callback_create_info_ext;
const void * pnext = {};
ktl::api::debug_report_flags_ext flags = {};
ktl::api::pfn_debug_report_callback_ext pfn_callback;
void * p_user_data = {};
};
struct validation_flags_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_validation_flags_ext;
const void * pnext = {};
ktl::i32 disabled_validation_check_count;
const ktl::api::validation_check_ext * p_disabled_validation_checks;
};
struct validation_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_validation_features_ext;
const void * pnext = {};
ktl::i32 enabled_validation_feature_count = {};
const ktl::api::validation_feature_enable_ext * p_enabled_validation_features;
ktl::i32 disabled_validation_feature_count = {};
const ktl::api::validation_feature_disable_ext * p_disabled_validation_features;
};
struct layer_setting_ext
{
const char * p_layer_name;
const char * p_setting_name;
ktl::api::layer_setting_type_ext type;
ktl::i32 value_count = {};
const void * p_values;
};
struct application_parameters_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_application_parameters_ext;
const void * pnext = {};
ktl::i32 vendor_id;
ktl::i32 device_id = {};
ktl::i32 key;
ktl::u64 value;
};
struct pipeline_rasterization_state_rasterization_order_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_rasterization_state_rasterization_order_amd;
const void * pnext = {};
ktl::api::rasterization_order_amd rasterization_order;
};
struct debug_marker_object_name_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_debug_marker_object_name_info_ext;
const void * pnext = {};
ktl::api::debug_report_object_type_ext object_type;
ktl::u64 object;
const char * p_object_name;
};
struct debug_marker_object_tag_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_debug_marker_object_tag_info_ext;
const void * pnext = {};
ktl::api::debug_report_object_type_ext object_type;
ktl::u64 object;
ktl::u64 tag_name;
ktl::usize tag_size;
const void * p_tag;
};
struct debug_marker_marker_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_debug_marker_marker_info_ext;
const void * pnext = {};
const char * p_marker_name;
float color[4];
};
struct dedicated_allocation_image_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_dedicated_allocation_image_create_info_nv;
const void * pnext = {};
ktl::api::bool32 dedicated_allocation;
};
struct dedicated_allocation_buffer_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_dedicated_allocation_buffer_create_info_nv;
const void * pnext = {};
ktl::api::bool32 dedicated_allocation;
};
struct dedicated_allocation_memory_allocate_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_dedicated_allocation_memory_allocate_info_nv;
const void * pnext = {};
ktl::api::image image = {};
ktl::api::buffer buffer = {};
};
struct external_memory_image_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_memory_image_create_info_nv;
const void * pnext = {};
ktl::api::external_memory_handle_type_flags_nv handle_types = {};
};
struct export_memory_allocate_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_memory_allocate_info_nv;
const void * pnext = {};
ktl::api::external_memory_handle_type_flags_nv handle_types = {};
};
struct import_memory_win32handle_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_memory_win32_handle_info_nv;
const void * pnext = {};
ktl::api::external_memory_handle_type_flags_nv handle_type = {};
HANDLE handle = {};
};
struct export_memory_win32handle_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_memory_win32_handle_info_nv;
const void * pnext = {};
const SECURITY_ATTRIBUTES * p_attributes = {};
DWORD dw_access = {};
};
struct export_memory_sci_buf_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_memory_sci_buf_info_nv;
const void * pnext = {};
NvSciBufAttrList p_attributes;
};
struct import_memory_sci_buf_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_memory_sci_buf_info_nv;
const void * pnext = {};
ktl::api::external_memory_handle_type_flag_bits handle_type;
NvSciBufObj handle;
};
struct memory_get_sci_buf_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_get_sci_buf_info_nv;
const void * pnext = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};
struct memory_sci_buf_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_sci_buf_properties_nv;
const void * pnext = {};
ktl::i32 memory_type_bits;
};
struct physical_device_external_memory_sci_buf_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_memory_sci_buf_features_nv;
void * pnext = {};
ktl::api::bool32 sci_buf_import;
ktl::api::bool32 sci_buf_export;
};
struct win32keyed_mutex_acquire_release_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_win32_keyed_mutex_acquire_release_info_nv;
const void * pnext = {};
ktl::i32 acquire_count = {};
const ktl::api::device_memory * p_acquire_syncs;
const ktl::u64 * p_acquire_keys;
const ktl::i32 * p_acquire_timeout_milliseconds;
ktl::i32 release_count = {};
const ktl::api::device_memory * p_release_syncs;
const ktl::u64 * p_release_keys;
};
struct physical_device_device_generated_commands_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_device_generated_commands_features_nv;
void * pnext = {};
ktl::api::bool32 device_generated_commands;
};
struct push_constant_bank_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_push_constant_bank_info_nv;
const void * pnext = {};
ktl::i32 bank;
};
struct physical_device_push_constant_bank_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_push_constant_bank_features_nv;
void * pnext = {};
ktl::api::bool32 push_constant_bank;
};
struct physical_device_push_constant_bank_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_push_constant_bank_properties_nv;
void * pnext = {};
ktl::i32 max_graphics_push_constant_banks;
ktl::i32 max_compute_push_constant_banks;
ktl::i32 max_graphics_push_data_banks;
ktl::i32 max_compute_push_data_banks;
};
struct physical_device_device_generated_commands_compute_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_device_generated_commands_compute_features_nv;
void * pnext = {};
ktl::api::bool32 device_generated_compute;
ktl::api::bool32 device_generated_compute_pipelines;
ktl::api::bool32 device_generated_compute_capture_replay;
};
struct device_private_data_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_private_data_create_info;
const void * pnext = {};
ktl::i32 private_data_slot_request_count;
};
struct private_data_slot_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_private_data_slot_create_info;
const void * pnext = {};
ktl::api::private_data_slot_create_flags flags;
};
struct physical_device_private_data_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_private_data_features;
void * pnext = {};
ktl::api::bool32 private_data;
};
struct physical_device_device_generated_commands_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_device_generated_commands_properties_nv;
void * pnext = {};
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
struct physical_device_cluster_acceleration_structure_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cluster_acceleration_structure_features_nv;
void * pnext = {};
ktl::api::bool32 cluster_acceleration_structure;
};
struct physical_device_cluster_acceleration_structure_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cluster_acceleration_structure_properties_nv;
void * pnext = {};
ktl::i32 max_vertices_per_cluster;
ktl::i32 max_triangles_per_cluster;
ktl::i32 cluster_scratch_byte_alignment;
ktl::i32 cluster_byte_alignment;
ktl::i32 cluster_template_byte_alignment;
ktl::i32 cluster_bottom_level_byte_alignment;
ktl::i32 cluster_template_bounds_byte_alignment;
ktl::i32 max_cluster_geometry_index;
};
struct strided_device_address_nv
{
ktl::api::dvaddr start_address;
ktl::api::dvsize stride_in_bytes;
};
struct ray_tracing_pipeline_cluster_acceleration_structure_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_ray_tracing_pipeline_cluster_acceleration_structure_create_info_nv;
void * pnext = {};
ktl::api::bool32 allow_cluster_acceleration_structure;
};
struct cluster_acceleration_structure_geometry_index_and_geometry_flags_nv
{
ktl::i32 geometry_index;
ktl::i32 reserved;
ktl::i32 geometry_flags;
};
struct cluster_acceleration_structure_move_objects_info_nv
{
ktl::api::dvaddr src_acceleration_structure;
};
struct cluster_acceleration_structure_build_clusters_bottom_level_info_nv
{
ktl::i32 cluster_references_count;
ktl::i32 cluster_references_stride;
ktl::api::dvaddr cluster_references;
};
struct cluster_acceleration_structure_get_template_indices_info_nv
{
ktl::api::dvaddr cluster_template_address;
};
struct cluster_acceleration_structure_clusters_bottom_level_input_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cluster_acceleration_structure_clusters_bottom_level_input_nv;
void * pnext = {};
ktl::i32 max_total_cluster_count;
ktl::i32 max_cluster_count_per_acceleration_structure;
};
struct cluster_acceleration_structure_triangle_cluster_input_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cluster_acceleration_structure_triangle_cluster_input_nv;
void * pnext = {};
ktl::api::format vertex_format;
ktl::i32 max_geometry_index_value;
ktl::i32 max_cluster_unique_geometry_count;
ktl::i32 max_cluster_triangle_count;
ktl::i32 max_cluster_vertex_count;
ktl::i32 max_total_triangle_count;
ktl::i32 max_total_vertex_count;
ktl::i32 min_position_truncate_bit_count;
};
struct cluster_acceleration_structure_move_objects_input_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cluster_acceleration_structure_move_objects_input_nv;
void * pnext = {};
ktl::api::cluster_acceleration_structure_type_nv type;
ktl::api::bool32 no_move_overlap;
ktl::api::dvsize max_moved_bytes;
};
struct physical_device_multi_draw_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_multi_draw_properties_ext;
void * pnext = {};
ktl::i32 max_multi_draw_count;
};
struct bind_shader_group_indirect_command_nv
{
ktl::i32 group_index;
};
struct bind_index_buffer_indirect_command_nv
{
ktl::api::dvaddr buffer_address;
ktl::i32 size;
ktl::api::index_type index_type;
};
struct bind_vertex_buffer_indirect_command_nv
{
ktl::api::dvaddr buffer_address;
ktl::i32 size;
ktl::i32 stride;
};
struct set_state_flags_indirect_command_nv
{
ktl::i32 data;
};
struct indirect_commands_stream_nv
{
ktl::api::buffer buffer;
ktl::api::dvsize offset;
};
struct indirect_commands_layout_token_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_indirect_commands_layout_token_nv;
const void * pnext = {};
ktl::api::indirect_commands_token_type_nv token_type;
ktl::i32 stream;
ktl::i32 offset;
ktl::i32 vertex_binding_unit;
ktl::api::bool32 vertex_dynamic_stride;
const ktl::api::pipeline_layout pushconstant_pipeline_layout = {};
const ktl::api::shader_stage_flags pushconstant_shader_stage_flags = {};
const ktl::i32 pushconstant_offset;
const ktl::i32 pushconstant_size;
ktl::api::indirect_state_flags_nv indirect_state_flags = {};
ktl::i32 index_type_count = {};
const ktl::api::index_type * p_index_types;
const ktl::i32 * p_index_type_values;
};
struct generated_commands_memory_requirements_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_generated_commands_memory_requirements_info_nv;
const void * pnext = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::api::pipeline pipeline = {};
ktl::api::indirect_commands_layout_nv indirect_commands_layout;
ktl::i32 max_sequences_count;
};
struct pipeline_indirect_device_address_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_indirect_device_address_info_nv;
const void * pnext = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::api::pipeline pipeline;
};
struct bind_pipeline_indirect_command_nv
{
ktl::api::dvaddr pipeline_address;
};
struct physical_device_image_format_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_format_info_2;
const void * pnext = {};
ktl::api::format format;
ktl::api::image_type type;
ktl::api::image_tiling tiling;
ktl::api::image_usage_flags usage;
ktl::api::image_create_flags flags = {};
};
struct physical_device_sparse_image_format_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_sparse_image_format_info_2;
const void * pnext = {};
ktl::api::format format;
ktl::api::image_type type;
ktl::api::sample_count_flag_bits samples;
ktl::api::image_usage_flags usage;
ktl::api::image_tiling tiling;
};
struct physical_device_push_descriptor_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_push_descriptor_properties;
void * pnext = {};
ktl::i32 max_push_descriptors;
};
struct conformance_version
{
ktl::u8 major;
ktl::u8 minor;
ktl::u8 subminor;
ktl::u8 patch;
};
struct physical_device_variable_pointers_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_variable_pointers_features;
void * pnext = {};
ktl::api::bool32 variable_pointers_storage_buffer;
ktl::api::bool32 variable_pointers;
};
struct external_memory_properties
{
ktl::api::external_memory_feature_flags external_memory_features;
ktl::api::external_memory_handle_type_flags export_from_imported_handle_types = {};
ktl::api::external_memory_handle_type_flags compatible_handle_types;
};
struct physical_device_external_image_format_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_image_format_info;
const void * pnext = {};
ktl::api::external_memory_handle_type_flag_bits handle_type = {};
};
struct physical_device_external_buffer_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_buffer_info;
const void * pnext = {};
ktl::api::buffer_create_flags flags = {};
ktl::api::buffer_usage_flags usage = {};
ktl::api::external_memory_handle_type_flag_bits handle_type;
};
struct physical_device_idproperties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_id_properties;
void * pnext = {};
ktl::u8 device_uuid[KTL_API_UUID_SIZE];
ktl::u8 driver_uuid[KTL_API_UUID_SIZE];
ktl::u8 device_luid[KTL_API_LUID_SIZE];
ktl::i32 device_node_mask;
ktl::api::bool32 device_luidvalid;
};
struct external_memory_image_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_memory_image_create_info;
const void * pnext = {};
ktl::api::external_memory_handle_type_flags handle_types = {};
};
struct external_memory_buffer_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_memory_buffer_create_info;
const void * pnext = {};
ktl::api::external_memory_handle_type_flags handle_types = {};
};
struct export_memory_allocate_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_memory_allocate_info;
const void * pnext = {};
ktl::api::external_memory_handle_type_flags handle_types = {};
};
struct import_memory_win32handle_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_memory_win32_handle_info_khr;
const void * pnext = {};
ktl::api::external_memory_handle_type_flag_bits handle_type = {};
HANDLE handle = {};
LPCWSTR name = {};
};
struct export_memory_win32handle_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_memory_win32_handle_info_khr;
const void * pnext = {};
const SECURITY_ATTRIBUTES * p_attributes = {};
DWORD dw_access;
LPCWSTR name;
};
struct import_memory_zircon_handle_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_memory_zircon_handle_info_fuchsia;
const void * pnext = {};
ktl::api::external_memory_handle_type_flag_bits handle_type = {};
zx_handle_t handle = {};
};
struct memory_zircon_handle_properties_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_zircon_handle_properties_fuchsia;
void * pnext = {};
ktl::i32 memory_type_bits;
};
struct memory_get_zircon_handle_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_get_zircon_handle_info_fuchsia;
const void * pnext = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};
struct memory_win32handle_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_win32_handle_properties_khr;
void * pnext = {};
ktl::i32 memory_type_bits;
};
struct memory_get_win32handle_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_get_win32_handle_info_khr;
const void * pnext = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};
struct import_memory_fd_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_memory_fd_info_khr;
const void * pnext = {};
ktl::api::external_memory_handle_type_flag_bits handle_type = {};
int fd;
};
struct memory_fd_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_fd_properties_khr;
void * pnext = {};
ktl::i32 memory_type_bits;
};
struct memory_get_fd_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_get_fd_info_khr;
const void * pnext = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};
struct win32keyed_mutex_acquire_release_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_win32_keyed_mutex_acquire_release_info_khr;
const void * pnext = {};
ktl::i32 acquire_count = {};
const ktl::api::device_memory * p_acquire_syncs;
const ktl::u64 * p_acquire_keys;
const ktl::i32 * p_acquire_timeouts;
ktl::i32 release_count = {};
const ktl::api::device_memory * p_release_syncs;
const ktl::u64 * p_release_keys;
};
struct import_memory_metal_handle_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_memory_metal_handle_info_ext;
const void * pnext = {};
ktl::api::external_memory_handle_type_flag_bits handle_type = {};
void * handle = {};
};
struct memory_metal_handle_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_metal_handle_properties_ext;
void * pnext = {};
ktl::i32 memory_type_bits;
};
struct memory_get_metal_handle_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_get_metal_handle_info_ext;
const void * pnext = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};
struct physical_device_external_semaphore_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_semaphore_info;
const void * pnext = {};
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};
struct external_semaphore_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_semaphore_properties;
void * pnext = {};
ktl::api::external_semaphore_handle_type_flags export_from_imported_handle_types;
ktl::api::external_semaphore_handle_type_flags compatible_handle_types;
ktl::api::external_semaphore_feature_flags external_semaphore_features = {};
};
struct export_semaphore_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_semaphore_create_info;
const void * pnext = {};
ktl::api::external_semaphore_handle_type_flags handle_types = {};
};
struct import_semaphore_win32handle_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_semaphore_win32_handle_info_khr;
const void * pnext = {};
ktl::api::semaphore semaphore;
ktl::api::semaphore_import_flags flags = {};
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
HANDLE handle = {};
LPCWSTR name = {};
};
struct export_semaphore_win32handle_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_semaphore_win32_handle_info_khr;
const void * pnext = {};
const SECURITY_ATTRIBUTES * p_attributes = {};
DWORD dw_access;
LPCWSTR name;
};
struct d3d12fence_submit_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_d3d12_fence_submit_info_khr;
const void * pnext = {};
ktl::i32 wait_semaphore_values_count = {};
const ktl::u64 * p_wait_semaphore_values = {};
ktl::i32 signal_semaphore_values_count = {};
const ktl::u64 * p_signal_semaphore_values = {};
};
struct semaphore_get_win32handle_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_semaphore_get_win32_handle_info_khr;
const void * pnext = {};
ktl::api::semaphore semaphore;
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};
struct import_semaphore_fd_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_semaphore_fd_info_khr;
const void * pnext = {};
ktl::api::semaphore semaphore;
ktl::api::semaphore_import_flags flags = {};
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
int fd;
};
struct semaphore_get_fd_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_semaphore_get_fd_info_khr;
const void * pnext = {};
ktl::api::semaphore semaphore;
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};
struct import_semaphore_zircon_handle_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_semaphore_zircon_handle_info_fuchsia;
const void * pnext = {};
ktl::api::semaphore semaphore;
ktl::api::semaphore_import_flags flags = {};
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
zx_handle_t zircon_handle;
};
struct semaphore_get_zircon_handle_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_semaphore_get_zircon_handle_info_fuchsia;
const void * pnext = {};
ktl::api::semaphore semaphore;
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};
struct physical_device_external_fence_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_fence_info;
const void * pnext = {};
ktl::api::external_fence_handle_type_flag_bits handle_type;
};
struct external_fence_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_fence_properties;
void * pnext = {};
ktl::api::external_fence_handle_type_flags export_from_imported_handle_types;
ktl::api::external_fence_handle_type_flags compatible_handle_types;
ktl::api::external_fence_feature_flags external_fence_features = {};
};
struct export_fence_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_fence_create_info;
const void * pnext = {};
ktl::api::external_fence_handle_type_flags handle_types = {};
};
struct import_fence_win32handle_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_fence_win32_handle_info_khr;
const void * pnext = {};
ktl::api::fence fence;
ktl::api::fence_import_flags flags = {};
ktl::api::external_fence_handle_type_flag_bits handle_type;
HANDLE handle = {};
LPCWSTR name = {};
};
struct export_fence_win32handle_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_fence_win32_handle_info_khr;
const void * pnext = {};
const SECURITY_ATTRIBUTES * p_attributes = {};
DWORD dw_access;
LPCWSTR name;
};
struct fence_get_win32handle_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_fence_get_win32_handle_info_khr;
const void * pnext = {};
ktl::api::fence fence;
ktl::api::external_fence_handle_type_flag_bits handle_type;
};
struct import_fence_fd_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_fence_fd_info_khr;
const void * pnext = {};
ktl::api::fence fence;
ktl::api::fence_import_flags flags = {};
ktl::api::external_fence_handle_type_flag_bits handle_type;
int fd;
};
struct fence_get_fd_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_fence_get_fd_info_khr;
const void * pnext = {};
ktl::api::fence fence;
ktl::api::external_fence_handle_type_flag_bits handle_type;
};
struct export_fence_sci_sync_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_fence_sci_sync_info_nv;
const void * pnext = {};
NvSciSyncAttrList p_attributes;
};
struct import_fence_sci_sync_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_fence_sci_sync_info_nv;
const void * pnext = {};
ktl::api::fence fence;
ktl::api::external_fence_handle_type_flag_bits handle_type;
void * handle;
};
struct fence_get_sci_sync_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_fence_get_sci_sync_info_nv;
const void * pnext = {};
ktl::api::fence fence;
ktl::api::external_fence_handle_type_flag_bits handle_type;
};
struct export_semaphore_sci_sync_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_semaphore_sci_sync_info_nv;
const void * pnext = {};
NvSciSyncAttrList p_attributes;
};
struct import_semaphore_sci_sync_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_semaphore_sci_sync_info_nv;
const void * pnext = {};
ktl::api::semaphore semaphore;
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
void * handle;
};
struct semaphore_get_sci_sync_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_semaphore_get_sci_sync_info_nv;
const void * pnext = {};
ktl::api::semaphore semaphore;
ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};
struct sci_sync_attributes_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sci_sync_attributes_info_nv;
const void * pnext = {};
ktl::api::sci_sync_client_type_nv client_type;
ktl::api::sci_sync_primitive_type_nv primitive_type;
};
struct physical_device_external_sci_sync_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_sci_sync_features_nv;
void * pnext = {};
ktl::api::bool32 sci_sync_fence;
ktl::api::bool32 sci_sync_semaphore;
ktl::api::bool32 sci_sync_import;
ktl::api::bool32 sci_sync_export;
};
struct physical_device_external_sci_sync2features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_sci_sync_2_features_nv;
void * pnext = {};
ktl::api::bool32 sci_sync_fence;
ktl::api::bool32 sci_sync_semaphore2;
ktl::api::bool32 sci_sync_import;
ktl::api::bool32 sci_sync_export;
};
struct semaphore_sci_sync_pool_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_semaphore_sci_sync_pool_create_info_nv;
const void * pnext = {};
NvSciSyncObj handle;
};
struct semaphore_sci_sync_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_semaphore_sci_sync_create_info_nv;
const void * pnext = {};
ktl::api::semaphore_sci_sync_pool_nv semaphore_pool;
const NvSciSyncFence * p_fence;
};
struct device_semaphore_sci_sync_pool_reservation_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_semaphore_sci_sync_pool_reservation_create_info_nv;
const void * pnext = {};
ktl::i32 semaphore_sci_sync_pool_request_count;
};
struct physical_device_multiview_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_multiview_features;
void * pnext = {};
ktl::api::bool32 multiview;
ktl::api::bool32 multiview_geometry_shader;
ktl::api::bool32 multiview_tessellation_shader;
};
struct physical_device_multiview_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_multiview_properties;
void * pnext = {};
ktl::i32 max_multiview_view_count;
ktl::i32 max_multiview_instance_index;
};
struct render_pass_multiview_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_multiview_create_info;
const void * pnext = {};
ktl::i32 subpass_count = {};
const ktl::i32 * p_view_masks;
ktl::i32 dependency_count = {};
const ktl::i32 * p_view_offsets;
ktl::i32 correlation_mask_count = {};
const ktl::i32 * p_correlation_masks;
};
struct display_power_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_power_info_ext;
const void * pnext = {};
ktl::api::display_power_state_ext power_state;
};
struct device_event_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_event_info_ext;
const void * pnext = {};
ktl::api::device_event_type_ext device_event;
};
struct display_event_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_event_info_ext;
const void * pnext = {};
ktl::api::display_event_type_ext display_event;
};
struct swapchain_counter_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_counter_create_info_ext;
const void * pnext = {};
ktl::api::surface_counter_flags_ext surface_counters = {};
};
struct physical_device_group_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_group_properties;
void * pnext = {};
ktl::i32 physical_device_count;
ktl::api::physical_device physical_devices[KTL_API_MAX_DEVICE_GROUP_SIZE];
ktl::api::bool32 subset_allocation;
};
struct memory_allocate_flags_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_allocate_flags_info;
const void * pnext = {};
ktl::api::memory_allocate_flags flags = {};
ktl::i32 device_mask;
};
struct bind_buffer_memory_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_buffer_memory_info;
const void * pnext = {};
ktl::api::buffer buffer;
ktl::api::device_memory memory;
ktl::api::dvsize memory_offset;
};
struct bind_buffer_memory_device_group_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_buffer_memory_device_group_info;
const void * pnext = {};
ktl::i32 device_index_count = {};
const ktl::i32 * p_device_indices;
};
struct bind_image_memory_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_image_memory_info;
const void * pnext = {};
ktl::api::image image;
ktl::api::device_memory memory;
ktl::api::dvsize memory_offset;
};
struct device_group_command_buffer_begin_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_group_command_buffer_begin_info;
const void * pnext = {};
ktl::i32 device_mask;
};
struct device_group_submit_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_group_submit_info;
const void * pnext = {};
ktl::i32 wait_semaphore_count = {};
const ktl::i32 * p_wait_semaphore_device_indices;
ktl::i32 command_buffer_count = {};
const ktl::i32 * p_command_buffer_device_masks;
ktl::i32 signal_semaphore_count = {};
const ktl::i32 * p_signal_semaphore_device_indices;
};
struct device_group_bind_sparse_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_group_bind_sparse_info;
const void * pnext = {};
ktl::i32 resource_device_index;
ktl::i32 memory_device_index;
};
struct device_group_present_capabilities_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_group_present_capabilities_khr;
void * pnext = {};
ktl::i32 present_mask[KTL_API_MAX_DEVICE_GROUP_SIZE];
ktl::api::device_group_present_mode_flags_khr modes;
};
struct image_swapchain_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_swapchain_create_info_khr;
const void * pnext = {};
ktl::api::swapchain_khr swapchain = {};
};
struct bind_image_memory_swapchain_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_image_memory_swapchain_info_khr;
const void * pnext = {};
ktl::api::swapchain_khr swapchain;
ktl::i32 image_index;
};
struct acquire_next_image_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acquire_next_image_info_khr;
const void * pnext = {};
ktl::api::swapchain_khr swapchain;
ktl::u64 timeout;
ktl::api::semaphore semaphore = {};
ktl::api::fence fence = {};
ktl::i32 device_mask;
};
struct device_group_present_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_group_present_info_khr;
const void * pnext = {};
ktl::i32 swapchain_count = {};
const ktl::i32 * p_device_masks;
ktl::api::device_group_present_mode_flag_bits_khr mode;
};
struct device_group_device_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_group_device_create_info;
const void * pnext = {};
ktl::i32 physical_device_count = {};
const ktl::api::physical_device * p_physical_devices;
};
struct device_group_swapchain_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_group_swapchain_create_info_khr;
const void * pnext = {};
ktl::api::device_group_present_mode_flags_khr modes;
};
struct descriptor_update_template_entry
{
ktl::i32 dst_binding;
ktl::i32 dst_array_element;
ktl::i32 descriptor_count;
ktl::api::descriptor_type descriptor_type;
ktl::usize offset;
ktl::usize stride;
};
struct xycolor_ext
{
float x;
float y;
};
struct physical_device_present_id_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_present_id_features_khr;
void * pnext = {};
ktl::api::bool32 present_id;
};
struct present_id_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_present_id_khr;
const void * pnext = {};
ktl::i32 swapchain_count;
const ktl::u64 * p_present_ids = {};
};
struct physical_device_present_id2features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_present_id_2_features_khr;
void * pnext = {};
ktl::api::bool32 present_id2;
};
struct present_id2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_present_id_2_khr;
const void * pnext = {};
ktl::i32 swapchain_count;
const ktl::u64 * p_present_ids = {};
};
struct present_wait2info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_present_wait_2_info_khr;
const void * pnext = {};
ktl::u64 present_id;
ktl::u64 timeout;
};
struct physical_device_present_wait_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_present_wait_features_khr;
void * pnext = {};
ktl::api::bool32 present_wait;
};
struct physical_device_present_wait2features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_present_wait_2_features_khr;
void * pnext = {};
ktl::api::bool32 present_wait2;
};
struct physical_device_present_timing_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_present_timing_features_ext;
void * pnext = {};
ktl::api::bool32 present_timing;
ktl::api::bool32 present_at_absolute_time;
ktl::api::bool32 present_at_relative_time;
};
struct present_timing_surface_capabilities_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_present_timing_surface_capabilities_ext;
void * pnext = {};
ktl::api::bool32 present_timing_supported;
ktl::api::bool32 present_at_absolute_time_supported;
ktl::api::bool32 present_at_relative_time_supported;
ktl::api::present_stage_flags_ext present_stage_queries;
};
struct swapchain_timing_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_timing_properties_ext;
void * pnext = {};
ktl::u64 refresh_duration;
ktl::u64 refresh_interval;
};
struct swapchain_time_domain_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_time_domain_properties_ext;
void * pnext = {};
ktl::i32 time_domain_count;
ktl::api::time_domain_khr * p_time_domains = {};
ktl::u64 * p_time_domain_ids = {};
};
struct present_stage_time_ext
{
ktl::api::present_stage_flags_ext stage;
ktl::u64 time;
};
struct past_presentation_timing_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_past_presentation_timing_info_ext;
const void * pnext = {};
ktl::api::past_presentation_timing_flags_ext flags = {};
ktl::api::swapchain_khr swapchain;
};
struct present_timing_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_present_timing_info_ext;
const void * pnext = {};
ktl::api::present_timing_info_flags_ext flags = {};
ktl::u64 target_time;
ktl::u64 time_domain_id;
ktl::api::present_stage_flags_ext present_stage_queries = {};
ktl::api::present_stage_flags_ext target_time_domain_present_stage = {};
};
struct swapchain_calibrated_timestamp_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_calibrated_timestamp_info_ext;
const void * pnext = {};
ktl::api::swapchain_khr swapchain;
ktl::api::present_stage_flags_ext present_stage = {};
ktl::u64 time_domain_id;
};
struct hdr_vivid_dynamic_metadata_huawei
{
ktl::api::structure_type stype = ktl::api::structure_type::v_hdr_vivid_dynamic_metadata_huawei;
const void * pnext = {};
ktl::usize dynamic_metadata_size;
const void * p_dynamic_metadata;
};
struct display_native_hdr_surface_capabilities_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_native_hdr_surface_capabilities_amd;
void * pnext = {};
ktl::api::bool32 local_dimming_support;
};
struct swapchain_display_native_hdr_create_info_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_display_native_hdr_create_info_amd;
const void * pnext = {};
ktl::api::bool32 local_dimming_enable;
};
struct refresh_cycle_duration_google
{
ktl::u64 refresh_duration;
};
struct past_presentation_timing_google
{
ktl::i32 present_id;
ktl::u64 desired_present_time;
ktl::u64 actual_present_time;
ktl::u64 earliest_present_time;
ktl::u64 present_margin;
};
struct present_time_google
{
ktl::i32 present_id;
ktl::u64 desired_present_time;
};
struct iossurface_create_info_mvk
{
ktl::api::structure_type stype = ktl::api::structure_type::v_ios_surface_create_info_mvk;
const void * pnext = {};
ktl::api::iossurface_create_flags_mvk flags = {};
const void * p_view;
};
struct mac_ossurface_create_info_mvk
{
ktl::api::structure_type stype = ktl::api::structure_type::v_macos_surface_create_info_mvk;
const void * pnext = {};
ktl::api::mac_ossurface_create_flags_mvk flags = {};
const void * p_view;
};
struct metal_surface_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_metal_surface_create_info_ext;
const void * pnext = {};
ktl::api::metal_surface_create_flags_ext flags = {};
const CAMetalLayer * p_layer;
};
struct viewport_wscaling_nv
{
float xcoeff;
float ycoeff;
};
struct viewport_swizzle_nv
{
ktl::api::viewport_coordinate_swizzle_nv x;
ktl::api::viewport_coordinate_swizzle_nv y;
ktl::api::viewport_coordinate_swizzle_nv z;
ktl::api::viewport_coordinate_swizzle_nv w;
};
struct physical_device_discard_rectangle_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_discard_rectangle_properties_ext;
void * pnext = {};
ktl::i32 max_discard_rectangles;
};
struct physical_device_multiview_per_view_attributes_properties_nvx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_multiview_per_view_attributes_properties_nvx;
void * pnext = {};
ktl::api::bool32 per_view_position_all_components;
};
struct input_attachment_aspect_reference
{
ktl::i32 subpass;
ktl::i32 input_attachment_index;
ktl::api::image_aspect_flags aspect_mask;
};
struct physical_device_surface_info2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_surface_info_2_khr;
const void * pnext = {};
ktl::api::surface_khr surface = {};
};
struct display_mode_stereo_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_mode_stereo_properties_nv;
void * pnext = {};
ktl::api::bool32 hdmi3dsupported;
};
struct display_plane_info2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_plane_info_2_khr;
const void * pnext = {};
ktl::api::display_mode_khr mode;
ktl::i32 plane_index;
};
struct shared_present_surface_capabilities_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_shared_present_surface_capabilities_khr;
void * pnext = {};
ktl::api::image_usage_flags shared_present_supported_usage_flags = {};
};
struct physical_device16bit_storage_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_16bit_storage_features;
void * pnext = {};
ktl::api::bool32 storage_buffer16bit_access;
ktl::api::bool32 uniform_and_storage_buffer16bit_access;
ktl::api::bool32 storage_push_constant16;
ktl::api::bool32 storage_input_output16;
};
struct physical_device_subgroup_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_subgroup_properties;
void * pnext = {};
ktl::i32 subgroup_size;
ktl::api::shader_stage_flags supported_stages;
ktl::api::subgroup_feature_flags supported_operations;
ktl::api::bool32 quad_operations_in_all_stages;
};
struct physical_device_shader_subgroup_extended_types_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_subgroup_extended_types_features;
void * pnext = {};
ktl::api::bool32 shader_subgroup_extended_types;
};
struct buffer_memory_requirements_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_memory_requirements_info_2;
const void * pnext = {};
ktl::api::buffer buffer;
};
struct image_memory_requirements_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_memory_requirements_info_2;
const void * pnext = {};
ktl::api::image image;
};
struct image_sparse_memory_requirements_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_sparse_memory_requirements_info_2;
const void * pnext = {};
ktl::api::image image;
};
struct physical_device_point_clipping_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_point_clipping_properties;
void * pnext = {};
ktl::api::point_clipping_behavior point_clipping_behavior;
};
struct memory_dedicated_requirements
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_dedicated_requirements;
void * pnext = {};
ktl::api::bool32 prefers_dedicated_allocation;
ktl::api::bool32 requires_dedicated_allocation;
};
struct memory_dedicated_allocate_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_dedicated_allocate_info;
const void * pnext = {};
ktl::api::image image = {};
ktl::api::buffer buffer = {};
};
struct image_view_usage_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_view_usage_create_info;
const void * pnext = {};
ktl::api::image_usage_flags usage;
};
struct image_view_sliced_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_view_sliced_create_info_ext;
const void * pnext = {};
ktl::i32 slice_offset;
ktl::i32 slice_count;
};
struct pipeline_tessellation_domain_origin_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_tessellation_domain_origin_state_create_info;
const void * pnext = {};
ktl::api::tessellation_domain_origin domain_origin;
};
struct sampler_ycbcr_conversion_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_ycbcr_conversion_info;
const void * pnext = {};
ktl::api::sampler_ycbcr_conversion conversion;
};
struct bind_image_plane_memory_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_image_plane_memory_info;
const void * pnext = {};
ktl::api::image_aspect_flag_bits plane_aspect;
};
struct image_plane_memory_requirements_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_plane_memory_requirements_info;
const void * pnext = {};
ktl::api::image_aspect_flag_bits plane_aspect;
};
struct physical_device_sampler_ycbcr_conversion_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_sampler_ycbcr_conversion_features;
void * pnext = {};
ktl::api::bool32 sampler_ycbcr_conversion;
};
struct sampler_ycbcr_conversion_image_format_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_ycbcr_conversion_image_format_properties;
void * pnext = {};
ktl::i32 combined_image_sampler_descriptor_count;
};
struct texture_lodgather_format_properties_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_texture_lod_gather_format_properties_amd;
void * pnext = {};
ktl::api::bool32 supports_texture_gather_lodbias_amd;
};
struct conditional_rendering_begin_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_conditional_rendering_begin_info_ext;
const void * pnext = {};
ktl::api::buffer buffer;
ktl::api::dvsize offset;
ktl::api::conditional_rendering_flags_ext flags = {};
};
struct protected_submit_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_protected_submit_info;
const void * pnext = {};
ktl::api::bool32 protected_submit;
};
struct physical_device_protected_memory_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_protected_memory_features;
void * pnext = {};
ktl::api::bool32 protected_memory;
};
struct physical_device_protected_memory_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_protected_memory_properties;
void * pnext = {};
ktl::api::bool32 protected_no_fault;
};
struct device_queue_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_queue_info_2;
const void * pnext = {};
ktl::api::device_queue_create_flags flags = {};
ktl::i32 queue_family_index;
ktl::i32 queue_index;
};
struct pipeline_coverage_to_color_state_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_coverage_to_color_state_create_info_nv;
const void * pnext = {};
ktl::api::pipeline_coverage_to_color_state_create_flags_nv flags = {};
ktl::api::bool32 coverage_to_color_enable;
ktl::i32 coverage_to_color_location = {};
};
struct physical_device_sampler_filter_minmax_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_sampler_filter_minmax_properties;
void * pnext = {};
ktl::api::bool32 filter_minmax_single_component_formats;
ktl::api::bool32 filter_minmax_image_component_mapping;
};
struct sample_location_ext
{
float x;
float y;
};
struct sampler_reduction_mode_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_reduction_mode_create_info;
const void * pnext = {};
ktl::api::sampler_reduction_mode reduction_mode;
};
struct physical_device_blend_operation_advanced_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_blend_operation_advanced_features_ext;
void * pnext = {};
ktl::api::bool32 advanced_blend_coherent_operations;
};
struct physical_device_multi_draw_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_multi_draw_features_ext;
void * pnext = {};
ktl::api::bool32 multi_draw;
};
struct physical_device_blend_operation_advanced_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_blend_operation_advanced_properties_ext;
void * pnext = {};
ktl::i32 advanced_blend_max_color_attachments;
ktl::api::bool32 advanced_blend_independent_blend;
ktl::api::bool32 advanced_blend_non_premultiplied_src_color;
ktl::api::bool32 advanced_blend_non_premultiplied_dst_color;
ktl::api::bool32 advanced_blend_correlated_overlap;
ktl::api::bool32 advanced_blend_all_operations;
};
struct pipeline_color_blend_advanced_state_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_color_blend_advanced_state_create_info_ext;
const void * pnext = {};
ktl::api::bool32 src_premultiplied;
ktl::api::bool32 dst_premultiplied;
ktl::api::blend_overlap_ext blend_overlap;
};
struct physical_device_inline_uniform_block_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_inline_uniform_block_features;
void * pnext = {};
ktl::api::bool32 inline_uniform_block;
ktl::api::bool32 descriptor_binding_inline_uniform_block_update_after_bind;
};
struct physical_device_inline_uniform_block_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_inline_uniform_block_properties;
void * pnext = {};
ktl::i32 max_inline_uniform_block_size;
ktl::i32 max_per_stage_descriptor_inline_uniform_blocks;
ktl::i32 max_per_stage_descriptor_update_after_bind_inline_uniform_blocks;
ktl::i32 max_descriptor_set_inline_uniform_blocks;
ktl::i32 max_descriptor_set_update_after_bind_inline_uniform_blocks;
};
struct write_descriptor_set_inline_uniform_block
{
ktl::api::structure_type stype = ktl::api::structure_type::v_write_descriptor_set_inline_uniform_block;
const void * pnext = {};
ktl::i32 data_size;
const void * p_data;
};
struct descriptor_pool_inline_uniform_block_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_pool_inline_uniform_block_create_info;
const void * pnext = {};
ktl::i32 max_inline_uniform_block_bindings;
};
struct pipeline_coverage_modulation_state_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_coverage_modulation_state_create_info_nv;
const void * pnext = {};
ktl::api::pipeline_coverage_modulation_state_create_flags_nv flags = {};
ktl::api::coverage_modulation_mode_nv coverage_modulation_mode;
ktl::api::bool32 coverage_modulation_table_enable;
ktl::i32 coverage_modulation_table_count = {};
const float * p_coverage_modulation_table = {};
};
struct image_format_list_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_format_list_create_info;
const void * pnext = {};
ktl::i32 view_format_count = {};
const ktl::api::format * p_view_formats;
};
struct validation_cache_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_validation_cache_create_info_ext;
const void * pnext = {};
ktl::api::validation_cache_create_flags_ext flags = {};
ktl::usize initial_data_size = {};
const void * p_initial_data;
};
struct shader_module_validation_cache_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_shader_module_validation_cache_create_info_ext;
const void * pnext = {};
ktl::api::validation_cache_ext validation_cache;
};
struct physical_device_maintenance3properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_3_properties;
void * pnext = {};
ktl::i32 max_per_set_descriptors;
ktl::api::dvsize max_memory_allocation_size;
};
struct physical_device_maintenance4features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_4_features;
void * pnext = {};
ktl::api::bool32 maintenance4;
};
struct physical_device_maintenance4properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_4_properties;
void * pnext = {};
ktl::api::dvsize max_buffer_size;
};
struct physical_device_maintenance5features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_5_features;
void * pnext = {};
ktl::api::bool32 maintenance5;
};
struct physical_device_maintenance5properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_5_properties;
void * pnext = {};
ktl::api::bool32 early_fragment_multisample_coverage_after_sample_counting;
ktl::api::bool32 early_fragment_sample_mask_test_before_sample_counting;
ktl::api::bool32 depth_stencil_swizzle_one_support;
ktl::api::bool32 polygon_mode_point_size;
ktl::api::bool32 non_strict_single_pixel_wide_lines_use_parallelogram;
ktl::api::bool32 non_strict_wide_lines_use_parallelogram;
};
struct physical_device_maintenance6features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_6_features;
void * pnext = {};
ktl::api::bool32 maintenance6;
};
struct physical_device_maintenance6properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_6_properties;
void * pnext = {};
ktl::api::bool32 block_texel_view_compatible_multiple_layers;
ktl::i32 max_combined_image_sampler_descriptor_count;
ktl::api::bool32 fragment_shading_rate_clamp_combiner_inputs;
};
struct physical_device_maintenance7features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_7_features_khr;
void * pnext = {};
ktl::api::bool32 maintenance7;
};
struct physical_device_maintenance7properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_7_properties_khr;
void * pnext = {};
ktl::api::bool32 robust_fragment_shading_rate_attachment_access;
ktl::api::bool32 separate_depth_stencil_attachment_access;
ktl::i32 max_descriptor_set_total_uniform_buffers_dynamic;
ktl::i32 max_descriptor_set_total_storage_buffers_dynamic;
ktl::i32 max_descriptor_set_total_buffers_dynamic;
ktl::i32 max_descriptor_set_update_after_bind_total_uniform_buffers_dynamic;
ktl::i32 max_descriptor_set_update_after_bind_total_storage_buffers_dynamic;
ktl::i32 max_descriptor_set_update_after_bind_total_buffers_dynamic;
};
struct physical_device_layered_api_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_layered_api_properties_khr;
void * pnext = {};
ktl::i32 vendor_id;
ktl::i32 device_id;
ktl::api::physical_device_layered_api_khr layered_api;
char device_name[KTL_API_MAX_PHYSICAL_DEVICE_NAME_SIZE];
};
struct physical_device_maintenance8features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_8_features_khr;
void * pnext = {};
ktl::api::bool32 maintenance8;
};
struct physical_device_maintenance9features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_9_features_khr;
void * pnext = {};
ktl::api::bool32 maintenance9;
};
struct physical_device_maintenance9properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_9_properties_khr;
void * pnext = {};
ktl::api::bool32 image2dview_of3dsparse;
ktl::api::default_vertex_attribute_value_khr default_vertex_attribute_value;
};
struct physical_device_maintenance10properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_10_properties_khr;
void * pnext = {};
ktl::api::bool32 rgba4opaque_black_swizzled;
ktl::api::bool32 resolve_srgb_format_applies_transfer_function;
ktl::api::bool32 resolve_srgb_format_supports_transfer_function_control;
};
struct physical_device_maintenance10features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_maintenance_10_features_khr;
void * pnext = {};
ktl::api::bool32 maintenance10;
};
struct queue_family_ownership_transfer_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_queue_family_ownership_transfer_properties_khr;
void * pnext = {};
ktl::i32 optimal_image_transfer_to_queue_families;
};
struct rendering_area_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_rendering_area_info;
const void * pnext = {};
ktl::i32 view_mask;
ktl::i32 color_attachment_count = {};
const ktl::api::format * p_color_attachment_formats;
ktl::api::format depth_attachment_format;
ktl::api::format stencil_attachment_format;
};
struct descriptor_set_layout_support
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_set_layout_support;
void * pnext = {};
ktl::api::bool32 supported;
};
struct physical_device_shader_draw_parameters_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_draw_parameters_features;
void * pnext = {};
ktl::api::bool32 shader_draw_parameters;
};
struct physical_device_shader_float16int8features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_float16_int8_features;
void * pnext = {};
ktl::api::bool32 shader_float16;
ktl::api::bool32 shader_int8;
};
struct physical_device_float_controls_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_float_controls_properties;
void * pnext = {};
ktl::api::shader_float_controls_independence denorm_behavior_independence;
ktl::api::shader_float_controls_independence rounding_mode_independence;
ktl::api::bool32 shader_signed_zero_inf_nan_preserve_float16;
ktl::api::bool32 shader_signed_zero_inf_nan_preserve_float32;
ktl::api::bool32 shader_signed_zero_inf_nan_preserve_float64;
ktl::api::bool32 shader_denorm_preserve_float16;
ktl::api::bool32 shader_denorm_preserve_float32;
ktl::api::bool32 shader_denorm_preserve_float64;
ktl::api::bool32 shader_denorm_flush_to_zero_float16;
ktl::api::bool32 shader_denorm_flush_to_zero_float32;
ktl::api::bool32 shader_denorm_flush_to_zero_float64;
ktl::api::bool32 shader_rounding_mode_rtefloat16;
ktl::api::bool32 shader_rounding_mode_rtefloat32;
ktl::api::bool32 shader_rounding_mode_rtefloat64;
ktl::api::bool32 shader_rounding_mode_rtzfloat16;
ktl::api::bool32 shader_rounding_mode_rtzfloat32;
ktl::api::bool32 shader_rounding_mode_rtzfloat64;
};
struct physical_device_host_query_reset_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_host_query_reset_features;
void * pnext = {};
ktl::api::bool32 host_query_reset;
};
struct native_buffer_usage2android
{
ktl::u64 consumer;
ktl::u64 producer;
};
struct swapchain_image_create_info_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_image_create_info_android;
const void * pnext = {};
ktl::api::swapchain_image_usage_flags_android usage;
};
struct physical_device_presentation_properties_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_presentation_properties_android;
void * pnext = {};
ktl::api::bool32 shared_image;
};
struct shader_resource_usage_amd
{
ktl::i32 num_used_vgprs;
ktl::i32 num_used_sgprs;
ktl::i32 lds_size_per_local_work_group;
ktl::usize lds_usage_size_in_bytes;
ktl::usize scratch_mem_usage_in_bytes;
};
struct device_queue_global_priority_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_queue_global_priority_create_info;
const void * pnext = {};
ktl::api::queue_global_priority global_priority;
};
struct physical_device_global_priority_query_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_global_priority_query_features;
void * pnext = {};
ktl::api::bool32 global_priority_query;
};
struct queue_family_global_priority_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_queue_family_global_priority_properties;
void * pnext = {};
ktl::i32 priority_count;
ktl::api::queue_global_priority priorities[KTL_API_MAX_GLOBAL_PRIORITY_SIZE];
};
struct debug_utils_object_name_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_debug_utils_object_name_info_ext;
const void * pnext = {};
ktl::api::object_type object_type;
ktl::u64 object_handle;
const char * p_object_name = {};
};
struct debug_utils_object_tag_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_debug_utils_object_tag_info_ext;
const void * pnext = {};
ktl::api::object_type object_type;
ktl::u64 object_handle;
ktl::u64 tag_name;
ktl::usize tag_size;
const void * p_tag;
};
struct debug_utils_label_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_debug_utils_label_ext;
const void * pnext = {};
const char * p_label_name;
float color[4];
};
struct debug_utils_messenger_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_debug_utils_messenger_create_info_ext;
const void * pnext = {};
ktl::api::debug_utils_messenger_create_flags_ext flags = {};
ktl::api::debug_utils_message_severity_flags_ext message_severity;
ktl::api::debug_utils_message_type_flags_ext message_type;
ktl::api::pfn_debug_utils_messenger_callback_ext pfn_user_callback;
void * p_user_data = {};
};
struct physical_device_device_memory_report_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_device_memory_report_features_ext;
void * pnext = {};
ktl::api::bool32 device_memory_report;
};
struct device_device_memory_report_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_device_memory_report_create_info_ext;
const void * pnext = {};
ktl::api::device_memory_report_flags_ext flags;
ktl::api::pfn_device_memory_report_callback_ext pfn_user_callback;
void * p_user_data = {};
};
struct device_memory_report_callback_data_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_memory_report_callback_data_ext;
void * pnext = {};
ktl::api::device_memory_report_flags_ext flags;
ktl::api::device_memory_report_event_type_ext type;
ktl::u64 memory_object_id;
ktl::api::dvsize size;
ktl::api::object_type object_type;
ktl::u64 object_handle;
ktl::i32 heap_index;
};
struct import_memory_host_pointer_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_memory_host_pointer_info_ext;
const void * pnext = {};
ktl::api::external_memory_handle_type_flag_bits handle_type;
void * p_host_pointer;
};
struct memory_host_pointer_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_host_pointer_properties_ext;
void * pnext = {};
ktl::i32 memory_type_bits;
};
struct physical_device_external_memory_host_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_memory_host_properties_ext;
void * pnext = {};
ktl::api::dvsize min_imported_host_pointer_alignment;
};
struct physical_device_conservative_rasterization_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_conservative_rasterization_properties_ext;
void * pnext = {};
float primitive_overestimation_size;
float max_extra_primitive_overestimation_size;
float extra_primitive_overestimation_size_granularity;
ktl::api::bool32 primitive_underestimation;
ktl::api::bool32 conservative_point_and_line_rasterization;
ktl::api::bool32 degenerate_triangles_rasterized;
ktl::api::bool32 degenerate_lines_rasterized;
ktl::api::bool32 fully_covered_fragment_shader_input_variable;
ktl::api::bool32 conservative_rasterization_post_depth_coverage;
};
struct calibrated_timestamp_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_calibrated_timestamp_info_khr;
const void * pnext = {};
ktl::api::time_domain_khr time_domain;
};
struct physical_device_shader_core_properties_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_core_properties_amd;
void * pnext = {};
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
struct physical_device_shader_core_properties2amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_core_properties_2_amd;
void * pnext = {};
ktl::api::shader_core_properties_flags_amd shader_core_features;
ktl::i32 active_compute_unit_count;
};
struct pipeline_rasterization_conservative_state_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_rasterization_conservative_state_create_info_ext;
const void * pnext = {};
ktl::api::pipeline_rasterization_conservative_state_create_flags_ext flags = {};
ktl::api::conservative_rasterization_mode_ext conservative_rasterization_mode;
float extra_primitive_overestimation_size;
};
struct physical_device_descriptor_indexing_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_indexing_features;
void * pnext = {};
ktl::api::bool32 shader_input_attachment_array_dynamic_indexing;
ktl::api::bool32 shader_uniform_texel_buffer_array_dynamic_indexing;
ktl::api::bool32 shader_storage_texel_buffer_array_dynamic_indexing;
ktl::api::bool32 shader_uniform_buffer_array_non_uniform_indexing;
ktl::api::bool32 shader_sampled_image_array_non_uniform_indexing;
ktl::api::bool32 shader_storage_buffer_array_non_uniform_indexing;
ktl::api::bool32 shader_storage_image_array_non_uniform_indexing;
ktl::api::bool32 shader_input_attachment_array_non_uniform_indexing;
ktl::api::bool32 shader_uniform_texel_buffer_array_non_uniform_indexing;
ktl::api::bool32 shader_storage_texel_buffer_array_non_uniform_indexing;
ktl::api::bool32 descriptor_binding_uniform_buffer_update_after_bind;
ktl::api::bool32 descriptor_binding_sampled_image_update_after_bind;
ktl::api::bool32 descriptor_binding_storage_image_update_after_bind;
ktl::api::bool32 descriptor_binding_storage_buffer_update_after_bind;
ktl::api::bool32 descriptor_binding_uniform_texel_buffer_update_after_bind;
ktl::api::bool32 descriptor_binding_storage_texel_buffer_update_after_bind;
ktl::api::bool32 descriptor_binding_update_unused_while_pending;
ktl::api::bool32 descriptor_binding_partially_bound;
ktl::api::bool32 descriptor_binding_variable_descriptor_count;
ktl::api::bool32 runtime_descriptor_array;
};
struct physical_device_descriptor_indexing_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_indexing_properties;
void * pnext = {};
ktl::i32 max_update_after_bind_descriptors_in_all_pools;
ktl::api::bool32 shader_uniform_buffer_array_non_uniform_indexing_native;
ktl::api::bool32 shader_sampled_image_array_non_uniform_indexing_native;
ktl::api::bool32 shader_storage_buffer_array_non_uniform_indexing_native;
ktl::api::bool32 shader_storage_image_array_non_uniform_indexing_native;
ktl::api::bool32 shader_input_attachment_array_non_uniform_indexing_native;
ktl::api::bool32 robust_buffer_access_update_after_bind;
ktl::api::bool32 quad_divergent_implicit_lod;
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
struct descriptor_set_layout_binding_flags_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_set_layout_binding_flags_create_info;
const void * pnext = {};
ktl::i32 binding_count = {};
const ktl::api::descriptor_binding_flags * p_binding_flags;
};
struct descriptor_set_variable_descriptor_count_allocate_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_set_variable_descriptor_count_allocate_info;
const void * pnext = {};
ktl::i32 descriptor_set_count = {};
const ktl::i32 * p_descriptor_counts;
};
struct descriptor_set_variable_descriptor_count_layout_support
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_set_variable_descriptor_count_layout_support;
void * pnext = {};
ktl::i32 max_variable_descriptor_count;
};
struct attachment_description2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_attachment_description_2;
const void * pnext = {};
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
struct attachment_reference2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_attachment_reference_2;
const void * pnext = {};
ktl::i32 attachment;
ktl::api::image_layout layout;
ktl::api::image_aspect_flags aspect_mask;
};
struct subpass_dependency2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_subpass_dependency_2;
const void * pnext = {};
ktl::i32 src_subpass;
ktl::i32 dst_subpass;
ktl::api::pipeline_stage_flags src_stage_mask = {};
ktl::api::pipeline_stage_flags dst_stage_mask = {};
ktl::api::access_flags src_access_mask = {};
ktl::api::access_flags dst_access_mask = {};
ktl::api::dependency_flags dependency_flags = {};
ktl::i32 view_offset;
};
struct subpass_begin_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_subpass_begin_info;
const void * pnext = {};
ktl::api::subpass_contents contents;
};
struct subpass_end_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_subpass_end_info;
const void * pnext = {};
};
struct physical_device_timeline_semaphore_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_timeline_semaphore_features;
void * pnext = {};
ktl::api::bool32 timeline_semaphore;
};
struct physical_device_timeline_semaphore_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_timeline_semaphore_properties;
void * pnext = {};
ktl::u64 max_timeline_semaphore_value_difference;
};
struct semaphore_type_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_semaphore_type_create_info;
const void * pnext = {};
ktl::api::semaphore_type semaphore_type;
ktl::u64 initial_value;
};
struct timeline_semaphore_submit_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_timeline_semaphore_submit_info;
const void * pnext = {};
ktl::i32 wait_semaphore_value_count = {};
const ktl::u64 * p_wait_semaphore_values = {};
ktl::i32 signal_semaphore_value_count = {};
const ktl::u64 * p_signal_semaphore_values = {};
};
struct semaphore_wait_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_semaphore_wait_info;
const void * pnext = {};
ktl::api::semaphore_wait_flags flags = {};
ktl::i32 semaphore_count;
const ktl::api::semaphore * p_semaphores;
const ktl::u64 * p_values;
};
struct semaphore_signal_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_semaphore_signal_info;
const void * pnext = {};
ktl::api::semaphore semaphore;
ktl::u64 value;
};
struct vertex_input_binding_divisor_description
{
ktl::i32 binding;
ktl::i32 divisor;
};
struct physical_device_vertex_attribute_divisor_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vertex_attribute_divisor_properties_ext;
void * pnext = {};
ktl::i32 max_vertex_attrib_divisor;
};
struct physical_device_vertex_attribute_divisor_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vertex_attribute_divisor_properties;
void * pnext = {};
ktl::i32 max_vertex_attrib_divisor;
ktl::api::bool32 supports_non_zero_first_instance;
};
struct physical_device_pcibus_info_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pci_bus_info_properties_ext;
void * pnext = {};
ktl::i32 pci_domain;
ktl::i32 pci_bus;
ktl::i32 pci_device;
ktl::i32 pci_function;
};
struct import_android_hardware_buffer_info_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_android_hardware_buffer_info_android;
const void * pnext = {};
AHardwareBuffer * buffer;
};
struct android_hardware_buffer_usage_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_android_hardware_buffer_usage_android;
void * pnext = {};
ktl::u64 android_hardware_buffer_usage;
};
struct android_hardware_buffer_properties_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_android_hardware_buffer_properties_android;
void * pnext = {};
ktl::api::dvsize allocation_size;
ktl::i32 memory_type_bits;
};
struct memory_get_android_hardware_buffer_info_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_get_android_hardware_buffer_info_android;
const void * pnext = {};
ktl::api::device_memory memory;
};
struct command_buffer_inheritance_conditional_rendering_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_buffer_inheritance_conditional_rendering_info_ext;
const void * pnext = {};
ktl::api::bool32 conditional_rendering_enable;
};
struct external_format_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_format_android;
void * pnext = {};
ktl::u64 external_format;
};
struct physical_device8bit_storage_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_8bit_storage_features;
void * pnext = {};
ktl::api::bool32 storage_buffer8bit_access;
ktl::api::bool32 uniform_and_storage_buffer8bit_access;
ktl::api::bool32 storage_push_constant8;
};
struct physical_device_conditional_rendering_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_conditional_rendering_features_ext;
void * pnext = {};
ktl::api::bool32 conditional_rendering;
ktl::api::bool32 inherited_conditional_rendering;
};
struct physical_device_vulkan_memory_model_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vulkan_memory_model_features;
void * pnext = {};
ktl::api::bool32 vulkan_memory_model;
ktl::api::bool32 vulkan_memory_model_device_scope;
ktl::api::bool32 vulkan_memory_model_availability_visibility_chains;
};
struct physical_device_shader_atomic_int64features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_atomic_int64_features;
void * pnext = {};
ktl::api::bool32 shader_buffer_int64atomics;
ktl::api::bool32 shader_shared_int64atomics;
};
struct physical_device_shader_atomic_float_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_atomic_float_features_ext;
void * pnext = {};
ktl::api::bool32 shader_buffer_float32atomics;
ktl::api::bool32 shader_buffer_float32atomic_add;
ktl::api::bool32 shader_buffer_float64atomics;
ktl::api::bool32 shader_buffer_float64atomic_add;
ktl::api::bool32 shader_shared_float32atomics;
ktl::api::bool32 shader_shared_float32atomic_add;
ktl::api::bool32 shader_shared_float64atomics;
ktl::api::bool32 shader_shared_float64atomic_add;
ktl::api::bool32 shader_image_float32atomics;
ktl::api::bool32 shader_image_float32atomic_add;
ktl::api::bool32 sparse_image_float32atomics;
ktl::api::bool32 sparse_image_float32atomic_add;
};
struct physical_device_shader_atomic_float2features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_atomic_float_2_features_ext;
void * pnext = {};
ktl::api::bool32 shader_buffer_float16atomics;
ktl::api::bool32 shader_buffer_float16atomic_add;
ktl::api::bool32 shader_buffer_float16atomic_min_max;
ktl::api::bool32 shader_buffer_float32atomic_min_max;
ktl::api::bool32 shader_buffer_float64atomic_min_max;
ktl::api::bool32 shader_shared_float16atomics;
ktl::api::bool32 shader_shared_float16atomic_add;
ktl::api::bool32 shader_shared_float16atomic_min_max;
ktl::api::bool32 shader_shared_float32atomic_min_max;
ktl::api::bool32 shader_shared_float64atomic_min_max;
ktl::api::bool32 shader_image_float32atomic_min_max;
ktl::api::bool32 sparse_image_float32atomic_min_max;
};
struct physical_device_vertex_attribute_divisor_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vertex_attribute_divisor_features;
void * pnext = {};
ktl::api::bool32 vertex_attribute_instance_rate_divisor;
ktl::api::bool32 vertex_attribute_instance_rate_zero_divisor;
};
struct queue_family_checkpoint_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_queue_family_checkpoint_properties_nv;
void * pnext = {};
ktl::api::pipeline_stage_flags checkpoint_execution_stage_mask;
};
struct checkpoint_data_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_checkpoint_data_nv;
void * pnext = {};
ktl::api::pipeline_stage_flag_bits stage;
void * p_checkpoint_marker;
};
struct physical_device_depth_stencil_resolve_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_depth_stencil_resolve_properties;
void * pnext = {};
ktl::api::resolve_mode_flags supported_depth_resolve_modes;
ktl::api::resolve_mode_flags supported_stencil_resolve_modes;
ktl::api::bool32 independent_resolve_none;
ktl::api::bool32 independent_resolve;
};
struct image_view_astcdecode_mode_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_view_astc_decode_mode_ext;
const void * pnext = {};
ktl::api::format decode_mode;
};
struct physical_device_astcdecode_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_astc_decode_features_ext;
void * pnext = {};
ktl::api::bool32 decode_mode_shared_exponent;
};
struct physical_device_transform_feedback_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_transform_feedback_features_ext;
void * pnext = {};
ktl::api::bool32 transform_feedback;
ktl::api::bool32 geometry_streams;
};
struct physical_device_transform_feedback_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_transform_feedback_properties_ext;
void * pnext = {};
ktl::i32 max_transform_feedback_streams;
ktl::i32 max_transform_feedback_buffers;
ktl::api::dvsize max_transform_feedback_buffer_size;
ktl::i32 max_transform_feedback_stream_data_size;
ktl::i32 max_transform_feedback_buffer_data_size;
ktl::i32 max_transform_feedback_buffer_data_stride;
ktl::api::bool32 transform_feedback_queries;
ktl::api::bool32 transform_feedback_streams_lines_triangles;
ktl::api::bool32 transform_feedback_rasterization_stream_select;
ktl::api::bool32 transform_feedback_draw;
};
struct pipeline_rasterization_state_stream_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_rasterization_state_stream_create_info_ext;
const void * pnext = {};
ktl::api::pipeline_rasterization_state_stream_create_flags_ext flags = {};
ktl::i32 rasterization_stream;
};
struct physical_device_representative_fragment_test_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_representative_fragment_test_features_nv;
void * pnext = {};
ktl::api::bool32 representative_fragment_test;
};
struct pipeline_representative_fragment_test_state_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_representative_fragment_test_state_create_info_nv;
const void * pnext = {};
ktl::api::bool32 representative_fragment_test_enable;
};
struct physical_device_exclusive_scissor_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_exclusive_scissor_features_nv;
void * pnext = {};
ktl::api::bool32 exclusive_scissor;
};
struct physical_device_corner_sampled_image_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_corner_sampled_image_features_nv;
void * pnext = {};
ktl::api::bool32 corner_sampled_image;
};
struct physical_device_compute_shader_derivatives_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_compute_shader_derivatives_features_khr;
void * pnext = {};
ktl::api::bool32 compute_derivative_group_quads;
ktl::api::bool32 compute_derivative_group_linear;
};
struct physical_device_compute_shader_derivatives_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_compute_shader_derivatives_properties_khr;
void * pnext = {};
ktl::api::bool32 mesh_and_task_shader_derivatives;
};
struct physical_device_shader_image_footprint_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_image_footprint_features_nv;
void * pnext = {};
ktl::api::bool32 image_footprint;
};
struct physical_device_dedicated_allocation_image_aliasing_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_dedicated_allocation_image_aliasing_features_nv;
void * pnext = {};
ktl::api::bool32 dedicated_allocation_image_aliasing;
};
struct physical_device_copy_memory_indirect_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_copy_memory_indirect_features_khr;
void * pnext = {};
ktl::api::bool32 indirect_memory_copy;
ktl::api::bool32 indirect_memory_to_image_copy;
};
struct physical_device_copy_memory_indirect_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_copy_memory_indirect_features_nv;
void * pnext = {};
ktl::api::bool32 indirect_copy;
};
struct physical_device_copy_memory_indirect_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_copy_memory_indirect_properties_khr;
void * pnext = {};
ktl::api::queue_flags supported_queues;
};
struct physical_device_memory_decompression_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_memory_decompression_features_ext;
void * pnext = {};
ktl::api::bool32 memory_decompression;
};
struct physical_device_memory_decompression_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_memory_decompression_properties_ext;
void * pnext = {};
ktl::api::memory_decompression_method_flags_ext decompression_methods;
ktl::u64 max_decompression_indirect_count;
};
struct shading_rate_palette_nv
{
ktl::i32 shading_rate_palette_entry_count;
const ktl::api::shading_rate_palette_entry_nv * p_shading_rate_palette_entries;
};
struct physical_device_shading_rate_image_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shading_rate_image_features_nv;
void * pnext = {};
ktl::api::bool32 shading_rate_image;
ktl::api::bool32 shading_rate_coarse_sample_order;
};
struct physical_device_invocation_mask_features_huawei
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_invocation_mask_features_huawei;
void * pnext = {};
ktl::api::bool32 invocation_mask;
};
struct coarse_sample_location_nv
{
ktl::i32 pixel_x;
ktl::i32 pixel_y;
ktl::i32 sample;
};
struct physical_device_mesh_shader_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_mesh_shader_features_nv;
void * pnext = {};
ktl::api::bool32 task_shader;
ktl::api::bool32 mesh_shader;
};
struct physical_device_mesh_shader_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_mesh_shader_properties_nv;
void * pnext = {};
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
struct draw_mesh_tasks_indirect_command_nv
{
ktl::i32 task_count;
ktl::i32 first_task;
};
struct physical_device_mesh_shader_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_mesh_shader_features_ext;
void * pnext = {};
ktl::api::bool32 task_shader;
ktl::api::bool32 mesh_shader;
ktl::api::bool32 multiview_mesh_shader;
ktl::api::bool32 primitive_fragment_shading_rate_mesh_shader;
ktl::api::bool32 mesh_shader_queries;
};
struct physical_device_mesh_shader_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_mesh_shader_properties_ext;
void * pnext = {};
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
ktl::api::bool32 prefers_local_invocation_vertex_output;
ktl::api::bool32 prefers_local_invocation_primitive_output;
ktl::api::bool32 prefers_compact_vertex_output;
ktl::api::bool32 prefers_compact_primitive_output;
};
struct draw_mesh_tasks_indirect_command_ext
{
ktl::i32 group_count_x;
ktl::i32 group_count_y;
ktl::i32 group_count_z;
};
struct ray_tracing_shader_group_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_ray_tracing_shader_group_create_info_nv;
const void * pnext = {};
ktl::api::ray_tracing_shader_group_type_khr type;
ktl::i32 general_shader;
ktl::i32 closest_hit_shader;
ktl::i32 any_hit_shader;
ktl::i32 intersection_shader;
};
struct ray_tracing_shader_group_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_ray_tracing_shader_group_create_info_khr;
const void * pnext = {};
ktl::api::ray_tracing_shader_group_type_khr type;
ktl::i32 general_shader;
ktl::i32 closest_hit_shader;
ktl::i32 any_hit_shader;
ktl::i32 intersection_shader;
const void * p_shader_group_capture_replay_handle = {};
};
struct geometry_triangles_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_geometry_triangles_nv;
const void * pnext = {};
ktl::api::buffer vertex_data = {};
ktl::api::dvsize vertex_offset;
ktl::i32 vertex_count;
ktl::api::dvsize vertex_stride;
ktl::api::format vertex_format;
ktl::api::buffer index_data = {};
ktl::api::dvsize index_offset;
ktl::i32 index_count;
ktl::api::index_type index_type;
ktl::api::buffer transform_data = {};
ktl::api::dvsize transform_offset;
};
struct geometry_aabbnv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_geometry_aabb_nv;
const void * pnext = {};
ktl::api::buffer aabb_data = {};
ktl::i32 num_aabbs;
ktl::i32 stride;
ktl::api::dvsize offset;
};
struct bind_acceleration_structure_memory_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_acceleration_structure_memory_info_nv;
const void * pnext = {};
ktl::api::acceleration_structure_nv acceleration_structure;
ktl::api::device_memory memory;
ktl::api::dvsize memory_offset;
ktl::i32 device_index_count = {};
const ktl::i32 * p_device_indices;
};
struct write_descriptor_set_acceleration_structure_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_write_descriptor_set_acceleration_structure_khr;
const void * pnext = {};
ktl::i32 acceleration_structure_count;
const ktl::api::acceleration_structure_khr * p_acceleration_structures;
};
struct write_descriptor_set_acceleration_structure_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_write_descriptor_set_acceleration_structure_nv;
const void * pnext = {};
ktl::i32 acceleration_structure_count;
const ktl::api::acceleration_structure_nv * p_acceleration_structures;
};
struct acceleration_structure_memory_requirements_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_memory_requirements_info_nv;
const void * pnext = {};
ktl::api::acceleration_structure_memory_requirements_type_nv type;
ktl::api::acceleration_structure_nv acceleration_structure;
};
struct physical_device_acceleration_structure_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_acceleration_structure_features_khr;
void * pnext = {};
ktl::api::bool32 acceleration_structure;
ktl::api::bool32 acceleration_structure_capture_replay;
ktl::api::bool32 acceleration_structure_indirect_build;
ktl::api::bool32 acceleration_structure_host_commands;
ktl::api::bool32 descriptor_binding_acceleration_structure_update_after_bind;
};
struct physical_device_ray_tracing_pipeline_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_pipeline_features_khr;
void * pnext = {};
ktl::api::bool32 ray_tracing_pipeline;
ktl::api::bool32 ray_tracing_pipeline_shader_group_handle_capture_replay;
ktl::api::bool32 ray_tracing_pipeline_shader_group_handle_capture_replay_mixed;
ktl::api::bool32 ray_tracing_pipeline_trace_rays_indirect;
ktl::api::bool32 ray_traversal_primitive_culling;
};
struct physical_device_ray_query_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_query_features_khr;
void * pnext = {};
ktl::api::bool32 ray_query;
};
struct physical_device_acceleration_structure_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_acceleration_structure_properties_khr;
void * pnext = {};
ktl::u64 max_geometry_count;
ktl::u64 max_instance_count;
ktl::u64 max_primitive_count;
ktl::i32 max_per_stage_descriptor_acceleration_structures;
ktl::i32 max_per_stage_descriptor_update_after_bind_acceleration_structures;
ktl::i32 max_descriptor_set_acceleration_structures;
ktl::i32 max_descriptor_set_update_after_bind_acceleration_structures;
ktl::i32 min_acceleration_structure_scratch_offset_alignment;
};
struct physical_device_ray_tracing_pipeline_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_pipeline_properties_khr;
void * pnext = {};
ktl::i32 shader_group_handle_size;
ktl::i32 max_ray_recursion_depth;
ktl::i32 max_shader_group_stride;
ktl::i32 shader_group_base_alignment;
ktl::i32 shader_group_handle_capture_replay_size;
ktl::i32 max_ray_dispatch_invocation_count;
ktl::i32 shader_group_handle_alignment;
ktl::i32 max_ray_hit_attribute_size;
};
struct physical_device_ray_tracing_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_properties_nv;
void * pnext = {};
ktl::i32 shader_group_handle_size;
ktl::i32 max_recursion_depth;
ktl::i32 max_shader_group_stride;
ktl::i32 shader_group_base_alignment;
ktl::u64 max_geometry_count;
ktl::u64 max_instance_count;
ktl::u64 max_triangle_count;
ktl::i32 max_descriptor_set_acceleration_structures;
};
struct strided_device_address_region_khr
{
ktl::api::dvaddr device_address = {};
ktl::api::dvsize stride;
ktl::api::dvsize size;
};
struct trace_rays_indirect_command_khr
{
ktl::i32 width;
ktl::i32 height;
ktl::i32 depth;
};
struct trace_rays_indirect_command2khr
{
ktl::api::dvaddr raygen_shader_record_address;
ktl::api::dvsize raygen_shader_record_size;
ktl::api::dvaddr miss_shader_binding_table_address;
ktl::api::dvsize miss_shader_binding_table_size;
ktl::api::dvsize miss_shader_binding_table_stride;
ktl::api::dvaddr hit_shader_binding_table_address;
ktl::api::dvsize hit_shader_binding_table_size;
ktl::api::dvsize hit_shader_binding_table_stride;
ktl::api::dvaddr callable_shader_binding_table_address;
ktl::api::dvsize callable_shader_binding_table_size;
ktl::api::dvsize callable_shader_binding_table_stride;
ktl::i32 width;
ktl::i32 height;
ktl::i32 depth;
};
struct physical_device_ray_tracing_maintenance1features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_maintenance_1_features_khr;
void * pnext = {};
ktl::api::bool32 ray_tracing_maintenance1;
ktl::api::bool32 ray_tracing_pipeline_trace_rays_indirect2;
};
struct drm_format_modifier_properties_ext
{
ktl::u64 drm_format_modifier;
ktl::i32 drm_format_modifier_plane_count;
ktl::api::format_feature_flags drm_format_modifier_tiling_features;
};
struct physical_device_image_drm_format_modifier_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_drm_format_modifier_info_ext;
const void * pnext = {};
ktl::u64 drm_format_modifier;
ktl::api::sharing_mode sharing_mode;
ktl::i32 queue_family_index_count = {};
const ktl::i32 * p_queue_family_indices;
};
struct image_drm_format_modifier_list_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_drm_format_modifier_list_create_info_ext;
const void * pnext = {};
ktl::i32 drm_format_modifier_count;
const ktl::u64 * p_drm_format_modifiers;
};
struct image_drm_format_modifier_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_drm_format_modifier_properties_ext;
void * pnext = {};
ktl::u64 drm_format_modifier;
};
struct image_stencil_usage_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_stencil_usage_create_info;
const void * pnext = {};
ktl::api::image_usage_flags stencil_usage;
};
struct device_memory_overallocation_create_info_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_memory_overallocation_create_info_amd;
const void * pnext = {};
ktl::api::memory_overallocation_behavior_amd overallocation_behavior;
};
struct physical_device_fragment_density_map_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_density_map_features_ext;
void * pnext = {};
ktl::api::bool32 fragment_density_map;
ktl::api::bool32 fragment_density_map_dynamic;
ktl::api::bool32 fragment_density_map_non_subsampled_images;
};
struct physical_device_fragment_density_map2features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_density_map_2_features_ext;
void * pnext = {};
ktl::api::bool32 fragment_density_map_deferred;
};
struct physical_device_fragment_density_map_offset_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_density_map_offset_features_ext;
void * pnext = {};
ktl::api::bool32 fragment_density_map_offset;
};
struct physical_device_fragment_density_map2properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_density_map_2_properties_ext;
void * pnext = {};
ktl::api::bool32 subsampled_loads;
const ktl::api::bool32 subsampled_coarse_reconstruction_early_access;
ktl::i32 max_subsampled_array_layers;
ktl::i32 max_descriptor_set_subsampled_samplers;
};
struct physical_device_scalar_block_layout_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_scalar_block_layout_features;
void * pnext = {};
ktl::api::bool32 scalar_block_layout;
};
struct surface_protected_capabilities_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_protected_capabilities_khr;
void * pnext = {};
ktl::api::bool32 supports_protected;
};
struct physical_device_uniform_buffer_standard_layout_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_uniform_buffer_standard_layout_features;
void * pnext = {};
ktl::api::bool32 uniform_buffer_standard_layout;
};
struct physical_device_depth_clip_enable_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_depth_clip_enable_features_ext;
void * pnext = {};
ktl::api::bool32 depth_clip_enable;
};
struct pipeline_rasterization_depth_clip_state_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_rasterization_depth_clip_state_create_info_ext;
const void * pnext = {};
ktl::api::pipeline_rasterization_depth_clip_state_create_flags_ext flags = {};
ktl::api::bool32 depth_clip_enable;
};
struct physical_device_memory_budget_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_memory_budget_properties_ext;
void * pnext = {};
ktl::api::dvsize heap_budget[KTL_API_MAX_MEMORY_HEAPS];
ktl::api::dvsize heap_usage[KTL_API_MAX_MEMORY_HEAPS];
};
struct physical_device_memory_priority_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_memory_priority_features_ext;
void * pnext = {};
ktl::api::bool32 memory_priority;
};
struct memory_priority_allocate_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_priority_allocate_info_ext;
const void * pnext = {};
float priority;
};
struct physical_device_pageable_device_local_memory_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pageable_device_local_memory_features_ext;
void * pnext = {};
ktl::api::bool32 pageable_device_local_memory;
};
struct physical_device_buffer_device_address_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_buffer_device_address_features;
void * pnext = {};
ktl::api::bool32 buffer_device_address;
ktl::api::bool32 buffer_device_address_capture_replay;
ktl::api::bool32 buffer_device_address_multi_device;
};
struct physical_device_buffer_device_address_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_buffer_device_address_features_ext;
void * pnext = {};
ktl::api::bool32 buffer_device_address;
ktl::api::bool32 buffer_device_address_capture_replay;
ktl::api::bool32 buffer_device_address_multi_device;
};
struct buffer_device_address_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_device_address_info;
const void * pnext = {};
ktl::api::buffer buffer;
};
struct buffer_opaque_capture_address_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_opaque_capture_address_create_info;
const void * pnext = {};
ktl::u64 opaque_capture_address;
};
struct buffer_device_address_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_device_address_create_info_ext;
const void * pnext = {};
ktl::api::dvaddr device_address = {};
};
struct physical_device_image_view_image_format_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_view_image_format_info_ext;
void * pnext = {};
ktl::api::image_view_type image_view_type;
};
struct filter_cubic_image_view_image_format_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_filter_cubic_image_view_image_format_properties_ext;
void * pnext = {};
ktl::api::bool32 filter_cubic;
ktl::api::bool32 filter_cubic_minmax;
};
struct physical_device_imageless_framebuffer_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_imageless_framebuffer_features;
void * pnext = {};
ktl::api::bool32 imageless_framebuffer;
};
struct framebuffer_attachment_image_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_framebuffer_attachment_image_info;
const void * pnext = {};
ktl::api::image_create_flags flags = {};
ktl::api::image_usage_flags usage;
ktl::i32 width;
ktl::i32 height;
ktl::i32 layer_count;
ktl::i32 view_format_count = {};
const ktl::api::format * p_view_formats;
};
struct render_pass_attachment_begin_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_attachment_begin_info;
const void * pnext = {};
ktl::i32 attachment_count = {};
const ktl::api::image_view * p_attachments;
};
struct physical_device_texture_compression_astchdrfeatures
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_texture_compression_astc_hdr_features;
void * pnext = {};
ktl::api::bool32 texture_compression_astc__hdr;
};
struct physical_device_cooperative_matrix_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cooperative_matrix_features_nv;
void * pnext = {};
ktl::api::bool32 cooperative_matrix;
ktl::api::bool32 cooperative_matrix_robust_buffer_access;
};
struct physical_device_cooperative_matrix_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cooperative_matrix_properties_nv;
void * pnext = {};
ktl::api::shader_stage_flags cooperative_matrix_supported_stages;
};
struct cooperative_matrix_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cooperative_matrix_properties_nv;
void * pnext = {};
ktl::i32 msize;
ktl::i32 nsize;
ktl::i32 ksize;
ktl::api::component_type_nv atype;
ktl::api::component_type_nv btype;
ktl::api::component_type_nv ctype;
ktl::api::component_type_nv dtype;
ktl::api::scope_nv scope;
};
struct physical_device_ycbcr_image_arrays_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ycbcr_image_arrays_features_ext;
void * pnext = {};
ktl::api::bool32 ycbcr_image_arrays;
};
struct image_view_handle_info_nvx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_view_handle_info_nvx;
const void * pnext = {};
ktl::api::image_view image_view;
ktl::api::descriptor_type descriptor_type;
ktl::api::sampler sampler = {};
};
struct image_view_address_properties_nvx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_view_address_properties_nvx;
void * pnext = {};
ktl::api::dvaddr device_address;
ktl::api::dvsize size;
};
struct present_frame_token_ggp
{
ktl::api::structure_type stype = ktl::api::structure_type::v_present_frame_token_ggp;
const void * pnext = {};
GgpFrameToken frame_token;
};
struct pipeline_creation_feedback
{
ktl::api::pipeline_creation_feedback_flags flags;
ktl::u64 duration;
};
struct surface_full_screen_exclusive_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_full_screen_exclusive_info_ext;
void * pnext = {};
ktl::api::full_screen_exclusive_ext full_screen_exclusive;
};
struct surface_full_screen_exclusive_win32info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_full_screen_exclusive_win32_info_ext;
const void * pnext = {};
HMONITOR hmonitor;
};
struct surface_capabilities_full_screen_exclusive_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_capabilities_full_screen_exclusive_ext;
void * pnext = {};
ktl::api::bool32 full_screen_exclusive_supported;
};
struct physical_device_present_barrier_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_present_barrier_features_nv;
void * pnext = {};
ktl::api::bool32 present_barrier;
};
struct surface_capabilities_present_barrier_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_capabilities_present_barrier_nv;
void * pnext = {};
ktl::api::bool32 present_barrier_supported;
};
struct swapchain_present_barrier_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_present_barrier_create_info_nv;
void * pnext = {};
ktl::api::bool32 present_barrier_enable;
};
struct physical_device_performance_query_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_performance_query_features_khr;
void * pnext = {};
ktl::api::bool32 performance_counter_query_pools;
ktl::api::bool32 performance_counter_multiple_query_pools;
};
struct physical_device_performance_query_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_performance_query_properties_khr;
void * pnext = {};
ktl::api::bool32 allow_command_buffer_query_copies;
};
struct performance_counter_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_performance_counter_khr;
void * pnext = {};
ktl::api::performance_counter_unit_khr unit;
ktl::api::performance_counter_scope_khr scope;
ktl::api::performance_counter_storage_khr storage;
ktl::u8 uuid[KTL_API_UUID_SIZE];
};
struct performance_counter_description_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_performance_counter_description_khr;
void * pnext = {};
ktl::api::performance_counter_description_flags_khr flags = {};
char name[KTL_API_MAX_DESCRIPTION_SIZE];
char category[KTL_API_MAX_DESCRIPTION_SIZE];
char description[KTL_API_MAX_DESCRIPTION_SIZE];
};
struct query_pool_performance_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_query_pool_performance_create_info_khr;
const void * pnext = {};
ktl::i32 queue_family_index;
ktl::i32 counter_index_count;
const ktl::i32 * p_counter_indices;
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
struct acquire_profiling_lock_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acquire_profiling_lock_info_khr;
const void * pnext = {};
ktl::api::acquire_profiling_lock_flags_khr flags = {};
ktl::u64 timeout;
};
struct performance_query_submit_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_performance_query_submit_info_khr;
const void * pnext = {};
ktl::i32 counter_pass_index;
};
struct performance_query_reservation_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_performance_query_reservation_info_khr;
const void * pnext = {};
ktl::i32 max_performance_queries_per_pool;
};
struct headless_surface_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_headless_surface_create_info_ext;
const void * pnext = {};
ktl::api::headless_surface_create_flags_ext flags = {};
};
struct physical_device_coverage_reduction_mode_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_coverage_reduction_mode_features_nv;
void * pnext = {};
ktl::api::bool32 coverage_reduction_mode;
};
struct pipeline_coverage_reduction_state_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_coverage_reduction_state_create_info_nv;
const void * pnext = {};
ktl::api::pipeline_coverage_reduction_state_create_flags_nv flags = {};
ktl::api::coverage_reduction_mode_nv coverage_reduction_mode;
};
struct framebuffer_mixed_samples_combination_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_framebuffer_mixed_samples_combination_nv;
void * pnext = {};
ktl::api::coverage_reduction_mode_nv coverage_reduction_mode;
ktl::api::sample_count_flag_bits rasterization_samples;
ktl::api::sample_count_flags depth_stencil_samples;
ktl::api::sample_count_flags color_samples;
};
struct physical_device_shader_integer_functions2features_intel
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_integer_functions_2_features_intel;
void * pnext = {};
ktl::api::bool32 shader_integer_functions2;
};
union performance_value_data_intel
{
ktl::i32 value32;
ktl::u64 value64;
float value_float;
ktl::api::bool32 value_bool;
char * value_string;
};
struct initialize_performance_api_info_intel
{
ktl::api::structure_type stype = ktl::api::structure_type::v_initialize_performance_api_info_intel;
const void * pnext = {};
void * p_user_data = {};
};
struct query_pool_performance_query_create_info_intel
{
ktl::api::structure_type stype = ktl::api::structure_type::v_query_pool_performance_query_create_info_intel;
const void * pnext = {};
ktl::api::query_pool_sampling_mode_intel performance_counters_sampling;
};
struct performance_marker_info_intel
{
ktl::api::structure_type stype = ktl::api::structure_type::v_performance_marker_info_intel;
const void * pnext = {};
ktl::u64 marker;
};
struct performance_stream_marker_info_intel
{
ktl::api::structure_type stype = ktl::api::structure_type::v_performance_stream_marker_info_intel;
const void * pnext = {};
ktl::i32 marker;
};
struct performance_override_info_intel
{
ktl::api::structure_type stype = ktl::api::structure_type::v_performance_override_info_intel;
const void * pnext = {};
ktl::api::performance_override_type_intel type;
ktl::api::bool32 enable;
ktl::u64 parameter;
};
struct performance_configuration_acquire_info_intel
{
ktl::api::structure_type stype = ktl::api::structure_type::v_performance_configuration_acquire_info_intel;
const void * pnext = {};
ktl::api::performance_configuration_type_intel type;
};
struct physical_device_shader_clock_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_clock_features_khr;
void * pnext = {};
ktl::api::bool32 shader_subgroup_clock;
ktl::api::bool32 shader_device_clock;
};
struct physical_device_index_type_uint8features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_index_type_uint8_features;
void * pnext = {};
ktl::api::bool32 index_type_uint8;
};
struct physical_device_shader_smbuiltins_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_sm_builtins_properties_nv;
void * pnext = {};
ktl::i32 shader_smcount;
ktl::i32 shader_warps_per_sm;
};
struct physical_device_shader_smbuiltins_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_sm_builtins_features_nv;
void * pnext = {};
ktl::api::bool32 shader_smbuiltins;
};
struct physical_device_fragment_shader_interlock_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_shader_interlock_features_ext;
void * pnext = {};
ktl::api::bool32 fragment_shader_sample_interlock;
ktl::api::bool32 fragment_shader_pixel_interlock;
ktl::api::bool32 fragment_shader_shading_rate_interlock;
};
struct physical_device_separate_depth_stencil_layouts_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_separate_depth_stencil_layouts_features;
void * pnext = {};
ktl::api::bool32 separate_depth_stencil_layouts;
};
struct attachment_reference_stencil_layout
{
ktl::api::structure_type stype = ktl::api::structure_type::v_attachment_reference_stencil_layout;
void * pnext = {};
ktl::api::image_layout stencil_layout;
};
struct physical_device_primitive_topology_list_restart_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_primitive_topology_list_restart_features_ext;
void * pnext = {};
ktl::api::bool32 primitive_topology_list_restart;
ktl::api::bool32 primitive_topology_patch_list_restart;
};
struct attachment_description_stencil_layout
{
ktl::api::structure_type stype = ktl::api::structure_type::v_attachment_description_stencil_layout;
void * pnext = {};
ktl::api::image_layout stencil_initial_layout;
ktl::api::image_layout stencil_final_layout;
};
struct physical_device_pipeline_executable_properties_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pipeline_executable_properties_features_khr;
void * pnext = {};
ktl::api::bool32 pipeline_executable_info;
};
struct pipeline_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_info_khr;
const void * pnext = {};
ktl::api::pipeline pipeline;
};
struct pipeline_executable_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_executable_properties_khr;
void * pnext = {};
ktl::api::shader_stage_flags stages;
char name[KTL_API_MAX_DESCRIPTION_SIZE];
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::i32 subgroup_size;
};
struct pipeline_executable_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_executable_info_khr;
const void * pnext = {};
ktl::api::pipeline pipeline;
ktl::i32 executable_index;
};
union pipeline_executable_statistic_value_khr
{
ktl::api::bool32 b32;
ktl::i64 i64;
ktl::u64 u64;
double f64;
};
struct pipeline_executable_internal_representation_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_executable_internal_representation_khr;
void * pnext = {};
char name[KTL_API_MAX_DESCRIPTION_SIZE];
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::api::bool32 is_text;
ktl::usize data_size;
void * p_data = {};
};
struct physical_device_shader_demote_to_helper_invocation_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_demote_to_helper_invocation_features;
void * pnext = {};
ktl::api::bool32 shader_demote_to_helper_invocation;
};
struct physical_device_texel_buffer_alignment_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_texel_buffer_alignment_features_ext;
void * pnext = {};
ktl::api::bool32 texel_buffer_alignment;
};
struct physical_device_texel_buffer_alignment_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_texel_buffer_alignment_properties;
void * pnext = {};
ktl::api::dvsize storage_texel_buffer_offset_alignment_bytes;
ktl::api::bool32 storage_texel_buffer_offset_single_texel_alignment;
ktl::api::dvsize uniform_texel_buffer_offset_alignment_bytes;
ktl::api::bool32 uniform_texel_buffer_offset_single_texel_alignment;
};
struct physical_device_subgroup_size_control_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_subgroup_size_control_features;
void * pnext = {};
ktl::api::bool32 subgroup_size_control;
ktl::api::bool32 compute_full_subgroups;
};
struct physical_device_subgroup_size_control_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_subgroup_size_control_properties;
void * pnext = {};
ktl::i32 min_subgroup_size;
ktl::i32 max_subgroup_size;
ktl::i32 max_compute_workgroup_subgroups;
ktl::api::shader_stage_flags required_subgroup_size_stages;
};
struct pipeline_shader_stage_required_subgroup_size_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_shader_stage_required_subgroup_size_create_info;
const void * pnext = {};
ktl::i32 required_subgroup_size;
};
struct subpass_shading_pipeline_create_info_huawei
{
ktl::api::structure_type stype = ktl::api::structure_type::v_subpass_shading_pipeline_create_info_huawei;
void * pnext = {};
ktl::api::render_pass render_pass;
ktl::i32 subpass;
};
struct physical_device_subpass_shading_properties_huawei
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_subpass_shading_properties_huawei;
void * pnext = {};
ktl::i32 max_subpass_shading_workgroup_size_aspect_ratio;
};
struct physical_device_cluster_culling_shader_properties_huawei
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cluster_culling_shader_properties_huawei;
void * pnext = {};
ktl::i32 max_work_group_count[3];
ktl::i32 max_work_group_size[3];
ktl::i32 max_output_cluster_count;
ktl::api::dvsize indirect_buffer_offset_alignment;
};
struct memory_opaque_capture_address_allocate_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_opaque_capture_address_allocate_info;
const void * pnext = {};
ktl::u64 opaque_capture_address;
};
struct device_memory_opaque_capture_address_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_memory_opaque_capture_address_info;
const void * pnext = {};
ktl::api::device_memory memory;
};
struct physical_device_line_rasterization_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_line_rasterization_features;
void * pnext = {};
ktl::api::bool32 rectangular_lines;
ktl::api::bool32 bresenham_lines;
ktl::api::bool32 smooth_lines;
ktl::api::bool32 stippled_rectangular_lines;
ktl::api::bool32 stippled_bresenham_lines;
ktl::api::bool32 stippled_smooth_lines;
};
struct physical_device_line_rasterization_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_line_rasterization_properties;
void * pnext = {};
ktl::i32 line_sub_pixel_precision_bits;
};
struct pipeline_rasterization_line_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_rasterization_line_state_create_info;
const void * pnext = {};
ktl::api::line_rasterization_mode line_rasterization_mode;
ktl::api::bool32 stippled_line_enable;
ktl::i32 line_stipple_factor;
ktl::u16 line_stipple_pattern;
};
struct physical_device_pipeline_creation_cache_control_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pipeline_creation_cache_control_features;
void * pnext = {};
ktl::api::bool32 pipeline_creation_cache_control;
};
struct physical_device_vulkan11features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vulkan_1_1_features;
void * pnext = {};
ktl::api::bool32 storage_buffer16bit_access;
ktl::api::bool32 uniform_and_storage_buffer16bit_access;
ktl::api::bool32 storage_push_constant16;
ktl::api::bool32 storage_input_output16;
ktl::api::bool32 multiview;
ktl::api::bool32 multiview_geometry_shader;
ktl::api::bool32 multiview_tessellation_shader;
ktl::api::bool32 variable_pointers_storage_buffer;
ktl::api::bool32 variable_pointers;
ktl::api::bool32 protected_memory;
ktl::api::bool32 sampler_ycbcr_conversion;
ktl::api::bool32 shader_draw_parameters;
};
struct physical_device_vulkan11properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vulkan_1_1_properties;
void * pnext = {};
ktl::u8 device_uuid[KTL_API_UUID_SIZE];
ktl::u8 driver_uuid[KTL_API_UUID_SIZE];
ktl::u8 device_luid[KTL_API_LUID_SIZE];
ktl::i32 device_node_mask;
ktl::api::bool32 device_luidvalid;
ktl::i32 subgroup_size;
ktl::api::shader_stage_flags subgroup_supported_stages;
ktl::api::subgroup_feature_flags subgroup_supported_operations;
ktl::api::bool32 subgroup_quad_operations_in_all_stages;
ktl::api::point_clipping_behavior point_clipping_behavior;
ktl::i32 max_multiview_view_count;
ktl::i32 max_multiview_instance_index;
ktl::api::bool32 protected_no_fault;
ktl::i32 max_per_set_descriptors;
ktl::api::dvsize max_memory_allocation_size;
};
struct physical_device_vulkan12features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vulkan_1_2_features;
void * pnext = {};
ktl::api::bool32 sampler_mirror_clamp_to_edge;
ktl::api::bool32 draw_indirect_count;
ktl::api::bool32 storage_buffer8bit_access;
ktl::api::bool32 uniform_and_storage_buffer8bit_access;
ktl::api::bool32 storage_push_constant8;
ktl::api::bool32 shader_buffer_int64atomics;
ktl::api::bool32 shader_shared_int64atomics;
ktl::api::bool32 shader_float16;
ktl::api::bool32 shader_int8;
ktl::api::bool32 descriptor_indexing;
ktl::api::bool32 shader_input_attachment_array_dynamic_indexing;
ktl::api::bool32 shader_uniform_texel_buffer_array_dynamic_indexing;
ktl::api::bool32 shader_storage_texel_buffer_array_dynamic_indexing;
ktl::api::bool32 shader_uniform_buffer_array_non_uniform_indexing;
ktl::api::bool32 shader_sampled_image_array_non_uniform_indexing;
ktl::api::bool32 shader_storage_buffer_array_non_uniform_indexing;
ktl::api::bool32 shader_storage_image_array_non_uniform_indexing;
ktl::api::bool32 shader_input_attachment_array_non_uniform_indexing;
ktl::api::bool32 shader_uniform_texel_buffer_array_non_uniform_indexing;
ktl::api::bool32 shader_storage_texel_buffer_array_non_uniform_indexing;
ktl::api::bool32 descriptor_binding_uniform_buffer_update_after_bind;
ktl::api::bool32 descriptor_binding_sampled_image_update_after_bind;
ktl::api::bool32 descriptor_binding_storage_image_update_after_bind;
ktl::api::bool32 descriptor_binding_storage_buffer_update_after_bind;
ktl::api::bool32 descriptor_binding_uniform_texel_buffer_update_after_bind;
ktl::api::bool32 descriptor_binding_storage_texel_buffer_update_after_bind;
ktl::api::bool32 descriptor_binding_update_unused_while_pending;
ktl::api::bool32 descriptor_binding_partially_bound;
ktl::api::bool32 descriptor_binding_variable_descriptor_count;
ktl::api::bool32 runtime_descriptor_array;
ktl::api::bool32 sampler_filter_minmax;
ktl::api::bool32 scalar_block_layout;
ktl::api::bool32 imageless_framebuffer;
ktl::api::bool32 uniform_buffer_standard_layout;
ktl::api::bool32 shader_subgroup_extended_types;
ktl::api::bool32 separate_depth_stencil_layouts;
ktl::api::bool32 host_query_reset;
ktl::api::bool32 timeline_semaphore;
ktl::api::bool32 buffer_device_address;
ktl::api::bool32 buffer_device_address_capture_replay;
ktl::api::bool32 buffer_device_address_multi_device;
ktl::api::bool32 vulkan_memory_model;
ktl::api::bool32 vulkan_memory_model_device_scope;
ktl::api::bool32 vulkan_memory_model_availability_visibility_chains;
ktl::api::bool32 shader_output_viewport_index;
ktl::api::bool32 shader_output_layer;
ktl::api::bool32 subgroup_broadcast_dynamic_id;
};
struct physical_device_vulkan13features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vulkan_1_3_features;
void * pnext = {};
ktl::api::bool32 robust_image_access;
ktl::api::bool32 inline_uniform_block;
ktl::api::bool32 descriptor_binding_inline_uniform_block_update_after_bind;
ktl::api::bool32 pipeline_creation_cache_control;
ktl::api::bool32 private_data;
ktl::api::bool32 shader_demote_to_helper_invocation;
ktl::api::bool32 shader_terminate_invocation;
ktl::api::bool32 subgroup_size_control;
ktl::api::bool32 compute_full_subgroups;
ktl::api::bool32 synchronization2;
ktl::api::bool32 texture_compression_astc__hdr;
ktl::api::bool32 shader_zero_initialize_workgroup_memory;
ktl::api::bool32 dynamic_rendering;
ktl::api::bool32 shader_integer_dot_product;
ktl::api::bool32 maintenance4;
};
struct physical_device_vulkan13properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vulkan_1_3_properties;
void * pnext = {};
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
ktl::api::bool32 integer_dot_product8bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product8bit_signed_accelerated;
ktl::api::bool32 integer_dot_product8bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product4x8bit_packed_unsigned_accelerated;
ktl::api::bool32 integer_dot_product4x8bit_packed_signed_accelerated;
ktl::api::bool32 integer_dot_product4x8bit_packed_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product16bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product16bit_signed_accelerated;
ktl::api::bool32 integer_dot_product16bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product32bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product32bit_signed_accelerated;
ktl::api::bool32 integer_dot_product32bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product64bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product64bit_signed_accelerated;
ktl::api::bool32 integer_dot_product64bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating8bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating8bit_signed_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating16bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating16bit_signed_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating32bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating32bit_signed_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating64bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating64bit_signed_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated;
ktl::api::dvsize storage_texel_buffer_offset_alignment_bytes;
ktl::api::bool32 storage_texel_buffer_offset_single_texel_alignment;
ktl::api::dvsize uniform_texel_buffer_offset_alignment_bytes;
ktl::api::bool32 uniform_texel_buffer_offset_single_texel_alignment;
ktl::api::dvsize max_buffer_size;
};
struct physical_device_vulkan14features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vulkan_1_4_features;
void * pnext = {};
ktl::api::bool32 global_priority_query;
ktl::api::bool32 shader_subgroup_rotate;
ktl::api::bool32 shader_subgroup_rotate_clustered;
ktl::api::bool32 shader_float_controls2;
ktl::api::bool32 shader_expect_assume;
ktl::api::bool32 rectangular_lines;
ktl::api::bool32 bresenham_lines;
ktl::api::bool32 smooth_lines;
ktl::api::bool32 stippled_rectangular_lines;
ktl::api::bool32 stippled_bresenham_lines;
ktl::api::bool32 stippled_smooth_lines;
ktl::api::bool32 vertex_attribute_instance_rate_divisor;
ktl::api::bool32 vertex_attribute_instance_rate_zero_divisor;
ktl::api::bool32 index_type_uint8;
ktl::api::bool32 dynamic_rendering_local_read;
ktl::api::bool32 maintenance5;
ktl::api::bool32 maintenance6;
ktl::api::bool32 pipeline_protected_access;
ktl::api::bool32 pipeline_robustness;
ktl::api::bool32 host_image_copy;
ktl::api::bool32 push_descriptor;
};
struct physical_device_vulkan14properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vulkan_1_4_properties;
void * pnext = {};
ktl::i32 line_sub_pixel_precision_bits;
ktl::i32 max_vertex_attrib_divisor;
ktl::api::bool32 supports_non_zero_first_instance;
ktl::i32 max_push_descriptors;
ktl::api::bool32 dynamic_rendering_local_read_depth_stencil_attachments;
ktl::api::bool32 dynamic_rendering_local_read_multisampled_attachments;
ktl::api::bool32 early_fragment_multisample_coverage_after_sample_counting;
ktl::api::bool32 early_fragment_sample_mask_test_before_sample_counting;
ktl::api::bool32 depth_stencil_swizzle_one_support;
ktl::api::bool32 polygon_mode_point_size;
ktl::api::bool32 non_strict_single_pixel_wide_lines_use_parallelogram;
ktl::api::bool32 non_strict_wide_lines_use_parallelogram;
ktl::api::bool32 block_texel_view_compatible_multiple_layers;
ktl::i32 max_combined_image_sampler_descriptor_count;
ktl::api::bool32 fragment_shading_rate_clamp_combiner_inputs;
ktl::api::pipeline_robustness_buffer_behavior default_robustness_storage_buffers;
ktl::api::pipeline_robustness_buffer_behavior default_robustness_uniform_buffers;
ktl::api::pipeline_robustness_buffer_behavior default_robustness_vertex_inputs;
ktl::api::pipeline_robustness_image_behavior default_robustness_images;
ktl::i32 copy_src_layout_count = {};
ktl::api::image_layout * p_copy_src_layouts = {};
ktl::i32 copy_dst_layout_count = {};
ktl::api::image_layout * p_copy_dst_layouts = {};
ktl::u8 optimal_tiling_layout_uuid[KTL_API_UUID_SIZE] = {};
ktl::api::bool32 identical_memory_type_requirements;
};
struct pipeline_compiler_control_create_info_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_compiler_control_create_info_amd;
const void * pnext = {};
ktl::api::pipeline_compiler_control_flags_amd compiler_control_flags = {};
};
struct physical_device_coherent_memory_features_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_coherent_memory_features_amd;
void * pnext = {};
ktl::api::bool32 device_coherent_memory;
};
struct fault_data
{
ktl::api::structure_type stype = ktl::api::structure_type::v_fault_data;
void * pnext = {};
ktl::api::fault_level fault_level;
ktl::api::fault_type fault_type;
};
struct physical_device_tool_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_tool_properties;
void * pnext = {};
char name[KTL_API_MAX_EXTENSION_NAME_SIZE];
char version[KTL_API_MAX_EXTENSION_NAME_SIZE];
ktl::api::tool_purpose_flags purposes;
char description[KTL_API_MAX_DESCRIPTION_SIZE];
char layer[KTL_API_MAX_EXTENSION_NAME_SIZE];
};
struct physical_device_custom_border_color_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_custom_border_color_properties_ext;
void * pnext = {};
ktl::i32 max_custom_border_color_samplers;
};
struct physical_device_custom_border_color_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_custom_border_color_features_ext;
void * pnext = {};
ktl::api::bool32 custom_border_colors;
ktl::api::bool32 custom_border_color_without_format;
};
struct physical_device_border_color_swizzle_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_border_color_swizzle_features_ext;
void * pnext = {};
ktl::api::bool32 border_color_swizzle;
ktl::api::bool32 border_color_swizzle_from_image;
};
union device_or_host_address_khr
{
ktl::api::dvaddr device_address;
void * host_address;
};
union device_or_host_address_const_khr
{
ktl::api::dvaddr device_address;
void * host_address;
};
union device_or_host_address_const_amdx
{
ktl::api::dvaddr device_address;
void * host_address;
};
struct acceleration_structure_build_range_info_khr
{
ktl::i32 primitive_count;
ktl::i32 primitive_offset;
ktl::i32 first_vertex;
ktl::i32 transform_offset;
};
struct acceleration_structure_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_create_info_khr;
const void * pnext = {};
ktl::api::acceleration_structure_create_flags_khr create_flags = {};
ktl::api::buffer buffer;
ktl::api::dvsize offset;
ktl::api::dvsize size;
ktl::api::acceleration_structure_type_khr type;
ktl::api::dvaddr device_address = {};
};
struct aabb_positions_khr
{
float min_x;
float min_y;
float min_z;
float max_x;
float max_y;
float max_z;
};
struct transform_matrix_khr
{
float matrix[3];
};
struct acceleration_structure_device_address_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_device_address_info_khr;
const void * pnext = {};
ktl::api::acceleration_structure_khr acceleration_structure;
};
struct acceleration_structure_version_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_version_info_khr;
const void * pnext = {};
const ktl::u8 * p_version_data;
};
struct copy_acceleration_structure_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_acceleration_structure_info_khr;
const void * pnext = {};
ktl::api::acceleration_structure_khr src;
ktl::api::acceleration_structure_khr dst;
ktl::api::copy_acceleration_structure_mode_khr mode;
};
struct ray_tracing_pipeline_interface_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_ray_tracing_pipeline_interface_create_info_khr;
const void * pnext = {};
ktl::i32 max_pipeline_ray_payload_size;
ktl::i32 max_pipeline_ray_hit_attribute_size;
};
struct pipeline_library_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_library_create_info_khr;
const void * pnext = {};
ktl::i32 library_count = {};
const ktl::api::pipeline * p_libraries;
};
struct refresh_object_khr
{
ktl::api::object_type object_type;
ktl::u64 object_handle;
ktl::api::refresh_object_flags_khr flags = {};
};
struct physical_device_extended_dynamic_state_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_extended_dynamic_state_features_ext;
void * pnext = {};
ktl::api::bool32 extended_dynamic_state;
};
struct physical_device_extended_dynamic_state2features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_extended_dynamic_state_2_features_ext;
void * pnext = {};
ktl::api::bool32 extended_dynamic_state2;
ktl::api::bool32 extended_dynamic_state2logic_op;
ktl::api::bool32 extended_dynamic_state2patch_control_points;
};
struct physical_device_extended_dynamic_state3features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_extended_dynamic_state_3_features_ext;
void * pnext = {};
ktl::api::bool32 extended_dynamic_state3tessellation_domain_origin;
ktl::api::bool32 extended_dynamic_state3depth_clamp_enable;
ktl::api::bool32 extended_dynamic_state3polygon_mode;
ktl::api::bool32 extended_dynamic_state3rasterization_samples;
ktl::api::bool32 extended_dynamic_state3sample_mask;
ktl::api::bool32 extended_dynamic_state3alpha_to_coverage_enable;
ktl::api::bool32 extended_dynamic_state3alpha_to_one_enable;
ktl::api::bool32 extended_dynamic_state3logic_op_enable;
ktl::api::bool32 extended_dynamic_state3color_blend_enable;
ktl::api::bool32 extended_dynamic_state3color_blend_equation;
ktl::api::bool32 extended_dynamic_state3color_write_mask;
ktl::api::bool32 extended_dynamic_state3rasterization_stream;
ktl::api::bool32 extended_dynamic_state3conservative_rasterization_mode;
ktl::api::bool32 extended_dynamic_state3extra_primitive_overestimation_size;
ktl::api::bool32 extended_dynamic_state3depth_clip_enable;
ktl::api::bool32 extended_dynamic_state3sample_locations_enable;
ktl::api::bool32 extended_dynamic_state3color_blend_advanced;
ktl::api::bool32 extended_dynamic_state3provoking_vertex_mode;
ktl::api::bool32 extended_dynamic_state3line_rasterization_mode;
ktl::api::bool32 extended_dynamic_state3line_stipple_enable;
ktl::api::bool32 extended_dynamic_state3depth_clip_negative_one_to_one;
ktl::api::bool32 extended_dynamic_state3viewport_wscaling_enable;
ktl::api::bool32 extended_dynamic_state3viewport_swizzle;
ktl::api::bool32 extended_dynamic_state3coverage_to_color_enable;
ktl::api::bool32 extended_dynamic_state3coverage_to_color_location;
ktl::api::bool32 extended_dynamic_state3coverage_modulation_mode;
ktl::api::bool32 extended_dynamic_state3coverage_modulation_table_enable;
ktl::api::bool32 extended_dynamic_state3coverage_modulation_table;
ktl::api::bool32 extended_dynamic_state3coverage_reduction_mode;
ktl::api::bool32 extended_dynamic_state3representative_fragment_test_enable;
ktl::api::bool32 extended_dynamic_state3shading_rate_image_enable;
};
struct physical_device_extended_dynamic_state3properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_extended_dynamic_state_3_properties_ext;
void * pnext = {};
ktl::api::bool32 dynamic_primitive_topology_unrestricted;
};
struct color_blend_equation_ext
{
ktl::api::blend_factor src_color_blend_factor;
ktl::api::blend_factor dst_color_blend_factor;
ktl::api::blend_op color_blend_op;
ktl::api::blend_factor src_alpha_blend_factor;
ktl::api::blend_factor dst_alpha_blend_factor;
ktl::api::blend_op alpha_blend_op;
};
struct color_blend_advanced_ext
{
ktl::api::blend_op advanced_blend_op;
ktl::api::bool32 src_premultiplied;
ktl::api::bool32 dst_premultiplied;
ktl::api::blend_overlap_ext blend_overlap;
ktl::api::bool32 clamp_results;
};
struct render_pass_transform_begin_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_transform_begin_info_qcom;
const void * pnext = {};
ktl::api::surface_transform_flag_bits_khr transform;
};
struct copy_command_transform_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_command_transform_info_qcom;
const void * pnext = {};
ktl::api::surface_transform_flag_bits_khr transform;
};
struct physical_device_partitioned_acceleration_structure_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_partitioned_acceleration_structure_features_nv;
void * pnext = {};
ktl::api::bool32 partitioned_acceleration_structure;
};
struct physical_device_partitioned_acceleration_structure_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_partitioned_acceleration_structure_properties_nv;
void * pnext = {};
ktl::i32 max_partition_count;
};
struct partitioned_acceleration_structure_flags_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_partitioned_acceleration_structure_flags_nv;
void * pnext = {};
ktl::api::bool32 enable_partition_translation;
};
struct partitioned_acceleration_structure_update_instance_data_nv
{
ktl::i32 instance_index;
ktl::i32 instance_contribution_to_hit_group_index;
ktl::api::dvaddr acceleration_structure;
};
struct partitioned_acceleration_structure_write_partition_translation_data_nv
{
ktl::i32 partition_index;
float partition_translation[3];
};
struct write_descriptor_set_partitioned_acceleration_structure_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_write_descriptor_set_partitioned_acceleration_structure_nv;
void * pnext = {};
ktl::i32 acceleration_structure_count;
const ktl::api::dvaddr * p_acceleration_structures;
};
struct partitioned_acceleration_structure_instances_input_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_partitioned_acceleration_structure_instances_input_nv;
void * pnext = {};
ktl::api::build_acceleration_structure_flags_khr flags = {};
ktl::i32 instance_count;
ktl::i32 max_instance_per_partition_count;
ktl::i32 partition_count;
ktl::i32 max_instance_in_global_partition_count;
};
struct physical_device_diagnostics_config_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_diagnostics_config_features_nv;
void * pnext = {};
ktl::api::bool32 diagnostics_config;
};
struct device_diagnostics_config_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_diagnostics_config_create_info_nv;
const void * pnext = {};
ktl::api::device_diagnostics_config_flags_nv flags = {};
};
struct pipeline_offline_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_offline_create_info;
const void * pnext = {};
ktl::u8 pipeline_identifier[KTL_API_UUID_SIZE];
ktl::api::pipeline_match_control match_control;
ktl::api::dvsize pool_entry_size;
};
struct physical_device_zero_initialize_workgroup_memory_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_zero_initialize_workgroup_memory_features;
void * pnext = {};
ktl::api::bool32 shader_zero_initialize_workgroup_memory;
};
struct physical_device_shader_subgroup_uniform_control_flow_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_subgroup_uniform_control_flow_features_khr;
void * pnext = {};
ktl::api::bool32 shader_subgroup_uniform_control_flow;
};
struct physical_device_robustness2features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_robustness_2_features_khr;
void * pnext = {};
ktl::api::bool32 robust_buffer_access2;
ktl::api::bool32 robust_image_access2;
ktl::api::bool32 null_descriptor;
};
struct physical_device_robustness2properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_robustness_2_properties_khr;
void * pnext = {};
ktl::api::dvsize robust_storage_buffer_access_size_alignment;
ktl::api::dvsize robust_uniform_buffer_access_size_alignment;
};
struct physical_device_image_robustness_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_robustness_features;
void * pnext = {};
ktl::api::bool32 robust_image_access;
};
struct physical_device_workgroup_memory_explicit_layout_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_workgroup_memory_explicit_layout_features_khr;
void * pnext = {};
ktl::api::bool32 workgroup_memory_explicit_layout;
ktl::api::bool32 workgroup_memory_explicit_layout_scalar_block_layout;
ktl::api::bool32 workgroup_memory_explicit_layout8bit_access;
ktl::api::bool32 workgroup_memory_explicit_layout16bit_access;
};
struct physical_device_portability_subset_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_portability_subset_features_khr;
void * pnext = {};
const ktl::api::bool32 constant_alpha_color_blend_factors;
ktl::api::bool32 events;
ktl::api::bool32 image_view_format_reinterpretation;
ktl::api::bool32 image_view_format_swizzle;
ktl::api::bool32 image_view2don3dimage;
ktl::api::bool32 multisample_array_image;
ktl::api::bool32 mutable_comparison_samplers;
ktl::api::bool32 point_polygons;
ktl::api::bool32 sampler_mip_lod_bias;
ktl::api::bool32 separate_stencil_mask_ref;
ktl::api::bool32 shader_sample_rate_interpolation_functions;
ktl::api::bool32 tessellation_isolines;
ktl::api::bool32 tessellation_point_mode;
ktl::api::bool32 triangle_fans;
ktl::api::bool32 vertex_attribute_access_beyond_stride;
};
struct physical_device_portability_subset_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_portability_subset_properties_khr;
void * pnext = {};
ktl::i32 min_vertex_input_binding_stride_alignment;
};
struct physical_device4444formats_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_4444_formats_features_ext;
void * pnext = {};
ktl::api::bool32 format_a4r4g4b4;
ktl::api::bool32 format_a4b4g4r4;
};
struct physical_device_subpass_shading_features_huawei
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_subpass_shading_features_huawei;
void * pnext = {};
ktl::api::bool32 subpass_shading;
};
struct physical_device_cluster_culling_shader_features_huawei
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cluster_culling_shader_features_huawei;
void * pnext = {};
ktl::api::bool32 clusterculling_shader;
ktl::api::bool32 multiview_cluster_culling_shader;
};
struct physical_device_cluster_culling_shader_vrs_features_huawei
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cluster_culling_shader_vrs_features_huawei;
void * pnext = {};
ktl::api::bool32 cluster_shading_rate;
};
struct buffer_copy2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_copy_2;
const void * pnext = {};
ktl::api::dvsize src_offset;
ktl::api::dvsize dst_offset;
ktl::api::dvsize size;
};
struct physical_device_shader_image_atomic_int64features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_image_atomic_int64_features_ext;
void * pnext = {};
ktl::api::bool32 shader_image_int64atomics;
ktl::api::bool32 sparse_image_int64atomics;
};
struct physical_device_fragment_shading_rate_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_shading_rate_features_khr;
void * pnext = {};
ktl::api::bool32 pipeline_fragment_shading_rate;
ktl::api::bool32 primitive_fragment_shading_rate;
ktl::api::bool32 attachment_fragment_shading_rate;
};
struct physical_device_shader_terminate_invocation_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_terminate_invocation_features;
void * pnext = {};
ktl::api::bool32 shader_terminate_invocation;
};
struct physical_device_fragment_shading_rate_enums_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_shading_rate_enums_features_nv;
void * pnext = {};
ktl::api::bool32 fragment_shading_rate_enums;
ktl::api::bool32 supersample_fragment_shading_rates;
ktl::api::bool32 no_invocation_fragment_shading_rates;
};
struct physical_device_fragment_shading_rate_enums_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_shading_rate_enums_properties_nv;
void * pnext = {};
ktl::api::sample_count_flag_bits max_fragment_shading_rate_invocation_count;
};
struct pipeline_fragment_shading_rate_enum_state_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_fragment_shading_rate_enum_state_create_info_nv;
const void * pnext = {};
ktl::api::fragment_shading_rate_type_nv shading_rate_type;
ktl::api::fragment_shading_rate_nv shading_rate;
ktl::api::fragment_shading_rate_combiner_op_khr combiner_ops[2];
};
struct acceleration_structure_build_sizes_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_build_sizes_info_khr;
void * pnext = {};
ktl::api::dvsize acceleration_structure_size;
ktl::api::dvsize update_scratch_size;
ktl::api::dvsize build_scratch_size;
};
struct physical_device_image2dview_of3dfeatures_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_2d_view_of_3d_features_ext;
void * pnext = {};
ktl::api::bool32 image2dview_of3d;
ktl::api::bool32 sampler2dview_of3d;
};
struct physical_device_image_sliced_view_of3dfeatures_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_sliced_view_of_3d_features_ext;
void * pnext = {};
ktl::api::bool32 image_sliced_view_of3d;
};
struct physical_device_attachment_feedback_loop_dynamic_state_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_attachment_feedback_loop_dynamic_state_features_ext;
void * pnext = {};
ktl::api::bool32 attachment_feedback_loop_dynamic_state;
};
struct physical_device_legacy_vertex_attributes_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_legacy_vertex_attributes_features_ext;
void * pnext = {};
ktl::api::bool32 legacy_vertex_attributes;
};
struct physical_device_legacy_vertex_attributes_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_legacy_vertex_attributes_properties_ext;
void * pnext = {};
ktl::api::bool32 native_unaligned_performance;
};
struct physical_device_mutable_descriptor_type_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_mutable_descriptor_type_features_ext;
void * pnext = {};
ktl::api::bool32 mutable_descriptor_type;
};
struct mutable_descriptor_type_list_ext
{
ktl::i32 descriptor_type_count = {};
const ktl::api::descriptor_type * p_descriptor_types;
};
struct physical_device_depth_clip_control_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_depth_clip_control_features_ext;
void * pnext = {};
ktl::api::bool32 depth_clip_control;
};
struct physical_device_zero_initialize_device_memory_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_zero_initialize_device_memory_features_ext;
void * pnext = {};
ktl::api::bool32 zero_initialize_device_memory;
};
struct begin_custom_resolve_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_begin_custom_resolve_info_ext;
void * pnext = {};
};
struct physical_device_custom_resolve_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_custom_resolve_features_ext;
void * pnext = {};
ktl::api::bool32 custom_resolve;
};
struct custom_resolve_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_custom_resolve_create_info_ext;
const void * pnext = {};
ktl::api::bool32 custom_resolve;
ktl::i32 color_attachment_count = {};
const ktl::api::format * p_color_attachment_formats;
ktl::api::format depth_attachment_format;
ktl::api::format stencil_attachment_format;
};
struct physical_device_device_generated_commands_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_device_generated_commands_features_ext;
void * pnext = {};
ktl::api::bool32 device_generated_commands;
ktl::api::bool32 dynamic_generated_pipeline_layout;
};
struct physical_device_device_generated_commands_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_device_generated_commands_properties_ext;
void * pnext = {};
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
ktl::api::bool32 device_generated_commands_transform_feedback;
ktl::api::bool32 device_generated_commands_multi_draw_indirect_count;
};
struct generated_commands_pipeline_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_generated_commands_pipeline_info_ext;
void * pnext = {};
ktl::api::pipeline pipeline;
};
struct generated_commands_shader_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_generated_commands_shader_info_ext;
void * pnext = {};
ktl::i32 shader_count;
const ktl::api::shader_ext * p_shaders;
};
struct generated_commands_memory_requirements_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_generated_commands_memory_requirements_info_ext;
const void * pnext = {};
ktl::api::indirect_execution_set_ext indirect_execution_set = {};
ktl::api::indirect_commands_layout_ext indirect_commands_layout;
ktl::i32 max_sequence_count;
ktl::i32 max_draw_count;
};
struct indirect_execution_set_pipeline_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_indirect_execution_set_pipeline_info_ext;
const void * pnext = {};
ktl::api::pipeline initial_pipeline;
ktl::i32 max_pipeline_count;
};
struct indirect_execution_set_shader_layout_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_indirect_execution_set_shader_layout_info_ext;
const void * pnext = {};
ktl::i32 set_layout_count = {};
const ktl::api::descriptor_set_layout * p_set_layouts;
};
struct generated_commands_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_generated_commands_info_ext;
const void * pnext = {};
ktl::api::shader_stage_flags shader_stages;
ktl::api::indirect_execution_set_ext indirect_execution_set = {};
ktl::api::indirect_commands_layout_ext indirect_commands_layout;
ktl::api::dvaddr indirect_address;
ktl::api::dvsize indirect_address_size;
ktl::api::dvaddr preprocess_address = {};
ktl::api::dvsize preprocess_size;
ktl::i32 max_sequence_count;
ktl::api::dvaddr sequence_count_address = {};
ktl::i32 max_draw_count;
};
struct write_indirect_execution_set_pipeline_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_write_indirect_execution_set_pipeline_ext;
const void * pnext = {};
ktl::i32 index;
ktl::api::pipeline pipeline;
};
struct write_indirect_execution_set_shader_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_write_indirect_execution_set_shader_ext;
const void * pnext = {};
ktl::i32 index;
ktl::api::shader_ext shader;
};
struct draw_indirect_count_indirect_command_ext
{
ktl::api::dvaddr buffer_address;
ktl::i32 stride;
ktl::i32 command_count;
};
struct indirect_commands_vertex_buffer_token_ext
{
ktl::i32 vertex_binding_unit;
};
struct bind_vertex_buffer_indirect_command_ext
{
ktl::api::dvaddr buffer_address;
ktl::i32 size;
ktl::i32 stride;
};
struct indirect_commands_index_buffer_token_ext
{
ktl::api::indirect_commands_input_mode_flag_bits_ext mode;
};
struct bind_index_buffer_indirect_command_ext
{
ktl::api::dvaddr buffer_address;
ktl::i32 size;
ktl::api::index_type index_type;
};
struct indirect_commands_execution_set_token_ext
{
ktl::api::indirect_execution_set_info_type_ext type;
ktl::api::shader_stage_flags shader_stages;
};
struct pipeline_viewport_depth_clip_control_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_viewport_depth_clip_control_create_info_ext;
const void * pnext = {};
ktl::api::bool32 negative_one_to_one;
};
struct physical_device_depth_clamp_control_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_depth_clamp_control_features_ext;
void * pnext = {};
ktl::api::bool32 depth_clamp_control;
};
struct physical_device_vertex_input_dynamic_state_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vertex_input_dynamic_state_features_ext;
void * pnext = {};
ktl::api::bool32 vertex_input_dynamic_state;
};
struct physical_device_external_memory_rdmafeatures_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_memory_rdma_features_nv;
void * pnext = {};
ktl::api::bool32 external_memory_rdma;
};
struct physical_device_shader_relaxed_extended_instruction_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_relaxed_extended_instruction_features_khr;
void * pnext = {};
ktl::api::bool32 shader_relaxed_extended_instruction;
};
struct vertex_input_binding_description2ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_vertex_input_binding_description_2_ext;
void * pnext = {};
ktl::i32 binding;
ktl::i32 stride;
ktl::api::vertex_input_rate input_rate;
ktl::i32 divisor;
};
struct vertex_input_attribute_description2ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_vertex_input_attribute_description_2_ext;
void * pnext = {};
ktl::i32 location;
ktl::i32 binding;
ktl::api::format format;
ktl::i32 offset;
};
struct physical_device_color_write_enable_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_color_write_enable_features_ext;
void * pnext = {};
ktl::api::bool32 color_write_enable;
};
struct pipeline_color_write_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_color_write_create_info_ext;
const void * pnext = {};
ktl::i32 attachment_count = {};
const ktl::api::bool32 * p_color_write_enables;
};
struct memory_barrier2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_barrier_2;
const void * pnext = {};
ktl::api::pipeline_stage_flags2 src_stage_mask = {};
ktl::api::access_flags2 src_access_mask = {};
ktl::api::pipeline_stage_flags2 dst_stage_mask = {};
ktl::api::access_flags2 dst_access_mask = {};
};
struct buffer_memory_barrier2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_memory_barrier_2;
const void * pnext = {};
ktl::api::pipeline_stage_flags2 src_stage_mask = {};
ktl::api::access_flags2 src_access_mask = {};
ktl::api::pipeline_stage_flags2 dst_stage_mask = {};
ktl::api::access_flags2 dst_access_mask = {};
ktl::i32 src_queue_family_index;
ktl::i32 dst_queue_family_index;
ktl::api::buffer buffer;
ktl::api::dvsize offset;
ktl::api::dvsize size;
};
struct memory_barrier_access_flags3khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_barrier_access_flags_3_khr;
const void * pnext = {};
ktl::api::access_flags3khr src_access_mask3 = {};
ktl::api::access_flags3khr dst_access_mask3 = {};
};
struct semaphore_submit_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_semaphore_submit_info;
const void * pnext = {};
ktl::api::semaphore semaphore;
ktl::u64 value;
ktl::api::pipeline_stage_flags2 stage_mask = {};
ktl::i32 device_index;
};
struct command_buffer_submit_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_buffer_submit_info;
const void * pnext = {};
ktl::api::command_buffer command_buffer;
ktl::i32 device_mask;
};
struct queue_family_checkpoint_properties2nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_queue_family_checkpoint_properties_2_nv;
void * pnext = {};
ktl::api::pipeline_stage_flags2 checkpoint_execution_stage_mask;
};
struct checkpoint_data2nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_checkpoint_data_2_nv;
void * pnext = {};
ktl::api::pipeline_stage_flags2 stage;
void * p_checkpoint_marker;
};
struct physical_device_synchronization2features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_synchronization_2_features;
void * pnext = {};
ktl::api::bool32 synchronization2;
};
struct physical_device_unified_image_layouts_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_unified_image_layouts_features_khr;
void * pnext = {};
ktl::api::bool32 unified_image_layouts;
ktl::api::bool32 unified_image_layouts_video;
};
struct physical_device_host_image_copy_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_host_image_copy_features;
void * pnext = {};
ktl::api::bool32 host_image_copy;
};
struct physical_device_host_image_copy_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_host_image_copy_properties;
void * pnext = {};
ktl::i32 copy_src_layout_count = {};
ktl::api::image_layout * p_copy_src_layouts = {};
ktl::i32 copy_dst_layout_count = {};
ktl::api::image_layout * p_copy_dst_layouts = {};
ktl::u8 optimal_tiling_layout_uuid[KTL_API_UUID_SIZE] = {};
ktl::api::bool32 identical_memory_type_requirements;
};
struct subresource_host_memcpy_size
{
ktl::api::structure_type stype = ktl::api::structure_type::v_subresource_host_memcpy_size;
void * pnext = {};
ktl::api::dvsize size;
};
struct host_image_copy_device_performance_query
{
ktl::api::structure_type stype = ktl::api::structure_type::v_host_image_copy_device_performance_query;
void * pnext = {};
ktl::api::bool32 optimal_device_access;
ktl::api::bool32 identical_memory_layout;
};
struct physical_device_vulkan_sc10properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vulkan_sc_1_0_properties;
void * pnext = {};
ktl::api::bool32 device_no_dynamic_host_allocations;
ktl::api::bool32 device_destroy_frees_memory;
ktl::api::bool32 command_pool_multiple_command_buffers_recording;
ktl::api::bool32 command_pool_reset_command_buffer;
ktl::api::bool32 command_buffer_simultaneous_use;
ktl::api::bool32 secondary_command_buffer_null_or_imageless_framebuffer;
ktl::api::bool32 recycle_descriptor_set_memory;
ktl::api::bool32 recycle_pipeline_memory;
ktl::i32 max_render_pass_subpasses;
ktl::i32 max_render_pass_dependencies;
ktl::i32 max_subpass_input_attachments;
ktl::i32 max_subpass_preserve_attachments;
ktl::i32 max_framebuffer_attachments;
ktl::i32 max_descriptor_set_layout_bindings;
ktl::i32 max_query_fault_count;
ktl::i32 max_callback_fault_count;
ktl::i32 max_command_pool_command_buffers;
ktl::api::dvsize max_command_buffer_size;
};
struct pipeline_pool_size
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_pool_size;
const void * pnext = {};
ktl::api::dvsize pool_entry_size;
ktl::i32 pool_entry_count;
};
struct command_pool_memory_reservation_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_pool_memory_reservation_create_info;
const void * pnext = {};
ktl::api::dvsize command_pool_reserved_size;
ktl::i32 command_pool_max_command_buffers;
};
struct command_pool_memory_consumption
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_pool_memory_consumption;
void * pnext = {};
ktl::api::dvsize command_pool_allocated;
ktl::api::dvsize command_pool_reserved_size;
ktl::api::dvsize command_buffer_allocated;
};
struct physical_device_vulkan_sc10features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vulkan_sc_1_0_features;
void * pnext = {};
ktl::api::bool32 shader_atomic_instructions;
};
struct physical_device_primitives_generated_query_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_primitives_generated_query_features_ext;
void * pnext = {};
ktl::api::bool32 primitives_generated_query;
ktl::api::bool32 primitives_generated_query_with_rasterizer_discard;
ktl::api::bool32 primitives_generated_query_with_non_zero_streams;
};
struct physical_device_legacy_dithering_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_legacy_dithering_features_ext;
void * pnext = {};
ktl::api::bool32 legacy_dithering;
};
struct physical_device_multisampled_render_to_single_sampled_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_multisampled_render_to_single_sampled_features_ext;
void * pnext = {};
ktl::api::bool32 multisampled_render_to_single_sampled;
};
struct surface_capabilities_present_id2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_capabilities_present_id_2_khr;
void * pnext = {};
ktl::api::bool32 present_id2supported;
};
struct surface_capabilities_present_wait2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_capabilities_present_wait_2_khr;
void * pnext = {};
ktl::api::bool32 present_wait2supported;
};
struct subpass_resolve_performance_query_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_subpass_resolve_performance_query_ext;
void * pnext = {};
ktl::api::bool32 optimal;
};
struct multisampled_render_to_single_sampled_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_multisampled_render_to_single_sampled_info_ext;
const void * pnext = {};
ktl::api::bool32 multisampled_render_to_single_sampled_enable;
ktl::api::sample_count_flag_bits rasterization_samples;
};
struct physical_device_pipeline_protected_access_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pipeline_protected_access_features;
void * pnext = {};
ktl::api::bool32 pipeline_protected_access;
};
struct queue_family_query_result_status_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_queue_family_query_result_status_properties_khr;
void * pnext = {};
ktl::api::bool32 query_result_status_support;
};
struct physical_device_inherited_viewport_scissor_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_inherited_viewport_scissor_features_nv;
void * pnext = {};
ktl::api::bool32 inherited_viewport_scissor2d;
};
struct physical_device_ycbcr2plane444formats_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ycbcr_2_plane_444_formats_features_ext;
void * pnext = {};
ktl::api::bool32 ycbcr2plane444formats;
};
struct physical_device_provoking_vertex_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_provoking_vertex_features_ext;
void * pnext = {};
ktl::api::bool32 provoking_vertex_last;
ktl::api::bool32 transform_feedback_preserves_provoking_vertex;
};
struct physical_device_provoking_vertex_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_provoking_vertex_properties_ext;
void * pnext = {};
ktl::api::bool32 provoking_vertex_mode_per_pipeline;
ktl::api::bool32 transform_feedback_preserves_triangle_fan_provoking_vertex;
};
struct pipeline_rasterization_provoking_vertex_state_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_rasterization_provoking_vertex_state_create_info_ext;
const void * pnext = {};
ktl::api::provoking_vertex_mode_ext provoking_vertex_mode;
};
struct cu_module_create_info_nvx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cu_module_create_info_nvx;
const void * pnext = {};
ktl::usize data_size = {};
const void * p_data;
};
struct cu_module_texturing_mode_create_info_nvx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cu_module_texturing_mode_create_info_nvx;
const void * pnext = {};
ktl::api::bool32 use64bit_texturing;
};
struct cu_function_create_info_nvx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cu_function_create_info_nvx;
const void * pnext = {};
ktl::api::cu_module_nvx module;
const char * p_name;
};
struct cu_launch_info_nvx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cu_launch_info_nvx;
const void * pnext = {};
ktl::api::cu_function_nvx function;
ktl::i32 grid_dim_x;
ktl::i32 grid_dim_y;
ktl::i32 grid_dim_z;
ktl::i32 block_dim_x;
ktl::i32 block_dim_y;
ktl::i32 block_dim_z;
ktl::i32 shared_mem_bytes;
ktl::usize param_count = {};
const void * p_params;
ktl::usize extra_count = {};
const void * p_extras;
};
struct physical_device_descriptor_buffer_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_buffer_features_ext;
void * pnext = {};
ktl::api::bool32 descriptor_buffer;
ktl::api::bool32 descriptor_buffer_capture_replay;
ktl::api::bool32 descriptor_buffer_image_layout_ignored;
ktl::api::bool32 descriptor_buffer_push_descriptors;
};
struct physical_device_descriptor_buffer_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_buffer_properties_ext;
void * pnext = {};
ktl::api::bool32 combined_image_sampler_descriptor_single_array;
ktl::api::bool32 bufferless_push_descriptors;
ktl::api::bool32 allow_sampler_image_view_post_submit_creation;
ktl::api::dvsize descriptor_buffer_offset_alignment;
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
ktl::api::dvsize max_sampler_descriptor_buffer_range;
ktl::api::dvsize max_resource_descriptor_buffer_range;
ktl::api::dvsize sampler_descriptor_buffer_address_space_size;
ktl::api::dvsize resource_descriptor_buffer_address_space_size;
ktl::api::dvsize descriptor_buffer_address_space_size;
};
struct physical_device_descriptor_buffer_density_map_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_buffer_density_map_properties_ext;
void * pnext = {};
ktl::usize combined_image_sampler_density_map_descriptor_size;
};
struct descriptor_address_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_address_info_ext;
void * pnext = {};
ktl::api::dvaddr address = {};
ktl::api::dvsize range;
ktl::api::format format;
};
struct descriptor_buffer_binding_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_buffer_binding_info_ext;
const void * pnext = {};
ktl::api::dvaddr address;
ktl::api::buffer_usage_flags usage = {};
};
struct descriptor_buffer_binding_push_descriptor_buffer_handle_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_buffer_binding_push_descriptor_buffer_handle_ext;
const void * pnext = {};
ktl::api::buffer buffer;
};
struct buffer_capture_descriptor_data_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_capture_descriptor_data_info_ext;
const void * pnext = {};
ktl::api::buffer buffer;
};
struct image_capture_descriptor_data_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_capture_descriptor_data_info_ext;
const void * pnext = {};
ktl::api::image image;
};
struct image_view_capture_descriptor_data_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_view_capture_descriptor_data_info_ext;
const void * pnext = {};
ktl::api::image_view image_view;
};
struct sampler_capture_descriptor_data_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_capture_descriptor_data_info_ext;
const void * pnext = {};
ktl::api::sampler sampler;
};
struct acceleration_structure_capture_descriptor_data_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_capture_descriptor_data_info_ext;
const void * pnext = {};
ktl::api::acceleration_structure_khr acceleration_structure = {};
ktl::api::acceleration_structure_nv acceleration_structure_nv = {};
};
struct opaque_capture_descriptor_data_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_opaque_capture_descriptor_data_create_info_ext;
const void * pnext = {};
const void * opaque_capture_descriptor_data;
};
struct physical_device_shader_integer_dot_product_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_integer_dot_product_features;
void * pnext = {};
ktl::api::bool32 shader_integer_dot_product;
};
struct physical_device_shader_integer_dot_product_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_integer_dot_product_properties;
void * pnext = {};
ktl::api::bool32 integer_dot_product8bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product8bit_signed_accelerated;
ktl::api::bool32 integer_dot_product8bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product4x8bit_packed_unsigned_accelerated;
ktl::api::bool32 integer_dot_product4x8bit_packed_signed_accelerated;
ktl::api::bool32 integer_dot_product4x8bit_packed_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product16bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product16bit_signed_accelerated;
ktl::api::bool32 integer_dot_product16bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product32bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product32bit_signed_accelerated;
ktl::api::bool32 integer_dot_product32bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product64bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product64bit_signed_accelerated;
ktl::api::bool32 integer_dot_product64bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating8bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating8bit_signed_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating16bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating16bit_signed_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating32bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating32bit_signed_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating64bit_unsigned_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating64bit_signed_accelerated;
ktl::api::bool32 integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated;
};
struct physical_device_drm_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_drm_properties_ext;
void * pnext = {};
ktl::api::bool32 has_primary;
ktl::api::bool32 has_render;
ktl::i64 primary_major;
ktl::i64 primary_minor;
ktl::i64 render_major;
ktl::i64 render_minor;
};
struct physical_device_fragment_shader_barycentric_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_shader_barycentric_features_khr;
void * pnext = {};
ktl::api::bool32 fragment_shader_barycentric;
};
struct physical_device_fragment_shader_barycentric_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_shader_barycentric_properties_khr;
void * pnext = {};
ktl::api::bool32 tri_strip_vertex_order_independent_of_provoking_vertex;
};
struct physical_device_shader_fma_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_fma_features_khr;
void * pnext = {};
ktl::api::bool32 shader_fma_float16;
ktl::api::bool32 shader_fma_float32;
ktl::api::bool32 shader_fma_float64;
};
struct physical_device_ray_tracing_motion_blur_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_motion_blur_features_nv;
void * pnext = {};
ktl::api::bool32 ray_tracing_motion_blur;
ktl::api::bool32 ray_tracing_motion_blur_pipeline_trace_rays_indirect;
};
struct physical_device_ray_tracing_validation_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_validation_features_nv;
void * pnext = {};
ktl::api::bool32 ray_tracing_validation;
};
struct physical_device_ray_tracing_linear_swept_spheres_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_linear_swept_spheres_features_nv;
void * pnext = {};
ktl::api::bool32 spheres;
ktl::api::bool32 linear_swept_spheres;
};
struct acceleration_structure_motion_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_motion_info_nv;
const void * pnext = {};
ktl::i32 max_instances;
ktl::api::acceleration_structure_motion_info_flags_nv flags = {};
};
struct srtdata_nv
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
struct memory_get_remote_address_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_get_remote_address_info_nv;
const void * pnext = {};
ktl::api::device_memory memory;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};
struct import_memory_buffer_collection_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_memory_buffer_collection_fuchsia;
const void * pnext = {};
ktl::api::buffer_collection_fuchsia collection;
ktl::i32 index;
};
struct buffer_collection_image_create_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_collection_image_create_info_fuchsia;
const void * pnext = {};
ktl::api::buffer_collection_fuchsia collection;
ktl::i32 index;
};
struct buffer_collection_buffer_create_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_collection_buffer_create_info_fuchsia;
const void * pnext = {};
ktl::api::buffer_collection_fuchsia collection;
ktl::i32 index;
};
struct buffer_collection_create_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_collection_create_info_fuchsia;
const void * pnext = {};
zx_handle_t collection_token;
};
struct sysmem_color_space_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sysmem_color_space_fuchsia;
const void * pnext = {};
ktl::i32 color_space;
};
struct buffer_collection_constraints_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_collection_constraints_info_fuchsia;
const void * pnext = {};
ktl::i32 min_buffer_count;
ktl::i32 max_buffer_count;
ktl::i32 min_buffer_count_for_camping;
ktl::i32 min_buffer_count_for_dedicated_slack;
ktl::i32 min_buffer_count_for_shared_slack;
};
struct cuda_module_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cuda_module_create_info_nv;
const void * pnext = {};
ktl::usize data_size;
const void * p_data;
};
struct cuda_function_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cuda_function_create_info_nv;
const void * pnext = {};
ktl::api::cuda_module_nv module;
const char * p_name;
};
struct cuda_launch_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cuda_launch_info_nv;
const void * pnext = {};
ktl::api::cuda_function_nv function;
ktl::i32 grid_dim_x;
ktl::i32 grid_dim_y;
ktl::i32 grid_dim_z;
ktl::i32 block_dim_x;
ktl::i32 block_dim_y;
ktl::i32 block_dim_z;
ktl::i32 shared_mem_bytes;
ktl::usize param_count = {};
const void * p_params;
ktl::usize extra_count = {};
const void * p_extras;
};
struct physical_device_rgba10x6formats_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_rgba10x6_formats_features_ext;
void * pnext = {};
ktl::api::bool32 format_rgba10x6without_ycb_cr_sampler;
};
struct format_properties3
{
ktl::api::structure_type stype = ktl::api::structure_type::v_format_properties_3;
void * pnext = {};
ktl::api::format_feature_flags2 linear_tiling_features = {};
ktl::api::format_feature_flags2 optimal_tiling_features = {};
ktl::api::format_feature_flags2 buffer_features = {};
};
struct drm_format_modifier_properties2ext
{
ktl::u64 drm_format_modifier;
ktl::i32 drm_format_modifier_plane_count;
ktl::api::format_feature_flags2 drm_format_modifier_tiling_features;
};
struct pipeline_rendering_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_rendering_create_info;
const void * pnext = {};
ktl::i32 view_mask;
ktl::i32 color_attachment_count = {};
const ktl::api::format * p_color_attachment_formats;
ktl::api::format depth_attachment_format;
ktl::api::format stencil_attachment_format;
};
struct rendering_end_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_rendering_end_info_khr;
const void * pnext = {};
};
struct rendering_fragment_density_map_attachment_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_rendering_fragment_density_map_attachment_info_ext;
const void * pnext = {};
ktl::api::image_view image_view;
ktl::api::image_layout image_layout;
};
struct physical_device_dynamic_rendering_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_dynamic_rendering_features;
void * pnext = {};
ktl::api::bool32 dynamic_rendering;
};
struct command_buffer_inheritance_rendering_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_buffer_inheritance_rendering_info;
const void * pnext = {};
ktl::api::rendering_flags flags = {};
ktl::i32 view_mask;
ktl::i32 color_attachment_count = {};
const ktl::api::format * p_color_attachment_formats;
ktl::api::format depth_attachment_format;
ktl::api::format stencil_attachment_format;
ktl::api::sample_count_flag_bits rasterization_samples = {};
};
struct attachment_sample_count_info_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_attachment_sample_count_info_amd;
const void * pnext = {};
ktl::i32 color_attachment_count = {};
const ktl::api::sample_count_flag_bits * p_color_attachment_samples;
ktl::api::sample_count_flag_bits depth_stencil_attachment_samples = {};
};
struct multiview_per_view_attributes_info_nvx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_multiview_per_view_attributes_info_nvx;
const void * pnext = {};
ktl::api::bool32 per_view_attributes;
ktl::api::bool32 per_view_attributes_position_xonly;
};
struct physical_device_image_view_min_lod_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_view_min_lod_features_ext;
void * pnext = {};
ktl::api::bool32 min_lod;
};
struct image_view_min_lod_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_view_min_lod_create_info_ext;
const void * pnext = {};
float min_lod;
};
struct physical_device_rasterization_order_attachment_access_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_rasterization_order_attachment_access_features_ext;
void * pnext = {};
ktl::api::bool32 rasterization_order_color_attachment_access;
ktl::api::bool32 rasterization_order_depth_attachment_access;
ktl::api::bool32 rasterization_order_stencil_attachment_access;
};
struct physical_device_linear_color_attachment_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_linear_color_attachment_features_nv;
void * pnext = {};
ktl::api::bool32 linear_color_attachment;
};
struct physical_device_graphics_pipeline_library_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_graphics_pipeline_library_features_ext;
void * pnext = {};
ktl::api::bool32 graphics_pipeline_library;
};
struct physical_device_pipeline_binary_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pipeline_binary_features_khr;
void * pnext = {};
ktl::api::bool32 pipeline_binaries;
};
struct device_pipeline_binary_internal_cache_control_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_pipeline_binary_internal_cache_control_khr;
const void * pnext = {};
ktl::api::bool32 disable_internal_cache;
};
struct physical_device_pipeline_binary_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pipeline_binary_properties_khr;
void * pnext = {};
ktl::api::bool32 pipeline_binary_internal_cache;
ktl::api::bool32 pipeline_binary_internal_cache_control;
ktl::api::bool32 pipeline_binary_prefers_internal_cache;
ktl::api::bool32 pipeline_binary_precompiled_internal_cache;
ktl::api::bool32 pipeline_binary_compressed_data;
};
struct physical_device_graphics_pipeline_library_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_graphics_pipeline_library_properties_ext;
void * pnext = {};
ktl::api::bool32 graphics_pipeline_library_fast_linking;
ktl::api::bool32 graphics_pipeline_library_independent_interpolation_decoration;
};
struct graphics_pipeline_library_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_graphics_pipeline_library_create_info_ext;
const void * pnext = {};
ktl::api::graphics_pipeline_library_flags_ext flags;
};
struct physical_device_descriptor_set_host_mapping_features_valve
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_set_host_mapping_features_valve;
void * pnext = {};
ktl::api::bool32 descriptor_set_host_mapping;
};
struct descriptor_set_binding_reference_valve
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_set_binding_reference_valve;
const void * pnext = {};
ktl::api::descriptor_set_layout descriptor_set_layout;
ktl::i32 binding;
};
struct descriptor_set_layout_host_mapping_info_valve
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_set_layout_host_mapping_info_valve;
void * pnext = {};
ktl::usize descriptor_offset;
ktl::i32 descriptor_size;
};
struct physical_device_nested_command_buffer_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_nested_command_buffer_features_ext;
void * pnext = {};
ktl::api::bool32 nested_command_buffer;
ktl::api::bool32 nested_command_buffer_rendering;
ktl::api::bool32 nested_command_buffer_simultaneous_use;
};
struct physical_device_nested_command_buffer_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_nested_command_buffer_properties_ext;
void * pnext = {};
ktl::i32 max_command_buffer_nesting_level;
};
struct physical_device_shader_module_identifier_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_module_identifier_features_ext;
void * pnext = {};
ktl::api::bool32 shader_module_identifier;
};
struct physical_device_shader_module_identifier_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_module_identifier_properties_ext;
void * pnext = {};
ktl::u8 shader_module_identifier_algorithm_uuid[KTL_API_UUID_SIZE];
};
struct pipeline_shader_stage_module_identifier_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_shader_stage_module_identifier_create_info_ext;
const void * pnext = {};
ktl::i32 identifier_size = {};
const ktl::u8 * p_identifier;
};
struct shader_module_identifier_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_shader_module_identifier_ext;
void * pnext = {};
ktl::i32 identifier_size;
ktl::u8 identifier[KTL_API_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT];
};
struct image_compression_control_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_compression_control_ext;
const void * pnext = {};
ktl::api::image_compression_flags_ext flags;
ktl::i32 compression_control_plane_count = {};
ktl::api::image_compression_fixed_rate_flags_ext * p_fixed_rate_flags;
};
struct physical_device_image_compression_control_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_compression_control_features_ext;
void * pnext = {};
ktl::api::bool32 image_compression_control;
};
struct image_compression_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_compression_properties_ext;
void * pnext = {};
ktl::api::image_compression_flags_ext image_compression_flags;
ktl::api::image_compression_fixed_rate_flags_ext image_compression_fixed_rate_flags;
};
struct physical_device_image_compression_control_swapchain_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_compression_control_swapchain_features_ext;
void * pnext = {};
ktl::api::bool32 image_compression_control_swapchain;
};
struct render_pass_creation_control_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_creation_control_ext;
const void * pnext = {};
ktl::api::bool32 disallow_merging;
};
struct render_pass_creation_feedback_info_ext
{
ktl::i32 post_merge_subpass_count;
};
struct render_pass_subpass_feedback_info_ext
{
ktl::api::subpass_merge_status_ext subpass_merge_status;
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::i32 post_merge_index;
};
struct physical_device_subpass_merge_feedback_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_subpass_merge_feedback_features_ext;
void * pnext = {};
ktl::api::bool32 subpass_merge_feedback;
};
struct micromap_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_micromap_create_info_ext;
const void * pnext = {};
ktl::api::micromap_create_flags_ext create_flags = {};
ktl::api::buffer buffer;
ktl::api::dvsize offset;
ktl::api::dvsize size;
ktl::api::micromap_type_ext type;
ktl::api::dvaddr device_address = {};
};
struct micromap_version_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_micromap_version_info_ext;
const void * pnext = {};
const ktl::u8 * p_version_data;
};
struct copy_micromap_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_micromap_info_ext;
const void * pnext = {};
ktl::api::micromap_ext src;
ktl::api::micromap_ext dst;
ktl::api::copy_micromap_mode_ext mode;
};
struct micromap_build_sizes_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_micromap_build_sizes_info_ext;
const void * pnext = {};
ktl::api::dvsize micromap_size;
ktl::api::dvsize build_scratch_size;
ktl::api::bool32 discardable;
};
struct micromap_usage_ext
{
ktl::i32 count;
ktl::i32 subdivision_level;
ktl::i32 format;
};
struct micromap_triangle_ext
{
ktl::i32 data_offset;
ktl::u16 subdivision_level;
ktl::u16 format;
};
struct physical_device_opacity_micromap_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_opacity_micromap_features_ext;
void * pnext = {};
ktl::api::bool32 micromap;
ktl::api::bool32 micromap_capture_replay;
ktl::api::bool32 micromap_host_commands;
};
struct physical_device_opacity_micromap_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_opacity_micromap_properties_ext;
void * pnext = {};
ktl::i32 max_opacity2state_subdivision_level;
ktl::i32 max_opacity4state_subdivision_level;
};
struct physical_device_displacement_micromap_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_displacement_micromap_features_nv;
void * pnext = {};
ktl::api::bool32 displacement_micromap;
};
struct physical_device_displacement_micromap_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_displacement_micromap_properties_nv;
void * pnext = {};
ktl::i32 max_displacement_micromap_subdivision_level;
};
struct pipeline_properties_identifier_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_properties_identifier_ext;
void * pnext = {};
ktl::u8 pipeline_identifier[KTL_API_UUID_SIZE];
};
struct physical_device_pipeline_properties_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pipeline_properties_features_ext;
void * pnext = {};
ktl::api::bool32 pipeline_properties_identifier;
};
struct physical_device_shader_early_and_late_fragment_tests_features_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_early_and_late_fragment_tests_features_amd;
void * pnext = {};
ktl::api::bool32 shader_early_and_late_fragment_tests;
};
struct external_memory_acquire_unmodified_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_memory_acquire_unmodified_ext;
const void * pnext = {};
ktl::api::bool32 acquire_unmodified_memory;
};
struct export_metal_object_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_metal_object_create_info_ext;
const void * pnext = {};
ktl::api::export_metal_object_type_flag_bits_ext export_object_type = {};
};
struct export_metal_objects_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_metal_objects_info_ext;
const void * pnext = {};
};
struct export_metal_device_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_metal_device_info_ext;
const void * pnext = {};
MTLDevice_id mtl_device;
};
struct export_metal_command_queue_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_metal_command_queue_info_ext;
const void * pnext = {};
ktl::api::queue queue;
MTLCommandQueue_id mtl_command_queue;
};
struct export_metal_buffer_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_metal_buffer_info_ext;
const void * pnext = {};
ktl::api::device_memory memory;
MTLBuffer_id mtl_buffer;
};
struct import_metal_buffer_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_metal_buffer_info_ext;
const void * pnext = {};
MTLBuffer_id mtl_buffer;
};
struct export_metal_texture_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_metal_texture_info_ext;
const void * pnext = {};
ktl::api::image image = {};
ktl::api::image_view image_view = {};
ktl::api::buffer_view buffer_view = {};
ktl::api::image_aspect_flag_bits plane;
MTLTexture_id mtl_texture;
};
struct import_metal_texture_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_metal_texture_info_ext;
const void * pnext = {};
ktl::api::image_aspect_flag_bits plane;
MTLTexture_id mtl_texture;
};
struct export_metal_iosurface_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_metal_io_surface_info_ext;
const void * pnext = {};
ktl::api::image image;
IOSurfaceRef io_surface;
};
struct import_metal_iosurface_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_metal_io_surface_info_ext;
const void * pnext = {};
IOSurfaceRef io_surface = {};
};
struct export_metal_shared_event_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_export_metal_shared_event_info_ext;
const void * pnext = {};
ktl::api::semaphore semaphore = {};
ktl::api::event event = {};
MTLSharedEvent_id mtl_shared_event;
};
struct import_metal_shared_event_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_metal_shared_event_info_ext;
const void * pnext = {};
MTLSharedEvent_id mtl_shared_event;
};
struct physical_device_non_seamless_cube_map_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_non_seamless_cube_map_features_ext;
void * pnext = {};
ktl::api::bool32 non_seamless_cube_map;
};
struct physical_device_pipeline_robustness_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pipeline_robustness_features;
void * pnext = {};
ktl::api::bool32 pipeline_robustness;
};
struct pipeline_robustness_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_robustness_create_info;
const void * pnext = {};
ktl::api::pipeline_robustness_buffer_behavior storage_buffers;
ktl::api::pipeline_robustness_buffer_behavior uniform_buffers;
ktl::api::pipeline_robustness_buffer_behavior vertex_inputs;
ktl::api::pipeline_robustness_image_behavior images;
};
struct physical_device_pipeline_robustness_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pipeline_robustness_properties;
void * pnext = {};
ktl::api::pipeline_robustness_buffer_behavior default_robustness_storage_buffers;
ktl::api::pipeline_robustness_buffer_behavior default_robustness_uniform_buffers;
ktl::api::pipeline_robustness_buffer_behavior default_robustness_vertex_inputs;
ktl::api::pipeline_robustness_image_behavior default_robustness_images;
};
struct physical_device_image_processing_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_processing_features_qcom;
void * pnext = {};
ktl::api::bool32 texture_sample_weighted;
ktl::api::bool32 texture_box_filter;
ktl::api::bool32 texture_block_match;
};
struct physical_device_tile_properties_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_tile_properties_features_qcom;
void * pnext = {};
ktl::api::bool32 tile_properties;
};
struct tile_memory_bind_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tile_memory_bind_info_qcom;
const void * pnext = {};
ktl::api::device_memory memory;
};
struct physical_device_amigo_profiling_features_sec
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_amigo_profiling_features_sec;
void * pnext = {};
ktl::api::bool32 amigo_profiling;
};
struct amigo_profiling_submit_info_sec
{
ktl::api::structure_type stype = ktl::api::structure_type::v_amigo_profiling_submit_info_sec;
const void * pnext = {};
ktl::u64 first_draw_timestamp;
ktl::u64 swap_buffer_timestamp;
};
struct physical_device_attachment_feedback_loop_layout_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_attachment_feedback_loop_layout_features_ext;
void * pnext = {};
ktl::api::bool32 attachment_feedback_loop_layout;
};
struct attachment_feedback_loop_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_attachment_feedback_loop_info_ext;
const void * pnext = {};
ktl::api::bool32 feedback_loop_enable;
};
struct physical_device_address_binding_report_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_address_binding_report_features_ext;
void * pnext = {};
ktl::api::bool32 report_address_binding;
};
struct rendering_attachment_flags_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_rendering_attachment_flags_info_khr;
const void * pnext = {};
ktl::api::rendering_attachment_flags_khr flags = {};
};
struct resolve_image_mode_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_resolve_image_mode_info_khr;
const void * pnext = {};
ktl::api::resolve_image_flags_khr flags = {};
ktl::api::resolve_mode_flag_bits resolve_mode = {};
ktl::api::resolve_mode_flag_bits stencil_resolve_mode = {};
};
struct device_address_binding_callback_data_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_address_binding_callback_data_ext;
void * pnext = {};
ktl::api::device_address_binding_flags_ext flags = {};
ktl::api::dvaddr base_address;
ktl::api::dvsize size;
ktl::api::device_address_binding_type_ext binding_type;
};
struct physical_device_optical_flow_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_optical_flow_features_nv;
void * pnext = {};
ktl::api::bool32 optical_flow;
};
struct physical_device_optical_flow_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_optical_flow_properties_nv;
void * pnext = {};
ktl::api::optical_flow_grid_size_flags_nv supported_output_grid_sizes;
ktl::api::optical_flow_grid_size_flags_nv supported_hint_grid_sizes;
ktl::api::bool32 hint_supported;
ktl::api::bool32 cost_supported;
ktl::api::bool32 bidirectional_flow_supported;
ktl::api::bool32 global_flow_supported;
ktl::i32 min_width;
ktl::i32 min_height;
ktl::i32 max_width;
ktl::i32 max_height;
ktl::i32 max_num_regions_of_interest;
};
struct optical_flow_image_format_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_optical_flow_image_format_info_nv;
const void * pnext = {};
ktl::api::optical_flow_usage_flags_nv usage;
};
struct optical_flow_image_format_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_optical_flow_image_format_properties_nv;
void * pnext = {};
ktl::api::format format;
};
struct optical_flow_session_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_optical_flow_session_create_info_nv;
void * pnext = {};
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
struct optical_flow_session_create_private_data_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_optical_flow_session_create_private_data_info_nv;
void * pnext = {};
ktl::i32 id;
ktl::i32 size;
const void * p_private_data;
};
struct physical_device_fault_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fault_features_ext;
void * pnext = {};
ktl::api::bool32 device_fault;
ktl::api::bool32 device_fault_vendor_binary;
};
struct device_fault_address_info_khr
{
ktl::api::device_fault_address_type_khr address_type;
ktl::api::dvaddr reported_address;
ktl::api::dvsize address_precision;
};
struct device_fault_vendor_info_khr
{
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::u64 vendor_fault_code;
ktl::u64 vendor_fault_data;
};
struct device_fault_debug_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_fault_debug_info_khr;
void * pnext = {};
ktl::i32 vendor_binary_size;
void * p_vendor_binary_data = {};
};
struct device_fault_counts_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_fault_counts_ext;
void * pnext = {};
ktl::i32 address_info_count = {};
ktl::i32 vendor_info_count = {};
ktl::api::dvsize vendor_binary_size = {};
};
struct device_fault_vendor_binary_header_version_one_khr
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
struct physical_device_fault_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fault_features_khr;
void * pnext = {};
ktl::api::bool32 device_fault;
ktl::api::bool32 device_fault_vendor_binary;
ktl::api::bool32 device_fault_report_masked;
ktl::api::bool32 device_fault_device_lost_on_masked;
};
struct physical_device_fault_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fault_properties_khr;
void * pnext = {};
ktl::i32 max_device_fault_count;
};
struct physical_device_pipeline_library_group_handles_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pipeline_library_group_handles_features_ext;
void * pnext = {};
ktl::api::bool32 pipeline_library_group_handles;
};
struct depth_bias_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_depth_bias_info_ext;
const void * pnext = {};
float depth_bias_constant_factor;
float depth_bias_clamp;
float depth_bias_slope_factor;
};
struct depth_bias_representation_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_depth_bias_representation_info_ext;
const void * pnext = {};
ktl::api::depth_bias_representation_ext depth_bias_representation;
ktl::api::bool32 depth_bias_exact;
};
struct decompress_memory_region_nv
{
ktl::api::dvaddr src_address;
ktl::api::dvaddr dst_address;
ktl::api::dvsize compressed_size;
ktl::api::dvsize decompressed_size;
ktl::api::memory_decompression_method_flags_ext decompression_method;
};
struct decompress_memory_region_ext
{
ktl::api::dvaddr src_address;
ktl::api::dvaddr dst_address;
ktl::api::dvsize compressed_size;
ktl::api::dvsize decompressed_size;
};
struct physical_device_shader_core_builtins_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_core_builtins_properties_arm;
void * pnext = {};
ktl::u64 shader_core_mask;
ktl::i32 shader_core_count;
ktl::i32 shader_warps_per_core;
};
struct physical_device_shader_core_builtins_features_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_core_builtins_features_arm;
void * pnext = {};
ktl::api::bool32 shader_core_builtins;
};
struct frame_boundary_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_frame_boundary_ext;
const void * pnext = {};
ktl::api::frame_boundary_flags_ext flags = {};
ktl::u64 frame_id;
ktl::i32 image_count = {};
const ktl::api::image * p_images = {};
ktl::i32 buffer_count = {};
const ktl::api::buffer * p_buffers = {};
ktl::u64 tag_name = {};
ktl::usize tag_size = {};
const void * p_tag = {};
};
struct physical_device_frame_boundary_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_frame_boundary_features_ext;
void * pnext = {};
ktl::api::bool32 frame_boundary;
};
struct physical_device_dynamic_rendering_unused_attachments_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_dynamic_rendering_unused_attachments_features_ext;
void * pnext = {};
ktl::api::bool32 dynamic_rendering_unused_attachments;
};
struct physical_device_internally_synchronized_queues_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_internally_synchronized_queues_features_khr;
void * pnext = {};
ktl::api::bool32 internally_synchronized_queues;
};
struct surface_present_mode_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_present_mode_khr;
void * pnext = {};
ktl::api::present_mode_khr present_mode;
};
struct surface_present_mode_compatibility_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_present_mode_compatibility_khr;
void * pnext = {};
ktl::i32 present_mode_count = {};
ktl::api::present_mode_khr * p_present_modes = {};
};
struct physical_device_swapchain_maintenance1features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_swapchain_maintenance_1_features_khr;
void * pnext = {};
ktl::api::bool32 swapchain_maintenance1;
};
struct swapchain_present_fence_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_present_fence_info_khr;
const void * pnext = {};
ktl::i32 swapchain_count;
const ktl::api::fence * p_fences;
};
struct swapchain_present_modes_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_present_modes_create_info_khr;
const void * pnext = {};
ktl::i32 present_mode_count;
const ktl::api::present_mode_khr * p_present_modes;
};
struct swapchain_present_mode_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_present_mode_info_khr;
const void * pnext = {};
ktl::i32 swapchain_count;
const ktl::api::present_mode_khr * p_present_modes;
};
struct swapchain_present_scaling_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_present_scaling_create_info_khr;
const void * pnext = {};
ktl::api::present_scaling_flags_khr scaling_behavior = {};
ktl::api::present_gravity_flags_khr present_gravity_x = {};
ktl::api::present_gravity_flags_khr present_gravity_y = {};
};
struct release_swapchain_images_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_release_swapchain_images_info_khr;
const void * pnext = {};
ktl::api::swapchain_khr swapchain;
ktl::i32 image_index_count;
const ktl::i32 * p_image_indices;
};
struct physical_device_depth_bias_control_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_depth_bias_control_features_ext;
void * pnext = {};
ktl::api::bool32 depth_bias_control;
ktl::api::bool32 least_representable_value_force_unorm_representation;
ktl::api::bool32 float_representation;
ktl::api::bool32 depth_bias_exact;
};
struct physical_device_ray_tracing_invocation_reorder_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_features_ext;
void * pnext = {};
ktl::api::bool32 ray_tracing_invocation_reorder;
};
struct physical_device_ray_tracing_invocation_reorder_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_features_nv;
void * pnext = {};
ktl::api::bool32 ray_tracing_invocation_reorder;
};
struct physical_device_ray_tracing_invocation_reorder_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_properties_ext;
void * pnext = {};
ktl::api::ray_tracing_invocation_reorder_mode_ext ray_tracing_invocation_reorder_reordering_hint;
ktl::i32 max_shader_binding_table_record_index;
};
struct physical_device_ray_tracing_invocation_reorder_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_properties_nv;
void * pnext = {};
ktl::api::ray_tracing_invocation_reorder_mode_ext ray_tracing_invocation_reorder_reordering_hint;
};
struct physical_device_extended_sparse_address_space_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_extended_sparse_address_space_features_nv;
void * pnext = {};
ktl::api::bool32 extended_sparse_address_space;
};
struct physical_device_extended_sparse_address_space_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_extended_sparse_address_space_properties_nv;
void * pnext = {};
ktl::api::dvsize extended_sparse_address_space_size;
ktl::api::image_usage_flags extended_sparse_image_usage_flags;
ktl::api::buffer_usage_flags extended_sparse_buffer_usage_flags;
};
struct direct_driver_loading_info_lunarg
{
ktl::api::structure_type stype = ktl::api::structure_type::v_direct_driver_loading_info_lunarg;
void * pnext = {};
ktl::api::direct_driver_loading_flags_lunarg flags;
ktl::api::pfn_get_instance_proc_addr_lunarg pfn_get_instance_proc_addr;
};
struct physical_device_multiview_per_view_viewports_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_multiview_per_view_viewports_features_qcom;
void * pnext = {};
ktl::api::bool32 multiview_per_view_viewports;
};
struct physical_device_ray_tracing_position_fetch_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ray_tracing_position_fetch_features_khr;
void * pnext = {};
ktl::api::bool32 ray_tracing_position_fetch;
};
struct physical_device_shader_core_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_core_properties_arm;
void * pnext = {};
ktl::i32 pixel_rate;
ktl::i32 texel_rate;
ktl::i32 fma_rate;
};
struct physical_device_multiview_per_view_render_areas_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_multiview_per_view_render_areas_features_qcom;
void * pnext = {};
ktl::api::bool32 multiview_per_view_render_areas;
};
struct query_low_latency_support_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_query_low_latency_support_nv;
const void * pnext = {};
void * p_queried_low_latency_data;
};
struct memory_map_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_map_info;
const void * pnext = {};
ktl::api::memory_map_flags flags = {};
ktl::api::device_memory memory;
ktl::api::dvsize offset;
ktl::api::dvsize size;
};
struct memory_unmap_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_unmap_info;
const void * pnext = {};
ktl::api::memory_unmap_flags flags = {};
ktl::api::device_memory memory;
};
struct physical_device_shader_object_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_object_features_ext;
void * pnext = {};
ktl::api::bool32 shader_object;
};
struct physical_device_shader_object_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_object_properties_ext;
void * pnext = {};
ktl::u8 shader_binary_uuid[KTL_API_UUID_SIZE];
ktl::i32 shader_binary_version;
};
struct physical_device_shader_tile_image_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_tile_image_features_ext;
void * pnext = {};
ktl::api::bool32 shader_tile_image_color_read_access;
ktl::api::bool32 shader_tile_image_depth_read_access;
ktl::api::bool32 shader_tile_image_stencil_read_access;
};
struct physical_device_shader_tile_image_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_tile_image_properties_ext;
void * pnext = {};
ktl::api::bool32 shader_tile_image_coherent_read_accelerated;
ktl::api::bool32 shader_tile_image_read_sample_from_pixel_rate_invocation;
ktl::api::bool32 shader_tile_image_read_from_helper_invocation;
};
struct import_screen_buffer_info_qnx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_screen_buffer_info_qnx;
const void * pnext = {};
_screen_buffer * buffer;
};
struct screen_buffer_properties_qnx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_screen_buffer_properties_qnx;
void * pnext = {};
ktl::api::dvsize allocation_size;
ktl::i32 memory_type_bits;
};
struct external_format_qnx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_format_qnx;
void * pnext = {};
ktl::u64 external_format;
};
struct physical_device_external_memory_screen_buffer_features_qnx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_memory_screen_buffer_features_qnx;
void * pnext = {};
ktl::api::bool32 screen_buffer_import;
};
struct physical_device_cooperative_matrix_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cooperative_matrix_features_khr;
void * pnext = {};
ktl::api::bool32 cooperative_matrix;
ktl::api::bool32 cooperative_matrix_robust_buffer_access;
};
struct cooperative_matrix_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cooperative_matrix_properties_khr;
void * pnext = {};
ktl::i32 msize;
ktl::i32 nsize;
ktl::i32 ksize;
ktl::api::component_type_khr atype;
ktl::api::component_type_khr btype;
ktl::api::component_type_khr ctype;
ktl::api::component_type_khr result_type;
ktl::api::bool32 saturating_accumulation;
ktl::api::scope_khr scope;
};
struct physical_device_cooperative_matrix_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cooperative_matrix_properties_khr;
void * pnext = {};
ktl::api::shader_stage_flags cooperative_matrix_supported_stages;
};
struct physical_device_cooperative_matrix_conversion_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cooperative_matrix_conversion_features_qcom;
void * pnext = {};
ktl::api::bool32 cooperative_matrix_conversion;
};
struct physical_device_shader_enqueue_properties_amdx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_enqueue_properties_amdx;
void * pnext = {};
ktl::i32 max_execution_graph_depth;
ktl::i32 max_execution_graph_shader_output_nodes;
ktl::i32 max_execution_graph_shader_payload_size;
ktl::i32 max_execution_graph_shader_payload_count;
ktl::i32 execution_graph_dispatch_address_alignment;
ktl::i32 max_execution_graph_workgroup_count[3];
ktl::i32 max_execution_graph_workgroups;
};
struct physical_device_shader_enqueue_features_amdx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_enqueue_features_amdx;
void * pnext = {};
ktl::api::bool32 shader_enqueue;
ktl::api::bool32 shader_mesh_enqueue;
};
struct pipeline_shader_stage_node_create_info_amdx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_shader_stage_node_create_info_amdx;
const void * pnext = {};
const char * p_name = {};
ktl::i32 index;
};
struct execution_graph_pipeline_scratch_size_amdx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_execution_graph_pipeline_scratch_size_amdx;
void * pnext = {};
ktl::api::dvsize min_size;
ktl::api::dvsize max_size;
ktl::api::dvsize size_granularity;
};
struct physical_device_anti_lag_features_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_anti_lag_features_amd;
void * pnext = {};
ktl::api::bool32 anti_lag;
};
struct anti_lag_presentation_info_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_anti_lag_presentation_info_amd;
void * pnext = {};
ktl::api::anti_lag_stage_amd stage;
ktl::u64 frame_index;
};
struct bind_memory_status
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_memory_status;
const void * pnext = {};
ktl::api::result * p_result;
};
struct physical_device_tile_memory_heap_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_tile_memory_heap_features_qcom;
void * pnext = {};
ktl::api::bool32 tile_memory_heap;
};
struct physical_device_tile_memory_heap_properties_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_tile_memory_heap_properties_qcom;
void * pnext = {};
ktl::api::bool32 queue_submit_boundary;
ktl::api::bool32 tile_buffer_transfers;
};
struct tile_memory_size_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tile_memory_size_info_qcom;
const void * pnext = {};
ktl::api::dvsize size;
};
struct tile_memory_requirements_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tile_memory_requirements_qcom;
void * pnext = {};
ktl::api::dvsize size;
ktl::api::dvsize alignment;
};
struct bind_descriptor_sets_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_descriptor_sets_info;
const void * pnext = {};
ktl::api::shader_stage_flags stage_flags;
ktl::api::pipeline_layout layout = {};
ktl::i32 first_set = {};
ktl::i32 descriptor_set_count;
const ktl::api::descriptor_set * p_descriptor_sets;
ktl::i32 dynamic_offset_count = {};
const ktl::i32 * p_dynamic_offsets;
};
struct push_constants_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_push_constants_info;
const void * pnext = {};
ktl::api::pipeline_layout layout = {};
ktl::api::shader_stage_flags stage_flags;
ktl::i32 offset = {};
ktl::i32 size;
const void * p_values;
};
struct push_descriptor_set_with_template_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_push_descriptor_set_with_template_info;
const void * pnext = {};
ktl::api::descriptor_update_template descriptor_update_template;
ktl::api::pipeline_layout layout = {};
ktl::i32 set = {};
const void * p_data;
};
struct set_descriptor_buffer_offsets_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_set_descriptor_buffer_offsets_info_ext;
const void * pnext = {};
ktl::api::shader_stage_flags stage_flags;
ktl::api::pipeline_layout layout = {};
ktl::i32 first_set = {};
ktl::i32 set_count;
const ktl::i32 * p_buffer_indices;
const ktl::api::dvsize * p_offsets;
};
struct bind_descriptor_buffer_embedded_samplers_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_descriptor_buffer_embedded_samplers_info_ext;
const void * pnext = {};
ktl::api::shader_stage_flags stage_flags;
ktl::api::pipeline_layout layout = {};
ktl::i32 set = {};
};
struct physical_device_cubic_clamp_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cubic_clamp_features_qcom;
void * pnext = {};
ktl::api::bool32 cubic_range_clamp;
};
struct physical_device_ycbcr_degamma_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_ycbcr_degamma_features_qcom;
void * pnext = {};
ktl::api::bool32 ycbcr_degamma;
};
struct sampler_ycbcr_conversion_ycbcr_degamma_create_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_ycbcr_conversion_ycbcr_degamma_create_info_qcom;
void * pnext = {};
ktl::api::bool32 enable_ydegamma;
ktl::api::bool32 enable_cb_cr_degamma;
};
struct physical_device_cubic_weights_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cubic_weights_features_qcom;
void * pnext = {};
ktl::api::bool32 selectable_cubic_weights;
};
struct sampler_cubic_weights_create_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_cubic_weights_create_info_qcom;
const void * pnext = {};
ktl::api::cubic_filter_weights_qcom cubic_weights;
};
struct blit_image_cubic_weights_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_blit_image_cubic_weights_info_qcom;
const void * pnext = {};
ktl::api::cubic_filter_weights_qcom cubic_weights;
};
struct physical_device_image_processing2features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_processing_2_features_qcom;
void * pnext = {};
ktl::api::bool32 texture_block_match2;
};
struct physical_device_descriptor_pool_overallocation_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_pool_overallocation_features_nv;
void * pnext = {};
ktl::api::bool32 descriptor_pool_overallocation;
};
struct physical_device_layered_driver_properties_msft
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_layered_driver_properties_msft;
void * pnext = {};
ktl::api::layered_driver_underlying_api_msft underlying_api;
};
struct physical_device_per_stage_descriptor_set_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_per_stage_descriptor_set_features_nv;
void * pnext = {};
ktl::api::bool32 per_stage_descriptor_set;
ktl::api::bool32 dynamic_pipeline_layout;
};
struct physical_device_external_format_resolve_features_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_format_resolve_features_android;
void * pnext = {};
ktl::api::bool32 external_format_resolve;
};
struct physical_device_external_format_resolve_properties_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_format_resolve_properties_android;
void * pnext = {};
ktl::api::bool32 null_color_attachment_with_external_format_resolve;
ktl::api::chroma_location external_format_resolve_chroma_offset_x;
ktl::api::chroma_location external_format_resolve_chroma_offset_y;
};
struct android_hardware_buffer_format_resolve_properties_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_android_hardware_buffer_format_resolve_properties_android;
void * pnext = {};
ktl::api::format color_attachment_format;
};
struct latency_sleep_mode_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_latency_sleep_mode_info_nv;
const void * pnext = {};
ktl::api::bool32 low_latency_mode;
ktl::api::bool32 low_latency_boost;
ktl::i32 minimum_interval_us;
};
struct latency_sleep_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_latency_sleep_info_nv;
const void * pnext = {};
ktl::api::semaphore signal_semaphore;
ktl::u64 value;
};
struct set_latency_marker_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_set_latency_marker_info_nv;
const void * pnext = {};
ktl::u64 present_id;
ktl::api::latency_marker_nv marker;
};
struct latency_timings_frame_report_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_latency_timings_frame_report_nv;
void * pnext = {};
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
struct out_of_band_queue_type_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_out_of_band_queue_type_info_nv;
const void * pnext = {};
ktl::api::out_of_band_queue_type_nv queue_type;
};
struct latency_submission_present_id_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_latency_submission_present_id_nv;
const void * pnext = {};
ktl::u64 present_id;
};
struct swapchain_latency_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_latency_create_info_nv;
const void * pnext = {};
ktl::api::bool32 latency_mode_enable = {};
};
struct latency_surface_capabilities_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_latency_surface_capabilities_nv;
const void * pnext = {};
ktl::i32 present_mode_count = {};
ktl::api::present_mode_khr * p_present_modes = {};
};
struct physical_device_cuda_kernel_launch_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cuda_kernel_launch_features_nv;
void * pnext = {};
ktl::api::bool32 cuda_kernel_launch_features;
};
struct physical_device_cuda_kernel_launch_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cuda_kernel_launch_properties_nv;
void * pnext = {};
ktl::i32 compute_capability_minor;
ktl::i32 compute_capability_major;
};
struct device_queue_shader_core_control_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_queue_shader_core_control_create_info_arm;
void * pnext = {};
ktl::i32 shader_core_count;
};
struct physical_device_scheduling_controls_features_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_scheduling_controls_features_arm;
void * pnext = {};
ktl::api::bool32 scheduling_controls;
};
struct physical_device_scheduling_controls_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_scheduling_controls_properties_arm;
void * pnext = {};
ktl::api::physical_device_scheduling_controls_flags_arm scheduling_controls_flags;
};
struct physical_device_scheduling_controls_dispatch_parameters_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_scheduling_controls_dispatch_parameters_properties_arm;
void * pnext = {};
ktl::i32 scheduling_controls_max_warps_count;
ktl::i32 scheduling_controls_max_queued_batches_count;
ktl::i32 scheduling_controls_max_work_group_batch_size;
};
struct dispatch_parameters_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_dispatch_parameters_arm;
void * pnext = {};
ktl::i32 work_group_batch_size = {};
ktl::i32 max_queued_work_group_batches = {};
ktl::i32 max_warps_per_shader_core = {};
};
struct physical_device_relaxed_line_rasterization_features_img
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_relaxed_line_rasterization_features_img;
void * pnext = {};
ktl::api::bool32 relaxed_line_rasterization;
};
struct physical_device_render_pass_striped_features_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_render_pass_striped_features_arm;
void * pnext = {};
ktl::api::bool32 render_pass_striped;
};
struct physical_device_pipeline_opacity_micromap_features_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pipeline_opacity_micromap_features_arm;
void * pnext = {};
ktl::api::bool32 pipeline_opacity_micromap;
};
struct physical_device_shader_maximal_reconvergence_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_maximal_reconvergence_features_khr;
void * pnext = {};
ktl::api::bool32 shader_maximal_reconvergence;
};
struct physical_device_shader_subgroup_rotate_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_subgroup_rotate_features;
void * pnext = {};
ktl::api::bool32 shader_subgroup_rotate;
ktl::api::bool32 shader_subgroup_rotate_clustered;
};
struct physical_device_shader_expect_assume_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_expect_assume_features;
void * pnext = {};
ktl::api::bool32 shader_expect_assume;
};
struct physical_device_shader_float_controls2features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_float_controls_2_features;
void * pnext = {};
ktl::api::bool32 shader_float_controls2;
};
struct physical_device_dynamic_rendering_local_read_features
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_dynamic_rendering_local_read_features;
void * pnext = {};
ktl::api::bool32 dynamic_rendering_local_read;
};
struct rendering_attachment_location_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_rendering_attachment_location_info;
const void * pnext = {};
ktl::i32 color_attachment_count = {};
const ktl::i32 * p_color_attachment_locations;
};
struct rendering_input_attachment_index_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_rendering_input_attachment_index_info;
const void * pnext = {};
ktl::i32 color_attachment_count = {};
const ktl::i32 * p_color_attachment_input_indices = {};
const ktl::i32 * p_depth_input_attachment_index = {};
const ktl::i32 * p_stencil_input_attachment_index = {};
};
struct physical_device_shader_quad_control_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_quad_control_features_khr;
void * pnext = {};
ktl::api::bool32 shader_quad_control;
};
struct physical_device_shader_atomic_float16vector_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_atomic_float16_vector_features_nv;
void * pnext = {};
ktl::api::bool32 shader_float16vector_atomics;
};
struct physical_device_map_memory_placed_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_map_memory_placed_features_ext;
void * pnext = {};
ktl::api::bool32 memory_map_placed;
ktl::api::bool32 memory_map_range_placed;
ktl::api::bool32 memory_unmap_reserve;
};
struct physical_device_map_memory_placed_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_map_memory_placed_properties_ext;
void * pnext = {};
ktl::api::dvsize min_placed_memory_map_alignment;
};
struct memory_map_placed_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_map_placed_info_ext;
const void * pnext = {};
void * p_placed_address;
};
struct physical_device_shader_bfloat16features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_bfloat16_features_khr;
void * pnext = {};
ktl::api::bool32 shader_bfloat16type;
ktl::api::bool32 shader_bfloat16dot_product;
ktl::api::bool32 shader_bfloat16cooperative_matrix;
};
struct physical_device_raw_access_chains_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_raw_access_chains_features_nv;
void * pnext = {};
ktl::api::bool32 shader_raw_access_chains;
};
struct physical_device_command_buffer_inheritance_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_command_buffer_inheritance_features_nv;
void * pnext = {};
ktl::api::bool32 command_buffer_inheritance;
};
struct physical_device_image_alignment_control_features_mesa
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_alignment_control_features_mesa;
void * pnext = {};
ktl::api::bool32 image_alignment_control;
};
struct physical_device_image_alignment_control_properties_mesa
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_alignment_control_properties_mesa;
void * pnext = {};
ktl::i32 supported_image_alignment_mask;
};
struct image_alignment_control_create_info_mesa
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_alignment_control_create_info_mesa;
const void * pnext = {};
ktl::i32 maximum_requested_alignment;
};
struct physical_device_shader_replicated_composites_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_replicated_composites_features_ext;
void * pnext = {};
ktl::api::bool32 shader_replicated_composites;
};
struct physical_device_present_mode_fifo_latest_ready_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_present_mode_fifo_latest_ready_features_khr;
void * pnext = {};
ktl::api::bool32 present_mode_fifo_latest_ready;
};
struct depth_clamp_range_ext
{
float min_depth_clamp;
float max_depth_clamp;
};
struct physical_device_cooperative_matrix2features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cooperative_matrix_2_features_nv;
void * pnext = {};
ktl::api::bool32 cooperative_matrix_workgroup_scope;
ktl::api::bool32 cooperative_matrix_flexible_dimensions;
ktl::api::bool32 cooperative_matrix_reductions;
ktl::api::bool32 cooperative_matrix_conversions;
ktl::api::bool32 cooperative_matrix_per_element_operations;
ktl::api::bool32 cooperative_matrix_tensor_addressing;
ktl::api::bool32 cooperative_matrix_block_loads;
};
struct physical_device_cooperative_matrix2properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cooperative_matrix_2_properties_nv;
void * pnext = {};
ktl::i32 cooperative_matrix_workgroup_scope_max_workgroup_size;
ktl::i32 cooperative_matrix_flexible_dimensions_max_dimension;
ktl::i32 cooperative_matrix_workgroup_scope_reserved_shared_memory;
};
struct cooperative_matrix_flexible_dimensions_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cooperative_matrix_flexible_dimensions_properties_nv;
void * pnext = {};
ktl::i32 mgranularity;
ktl::i32 ngranularity;
ktl::i32 kgranularity;
ktl::api::component_type_khr atype;
ktl::api::component_type_khr btype;
ktl::api::component_type_khr ctype;
ktl::api::component_type_khr result_type;
ktl::api::bool32 saturating_accumulation;
ktl::api::scope_khr scope;
ktl::i32 workgroup_invocations;
};
struct physical_device_hdr_vivid_features_huawei
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_hdr_vivid_features_huawei;
void * pnext = {};
ktl::api::bool32 hdr_vivid;
};
struct physical_device_vertex_attribute_robustness_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vertex_attribute_robustness_features_ext;
void * pnext = {};
ktl::api::bool32 vertex_attribute_robustness;
};
struct physical_device_dense_geometry_format_features_amdx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_dense_geometry_format_features_amdx;
void * pnext = {};
ktl::api::bool32 dense_geometry_format;
};
struct physical_device_depth_clamp_zero_one_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_depth_clamp_zero_one_features_khr;
void * pnext = {};
ktl::api::bool32 depth_clamp_zero_one;
};
struct physical_device_cooperative_vector_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cooperative_vector_features_nv;
void * pnext = {};
ktl::api::bool32 cooperative_vector;
ktl::api::bool32 cooperative_vector_training;
};
struct cooperative_vector_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cooperative_vector_properties_nv;
void * pnext = {};
ktl::api::component_type_khr input_type;
ktl::api::component_type_khr input_interpretation;
ktl::api::component_type_khr matrix_interpretation;
ktl::api::component_type_khr bias_interpretation;
ktl::api::component_type_khr result_type;
ktl::api::bool32 transpose;
};
struct physical_device_cooperative_vector_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_cooperative_vector_properties_nv;
void * pnext = {};
ktl::api::shader_stage_flags cooperative_vector_supported_stages;
ktl::api::bool32 cooperative_vector_training_float16accumulation;
ktl::api::bool32 cooperative_vector_training_float32accumulation;
ktl::i32 max_cooperative_vector_components;
};
struct physical_device_tile_shading_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_tile_shading_features_qcom;
void * pnext = {};
ktl::api::bool32 tile_shading;
ktl::api::bool32 tile_shading_fragment_stage;
ktl::api::bool32 tile_shading_color_attachments;
ktl::api::bool32 tile_shading_depth_attachments;
ktl::api::bool32 tile_shading_stencil_attachments;
ktl::api::bool32 tile_shading_input_attachments;
ktl::api::bool32 tile_shading_sampled_attachments;
ktl::api::bool32 tile_shading_per_tile_draw;
ktl::api::bool32 tile_shading_per_tile_dispatch;
ktl::api::bool32 tile_shading_dispatch_tile;
ktl::api::bool32 tile_shading_apron;
ktl::api::bool32 tile_shading_anisotropic_apron;
ktl::api::bool32 tile_shading_atomic_ops;
ktl::api::bool32 tile_shading_image_processing;
};
struct per_tile_begin_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_per_tile_begin_info_qcom;
const void * pnext = {};
};
struct per_tile_end_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_per_tile_end_info_qcom;
const void * pnext = {};
};
struct dispatch_tile_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_dispatch_tile_info_qcom;
const void * pnext = {};
};
struct physical_device_fragment_density_map_layered_properties_valve
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_density_map_layered_properties_valve;
void * pnext = {};
ktl::i32 max_fragment_density_map_layers;
};
struct physical_device_fragment_density_map_layered_features_valve
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_density_map_layered_features_valve;
void * pnext = {};
ktl::api::bool32 fragment_density_map_layered;
};
struct pipeline_fragment_density_map_layered_create_info_valve
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_fragment_density_map_layered_create_info_valve;
const void * pnext = {};
ktl::i32 max_fragment_density_map_layers;
};
struct set_present_config_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_set_present_config_nv;
const void * pnext = {};
ktl::i32 num_frames_per_batch;
ktl::i32 present_config_feedback;
};
struct physical_device_present_metering_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_present_metering_features_nv;
void * pnext = {};
ktl::api::bool32 present_metering;
};
struct external_compute_queue_device_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_compute_queue_device_create_info_nv;
const void * pnext = {};
ktl::i32 reserved_external_queues;
};
struct external_compute_queue_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_compute_queue_create_info_nv;
const void * pnext = {};
ktl::api::queue preferred_queue;
};
struct external_compute_queue_data_params_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_compute_queue_data_params_nv;
const void * pnext = {};
ktl::i32 device_index;
};
struct physical_device_external_compute_queue_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_compute_queue_properties_nv;
void * pnext = {};
ktl::i32 external_data_size;
ktl::i32 max_external_queues;
};
struct physical_device_shader_uniform_buffer_unsized_array_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_uniform_buffer_unsized_array_features_ext;
void * pnext = {};
ktl::api::bool32 shader_uniform_buffer_unsized_array;
};
struct physical_device_shader_mixed_float_dot_product_features_valve
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_mixed_float_dot_product_features_valve;
void * pnext = {};
ktl::api::bool32 shader_mixed_float_dot_product_float16acc_float32;
ktl::api::bool32 shader_mixed_float_dot_product_float16acc_float16;
ktl::api::bool32 shader_mixed_float_dot_product_bfloat16acc;
ktl::api::bool32 shader_mixed_float_dot_product_float8acc_float32;
};
struct physical_device_primitive_restart_index_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_primitive_restart_index_features_ext;
void * pnext = {};
ktl::api::bool32 primitive_restart_index;
};
struct physical_device_format_pack_features_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_format_pack_features_arm;
void * pnext = {};
ktl::api::bool32 format_pack;
};
struct tensor_description_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tensor_description_arm;
const void * pnext = {};
ktl::api::tensor_tiling_arm tiling;
ktl::api::format format;
ktl::i32 dimension_count;
const ktl::i64 * p_dimensions;
const ktl::i64 * p_strides = {};
ktl::api::tensor_usage_flags_arm usage;
};
struct tensor_view_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tensor_view_create_info_arm;
const void * pnext = {};
ktl::api::tensor_view_create_flags_arm flags = {};
ktl::api::tensor_arm tensor;
ktl::api::format format;
};
struct tensor_memory_requirements_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tensor_memory_requirements_info_arm;
const void * pnext = {};
ktl::api::tensor_arm tensor;
};
struct bind_tensor_memory_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_tensor_memory_info_arm;
const void * pnext = {};
ktl::api::tensor_arm tensor;
ktl::api::device_memory memory;
ktl::api::dvsize memory_offset;
};
struct write_descriptor_set_tensor_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_write_descriptor_set_tensor_arm;
const void * pnext = {};
ktl::i32 tensor_view_count;
const ktl::api::tensor_view_arm * p_tensor_views;
};
struct tensor_format_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tensor_format_properties_arm;
void * pnext = {};
ktl::api::format_feature_flags2 optimal_tiling_tensor_features;
ktl::api::format_feature_flags2 linear_tiling_tensor_features;
};
struct physical_device_tensor_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_tensor_properties_arm;
void * pnext = {};
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
ktl::api::bool32 shader_storage_tensor_array_non_uniform_indexing_native;
ktl::api::shader_stage_flags shader_tensor_supported_stages;
};
struct tensor_memory_barrier_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tensor_memory_barrier_arm;
const void * pnext = {};
ktl::api::pipeline_stage_flags2 src_stage_mask = {};
ktl::api::access_flags2 src_access_mask = {};
ktl::api::pipeline_stage_flags2 dst_stage_mask = {};
ktl::api::access_flags2 dst_access_mask = {};
ktl::i32 src_queue_family_index;
ktl::i32 dst_queue_family_index;
ktl::api::tensor_arm tensor;
};
struct physical_device_tensor_features_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_tensor_features_arm;
void * pnext = {};
ktl::api::bool32 tensor_non_packed;
ktl::api::bool32 shader_tensor_access;
ktl::api::bool32 shader_storage_tensor_array_dynamic_indexing;
ktl::api::bool32 shader_storage_tensor_array_non_uniform_indexing;
ktl::api::bool32 descriptor_binding_storage_tensor_update_after_bind;
ktl::api::bool32 tensors;
};
struct tensor_copy_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tensor_copy_arm;
const void * pnext = {};
ktl::i32 dimension_count = {};
const ktl::u64 * p_src_offset = {};
const ktl::u64 * p_dst_offset = {};
const ktl::u64 * p_extent = {};
};
struct memory_dedicated_allocate_info_tensor_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_dedicated_allocate_info_tensor_arm;
const void * pnext = {};
ktl::api::tensor_arm tensor;
};
struct physical_device_descriptor_buffer_tensor_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_buffer_tensor_properties_arm;
void * pnext = {};
ktl::usize tensor_capture_replay_descriptor_data_size;
ktl::usize tensor_view_capture_replay_descriptor_data_size;
ktl::usize tensor_descriptor_size;
};
struct physical_device_descriptor_buffer_tensor_features_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_buffer_tensor_features_arm;
void * pnext = {};
ktl::api::bool32 descriptor_buffer_tensor_descriptors;
};
struct tensor_capture_descriptor_data_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tensor_capture_descriptor_data_info_arm;
const void * pnext = {};
ktl::api::tensor_arm tensor;
};
struct tensor_view_capture_descriptor_data_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tensor_view_capture_descriptor_data_info_arm;
const void * pnext = {};
ktl::api::tensor_view_arm tensor_view;
};
struct descriptor_get_tensor_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_get_tensor_info_arm;
const void * pnext = {};
ktl::api::tensor_view_arm tensor_view = {};
};
struct frame_boundary_tensors_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_frame_boundary_tensors_arm;
const void * pnext = {};
ktl::i32 tensor_count;
const ktl::api::tensor_arm * p_tensors;
};
struct external_memory_tensor_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_memory_tensor_create_info_arm;
const void * pnext = {};
ktl::api::external_memory_handle_type_flags handle_types = {};
};
struct physical_device_shader_float8features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_float8_features_ext;
void * pnext = {};
ktl::api::bool32 shader_float8;
ktl::api::bool32 shader_float8cooperative_matrix;
};
struct surface_create_info_ohos
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_create_info_ohos;
const void * pnext = {};
ktl::api::surface_create_flags_ohos flags = {};
OHNativeWindow * window;
};
struct physical_device_data_graph_features_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_data_graph_features_arm;
void * pnext = {};
ktl::api::bool32 data_graph;
ktl::api::bool32 data_graph_update_after_bind;
ktl::api::bool32 data_graph_specialization_constants;
ktl::api::bool32 data_graph_descriptor_buffer;
ktl::api::bool32 data_graph_shader_module;
};
struct data_graph_pipeline_constant_tensor_semi_structured_sparsity_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_constant_tensor_semi_structured_sparsity_info_arm;
const void * pnext = {};
ktl::i32 dimension;
ktl::i32 zero_count;
ktl::i32 group_size;
};
struct data_graph_pipeline_constant_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_constant_arm;
const void * pnext = {};
ktl::i32 id;
const void * p_constant_data;
};
struct data_graph_pipeline_resource_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_resource_info_arm;
const void * pnext = {};
ktl::i32 descriptor_set;
ktl::i32 binding;
ktl::i32 array_element = {};
};
struct data_graph_pipeline_resource_info_image_layout_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_resource_info_image_layout_arm;
const void * pnext = {};
ktl::api::image_layout layout;
};
struct data_graph_pipeline_compiler_control_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_compiler_control_create_info_arm;
const void * pnext = {};
const char * p_vendor_options;
};
struct data_graph_pipeline_session_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_session_create_info_arm;
const void * pnext = {};
ktl::api::data_graph_pipeline_session_create_flags_arm flags = {};
ktl::api::pipeline data_graph_pipeline;
};
struct data_graph_pipeline_session_bind_point_requirements_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_session_bind_point_requirements_info_arm;
const void * pnext = {};
ktl::api::data_graph_pipeline_session_arm session;
};
struct data_graph_pipeline_session_bind_point_requirement_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_session_bind_point_requirement_arm;
void * pnext = {};
ktl::api::data_graph_pipeline_session_bind_point_arm bind_point;
ktl::api::data_graph_pipeline_session_bind_point_type_arm bind_point_type;
ktl::i32 num_objects;
};
struct data_graph_pipeline_session_memory_requirements_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_session_memory_requirements_info_arm;
const void * pnext = {};
ktl::api::data_graph_pipeline_session_arm session;
ktl::api::data_graph_pipeline_session_bind_point_arm bind_point;
ktl::i32 object_index;
};
struct bind_data_graph_pipeline_session_memory_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_data_graph_pipeline_session_memory_info_arm;
const void * pnext = {};
ktl::api::data_graph_pipeline_session_arm session;
ktl::api::data_graph_pipeline_session_bind_point_arm bind_point;
ktl::i32 object_index;
ktl::api::device_memory memory;
ktl::api::dvsize memory_offset;
};
struct data_graph_pipeline_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_info_arm;
const void * pnext = {};
ktl::api::pipeline data_graph_pipeline;
};
struct data_graph_pipeline_property_query_result_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_property_query_result_arm;
void * pnext = {};
ktl::api::data_graph_pipeline_property_arm property;
ktl::api::bool32 is_text;
ktl::usize data_size = {};
void * p_data = {};
};
struct data_graph_pipeline_identifier_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_identifier_create_info_arm;
const void * pnext = {};
ktl::i32 identifier_size;
const ktl::u8 * p_identifier;
};
struct data_graph_pipeline_dispatch_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_dispatch_info_arm;
void * pnext = {};
ktl::api::data_graph_pipeline_dispatch_flags_arm flags = {};
};
struct physical_device_data_graph_processing_engine_arm
{
ktl::api::physical_device_data_graph_processing_engine_type_arm type;
ktl::api::bool32 is_foreign;
};
struct physical_device_data_graph_operation_support_arm
{
ktl::api::physical_device_data_graph_operation_type_arm operation_type;
char name[KTL_API_MAX_PHYSICAL_DEVICE_DATA_GRAPH_OPERATION_SET_NAME_SIZE_ARM];
ktl::i32 version;
};
struct physical_device_queue_family_data_graph_processing_engine_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_queue_family_data_graph_processing_engine_info_arm;
const void * pnext = {};
ktl::i32 queue_family_index;
ktl::api::physical_device_data_graph_processing_engine_type_arm engine_type;
};
struct queue_family_data_graph_processing_engine_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_queue_family_data_graph_processing_engine_properties_arm;
void * pnext = {};
ktl::api::external_semaphore_handle_type_flags foreign_semaphore_handle_types;
ktl::api::external_memory_handle_type_flags foreign_memory_handle_types;
};
struct physical_device_pipeline_cache_incremental_mode_features_sec
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_pipeline_cache_incremental_mode_features_sec;
void * pnext = {};
ktl::api::bool32 pipeline_cache_incremental_mode;
};
struct physical_device_data_graph_model_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_data_graph_model_features_qcom;
void * pnext = {};
ktl::api::bool32 data_graph_model;
};
struct physical_device_shader_untyped_pointers_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_untyped_pointers_features_khr;
void * pnext = {};
ktl::api::bool32 shader_untyped_pointers;
};
struct native_buffer_ohos
{
ktl::api::structure_type stype = ktl::api::structure_type::v_native_buffer_ohos;
const void * pnext = {};
OHBufferHandle * handle;
};
struct swapchain_image_create_info_ohos
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_image_create_info_ohos;
const void * pnext = {};
ktl::api::swapchain_image_usage_flags_ohos usage;
};
struct physical_device_presentation_properties_ohos
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_presentation_properties_ohos;
void * pnext = {};
ktl::api::bool32 shared_image;
};
struct physical_device_shader64bit_indexing_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_64_bit_indexing_features_ext;
void * pnext = {};
ktl::api::bool32 shader64bit_indexing;
};
struct native_buffer_usage_ohos
{
ktl::api::structure_type stype = ktl::api::structure_type::v_native_buffer_usage_ohos;
void * pnext = {};
ktl::u64 ohosnative_buffer_usage;
};
struct native_buffer_properties_ohos
{
ktl::api::structure_type stype = ktl::api::structure_type::v_native_buffer_properties_ohos;
void * pnext = {};
ktl::api::dvsize allocation_size;
ktl::i32 memory_type_bits;
};
struct import_native_buffer_info_ohos
{
ktl::api::structure_type stype = ktl::api::structure_type::v_import_native_buffer_info_ohos;
const void * pnext = {};
OH_NativeBuffer * buffer;
};
struct memory_get_native_buffer_info_ohos
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_get_native_buffer_info_ohos;
const void * pnext = {};
ktl::api::device_memory memory;
};
struct external_format_ohos
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_format_ohos;
void * pnext = {};
ktl::u64 external_format;
};
struct perf_hint_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_perf_hint_info_qcom;
void * pnext = {};
ktl::api::perf_hint_type_qcom type;
ktl::i32 scale;
};
struct physical_device_queue_perf_hint_features_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_queue_perf_hint_features_qcom;
void * pnext = {};
ktl::api::bool32 queue_perf_hint;
};
struct physical_device_queue_perf_hint_properties_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_queue_perf_hint_properties_qcom;
void * pnext = {};
ktl::api::queue_flags supported_queues;
};
struct physical_device_performance_counters_by_region_features_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_performance_counters_by_region_features_arm;
void * pnext = {};
ktl::api::bool32 performance_counters_by_region;
};
struct performance_counter_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_performance_counter_arm;
void * pnext = {};
ktl::i32 counter_id;
};
struct performance_counter_description_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_performance_counter_description_arm;
void * pnext = {};
ktl::api::performance_counter_description_flags_arm flags = {};
char name[KTL_API_MAX_DESCRIPTION_SIZE];
};
struct render_pass_performance_counters_by_region_begin_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_performance_counters_by_region_begin_info_arm;
void * pnext = {};
ktl::i32 counter_address_count;
const ktl::api::dvaddr * p_counter_addresses;
ktl::api::bool32 serialize_regions;
ktl::i32 counter_index_count;
ktl::i32 * p_counter_indices;
};
struct compute_occupancy_priority_parameters_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_compute_occupancy_priority_parameters_nv;
const void * pnext = {};
float occupancy_priority;
float occupancy_throttling;
};
struct physical_device_compute_occupancy_priority_features_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_compute_occupancy_priority_features_nv;
void * pnext = {};
ktl::api::bool32 compute_occupancy_priority;
};
struct physical_device_shader_long_vector_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_long_vector_features_ext;
void * pnext = {};
ktl::api::bool32 long_vector;
};
struct physical_device_shader_long_vector_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_long_vector_properties_ext;
void * pnext = {};
ktl::i32 max_vector_components;
};
struct physical_device_texture_compression_astc3dfeatures_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_texture_compression_astc_3d_features_ext;
void * pnext = {};
ktl::api::bool32 texture_compression_astc_3d;
};
struct physical_device_shader_subgroup_partitioned_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_subgroup_partitioned_features_ext;
void * pnext = {};
ktl::api::bool32 shader_subgroup_partitioned;
};
struct host_address_range_ext
{
void * address;
ktl::usize size;
};
struct host_address_range_const_ext
{
const void * address;
ktl::usize size;
};
struct descriptor_mapping_source_heap_data_ext
{
ktl::i32 heap_offset;
ktl::i32 push_offset;
};
struct descriptor_mapping_source_indirect_address_ext
{
ktl::i32 push_offset;
ktl::i32 address_offset;
};
struct sampler_custom_border_color_index_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_custom_border_color_index_create_info_ext;
const void * pnext = {};
ktl::i32 index;
};
struct indirect_commands_layout_push_data_token_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_indirect_commands_layout_push_data_token_nv;
const void * pnext = {};
ktl::i32 push_data_offset;
ktl::i32 push_data_size;
};
struct subsampled_image_format_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_subsampled_image_format_properties_ext;
const void * pnext = {};
ktl::i32 subsampled_image_descriptor_count;
};
struct physical_device_descriptor_heap_features_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_heap_features_ext;
void * pnext = {};
ktl::api::bool32 descriptor_heap;
ktl::api::bool32 descriptor_heap_capture_replay;
};
struct physical_device_descriptor_heap_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_heap_properties_ext;
void * pnext = {};
ktl::api::dvsize sampler_heap_alignment;
ktl::api::dvsize resource_heap_alignment;
ktl::api::dvsize max_sampler_heap_size;
ktl::api::dvsize max_resource_heap_size;
ktl::api::dvsize min_sampler_heap_reserved_range;
ktl::api::dvsize min_sampler_heap_reserved_range_with_embedded;
ktl::api::dvsize min_resource_heap_reserved_range;
ktl::api::dvsize sampler_descriptor_size;
ktl::api::dvsize image_descriptor_size;
ktl::api::dvsize buffer_descriptor_size;
ktl::api::dvsize sampler_descriptor_alignment;
ktl::api::dvsize image_descriptor_alignment;
ktl::api::dvsize buffer_descriptor_alignment;
ktl::api::dvsize max_push_data_size;
ktl::usize image_capture_replay_opaque_data_size;
ktl::i32 max_descriptor_heap_embedded_samplers;
ktl::i32 sampler_ycbcr_conversion_count;
ktl::api::bool32 sparse_descriptor_heaps;
ktl::api::bool32 protected_descriptor_heaps;
};
struct physical_device_descriptor_heap_tensor_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_descriptor_heap_tensor_properties_arm;
void * pnext = {};
ktl::api::dvsize tensor_descriptor_size;
ktl::api::dvsize tensor_descriptor_alignment;
ktl::usize tensor_capture_replay_opaque_data_size;
};
struct physical_device_shader_instrumentation_features_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_instrumentation_features_arm;
void * pnext = {};
ktl::api::bool32 shader_instrumentation;
};
struct physical_device_shader_instrumentation_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_instrumentation_properties_arm;
void * pnext = {};
ktl::i32 num_metrics;
ktl::api::bool32 per_basic_block_granularity;
};
struct shader_instrumentation_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_shader_instrumentation_create_info_arm;
void * pnext = {};
};
struct shader_instrumentation_metric_description_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_shader_instrumentation_metric_description_arm;
void * pnext = {};
char name[KTL_API_MAX_DESCRIPTION_SIZE];
char description[KTL_API_MAX_DESCRIPTION_SIZE];
};
struct shader_instrumentation_metric_data_header_arm
{
ktl::i32 result_index;
ktl::i32 result_sub_index;
ktl::api::shader_stage_flags stages;
ktl::i32 basic_block_index;
};
struct device_address_range_khr
{
ktl::api::dvaddr address = {};
ktl::api::dvsize size;
};
struct physical_device_device_address_commands_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_device_address_commands_features_khr;
void * pnext = {};
ktl::api::bool32 device_address_commands;
};
struct physical_device_shader_constant_data_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_constant_data_features_khr;
void * pnext = {};
ktl::api::bool32 shader_constant_data;
};
struct physical_device_shader_abort_features_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_abort_features_khr;
void * pnext = {};
ktl::api::bool32 shader_abort;
};
struct physical_device_shader_abort_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shader_abort_properties_khr;
void * pnext = {};
ktl::u64 max_shader_abort_message_size;
};
struct device_fault_shader_abort_message_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_fault_shader_abort_message_info_khr;
void * pnext = {};
ktl::u64 message_data_size = {};
void * p_message_data = {};
};
struct data_graph_tosaname_quality_arm
{
char name[KTL_API_MAX_DATA_GRAPH_TOSA_NAME_SIZE_ARM];
ktl::api::data_graph_tosaquality_flags_arm quality_flags;
};
struct data_graph_pipeline_single_node_connection_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_single_node_connection_arm;
void * pnext = {};
ktl::i32 set;
ktl::i32 binding;
ktl::api::data_graph_pipeline_node_connection_type_arm connection;
};
struct physical_device_data_graph_optical_flow_features_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_data_graph_optical_flow_features_arm;
void * pnext = {};
ktl::api::bool32 data_graph_optical_flow;
};
struct queue_family_data_graph_optical_flow_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_queue_family_data_graph_optical_flow_properties_arm;
void * pnext = {};
ktl::api::data_graph_optical_flow_grid_size_flags_arm supported_output_grid_sizes;
ktl::api::data_graph_optical_flow_grid_size_flags_arm supported_hint_grid_sizes;
ktl::api::bool32 hint_supported;
ktl::api::bool32 cost_supported;
ktl::i32 min_width;
ktl::i32 min_height;
ktl::i32 max_width;
ktl::i32 max_height;
};
struct data_graph_optical_flow_image_format_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_optical_flow_image_format_info_arm;
const void * pnext = {};
ktl::api::data_graph_optical_flow_image_usage_flags_arm usage;
};
struct data_graph_optical_flow_image_format_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_optical_flow_image_format_properties_arm;
void * pnext = {};
ktl::api::format format;
};
struct data_graph_pipeline_optical_flow_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_optical_flow_create_info_arm;
void * pnext = {};
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
struct data_graph_pipeline_optical_flow_dispatch_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_optical_flow_dispatch_info_arm;
void * pnext = {};
ktl::api::data_graph_optical_flow_execute_flags_arm flags = {};
ktl::i32 mean_flow_l1norm_hint = {};
};
struct render_pass_fragment_density_map_offset_end_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_fragment_density_map_offset_end_info_ext;
const void * pnext = {};
ktl::i32 fragment_density_offset_count = {};
const ktl::api::offset2d * p_fragment_density_offsets;
};
struct rect2d
{
ktl::api::offset2d offset;
ktl::api::extent2d extent;
};
struct display_properties_khr
{
ktl::api::display_khr display;
const char * display_name;
ktl::api::extent2d physical_dimensions;
ktl::api::extent2d physical_resolution;
ktl::api::surface_transform_flags_khr supported_transforms = {};
ktl::api::bool32 plane_reorder_possible;
ktl::api::bool32 persistent_content;
};
struct display_mode_parameters_khr
{
ktl::api::extent2d visible_region;
ktl::i32 refresh_rate;
};
struct display_plane_capabilities_khr
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
struct display_surface_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_surface_create_info_khr;
const void * pnext = {};
ktl::api::display_surface_create_flags_khr flags = {};
ktl::api::display_mode_khr display_mode;
ktl::i32 plane_index;
ktl::i32 plane_stack_index;
ktl::api::surface_transform_flag_bits_khr transform;
float global_alpha;
ktl::api::display_plane_alpha_flag_bits_khr alpha_mode;
ktl::api::extent2d image_extent;
};
struct surface_capabilities_khr
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
struct swapchain_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_swapchain_create_info_khr;
const void * pnext = {};
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
const ktl::i32 * p_queue_family_indices;
ktl::api::surface_transform_flag_bits_khr pre_transform;
ktl::api::composite_alpha_flag_bits_khr composite_alpha;
ktl::api::present_mode_khr present_mode;
ktl::api::bool32 clipped;
ktl::api::swapchain_khr old_swapchain = {};
};
struct rect_layer_khr
{
ktl::api::offset2d offset;
ktl::api::extent2d extent;
ktl::i32 layer;
};
struct surface_capabilities2ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_capabilities_2_ext;
void * pnext = {};
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
struct physical_device_sample_locations_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_sample_locations_properties_ext;
void * pnext = {};
ktl::api::sample_count_flags sample_location_sample_counts;
ktl::api::extent2d max_sample_location_grid_size;
float sample_location_coordinate_range[2];
ktl::i32 sample_location_sub_pixel_bits;
ktl::api::bool32 variable_sample_locations;
};
struct multisample_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_multisample_properties_ext;
void * pnext = {};
ktl::api::extent2d max_sample_location_grid_size;
};
struct physical_device_shading_rate_image_properties_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_shading_rate_image_properties_nv;
void * pnext = {};
ktl::api::extent2d shading_rate_texel_size;
ktl::i32 shading_rate_palette_size;
ktl::i32 shading_rate_max_coarse_samples;
};
struct physical_device_fragment_density_map_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_density_map_properties_ext;
void * pnext = {};
ktl::api::extent2d min_fragment_density_texel_size;
ktl::api::extent2d max_fragment_density_texel_size;
ktl::api::bool32 fragment_density_invocations;
};
struct physical_device_fragment_density_map_offset_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_density_map_offset_properties_ext;
void * pnext = {};
ktl::api::extent2d fragment_density_offset_granularity;
};
struct pipeline_fragment_shading_rate_state_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_fragment_shading_rate_state_create_info_khr;
const void * pnext = {};
ktl::api::extent2d fragment_size;
ktl::api::fragment_shading_rate_combiner_op_khr combiner_ops[2];
};
struct physical_device_fragment_shading_rate_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_shading_rate_properties_khr;
void * pnext = {};
ktl::api::extent2d min_fragment_shading_rate_attachment_texel_size;
ktl::api::extent2d max_fragment_shading_rate_attachment_texel_size;
ktl::i32 max_fragment_shading_rate_attachment_texel_size_aspect_ratio;
ktl::api::bool32 primitive_fragment_shading_rate_with_multiple_viewports;
ktl::api::bool32 layered_shading_rate_attachments;
ktl::api::bool32 fragment_shading_rate_non_trivial_combiner_ops;
ktl::api::extent2d max_fragment_size;
ktl::i32 max_fragment_size_aspect_ratio;
ktl::i32 max_fragment_shading_rate_coverage_samples;
ktl::api::sample_count_flag_bits max_fragment_shading_rate_rasterization_samples;
ktl::api::bool32 fragment_shading_rate_with_shader_depth_stencil_writes;
ktl::api::bool32 fragment_shading_rate_with_sample_mask;
ktl::api::bool32 fragment_shading_rate_with_shader_sample_mask;
ktl::api::bool32 fragment_shading_rate_with_conservative_rasterization;
ktl::api::bool32 fragment_shading_rate_with_fragment_shader_interlock;
ktl::api::bool32 fragment_shading_rate_with_custom_sample_locations;
ktl::api::bool32 fragment_shading_rate_strict_multiply_combiner;
};
struct physical_device_fragment_shading_rate_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_fragment_shading_rate_khr;
void * pnext = {};
ktl::api::sample_count_flags sample_counts;
ktl::api::extent2d fragment_size;
};
struct rendering_fragment_shading_rate_attachment_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_rendering_fragment_shading_rate_attachment_info_khr;
const void * pnext = {};
ktl::api::image_view image_view = {};
ktl::api::image_layout image_layout;
ktl::api::extent2d shading_rate_attachment_texel_size;
};
struct image_view_sample_weight_create_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_view_sample_weight_create_info_qcom;
const void * pnext = {};
ktl::api::offset2d filter_center;
ktl::api::extent2d filter_size;
ktl::i32 num_phases;
};
struct physical_device_image_processing_properties_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_processing_properties_qcom;
void * pnext = {};
ktl::i32 max_weight_filter_phases = {};
ktl::api::extent2d max_weight_filter_dimension = {};
ktl::api::extent2d max_block_match_region = {};
ktl::api::extent2d max_box_filter_block_size = {};
};
struct surface_present_scaling_capabilities_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_present_scaling_capabilities_khr;
void * pnext = {};
ktl::api::present_scaling_flags_khr supported_present_scaling = {};
ktl::api::present_gravity_flags_khr supported_present_gravity_x = {};
ktl::api::present_gravity_flags_khr supported_present_gravity_y = {};
ktl::api::extent2d min_scaled_image_extent = {};
ktl::api::extent2d max_scaled_image_extent = {};
};
struct physical_device_image_processing2properties_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_image_processing_2_properties_qcom;
void * pnext = {};
ktl::api::extent2d max_block_match_window = {};
};
struct sampler_block_match_window_create_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_block_match_window_create_info_qcom;
const void * pnext = {};
ktl::api::extent2d window_extent;
ktl::api::block_match_window_compare_mode_qcom window_compare_mode;
};
struct physical_device_render_pass_striped_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_render_pass_striped_properties_arm;
void * pnext = {};
ktl::api::extent2d render_pass_stripe_granularity;
ktl::i32 max_render_pass_stripes;
};
struct physical_device_tile_shading_properties_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_tile_shading_properties_qcom;
void * pnext = {};
ktl::i32 max_apron_size;
ktl::api::bool32 prefer_non_coherent;
ktl::api::extent2d tile_granularity;
ktl::api::extent2d max_tile_shading_rate;
};
struct render_pass_tile_shading_create_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_tile_shading_create_info_qcom;
const void * pnext = {};
ktl::api::tile_shading_render_pass_flags_qcom flags = {};
ktl::api::extent2d tile_apron_size = {};
};
struct physical_device_performance_counters_by_region_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_performance_counters_by_region_properties_arm;
void * pnext = {};
ktl::i32 max_per_region_performance_counters;
ktl::api::extent2d performance_counter_region_size;
ktl::i32 row_stride_alignment;
ktl::i32 region_alignment;
ktl::api::bool32 identity_transform_order;
};
struct queue_family_properties
{
ktl::api::queue_flags queue_flags = {};
ktl::i32 queue_count;
ktl::i32 timestamp_valid_bits;
ktl::api::extent3d min_image_transfer_granularity;
};
struct sparse_image_format_properties
{
ktl::api::image_aspect_flags aspect_mask = {};
ktl::api::extent3d image_granularity;
ktl::api::sparse_image_format_flags flags = {};
};
struct image_format_properties
{
ktl::api::extent3d max_extent;
ktl::i32 max_mip_levels;
ktl::i32 max_array_layers;
ktl::api::sample_count_flags sample_counts = {};
ktl::api::dvsize max_resource_size;
};
struct image_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_create_info;
const void * pnext = {};
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
const ktl::i32 * p_queue_family_indices;
ktl::api::image_layout initial_layout;
};
struct tile_properties_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tile_properties_qcom;
void * pnext = {};
ktl::api::extent3d tile_size;
ktl::api::extent2d apron_size;
ktl::api::offset2d origin;
};
struct command_buffer_inheritance_viewport_scissor_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_buffer_inheritance_viewport_scissor_info_nv;
const void * pnext = {};
ktl::api::bool32 viewport_scissor2d;
ktl::i32 viewport_depth_count;
const ktl::api::viewport * p_viewport_depths;
};
struct sampler_ycbcr_conversion_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_ycbcr_conversion_create_info;
const void * pnext = {};
ktl::api::format format;
ktl::api::sampler_ycbcr_model_conversion ycbcr_model;
ktl::api::sampler_ycbcr_range ycbcr_range;
ktl::api::component_mapping components;
ktl::api::chroma_location x_chroma_offset;
ktl::api::chroma_location y_chroma_offset;
ktl::api::filter chroma_filter;
const ktl::api::bool32 force_explicit_reconstruction;
};
struct android_hardware_buffer_format_properties_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_android_hardware_buffer_format_properties_android;
void * pnext = {};
ktl::api::format format;
ktl::u64 external_format;
ktl::api::format_feature_flags format_features;
ktl::api::component_mapping sampler_ycbcr_conversion_components;
ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
ktl::api::sampler_ycbcr_range suggested_ycbcr_range;
ktl::api::chroma_location suggested_xchroma_offset;
ktl::api::chroma_location suggested_ychroma_offset;
};
struct sampler_border_color_component_mapping_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_border_color_component_mapping_create_info_ext;
const void * pnext = {};
ktl::api::component_mapping components;
ktl::api::bool32 srgb;
};
struct android_hardware_buffer_format_properties2android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_android_hardware_buffer_format_properties_2_android;
void * pnext = {};
ktl::api::format format;
ktl::u64 external_format;
ktl::api::format_feature_flags2 format_features;
ktl::api::component_mapping sampler_ycbcr_conversion_components;
ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
ktl::api::sampler_ycbcr_range suggested_ycbcr_range;
ktl::api::chroma_location suggested_xchroma_offset;
ktl::api::chroma_location suggested_ychroma_offset;
};
struct screen_buffer_format_properties_qnx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_screen_buffer_format_properties_qnx;
void * pnext = {};
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
struct native_buffer_format_properties_ohos
{
ktl::api::structure_type stype = ktl::api::structure_type::v_native_buffer_format_properties_ohos;
void * pnext = {};
ktl::api::format format;
ktl::u64 external_format;
ktl::api::format_feature_flags format_features;
ktl::api::component_mapping sampler_ycbcr_conversion_components;
ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
ktl::api::sampler_ycbcr_range suggested_ycbcr_range;
ktl::api::chroma_location suggested_xchroma_offset;
ktl::api::chroma_location suggested_ychroma_offset;
};
struct instance_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_instance_create_info;
const void * pnext = {};
ktl::api::instance_create_flags flags = {};
const ktl::api::application_info * p_application_info = {};
ktl::i32 enabled_layer_count = {};
const char * pp_enabled_layer_names;
ktl::i32 enabled_extension_count = {};
const char * pp_enabled_extension_names;
};
struct memory_requirements2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_requirements_2;
void * pnext = {};
ktl::api::memory_requirements memory_requirements;
};
struct physical_device_memory_properties
{
ktl::i32 memory_type_count;
ktl::api::memory_type memory_types[KTL_API_MAX_MEMORY_TYPES];
ktl::i32 memory_heap_count;
ktl::api::memory_heap memory_heaps[KTL_API_MAX_MEMORY_HEAPS];
};
struct format_properties2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_format_properties_2;
void * pnext = {};
ktl::api::format_properties format_properties;
};
struct write_descriptor_set
{
ktl::api::structure_type stype = ktl::api::structure_type::v_write_descriptor_set;
const void * pnext = {};
ktl::api::descriptor_set dst_set;
ktl::i32 dst_binding;
ktl::i32 dst_array_element;
ktl::i32 descriptor_count;
ktl::api::descriptor_type descriptor_type;
const ktl::api::descriptor_image_info * p_image_info;
const ktl::api::descriptor_buffer_info * p_buffer_info;
const ktl::api::buffer_view * p_texel_buffer_view;
};
struct device_buffer_memory_requirements
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_buffer_memory_requirements;
const void * pnext = {};
const ktl::api::buffer_create_info * p_create_info;
};
struct sparse_image_memory_bind
{
ktl::api::image_subresource subresource;
ktl::api::offset3d offset;
ktl::api::extent3d extent;
ktl::api::device_memory memory = {};
ktl::api::dvsize memory_offset;
ktl::api::sparse_memory_bind_flags flags = {};
};
struct image_subresource2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_subresource_2;
void * pnext = {};
ktl::api::image_subresource image_subresource;
};
struct image_copy
{
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offset;
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offset;
ktl::api::extent3d extent;
};
struct image_blit
{
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offsets[2];
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offsets[2];
};
struct buffer_image_copy
{
ktl::api::dvsize buffer_offset;
ktl::i32 buffer_row_length;
ktl::i32 buffer_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};
struct copy_memory_to_image_indirect_command_khr
{
ktl::api::dvaddr src_address;
ktl::i32 buffer_row_length;
ktl::i32 buffer_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};
struct image_resolve
{
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offset;
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offset;
ktl::api::extent3d extent;
};
struct image_copy2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_copy_2;
const void * pnext = {};
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offset;
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offset;
ktl::api::extent3d extent;
};
struct image_blit2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_blit_2;
const void * pnext = {};
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offsets[2];
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offsets[2];
};
struct buffer_image_copy2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_image_copy_2;
const void * pnext = {};
ktl::api::dvsize buffer_offset;
ktl::i32 buffer_row_length;
ktl::i32 buffer_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};
struct image_resolve2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_resolve_2;
const void * pnext = {};
ktl::api::image_subresource_layers src_subresource;
ktl::api::offset3d src_offset;
ktl::api::image_subresource_layers dst_subresource;
ktl::api::offset3d dst_offset;
ktl::api::extent3d extent;
};
struct memory_to_image_copy
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_to_image_copy;
const void * pnext = {};
const void * p_host_pointer;
ktl::i32 memory_row_length;
ktl::i32 memory_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};
struct image_to_memory_copy
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_to_memory_copy;
const void * pnext = {};
void * p_host_pointer;
ktl::i32 memory_row_length;
ktl::i32 memory_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};
struct image_memory_barrier
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_memory_barrier;
const void * pnext = {};
ktl::api::access_flags src_access_mask;
ktl::api::access_flags dst_access_mask;
ktl::api::image_layout old_layout;
ktl::api::image_layout new_layout;
ktl::i32 src_queue_family_index;
ktl::i32 dst_queue_family_index;
ktl::api::image image;
ktl::api::image_subresource_range subresource_range;
};
struct image_view_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_view_create_info;
const void * pnext = {};
ktl::api::image_view_create_flags flags = {};
ktl::api::image image;
ktl::api::image_view_type view_type;
ktl::api::format format;
ktl::api::component_mapping components;
ktl::api::image_subresource_range subresource_range;
};
struct image_memory_barrier2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_memory_barrier_2;
const void * pnext = {};
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
struct host_image_layout_transition_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_host_image_layout_transition_info;
const void * pnext = {};
ktl::api::image image;
ktl::api::image_layout old_layout;
ktl::api::image_layout new_layout;
ktl::api::image_subresource_range subresource_range;
};
struct image_drm_format_modifier_explicit_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_drm_format_modifier_explicit_create_info_ext;
const void * pnext = {};
ktl::u64 drm_format_modifier;
ktl::i32 drm_format_modifier_plane_count;
const ktl::api::subresource_layout * p_plane_layouts;
};
struct subresource_layout2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_subresource_layout_2;
void * pnext = {};
ktl::api::subresource_layout subresource_layout;
};
struct sparse_buffer_memory_bind_info
{
ktl::api::buffer buffer;
ktl::i32 bind_count;
const ktl::api::sparse_memory_bind * p_binds;
};
struct sparse_image_opaque_memory_bind_info
{
ktl::api::image image;
ktl::i32 bind_count;
const ktl::api::sparse_memory_bind * p_binds;
};
struct copy_memory_indirect_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_memory_indirect_info_khr;
const void * pnext = {};
ktl::api::address_copy_flags_khr src_copy_flags = {};
ktl::api::address_copy_flags_khr dst_copy_flags = {};
ktl::i32 copy_count;
ktl::api::strided_device_address_range_khr copy_address_range;
};
struct copy_memory_to_image_indirect_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_memory_to_image_indirect_info_khr;
const void * pnext = {};
ktl::api::address_copy_flags_khr src_copy_flags = {};
ktl::i32 copy_count;
ktl::api::strided_device_address_range_khr copy_address_range;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
const ktl::api::image_subresource_layers * p_image_subresources;
};
struct bind_vertex_buffer3info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_vertex_buffer_3_info_khr;
const void * pnext = {};
ktl::api::bool32 set_stride;
ktl::api::strided_device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
};
struct draw_indirect2info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_draw_indirect_2_info_khr;
const void * pnext = {};
ktl::api::strided_device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::i32 draw_count;
};
struct descriptor_set_layout_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_set_layout_create_info;
const void * pnext = {};
ktl::api::descriptor_set_layout_create_flags flags = {};
ktl::i32 binding_count = {};
const ktl::api::descriptor_set_layout_binding * p_bindings;
};
struct descriptor_pool_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_pool_create_info;
const void * pnext = {};
ktl::api::descriptor_pool_create_flags flags = {};
ktl::i32 max_sets;
ktl::i32 pool_size_count = {};
const ktl::api::descriptor_pool_size * p_pool_sizes;
};
struct specialization_info
{
ktl::i32 map_entry_count = {};
const ktl::api::specialization_map_entry * p_map_entries;
ktl::usize data_size = {};
const void * p_data;
};
struct pipeline_vertex_input_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_vertex_input_state_create_info;
const void * pnext = {};
ktl::api::pipeline_vertex_input_state_create_flags flags = {};
ktl::i32 vertex_binding_description_count = {};
const ktl::api::vertex_input_binding_description * p_vertex_binding_descriptions;
ktl::i32 vertex_attribute_description_count = {};
const ktl::api::vertex_input_attribute_description * p_vertex_attribute_descriptions;
};
struct pipeline_color_blend_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_color_blend_state_create_info;
const void * pnext = {};
ktl::api::pipeline_color_blend_state_create_flags flags = {};
ktl::api::bool32 logic_op_enable;
ktl::api::logic_op logic_op;
ktl::i32 attachment_count = {};
const ktl::api::pipeline_color_blend_attachment_state * p_attachments = {};
float blend_constants[4];
};
struct pipeline_depth_stencil_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_depth_stencil_state_create_info;
const void * pnext = {};
ktl::api::pipeline_depth_stencil_state_create_flags flags = {};
ktl::api::bool32 depth_test_enable;
ktl::api::bool32 depth_write_enable;
ktl::api::compare_op depth_compare_op;
ktl::api::bool32 depth_bounds_test_enable;
ktl::api::bool32 stencil_test_enable;
ktl::api::stencil_op_state front;
ktl::api::stencil_op_state back;
float min_depth_bounds;
float max_depth_bounds;
};
struct pipeline_cache_header_version_safety_critical_one
{
ktl::api::pipeline_cache_header_version_one header_version_one;
ktl::api::pipeline_cache_validation_version validation_version;
ktl::i32 implementation_data;
ktl::i32 pipeline_index_count;
ktl::i32 pipeline_index_stride;
ktl::u64 pipeline_index_offset;
};
struct pipeline_layout_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_layout_create_info;
const void * pnext = {};
ktl::api::pipeline_layout_create_flags flags = {};
ktl::i32 set_layout_count = {};
const ktl::api::descriptor_set_layout * p_set_layouts;
const ktl::i32 push_constant_range_count = {};
const ktl::api::push_constant_range * p_push_constant_ranges;
};
struct indirect_commands_push_constant_token_ext
{
ktl::api::push_constant_range update_range;
};
struct pipeline_binary_keys_and_data_khr
{
ktl::i32 binary_count;
const ktl::api::pipeline_binary_key_khr * p_pipeline_binary_keys;
const ktl::api::pipeline_binary_data_khr * p_pipeline_binary_data;
};
struct descriptor_mapping_source_constant_offset_ext
{
ktl::i32 heap_offset;
ktl::i32 heap_array_stride;
const ktl::api::sampler_create_info * p_embedded_sampler = {};
ktl::i32 sampler_heap_offset;
ktl::i32 sampler_heap_array_stride;
};
struct descriptor_mapping_source_push_index_ext
{
ktl::i32 heap_offset;
ktl::i32 push_offset;
ktl::i32 heap_index_stride;
ktl::i32 heap_array_stride;
const ktl::api::sampler_create_info * p_embedded_sampler = {};
ktl::api::bool32 use_combined_image_sampler_index;
ktl::i32 sampler_heap_offset;
ktl::i32 sampler_push_offset;
ktl::i32 sampler_heap_index_stride;
ktl::i32 sampler_heap_array_stride;
};
struct descriptor_mapping_source_indirect_index_ext
{
ktl::i32 heap_offset;
ktl::i32 push_offset;
ktl::i32 address_offset;
ktl::i32 heap_index_stride;
ktl::i32 heap_array_stride;
const ktl::api::sampler_create_info * p_embedded_sampler = {};
ktl::api::bool32 use_combined_image_sampler_index;
ktl::i32 sampler_heap_offset;
ktl::i32 sampler_push_offset;
ktl::i32 sampler_address_offset;
ktl::i32 sampler_heap_index_stride;
ktl::i32 sampler_heap_array_stride;
};
struct descriptor_mapping_source_indirect_index_array_ext
{
ktl::i32 heap_offset;
ktl::i32 push_offset;
ktl::i32 address_offset;
ktl::i32 heap_index_stride;
const ktl::api::sampler_create_info * p_embedded_sampler = {};
ktl::api::bool32 use_combined_image_sampler_index;
ktl::i32 sampler_heap_offset;
ktl::i32 sampler_push_offset;
ktl::i32 sampler_address_offset;
ktl::i32 sampler_heap_index_stride;
};
struct descriptor_mapping_source_shader_record_index_ext
{
ktl::i32 heap_offset;
ktl::i32 shader_record_offset;
ktl::i32 heap_index_stride;
ktl::i32 heap_array_stride;
const ktl::api::sampler_create_info * p_embedded_sampler = {};
ktl::api::bool32 use_combined_image_sampler_index;
ktl::i32 sampler_heap_offset;
ktl::i32 sampler_shader_record_offset;
ktl::i32 sampler_heap_index_stride;
ktl::i32 sampler_heap_array_stride;
};
struct command_buffer_begin_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_buffer_begin_info;
const void * pnext = {};
ktl::api::command_buffer_usage_flags flags = {};
const ktl::api::command_buffer_inheritance_info * p_inheritance_info = {};
};
struct sampler_custom_border_color_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sampler_custom_border_color_create_info_ext;
const void * pnext = {};
ktl::api::clear_color_value custom_border_color;
ktl::api::format format;
};
union clear_value
{
ktl::api::clear_color_value color;
ktl::api::clear_depth_stencil_value depth_stencil;
};
struct subpass_description
{
ktl::api::subpass_description_flags flags = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::i32 input_attachment_count = {};
const ktl::api::attachment_reference * p_input_attachments;
ktl::i32 color_attachment_count = {};
const ktl::api::attachment_reference * p_color_attachments;
const ktl::api::attachment_reference * p_resolve_attachments = {};
const ktl::api::attachment_reference * p_depth_stencil_attachment = {};
ktl::i32 preserve_attachment_count = {};
const ktl::i32 * p_preserve_attachments;
};
struct render_pass_fragment_density_map_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_fragment_density_map_create_info_ext;
const void * pnext = {};
ktl::api::attachment_reference fragment_density_map_attachment;
};
struct device_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_create_info;
const void * pnext = {};
ktl::api::device_create_flags flags = {};
ktl::i32 queue_create_info_count = {};
const ktl::api::device_queue_create_info * p_queue_create_infos;
ktl::i32 enabled_layer_count;
const char * pp_enabled_layer_names;
ktl::i32 enabled_extension_count = {};
const char * pp_enabled_extension_names;
const ktl::api::physical_device_features * p_enabled_features = {};
};
struct physical_device_features2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_features_2;
void * pnext = {};
ktl::api::physical_device_features features;
};
struct physical_device_properties
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
struct display_plane_properties2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_plane_properties_2_khr;
void * pnext = {};
ktl::api::display_plane_properties_khr display_plane_properties;
};
struct surface_format2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_format_2_khr;
void * pnext = {};
ktl::api::surface_format_khr surface_format;
};
struct layer_settings_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_layer_settings_create_info_ext;
const void * pnext = {};
ktl::i32 setting_count = {};
const ktl::api::layer_setting_ext * p_settings;
};
struct cluster_acceleration_structure_instantiate_cluster_info_nv
{
ktl::i32 cluster_id_offset;
ktl::i32 geometry_index_offset;
ktl::i32 reserved;
ktl::api::dvaddr cluster_template_address;
ktl::api::strided_device_address_nv vertex_buffer;
};
struct build_partitioned_acceleration_structure_indirect_command_nv
{
ktl::api::partitioned_acceleration_structure_op_type_nv op_type;
ktl::i32 arg_count;
ktl::api::strided_device_address_nv arg_data;
};
struct cluster_acceleration_structure_build_triangle_cluster_info_nv
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
ktl::api::dvaddr index_buffer;
ktl::api::dvaddr vertex_buffer;
ktl::api::dvaddr geometry_index_and_flags_buffer = {};
ktl::api::dvaddr opacity_micromap_array = {};
ktl::api::dvaddr opacity_micromap_index_buffer = {};
};
struct cluster_acceleration_structure_build_triangle_cluster_template_info_nv
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
ktl::api::dvaddr index_buffer;
ktl::api::dvaddr vertex_buffer = {};
ktl::api::dvaddr geometry_index_and_flags_buffer = {};
ktl::api::dvaddr opacity_micromap_array = {};
ktl::api::dvaddr opacity_micromap_index_buffer = {};
ktl::api::dvaddr instantiation_bounding_box_limit = {};
};
union cluster_acceleration_structure_op_input_nv
{
ktl::api::cluster_acceleration_structure_clusters_bottom_level_input_nv * p_clusters_bottom_level;
ktl::api::cluster_acceleration_structure_triangle_cluster_input_nv * p_triangle_clusters;
ktl::api::cluster_acceleration_structure_move_objects_input_nv * p_move_objects;
};
struct generated_commands_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_generated_commands_info_nv;
const void * pnext = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::api::pipeline pipeline = {};
ktl::api::indirect_commands_layout_nv indirect_commands_layout;
ktl::i32 stream_count;
const ktl::api::indirect_commands_stream_nv * p_streams;
ktl::i32 sequences_count;
ktl::api::buffer preprocess_buffer;
ktl::api::dvsize preprocess_offset;
ktl::api::dvsize preprocess_size;
ktl::api::buffer sequences_count_buffer = {};
ktl::api::dvsize sequences_count_offset;
ktl::api::buffer sequences_index_buffer = {};
ktl::api::dvsize sequences_index_offset;
};
struct indirect_commands_layout_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_indirect_commands_layout_create_info_nv;
const void * pnext = {};
ktl::api::indirect_commands_layout_usage_flags_nv flags = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::i32 token_count;
const ktl::api::indirect_commands_layout_token_nv * p_tokens;
ktl::i32 stream_count;
const ktl::i32 * p_stream_strides;
};
struct physical_device_driver_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_driver_properties;
void * pnext = {};
ktl::api::driver_id driver_id;
char driver_name[KTL_API_MAX_DRIVER_NAME_SIZE];
char driver_info[KTL_API_MAX_DRIVER_INFO_SIZE];
ktl::api::conformance_version conformance_version;
};
struct physical_device_vulkan12properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_vulkan_1_2_properties;
void * pnext = {};
ktl::api::driver_id driver_id;
char driver_name[KTL_API_MAX_DRIVER_NAME_SIZE];
char driver_info[KTL_API_MAX_DRIVER_INFO_SIZE];
ktl::api::conformance_version conformance_version;
ktl::api::shader_float_controls_independence denorm_behavior_independence;
ktl::api::shader_float_controls_independence rounding_mode_independence;
ktl::api::bool32 shader_signed_zero_inf_nan_preserve_float16;
ktl::api::bool32 shader_signed_zero_inf_nan_preserve_float32;
ktl::api::bool32 shader_signed_zero_inf_nan_preserve_float64;
ktl::api::bool32 shader_denorm_preserve_float16;
ktl::api::bool32 shader_denorm_preserve_float32;
ktl::api::bool32 shader_denorm_preserve_float64;
ktl::api::bool32 shader_denorm_flush_to_zero_float16;
ktl::api::bool32 shader_denorm_flush_to_zero_float32;
ktl::api::bool32 shader_denorm_flush_to_zero_float64;
ktl::api::bool32 shader_rounding_mode_rtefloat16;
ktl::api::bool32 shader_rounding_mode_rtefloat32;
ktl::api::bool32 shader_rounding_mode_rtefloat64;
ktl::api::bool32 shader_rounding_mode_rtzfloat16;
ktl::api::bool32 shader_rounding_mode_rtzfloat32;
ktl::api::bool32 shader_rounding_mode_rtzfloat64;
ktl::i32 max_update_after_bind_descriptors_in_all_pools;
ktl::api::bool32 shader_uniform_buffer_array_non_uniform_indexing_native;
ktl::api::bool32 shader_sampled_image_array_non_uniform_indexing_native;
ktl::api::bool32 shader_storage_buffer_array_non_uniform_indexing_native;
ktl::api::bool32 shader_storage_image_array_non_uniform_indexing_native;
ktl::api::bool32 shader_input_attachment_array_non_uniform_indexing_native;
ktl::api::bool32 robust_buffer_access_update_after_bind;
ktl::api::bool32 quad_divergent_implicit_lod;
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
ktl::api::bool32 independent_resolve_none;
ktl::api::bool32 independent_resolve;
ktl::api::bool32 filter_minmax_single_component_formats;
ktl::api::bool32 filter_minmax_image_component_mapping;
ktl::u64 max_timeline_semaphore_value_difference;
ktl::api::sample_count_flags framebuffer_integer_color_sample_counts = {};
};
struct external_image_format_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_image_format_properties;
void * pnext = {};
ktl::api::external_memory_properties external_memory_properties;
};
struct external_buffer_properties
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_buffer_properties;
void * pnext = {};
ktl::api::external_memory_properties external_memory_properties;
};
struct external_tensor_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_external_tensor_properties_arm;
const void * pnext = {};
ktl::api::external_memory_properties external_memory_properties;
};
struct descriptor_update_template_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_update_template_create_info;
const void * pnext = {};
ktl::api::descriptor_update_template_create_flags flags = {};
ktl::i32 descriptor_update_entry_count;
const ktl::api::descriptor_update_template_entry * p_descriptor_update_entries;
ktl::api::descriptor_update_template_type template_type;
ktl::api::descriptor_set_layout descriptor_set_layout;
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::api::pipeline_layout pipeline_layout;
ktl::i32 set;
};
struct hdr_metadata_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_hdr_metadata_ext;
const void * pnext = {};
ktl::api::xycolor_ext display_primary_red;
ktl::api::xycolor_ext display_primary_green;
ktl::api::xycolor_ext display_primary_blue;
ktl::api::xycolor_ext white_point;
float max_luminance;
float min_luminance;
float max_content_light_level;
float max_frame_average_light_level;
};
struct past_presentation_timing_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_past_presentation_timing_ext;
void * pnext = {};
ktl::u64 present_id;
ktl::u64 target_time;
ktl::i32 present_stage_count;
ktl::api::present_stage_time_ext * p_present_stages;
ktl::api::time_domain_khr time_domain;
ktl::u64 time_domain_id;
ktl::api::bool32 report_complete;
};
struct present_timings_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_present_timings_info_ext;
const void * pnext = {};
ktl::i32 swapchain_count;
const ktl::api::present_timing_info_ext * p_timing_infos = {};
};
struct present_times_info_google
{
ktl::api::structure_type stype = ktl::api::structure_type::v_present_times_info_google;
const void * pnext = {};
ktl::i32 swapchain_count;
const ktl::api::present_time_google * p_times = {};
};
struct pipeline_viewport_wscaling_state_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_viewport_w_scaling_state_create_info_nv;
const void * pnext = {};
ktl::api::bool32 viewport_wscaling_enable;
ktl::i32 viewport_count;
const ktl::api::viewport_wscaling_nv * p_viewport_wscalings = {};
};
struct pipeline_viewport_swizzle_state_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_viewport_swizzle_state_create_info_nv;
const void * pnext = {};
ktl::api::pipeline_viewport_swizzle_state_create_flags_nv flags = {};
ktl::i32 viewport_count;
const ktl::api::viewport_swizzle_nv * p_viewport_swizzles;
};
struct render_pass_input_attachment_aspect_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_input_attachment_aspect_create_info;
const void * pnext = {};
ktl::i32 aspect_reference_count;
const ktl::api::input_attachment_aspect_reference * p_aspect_references;
};
struct sample_locations_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sample_locations_info_ext;
const void * pnext = {};
ktl::api::sample_count_flag_bits sample_locations_per_pixel;
ktl::api::extent2d sample_location_grid_size;
ktl::i32 sample_locations_count = {};
const ktl::api::sample_location_ext * p_sample_locations;
};
struct physical_device_layered_api_properties_list_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_layered_api_properties_list_khr;
void * pnext = {};
ktl::i32 layered_api_count = {};
ktl::api::physical_device_layered_api_properties_khr * p_layered_apis = {};
};
struct native_buffer_android
{
ktl::api::structure_type stype = ktl::api::structure_type::v_native_buffer_android;
const void * pnext = {};
const void * handle;
int stride;
int format;
int usage;
ktl::api::native_buffer_usage2android usage2;
};
struct shader_statistics_info_amd
{
ktl::api::shader_stage_flags shader_stage_mask;
ktl::api::shader_resource_usage_amd resource_usage;
ktl::i32 num_physical_vgprs;
ktl::i32 num_physical_sgprs;
ktl::i32 num_available_vgprs;
ktl::i32 num_available_sgprs;
ktl::i32 compute_work_group_size[3];
};
struct debug_utils_messenger_callback_data_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_debug_utils_messenger_callback_data_ext;
const void * pnext = {};
ktl::api::debug_utils_messenger_callback_data_flags_ext flags = {};
const char * p_message_id_name = {};
ktl::i32 message_id_number;
const char * p_message = {};
ktl::i32 queue_label_count = {};
const ktl::api::debug_utils_label_ext * p_queue_labels;
ktl::i32 cmd_buf_label_count = {};
const ktl::api::debug_utils_label_ext * p_cmd_buf_labels;
ktl::i32 object_count = {};
const ktl::api::debug_utils_object_name_info_ext * p_objects;
};
struct subpass_description2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_subpass_description_2;
const void * pnext = {};
ktl::api::subpass_description_flags flags = {};
ktl::api::pipeline_bind_point pipeline_bind_point;
ktl::i32 view_mask;
ktl::i32 input_attachment_count = {};
const ktl::api::attachment_reference2 * p_input_attachments;
ktl::i32 color_attachment_count = {};
const ktl::api::attachment_reference2 * p_color_attachments;
const ktl::api::attachment_reference2 * p_resolve_attachments = {};
const ktl::api::attachment_reference2 * p_depth_stencil_attachment = {};
ktl::i32 preserve_attachment_count = {};
const ktl::i32 * p_preserve_attachments;
};
struct subpass_description_depth_stencil_resolve
{
ktl::api::structure_type stype = ktl::api::structure_type::v_subpass_description_depth_stencil_resolve;
const void * pnext = {};
ktl::api::resolve_mode_flag_bits depth_resolve_mode;
ktl::api::resolve_mode_flag_bits stencil_resolve_mode;
const ktl::api::attachment_reference2 * p_depth_stencil_resolve_attachment = {};
};
struct fragment_shading_rate_attachment_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_fragment_shading_rate_attachment_info_khr;
const void * pnext = {};
const ktl::api::attachment_reference2 * p_fragment_shading_rate_attachment = {};
ktl::api::extent2d shading_rate_attachment_texel_size;
};
struct pipeline_vertex_input_divisor_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_vertex_input_divisor_state_create_info;
const void * pnext = {};
ktl::i32 vertex_binding_divisor_count;
const ktl::api::vertex_input_binding_divisor_description * p_vertex_binding_divisors;
};
struct pipeline_viewport_shading_rate_image_state_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_viewport_shading_rate_image_state_create_info_nv;
const void * pnext = {};
ktl::api::bool32 shading_rate_image_enable;
ktl::i32 viewport_count = {};
const ktl::api::shading_rate_palette_nv * p_shading_rate_palettes;
};
struct coarse_sample_order_custom_nv
{
ktl::api::shading_rate_palette_entry_nv shading_rate;
ktl::i32 sample_count;
ktl::i32 sample_location_count;
const ktl::api::coarse_sample_location_nv * p_sample_locations;
};
struct geometry_data_nv
{
ktl::api::geometry_triangles_nv triangles;
ktl::api::geometry_aabbnv aabbs;
};
struct drm_format_modifier_properties_list_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_drm_format_modifier_properties_list_ext;
void * pnext = {};
ktl::i32 drm_format_modifier_count = {};
ktl::api::drm_format_modifier_properties_ext * p_drm_format_modifier_properties = {};
};
struct framebuffer_attachments_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_framebuffer_attachments_create_info;
const void * pnext = {};
ktl::i32 attachment_image_info_count = {};
const ktl::api::framebuffer_attachment_image_info * p_attachment_image_infos;
};
struct pipeline_creation_feedback_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_creation_feedback_create_info;
const void * pnext = {};
ktl::api::pipeline_creation_feedback * p_pipeline_creation_feedback;
ktl::i32 pipeline_stage_creation_feedback_count = {};
ktl::api::pipeline_creation_feedback * p_pipeline_stage_creation_feedbacks;
};
struct performance_value_intel
{
ktl::api::performance_value_type_intel type;
ktl::api::performance_value_data_intel data;
};
struct pipeline_executable_statistic_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_executable_statistic_khr;
void * pnext = {};
char name[KTL_API_MAX_DESCRIPTION_SIZE];
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::api::pipeline_executable_statistic_format_khr format;
ktl::api::pipeline_executable_statistic_value_khr value;
};
struct fault_callback_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_fault_callback_info;
const void * pnext = {};
ktl::i32 fault_count = {};
ktl::api::fault_data * p_faults = {};
ktl::api::pfn_fault_callback_function pfn_fault_callback;
};
struct copy_acceleration_structure_to_memory_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_acceleration_structure_to_memory_info_khr;
const void * pnext = {};
ktl::api::acceleration_structure_khr src;
ktl::api::device_or_host_address_khr dst;
ktl::api::copy_acceleration_structure_mode_khr mode;
};
struct copy_micromap_to_memory_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_micromap_to_memory_info_ext;
const void * pnext = {};
ktl::api::micromap_ext src;
ktl::api::device_or_host_address_khr dst;
ktl::api::copy_micromap_mode_ext mode;
};
struct acceleration_structure_geometry_triangles_data_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_geometry_triangles_data_khr;
const void * pnext = {};
ktl::api::format vertex_format;
ktl::api::device_or_host_address_const_khr vertex_data;
ktl::api::dvsize vertex_stride;
ktl::i32 max_vertex;
ktl::api::index_type index_type;
ktl::api::device_or_host_address_const_khr index_data;
ktl::api::device_or_host_address_const_khr transform_data;
};
struct acceleration_structure_geometry_aabbs_data_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_geometry_aabbs_data_khr;
const void * pnext = {};
ktl::api::device_or_host_address_const_khr data;
ktl::api::dvsize stride;
};
struct acceleration_structure_geometry_instances_data_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_geometry_instances_data_khr;
const void * pnext = {};
ktl::api::bool32 array_of_pointers;
ktl::api::device_or_host_address_const_khr data;
};
struct acceleration_structure_geometry_linear_swept_spheres_data_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_geometry_linear_swept_spheres_data_nv;
const void * pnext = {};
ktl::api::format vertex_format;
ktl::api::device_or_host_address_const_khr vertex_data;
ktl::api::dvsize vertex_stride;
ktl::api::format radius_format;
ktl::api::device_or_host_address_const_khr radius_data;
ktl::api::dvsize radius_stride;
ktl::api::index_type index_type;
ktl::api::device_or_host_address_const_khr index_data;
ktl::api::dvsize index_stride;
ktl::api::ray_tracing_lss_indexing_mode_nv indexing_mode;
ktl::api::ray_tracing_lss_primitive_end_caps_mode_nv end_caps_mode;
};
struct acceleration_structure_geometry_spheres_data_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_geometry_spheres_data_nv;
const void * pnext = {};
ktl::api::format vertex_format;
ktl::api::device_or_host_address_const_khr vertex_data;
ktl::api::dvsize vertex_stride;
ktl::api::format radius_format;
ktl::api::device_or_host_address_const_khr radius_data;
ktl::api::dvsize radius_stride;
ktl::api::index_type index_type;
ktl::api::device_or_host_address_const_khr index_data;
ktl::api::dvsize index_stride;
};
struct copy_memory_to_acceleration_structure_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_memory_to_acceleration_structure_info_khr;
const void * pnext = {};
ktl::api::device_or_host_address_const_khr src;
ktl::api::acceleration_structure_khr dst;
ktl::api::copy_acceleration_structure_mode_khr mode;
};
struct acceleration_structure_geometry_motion_triangles_data_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_geometry_motion_triangles_data_nv;
const void * pnext = {};
ktl::api::device_or_host_address_const_khr vertex_data;
};
struct copy_memory_to_micromap_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_memory_to_micromap_info_ext;
const void * pnext = {};
ktl::api::device_or_host_address_const_khr src;
ktl::api::micromap_ext dst;
ktl::api::copy_micromap_mode_ext mode;
};
struct acceleration_structure_dense_geometry_format_triangles_data_amdx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_dense_geometry_format_triangles_data_amdx;
const void * pnext = {};
ktl::api::device_or_host_address_const_khr compressed_data;
ktl::api::dvsize data_size;
ktl::i32 num_triangles;
ktl::i32 num_vertices;
ktl::i32 max_primitive_index;
ktl::i32 max_geometry_index;
ktl::api::compressed_triangle_format_amdx format;
};
struct convert_cooperative_vector_matrix_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_convert_cooperative_vector_matrix_info_nv;
const void * pnext = {};
ktl::usize src_size;
ktl::api::device_or_host_address_const_khr src_data;
ktl::usize * p_dst_size;
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
struct dispatch_graph_info_amdx
{
ktl::i32 node_index;
ktl::i32 payload_count = {};
ktl::api::device_or_host_address_const_amdx payloads;
ktl::u64 payload_stride;
};
struct dispatch_graph_count_info_amdx
{
ktl::i32 count = {};
ktl::api::device_or_host_address_const_amdx infos;
ktl::u64 stride;
};
struct acceleration_structure_instance_khr
{
ktl::api::transform_matrix_khr transform;
ktl::i32 instance_custom_index;
ktl::i32 mask;
ktl::i32 instance_shader_binding_table_record_offset;
ktl::api::geometry_instance_flags_khr flags = {};
ktl::u64 acceleration_structure_reference;
};
struct partitioned_acceleration_structure_write_instance_data_nv
{
ktl::api::transform_matrix_khr transform;
float explicit_aabb[6];
ktl::i32 instance_id;
ktl::i32 instance_mask;
ktl::i32 instance_contribution_to_hit_group_index;
ktl::api::partitioned_acceleration_structure_instance_flags_nv instance_flags = {};
ktl::i32 instance_index;
ktl::i32 partition_index;
ktl::api::dvaddr acceleration_structure;
};
struct acceleration_structure_matrix_motion_instance_nv
{
ktl::api::transform_matrix_khr transform_t0;
ktl::api::transform_matrix_khr transform_t1;
ktl::i32 instance_custom_index;
ktl::i32 mask;
ktl::i32 instance_shader_binding_table_record_offset;
ktl::api::geometry_instance_flags_khr flags = {};
ktl::u64 acceleration_structure_reference;
};
struct refresh_object_list_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_refresh_object_list_khr;
const void * pnext = {};
ktl::i32 object_count;
const ktl::api::refresh_object_khr * p_objects;
};
struct build_partitioned_acceleration_structure_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_build_partitioned_acceleration_structure_info_nv;
void * pnext = {};
ktl::api::partitioned_acceleration_structure_instances_input_nv input;
ktl::api::dvaddr src_acceleration_structure_data = {};
ktl::api::dvaddr dst_acceleration_structure_data;
ktl::api::dvaddr scratch_data;
ktl::api::dvaddr src_infos;
ktl::api::dvaddr src_infos_count;
};
struct copy_buffer_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_buffer_info_2;
const void * pnext = {};
ktl::api::buffer src_buffer;
ktl::api::buffer dst_buffer;
ktl::i32 region_count;
const ktl::api::buffer_copy2 * p_regions;
};
struct mutable_descriptor_type_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_mutable_descriptor_type_create_info_ext;
const void * pnext = {};
ktl::i32 mutable_descriptor_type_list_count = {};
const ktl::api::mutable_descriptor_type_list_ext * p_mutable_descriptor_type_lists;
};
struct indirect_execution_set_shader_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_indirect_execution_set_shader_info_ext;
const void * pnext = {};
ktl::i32 shader_count;
const ktl::api::shader_ext * p_initial_shaders;
const ktl::api::indirect_execution_set_shader_layout_info_ext * p_set_layout_infos = {};
ktl::i32 max_shader_count;
ktl::i32 push_constant_range_count = {};
const ktl::api::push_constant_range * p_push_constant_ranges;
};
struct render_pass_stripe_submit_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_stripe_submit_info_arm;
const void * pnext = {};
ktl::i32 stripe_semaphore_info_count;
const ktl::api::semaphore_submit_info * p_stripe_semaphore_infos;
};
struct submit_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_submit_info_2;
const void * pnext = {};
ktl::api::submit_flags flags = {};
ktl::i32 wait_semaphore_info_count = {};
const ktl::api::semaphore_submit_info * p_wait_semaphore_infos;
ktl::i32 command_buffer_info_count = {};
const ktl::api::command_buffer_submit_info * p_command_buffer_infos;
ktl::i32 signal_semaphore_info_count = {};
const ktl::api::semaphore_submit_info * p_signal_semaphore_infos;
};
struct device_object_reservation_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_object_reservation_create_info;
const void * pnext = {};
ktl::i32 pipeline_cache_create_info_count = {};
const ktl::api::pipeline_cache_create_info * p_pipeline_cache_create_infos;
ktl::i32 pipeline_pool_size_count = {};
const ktl::api::pipeline_pool_size * p_pipeline_pool_sizes;
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
union descriptor_data_ext
{
ktl::api::sampler * p_sampler;
ktl::api::descriptor_image_info * p_combined_image_sampler;
ktl::api::descriptor_image_info * p_input_attachment_image;
ktl::api::descriptor_image_info * p_sampled_image;
ktl::api::descriptor_image_info * p_storage_image;
ktl::api::descriptor_address_info_ext * p_uniform_texel_buffer;
ktl::api::descriptor_address_info_ext * p_storage_texel_buffer;
ktl::api::descriptor_address_info_ext * p_uniform_buffer;
ktl::api::descriptor_address_info_ext * p_storage_buffer;
ktl::api::dvaddr acceleration_structure;
};
struct acceleration_structure_srtmotion_instance_nv
{
ktl::api::srtdata_nv transform_t0;
ktl::api::srtdata_nv transform_t1;
ktl::i32 instance_custom_index;
ktl::i32 mask;
ktl::i32 instance_shader_binding_table_record_offset;
ktl::api::geometry_instance_flags_khr flags = {};
ktl::u64 acceleration_structure_reference;
};
struct buffer_collection_properties_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_collection_properties_fuchsia;
void * pnext = {};
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
struct buffer_constraints_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_buffer_constraints_info_fuchsia;
const void * pnext = {};
ktl::api::buffer_create_info create_info;
ktl::api::format_feature_flags required_format_features = {};
ktl::api::buffer_collection_constraints_info_fuchsia buffer_collection_constraints;
};
struct drm_format_modifier_properties_list2ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_drm_format_modifier_properties_list_2_ext;
void * pnext = {};
ktl::i32 drm_format_modifier_count = {};
ktl::api::drm_format_modifier_properties2ext * p_drm_format_modifier_properties = {};
};
struct render_pass_creation_feedback_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_creation_feedback_create_info_ext;
const void * pnext = {};
ktl::api::render_pass_creation_feedback_info_ext * p_render_pass_feedback;
};
struct render_pass_subpass_feedback_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_subpass_feedback_create_info_ext;
const void * pnext = {};
ktl::api::render_pass_subpass_feedback_info_ext * p_subpass_feedback;
};
struct micromap_build_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_micromap_build_info_ext;
const void * pnext = {};
ktl::api::micromap_type_ext type;
ktl::api::build_micromap_flags_ext flags = {};
ktl::api::build_micromap_mode_ext mode;
ktl::api::micromap_ext dst_micromap = {};
ktl::i32 usage_counts_count = {};
const ktl::api::micromap_usage_ext * p_usage_counts = {};
const ktl::api::micromap_usage_ext * pp_usage_counts;
ktl::api::device_or_host_address_const_khr data;
ktl::api::device_or_host_address_khr scratch_data;
ktl::api::device_or_host_address_const_khr triangle_array;
ktl::api::dvsize triangle_array_stride;
};
struct acceleration_structure_triangles_opacity_micromap_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_triangles_opacity_micromap_ext;
void * pnext = {};
ktl::api::index_type index_type;
ktl::api::device_or_host_address_const_khr index_buffer;
ktl::api::dvsize index_stride;
ktl::i32 base_triangle;
ktl::i32 usage_counts_count = {};
const ktl::api::micromap_usage_ext * p_usage_counts = {};
const ktl::api::micromap_usage_ext * pp_usage_counts;
ktl::api::micromap_ext micromap = {};
};
struct acceleration_structure_triangles_displacement_micromap_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_triangles_displacement_micromap_nv;
void * pnext = {};
ktl::api::format displacement_bias_and_scale_format;
ktl::api::format displacement_vector_format;
ktl::api::device_or_host_address_const_khr displacement_bias_and_scale_buffer;
ktl::api::dvsize displacement_bias_and_scale_stride;
ktl::api::device_or_host_address_const_khr displacement_vector_buffer;
ktl::api::dvsize displacement_vector_stride;
ktl::api::device_or_host_address_const_khr displaced_micromap_primitive_flags;
ktl::api::dvsize displaced_micromap_primitive_flags_stride;
ktl::api::index_type index_type;
ktl::api::device_or_host_address_const_khr index_buffer;
ktl::api::dvsize index_stride;
ktl::i32 base_triangle;
ktl::i32 usage_counts_count = {};
const ktl::api::micromap_usage_ext * p_usage_counts = {};
const ktl::api::micromap_usage_ext * pp_usage_counts;
ktl::api::micromap_ext micromap = {};
};
struct device_fault_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_fault_info_khr;
void * pnext = {};
ktl::api::device_fault_flags_khr flags;
ktl::u64 group_id;
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::api::device_fault_address_info_khr fault_address_info = {};
ktl::api::device_fault_address_info_khr instruction_address_info = {};
ktl::api::device_fault_vendor_info_khr vendor_info = {};
};
struct device_fault_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_fault_info_ext;
void * pnext = {};
char description[KTL_API_MAX_DESCRIPTION_SIZE];
ktl::api::device_fault_address_info_khr * p_address_infos = {};
ktl::api::device_fault_vendor_info_khr * p_vendor_infos = {};
void * p_vendor_binary_data = {};
};
struct decompress_memory_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_decompress_memory_info_ext;
const void * pnext = {};
ktl::api::memory_decompression_method_flags_ext decompression_method;
ktl::i32 region_count;
const ktl::api::decompress_memory_region_ext * p_regions;
};
struct direct_driver_loading_list_lunarg
{
ktl::api::structure_type stype = ktl::api::structure_type::v_direct_driver_loading_list_lunarg;
const void * pnext = {};
ktl::api::direct_driver_loading_mode_lunarg mode;
ktl::i32 driver_count;
const ktl::api::direct_driver_loading_info_lunarg * p_drivers;
};
struct anti_lag_data_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_anti_lag_data_amd;
const void * pnext = {};
ktl::api::anti_lag_mode_amd mode;
ktl::i32 max_fps;
const ktl::api::anti_lag_presentation_info_amd * p_presentation_info = {};
};
struct get_latency_marker_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_get_latency_marker_info_nv;
const void * pnext = {};
ktl::i32 timing_count = {};
ktl::api::latency_timings_frame_report_nv * p_timings = {};
};
struct pipeline_viewport_depth_clamp_control_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_viewport_depth_clamp_control_create_info_ext;
const void * pnext = {};
ktl::api::depth_clamp_mode_ext depth_clamp_mode;
const ktl::api::depth_clamp_range_ext * p_depth_clamp_range = {};
};
struct tensor_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tensor_create_info_arm;
const void * pnext = {};
ktl::api::tensor_create_flags_arm flags = {};
const ktl::api::tensor_description_arm * p_description;
ktl::api::sharing_mode sharing_mode;
ktl::i32 queue_family_index_count = {};
const ktl::i32 * p_queue_family_indices;
};
struct physical_device_external_tensor_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_external_tensor_info_arm;
const void * pnext = {};
ktl::api::tensor_create_flags_arm flags = {};
const ktl::api::tensor_description_arm * p_description;
ktl::api::external_memory_handle_type_flag_bits handle_type;
};
struct tensor_dependency_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_tensor_dependency_info_arm;
const void * pnext = {};
ktl::i32 tensor_memory_barrier_count;
const ktl::api::tensor_memory_barrier_arm * p_tensor_memory_barriers;
};
struct copy_tensor_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_tensor_info_arm;
const void * pnext = {};
ktl::api::tensor_arm src_tensor;
ktl::api::tensor_arm dst_tensor;
ktl::i32 region_count;
const ktl::api::tensor_copy_arm * p_regions;
};
struct data_graph_pipeline_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_create_info_arm;
const void * pnext = {};
ktl::api::pipeline_create_flags2 flags = {};
ktl::api::pipeline_layout layout;
ktl::i32 resource_info_count = {};
const ktl::api::data_graph_pipeline_resource_info_arm * p_resource_infos;
};
struct data_graph_processing_engine_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_processing_engine_create_info_arm;
const void * pnext = {};
ktl::i32 processing_engine_count;
ktl::api::physical_device_data_graph_processing_engine_arm * p_processing_engines;
};
struct queue_family_data_graph_properties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_queue_family_data_graph_properties_arm;
void * pnext = {};
ktl::api::physical_device_data_graph_processing_engine_arm engine;
ktl::api::physical_device_data_graph_operation_support_arm operation;
};
struct data_graph_pipeline_builtin_model_create_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_builtin_model_create_info_qcom;
const void * pnext = {};
const ktl::api::physical_device_data_graph_operation_support_arm * p_operation;
};
struct push_data_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_push_data_info_ext;
const void * pnext = {};
ktl::i32 offset;
ktl::api::host_address_range_const_ext data;
};
struct opaque_capture_data_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_opaque_capture_data_create_info_ext;
const void * pnext = {};
const ktl::api::host_address_range_const_ext * p_data = {};
};
struct device_memory_copy_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_memory_copy_khr;
const void * pnext = {};
ktl::api::device_address_range_khr src_range;
ktl::api::address_command_flags_khr src_flags = {};
ktl::api::device_address_range_khr dst_range;
ktl::api::address_command_flags_khr dst_flags = {};
};
struct device_memory_image_copy_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_memory_image_copy_khr;
const void * pnext = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::i32 address_row_length;
ktl::i32 address_image_height;
ktl::api::image_subresource_layers image_subresource;
ktl::api::image_layout image_layout;
ktl::api::offset3d image_offset;
ktl::api::extent3d image_extent;
};
struct memory_range_barrier_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_range_barrier_khr;
const void * pnext = {};
ktl::api::pipeline_stage_flags2 src_stage_mask = {};
ktl::api::access_flags2 src_access_mask = {};
ktl::api::pipeline_stage_flags2 dst_stage_mask = {};
ktl::api::access_flags2 dst_access_mask = {};
ktl::i32 src_queue_family_index;
ktl::i32 dst_queue_family_index;
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
};
struct conditional_rendering_begin_info2ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_conditional_rendering_begin_info_2_ext;
const void * pnext = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::api::conditional_rendering_flags_ext flags = {};
};
struct acceleration_structure_create_info2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_create_info_2_khr;
const void * pnext = {};
ktl::api::acceleration_structure_create_flags_khr create_flags = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::api::acceleration_structure_type_khr type;
};
struct bind_index_buffer3info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_index_buffer_3_info_khr;
const void * pnext = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::api::index_type index_type;
};
struct draw_indirect_count2info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_draw_indirect_count_2_info_khr;
const void * pnext = {};
ktl::api::strided_device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
ktl::api::device_address_range_khr count_address_range;
ktl::api::address_command_flags_khr count_address_flags = {};
ktl::i32 max_draw_count;
};
struct dispatch_indirect2info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_dispatch_indirect_2_info_khr;
const void * pnext = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
};
struct bind_transform_feedback_buffer2info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_transform_feedback_buffer_2_info_ext;
const void * pnext = {};
ktl::api::device_address_range_khr address_range;
ktl::api::address_command_flags_khr address_flags = {};
};
struct memory_marker_info_amd
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_marker_info_amd;
const void * pnext = {};
ktl::api::pipeline_stage_flags2khr stage;
ktl::api::device_address_range_khr dst_range;
ktl::api::address_command_flags_khr dst_flags = {};
ktl::i32 marker;
};
struct queue_family_data_graph_tosaproperties_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_queue_family_data_graph_tosa_properties_arm;
void * pnext = {};
ktl::i32 profile_count;
const ktl::api::data_graph_tosaname_quality_arm * p_profiles;
ktl::i32 extension_count;
const ktl::api::data_graph_tosaname_quality_arm * p_extensions;
ktl::api::data_graph_tosalevel_arm level;
};
struct data_graph_pipeline_single_node_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_single_node_create_info_arm;
void * pnext = {};
ktl::api::data_graph_pipeline_node_type_arm node_type;
ktl::i32 connection_count;
const ktl::api::data_graph_pipeline_single_node_connection_arm * p_connections;
};
struct clear_rect
{
ktl::api::rect2d rect;
ktl::i32 base_array_layer;
ktl::i32 layer_count;
};
struct pipeline_viewport_state_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_viewport_state_create_info;
const void * pnext = {};
ktl::api::pipeline_viewport_state_create_flags flags = {};
ktl::i32 viewport_count = {};
const ktl::api::viewport * p_viewports = {};
ktl::i32 scissor_count = {};
const ktl::api::rect2d * p_scissors = {};
};
struct display_present_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_present_info_khr;
const void * pnext = {};
ktl::api::rect2d src_rect;
ktl::api::rect2d dst_rect;
ktl::api::bool32 persistent;
};
struct bind_image_memory_device_group_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_image_memory_device_group_info;
const void * pnext = {};
ktl::i32 device_index_count = {};
const ktl::i32 * p_device_indices;
ktl::i32 split_instance_bind_region_count = {};
const ktl::api::rect2d * p_split_instance_bind_regions;
};
struct device_group_render_pass_begin_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_group_render_pass_begin_info;
const void * pnext = {};
ktl::i32 device_mask;
ktl::i32 device_render_area_count = {};
const ktl::api::rect2d * p_device_render_areas;
};
struct pipeline_discard_rectangle_state_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_discard_rectangle_state_create_info_ext;
const void * pnext = {};
ktl::api::pipeline_discard_rectangle_state_create_flags_ext flags = {};
ktl::api::discard_rectangle_mode_ext discard_rectangle_mode;
ktl::i32 discard_rectangle_count = {};
const ktl::api::rect2d * p_discard_rectangles;
};
struct pipeline_viewport_exclusive_scissor_state_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_viewport_exclusive_scissor_state_create_info_nv;
const void * pnext = {};
ktl::i32 exclusive_scissor_count = {};
const ktl::api::rect2d * p_exclusive_scissors;
};
struct command_buffer_inheritance_render_pass_transform_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_buffer_inheritance_render_pass_transform_info_qcom;
const void * pnext = {};
ktl::api::surface_transform_flag_bits_khr transform;
ktl::api::rect2d render_area;
};
struct optical_flow_execute_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_optical_flow_execute_info_nv;
void * pnext = {};
ktl::api::optical_flow_execute_flags_nv flags = {};
ktl::i32 region_count = {};
const ktl::api::rect2d * p_regions;
};
struct multiview_per_view_render_areas_render_pass_begin_info_qcom
{
ktl::api::structure_type stype = ktl::api::structure_type::v_multiview_per_view_render_areas_render_pass_begin_info_qcom;
const void * pnext = {};
ktl::i32 per_view_render_area_count = {};
const ktl::api::rect2d * p_per_view_render_areas;
};
struct render_pass_stripe_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_stripe_info_arm;
const void * pnext = {};
ktl::api::rect2d stripe_area;
};
struct display_properties2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_properties_2_khr;
void * pnext = {};
ktl::api::display_properties_khr display_properties;
};
struct display_mode_properties_khr
{
ktl::api::display_mode_khr display_mode;
ktl::api::display_mode_parameters_khr parameters;
};
struct display_mode_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_mode_create_info_khr;
const void * pnext = {};
ktl::api::display_mode_create_flags_khr flags = {};
ktl::api::display_mode_parameters_khr parameters;
};
struct display_plane_capabilities2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_plane_capabilities_2_khr;
void * pnext = {};
ktl::api::display_plane_capabilities_khr capabilities;
};
struct surface_capabilities2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_surface_capabilities_2_khr;
void * pnext = {};
ktl::api::surface_capabilities_khr surface_capabilities;
};
struct present_region_khr
{
ktl::i32 rectangle_count = {};
const ktl::api::rect_layer_khr * p_rectangles = {};
};
struct queue_family_properties2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_queue_family_properties_2;
void * pnext = {};
ktl::api::queue_family_properties queue_family_properties;
};
struct sparse_image_memory_requirements
{
ktl::api::sparse_image_format_properties format_properties;
ktl::i32 image_mip_tail_first_lod;
ktl::api::dvsize image_mip_tail_size;
ktl::api::dvsize image_mip_tail_offset;
ktl::api::dvsize image_mip_tail_stride;
};
struct sparse_image_format_properties2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sparse_image_format_properties_2;
void * pnext = {};
ktl::api::sparse_image_format_properties properties;
};
struct external_image_format_properties_nv
{
ktl::api::image_format_properties image_format_properties;
ktl::api::external_memory_feature_flags_nv external_memory_features = {};
ktl::api::external_memory_handle_type_flags_nv export_from_imported_handle_types = {};
ktl::api::external_memory_handle_type_flags_nv compatible_handle_types = {};
};
struct image_format_properties2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_format_properties_2;
void * pnext = {};
ktl::api::image_format_properties image_format_properties;
};
struct device_image_memory_requirements
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_image_memory_requirements;
const void * pnext = {};
const ktl::api::image_create_info * p_create_info;
ktl::api::image_aspect_flag_bits plane_aspect = {};
};
struct image_format_constraints_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_format_constraints_info_fuchsia;
const void * pnext = {};
ktl::api::image_create_info image_create_info;
ktl::api::format_feature_flags required_format_features;
ktl::api::image_format_constraints_flags_fuchsia flags = {};
ktl::u64 sysmem_pixel_format = {};
ktl::i32 color_space_count;
const ktl::api::sysmem_color_space_fuchsia * p_color_spaces;
};
struct physical_device_memory_properties2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_memory_properties_2;
void * pnext = {};
ktl::api::physical_device_memory_properties memory_properties;
};
struct push_descriptor_set_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_push_descriptor_set_info;
const void * pnext = {};
ktl::api::shader_stage_flags stage_flags;
ktl::api::pipeline_layout layout = {};
ktl::i32 set = {};
ktl::i32 descriptor_write_count;
const ktl::api::write_descriptor_set * p_descriptor_writes;
};
struct sparse_image_memory_bind_info
{
ktl::api::image image;
ktl::i32 bind_count;
const ktl::api::sparse_image_memory_bind * p_binds;
};
struct device_image_subresource_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_image_subresource_info;
const void * pnext = {};
const ktl::api::image_create_info * p_create_info;
const ktl::api::image_subresource2 * p_subresource;
};
struct copy_image_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_image_info_2;
const void * pnext = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::image_copy2 * p_regions;
};
struct copy_image_to_image_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_image_to_image_info;
const void * pnext = {};
ktl::api::host_image_copy_flags flags = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::image_copy2 * p_regions;
};
struct blit_image_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_blit_image_info_2;
const void * pnext = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::image_blit2 * p_regions;
ktl::api::filter filter;
};
struct copy_buffer_to_image_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_buffer_to_image_info_2;
const void * pnext = {};
ktl::api::buffer src_buffer;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::buffer_image_copy2 * p_regions;
};
struct copy_image_to_buffer_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_image_to_buffer_info_2;
const void * pnext = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::api::buffer dst_buffer;
ktl::i32 region_count;
const ktl::api::buffer_image_copy2 * p_regions;
};
struct resolve_image_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_resolve_image_info_2;
const void * pnext = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::image_resolve2 * p_regions;
};
struct copy_memory_to_image_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_memory_to_image_info;
const void * pnext = {};
ktl::api::host_image_copy_flags flags = {};
ktl::api::image dst_image;
ktl::api::image_layout dst_image_layout;
ktl::i32 region_count;
const ktl::api::memory_to_image_copy * p_regions;
};
struct copy_image_to_memory_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_image_to_memory_info;
const void * pnext = {};
ktl::api::host_image_copy_flags flags = {};
ktl::api::image src_image;
ktl::api::image_layout src_image_layout;
ktl::i32 region_count;
const ktl::api::image_to_memory_copy * p_regions;
};
struct image_descriptor_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_descriptor_info_ext;
const void * pnext = {};
const ktl::api::image_view_create_info * p_view;
ktl::api::image_layout layout;
};
struct dependency_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_dependency_info;
const void * pnext = {};
ktl::api::dependency_flags dependency_flags = {};
ktl::i32 memory_barrier_count = {};
const ktl::api::memory_barrier2 * p_memory_barriers;
ktl::i32 buffer_memory_barrier_count = {};
const ktl::api::buffer_memory_barrier2 * p_buffer_memory_barriers;
ktl::i32 image_memory_barrier_count = {};
const ktl::api::image_memory_barrier2 * p_image_memory_barriers;
};
struct pipeline_shader_stage_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_shader_stage_create_info;
const void * pnext = {};
ktl::api::pipeline_shader_stage_create_flags flags = {};
ktl::api::shader_stage_flag_bits stage;
ktl::api::shader_module module = {};
const char * p_name;
const ktl::api::specialization_info * p_specialization_info = {};
};
struct shader_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_shader_create_info_ext;
const void * pnext = {};
ktl::api::shader_create_flags_ext flags = {};
ktl::api::shader_stage_flag_bits stage;
ktl::api::shader_stage_flags next_stage = {};
ktl::api::shader_code_type_ext code_type;
ktl::usize code_size;
const void * p_code;
const char * p_name = {};
ktl::i32 set_layout_count = {};
const ktl::api::descriptor_set_layout * p_set_layouts = {};
ktl::i32 push_constant_range_count = {};
const ktl::api::push_constant_range * p_push_constant_ranges = {};
const ktl::api::specialization_info * p_specialization_info = {};
};
struct data_graph_pipeline_shader_module_create_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_data_graph_pipeline_shader_module_create_info_arm;
const void * pnext = {};
ktl::api::shader_module module = {};
const char * p_name;
const ktl::api::specialization_info * p_specialization_info = {};
const ktl::i32 constant_count = {};
const ktl::api::data_graph_pipeline_constant_arm * p_constants = {};
};
union indirect_commands_token_data_ext
{
ktl::api::indirect_commands_push_constant_token_ext * p_push_constant;
ktl::api::indirect_commands_vertex_buffer_token_ext * p_vertex_buffer;
ktl::api::indirect_commands_index_buffer_token_ext * p_index_buffer;
ktl::api::indirect_commands_execution_set_token_ext * p_execution_set;
};
struct pipeline_binary_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_binary_create_info_khr;
const void * pnext = {};
const ktl::api::pipeline_binary_keys_and_data_khr * p_keys_and_data_info = {};
ktl::api::pipeline pipeline = {};
const ktl::api::pipeline_create_info_khr * p_pipeline_create_info = {};
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
struct render_pass_begin_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_begin_info;
const void * pnext = {};
ktl::api::render_pass render_pass;
ktl::api::framebuffer framebuffer;
ktl::api::rect2d render_area;
ktl::i32 clear_value_count = {};
const ktl::api::clear_value * p_clear_values;
};
struct clear_attachment
{
ktl::api::image_aspect_flags aspect_mask;
ktl::i32 color_attachment;
ktl::api::clear_value clear_value;
};
struct rendering_attachment_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_rendering_attachment_info;
const void * pnext = {};
ktl::api::image_view image_view = {};
ktl::api::image_layout image_layout;
ktl::api::resolve_mode_flag_bits resolve_mode = {};
ktl::api::image_view resolve_image_view = {};
ktl::api::image_layout resolve_image_layout;
ktl::api::attachment_load_op load_op;
ktl::api::attachment_store_op store_op;
ktl::api::clear_value clear_value;
};
struct render_pass_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_create_info;
const void * pnext = {};
ktl::api::render_pass_create_flags flags = {};
ktl::i32 attachment_count = {};
const ktl::api::attachment_description * p_attachments;
ktl::i32 subpass_count;
const ktl::api::subpass_description * p_subpasses;
ktl::i32 dependency_count = {};
const ktl::api::subpass_dependency * p_dependencies;
};
struct physical_device_properties2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_properties_2;
void * pnext = {};
ktl::api::physical_device_properties properties;
};
struct cluster_acceleration_structure_input_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cluster_acceleration_structure_input_info_nv;
void * pnext = {};
ktl::i32 max_acceleration_structure_count;
ktl::api::build_acceleration_structure_flags_khr flags = {};
ktl::api::cluster_acceleration_structure_op_type_nv op_type;
ktl::api::cluster_acceleration_structure_op_mode_nv op_mode;
ktl::api::cluster_acceleration_structure_op_input_nv op_input;
};
struct past_presentation_timing_properties_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_past_presentation_timing_properties_ext;
void * pnext = {};
ktl::u64 timing_properties_counter;
ktl::u64 time_domains_counter;
ktl::i32 presentation_timing_count;
ktl::api::past_presentation_timing_ext * p_presentation_timings;
};
struct attachment_sample_locations_ext
{
ktl::i32 attachment_index;
ktl::api::sample_locations_info_ext sample_locations_info;
};
struct subpass_sample_locations_ext
{
ktl::i32 subpass_index;
ktl::api::sample_locations_info_ext sample_locations_info;
};
struct pipeline_sample_locations_state_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_sample_locations_state_create_info_ext;
const void * pnext = {};
ktl::api::bool32 sample_locations_enable;
ktl::api::sample_locations_info_ext sample_locations_info;
};
struct render_pass_create_info2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_create_info_2;
const void * pnext = {};
ktl::api::render_pass_create_flags flags = {};
ktl::i32 attachment_count = {};
const ktl::api::attachment_description2 * p_attachments;
ktl::i32 subpass_count;
const ktl::api::subpass_description2 * p_subpasses;
ktl::i32 dependency_count = {};
const ktl::api::subpass_dependency2 * p_dependencies;
ktl::i32 correlated_view_mask_count = {};
const ktl::i32 * p_correlated_view_masks;
};
struct pipeline_viewport_coarse_sample_order_state_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_pipeline_viewport_coarse_sample_order_state_create_info_nv;
const void * pnext = {};
ktl::api::coarse_sample_order_type_nv sample_order_type;
ktl::i32 custom_sample_order_count = {};
const ktl::api::coarse_sample_order_custom_nv * p_custom_sample_orders;
};
struct geometry_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_geometry_nv;
const void * pnext = {};
ktl::api::geometry_type_khr geometry_type;
ktl::api::geometry_data_nv geometry;
ktl::api::geometry_flags_khr flags = {};
};
union acceleration_structure_geometry_data_khr
{
ktl::api::acceleration_structure_geometry_triangles_data_khr triangles;
ktl::api::acceleration_structure_geometry_aabbs_data_khr aabbs;
ktl::api::acceleration_structure_geometry_instances_data_khr instances;
};
union indirect_execution_set_info_ext
{
ktl::api::indirect_execution_set_pipeline_info_ext * p_pipeline_info;
ktl::api::indirect_execution_set_shader_info_ext * p_shader_info;
};
struct descriptor_get_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_get_info_ext;
const void * pnext = {};
ktl::api::descriptor_type type;
ktl::api::descriptor_data_ext data;
};
union acceleration_structure_motion_instance_data_nv
{
ktl::api::acceleration_structure_instance_khr static_instance;
ktl::api::acceleration_structure_matrix_motion_instance_nv matrix_motion_instance;
ktl::api::acceleration_structure_srtmotion_instance_nv srt_motion_instance;
};
struct device_tensor_memory_requirements_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_device_tensor_memory_requirements_arm;
const void * pnext = {};
const ktl::api::tensor_create_info_arm * p_create_info;
};
struct texel_buffer_descriptor_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_texel_buffer_descriptor_info_ext;
const void * pnext = {};
ktl::api::format format;
ktl::api::device_address_range_ext address_range;
};
struct bind_heap_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_heap_info_ext;
const void * pnext = {};
ktl::api::device_address_range_ext heap_range;
ktl::api::dvsize reserved_range_offset;
ktl::api::dvsize reserved_range_size;
};
struct copy_device_memory_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_device_memory_info_khr;
const void * pnext = {};
ktl::i32 region_count;
const ktl::api::device_memory_copy_khr * p_regions;
};
struct copy_device_memory_image_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_copy_device_memory_image_info_khr;
const void * pnext = {};
ktl::api::image image;
ktl::i32 region_count;
const ktl::api::device_memory_image_copy_khr * p_regions;
};
struct memory_range_barriers_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_memory_range_barriers_info_khr;
const void * pnext = {};
ktl::i32 memory_range_barrier_count = {};
const ktl::api::memory_range_barrier_khr * p_memory_range_barriers;
};
struct render_pass_stripe_begin_info_arm
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_stripe_begin_info_arm;
const void * pnext = {};
ktl::i32 stripe_info_count;
const ktl::api::render_pass_stripe_info_arm * p_stripe_infos;
};
struct display_mode_properties2khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_display_mode_properties_2_khr;
void * pnext = {};
ktl::api::display_mode_properties_khr display_mode_properties;
};
struct present_regions_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_present_regions_khr;
const void * pnext = {};
ktl::i32 swapchain_count;
const ktl::api::present_region_khr * p_regions = {};
};
struct sparse_image_memory_requirements2
{
ktl::api::structure_type stype = ktl::api::structure_type::v_sparse_image_memory_requirements_2;
void * pnext = {};
ktl::api::sparse_image_memory_requirements memory_requirements;
};
struct image_constraints_info_fuchsia
{
ktl::api::structure_type stype = ktl::api::structure_type::v_image_constraints_info_fuchsia;
const void * pnext = {};
ktl::i32 format_constraints_count;
const ktl::api::image_format_constraints_info_fuchsia * p_format_constraints;
ktl::api::buffer_collection_constraints_info_fuchsia buffer_collection_constraints;
ktl::api::image_constraints_info_flags_fuchsia flags = {};
};
struct bind_sparse_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_bind_sparse_info;
const void * pnext = {};
ktl::i32 wait_semaphore_count = {};
const ktl::api::semaphore * p_wait_semaphores;
ktl::i32 buffer_bind_count = {};
const ktl::api::sparse_buffer_memory_bind_info * p_buffer_binds;
ktl::i32 image_opaque_bind_count = {};
const ktl::api::sparse_image_opaque_memory_bind_info * p_image_opaque_binds;
ktl::i32 image_bind_count = {};
const ktl::api::sparse_image_memory_bind_info * p_image_binds;
ktl::i32 signal_semaphore_count = {};
const ktl::api::semaphore * p_signal_semaphores;
};
struct compute_pipeline_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_compute_pipeline_create_info;
const void * pnext = {};
ktl::api::pipeline_create_flags flags = {};
ktl::api::pipeline_shader_stage_create_info stage;
ktl::api::pipeline_layout layout = {};
ktl::api::pipeline base_pipeline_handle = {};
ktl::i32 base_pipeline_index;
};
struct graphics_pipeline_create_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_graphics_pipeline_create_info;
const void * pnext = {};
ktl::api::pipeline_create_flags flags = {};
ktl::i32 stage_count = {};
const ktl::api::pipeline_shader_stage_create_info * p_stages = {};
const ktl::api::pipeline_vertex_input_state_create_info * p_vertex_input_state = {};
const ktl::api::pipeline_input_assembly_state_create_info * p_input_assembly_state = {};
const ktl::api::pipeline_tessellation_state_create_info * p_tessellation_state = {};
const ktl::api::pipeline_viewport_state_create_info * p_viewport_state = {};
const ktl::api::pipeline_rasterization_state_create_info * p_rasterization_state = {};
const ktl::api::pipeline_multisample_state_create_info * p_multisample_state = {};
const ktl::api::pipeline_depth_stencil_state_create_info * p_depth_stencil_state = {};
const ktl::api::pipeline_color_blend_state_create_info * p_color_blend_state = {};
const ktl::api::pipeline_dynamic_state_create_info * p_dynamic_state = {};
ktl::api::pipeline_layout layout = {};
ktl::api::render_pass render_pass = {};
ktl::i32 subpass;
ktl::api::pipeline base_pipeline_handle = {};
ktl::i32 base_pipeline_index;
};
struct graphics_shader_group_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_graphics_shader_group_create_info_nv;
const void * pnext = {};
ktl::i32 stage_count;
const ktl::api::pipeline_shader_stage_create_info * p_stages;
const ktl::api::pipeline_vertex_input_state_create_info * p_vertex_input_state = {};
const ktl::api::pipeline_tessellation_state_create_info * p_tessellation_state = {};
};
struct ray_tracing_pipeline_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_ray_tracing_pipeline_create_info_nv;
const void * pnext = {};
ktl::api::pipeline_create_flags flags = {};
ktl::i32 stage_count;
const ktl::api::pipeline_shader_stage_create_info * p_stages;
ktl::i32 group_count;
const ktl::api::ray_tracing_shader_group_create_info_nv * p_groups;
ktl::i32 max_recursion_depth;
ktl::api::pipeline_layout layout = {};
ktl::api::pipeline base_pipeline_handle = {};
ktl::i32 base_pipeline_index;
};
struct ray_tracing_pipeline_create_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_ray_tracing_pipeline_create_info_khr;
const void * pnext = {};
ktl::api::pipeline_create_flags flags = {};
ktl::i32 stage_count = {};
const ktl::api::pipeline_shader_stage_create_info * p_stages;
ktl::i32 group_count = {};
const ktl::api::ray_tracing_shader_group_create_info_khr * p_groups;
ktl::i32 max_pipeline_ray_recursion_depth;
const ktl::api::pipeline_library_create_info_khr * p_library_info = {};
const ktl::api::ray_tracing_pipeline_interface_create_info_khr * p_library_interface = {};
const ktl::api::pipeline_dynamic_state_create_info * p_dynamic_state = {};
ktl::api::pipeline_layout layout = {};
ktl::api::pipeline base_pipeline_handle = {};
ktl::i32 base_pipeline_index;
};
struct execution_graph_pipeline_create_info_amdx
{
ktl::api::structure_type stype = ktl::api::structure_type::v_execution_graph_pipeline_create_info_amdx;
const void * pnext = {};
ktl::api::pipeline_create_flags flags = {};
ktl::i32 stage_count = {};
const ktl::api::pipeline_shader_stage_create_info * p_stages = {};
const ktl::api::pipeline_library_create_info_khr * p_library_info = {};
ktl::api::pipeline_layout layout = {};
ktl::api::pipeline base_pipeline_handle = {};
ktl::i32 base_pipeline_index;
};
struct indirect_commands_layout_token_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_indirect_commands_layout_token_ext;
const void * pnext = {};
ktl::api::indirect_commands_token_type_ext type;
ktl::api::indirect_commands_token_data_ext data;
ktl::i32 offset;
};
struct descriptor_set_and_binding_mapping_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_descriptor_set_and_binding_mapping_ext;
const void * pnext = {};
ktl::i32 descriptor_set;
ktl::i32 first_binding;
ktl::i32 binding_count;
ktl::api::spirv_resource_type_flags_ext resource_mask;
ktl::api::descriptor_mapping_source_ext source;
ktl::api::descriptor_mapping_source_data_ext source_data;
};
struct rendering_info
{
ktl::api::structure_type stype = ktl::api::structure_type::v_rendering_info;
const void * pnext = {};
ktl::api::rendering_flags flags = {};
ktl::api::rect2d render_area;
ktl::i32 layer_count;
ktl::i32 view_mask;
ktl::i32 color_attachment_count = {};
const ktl::api::rendering_attachment_info * p_color_attachments;
const ktl::api::rendering_attachment_info * p_depth_attachment = {};
const ktl::api::rendering_attachment_info * p_stencil_attachment = {};
};
struct physical_device_layered_api_vulkan_properties_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_physical_device_layered_api_vulkan_properties_khr;
void * pnext = {};
ktl::api::physical_device_properties2 properties;
};
struct cluster_acceleration_structure_commands_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_cluster_acceleration_structure_commands_info_nv;
void * pnext = {};
ktl::api::cluster_acceleration_structure_input_info_nv input;
ktl::api::dvaddr dst_implicit_data = {};
ktl::api::dvaddr scratch_data;
ktl::api::strided_device_address_region_khr dst_addresses_array;
ktl::api::strided_device_address_region_khr dst_sizes_array;
ktl::api::strided_device_address_region_khr src_infos_array;
ktl::api::dvaddr src_infos_count = {};
ktl::api::cluster_acceleration_structure_address_resolution_flags_nv address_resolution_flags = {};
};
struct render_pass_sample_locations_begin_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_render_pass_sample_locations_begin_info_ext;
const void * pnext = {};
ktl::i32 attachment_initial_sample_locations_count = {};
const ktl::api::attachment_sample_locations_ext * p_attachment_initial_sample_locations;
ktl::i32 post_subpass_sample_locations_count = {};
const ktl::api::subpass_sample_locations_ext * p_post_subpass_sample_locations;
};
struct acceleration_structure_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_info_nv;
const void * pnext = {};
ktl::api::acceleration_structure_type_nv type;
ktl::api::build_acceleration_structure_flags_khr flags = {};
ktl::i32 instance_count = {};
ktl::i32 geometry_count = {};
const ktl::api::geometry_nv * p_geometries;
};
struct acceleration_structure_geometry_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_geometry_khr;
const void * pnext = {};
ktl::api::geometry_type_khr geometry_type;
ktl::api::acceleration_structure_geometry_data_khr geometry;
ktl::api::geometry_flags_khr flags = {};
};
struct indirect_execution_set_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_indirect_execution_set_create_info_ext;
const void * pnext = {};
ktl::api::indirect_execution_set_info_type_ext type;
ktl::api::indirect_execution_set_info_ext info;
};
struct acceleration_structure_motion_instance_nv
{
ktl::api::acceleration_structure_motion_instance_type_nv type;
ktl::api::acceleration_structure_motion_instance_flags_nv flags = {};
ktl::api::acceleration_structure_motion_instance_data_nv data;
};
union resource_descriptor_data_ext
{
ktl::api::image_descriptor_info_ext * p_image;
ktl::api::texel_buffer_descriptor_info_ext * p_texel_buffer;
ktl::api::device_address_range_ext * p_address_range;
ktl::api::tensor_view_create_info_arm * p_tensor_arm;
};
struct command_buffer_inheritance_descriptor_heap_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_command_buffer_inheritance_descriptor_heap_info_ext;
const void * pnext = {};
const ktl::api::bind_heap_info_ext * p_sampler_heap_bind_info = {};
const ktl::api::bind_heap_info_ext * p_resource_heap_bind_info = {};
};
struct graphics_pipeline_shader_groups_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_graphics_pipeline_shader_groups_create_info_nv;
const void * pnext = {};
ktl::i32 group_count = {};
const ktl::api::graphics_shader_group_create_info_nv * p_groups;
ktl::i32 pipeline_count = {};
const ktl::api::pipeline * p_pipelines;
};
struct indirect_commands_layout_create_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_indirect_commands_layout_create_info_ext;
const void * pnext = {};
ktl::api::indirect_commands_layout_usage_flags_ext flags = {};
ktl::api::shader_stage_flags shader_stages;
ktl::i32 indirect_stride;
ktl::api::pipeline_layout pipeline_layout = {};
ktl::i32 token_count;
const ktl::api::indirect_commands_layout_token_ext * p_tokens;
};
struct shader_descriptor_set_and_binding_mapping_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_shader_descriptor_set_and_binding_mapping_info_ext;
const void * pnext = {};
ktl::i32 mapping_count = {};
const ktl::api::descriptor_set_and_binding_mapping_ext * p_mappings;
};
struct acceleration_structure_create_info_nv
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_create_info_nv;
const void * pnext = {};
ktl::api::dvsize compacted_size;
ktl::api::acceleration_structure_info_nv info;
};
struct acceleration_structure_build_geometry_info_khr
{
ktl::api::structure_type stype = ktl::api::structure_type::v_acceleration_structure_build_geometry_info_khr;
const void * pnext = {};
ktl::api::acceleration_structure_type_khr type;
ktl::api::build_acceleration_structure_flags_khr flags = {};
ktl::api::build_acceleration_structure_mode_khr mode;
ktl::api::acceleration_structure_khr src_acceleration_structure = {};
ktl::api::acceleration_structure_khr dst_acceleration_structure = {};
ktl::i32 geometry_count = {};
const ktl::api::acceleration_structure_geometry_khr * p_geometries = {};
const ktl::api::acceleration_structure_geometry_khr * pp_geometries;
ktl::api::device_or_host_address_khr scratch_data;
};
struct resource_descriptor_info_ext
{
ktl::api::structure_type stype = ktl::api::structure_type::v_resource_descriptor_info_ext;
const void * pnext = {};
ktl::api::descriptor_type type;
ktl::api::resource_descriptor_data_ext data;
};
}

#endif
