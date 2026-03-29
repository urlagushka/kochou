#ifndef KTL_API_STRUCTS_HPP
#define KTL_API_STRUCTS_HPP

#include <ktl/api/bitmasks.hpp>
#include <ktl/api/enums.hpp>
#include <ktl/api/handles.hpp>
#include <ktl/api/type.hpp>

namespace ktl::api
{
struct base_out_structure final
{
    ktl::api::structure_type       type;
    ktl::api::base_out_structure * next = nullptr;
};

struct base_in_structure final
{
    ktl::api::structure_type            type;
    const ktl::api::base_in_structure * next = nullptr;
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
    ktl::i32         base_array_layer;
    ktl::i32         layer_count;
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
    ktl::i32                                    api_version;
    ktl::i32                                    driver_version;
    ktl::i32                                    vendor_id;
    ktl::i32                                    device_id;
    ktl::api::physical_device_type              device_type;
    char                                        device_name[KTL_API_MAX_PHYSICAL_DEVICE_NAME_SIZE];
    ktl::u8                                     pipeline_cache_uuid[KTL_API_UUID_SIZE];
    ktl::api::physical_device_limits            limits;
    ktl::api::physical_device_sparse_properties sparse_properties;
};

struct extension_properties final
{
    char     extension_name[KTL_API_MAX_EXTENSION_NAME_SIZE];
    ktl::i32 spec_version;
};

struct layer_properties final
{
    char     layer_name[KTL_API_MAX_EXTENSION_NAME_SIZE];
    ktl::i32 spec_version;
    ktl::i32 implementation_version;
    char     description[KTL_API_MAX_DESCRIPTION_SIZE];
};

struct application_info final
{
    ktl::api::structure_type type             = ktl::api::structure_type::v_application_info;
    const void *             next             = nullptr;
    const char *             application_name = nullptr;
    ktl::i32                 application_version;
    const char *             engine_name = nullptr;
    ktl::i32                 engine_version;
    ktl::i32                 api_version;
};

struct allocation_callbacks final
{
    void *                                            user_data = nullptr;
    ktl::api::pfn_vk_allocation_function              pfn_allocation;
    ktl::api::pfn_vk_reallocation_function            pfn_reallocation;
    ktl::api::pfn_vk_free_function                    pfn_free;
    ktl::api::pfn_vk_internal_allocation_notification pfn_internal_allocation = 0;
    ktl::api::pfn_vk_internal_free_notification       pfn_internal_free       = 0;
};

struct device_queue_create_info final
{
    ktl::api::structure_type            type  = ktl::api::structure_type::v_device_queue_create_info;
    const void *                        next  = nullptr;
    ktl::api::device_queue_create_flags flags = 0;
    ktl::i32                            queue_family_index;
    ktl::i32                            queue_count;
    const float *                       queue_priorities;
};

struct device_create_info final
{
    ktl::api::structure_type                   type                    = ktl::api::structure_type::v_device_create_info;
    const void *                               next                    = nullptr;
    ktl::api::device_create_flags              flags                   = 0;
    ktl::i32                                   queue_create_info_count = 0;
    const ktl::api::device_queue_create_info * queue_create_infos;
    ktl::i32                                   enabled_layer_count;
    const char *                               enabled_layer_names;
    ktl::i32                                   enabled_extension_count = 0;
    const char *                               enabled_extension_names;
    const ktl::api::physical_device_features * enabled_features = nullptr;
};

struct instance_create_info final
{
    ktl::api::structure_type           type                = ktl::api::structure_type::v_instance_create_info;
    const void *                       next                = nullptr;
    ktl::api::instance_create_flags    flags               = 0;
    const ktl::api::application_info * application_info    = nullptr;
    ktl::i32                           enabled_layer_count = 0;
    const char *                       enabled_layer_names;
    ktl::i32                           enabled_extension_count = 0;
    const char *                       enabled_extension_names;
};

struct queue_family_properties final
{
    ktl::api::queue_flags queue_flags = 0;
    ktl::i32              queue_count;
    ktl::i32              timestamp_valid_bits;
    ktl::api::extent3d    min_image_transfer_granularity;
};

struct physical_device_memory_properties final
{
    ktl::i32              memory_type_count;
    ktl::api::memory_type memory_types[KTL_API_MAX_MEMORY_TYPES];
    ktl::i32              memory_heap_count;
    ktl::api::memory_heap memory_heaps[KTL_API_MAX_MEMORY_HEAPS];
};

struct memory_allocate_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_allocate_info;
    const void *             next = nullptr;
    ktl::dvsize              allocation_size;
    ktl::i32                 memory_type_index;
};

struct memory_requirements final
{
    ktl::dvsize size;
    ktl::dvsize alignment;
    ktl::i32    memory_type_bits;
};

struct sparse_image_format_properties final
{
    ktl::api::image_aspect_flags        aspect_mask = 0;
    ktl::api::extent3d                  image_granularity;
    ktl::api::sparse_image_format_flags flags = 0;
};

struct sparse_image_memory_requirements final
{
    ktl::api::sparse_image_format_properties format_properties;
    ktl::i32                                 image_mip_tail_first_lod;
    ktl::dvsize                              image_mip_tail_size;
    ktl::dvsize                              image_mip_tail_offset;
    ktl::dvsize                              image_mip_tail_stride;
};

struct memory_type final
{
    ktl::api::memory_property_flags property_flags = 0;
    ktl::i32                        heap_index;
};

struct memory_heap final
{
    ktl::dvsize                 size;
    ktl::api::memory_heap_flags flags = 0;
};

struct mapped_memory_range final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_mapped_memory_range;
    const void *             next = nullptr;
    ktl::api::device_memory  memory;
    ktl::dvsize              offset;
    ktl::dvsize              size;
};

struct format_properties final
{
    ktl::api::format_feature_flags linear_tiling_features  = 0;
    ktl::api::format_feature_flags optimal_tiling_features = 0;
    ktl::api::format_feature_flags buffer_features         = 0;
};

struct image_format_properties final
{
    ktl::api::extent3d           max_extent;
    ktl::i32                     max_mip_levels;
    ktl::i32                     max_array_layers;
    ktl::api::sample_count_flags sample_counts = 0;
    ktl::dvsize                  max_resource_size;
};

struct descriptor_buffer_info final
{
    ktl::api::buffer buffer = 0;
    ktl::dvsize      offset;
    ktl::dvsize      range;
};

struct descriptor_image_info final
{
    ktl::api::sampler      sampler;
    ktl::api::image_view   image_view;
    ktl::api::image_layout image_layout;
};

struct write_descriptor_set final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_write_descriptor_set;
    const void *                             next = nullptr;
    ktl::api::descriptor_set                 dst_set;
    ktl::i32                                 dst_binding;
    ktl::i32                                 dst_array_element;
    ktl::i32                                 descriptor_count;
    ktl::api::descriptor_type                descriptor_type;
    const ktl::api::descriptor_image_info *  image_info;
    const ktl::api::descriptor_buffer_info * buffer_info;
    const ktl::api::buffer_view *            texel_buffer_view;
};

struct copy_descriptor_set final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_copy_descriptor_set;
    const void *             next = nullptr;
    ktl::api::descriptor_set src_set;
    ktl::i32                 src_binding;
    ktl::i32                 src_array_element;
    ktl::api::descriptor_set dst_set;
    ktl::i32                 dst_binding;
    ktl::i32                 dst_array_element;
    ktl::i32                 descriptor_count;
};

struct buffer_usage_flags2create_info final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_buffer_usage_flags_2_create_info;
    const void *                  next = nullptr;
    ktl::api::buffer_usage_flags2 usage;
};

using buffer_usage_flags2create_info_khr = buffer_usage_flags2create_info;

struct buffer_create_info final
{
    ktl::api::structure_type      type  = ktl::api::structure_type::v_buffer_create_info;
    const void *                  next  = nullptr;
    ktl::api::buffer_create_flags flags = 0;
    ktl::dvsize                   size;
    ktl::api::buffer_usage_flags  usage;
    ktl::api::sharing_mode        sharing_mode;
    ktl::i32                      queue_family_index_count = 0;
    const ktl::i32 *              queue_family_indices;
};

struct buffer_view_create_info final
{
    ktl::api::structure_type           type  = ktl::api::structure_type::v_buffer_view_create_info;
    const void *                       next  = nullptr;
    ktl::api::buffer_view_create_flags flags = 0;
    ktl::api::buffer                   buffer;
    ktl::api::format                   format;
    ktl::dvsize                        offset;
    ktl::dvsize                        range;
};

struct image_subresource final
{
    ktl::api::image_aspect_flags aspect_mask;
    ktl::i32                     mip_level;
    ktl::i32                     array_layer;
};

struct image_subresource_layers final
{
    ktl::api::image_aspect_flags aspect_mask;
    ktl::i32                     mip_level;
    ktl::i32                     base_array_layer;
    ktl::i32                     layer_count;
};

struct image_subresource_range final
{
    ktl::api::image_aspect_flags aspect_mask;
    ktl::i32                     base_mip_level;
    ktl::i32                     level_count;
    ktl::i32                     base_array_layer;
    ktl::i32                     layer_count;
};

struct memory_barrier final
{
    ktl::api::structure_type type            = ktl::api::structure_type::v_memory_barrier;
    const void *             next            = nullptr;
    ktl::api::access_flags   src_access_mask = 0;
    ktl::api::access_flags   dst_access_mask = 0;
};

struct buffer_memory_barrier final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_buffer_memory_barrier;
    const void *             next = nullptr;
    ktl::api::access_flags   src_access_mask;
    ktl::api::access_flags   dst_access_mask;
    ktl::i32                 src_queue_family_index;
    ktl::i32                 dst_queue_family_index;
    ktl::api::buffer         buffer;
    ktl::dvsize              offset;
    ktl::dvsize              size;
};

struct image_memory_barrier final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_image_memory_barrier;
    const void *                      next = nullptr;
    ktl::api::access_flags            src_access_mask;
    ktl::api::access_flags            dst_access_mask;
    ktl::api::image_layout            old_layout;
    ktl::api::image_layout            new_layout;
    ktl::i32                          src_queue_family_index;
    ktl::i32                          dst_queue_family_index;
    ktl::api::image                   image;
    ktl::api::image_subresource_range subresource_range;
};

struct image_create_info final
{
    ktl::api::structure_type         type  = ktl::api::structure_type::v_image_create_info;
    const void *                     next  = nullptr;
    ktl::api::image_create_flags     flags = 0;
    ktl::api::image_type             image_type;
    ktl::api::format                 format;
    ktl::api::extent3d               extent;
    ktl::i32                         mip_levels;
    ktl::i32                         array_layers;
    ktl::api::sample_count_flag_bits samples;
    ktl::api::image_tiling           tiling;
    ktl::api::image_usage_flags      usage;
    ktl::api::sharing_mode           sharing_mode;
    ktl::i32                         queue_family_index_count = 0;
    const ktl::i32 *                 queue_family_indices;
    ktl::api::image_layout           initial_layout;
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
    ktl::api::structure_type          type  = ktl::api::structure_type::v_image_view_create_info;
    const void *                      next  = nullptr;
    ktl::api::image_view_create_flags flags = 0;
    ktl::api::image                   image;
    ktl::api::image_view_type         view_type;
    ktl::api::format                  format;
    ktl::api::component_mapping       components;
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
    ktl::dvsize                        resource_offset;
    ktl::dvsize                        size;
    ktl::api::device_memory            memory = 0;
    ktl::dvsize                        memory_offset;
    ktl::api::sparse_memory_bind_flags flags = 0;
};

struct sparse_image_memory_bind final
{
    ktl::api::image_subresource        subresource;
    ktl::api::offset3d                 offset;
    ktl::api::extent3d                 extent;
    ktl::api::device_memory            memory = 0;
    ktl::dvsize                        memory_offset;
    ktl::api::sparse_memory_bind_flags flags = 0;
};

struct sparse_buffer_memory_bind_info final
{
    ktl::api::buffer                     buffer;
    ktl::i32                             bind_count;
    const ktl::api::sparse_memory_bind * binds;
};

struct sparse_image_opaque_memory_bind_info final
{
    ktl::api::image                      image;
    ktl::i32                             bind_count;
    const ktl::api::sparse_memory_bind * binds;
};

struct sparse_image_memory_bind_info final
{
    ktl::api::image                            image;
    ktl::i32                                   bind_count;
    const ktl::api::sparse_image_memory_bind * binds;
};

struct bind_sparse_info final
{
    ktl::api::structure_type                               type = ktl::api::structure_type::v_bind_sparse_info;
    const void *                                           next = nullptr;
    ktl::i32                                               wait_semaphore_count = 0;
    const ktl::api::semaphore *                            wait_semaphores;
    ktl::i32                                               buffer_bind_count = 0;
    const ktl::api::sparse_buffer_memory_bind_info *       buffer_binds;
    ktl::i32                                               image_opaque_bind_count = 0;
    const ktl::api::sparse_image_opaque_memory_bind_info * image_opaque_binds;
    ktl::i32                                               image_bind_count = 0;
    const ktl::api::sparse_image_memory_bind_info *        image_binds;
    ktl::i32                                               signal_semaphore_count = 0;
    const ktl::api::semaphore *                            signal_semaphores;
};

struct image_copy final
{
    ktl::api::image_subresource_layers src_subresource;
    ktl::api::offset3d                 src_offset;
    ktl::api::image_subresource_layers dst_subresource;
    ktl::api::offset3d                 dst_offset;
    ktl::api::extent3d                 extent;
};

struct image_blit final
{
    ktl::api::image_subresource_layers src_subresource;
    ktl::api::offset3d                 src_offsets[2];
    ktl::api::image_subresource_layers dst_subresource;
    ktl::api::offset3d                 dst_offsets[2];
};

struct buffer_image_copy final
{
    ktl::dvsize                        buffer_offset;
    ktl::i32                           buffer_row_length;
    ktl::i32                           buffer_image_height;
    ktl::api::image_subresource_layers image_subresource;
    ktl::api::offset3d                 image_offset;
    ktl::api::extent3d                 image_extent;
};

struct strided_device_address_range_khr final
{
    ktl::dvaddr address = 0;
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
    ktl::api::structure_type                   type = ktl::api::structure_type::v_copy_memory_indirect_info_khr;
    const void *                               next = nullptr;
    ktl::api::address_copy_flags_khr           src_copy_flags = 0;
    ktl::api::address_copy_flags_khr           dst_copy_flags = 0;
    ktl::i32                                   copy_count;
    ktl::api::strided_device_address_range_khr copy_address_range;
};

struct copy_memory_to_image_indirect_command_khr final
{
    ktl::dvaddr                        src_address;
    ktl::i32                           buffer_row_length;
    ktl::i32                           buffer_image_height;
    ktl::api::image_subresource_layers image_subresource;
    ktl::api::offset3d                 image_offset;
    ktl::api::extent3d                 image_extent;
};

using copy_memory_to_image_indirect_command_nv = copy_memory_to_image_indirect_command_khr;

struct copy_memory_to_image_indirect_info_khr final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_copy_memory_to_image_indirect_info_khr;
    const void *                     next = nullptr;
    ktl::api::address_copy_flags_khr src_copy_flags = 0;
    ktl::i32                         copy_count;
    ktl::api::strided_device_address_range_khr copy_address_range;
    ktl::api::image                            dst_image;
    ktl::api::image_layout                     dst_image_layout;
    const ktl::api::image_subresource_layers * image_subresources;
};

struct image_resolve final
{
    ktl::api::image_subresource_layers src_subresource;
    ktl::api::offset3d                 src_offset;
    ktl::api::image_subresource_layers dst_subresource;
    ktl::api::offset3d                 dst_offset;
    ktl::api::extent3d                 extent;
};

struct shader_module_create_info final
{
    ktl::api::structure_type             type  = ktl::api::structure_type::v_shader_module_create_info;
    const void *                         next  = nullptr;
    ktl::api::shader_module_create_flags flags = 0;
    ktl::usize                           code_size;
    const ktl::i32 *                     code;
};

struct descriptor_set_layout_binding final
{
    ktl::i32                     binding;
    ktl::api::descriptor_type    descriptor_type;
    ktl::i32                     descriptor_count = 0;
    ktl::api::shader_stage_flags stage_flags;
    const ktl::api::sampler *    immutable_samplers = nullptr;
};

struct descriptor_set_layout_create_info final
{
    ktl::api::structure_type                     type  = ktl::api::structure_type::v_descriptor_set_layout_create_info;
    const void *                                 next  = nullptr;
    ktl::api::descriptor_set_layout_create_flags flags = 0;
    ktl::i32                                     binding_count = 0;
    const ktl::api::descriptor_set_layout_binding * bindings;
};

struct descriptor_pool_size final
{
    ktl::api::descriptor_type type;
    ktl::i32                  descriptor_count;
};

struct descriptor_pool_create_info final
{
    ktl::api::structure_type               type  = ktl::api::structure_type::v_descriptor_pool_create_info;
    const void *                           next  = nullptr;
    ktl::api::descriptor_pool_create_flags flags = 0;
    ktl::i32                               max_sets;
    ktl::i32                               pool_size_count = 0;
    const ktl::api::descriptor_pool_size * pool_sizes;
};

struct descriptor_set_allocate_info final
{
    ktl::api::structure_type                type = ktl::api::structure_type::v_descriptor_set_allocate_info;
    const void *                            next = nullptr;
    ktl::api::descriptor_pool               descriptor_pool;
    ktl::i32                                descriptor_set_count;
    const ktl::api::descriptor_set_layout * set_layouts;
};

struct specialization_map_entry final
{
    const ktl::i32 constant_id;
    ktl::i32       offset;
    ktl::usize     size;
};

struct specialization_info final
{
    ktl::i32                                   map_entry_count = 0;
    const ktl::api::specialization_map_entry * map_entries;
    ktl::usize                                 data_size = 0;
    const void *                               data;
};

struct pipeline_shader_stage_create_info final
{
    ktl::api::structure_type                     type  = ktl::api::structure_type::v_pipeline_shader_stage_create_info;
    const void *                                 next  = nullptr;
    ktl::api::pipeline_shader_stage_create_flags flags = 0;
    ktl::api::shader_stage_flag_bits             stage;
    ktl::api::shader_module                      module = 0;
    const char *                                 name;
    const char *                                 name                = nullptr;
    const ktl::api::specialization_info *        specialization_info = nullptr;
};

struct compute_pipeline_create_info final
{
    ktl::api::structure_type                    type  = ktl::api::structure_type::v_compute_pipeline_create_info;
    const void *                                next  = nullptr;
    ktl::api::pipeline_create_flags             flags = 0;
    ktl::api::pipeline_shader_stage_create_info stage;
    ktl::api::pipeline_layout                   layout               = 0;
    ktl::api::pipeline                          base_pipeline_handle = 0;
    ktl::i32                                    base_pipeline_index;
};

struct compute_pipeline_indirect_buffer_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_compute_pipeline_indirect_buffer_info_nv;
    const void *             next = nullptr;
    ktl::dvaddr              device_address;
    ktl::dvsize              size;
    ktl::dvaddr              pipeline_device_address_capture_replay = 0;
};

struct pipeline_create_flags2create_info final
{
    ktl::api::structure_type         type  = ktl::api::structure_type::v_pipeline_create_flags_2_create_info;
    const void *                     next  = nullptr;
    ktl::api::pipeline_create_flags2 flags = 0;
};

using pipeline_create_flags2create_info_khr = pipeline_create_flags2create_info;

struct vertex_input_binding_description final
{
    ktl::i32                    binding;
    ktl::i32                    stride;
    ktl::api::vertex_input_rate input_rate;
};

struct vertex_input_attribute_description final
{
    ktl::i32         location;
    ktl::i32         binding;
    ktl::api::format format;
    ktl::i32         offset;
};

struct pipeline_vertex_input_state_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_vertex_input_state_create_info;
    const void *             next = nullptr;
    ktl::api::pipeline_vertex_input_state_create_flags   flags                            = 0;
    ktl::i32                                             vertex_binding_description_count = 0;
    const ktl::api::vertex_input_binding_description *   vertex_binding_descriptions;
    ktl::i32                                             vertex_attribute_description_count = 0;
    const ktl::api::vertex_input_attribute_description * vertex_attribute_descriptions;
};

struct pipeline_input_assembly_state_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_input_assembly_state_create_info;
    const void *             next = nullptr;
    ktl::api::pipeline_input_assembly_state_create_flags flags = 0;
    ktl::api::primitive_topology                         topology;
    ktl::bool32                                          primitive_restart_enable;
};

struct pipeline_tessellation_state_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_tessellation_state_create_info;
    const void *             next = nullptr;
    ktl::api::pipeline_tessellation_state_create_flags flags = 0;
    ktl::i32                                           patch_control_points;
};

struct pipeline_viewport_state_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_state_create_info;
    const void *             next = nullptr;
    ktl::api::pipeline_viewport_state_create_flags flags          = 0;
    ktl::i32                                       viewport_count = 0;
    const ktl::api::viewport *                     viewports      = nullptr;
    ktl::i32                                       scissor_count  = 0;
    const ktl::api::rect2d *                       scissors       = nullptr;
};

struct pipeline_rasterization_state_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rasterization_state_create_info;
    const void *             next = nullptr;
    ktl::api::pipeline_rasterization_state_create_flags flags = 0;
    ktl::bool32                                         depth_clamp_enable;
    ktl::bool32                                         rasterizer_discard_enable;
    ktl::api::polygon_mode                              polygon_mode;
    ktl::api::cull_mode_flags                           cull_mode = 0;
    ktl::api::front_face                                front_face;
    ktl::bool32                                         depth_bias_enable;
    float                                               depth_bias_constant_factor;
    float                                               depth_bias_clamp;
    float                                               depth_bias_slope_factor;
    float                                               line_width;
};

struct pipeline_multisample_state_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_multisample_state_create_info;
    const void *             next = nullptr;
    ktl::api::pipeline_multisample_state_create_flags flags = 0;
    ktl::api::sample_count_flag_bits                  rasterization_samples;
    ktl::bool32                                       sample_shading_enable;
    float                                             min_sample_shading;
    const ktl::spmask *                               sample_mask = nullptr;
    ktl::bool32                                       alpha_to_coverage_enable;
    ktl::bool32                                       alpha_to_one_enable;
};

struct pipeline_color_blend_attachment_state final
{
    ktl::bool32                     blend_enable;
    ktl::api::blend_factor          src_color_blend_factor;
    ktl::api::blend_factor          dst_color_blend_factor;
    ktl::api::blend_op              color_blend_op;
    ktl::api::blend_factor          src_alpha_blend_factor;
    ktl::api::blend_factor          dst_alpha_blend_factor;
    ktl::api::blend_op              alpha_blend_op;
    ktl::api::color_component_flags color_write_mask = 0;
};

struct pipeline_color_blend_state_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_color_blend_state_create_info;
    const void *             next = nullptr;
    ktl::api::pipeline_color_blend_state_create_flags       flags = 0;
    ktl::bool32                                             logic_op_enable;
    ktl::api::logic_op                                      logic_op;
    ktl::i32                                                attachment_count = 0;
    const ktl::api::pipeline_color_blend_attachment_state * attachments      = nullptr;
    float                                                   blend_constants[4];
};

struct pipeline_dynamic_state_create_info final
{
    ktl::api::structure_type                      type = ktl::api::structure_type::v_pipeline_dynamic_state_create_info;
    const void *                                  next = nullptr;
    ktl::api::pipeline_dynamic_state_create_flags flags               = 0;
    ktl::i32                                      dynamic_state_count = 0;
    const ktl::api::dynamic_state *               dynamic_states;
};

struct stencil_op_state final
{
    ktl::api::stencil_op fail_op;
    ktl::api::stencil_op pass_op;
    ktl::api::stencil_op depth_fail_op;
    ktl::api::compare_op compare_op;
    ktl::i32             compare_mask;
    ktl::i32             write_mask;
    ktl::i32             reference;
};

struct pipeline_depth_stencil_state_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_depth_stencil_state_create_info;
    const void *             next = nullptr;
    ktl::api::pipeline_depth_stencil_state_create_flags flags = 0;
    ktl::bool32                                         depth_test_enable;
    ktl::bool32                                         depth_write_enable;
    ktl::api::compare_op                                depth_compare_op;
    ktl::bool32                                         depth_bounds_test_enable;
    ktl::bool32                                         stencil_test_enable;
    ktl::api::stencil_op_state                          front;
    ktl::api::stencil_op_state                          back;
    float                                               min_depth_bounds;
    float                                               max_depth_bounds;
};

struct graphics_pipeline_create_info final
{
    ktl::api::structure_type        type        = ktl::api::structure_type::v_graphics_pipeline_create_info;
    const void *                    next        = nullptr;
    ktl::api::pipeline_create_flags flags       = 0;
    ktl::i32                        stage_count = 0;
    const ktl::api::pipeline_shader_stage_create_info *         stages = nullptr;
    const ktl::api::pipeline_shader_stage_create_info *         stages;
    const ktl::api::pipeline_vertex_input_state_create_info *   vertex_input_state   = nullptr;
    const ktl::api::pipeline_input_assembly_state_create_info * input_assembly_state = nullptr;
    const ktl::api::pipeline_tessellation_state_create_info *   tessellation_state   = nullptr;
    const ktl::api::pipeline_viewport_state_create_info *       viewport_state       = nullptr;
    const ktl::api::pipeline_rasterization_state_create_info *  rasterization_state  = nullptr;
    const ktl::api::pipeline_multisample_state_create_info *    multisample_state    = nullptr;
    const ktl::api::pipeline_depth_stencil_state_create_info *  depth_stencil_state  = nullptr;
    const ktl::api::pipeline_color_blend_state_create_info *    color_blend_state    = nullptr;
    const ktl::api::pipeline_dynamic_state_create_info *        dynamic_state        = nullptr;
    ktl::api::pipeline_layout                                   layout               = 0;
    ktl::api::render_pass                                       render_pass          = 0;
    ktl::i32                                                    subpass;
    ktl::api::pipeline                                          base_pipeline_handle = 0;
    ktl::i32                                                    base_pipeline_index;
};

struct pipeline_cache_create_info final
{
    ktl::api::structure_type              type              = ktl::api::structure_type::v_pipeline_cache_create_info;
    const void *                          next              = nullptr;
    ktl::api::pipeline_cache_create_flags flags             = 0;
    ktl::usize                            initial_data_size = 0;
    ktl::usize                            initial_data_size;
    const void *                          initial_data;
};

struct pipeline_cache_header_version_one final
{
    ktl::i32                                header_size;
    ktl::api::pipeline_cache_header_version header_version;
    ktl::i32                                vendor_id;
    ktl::i32                                device_id;
    ktl::u8                                 pipeline_cache_uuid[KTL_API_UUID_SIZE];
};

struct pipeline_cache_stage_validation_index_entry final
{
    ktl::u64 code_size;
    ktl::u64 code_offset;
};

struct pipeline_cache_safety_critical_index_entry final
{
    ktl::u8  pipeline_identifier[KTL_API_UUID_SIZE];
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
    ktl::i32                                    implementation_data;
    ktl::i32                                    pipeline_index_count;
    ktl::i32                                    pipeline_index_stride;
    ktl::u64                                    pipeline_index_offset;
};

struct pipeline_cache_header_version_data_graph_qcom final
{
    ktl::i32                                   header_size;
    ktl::api::pipeline_cache_header_version    header_version;
    ktl::api::data_graph_model_cache_type_qcom cache_type;
    ktl::i32                                   cache_version;
    ktl::i32 toolchain_version[KTL_API_DATA_GRAPH_MODEL_TOOLCHAIN_VERSION_LENGTH_QCOM];
};

struct push_constant_range final
{
    ktl::api::shader_stage_flags stage_flags;
    ktl::i32                     offset;
    ktl::i32                     size;
};

struct pipeline_binary_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_binary_create_info_khr;
    const void *             next = nullptr;
    const ktl::api::pipeline_binary_keys_and_data_khr * keys_and_data_info   = nullptr;
    ktl::api::pipeline                                  pipeline             = 0;
    const ktl::api::pipeline_create_info_khr *          pipeline_create_info = nullptr;
};

struct pipeline_binary_handles_info_khr final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_pipeline_binary_handles_info_khr;
    const void *                    next = nullptr;
    ktl::i32                        pipeline_binary_count;
    ktl::api::pipeline_binary_khr * pipeline_binaries = nullptr;
};

struct pipeline_binary_data_khr final
{
    ktl::usize data_size;
    void *     data;
};

struct pipeline_binary_keys_and_data_khr final
{
    ktl::i32                                   binary_count;
    const ktl::api::pipeline_binary_key_khr *  pipeline_binary_keys;
    const ktl::api::pipeline_binary_data_khr * pipeline_binary_data;
};

struct pipeline_binary_key_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_binary_key_khr;
    void *                   next = nullptr;
    ktl::i32                 key_size;
    ktl::u8                  key[KTL_API_MAX_PIPELINE_BINARY_KEY_SIZE_KHR];
};

struct pipeline_binary_info_khr final
{
    ktl::api::structure_type              type         = ktl::api::structure_type::v_pipeline_binary_info_khr;
    const void *                          next         = nullptr;
    ktl::i32                              binary_count = 0;
    const ktl::api::pipeline_binary_khr * pipeline_binaries;
};

struct release_captured_pipeline_data_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_release_captured_pipeline_data_info_khr;
    void *                   next = nullptr;
    ktl::api::pipeline       pipeline;
};

struct pipeline_binary_data_info_khr final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_pipeline_binary_data_info_khr;
    void *                        next = nullptr;
    ktl::api::pipeline_binary_khr pipeline_binary;
};

struct pipeline_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_create_info_khr;
    void *                   next = nullptr;
};

struct pipeline_layout_create_info final
{
    ktl::api::structure_type                type             = ktl::api::structure_type::v_pipeline_layout_create_info;
    const void *                            next             = nullptr;
    ktl::api::pipeline_layout_create_flags  flags            = 0;
    ktl::i32                                set_layout_count = 0;
    const ktl::api::descriptor_set_layout * set_layouts;
    const ktl::i32                          push_constant_range_count = 0;
    const ktl::api::push_constant_range *   push_constant_ranges;
};

struct sampler_create_info final
{
    ktl::api::structure_type       type  = ktl::api::structure_type::v_sampler_create_info;
    const void *                   next  = nullptr;
    ktl::api::sampler_create_flags flags = 0;
    ktl::api::filter               mag_filter;
    ktl::api::filter               min_filter;
    ktl::api::sampler_mipmap_mode  mipmap_mode;
    ktl::api::sampler_address_mode address_mode_u;
    ktl::api::sampler_address_mode address_mode_v;
    ktl::api::sampler_address_mode address_mode_w;
    float                          mip_lod_bias;
    ktl::bool32                    anisotropy_enable;
    float                          max_anisotropy;
    ktl::bool32                    compare_enable;
    ktl::api::compare_op           compare_op;
    float                          min_lod;
    float                          max_lod;
    ktl::api::border_color         border_color;
    ktl::bool32                    unnormalized_coordinates;
};

struct command_pool_create_info final
{
    ktl::api::structure_type            type  = ktl::api::structure_type::v_command_pool_create_info;
    const void *                        next  = nullptr;
    ktl::api::command_pool_create_flags flags = 0;
    ktl::i32                            queue_family_index;
};

struct command_buffer_allocate_info final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_command_buffer_allocate_info;
    const void *                   next = nullptr;
    ktl::api::command_pool         command_pool;
    ktl::api::command_buffer_level level;
    ktl::i32                       command_buffer_count;
};

struct command_buffer_inheritance_info final
{
    ktl::api::structure_type                 type        = ktl::api::structure_type::v_command_buffer_inheritance_info;
    const void *                             next        = nullptr;
    ktl::api::render_pass                    render_pass = 0;
    ktl::i32                                 subpass;
    ktl::api::framebuffer                    framebuffer = 0;
    ktl::bool32                              occlusion_query_enable;
    ktl::api::query_control_flags            query_flags         = 0;
    ktl::api::query_pipeline_statistic_flags pipeline_statistics = 0;
};

struct command_buffer_begin_info final
{
    ktl::api::structure_type                          type  = ktl::api::structure_type::v_command_buffer_begin_info;
    const void *                                      next  = nullptr;
    ktl::api::command_buffer_usage_flags              flags = 0;
    const ktl::api::command_buffer_inheritance_info * inheritance_info = nullptr;
};

struct render_pass_begin_info final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_render_pass_begin_info;
    const void *                  next = nullptr;
    ktl::api::render_pass         render_pass;
    ktl::api::framebuffer         framebuffer;
    ktl::api::rect2d              render_area;
    ktl::i32                      clear_value_count = 0;
    const ktl::api::clear_value * clear_values;
};

struct clear_depth_stencil_value final
{
    float    depth;
    ktl::i32 stencil;
};

struct clear_attachment final
{
    ktl::api::image_aspect_flags aspect_mask;
    ktl::i32                     color_attachment;
    ktl::api::clear_value        clear_value;
};

struct attachment_description final
{
    ktl::api::attachment_description_flags flags = 0;
    ktl::api::format                       format;
    ktl::api::sample_count_flag_bits       samples;
    ktl::api::attachment_load_op           load_op;
    ktl::api::attachment_store_op          store_op;
    ktl::api::attachment_load_op           stencil_load_op;
    ktl::api::attachment_store_op          stencil_store_op;
    ktl::api::image_layout                 initial_layout;
    ktl::api::image_layout                 final_layout;
};

struct attachment_reference final
{
    ktl::i32               attachment;
    ktl::api::image_layout layout;
};

struct subpass_description final
{
    ktl::api::subpass_description_flags    flags = 0;
    ktl::api::pipeline_bind_point          pipeline_bind_point;
    ktl::i32                               input_attachment_count = 0;
    const ktl::api::attachment_reference * input_attachments;
    ktl::i32                               color_attachment_count = 0;
    const ktl::api::attachment_reference * color_attachments;
    const ktl::api::attachment_reference * resolve_attachments       = nullptr;
    const ktl::api::attachment_reference * depth_stencil_attachment  = nullptr;
    ktl::i32                               preserve_attachment_count = 0;
    const ktl::i32 *                       preserve_attachments;
};

struct subpass_dependency final
{
    ktl::i32                       src_subpass;
    ktl::i32                       dst_subpass;
    ktl::api::pipeline_stage_flags src_stage_mask   = 0;
    ktl::api::pipeline_stage_flags dst_stage_mask   = 0;
    ktl::api::access_flags         src_access_mask  = 0;
    ktl::api::access_flags         dst_access_mask  = 0;
    ktl::api::dependency_flags     dependency_flags = 0;
};

struct render_pass_create_info final
{
    ktl::api::structure_type                 type             = ktl::api::structure_type::v_render_pass_create_info;
    const void *                             next             = nullptr;
    ktl::api::render_pass_create_flags       flags            = 0;
    ktl::i32                                 attachment_count = 0;
    const ktl::api::attachment_description * attachments;
    ktl::i32                                 subpass_count;
    const ktl::api::subpass_description *    subpasses;
    ktl::i32                                 dependency_count = 0;
    const ktl::api::subpass_dependency *     dependencies;
};

struct event_create_info final
{
    ktl::api::structure_type     type  = ktl::api::structure_type::v_event_create_info;
    const void *                 next  = nullptr;
    ktl::api::event_create_flags flags = 0;
};

struct fence_create_info final
{
    ktl::api::structure_type     type  = ktl::api::structure_type::v_fence_create_info;
    const void *                 next  = nullptr;
    ktl::api::fence_create_flags flags = 0;
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
    ktl::i32                     max_image_dimension1d;
    ktl::i32                     max_image_dimension2d;
    ktl::i32                     max_image_dimension3d;
    ktl::i32                     max_image_dimension_cube;
    ktl::i32                     max_image_array_layers;
    ktl::i32                     max_texel_buffer_elements;
    ktl::i32                     max_uniform_buffer_range;
    ktl::i32                     max_storage_buffer_range;
    const ktl::i32               max_push_constants_size;
    ktl::i32                     max_memory_allocation_count;
    ktl::i32                     max_sampler_allocation_count;
    ktl::dvsize                  buffer_image_granularity;
    ktl::dvsize                  sparse_address_space_size;
    ktl::i32                     max_bound_descriptor_sets;
    ktl::i32                     max_per_stage_descriptor_samplers;
    ktl::i32                     max_per_stage_descriptor_uniform_buffers;
    ktl::i32                     max_per_stage_descriptor_storage_buffers;
    ktl::i32                     max_per_stage_descriptor_sampled_images;
    ktl::i32                     max_per_stage_descriptor_storage_images;
    ktl::i32                     max_per_stage_descriptor_input_attachments;
    ktl::i32                     max_per_stage_resources;
    ktl::i32                     max_descriptor_set_samplers;
    ktl::i32                     max_descriptor_set_uniform_buffers;
    ktl::i32                     max_descriptor_set_uniform_buffers_dynamic;
    ktl::i32                     max_descriptor_set_storage_buffers;
    ktl::i32                     max_descriptor_set_storage_buffers_dynamic;
    ktl::i32                     max_descriptor_set_sampled_images;
    ktl::i32                     max_descriptor_set_storage_images;
    ktl::i32                     max_descriptor_set_input_attachments;
    ktl::i32                     max_vertex_input_attributes;
    ktl::i32                     max_vertex_input_bindings;
    ktl::i32                     max_vertex_input_attribute_offset;
    ktl::i32                     max_vertex_input_binding_stride;
    ktl::i32                     max_vertex_output_components;
    ktl::i32                     max_tessellation_generation_level;
    ktl::i32                     max_tessellation_patch_size;
    ktl::i32                     max_tessellation_control_per_vertex_input_components;
    ktl::i32                     max_tessellation_control_per_vertex_output_components;
    ktl::i32                     max_tessellation_control_per_patch_output_components;
    ktl::i32                     max_tessellation_control_total_output_components;
    ktl::i32                     max_tessellation_evaluation_input_components;
    ktl::i32                     max_tessellation_evaluation_output_components;
    ktl::i32                     max_geometry_shader_invocations;
    ktl::i32                     max_geometry_input_components;
    ktl::i32                     max_geometry_output_components;
    ktl::i32                     max_geometry_output_vertices;
    ktl::i32                     max_geometry_total_output_components;
    ktl::i32                     max_fragment_input_components;
    ktl::i32                     max_fragment_output_attachments;
    ktl::i32                     max_fragment_dual_src_attachments;
    ktl::i32                     max_fragment_combined_output_resources;
    ktl::i32                     max_compute_shared_memory_size;
    ktl::i32                     max_compute_work_group_count[3];
    ktl::i32                     max_compute_work_group_invocations;
    ktl::i32                     max_compute_work_group_size[3];
    ktl::i32                     sub_pixel_precision_bits;
    ktl::i32                     sub_texel_precision_bits;
    ktl::i32                     mipmap_precision_bits;
    ktl::i32                     max_draw_indexed_index_value;
    ktl::i32                     max_draw_indirect_count;
    float                        max_sampler_lod_bias;
    float                        max_sampler_anisotropy;
    ktl::i32                     max_viewports;
    ktl::i32                     max_viewport_dimensions[2];
    float                        viewport_bounds_range[2];
    ktl::i32                     viewport_sub_pixel_bits;
    ktl::usize                   min_memory_map_alignment;
    ktl::dvsize                  min_texel_buffer_offset_alignment;
    ktl::dvsize                  min_uniform_buffer_offset_alignment;
    ktl::dvsize                  min_storage_buffer_offset_alignment;
    ktl::i32                     min_texel_offset;
    ktl::i32                     max_texel_offset;
    ktl::i32                     min_texel_gather_offset;
    ktl::i32                     max_texel_gather_offset;
    float                        min_interpolation_offset;
    float                        max_interpolation_offset;
    ktl::i32                     sub_pixel_interpolation_offset_bits;
    ktl::i32                     max_framebuffer_width;
    ktl::i32                     max_framebuffer_height;
    ktl::i32                     max_framebuffer_layers;
    ktl::api::sample_count_flags framebuffer_color_sample_counts          = 0;
    ktl::api::sample_count_flags framebuffer_depth_sample_counts          = 0;
    ktl::api::sample_count_flags framebuffer_stencil_sample_counts        = 0;
    ktl::api::sample_count_flags framebuffer_no_attachments_sample_counts = 0;
    ktl::i32                     max_color_attachments;
    ktl::api::sample_count_flags sampled_image_color_sample_counts   = 0;
    ktl::api::sample_count_flags sampled_image_integer_sample_counts = 0;
    ktl::api::sample_count_flags sampled_image_depth_sample_counts   = 0;
    ktl::api::sample_count_flags sampled_image_stencil_sample_counts = 0;
    ktl::api::sample_count_flags storage_image_sample_counts         = 0;
    ktl::i32                     max_sample_mask_words;
    ktl::bool32                  timestamp_compute_and_graphics;
    float                        timestamp_period;
    ktl::i32                     max_clip_distances;
    ktl::i32                     max_cull_distances;
    ktl::i32                     max_combined_clip_and_cull_distances;
    ktl::i32                     discrete_queue_priorities;
    float                        point_size_range[2];
    float                        line_width_range[2];
    float                        point_size_granularity;
    float                        line_width_granularity;
    ktl::bool32                  strict_lines;
    ktl::bool32                  standard_sample_locations;
    ktl::dvsize                  optimal_buffer_copy_offset_alignment;
    ktl::dvsize                  optimal_buffer_copy_row_pitch_alignment;
    ktl::dvsize                  non_coherent_atom_size;
};

struct semaphore_create_info final
{
    ktl::api::structure_type         type  = ktl::api::structure_type::v_semaphore_create_info;
    const void *                     next  = nullptr;
    ktl::api::semaphore_create_flags flags = 0;
};

struct query_pool_create_info final
{
    ktl::api::structure_type                 type  = ktl::api::structure_type::v_query_pool_create_info;
    const void *                             next  = nullptr;
    ktl::api::query_pool_create_flags        flags = 0;
    ktl::api::query_type                     query_type;
    ktl::i32                                 query_count;
    ktl::api::query_pipeline_statistic_flags pipeline_statistics = 0;
};

struct framebuffer_create_info final
{
    ktl::api::structure_type           type  = ktl::api::structure_type::v_framebuffer_create_info;
    const void *                       next  = nullptr;
    ktl::api::framebuffer_create_flags flags = 0;
    ktl::api::render_pass              render_pass;
    ktl::i32                           attachment_count = 0;
    const ktl::api::image_view *       attachments;
    ktl::i32                           width;
    ktl::i32                           height;
    ktl::i32                           layers;
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
    ktl::api::structure_type               type                 = ktl::api::structure_type::v_submit_info;
    const void *                           next                 = nullptr;
    ktl::i32                               wait_semaphore_count = 0;
    const ktl::api::semaphore *            wait_semaphores;
    const ktl::api::pipeline_stage_flags * wait_dst_stage_mask;
    ktl::i32                               command_buffer_count = 0;
    const ktl::api::command_buffer *       command_buffers;
    ktl::i32                               signal_semaphore_count = 0;
    const ktl::api::semaphore *            signal_semaphores;
};

struct display_properties_khr final
{
    ktl::api::display_khr                 display;
    const char *                          display_name;
    ktl::api::extent2d                    physical_dimensions;
    ktl::api::extent2d                    physical_resolution;
    ktl::api::surface_transform_flags_khr supported_transforms = 0;
    ktl::bool32                           plane_reorder_possible;
    ktl::bool32                           persistent_content;
};

struct display_plane_properties_khr final
{
    ktl::api::display_khr current_display;
    ktl::i32              current_stack_index;
};

struct display_mode_parameters_khr final
{
    ktl::api::extent2d visible_region;
    ktl::i32           refresh_rate;
};

struct display_mode_properties_khr final
{
    ktl::api::display_mode_khr            display_mode;
    ktl::api::display_mode_parameters_khr parameters;
};

struct display_mode_create_info_khr final
{
    ktl::api::structure_type                type  = ktl::api::structure_type::v_display_mode_create_info_khr;
    const void *                            next  = nullptr;
    ktl::api::display_mode_create_flags_khr flags = 0;
    ktl::api::display_mode_parameters_khr   parameters;
};

struct display_plane_capabilities_khr final
{
    ktl::api::display_plane_alpha_flags_khr supported_alpha = 0;
    ktl::api::offset2d                      min_src_position;
    ktl::api::offset2d                      max_src_position;
    ktl::api::extent2d                      min_src_extent;
    ktl::api::extent2d                      max_src_extent;
    ktl::api::offset2d                      min_dst_position;
    ktl::api::offset2d                      max_dst_position;
    ktl::api::extent2d                      min_dst_extent;
    ktl::api::extent2d                      max_dst_extent;
};

struct display_surface_create_info_khr final
{
    ktl::api::structure_type                    type  = ktl::api::structure_type::v_display_surface_create_info_khr;
    const void *                                next  = nullptr;
    ktl::api::display_surface_create_flags_khr  flags = 0;
    ktl::api::display_mode_khr                  display_mode;
    ktl::i32                                    plane_index;
    ktl::i32                                    plane_stack_index;
    ktl::api::surface_transform_flag_bits_khr   transform;
    float                                       global_alpha;
    ktl::api::display_plane_alpha_flag_bits_khr alpha_mode;
    ktl::api::extent2d                          image_extent;
};

struct display_surface_stereo_create_info_nv final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_display_surface_stereo_create_info_nv;
    const void *                             next = nullptr;
    ktl::api::display_surface_stereo_type_nv stereo_type;
};

struct display_present_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_display_present_info_khr;
    const void *             next = nullptr;
    ktl::api::rect2d         src_rect;
    ktl::api::rect2d         dst_rect;
    ktl::bool32              persistent;
};

struct surface_capabilities_khr final
{
    ktl::i32                                  min_image_count;
    ktl::i32                                  max_image_count;
    ktl::api::extent2d                        current_extent;
    ktl::api::extent2d                        min_image_extent;
    ktl::api::extent2d                        max_image_extent;
    ktl::i32                                  max_image_array_layers;
    ktl::api::surface_transform_flags_khr     supported_transforms;
    ktl::api::surface_transform_flag_bits_khr current_transform;
    ktl::api::composite_alpha_flags_khr       supported_composite_alpha;
    ktl::api::image_usage_flags               supported_usage_flags;
};

struct android_surface_create_info_khr final
{
    ktl::api::structure_type                   type  = ktl::api::structure_type::v_android_surface_create_info_khr;
    const void *                               next  = nullptr;
    ktl::api::android_surface_create_flags_khr flags = 0;
    ktl::api::anative_window *                 window;
};

struct vi_surface_create_info_nn final
{
    ktl::api::structure_type             type  = ktl::api::structure_type::v_vi_surface_create_info_nn;
    const void *                         next  = nullptr;
    ktl::api::vi_surface_create_flags_nn flags = 0;
    void *                               window;
};

struct wayland_surface_create_info_khr final
{
    ktl::api::structure_type                   type  = ktl::api::structure_type::v_wayland_surface_create_info_khr;
    const void *                               next  = nullptr;
    ktl::api::wayland_surface_create_flags_khr flags = 0;
    ktl::api::wl_display *                     display;
    ktl::api::wl_surface *                     surface;
};

struct ubm_surface_create_info_sec final
{
    ktl::api::structure_type               type  = ktl::api::structure_type::v_ubm_surface_create_info_sec;
    const void *                           next  = nullptr;
    ktl::api::ubm_surface_create_flags_sec flags = 0;
    ktl::api::ubm_device *                 device;
    ktl::api::ubm_surface *                surface;
};

struct win32surface_create_info_khr final
{
    ktl::api::structure_type                type  = ktl::api::structure_type::v_win32_surface_create_info_khr;
    const void *                            next  = nullptr;
    ktl::api::win32surface_create_flags_khr flags = 0;
    ktl::api::hinstance                     hinstance;
    ktl::api::hwnd                          hwnd;
};

struct xlib_surface_create_info_khr final
{
    ktl::api::structure_type                type  = ktl::api::structure_type::v_xlib_surface_create_info_khr;
    const void *                            next  = nullptr;
    ktl::api::xlib_surface_create_flags_khr flags = 0;
    ktl::api::display *                     dpy;
    ktl::api::window                        window;
};

struct xcb_surface_create_info_khr final
{
    ktl::api::structure_type               type  = ktl::api::structure_type::v_xcb_surface_create_info_khr;
    const void *                           next  = nullptr;
    ktl::api::xcb_surface_create_flags_khr flags = 0;
    ktl::api::xcb_connection_t *           connection;
    ktl::api::xcb_window_t                 window;
};

struct direct_fbsurface_create_info_ext final
{
    ktl::api::structure_type                    type  = ktl::api::structure_type::v_directfb_surface_create_info_ext;
    const void *                                next  = nullptr;
    ktl::api::direct_fbsurface_create_flags_ext flags = 0;
    ktl::api::idirect_fb *                      dfb;
    ktl::api::idirect_fbsurface *               surface;
};

struct image_pipe_surface_create_info_fuchsia final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_imagepipe_surface_create_info_fuchsia;
    const void *             next = nullptr;
    ktl::api::image_pipe_surface_create_flags_fuchsia flags = 0;
    ktl::api::zx_handle_t                             image_pipe_handle;
};

struct stream_descriptor_surface_create_info_ggp final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_stream_descriptor_surface_create_info_ggp;
    const void *             next = nullptr;
    ktl::api::stream_descriptor_surface_create_flags_ggp flags = 0;
    ktl::api::ggp_stream_descriptor                      stream_descriptor;
};

struct screen_surface_create_info_qnx final
{
    ktl::api::structure_type                  type  = ktl::api::structure_type::v_screen_surface_create_info_qnx;
    const void *                              next  = nullptr;
    ktl::api::screen_surface_create_flags_qnx flags = 0;
    ktl::api::_screen_context *               context;
    ktl::api::_screen_window *                window;
};

struct surface_format_khr final
{
    ktl::api::format          format;
    ktl::api::color_space_khr color_space;
};

struct swapchain_create_info_khr final
{
    ktl::api::structure_type                  type  = ktl::api::structure_type::v_swapchain_create_info_khr;
    const void *                              next  = nullptr;
    ktl::api::swapchain_create_flags_khr      flags = 0;
    ktl::api::surface_khr                     surface;
    ktl::i32                                  min_image_count;
    ktl::api::format                          image_format;
    ktl::api::color_space_khr                 image_color_space;
    ktl::api::extent2d                        image_extent;
    ktl::i32                                  image_array_layers;
    ktl::api::image_usage_flags               image_usage;
    ktl::api::sharing_mode                    image_sharing_mode;
    ktl::i32                                  queue_family_index_count = 0;
    const ktl::i32 *                          queue_family_indices;
    ktl::api::surface_transform_flag_bits_khr pre_transform;
    ktl::api::composite_alpha_flag_bits_khr   composite_alpha;
    ktl::api::present_mode_khr                present_mode;
    ktl::bool32                               clipped;
    ktl::api::swapchain_khr                   old_swapchain = 0;
    ktl::api::swapchain_khr                   old_swapchain = 0;
};

struct present_info_khr final
{
    ktl::api::structure_type        type                 = ktl::api::structure_type::v_present_info_khr;
    const void *                    next                 = nullptr;
    ktl::i32                        wait_semaphore_count = 0;
    const ktl::api::semaphore *     wait_semaphores;
    ktl::i32                        swapchain_count;
    const ktl::api::swapchain_khr * swapchains;
    const ktl::i32 *                image_indices;
    ktl::api::result *              results = nullptr;
};

struct debug_report_callback_create_info_ext final
{
    ktl::api::structure_type                   type = ktl::api::structure_type::v_debug_report_callback_create_info_ext;
    const void *                               next = nullptr;
    ktl::api::debug_report_flags_ext           flags = 0;
    ktl::api::pfn_vk_debug_report_callback_ext pfn_callback;
    void *                                     user_data = nullptr;
};

struct validation_flags_ext final
{
    ktl::api::structure_type               type = ktl::api::structure_type::v_validation_flags_ext;
    const void *                           next = nullptr;
    ktl::i32                               disabled_validation_check_count;
    const ktl::api::validation_check_ext * disabled_validation_checks;
};

struct validation_features_ext final
{
    ktl::api::structure_type                         type = ktl::api::structure_type::v_validation_features_ext;
    const void *                                     next = nullptr;
    ktl::i32                                         enabled_validation_feature_count = 0;
    const ktl::api::validation_feature_enable_ext *  enabled_validation_features;
    ktl::i32                                         disabled_validation_feature_count = 0;
    const ktl::api::validation_feature_disable_ext * disabled_validation_features;
};

struct layer_settings_create_info_ext final
{
    ktl::api::structure_type            type          = ktl::api::structure_type::v_layer_settings_create_info_ext;
    const void *                        next          = nullptr;
    ktl::i32                            setting_count = 0;
    const ktl::api::layer_setting_ext * settings;
};

struct layer_setting_ext final
{
    const char *                     layer_name;
    const char *                     setting_name;
    ktl::api::layer_setting_type_ext type;
    ktl::i32                         value_count = 0;
    const void *                     values;
};

struct application_parameters_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_application_parameters_ext;
    const void *             next = nullptr;
    ktl::i32                 vendor_id;
    ktl::i32                 device_id = 0;
    ktl::i32                 key;
    ktl::u64                 value;
};

struct pipeline_rasterization_state_rasterization_order_amd final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rasterization_state_rasterization_order_amd;
    const void *             next = nullptr;
    ktl::api::rasterization_order_amd rasterization_order;
};

struct debug_marker_object_name_info_ext final
{
    ktl::api::structure_type               type = ktl::api::structure_type::v_debug_marker_object_name_info_ext;
    const void *                           next = nullptr;
    ktl::api::debug_report_object_type_ext object_type;
    ktl::u64                               object;
    const char *                           object_name;
};

struct debug_marker_object_tag_info_ext final
{
    ktl::api::structure_type               type = ktl::api::structure_type::v_debug_marker_object_tag_info_ext;
    const void *                           next = nullptr;
    ktl::api::debug_report_object_type_ext object_type;
    ktl::u64                               object;
    ktl::u64                               tag_name;
    ktl::usize                             tag_size;
    const void *                           tag;
};

struct debug_marker_marker_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_debug_marker_marker_info_ext;
    const void *             next = nullptr;
    const char *             marker_name;
    float                    color[4];
};

struct dedicated_allocation_image_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_dedicated_allocation_image_create_info_nv;
    const void *             next = nullptr;
    ktl::bool32              dedicated_allocation;
};

struct dedicated_allocation_buffer_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_dedicated_allocation_buffer_create_info_nv;
    const void *             next = nullptr;
    ktl::bool32              dedicated_allocation;
};

struct dedicated_allocation_memory_allocate_info_nv final
{
    ktl::api::structure_type type   = ktl::api::structure_type::v_dedicated_allocation_memory_allocate_info_nv;
    const void *             next   = nullptr;
    ktl::api::image          image  = 0;
    ktl::api::buffer         buffer = 0;
};

struct external_image_format_properties_nv final
{
    ktl::api::image_format_properties              image_format_properties;
    ktl::api::external_memory_feature_flags_nv     external_memory_features          = 0;
    ktl::api::external_memory_handle_type_flags_nv export_from_imported_handle_types = 0;
    ktl::api::external_memory_handle_type_flags_nv compatible_handle_types           = 0;
};

struct external_memory_image_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_external_memory_image_create_info_nv;
    const void *             next = nullptr;
    ktl::api::external_memory_handle_type_flags_nv handle_types = 0;
};

struct export_memory_allocate_info_nv final
{
    ktl::api::structure_type                       type = ktl::api::structure_type::v_export_memory_allocate_info_nv;
    const void *                                   next = nullptr;
    ktl::api::external_memory_handle_type_flags_nv handle_types = 0;
};

struct import_memory_win32handle_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_win32_handle_info_nv;
    const void *             next = nullptr;
    ktl::api::external_memory_handle_type_flags_nv handle_type = 0;
    ktl::api::handle                               handle      = 0;
};

struct export_memory_win32handle_info_nv final
{
    ktl::api::structure_type               type       = ktl::api::structure_type::v_export_memory_win32_handle_info_nv;
    const void *                           next       = nullptr;
    const ktl::api::security__attributes * attributes = nullptr;
    ktl::api::dword                        dw_access  = 0;
};

struct export_memory_sci_buf_info_nv final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_export_memory_sci_buf_info_nv;
    const void *                   next = nullptr;
    ktl::api::nv_sci_buf_attr_list attributes;
};

struct import_memory_sci_buf_info_nv final
{
    ktl::api::structure_type                        type = ktl::api::structure_type::v_import_memory_sci_buf_info_nv;
    const void *                                    next = nullptr;
    ktl::api::external_memory_handle_type_flag_bits handle_type;
    ktl::api::nv_sci_buf_obj                        handle;
};

struct memory_get_sci_buf_info_nv final
{
    ktl::api::structure_type                        type = ktl::api::structure_type::v_memory_get_sci_buf_info_nv;
    const void *                                    next = nullptr;
    ktl::api::device_memory                         memory;
    ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct memory_sci_buf_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_sci_buf_properties_nv;
    const void *             next = nullptr;
    ktl::i32                 memory_type_bits;
};

struct physical_device_external_memory_sci_buf_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_memory_sci_buf_features_nv;
    void *                   next = nullptr;
    ktl::bool32              sci_buf_import;
    ktl::bool32              sci_buf_export;
};

using physical_device_external_sci_buf_features_nv = physical_device_external_memory_sci_buf_features_nv;

struct win32keyed_mutex_acquire_release_info_nv final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_win32_keyed_mutex_acquire_release_info_nv;
    const void *                    next = nullptr;
    ktl::i32                        acquire_count = 0;
    const ktl::api::device_memory * acquire_syncs;
    const ktl::u64 *                acquire_keys;
    const ktl::i32 *                acquire_timeout_milliseconds;
    ktl::i32                        release_count = 0;
    const ktl::api::device_memory * release_syncs;
    const ktl::u64 *                release_keys;
};

struct physical_device_device_generated_commands_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_generated_commands_features_nv;
    void *                   next = nullptr;
    ktl::bool32              device_generated_commands;
};

struct push_constant_bank_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_push_constant_bank_info_nv;
    const void *             next = nullptr;
    ktl::i32                 bank;
};

struct physical_device_push_constant_bank_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_push_constant_bank_features_nv;
    void *                   next = nullptr;
    ktl::bool32              push_constant_bank;
};

struct physical_device_push_constant_bank_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_push_constant_bank_properties_nv;
    void *                   next = nullptr;
    ktl::i32                 max_graphics_push_constant_banks;
    ktl::i32                 max_compute_push_constant_banks;
    ktl::i32                 max_graphics_push_data_banks;
    ktl::i32                 max_compute_push_data_banks;
};

struct physical_device_device_generated_commands_compute_features_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_device_generated_commands_compute_features_nv;
    void *      next = nullptr;
    ktl::bool32 device_generated_compute;
    ktl::bool32 device_generated_compute_pipelines;
    ktl::bool32 device_generated_compute_capture_replay;
};

struct device_private_data_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_private_data_create_info;
    const void *             next = nullptr;
    ktl::i32                 private_data_slot_request_count;
};

using device_private_data_create_info_ext = device_private_data_create_info;

struct private_data_slot_create_info final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_private_data_slot_create_info;
    const void *                             next = nullptr;
    ktl::api::private_data_slot_create_flags flags;
};

using private_data_slot_create_info_ext = private_data_slot_create_info;

struct physical_device_private_data_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_private_data_features;
    void *                   next = nullptr;
    ktl::bool32              private_data;
};

using physical_device_private_data_features_ext = physical_device_private_data_features;

struct physical_device_device_generated_commands_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_generated_commands_properties_nv;
    void *                   next = nullptr;
    ktl::i32                 max_graphics_shader_group_count;
    ktl::i32                 max_indirect_sequence_count;
    ktl::i32                 max_indirect_commands_token_count;
    ktl::i32                 max_indirect_commands_stream_count;
    ktl::i32                 max_indirect_commands_token_offset;
    ktl::i32                 max_indirect_commands_stream_stride;
    ktl::i32                 min_sequences_count_buffer_offset_alignment;
    ktl::i32                 min_sequences_index_buffer_offset_alignment;
    ktl::i32                 min_indirect_commands_buffer_offset_alignment;
};

struct physical_device_cluster_acceleration_structure_features_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_cluster_acceleration_structure_features_nv;
    void *      next = nullptr;
    ktl::bool32 cluster_acceleration_structure;
};

struct physical_device_cluster_acceleration_structure_properties_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_cluster_acceleration_structure_properties_nv;
    void *   next = nullptr;
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
    ktl::api::structure_type type =
        ktl::api::structure_type::v_ray_tracing_pipeline_cluster_acceleration_structure_create_info_nv;
    void *      next = nullptr;
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
    ktl::i32    cluster_references_count;
    ktl::i32    cluster_references_stride;
    ktl::dvaddr cluster_references;
};

struct cluster_acceleration_structure_get_template_indices_info_nv final
{
    ktl::dvaddr cluster_template_address;
};

struct cluster_acceleration_structure_build_triangle_cluster_info_nv final
{
    ktl::i32                                                  cluster_id;
    ktl::api::cluster_acceleration_structure_cluster_flags_nv cluster_flags = 0;
    ktl::i32                                                  triangle_count;
    ktl::i32                                                  vertex_count;
    ktl::i32                                                  position_truncate_bit_count;
    ktl::i32                                                  index_type;
    ktl::i32                                                  opacity_micromap_index_type;
    ktl::api::cluster_acceleration_structure_geometry_index_and_geometry_flags_nv
                base_geometry_index_and_geometry_flags;
    ktl::u16    index_buffer_stride;
    ktl::u16    vertex_buffer_stride;
    ktl::u16    geometry_index_and_flags_buffer_stride;
    ktl::u16    opacity_micromap_index_buffer_stride;
    ktl::dvaddr index_buffer;
    ktl::dvaddr vertex_buffer;
    ktl::dvaddr geometry_index_and_flags_buffer = 0;
    ktl::dvaddr opacity_micromap_array          = 0;
    ktl::dvaddr opacity_micromap_index_buffer   = 0;
};

struct cluster_acceleration_structure_build_triangle_cluster_template_info_nv final
{
    ktl::i32                                                  cluster_id;
    ktl::api::cluster_acceleration_structure_cluster_flags_nv cluster_flags = 0;
    ktl::i32                                                  triangle_count;
    ktl::i32                                                  vertex_count;
    ktl::i32                                                  position_truncate_bit_count;
    ktl::i32                                                  index_type;
    ktl::i32                                                  opacity_micromap_index_type;
    ktl::api::cluster_acceleration_structure_geometry_index_and_geometry_flags_nv
                base_geometry_index_and_geometry_flags;
    ktl::u16    index_buffer_stride;
    ktl::u16    vertex_buffer_stride;
    ktl::u16    geometry_index_and_flags_buffer_stride;
    ktl::u16    opacity_micromap_index_buffer_stride;
    ktl::dvaddr index_buffer;
    ktl::dvaddr vertex_buffer                    = 0;
    ktl::dvaddr geometry_index_and_flags_buffer  = 0;
    ktl::dvaddr opacity_micromap_array           = 0;
    ktl::dvaddr opacity_micromap_index_buffer    = 0;
    ktl::dvaddr instantiation_bounding_box_limit = 0;
};

struct cluster_acceleration_structure_instantiate_cluster_info_nv final
{
    ktl::i32                            cluster_id_offset;
    ktl::i32                            geometry_index_offset;
    ktl::i32                            reserved;
    ktl::dvaddr                         cluster_template_address;
    ktl::api::strided_device_address_nv vertex_buffer;
};

struct cluster_acceleration_structure_clusters_bottom_level_input_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_cluster_acceleration_structure_clusters_bottom_level_input_nv;
    void *   next = nullptr;
    ktl::i32 max_total_cluster_count;
    ktl::i32 max_cluster_count_per_acceleration_structure;
};

struct cluster_acceleration_structure_triangle_cluster_input_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_cluster_acceleration_structure_triangle_cluster_input_nv;
    void *           next = nullptr;
    ktl::api::format vertex_format;
    ktl::i32         max_geometry_index_value;
    ktl::i32         max_cluster_unique_geometry_count;
    ktl::i32         max_cluster_triangle_count;
    ktl::i32         max_cluster_vertex_count;
    ktl::i32         max_total_triangle_count;
    ktl::i32         max_total_vertex_count;
    ktl::i32         min_position_truncate_bit_count;
};

struct cluster_acceleration_structure_move_objects_input_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_cluster_acceleration_structure_move_objects_input_nv;
    void *                   next = nullptr;
    ktl::api::cluster_acceleration_structure_type_nv type;
    ktl::bool32                                      no_move_overlap;
    ktl::dvsize                                      max_moved_bytes;
};

struct cluster_acceleration_structure_input_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_cluster_acceleration_structure_input_info_nv;
    void *                   next = nullptr;
    ktl::i32                 max_acceleration_structure_count;
    ktl::api::build_acceleration_structure_flags_khr     flags = 0;
    ktl::api::cluster_acceleration_structure_op_type_nv  op_type;
    ktl::api::cluster_acceleration_structure_op_mode_nv  op_mode;
    ktl::api::cluster_acceleration_structure_op_input_nv op_input;
};

struct cluster_acceleration_structure_commands_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_cluster_acceleration_structure_commands_info_nv;
    void *                   next = nullptr;
    ktl::api::cluster_acceleration_structure_input_info_nv               input;
    ktl::dvaddr                                                          dst_implicit_data = 0;
    ktl::dvaddr                                                          scratch_data;
    ktl::api::strided_device_address_region_khr                          dst_addresses_array;
    ktl::api::strided_device_address_region_khr                          dst_sizes_array;
    ktl::api::strided_device_address_region_khr                          src_infos_array;
    ktl::dvaddr                                                          src_infos_count          = 0;
    ktl::api::cluster_acceleration_structure_address_resolution_flags_nv address_resolution_flags = 0;
};

struct physical_device_multi_draw_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multi_draw_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 max_multi_draw_count;
};

struct graphics_shader_group_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_graphics_shader_group_create_info_nv;
    const void *             next = nullptr;
    ktl::i32                 stage_count;
    const ktl::api::pipeline_shader_stage_create_info *       stages;
    const ktl::api::pipeline_vertex_input_state_create_info * vertex_input_state = nullptr;
    const ktl::api::pipeline_tessellation_state_create_info * tessellation_state = nullptr;
};

struct graphics_pipeline_shader_groups_create_info_nv final
{
    ktl::api::structure_type type        = ktl::api::structure_type::v_graphics_pipeline_shader_groups_create_info_nv;
    const void *             next        = nullptr;
    ktl::i32                 group_count = 0;
    const ktl::api::graphics_shader_group_create_info_nv * groups;
    ktl::i32                                               pipeline_count = 0;
    const ktl::api::pipeline *                             pipelines;
};

struct bind_shader_group_indirect_command_nv final
{
    ktl::i32 group_index;
};

struct bind_index_buffer_indirect_command_nv final
{
    ktl::dvaddr          buffer_address;
    ktl::i32             size;
    ktl::api::index_type index_type;
};

struct bind_vertex_buffer_indirect_command_nv final
{
    ktl::dvaddr buffer_address;
    ktl::i32    size;
    ktl::i32    stride;
};

struct set_state_flags_indirect_command_nv final
{
    ktl::i32 data;
};

struct indirect_commands_stream_nv final
{
    ktl::api::buffer buffer;
    ktl::dvsize      offset;
};

struct indirect_commands_layout_token_nv final
{
    ktl::api::structure_type                  type = ktl::api::structure_type::v_indirect_commands_layout_token_nv;
    const void *                              next = nullptr;
    ktl::api::indirect_commands_token_type_nv token_type;
    ktl::i32                                  stream;
    ktl::i32                                  offset;
    ktl::i32                                  vertex_binding_unit;
    ktl::bool32                               vertex_dynamic_stride;
    const ktl::api::pipeline_layout           pushconstant_pipeline_layout    = 0;
    const ktl::api::shader_stage_flags        pushconstant_shader_stage_flags = 0;
    const ktl::i32                            pushconstant_offset;
    const ktl::i32                            pushconstant_size;
    ktl::api::indirect_state_flags_nv         indirect_state_flags = 0;
    ktl::i32                                  index_type_count     = 0;
    const ktl::api::index_type *              index_types;
    const ktl::i32 *                          index_type_values;
};

struct indirect_commands_layout_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_indirect_commands_layout_create_info_nv;
    const void *             next = nullptr;
    ktl::api::indirect_commands_layout_usage_flags_nv   flags = 0;
    ktl::api::pipeline_bind_point                       pipeline_bind_point;
    ktl::i32                                            token_count;
    const ktl::api::indirect_commands_layout_token_nv * tokens;
    ktl::i32                                            stream_count;
    const ktl::i32 *                                    stream_strides;
};

struct generated_commands_info_nv final
{
    ktl::api::structure_type                      type = ktl::api::structure_type::v_generated_commands_info_nv;
    const void *                                  next = nullptr;
    ktl::api::pipeline_bind_point                 pipeline_bind_point;
    ktl::api::pipeline                            pipeline = 0;
    ktl::api::indirect_commands_layout_nv         indirect_commands_layout;
    ktl::i32                                      stream_count;
    const ktl::api::indirect_commands_stream_nv * streams;
    ktl::i32                                      sequences_count;
    ktl::api::buffer                              preprocess_buffer;
    ktl::dvsize                                   preprocess_offset;
    ktl::dvsize                                   preprocess_size;
    ktl::api::buffer                              sequences_count_buffer = 0;
    ktl::dvsize                                   sequences_count_offset;
    ktl::api::buffer                              sequences_index_buffer = 0;
    ktl::dvsize                                   sequences_index_offset;
};

struct generated_commands_memory_requirements_info_nv final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_generated_commands_memory_requirements_info_nv;
    const void *                  next = nullptr;
    ktl::api::pipeline_bind_point pipeline_bind_point;
    ktl::api::pipeline            pipeline = 0;
    ktl::api::indirect_commands_layout_nv indirect_commands_layout;
    ktl::i32                              max_sequences_count;
};

struct pipeline_indirect_device_address_info_nv final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_pipeline_indirect_device_address_info_nv;
    const void *                  next = nullptr;
    ktl::api::pipeline_bind_point pipeline_bind_point;
    ktl::api::pipeline            pipeline;
};

struct bind_pipeline_indirect_command_nv final
{
    ktl::dvaddr pipeline_address;
};

struct physical_device_features2 final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_physical_device_features_2;
    void *                             next = nullptr;
    ktl::api::physical_device_features features;
};

using physical_device_features2khr = physical_device_features2;

struct physical_device_properties2 final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_physical_device_properties_2;
    void *                               next = nullptr;
    ktl::api::physical_device_properties properties;
};

using physical_device_properties2khr = physical_device_properties2;

struct format_properties2 final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_format_properties_2;
    void *                      next = nullptr;
    ktl::api::format_properties format_properties;
};

using format_properties2khr = format_properties2;

struct image_format_properties2 final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_image_format_properties_2;
    void *                            next = nullptr;
    ktl::api::image_format_properties image_format_properties;
};

using image_format_properties2khr = image_format_properties2;

struct physical_device_image_format_info2 final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_physical_device_image_format_info_2;
    const void *                 next = nullptr;
    ktl::api::format             format;
    ktl::api::image_type         type;
    ktl::api::image_tiling       tiling;
    ktl::api::image_usage_flags  usage;
    ktl::api::image_create_flags flags = 0;
};

using physical_device_image_format_info2khr = physical_device_image_format_info2;

struct queue_family_properties2 final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_queue_family_properties_2;
    void *                            next = nullptr;
    ktl::api::queue_family_properties queue_family_properties;
};

using queue_family_properties2khr = queue_family_properties2;

struct physical_device_memory_properties2 final
{
    ktl::api::structure_type                    type = ktl::api::structure_type::v_physical_device_memory_properties_2;
    void *                                      next = nullptr;
    ktl::api::physical_device_memory_properties memory_properties;
};

using physical_device_memory_properties2khr = physical_device_memory_properties2;

struct sparse_image_format_properties2 final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_sparse_image_format_properties_2;
    void *                                   next = nullptr;
    ktl::api::sparse_image_format_properties properties;
};

using sparse_image_format_properties2khr = sparse_image_format_properties2;

struct physical_device_sparse_image_format_info2 final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_physical_device_sparse_image_format_info_2;
    const void *                     next = nullptr;
    ktl::api::format                 format;
    ktl::api::image_type             type;
    ktl::api::sample_count_flag_bits samples;
    ktl::api::image_usage_flags      usage;
    ktl::api::image_tiling           tiling;
};

using physical_device_sparse_image_format_info2khr = physical_device_sparse_image_format_info2;

struct physical_device_push_descriptor_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_push_descriptor_properties;
    void *                   next = nullptr;
    ktl::i32                 max_push_descriptors;
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
    ktl::api::structure_type      type = ktl::api::structure_type::v_physical_device_driver_properties;
    void *                        next = nullptr;
    ktl::api::driver_id           driver_id;
    char                          driver_name[KTL_API_MAX_DRIVER_NAME_SIZE];
    char                          driver_info[KTL_API_MAX_DRIVER_INFO_SIZE];
    ktl::api::conformance_version conformance_version;
};

using physical_device_driver_properties_khr = physical_device_driver_properties;

struct present_regions_khr final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_present_regions_khr;
    const void *                         next = nullptr;
    ktl::i32                             swapchain_count;
    const ktl::api::present_region_khr * regions = nullptr;
};

struct present_region_khr final
{
    ktl::i32                         rectangle_count = 0;
    const ktl::api::rect_layer_khr * rectangles      = nullptr;
};

struct rect_layer_khr final
{
    ktl::api::offset2d offset;
    ktl::api::extent2d extent;
    ktl::i32           layer;
};

struct physical_device_variable_pointers_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_variable_pointers_features;
    void *                   next = nullptr;
    ktl::bool32              variable_pointers_storage_buffer;
    ktl::bool32              variable_pointers;
};

using physical_device_variable_pointers_features_khr = physical_device_variable_pointers_features;

using physical_device_variable_pointer_features_khr = physical_device_variable_pointers_features;

using physical_device_variable_pointer_features = physical_device_variable_pointers_features;

struct external_memory_properties final
{
    ktl::api::external_memory_feature_flags     external_memory_features;
    ktl::api::external_memory_handle_type_flags export_from_imported_handle_types = 0;
    ktl::api::external_memory_handle_type_flags compatible_handle_types;
};

using external_memory_properties_khr = external_memory_properties;

struct physical_device_external_image_format_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_image_format_info;
    const void *             next = nullptr;
    ktl::api::external_memory_handle_type_flag_bits handle_type = 0;
};

using physical_device_external_image_format_info_khr = physical_device_external_image_format_info;

struct external_image_format_properties final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_external_image_format_properties;
    void *                               next = nullptr;
    ktl::api::external_memory_properties external_memory_properties;
};

using external_image_format_properties_khr = external_image_format_properties;

struct physical_device_external_buffer_info final
{
    ktl::api::structure_type      type  = ktl::api::structure_type::v_physical_device_external_buffer_info;
    const void *                  next  = nullptr;
    ktl::api::buffer_create_flags flags = 0;
    ktl::api::buffer_usage_flags  usage = 0;
    ktl::api::external_memory_handle_type_flag_bits handle_type;
};

using physical_device_external_buffer_info_khr = physical_device_external_buffer_info;

struct external_buffer_properties final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_external_buffer_properties;
    void *                               next = nullptr;
    ktl::api::external_memory_properties external_memory_properties;
};

using external_buffer_properties_khr = external_buffer_properties;

struct physical_device_idproperties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_id_properties;
    void *                   next = nullptr;
    ktl::u8                  device_uuid[KTL_API_UUID_SIZE];
    ktl::u8                  driver_uuid[KTL_API_UUID_SIZE];
    ktl::u8                  device_luid[KTL_API_LUID_SIZE];
    ktl::i32                 device_node_mask;
    ktl::bool32              device_luidvalid;
};

using physical_device_idproperties_khr = physical_device_idproperties;

struct external_memory_image_create_info final
{
    ktl::api::structure_type                    type = ktl::api::structure_type::v_external_memory_image_create_info;
    const void *                                next = nullptr;
    ktl::api::external_memory_handle_type_flags handle_types = 0;
};

using external_memory_image_create_info_khr = external_memory_image_create_info;

struct external_memory_buffer_create_info final
{
    ktl::api::structure_type                    type = ktl::api::structure_type::v_external_memory_buffer_create_info;
    const void *                                next = nullptr;
    ktl::api::external_memory_handle_type_flags handle_types = 0;
};

using external_memory_buffer_create_info_khr = external_memory_buffer_create_info;

struct export_memory_allocate_info final
{
    ktl::api::structure_type                    type         = ktl::api::structure_type::v_export_memory_allocate_info;
    const void *                                next         = nullptr;
    ktl::api::external_memory_handle_type_flags handle_types = 0;
};

using export_memory_allocate_info_khr = export_memory_allocate_info;

struct import_memory_win32handle_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_win32_handle_info_khr;
    const void *             next = nullptr;
    ktl::api::external_memory_handle_type_flag_bits handle_type = 0;
    ktl::api::handle                                handle      = 0;
    ktl::api::lpcwstr                               name        = 0;
};

struct export_memory_win32handle_info_khr final
{
    ktl::api::structure_type               type       = ktl::api::structure_type::v_export_memory_win32_handle_info_khr;
    const void *                           next       = nullptr;
    const ktl::api::security__attributes * attributes = nullptr;
    ktl::api::dword                        dw_access;
    ktl::api::lpcwstr                      name;
};

struct import_memory_zircon_handle_info_fuchsia final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_zircon_handle_info_fuchsia;
    const void *             next = nullptr;
    ktl::api::external_memory_handle_type_flag_bits handle_type = 0;
    ktl::api::zx_handle_t                           handle      = 0;
};

struct memory_zircon_handle_properties_fuchsia final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_zircon_handle_properties_fuchsia;
    void *                   next = nullptr;
    ktl::i32                 memory_type_bits;
};

struct memory_get_zircon_handle_info_fuchsia final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_zircon_handle_info_fuchsia;
    const void *             next = nullptr;
    ktl::api::device_memory  memory;
    ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct memory_win32handle_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_win32_handle_properties_khr;
    void *                   next = nullptr;
    ktl::i32                 memory_type_bits;
};

struct memory_get_win32handle_info_khr final
{
    ktl::api::structure_type                        type = ktl::api::structure_type::v_memory_get_win32_handle_info_khr;
    const void *                                    next = nullptr;
    ktl::api::device_memory                         memory;
    ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct import_memory_fd_info_khr final
{
    ktl::api::structure_type                        type        = ktl::api::structure_type::v_import_memory_fd_info_khr;
    const void *                                    next        = nullptr;
    ktl::api::external_memory_handle_type_flag_bits handle_type = 0;
    ktl::api::int                                   fd;
};

struct memory_fd_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_fd_properties_khr;
    void *                   next = nullptr;
    ktl::i32                 memory_type_bits;
};

struct memory_get_fd_info_khr final
{
    ktl::api::structure_type                        type = ktl::api::structure_type::v_memory_get_fd_info_khr;
    const void *                                    next = nullptr;
    ktl::api::device_memory                         memory;
    ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct win32keyed_mutex_acquire_release_info_khr final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_win32_keyed_mutex_acquire_release_info_khr;
    const void *                    next = nullptr;
    ktl::i32                        acquire_count = 0;
    const ktl::api::device_memory * acquire_syncs;
    const ktl::u64 *                acquire_keys;
    const ktl::i32 *                acquire_timeouts;
    ktl::i32                        release_count = 0;
    const ktl::api::device_memory * release_syncs;
    const ktl::u64 *                release_keys;
};

struct import_memory_metal_handle_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_metal_handle_info_ext;
    const void *             next = nullptr;
    ktl::api::external_memory_handle_type_flag_bits handle_type = 0;
    void *                                          handle      = nullptr;
};

struct memory_metal_handle_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_metal_handle_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 memory_type_bits;
};

struct memory_get_metal_handle_info_ext final
{
    ktl::api::structure_type                        type = ktl::api::structure_type::v_memory_get_metal_handle_info_ext;
    const void *                                    next = nullptr;
    ktl::api::device_memory                         memory;
    ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct physical_device_external_semaphore_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_semaphore_info;
    const void *             next = nullptr;
    ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};

using physical_device_external_semaphore_info_khr = physical_device_external_semaphore_info;

struct external_semaphore_properties final
{
    ktl::api::structure_type                       type = ktl::api::structure_type::v_external_semaphore_properties;
    void *                                         next = nullptr;
    ktl::api::external_semaphore_handle_type_flags export_from_imported_handle_types;
    ktl::api::external_semaphore_handle_type_flags compatible_handle_types;
    ktl::api::external_semaphore_feature_flags     external_semaphore_features = 0;
};

using external_semaphore_properties_khr = external_semaphore_properties;

struct export_semaphore_create_info final
{
    ktl::api::structure_type                       type = ktl::api::structure_type::v_export_semaphore_create_info;
    const void *                                   next = nullptr;
    ktl::api::external_semaphore_handle_type_flags handle_types = 0;
};

using export_semaphore_create_info_khr = export_semaphore_create_info;

struct import_semaphore_win32handle_info_khr final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_import_semaphore_win32_handle_info_khr;
    const void *                     next = nullptr;
    ktl::api::semaphore              semaphore;
    ktl::api::semaphore_import_flags flags = 0;
    ktl::api::external_semaphore_handle_type_flag_bits handle_type;
    ktl::api::handle                                   handle = 0;
    ktl::api::lpcwstr                                  name   = 0;
};

struct export_semaphore_win32handle_info_khr final
{
    ktl::api::structure_type               type = ktl::api::structure_type::v_export_semaphore_win32_handle_info_khr;
    const void *                           next = nullptr;
    const ktl::api::security__attributes * attributes = nullptr;
    ktl::api::dword                        dw_access;
    ktl::api::lpcwstr                      name;
};

struct d3d12fence_submit_info_khr final
{
    ktl::api::structure_type type                          = ktl::api::structure_type::v_d3d12_fence_submit_info_khr;
    const void *             next                          = nullptr;
    ktl::i32                 wait_semaphore_values_count   = 0;
    const ktl::u64 *         wait_semaphore_values         = nullptr;
    ktl::i32                 signal_semaphore_values_count = 0;
    const ktl::u64 *         signal_semaphore_values       = nullptr;
};

struct semaphore_get_win32handle_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_get_win32_handle_info_khr;
    const void *             next = nullptr;
    ktl::api::semaphore      semaphore;
    ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};

struct import_semaphore_fd_info_khr final
{
    ktl::api::structure_type                           type = ktl::api::structure_type::v_import_semaphore_fd_info_khr;
    const void *                                       next = nullptr;
    ktl::api::semaphore                                semaphore;
    ktl::api::semaphore_import_flags                   flags = 0;
    ktl::api::external_semaphore_handle_type_flag_bits handle_type;
    ktl::api::int                                      fd;
};

struct semaphore_get_fd_info_khr final
{
    ktl::api::structure_type                           type = ktl::api::structure_type::v_semaphore_get_fd_info_khr;
    const void *                                       next = nullptr;
    ktl::api::semaphore                                semaphore;
    ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};

struct import_semaphore_zircon_handle_info_fuchsia final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_import_semaphore_zircon_handle_info_fuchsia;
    const void *                     next = nullptr;
    ktl::api::semaphore              semaphore;
    ktl::api::semaphore_import_flags flags = 0;
    ktl::api::external_semaphore_handle_type_flag_bits handle_type;
    ktl::api::zx_handle_t                              zircon_handle;
};

struct semaphore_get_zircon_handle_info_fuchsia final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_get_zircon_handle_info_fuchsia;
    const void *             next = nullptr;
    ktl::api::semaphore      semaphore;
    ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};

struct physical_device_external_fence_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_fence_info;
    const void *             next = nullptr;
    ktl::api::external_fence_handle_type_flag_bits handle_type;
};

using physical_device_external_fence_info_khr = physical_device_external_fence_info;

struct external_fence_properties final
{
    ktl::api::structure_type                   type = ktl::api::structure_type::v_external_fence_properties;
    void *                                     next = nullptr;
    ktl::api::external_fence_handle_type_flags export_from_imported_handle_types;
    ktl::api::external_fence_handle_type_flags compatible_handle_types;
    ktl::api::external_fence_feature_flags     external_fence_features = 0;
};

using external_fence_properties_khr = external_fence_properties;

struct export_fence_create_info final
{
    ktl::api::structure_type                   type         = ktl::api::structure_type::v_export_fence_create_info;
    const void *                               next         = nullptr;
    ktl::api::external_fence_handle_type_flags handle_types = 0;
};

using export_fence_create_info_khr = export_fence_create_info;

struct import_fence_win32handle_info_khr final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_import_fence_win32_handle_info_khr;
    const void *                 next = nullptr;
    ktl::api::fence              fence;
    ktl::api::fence_import_flags flags = 0;
    ktl::api::external_fence_handle_type_flag_bits handle_type;
    ktl::api::handle                               handle = 0;
    ktl::api::lpcwstr                              name   = 0;
};

struct export_fence_win32handle_info_khr final
{
    ktl::api::structure_type               type       = ktl::api::structure_type::v_export_fence_win32_handle_info_khr;
    const void *                           next       = nullptr;
    const ktl::api::security__attributes * attributes = nullptr;
    ktl::api::dword                        dw_access;
    ktl::api::lpcwstr                      name;
};

struct fence_get_win32handle_info_khr final
{
    ktl::api::structure_type                       type = ktl::api::structure_type::v_fence_get_win32_handle_info_khr;
    const void *                                   next = nullptr;
    ktl::api::fence                                fence;
    ktl::api::external_fence_handle_type_flag_bits handle_type;
};

struct import_fence_fd_info_khr final
{
    ktl::api::structure_type                       type = ktl::api::structure_type::v_import_fence_fd_info_khr;
    const void *                                   next = nullptr;
    ktl::api::fence                                fence;
    ktl::api::fence_import_flags                   flags = 0;
    ktl::api::external_fence_handle_type_flag_bits handle_type;
    ktl::api::int                                  fd;
};

struct fence_get_fd_info_khr final
{
    ktl::api::structure_type                       type = ktl::api::structure_type::v_fence_get_fd_info_khr;
    const void *                                   next = nullptr;
    ktl::api::fence                                fence;
    ktl::api::external_fence_handle_type_flag_bits handle_type;
};

struct export_fence_sci_sync_info_nv final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_export_fence_sci_sync_info_nv;
    const void *                    next = nullptr;
    ktl::api::nv_sci_sync_attr_list attributes;
};

struct import_fence_sci_sync_info_nv final
{
    ktl::api::structure_type                       type = ktl::api::structure_type::v_import_fence_sci_sync_info_nv;
    const void *                                   next = nullptr;
    ktl::api::fence                                fence;
    ktl::api::external_fence_handle_type_flag_bits handle_type;
    void *                                         handle;
};

struct fence_get_sci_sync_info_nv final
{
    ktl::api::structure_type                       type = ktl::api::structure_type::v_fence_get_sci_sync_info_nv;
    const void *                                   next = nullptr;
    ktl::api::fence                                fence;
    ktl::api::external_fence_handle_type_flag_bits handle_type;
};

struct export_semaphore_sci_sync_info_nv final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_export_semaphore_sci_sync_info_nv;
    const void *                    next = nullptr;
    ktl::api::nv_sci_sync_attr_list attributes;
};

struct import_semaphore_sci_sync_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_import_semaphore_sci_sync_info_nv;
    const void *             next = nullptr;
    ktl::api::semaphore      semaphore;
    ktl::api::external_semaphore_handle_type_flag_bits handle_type;
    void *                                             handle;
};

struct semaphore_get_sci_sync_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_get_sci_sync_info_nv;
    const void *             next = nullptr;
    ktl::api::semaphore      semaphore;
    ktl::api::external_semaphore_handle_type_flag_bits handle_type;
};

struct sci_sync_attributes_info_nv final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_sci_sync_attributes_info_nv;
    const void *                         next = nullptr;
    ktl::api::sci_sync_client_type_nv    client_type;
    ktl::api::sci_sync_primitive_type_nv primitive_type;
};

struct physical_device_external_sci_sync_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_sci_sync_features_nv;
    void *                   next = nullptr;
    ktl::bool32              sci_sync_fence;
    ktl::bool32              sci_sync_semaphore;
    ktl::bool32              sci_sync_import;
    ktl::bool32              sci_sync_export;
};

struct physical_device_external_sci_sync2features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_sci_sync_2_features_nv;
    void *                   next = nullptr;
    ktl::bool32              sci_sync_fence;
    ktl::bool32              sci_sync_semaphore2;
    ktl::bool32              sci_sync_import;
    ktl::bool32              sci_sync_export;
};

struct semaphore_sci_sync_pool_create_info_nv final
{
    ktl::api::structure_type  type = ktl::api::structure_type::v_semaphore_sci_sync_pool_create_info_nv;
    const void *              next = nullptr;
    ktl::api::nv_sci_sync_obj handle;
};

struct semaphore_sci_sync_create_info_nv final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_semaphore_sci_sync_create_info_nv;
    const void *                         next = nullptr;
    ktl::api::semaphore_sci_sync_pool_nv semaphore_pool;
    const ktl::api::nv_sci_sync_fence *  fence;
};

struct device_semaphore_sci_sync_pool_reservation_create_info_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_device_semaphore_sci_sync_pool_reservation_create_info_nv;
    const void * next = nullptr;
    ktl::i32     semaphore_sci_sync_pool_request_count;
};

struct physical_device_multiview_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multiview_features;
    void *                   next = nullptr;
    ktl::bool32              multiview;
    ktl::bool32              multiview_geometry_shader;
    ktl::bool32              multiview_tessellation_shader;
};

using physical_device_multiview_features_khr = physical_device_multiview_features;

struct physical_device_multiview_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multiview_properties;
    void *                   next = nullptr;
    ktl::i32                 max_multiview_view_count;
    ktl::i32                 max_multiview_instance_index;
};

using physical_device_multiview_properties_khr = physical_device_multiview_properties;

struct render_pass_multiview_create_info final
{
    ktl::api::structure_type type          = ktl::api::structure_type::v_render_pass_multiview_create_info;
    const void *             next          = nullptr;
    ktl::i32                 subpass_count = 0;
    const ktl::i32 *         view_masks;
    ktl::i32                 dependency_count = 0;
    const ktl::i32 *         view_offsets;
    ktl::i32                 correlation_mask_count = 0;
    const ktl::i32 *         correlation_masks;
};

using render_pass_multiview_create_info_khr = render_pass_multiview_create_info;

struct surface_capabilities2ext final
{
    ktl::api::structure_type                  type = ktl::api::structure_type::v_surface_capabilities_2_ext;
    void *                                    next = nullptr;
    ktl::i32                                  min_image_count;
    ktl::i32                                  max_image_count;
    ktl::api::extent2d                        current_extent;
    ktl::api::extent2d                        min_image_extent;
    ktl::api::extent2d                        max_image_extent;
    ktl::i32                                  max_image_array_layers;
    ktl::api::surface_transform_flags_khr     supported_transforms;
    ktl::api::surface_transform_flag_bits_khr current_transform;
    ktl::api::composite_alpha_flags_khr       supported_composite_alpha;
    ktl::api::image_usage_flags               supported_usage_flags;
    ktl::api::surface_counter_flags_ext       supported_surface_counters = 0;
};

struct display_power_info_ext final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_display_power_info_ext;
    const void *                      next = nullptr;
    ktl::api::display_power_state_ext power_state;
};

struct device_event_info_ext final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_device_event_info_ext;
    const void *                    next = nullptr;
    ktl::api::device_event_type_ext device_event;
};

struct display_event_info_ext final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_display_event_info_ext;
    const void *                     next = nullptr;
    ktl::api::display_event_type_ext display_event;
};

struct swapchain_counter_create_info_ext final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_swapchain_counter_create_info_ext;
    const void *                        next = nullptr;
    ktl::api::surface_counter_flags_ext surface_counters = 0;
};

struct physical_device_group_properties final
{
    ktl::api::structure_type  type = ktl::api::structure_type::v_physical_device_group_properties;
    void *                    next = nullptr;
    ktl::i32                  physical_device_count;
    ktl::api::physical_device physical_devices[KTL_API_MAX_DEVICE_GROUP_SIZE];
    ktl::bool32               subset_allocation;
};

using physical_device_group_properties_khr = physical_device_group_properties;

struct memory_allocate_flags_info final
{
    ktl::api::structure_type        type  = ktl::api::structure_type::v_memory_allocate_flags_info;
    const void *                    next  = nullptr;
    ktl::api::memory_allocate_flags flags = 0;
    ktl::i32                        device_mask;
};

using memory_allocate_flags_info_khr = memory_allocate_flags_info;

struct bind_buffer_memory_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_bind_buffer_memory_info;
    const void *             next = nullptr;
    ktl::api::buffer         buffer;
    ktl::api::device_memory  memory;
    ktl::dvsize              memory_offset;
};

using bind_buffer_memory_info_khr = bind_buffer_memory_info;

struct bind_buffer_memory_device_group_info final
{
    ktl::api::structure_type type               = ktl::api::structure_type::v_bind_buffer_memory_device_group_info;
    const void *             next               = nullptr;
    ktl::i32                 device_index_count = 0;
    const ktl::i32 *         device_indices;
};

using bind_buffer_memory_device_group_info_khr = bind_buffer_memory_device_group_info;

struct bind_image_memory_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_bind_image_memory_info;
    const void *             next = nullptr;
    ktl::api::image          image;
    ktl::api::device_memory  memory;
    ktl::dvsize              memory_offset;
};

using bind_image_memory_info_khr = bind_image_memory_info;

struct bind_image_memory_device_group_info final
{
    ktl::api::structure_type type               = ktl::api::structure_type::v_bind_image_memory_device_group_info;
    const void *             next               = nullptr;
    ktl::i32                 device_index_count = 0;
    const ktl::i32 *         device_indices;
    ktl::i32                 split_instance_bind_region_count = 0;
    const ktl::api::rect2d * split_instance_bind_regions;
};

using bind_image_memory_device_group_info_khr = bind_image_memory_device_group_info;

struct device_group_render_pass_begin_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_group_render_pass_begin_info;
    const void *             next = nullptr;
    ktl::i32                 device_mask;
    ktl::i32                 device_render_area_count = 0;
    const ktl::api::rect2d * device_render_areas;
};

using device_group_render_pass_begin_info_khr = device_group_render_pass_begin_info;

struct device_group_command_buffer_begin_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_group_command_buffer_begin_info;
    const void *             next = nullptr;
    ktl::i32                 device_mask;
};

using device_group_command_buffer_begin_info_khr = device_group_command_buffer_begin_info;

struct device_group_submit_info final
{
    ktl::api::structure_type type                 = ktl::api::structure_type::v_device_group_submit_info;
    const void *             next                 = nullptr;
    ktl::i32                 wait_semaphore_count = 0;
    const ktl::i32 *         wait_semaphore_device_indices;
    ktl::i32                 command_buffer_count = 0;
    const ktl::i32 *         command_buffer_device_masks;
    ktl::i32                 signal_semaphore_count = 0;
    const ktl::i32 *         signal_semaphore_device_indices;
};

using device_group_submit_info_khr = device_group_submit_info;

struct device_group_bind_sparse_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_group_bind_sparse_info;
    const void *             next = nullptr;
    ktl::i32                 resource_device_index;
    ktl::i32                 memory_device_index;
};

using device_group_bind_sparse_info_khr = device_group_bind_sparse_info;

struct device_group_present_capabilities_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_group_present_capabilities_khr;
    void *                   next = nullptr;
    ktl::i32                 present_mask[KTL_API_MAX_DEVICE_GROUP_SIZE];
    ktl::api::device_group_present_mode_flags_khr modes;
};

struct image_swapchain_create_info_khr final
{
    ktl::api::structure_type type      = ktl::api::structure_type::v_image_swapchain_create_info_khr;
    const void *             next      = nullptr;
    ktl::api::swapchain_khr  swapchain = 0;
};

struct bind_image_memory_swapchain_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_bind_image_memory_swapchain_info_khr;
    const void *             next = nullptr;
    ktl::api::swapchain_khr  swapchain;
    ktl::i32                 image_index;
};

struct acquire_next_image_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acquire_next_image_info_khr;
    const void *             next = nullptr;
    ktl::api::swapchain_khr  swapchain;
    ktl::u64                 timeout;
    ktl::api::semaphore      semaphore = 0;
    ktl::api::fence          fence     = 0;
    ktl::i32                 device_mask;
};

struct device_group_present_info_khr final
{
    ktl::api::structure_type                          type = ktl::api::structure_type::v_device_group_present_info_khr;
    const void *                                      next = nullptr;
    ktl::i32                                          swapchain_count = 0;
    const ktl::i32 *                                  device_masks;
    ktl::api::device_group_present_mode_flag_bits_khr mode;
};

struct device_group_device_create_info final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_device_group_device_create_info;
    const void *                      next = nullptr;
    ktl::i32                          physical_device_count = 0;
    const ktl::api::physical_device * physical_devices;
};

using device_group_device_create_info_khr = device_group_device_create_info;

struct device_group_swapchain_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_group_swapchain_create_info_khr;
    const void *             next = nullptr;
    ktl::api::device_group_present_mode_flags_khr modes;
};

struct descriptor_update_template_entry final
{
    ktl::i32                  dst_binding;
    ktl::i32                  dst_array_element;
    ktl::i32                  descriptor_count;
    ktl::api::descriptor_type descriptor_type;
    ktl::usize                offset;
    ktl::usize                stride;
};

using descriptor_update_template_entry_khr = descriptor_update_template_entry;

struct descriptor_update_template_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_update_template_create_info;
    const void *             next = nullptr;
    ktl::api::descriptor_update_template_create_flags  flags = 0;
    ktl::i32                                           descriptor_update_entry_count;
    const ktl::api::descriptor_update_template_entry * descriptor_update_entries;
    ktl::api::descriptor_update_template_type          template_type;
    ktl::api::descriptor_set_layout                    descriptor_set_layout;
    ktl::api::pipeline_bind_point                      pipeline_bind_point;
    ktl::api::pipeline_layout                          pipeline_layout;
    ktl::i32                                           set;
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
    void *                   next = nullptr;
    ktl::bool32              present_id;
};

struct present_id_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_present_id_khr;
    const void *             next = nullptr;
    ktl::i32                 swapchain_count;
    const ktl::u64 *         present_ids = nullptr;
};

struct physical_device_present_id2features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_id_2_features_khr;
    void *                   next = nullptr;
    ktl::bool32              present_id2;
};

struct present_id2khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_present_id_2_khr;
    const void *             next = nullptr;
    ktl::i32                 swapchain_count;
    const ktl::u64 *         present_ids = nullptr;
};

struct present_wait2info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_present_wait_2_info_khr;
    const void *             next = nullptr;
    ktl::u64                 present_id;
    ktl::u64                 timeout;
};

struct physical_device_present_wait_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_wait_features_khr;
    void *                   next = nullptr;
    ktl::bool32              present_wait;
};

struct physical_device_present_wait2features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_wait_2_features_khr;
    void *                   next = nullptr;
    ktl::bool32              present_wait2;
};

struct physical_device_present_timing_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_timing_features_ext;
    void *                   next = nullptr;
    ktl::bool32              present_timing;
    ktl::bool32              present_at_absolute_time;
    ktl::bool32              present_at_relative_time;
};

struct present_timing_surface_capabilities_ext final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_present_timing_surface_capabilities_ext;
    void *                            next = nullptr;
    ktl::bool32                       present_timing_supported;
    ktl::bool32                       present_at_absolute_time_supported;
    ktl::bool32                       present_at_relative_time_supported;
    ktl::api::present_stage_flags_ext present_stage_queries;
};

struct swapchain_timing_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_timing_properties_ext;
    void *                   next = nullptr;
    ktl::u64                 refresh_duration;
    ktl::u64                 refresh_interval;
};

struct swapchain_time_domain_properties_ext final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_swapchain_time_domain_properties_ext;
    void *                      next = nullptr;
    ktl::i32                    time_domain_count;
    ktl::api::time_domain_khr * time_domains    = nullptr;
    ktl::u64 *                  time_domain_ids = nullptr;
};

struct present_stage_time_ext final
{
    ktl::api::present_stage_flags_ext stage;
    ktl::u64                          time;
};

struct past_presentation_timing_info_ext final
{
    ktl::api::structure_type                     type  = ktl::api::structure_type::v_past_presentation_timing_info_ext;
    const void *                                 next  = nullptr;
    ktl::api::past_presentation_timing_flags_ext flags = 0;
    ktl::api::swapchain_khr                      swapchain;
};

struct past_presentation_timing_properties_ext final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_past_presentation_timing_properties_ext;
    void *                                   next = nullptr;
    ktl::u64                                 timing_properties_counter;
    ktl::u64                                 time_domains_counter;
    ktl::i32                                 presentation_timing_count;
    ktl::api::past_presentation_timing_ext * presentation_timings;
};

struct past_presentation_timing_ext final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_past_presentation_timing_ext;
    void *                             next = nullptr;
    ktl::u64                           present_id;
    ktl::u64                           target_time;
    ktl::i32                           present_stage_count;
    ktl::api::present_stage_time_ext * present_stages;
    ktl::api::time_domain_khr          time_domain;
    ktl::u64                           time_domain_id;
    ktl::bool32                        report_complete;
};

struct present_timings_info_ext final
{
    ktl::api::structure_type                  type = ktl::api::structure_type::v_present_timings_info_ext;
    const void *                              next = nullptr;
    ktl::i32                                  swapchain_count;
    const ktl::api::present_timing_info_ext * timing_infos = nullptr;
};

struct present_timing_info_ext final
{
    ktl::api::structure_type                type  = ktl::api::structure_type::v_present_timing_info_ext;
    const void *                            next  = nullptr;
    ktl::api::present_timing_info_flags_ext flags = 0;
    ktl::u64                                target_time;
    ktl::u64                                time_domain_id;
    ktl::api::present_stage_flags_ext       present_stage_queries            = 0;
    ktl::api::present_stage_flags_ext       target_time_domain_present_stage = 0;
};

struct swapchain_calibrated_timestamp_info_ext final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_swapchain_calibrated_timestamp_info_ext;
    const void *                      next = nullptr;
    ktl::api::swapchain_khr           swapchain;
    ktl::api::present_stage_flags_ext present_stage;
    ktl::u64                          time_domain_id;
};

struct hdr_metadata_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_hdr_metadata_ext;
    const void *             next = nullptr;
    ktl::api::xycolor_ext    display_primary_red;
    ktl::api::xycolor_ext    display_primary_green;
    ktl::api::xycolor_ext    display_primary_blue;
    ktl::api::xycolor_ext    white_point;
    float                    max_luminance;
    float                    min_luminance;
    float                    max_content_light_level;
    float                    max_frame_average_light_level;
};

struct hdr_vivid_dynamic_metadata_huawei final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_hdr_vivid_dynamic_metadata_huawei;
    const void *             next = nullptr;
    ktl::usize               dynamic_metadata_size;
    const void *             dynamic_metadata;
};

struct display_native_hdr_surface_capabilities_amd final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_display_native_hdr_surface_capabilities_amd;
    void *                   next = nullptr;
    ktl::bool32              local_dimming_support;
};

struct swapchain_display_native_hdr_create_info_amd final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_display_native_hdr_create_info_amd;
    const void *             next = nullptr;
    ktl::bool32              local_dimming_enable;
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
    ktl::api::structure_type              type = ktl::api::structure_type::v_present_times_info_google;
    const void *                          next = nullptr;
    ktl::i32                              swapchain_count;
    const ktl::api::present_time_google * times = nullptr;
};

struct present_time_google final
{
    ktl::i32 present_id;
    ktl::u64 desired_present_time;
};

struct iossurface_create_info_mvk final
{
    ktl::api::structure_type              type  = ktl::api::structure_type::v_ios_surface_create_info_mvk;
    const void *                          next  = nullptr;
    ktl::api::iossurface_create_flags_mvk flags = 0;
    const void *                          view;
};

struct mac_ossurface_create_info_mvk final
{
    ktl::api::structure_type                 type  = ktl::api::structure_type::v_macos_surface_create_info_mvk;
    const void *                             next  = nullptr;
    ktl::api::mac_ossurface_create_flags_mvk flags = 0;
    const void *                             view;
};

struct metal_surface_create_info_ext final
{
    ktl::api::structure_type                 type  = ktl::api::structure_type::v_metal_surface_create_info_ext;
    const void *                             next  = nullptr;
    ktl::api::metal_surface_create_flags_ext flags = 0;
    const ktl::api::cametal_layer *          layer;
};

struct viewport_wscaling_nv final
{
    float xcoeff;
    float ycoeff;
};

struct pipeline_viewport_wscaling_state_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_w_scaling_state_create_info_nv;
    const void *             next = nullptr;
    ktl::bool32              viewport_wscaling_enable;
    ktl::i32                 viewport_count;
    const ktl::api::viewport_wscaling_nv * viewport_wscalings = nullptr;
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
    const void *             next = nullptr;
    ktl::api::pipeline_viewport_swizzle_state_create_flags_nv flags = 0;
    ktl::i32                                                  viewport_count;
    const ktl::api::viewport_swizzle_nv *                     viewport_swizzles;
};

struct physical_device_discard_rectangle_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_discard_rectangle_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 max_discard_rectangles;
};

struct pipeline_discard_rectangle_state_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_discard_rectangle_state_create_info_ext;
    const void *             next = nullptr;
    ktl::api::pipeline_discard_rectangle_state_create_flags_ext flags = 0;
    ktl::api::discard_rectangle_mode_ext                        discard_rectangle_mode;
    ktl::i32                                                    discard_rectangle_count = 0;
    const ktl::api::rect2d *                                    discard_rectangles;
};

struct physical_device_multiview_per_view_attributes_properties_nvx final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_multiview_per_view_attributes_properties_nvx;
    void *      next = nullptr;
    ktl::bool32 per_view_position_all_components;
};

struct input_attachment_aspect_reference final
{
    ktl::i32                     subpass;
    ktl::i32                     input_attachment_index;
    ktl::api::image_aspect_flags aspect_mask;
};

using input_attachment_aspect_reference_khr = input_attachment_aspect_reference;

struct render_pass_input_attachment_aspect_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_input_attachment_aspect_create_info;
    const void *             next = nullptr;
    ktl::i32                 aspect_reference_count;
    const ktl::api::input_attachment_aspect_reference * aspect_references;
};

using render_pass_input_attachment_aspect_create_info_khr = render_pass_input_attachment_aspect_create_info;

struct physical_device_surface_info2khr final
{
    ktl::api::structure_type type    = ktl::api::structure_type::v_physical_device_surface_info_2_khr;
    const void *             next    = nullptr;
    ktl::api::surface_khr    surface = 0;
};

struct surface_capabilities2khr final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_surface_capabilities_2_khr;
    void *                             next = nullptr;
    ktl::api::surface_capabilities_khr surface_capabilities;
};

struct surface_format2khr final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_surface_format_2_khr;
    void *                       next = nullptr;
    ktl::api::surface_format_khr surface_format;
};

struct display_properties2khr final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_display_properties_2_khr;
    void *                           next = nullptr;
    ktl::api::display_properties_khr display_properties;
};

struct display_plane_properties2khr final
{
    ktl::api::structure_type               type = ktl::api::structure_type::v_display_plane_properties_2_khr;
    void *                                 next = nullptr;
    ktl::api::display_plane_properties_khr display_plane_properties;
};

struct display_mode_properties2khr final
{
    ktl::api::structure_type              type = ktl::api::structure_type::v_display_mode_properties_2_khr;
    void *                                next = nullptr;
    ktl::api::display_mode_properties_khr display_mode_properties;
};

struct display_mode_stereo_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_display_mode_stereo_properties_nv;
    void *                   next = nullptr;
    ktl::bool32              hdmi3dsupported;
};

struct display_plane_info2khr final
{
    ktl::api::structure_type   type = ktl::api::structure_type::v_display_plane_info_2_khr;
    const void *               next = nullptr;
    ktl::api::display_mode_khr mode;
    ktl::i32                   plane_index;
};

struct display_plane_capabilities2khr final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_display_plane_capabilities_2_khr;
    void *                                   next = nullptr;
    ktl::api::display_plane_capabilities_khr capabilities;
};

struct shared_present_surface_capabilities_khr final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_shared_present_surface_capabilities_khr;
    void *                      next = nullptr;
    ktl::api::image_usage_flags shared_present_supported_usage_flags = 0;
};

struct physical_device16bit_storage_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_16bit_storage_features;
    void *                   next = nullptr;
    ktl::bool32              storage_buffer16bit_access;
    ktl::bool32              uniform_and_storage_buffer16bit_access;
    ktl::bool32              storage_push_constant16;
    ktl::bool32              storage_input_output16;
};

using physical_device16bit_storage_features_khr = physical_device16bit_storage_features;

struct physical_device_subgroup_properties final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_physical_device_subgroup_properties;
    void *                           next = nullptr;
    ktl::i32                         subgroup_size;
    ktl::api::shader_stage_flags     supported_stages;
    ktl::api::subgroup_feature_flags supported_operations;
    ktl::bool32                      quad_operations_in_all_stages;
};

struct physical_device_shader_subgroup_extended_types_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_subgroup_extended_types_features;
    void *                   next = nullptr;
    ktl::bool32              shader_subgroup_extended_types;
};

using physical_device_shader_subgroup_extended_types_features_khr =
    physical_device_shader_subgroup_extended_types_features;

struct buffer_memory_requirements_info2 final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_buffer_memory_requirements_info_2;
    const void *             next = nullptr;
    ktl::api::buffer         buffer;
};

using buffer_memory_requirements_info2khr = buffer_memory_requirements_info2;

struct device_buffer_memory_requirements final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_device_buffer_memory_requirements;
    const void *                         next = nullptr;
    const ktl::api::buffer_create_info * create_info;
};

using device_buffer_memory_requirements_khr = device_buffer_memory_requirements;

struct image_memory_requirements_info2 final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_memory_requirements_info_2;
    const void *             next = nullptr;
    ktl::api::image          image;
};

using image_memory_requirements_info2khr = image_memory_requirements_info2;

struct image_sparse_memory_requirements_info2 final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_sparse_memory_requirements_info_2;
    const void *             next = nullptr;
    ktl::api::image          image;
};

using image_sparse_memory_requirements_info2khr = image_sparse_memory_requirements_info2;

struct device_image_memory_requirements final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_device_image_memory_requirements;
    const void *                        next = nullptr;
    const ktl::api::image_create_info * create_info;
    ktl::api::image_aspect_flag_bits    plane_aspect = 0;
};

using device_image_memory_requirements_khr = device_image_memory_requirements;

struct memory_requirements2 final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_memory_requirements_2;
    void *                        next = nullptr;
    ktl::api::memory_requirements memory_requirements;
};

using memory_requirements2khr = memory_requirements2;

struct sparse_image_memory_requirements2 final
{
    ktl::api::structure_type                   type = ktl::api::structure_type::v_sparse_image_memory_requirements_2;
    void *                                     next = nullptr;
    ktl::api::sparse_image_memory_requirements memory_requirements;
};

using sparse_image_memory_requirements2khr = sparse_image_memory_requirements2;

struct physical_device_point_clipping_properties final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_physical_device_point_clipping_properties;
    void *                            next = nullptr;
    ktl::api::point_clipping_behavior point_clipping_behavior;
};

using physical_device_point_clipping_properties_khr = physical_device_point_clipping_properties;

struct memory_dedicated_requirements final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_dedicated_requirements;
    void *                   next = nullptr;
    ktl::bool32              prefers_dedicated_allocation;
    ktl::bool32              requires_dedicated_allocation;
};

using memory_dedicated_requirements_khr = memory_dedicated_requirements;

struct memory_dedicated_allocate_info final
{
    ktl::api::structure_type type   = ktl::api::structure_type::v_memory_dedicated_allocate_info;
    const void *             next   = nullptr;
    ktl::api::image          image  = 0;
    ktl::api::buffer         buffer = 0;
};

using memory_dedicated_allocate_info_khr = memory_dedicated_allocate_info;

struct image_view_usage_create_info final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_image_view_usage_create_info;
    const void *                next = nullptr;
    ktl::api::image_usage_flags usage;
};

struct image_view_sliced_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_view_sliced_create_info_ext;
    const void *             next = nullptr;
    ktl::i32                 slice_offset;
    ktl::i32                 slice_count;
};

using image_view_usage_create_info_khr = image_view_usage_create_info;

struct pipeline_tessellation_domain_origin_state_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_tessellation_domain_origin_state_create_info;
    const void *             next = nullptr;
    ktl::api::tessellation_domain_origin domain_origin;
};

using pipeline_tessellation_domain_origin_state_create_info_khr = pipeline_tessellation_domain_origin_state_create_info;

struct sampler_ycbcr_conversion_info final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_sampler_ycbcr_conversion_info;
    const void *                       next = nullptr;
    ktl::api::sampler_ycbcr_conversion conversion;
};

using sampler_ycbcr_conversion_info_khr = sampler_ycbcr_conversion_info;

struct sampler_ycbcr_conversion_create_info final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_sampler_ycbcr_conversion_create_info;
    const void *                             next = nullptr;
    ktl::api::format                         format;
    ktl::api::sampler_ycbcr_model_conversion ycbcr_model;
    ktl::api::sampler_ycbcr_range            ycbcr_range;
    ktl::api::component_mapping              components;
    ktl::api::chroma_location                x_chroma_offset;
    ktl::api::chroma_location                y_chroma_offset;
    ktl::api::filter                         chroma_filter;
    const ktl::bool32                        force_explicit_reconstruction;
};

using sampler_ycbcr_conversion_create_info_khr = sampler_ycbcr_conversion_create_info;

struct bind_image_plane_memory_info final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_bind_image_plane_memory_info;
    const void *                     next = nullptr;
    ktl::api::image_aspect_flag_bits plane_aspect;
};

using bind_image_plane_memory_info_khr = bind_image_plane_memory_info;

struct image_plane_memory_requirements_info final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_image_plane_memory_requirements_info;
    const void *                     next = nullptr;
    ktl::api::image_aspect_flag_bits plane_aspect;
};

using image_plane_memory_requirements_info_khr = image_plane_memory_requirements_info;

struct physical_device_sampler_ycbcr_conversion_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_sampler_ycbcr_conversion_features;
    void *                   next = nullptr;
    ktl::bool32              sampler_ycbcr_conversion;
};

using physical_device_sampler_ycbcr_conversion_features_khr = physical_device_sampler_ycbcr_conversion_features;

struct sampler_ycbcr_conversion_image_format_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_sampler_ycbcr_conversion_image_format_properties;
    void *                   next = nullptr;
    ktl::i32                 combined_image_sampler_descriptor_count;
};

using sampler_ycbcr_conversion_image_format_properties_khr = sampler_ycbcr_conversion_image_format_properties;

struct texture_lodgather_format_properties_amd final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_texture_lod_gather_format_properties_amd;
    void *                   next = nullptr;
    ktl::bool32              supports_texture_gather_lodbias_amd;
};

struct conditional_rendering_begin_info_ext final
{
    ktl::api::structure_type                  type = ktl::api::structure_type::v_conditional_rendering_begin_info_ext;
    const void *                              next = nullptr;
    ktl::api::buffer                          buffer;
    ktl::dvsize                               offset;
    ktl::api::conditional_rendering_flags_ext flags = 0;
};

struct protected_submit_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_protected_submit_info;
    const void *             next = nullptr;
    ktl::bool32              protected_submit;
};

struct physical_device_protected_memory_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_protected_memory_features;
    void *                   next = nullptr;
    ktl::bool32              protected_memory;
};

struct physical_device_protected_memory_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_protected_memory_properties;
    void *                   next = nullptr;
    ktl::bool32              protected_no_fault;
};

struct device_queue_info2 final
{
    ktl::api::structure_type            type  = ktl::api::structure_type::v_device_queue_info_2;
    const void *                        next  = nullptr;
    ktl::api::device_queue_create_flags flags = 0;
    ktl::i32                            queue_family_index;
    ktl::i32                            queue_index;
};

struct pipeline_coverage_to_color_state_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_coverage_to_color_state_create_info_nv;
    const void *             next = nullptr;
    ktl::api::pipeline_coverage_to_color_state_create_flags_nv flags = 0;
    ktl::bool32                                                coverage_to_color_enable;
    ktl::i32                                                   coverage_to_color_location = 0;
};

struct physical_device_sampler_filter_minmax_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_sampler_filter_minmax_properties;
    void *                   next = nullptr;
    ktl::bool32              filter_minmax_single_component_formats;
    ktl::bool32              filter_minmax_image_component_mapping;
};

using physical_device_sampler_filter_minmax_properties_ext = physical_device_sampler_filter_minmax_properties;

struct sample_location_ext final
{
    float x;
    float y;
};

struct sample_locations_info_ext final
{
    ktl::api::structure_type              type = ktl::api::structure_type::v_sample_locations_info_ext;
    const void *                          next = nullptr;
    ktl::api::sample_count_flag_bits      sample_locations_per_pixel;
    ktl::api::extent2d                    sample_location_grid_size;
    ktl::i32                              sample_locations_count = 0;
    const ktl::api::sample_location_ext * sample_locations;
};

struct attachment_sample_locations_ext final
{
    ktl::i32                            attachment_index;
    ktl::api::sample_locations_info_ext sample_locations_info;
};

struct subpass_sample_locations_ext final
{
    ktl::i32                            subpass_index;
    ktl::api::sample_locations_info_ext sample_locations_info;
};

struct render_pass_sample_locations_begin_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_sample_locations_begin_info_ext;
    const void *             next = nullptr;
    ktl::i32                 attachment_initial_sample_locations_count = 0;
    const ktl::api::attachment_sample_locations_ext * attachment_initial_sample_locations;
    ktl::i32                                          post_subpass_sample_locations_count = 0;
    const ktl::api::subpass_sample_locations_ext *    post_subpass_sample_locations;
};

struct pipeline_sample_locations_state_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_sample_locations_state_create_info_ext;
    const void *             next = nullptr;
    ktl::bool32              sample_locations_enable;
    ktl::api::sample_locations_info_ext sample_locations_info;
};

struct physical_device_sample_locations_properties_ext final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_physical_device_sample_locations_properties_ext;
    void *                       next = nullptr;
    ktl::api::sample_count_flags sample_location_sample_counts;
    ktl::api::extent2d           max_sample_location_grid_size;
    float                        sample_location_coordinate_range[2];
    ktl::i32                     sample_location_sub_pixel_bits;
    ktl::bool32                  variable_sample_locations;
};

struct multisample_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_multisample_properties_ext;
    void *                   next = nullptr;
    ktl::api::extent2d       max_sample_location_grid_size;
};

struct sampler_reduction_mode_create_info final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_sampler_reduction_mode_create_info;
    const void *                     next = nullptr;
    ktl::api::sampler_reduction_mode reduction_mode;
};

using sampler_reduction_mode_create_info_ext = sampler_reduction_mode_create_info;

struct physical_device_blend_operation_advanced_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_blend_operation_advanced_features_ext;
    void *                   next = nullptr;
    ktl::bool32              advanced_blend_coherent_operations;
};

struct physical_device_multi_draw_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_multi_draw_features_ext;
    void *                   next = nullptr;
    ktl::bool32              multi_draw;
};

struct physical_device_blend_operation_advanced_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_blend_operation_advanced_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 advanced_blend_max_color_attachments;
    ktl::bool32              advanced_blend_independent_blend;
    ktl::bool32              advanced_blend_non_premultiplied_src_color;
    ktl::bool32              advanced_blend_non_premultiplied_dst_color;
    ktl::bool32              advanced_blend_correlated_overlap;
    ktl::bool32              advanced_blend_all_operations;
};

struct pipeline_color_blend_advanced_state_create_info_ext final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_pipeline_color_blend_advanced_state_create_info_ext;
    const void *                next = nullptr;
    ktl::bool32                 src_premultiplied;
    ktl::bool32                 dst_premultiplied;
    ktl::api::blend_overlap_ext blend_overlap;
};

struct physical_device_inline_uniform_block_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_inline_uniform_block_features;
    void *                   next = nullptr;
    ktl::bool32              inline_uniform_block;
    ktl::bool32              descriptor_binding_inline_uniform_block_update_after_bind;
};

using physical_device_inline_uniform_block_features_ext = physical_device_inline_uniform_block_features;

struct physical_device_inline_uniform_block_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_inline_uniform_block_properties;
    void *                   next = nullptr;
    ktl::i32                 max_inline_uniform_block_size;
    ktl::i32                 max_per_stage_descriptor_inline_uniform_blocks;
    ktl::i32                 max_per_stage_descriptor_update_after_bind_inline_uniform_blocks;
    ktl::i32                 max_descriptor_set_inline_uniform_blocks;
    ktl::i32                 max_descriptor_set_update_after_bind_inline_uniform_blocks;
};

using physical_device_inline_uniform_block_properties_ext = physical_device_inline_uniform_block_properties;

struct write_descriptor_set_inline_uniform_block final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_write_descriptor_set_inline_uniform_block;
    const void *             next = nullptr;
    ktl::i32                 data_size;
    const void *             data;
};

using write_descriptor_set_inline_uniform_block_ext = write_descriptor_set_inline_uniform_block;

struct descriptor_pool_inline_uniform_block_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_pool_inline_uniform_block_create_info;
    const void *             next = nullptr;
    ktl::i32                 max_inline_uniform_block_bindings;
};

using descriptor_pool_inline_uniform_block_create_info_ext = descriptor_pool_inline_uniform_block_create_info;

struct pipeline_coverage_modulation_state_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_coverage_modulation_state_create_info_nv;
    const void *             next = nullptr;
    ktl::api::pipeline_coverage_modulation_state_create_flags_nv flags = 0;
    ktl::api::coverage_modulation_mode_nv                        coverage_modulation_mode;
    ktl::bool32                                                  coverage_modulation_table_enable;
    ktl::i32                                                     coverage_modulation_table_count = 0;
    const float *                                                coverage_modulation_table       = nullptr;
};

struct image_format_list_create_info final
{
    ktl::api::structure_type type              = ktl::api::structure_type::v_image_format_list_create_info;
    const void *             next              = nullptr;
    ktl::i32                 view_format_count = 0;
    const ktl::api::format * view_formats;
};

using image_format_list_create_info_khr = image_format_list_create_info;

struct validation_cache_create_info_ext final
{
    ktl::api::structure_type                    type  = ktl::api::structure_type::v_validation_cache_create_info_ext;
    const void *                                next  = nullptr;
    ktl::api::validation_cache_create_flags_ext flags = 0;
    ktl::usize                                  initial_data_size = 0;
    const void *                                initial_data;
};

struct shader_module_validation_cache_create_info_ext final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_shader_module_validation_cache_create_info_ext;
    const void *                   next = nullptr;
    ktl::api::validation_cache_ext validation_cache;
};

struct physical_device_maintenance3properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_3_properties;
    void *                   next = nullptr;
    ktl::i32                 max_per_set_descriptors;
    ktl::dvsize              max_memory_allocation_size;
};

using physical_device_maintenance3properties_khr = physical_device_maintenance3properties;

struct physical_device_maintenance4features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_4_features;
    void *                   next = nullptr;
    ktl::bool32              maintenance4;
};

using physical_device_maintenance4features_khr = physical_device_maintenance4features;

struct physical_device_maintenance4properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_4_properties;
    void *                   next = nullptr;
    ktl::dvsize              max_buffer_size;
};

using physical_device_maintenance4properties_khr = physical_device_maintenance4properties;

struct physical_device_maintenance5features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_5_features;
    void *                   next = nullptr;
    ktl::bool32              maintenance5;
};

using physical_device_maintenance5features_khr = physical_device_maintenance5features;

struct physical_device_maintenance5properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_5_properties;
    void *                   next = nullptr;
    ktl::bool32              early_fragment_multisample_coverage_after_sample_counting;
    ktl::bool32              early_fragment_sample_mask_test_before_sample_counting;
    ktl::bool32              depth_stencil_swizzle_one_support;
    ktl::bool32              polygon_mode_point_size;
    ktl::bool32              non_strict_single_pixel_wide_lines_use_parallelogram;
    ktl::bool32              non_strict_wide_lines_use_parallelogram;
};

using physical_device_maintenance5properties_khr = physical_device_maintenance5properties;

struct physical_device_maintenance6features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_6_features;
    void *                   next = nullptr;
    ktl::bool32              maintenance6;
};

using physical_device_maintenance6features_khr = physical_device_maintenance6features;

struct physical_device_maintenance6properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_6_properties;
    void *                   next = nullptr;
    ktl::bool32              block_texel_view_compatible_multiple_layers;
    ktl::i32                 max_combined_image_sampler_descriptor_count;
    ktl::bool32              fragment_shading_rate_clamp_combiner_inputs;
};

using physical_device_maintenance6properties_khr = physical_device_maintenance6properties;

struct physical_device_maintenance7features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_7_features_khr;
    void *                   next = nullptr;
    ktl::bool32              maintenance7;
};

struct physical_device_maintenance7properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_7_properties_khr;
    void *                   next = nullptr;
    ktl::bool32              robust_fragment_shading_rate_attachment_access;
    ktl::bool32              separate_depth_stencil_attachment_access;
    ktl::i32                 max_descriptor_set_total_uniform_buffers_dynamic;
    ktl::i32                 max_descriptor_set_total_storage_buffers_dynamic;
    ktl::i32                 max_descriptor_set_total_buffers_dynamic;
    ktl::i32                 max_descriptor_set_update_after_bind_total_uniform_buffers_dynamic;
    ktl::i32                 max_descriptor_set_update_after_bind_total_storage_buffers_dynamic;
    ktl::i32                 max_descriptor_set_update_after_bind_total_buffers_dynamic;
};

struct physical_device_layered_api_properties_list_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_layered_api_properties_list_khr;
    void *                   next = nullptr;
    ktl::i32                 layered_api_count                          = 0;
    ktl::api::physical_device_layered_api_properties_khr * layered_apis = nullptr;
};

struct physical_device_layered_api_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_layered_api_properties_khr;
    void *                   next = nullptr;
    ktl::i32                 vendor_id;
    ktl::i32                 device_id;
    ktl::api::physical_device_layered_api_khr layered_api;
    char                                      device_name[KTL_API_MAX_PHYSICAL_DEVICE_NAME_SIZE];
};

struct physical_device_layered_api_vulkan_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_layered_api_vulkan_properties_khr;
    void *                   next = nullptr;
    ktl::api::physical_device_properties2 properties;
};

struct physical_device_maintenance8features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_8_features_khr;
    void *                   next = nullptr;
    ktl::bool32              maintenance8;
};

struct physical_device_maintenance9features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_9_features_khr;
    void *                   next = nullptr;
    ktl::bool32              maintenance9;
};

struct physical_device_maintenance9properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_9_properties_khr;
    void *                   next = nullptr;
    ktl::bool32              image2dview_of3dsparse;
    ktl::api::default_vertex_attribute_value_khr default_vertex_attribute_value;
};

struct physical_device_maintenance10properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_10_properties_khr;
    void *                   next = nullptr;
    ktl::bool32              rgba4opaque_black_swizzled;
    ktl::bool32              resolve_srgb_format_applies_transfer_function;
    ktl::bool32              resolve_srgb_format_supports_transfer_function_control;
};

struct physical_device_maintenance10features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_maintenance_10_features_khr;
    void *                   next = nullptr;
    ktl::bool32              maintenance10;
};

struct queue_family_ownership_transfer_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_ownership_transfer_properties_khr;
    void *                   next = nullptr;
    ktl::i32                 optimal_image_transfer_to_queue_families;
};

struct rendering_area_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_rendering_area_info;
    const void *             next = nullptr;
    ktl::i32                 view_mask;
    ktl::i32                 color_attachment_count = 0;
    const ktl::api::format * color_attachment_formats;
    ktl::api::format         depth_attachment_format;
    ktl::api::format         stencil_attachment_format;
};

using rendering_area_info_khr = rendering_area_info;

struct descriptor_set_layout_support final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_layout_support;
    void *                   next = nullptr;
    ktl::bool32              supported;
};

using descriptor_set_layout_support_khr = descriptor_set_layout_support;

struct physical_device_shader_draw_parameters_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_draw_parameters_features;
    void *                   next = nullptr;
    ktl::bool32              shader_draw_parameters;
};

using physical_device_shader_draw_parameter_features = physical_device_shader_draw_parameters_features;

struct physical_device_shader_float16int8features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_float16_int8_features;
    void *                   next = nullptr;
    ktl::bool32              shader_float16;
    ktl::bool32              shader_int8;
};

using physical_device_shader_float16int8features_khr = physical_device_shader_float16int8features;

using physical_device_float16int8features_khr = physical_device_shader_float16int8features;

struct physical_device_float_controls_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_float_controls_properties;
    void *                   next = nullptr;
    ktl::api::shader_float_controls_independence denorm_behavior_independence;
    ktl::api::shader_float_controls_independence rounding_mode_independence;
    ktl::bool32                                  shader_signed_zero_inf_nan_preserve_float16;
    ktl::bool32                                  shader_signed_zero_inf_nan_preserve_float32;
    ktl::bool32                                  shader_signed_zero_inf_nan_preserve_float64;
    ktl::bool32                                  shader_denorm_preserve_float16;
    ktl::bool32                                  shader_denorm_preserve_float32;
    ktl::bool32                                  shader_denorm_preserve_float64;
    ktl::bool32                                  shader_denorm_flush_to_zero_float16;
    ktl::bool32                                  shader_denorm_flush_to_zero_float32;
    ktl::bool32                                  shader_denorm_flush_to_zero_float64;
    ktl::bool32                                  shader_rounding_mode_rtefloat16;
    ktl::bool32                                  shader_rounding_mode_rtefloat32;
    ktl::bool32                                  shader_rounding_mode_rtefloat64;
    ktl::bool32                                  shader_rounding_mode_rtzfloat16;
    ktl::bool32                                  shader_rounding_mode_rtzfloat32;
    ktl::bool32                                  shader_rounding_mode_rtzfloat64;
};

using physical_device_float_controls_properties_khr = physical_device_float_controls_properties;

struct physical_device_host_query_reset_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_host_query_reset_features;
    void *                   next = nullptr;
    ktl::bool32              host_query_reset;
};

using physical_device_host_query_reset_features_ext = physical_device_host_query_reset_features;

struct native_buffer_usage2android final
{
    ktl::u64 consumer;
    ktl::u64 producer;
};

struct native_buffer_android final
{
    ktl::api::structure_type              type = ktl::api::structure_type::v_native_buffer_android;
    const void *                          next = nullptr;
    const void *                          handle;
    ktl::api::int                         stride;
    ktl::api::int                         format;
    ktl::api::int                         usage;
    ktl::api::native_buffer_usage2android usage2;
};

struct swapchain_image_create_info_android final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_image_create_info_android;
    const void *             next = nullptr;
    ktl::api::swapchain_image_usage_flags_android usage;
};

struct physical_device_presentation_properties_android final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_presentation_properties_android;
    void *                   next = nullptr;
    ktl::bool32              shared_image;
};

struct shader_resource_usage_amd final
{
    ktl::i32   num_used_vgprs;
    ktl::i32   num_used_sgprs;
    ktl::i32   lds_size_per_local_work_group;
    ktl::usize lds_usage_size_in_bytes;
    ktl::usize scratch_mem_usage_in_bytes;
};

struct shader_statistics_info_amd final
{
    ktl::api::shader_stage_flags        shader_stage_mask;
    ktl::api::shader_resource_usage_amd resource_usage;
    ktl::i32                            num_physical_vgprs;
    ktl::i32                            num_physical_sgprs;
    ktl::i32                            num_available_vgprs;
    ktl::i32                            num_available_sgprs;
    ktl::i32                            compute_work_group_size[3];
};

struct device_queue_global_priority_create_info final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_device_queue_global_priority_create_info;
    const void *                    next = nullptr;
    ktl::api::queue_global_priority global_priority;
};

using device_queue_global_priority_create_info_khr = device_queue_global_priority_create_info;

using device_queue_global_priority_create_info_ext = device_queue_global_priority_create_info;

struct physical_device_global_priority_query_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_global_priority_query_features;
    void *                   next = nullptr;
    ktl::bool32              global_priority_query;
};

using physical_device_global_priority_query_features_khr = physical_device_global_priority_query_features;

using physical_device_global_priority_query_features_ext = physical_device_global_priority_query_features;

struct queue_family_global_priority_properties final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_queue_family_global_priority_properties;
    void *                          next = nullptr;
    ktl::i32                        priority_count;
    ktl::api::queue_global_priority priorities[KTL_API_MAX_GLOBAL_PRIORITY_SIZE];
};

using queue_family_global_priority_properties_khr = queue_family_global_priority_properties;

using queue_family_global_priority_properties_ext = queue_family_global_priority_properties;

struct debug_utils_object_name_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_debug_utils_object_name_info_ext;
    const void *             next = nullptr;
    ktl::api::object_type    object_type;
    ktl::u64                 object_handle;
    const char *             object_name = nullptr;
};

struct debug_utils_object_tag_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_debug_utils_object_tag_info_ext;
    const void *             next = nullptr;
    ktl::api::object_type    object_type;
    ktl::u64                 object_handle;
    ktl::u64                 tag_name;
    ktl::usize               tag_size;
    const void *             tag;
};

struct debug_utils_label_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_debug_utils_label_ext;
    const void *             next = nullptr;
    const char *             label_name;
    float                    color[4];
};

struct debug_utils_messenger_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_debug_utils_messenger_create_info_ext;
    const void *             next = nullptr;
    ktl::api::debug_utils_messenger_create_flags_ext    flags = 0;
    ktl::api::debug_utils_message_severity_flags_ext    message_severity;
    ktl::api::debug_utils_message_type_flags_ext        message_type;
    ktl::api::pfn_vk_debug_utils_messenger_callback_ext pfn_user_callback;
    void *                                              user_data = nullptr;
};

struct debug_utils_messenger_callback_data_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_debug_utils_messenger_callback_data_ext;
    const void *             next = nullptr;
    ktl::api::debug_utils_messenger_callback_data_flags_ext flags           = 0;
    const char *                                            message_id_name = nullptr;
    ktl::i32                                                message_id_number;
    const char *                                            message           = nullptr;
    ktl::i32                                                queue_label_count = 0;
    const ktl::api::debug_utils_label_ext *                 queue_labels;
    ktl::i32                                                cmd_buf_label_count = 0;
    const ktl::api::debug_utils_label_ext *                 cmd_buf_labels;
    ktl::i32                                                object_count = 0;
    const ktl::api::debug_utils_object_name_info_ext *      objects;
};

struct physical_device_device_memory_report_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_memory_report_features_ext;
    void *                   next = nullptr;
    ktl::bool32              device_memory_report;
};

struct device_device_memory_report_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_device_memory_report_create_info_ext;
    const void *             next = nullptr;
    ktl::api::device_memory_report_flags_ext           flags;
    ktl::api::pfn_vk_device_memory_report_callback_ext pfn_user_callback;
    void *                                             user_data = nullptr;
};

struct device_memory_report_callback_data_ext final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_device_memory_report_callback_data_ext;
    void *                                   next = nullptr;
    ktl::api::device_memory_report_flags_ext flags;
    ktl::api::device_memory_report_event_type_ext type;
    ktl::u64                                      memory_object_id;
    ktl::dvsize                                   size;
    ktl::api::object_type                         object_type;
    ktl::u64                                      object_handle;
    ktl::i32                                      heap_index;
};

struct import_memory_host_pointer_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_import_memory_host_pointer_info_ext;
    const void *             next = nullptr;
    ktl::api::external_memory_handle_type_flag_bits handle_type;
    void *                                          host_pointer;
};

struct memory_host_pointer_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_host_pointer_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 memory_type_bits;
};

struct physical_device_external_memory_host_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_memory_host_properties_ext;
    void *                   next = nullptr;
    ktl::dvsize              min_imported_host_pointer_alignment;
};

struct physical_device_conservative_rasterization_properties_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_conservative_rasterization_properties_ext;
    void *      next = nullptr;
    float       primitive_overestimation_size;
    float       max_extra_primitive_overestimation_size;
    float       extra_primitive_overestimation_size_granularity;
    ktl::bool32 primitive_underestimation;
    ktl::bool32 conservative_point_and_line_rasterization;
    ktl::bool32 degenerate_triangles_rasterized;
    ktl::bool32 degenerate_lines_rasterized;
    ktl::bool32 fully_covered_fragment_shader_input_variable;
    ktl::bool32 conservative_rasterization_post_depth_coverage;
};

struct calibrated_timestamp_info_khr final
{
    ktl::api::structure_type  type = ktl::api::structure_type::v_calibrated_timestamp_info_khr;
    const void *              next = nullptr;
    ktl::api::time_domain_khr time_domain;
};

using calibrated_timestamp_info_ext = calibrated_timestamp_info_khr;

struct physical_device_shader_core_properties_amd final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_core_properties_amd;
    void *                   next = nullptr;
    ktl::i32                 shader_engine_count;
    ktl::i32                 shader_arrays_per_engine_count;
    ktl::i32                 compute_units_per_shader_array;
    ktl::i32                 simd_per_compute_unit;
    ktl::i32                 wavefronts_per_simd;
    ktl::i32                 wavefront_size;
    ktl::i32                 sgprs_per_simd;
    ktl::i32                 min_sgpr_allocation;
    ktl::i32                 max_sgpr_allocation;
    ktl::i32                 sgpr_allocation_granularity;
    ktl::i32                 vgprs_per_simd;
    ktl::i32                 min_vgpr_allocation;
    ktl::i32                 max_vgpr_allocation;
    ktl::i32                 vgpr_allocation_granularity;
};

struct physical_device_shader_core_properties2amd final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_core_properties_2_amd;
    void *                   next = nullptr;
    ktl::api::shader_core_properties_flags_amd shader_core_features;
    ktl::i32                                   active_compute_unit_count;
};

struct pipeline_rasterization_conservative_state_create_info_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_pipeline_rasterization_conservative_state_create_info_ext;
    const void *                                                         next  = nullptr;
    ktl::api::pipeline_rasterization_conservative_state_create_flags_ext flags = 0;
    ktl::api::conservative_rasterization_mode_ext                        conservative_rasterization_mode;
    float                                                                extra_primitive_overestimation_size;
};

struct physical_device_descriptor_indexing_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_indexing_features;
    void *                   next = nullptr;
    ktl::bool32              shader_input_attachment_array_dynamic_indexing;
    ktl::bool32              shader_uniform_texel_buffer_array_dynamic_indexing;
    ktl::bool32              shader_storage_texel_buffer_array_dynamic_indexing;
    ktl::bool32              shader_uniform_buffer_array_non_uniform_indexing;
    ktl::bool32              shader_sampled_image_array_non_uniform_indexing;
    ktl::bool32              shader_storage_buffer_array_non_uniform_indexing;
    ktl::bool32              shader_storage_image_array_non_uniform_indexing;
    ktl::bool32              shader_input_attachment_array_non_uniform_indexing;
    ktl::bool32              shader_uniform_texel_buffer_array_non_uniform_indexing;
    ktl::bool32              shader_storage_texel_buffer_array_non_uniform_indexing;
    ktl::bool32              descriptor_binding_uniform_buffer_update_after_bind;
    ktl::bool32              descriptor_binding_sampled_image_update_after_bind;
    ktl::bool32              descriptor_binding_storage_image_update_after_bind;
    ktl::bool32              descriptor_binding_storage_buffer_update_after_bind;
    ktl::bool32              descriptor_binding_uniform_texel_buffer_update_after_bind;
    ktl::bool32              descriptor_binding_storage_texel_buffer_update_after_bind;
    ktl::bool32              descriptor_binding_update_unused_while_pending;
    ktl::bool32              descriptor_binding_partially_bound;
    ktl::bool32              descriptor_binding_variable_descriptor_count;
    ktl::bool32              runtime_descriptor_array;
};

using physical_device_descriptor_indexing_features_ext = physical_device_descriptor_indexing_features;

struct physical_device_descriptor_indexing_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_indexing_properties;
    void *                   next = nullptr;
    ktl::i32                 max_update_after_bind_descriptors_in_all_pools;
    ktl::bool32              shader_uniform_buffer_array_non_uniform_indexing_native;
    ktl::bool32              shader_sampled_image_array_non_uniform_indexing_native;
    ktl::bool32              shader_storage_buffer_array_non_uniform_indexing_native;
    ktl::bool32              shader_storage_image_array_non_uniform_indexing_native;
    ktl::bool32              shader_input_attachment_array_non_uniform_indexing_native;
    ktl::bool32              robust_buffer_access_update_after_bind;
    ktl::bool32              quad_divergent_implicit_lod;
    ktl::i32                 max_per_stage_descriptor_update_after_bind_samplers;
    ktl::i32                 max_per_stage_descriptor_update_after_bind_uniform_buffers;
    ktl::i32                 max_per_stage_descriptor_update_after_bind_storage_buffers;
    ktl::i32                 max_per_stage_descriptor_update_after_bind_sampled_images;
    ktl::i32                 max_per_stage_descriptor_update_after_bind_storage_images;
    ktl::i32                 max_per_stage_descriptor_update_after_bind_input_attachments;
    ktl::i32                 max_per_stage_update_after_bind_resources;
    ktl::i32                 max_descriptor_set_update_after_bind_samplers;
    ktl::i32                 max_descriptor_set_update_after_bind_uniform_buffers;
    ktl::i32                 max_descriptor_set_update_after_bind_uniform_buffers_dynamic;
    ktl::i32                 max_descriptor_set_update_after_bind_storage_buffers;
    ktl::i32                 max_descriptor_set_update_after_bind_storage_buffers_dynamic;
    ktl::i32                 max_descriptor_set_update_after_bind_sampled_images;
    ktl::i32                 max_descriptor_set_update_after_bind_storage_images;
    ktl::i32                 max_descriptor_set_update_after_bind_input_attachments;
};

using physical_device_descriptor_indexing_properties_ext = physical_device_descriptor_indexing_properties;

struct descriptor_set_layout_binding_flags_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_layout_binding_flags_create_info;
    const void *             next = nullptr;
    ktl::i32                 binding_count = 0;
    const ktl::api::descriptor_binding_flags * binding_flags;
};

using descriptor_set_layout_binding_flags_create_info_ext = descriptor_set_layout_binding_flags_create_info;

struct descriptor_set_variable_descriptor_count_allocate_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_variable_descriptor_count_allocate_info;
    const void *             next = nullptr;
    ktl::i32                 descriptor_set_count = 0;
    const ktl::i32 *         descriptor_counts;
};

using descriptor_set_variable_descriptor_count_allocate_info_ext =
    descriptor_set_variable_descriptor_count_allocate_info;

struct descriptor_set_variable_descriptor_count_layout_support final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_variable_descriptor_count_layout_support;
    void *                   next = nullptr;
    ktl::i32                 max_variable_descriptor_count;
};

using descriptor_set_variable_descriptor_count_layout_support_ext =
    descriptor_set_variable_descriptor_count_layout_support;

struct attachment_description2 final
{
    ktl::api::structure_type               type  = ktl::api::structure_type::v_attachment_description_2;
    const void *                           next  = nullptr;
    ktl::api::attachment_description_flags flags = 0;
    ktl::api::format                       format;
    ktl::api::sample_count_flag_bits       samples;
    ktl::api::attachment_load_op           load_op;
    ktl::api::attachment_store_op          store_op;
    ktl::api::attachment_load_op           stencil_load_op;
    ktl::api::attachment_store_op          stencil_store_op;
    ktl::api::image_layout                 initial_layout;
    ktl::api::image_layout                 final_layout;
};

using attachment_description2khr = attachment_description2;

struct attachment_reference2 final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_attachment_reference_2;
    const void *                 next = nullptr;
    ktl::i32                     attachment;
    ktl::api::image_layout       layout;
    ktl::api::image_aspect_flags aspect_mask;
};

using attachment_reference2khr = attachment_reference2;

struct subpass_description2 final
{
    ktl::api::structure_type                type  = ktl::api::structure_type::v_subpass_description_2;
    const void *                            next  = nullptr;
    ktl::api::subpass_description_flags     flags = 0;
    ktl::api::pipeline_bind_point           pipeline_bind_point;
    ktl::i32                                view_mask;
    ktl::i32                                input_attachment_count = 0;
    const ktl::api::attachment_reference2 * input_attachments;
    ktl::i32                                color_attachment_count = 0;
    const ktl::api::attachment_reference2 * color_attachments;
    const ktl::api::attachment_reference2 * resolve_attachments       = nullptr;
    const ktl::api::attachment_reference2 * depth_stencil_attachment  = nullptr;
    ktl::i32                                preserve_attachment_count = 0;
    const ktl::i32 *                        preserve_attachments;
};

using subpass_description2khr = subpass_description2;

struct subpass_dependency2 final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_subpass_dependency_2;
    const void *                   next = nullptr;
    ktl::i32                       src_subpass;
    ktl::i32                       dst_subpass;
    ktl::api::pipeline_stage_flags src_stage_mask   = 0;
    ktl::api::pipeline_stage_flags dst_stage_mask   = 0;
    ktl::api::access_flags         src_access_mask  = 0;
    ktl::api::access_flags         dst_access_mask  = 0;
    ktl::api::dependency_flags     dependency_flags = 0;
    ktl::i32                       view_offset;
};

using subpass_dependency2khr = subpass_dependency2;

struct render_pass_create_info2 final
{
    ktl::api::structure_type                  type             = ktl::api::structure_type::v_render_pass_create_info_2;
    const void *                              next             = nullptr;
    ktl::api::render_pass_create_flags        flags            = 0;
    ktl::i32                                  attachment_count = 0;
    const ktl::api::attachment_description2 * attachments;
    ktl::i32                                  subpass_count;
    const ktl::api::subpass_description2 *    subpasses;
    ktl::i32                                  dependency_count = 0;
    const ktl::api::subpass_dependency2 *     dependencies;
    ktl::i32                                  correlated_view_mask_count = 0;
    const ktl::i32 *                          correlated_view_masks;
};

using render_pass_create_info2khr = render_pass_create_info2;

struct subpass_begin_info final
{
    ktl::api::structure_type   type = ktl::api::structure_type::v_subpass_begin_info;
    const void *               next = nullptr;
    ktl::api::subpass_contents contents;
};

using subpass_begin_info_khr = subpass_begin_info;

struct subpass_end_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_subpass_end_info;
    const void *             next = nullptr;
};

using subpass_end_info_khr = subpass_end_info;

struct physical_device_timeline_semaphore_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_timeline_semaphore_features;
    void *                   next = nullptr;
    ktl::bool32              timeline_semaphore;
};

using physical_device_timeline_semaphore_features_khr = physical_device_timeline_semaphore_features;

struct physical_device_timeline_semaphore_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_timeline_semaphore_properties;
    void *                   next = nullptr;
    ktl::u64                 max_timeline_semaphore_value_difference;
};

using physical_device_timeline_semaphore_properties_khr = physical_device_timeline_semaphore_properties;

struct semaphore_type_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_type_create_info;
    const void *             next = nullptr;
    ktl::api::semaphore_type semaphore_type;
    ktl::u64                 initial_value;
};

using semaphore_type_create_info_khr = semaphore_type_create_info;

struct timeline_semaphore_submit_info final
{
    ktl::api::structure_type type                         = ktl::api::structure_type::v_timeline_semaphore_submit_info;
    const void *             next                         = nullptr;
    ktl::i32                 wait_semaphore_value_count   = 0;
    const ktl::u64 *         wait_semaphore_values        = nullptr;
    ktl::i32                 signal_semaphore_value_count = 0;
    const ktl::u64 *         signal_semaphore_values      = nullptr;
};

using timeline_semaphore_submit_info_khr = timeline_semaphore_submit_info;

struct semaphore_wait_info final
{
    ktl::api::structure_type       type  = ktl::api::structure_type::v_semaphore_wait_info;
    const void *                   next  = nullptr;
    ktl::api::semaphore_wait_flags flags = 0;
    ktl::i32                       semaphore_count;
    const ktl::api::semaphore *    semaphores;
    const ktl::u64 *               values;
};

using semaphore_wait_info_khr = semaphore_wait_info;

struct semaphore_signal_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_semaphore_signal_info;
    const void *             next = nullptr;
    ktl::api::semaphore      semaphore;
    ktl::u64                 value;
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
    const void *             next = nullptr;
    ktl::i32                 vertex_binding_divisor_count;
    const ktl::api::vertex_input_binding_divisor_description * vertex_binding_divisors;
};

using pipeline_vertex_input_divisor_state_create_info_khr = pipeline_vertex_input_divisor_state_create_info;

using pipeline_vertex_input_divisor_state_create_info_ext = pipeline_vertex_input_divisor_state_create_info;

struct physical_device_vertex_attribute_divisor_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vertex_attribute_divisor_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 max_vertex_attrib_divisor;
};

struct physical_device_vertex_attribute_divisor_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vertex_attribute_divisor_properties;
    void *                   next = nullptr;
    ktl::i32                 max_vertex_attrib_divisor;
    ktl::bool32              supports_non_zero_first_instance;
};

using physical_device_vertex_attribute_divisor_properties_khr = physical_device_vertex_attribute_divisor_properties;

struct physical_device_pcibus_info_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pci_bus_info_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 pci_domain;
    ktl::i32                 pci_bus;
    ktl::i32                 pci_device;
    ktl::i32                 pci_function;
};

struct import_android_hardware_buffer_info_android final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_import_android_hardware_buffer_info_android;
    const void *                 next = nullptr;
    ktl::api::ahardware_buffer * buffer;
};

struct android_hardware_buffer_usage_android final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_android_hardware_buffer_usage_android;
    void *                   next = nullptr;
    ktl::u64                 android_hardware_buffer_usage;
};

struct android_hardware_buffer_properties_android final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_android_hardware_buffer_properties_android;
    void *                   next = nullptr;
    ktl::dvsize              allocation_size;
    ktl::i32                 memory_type_bits;
};

struct memory_get_android_hardware_buffer_info_android final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_android_hardware_buffer_info_android;
    const void *             next = nullptr;
    ktl::api::device_memory  memory;
};

struct android_hardware_buffer_format_properties_android final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_android_hardware_buffer_format_properties_android;
    void *                         next = nullptr;
    ktl::api::format               format;
    ktl::u64                       external_format;
    ktl::api::format_feature_flags format_features;
    ktl::api::component_mapping    sampler_ycbcr_conversion_components;
    ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
    ktl::api::sampler_ycbcr_range            suggested_ycbcr_range;
    ktl::api::chroma_location                suggested_xchroma_offset;
    ktl::api::chroma_location                suggested_ychroma_offset;
};

struct command_buffer_inheritance_conditional_rendering_info_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_command_buffer_inheritance_conditional_rendering_info_ext;
    const void * next = nullptr;
    ktl::bool32  conditional_rendering_enable;
};

struct external_format_android final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_external_format_android;
    void *                   next = nullptr;
    ktl::u64                 external_format;
};

struct physical_device8bit_storage_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_8bit_storage_features;
    void *                   next = nullptr;
    ktl::bool32              storage_buffer8bit_access;
    ktl::bool32              uniform_and_storage_buffer8bit_access;
    ktl::bool32              storage_push_constant8;
};

using physical_device8bit_storage_features_khr = physical_device8bit_storage_features;

struct physical_device_conditional_rendering_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_conditional_rendering_features_ext;
    void *                   next = nullptr;
    ktl::bool32              conditional_rendering;
    ktl::bool32              inherited_conditional_rendering;
};

struct physical_device_vulkan_memory_model_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_memory_model_features;
    void *                   next = nullptr;
    ktl::bool32              vulkan_memory_model;
    ktl::bool32              vulkan_memory_model_device_scope;
    ktl::bool32              vulkan_memory_model_availability_visibility_chains;
};

using physical_device_vulkan_memory_model_features_khr = physical_device_vulkan_memory_model_features;

struct physical_device_shader_atomic_int64features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_atomic_int64_features;
    void *                   next = nullptr;
    ktl::bool32              shader_buffer_int64atomics;
    ktl::bool32              shader_shared_int64atomics;
};

using physical_device_shader_atomic_int64features_khr = physical_device_shader_atomic_int64features;

struct physical_device_shader_atomic_float_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_atomic_float_features_ext;
    void *                   next = nullptr;
    ktl::bool32              shader_buffer_float32atomics;
    ktl::bool32              shader_buffer_float32atomic_add;
    ktl::bool32              shader_buffer_float64atomics;
    ktl::bool32              shader_buffer_float64atomic_add;
    ktl::bool32              shader_shared_float32atomics;
    ktl::bool32              shader_shared_float32atomic_add;
    ktl::bool32              shader_shared_float64atomics;
    ktl::bool32              shader_shared_float64atomic_add;
    ktl::bool32              shader_image_float32atomics;
    ktl::bool32              shader_image_float32atomic_add;
    ktl::bool32              sparse_image_float32atomics;
    ktl::bool32              sparse_image_float32atomic_add;
};

struct physical_device_shader_atomic_float2features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_atomic_float_2_features_ext;
    void *                   next = nullptr;
    ktl::bool32              shader_buffer_float16atomics;
    ktl::bool32              shader_buffer_float16atomic_add;
    ktl::bool32              shader_buffer_float16atomic_min_max;
    ktl::bool32              shader_buffer_float32atomic_min_max;
    ktl::bool32              shader_buffer_float64atomic_min_max;
    ktl::bool32              shader_shared_float16atomics;
    ktl::bool32              shader_shared_float16atomic_add;
    ktl::bool32              shader_shared_float16atomic_min_max;
    ktl::bool32              shader_shared_float32atomic_min_max;
    ktl::bool32              shader_shared_float64atomic_min_max;
    ktl::bool32              shader_image_float32atomic_min_max;
    ktl::bool32              sparse_image_float32atomic_min_max;
};

struct physical_device_vertex_attribute_divisor_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vertex_attribute_divisor_features;
    void *                   next = nullptr;
    ktl::bool32              vertex_attribute_instance_rate_divisor;
    ktl::bool32              vertex_attribute_instance_rate_zero_divisor;
};

using physical_device_vertex_attribute_divisor_features_khr = physical_device_vertex_attribute_divisor_features;

using physical_device_vertex_attribute_divisor_features_ext = physical_device_vertex_attribute_divisor_features;

struct queue_family_checkpoint_properties_nv final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_queue_family_checkpoint_properties_nv;
    void *                         next = nullptr;
    ktl::api::pipeline_stage_flags checkpoint_execution_stage_mask;
};

struct checkpoint_data_nv final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_checkpoint_data_nv;
    void *                             next = nullptr;
    ktl::api::pipeline_stage_flag_bits stage;
    void *                             checkpoint_marker;
};

struct physical_device_depth_stencil_resolve_properties final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_physical_device_depth_stencil_resolve_properties;
    void *                       next = nullptr;
    ktl::api::resolve_mode_flags supported_depth_resolve_modes;
    ktl::api::resolve_mode_flags supported_stencil_resolve_modes;
    ktl::bool32                  independent_resolve_none;
    ktl::bool32                  independent_resolve;
};

using physical_device_depth_stencil_resolve_properties_khr = physical_device_depth_stencil_resolve_properties;

struct subpass_description_depth_stencil_resolve final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_subpass_description_depth_stencil_resolve;
    const void *                     next = nullptr;
    ktl::api::resolve_mode_flag_bits depth_resolve_mode;
    ktl::api::resolve_mode_flag_bits stencil_resolve_mode;
    const ktl::api::attachment_reference2 * depth_stencil_resolve_attachment = nullptr;
};

using subpass_description_depth_stencil_resolve_khr = subpass_description_depth_stencil_resolve;

struct image_view_astcdecode_mode_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_view_astc_decode_mode_ext;
    const void *             next = nullptr;
    ktl::api::format         decode_mode;
};

struct physical_device_astcdecode_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_astc_decode_features_ext;
    void *                   next = nullptr;
    ktl::bool32              decode_mode_shared_exponent;
};

struct physical_device_transform_feedback_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_transform_feedback_features_ext;
    void *                   next = nullptr;
    ktl::bool32              transform_feedback;
    ktl::bool32              geometry_streams;
};

struct physical_device_transform_feedback_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_transform_feedback_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 max_transform_feedback_streams;
    ktl::i32                 max_transform_feedback_buffers;
    ktl::dvsize              max_transform_feedback_buffer_size;
    ktl::i32                 max_transform_feedback_stream_data_size;
    ktl::i32                 max_transform_feedback_buffer_data_size;
    ktl::i32                 max_transform_feedback_buffer_data_stride;
    ktl::bool32              transform_feedback_queries;
    ktl::bool32              transform_feedback_streams_lines_triangles;
    ktl::bool32              transform_feedback_rasterization_stream_select;
    ktl::bool32              transform_feedback_draw;
};

struct pipeline_rasterization_state_stream_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rasterization_state_stream_create_info_ext;
    const void *             next = nullptr;
    ktl::api::pipeline_rasterization_state_stream_create_flags_ext flags = 0;
    ktl::i32                                                       rasterization_stream;
};

struct physical_device_representative_fragment_test_features_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_representative_fragment_test_features_nv;
    void *      next = nullptr;
    ktl::bool32 representative_fragment_test;
};

struct pipeline_representative_fragment_test_state_create_info_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_pipeline_representative_fragment_test_state_create_info_nv;
    const void * next = nullptr;
    ktl::bool32  representative_fragment_test_enable;
};

struct physical_device_exclusive_scissor_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_exclusive_scissor_features_nv;
    void *                   next = nullptr;
    ktl::bool32              exclusive_scissor;
};

struct pipeline_viewport_exclusive_scissor_state_create_info_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_pipeline_viewport_exclusive_scissor_state_create_info_nv;
    const void *             next                    = nullptr;
    ktl::i32                 exclusive_scissor_count = 0;
    const ktl::api::rect2d * exclusive_scissors;
};

struct physical_device_corner_sampled_image_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_corner_sampled_image_features_nv;
    void *                   next = nullptr;
    ktl::bool32              corner_sampled_image;
};

struct physical_device_compute_shader_derivatives_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_compute_shader_derivatives_features_khr;
    void *                   next = nullptr;
    ktl::bool32              compute_derivative_group_quads;
    ktl::bool32              compute_derivative_group_linear;
};

using physical_device_compute_shader_derivatives_features_nv = physical_device_compute_shader_derivatives_features_khr;

struct physical_device_compute_shader_derivatives_properties_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_compute_shader_derivatives_properties_khr;
    void *      next = nullptr;
    ktl::bool32 mesh_and_task_shader_derivatives;
};

using physical_device_fragment_shader_barycentric_features_nv =
    physical_device_fragment_shader_barycentric_features_khr;

struct physical_device_shader_image_footprint_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_image_footprint_features_nv;
    void *                   next = nullptr;
    ktl::bool32              image_footprint;
};

struct physical_device_dedicated_allocation_image_aliasing_features_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_dedicated_allocation_image_aliasing_features_nv;
    void *      next = nullptr;
    ktl::bool32 dedicated_allocation_image_aliasing;
};

struct physical_device_copy_memory_indirect_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_copy_memory_indirect_features_khr;
    void *                   next = nullptr;
    ktl::bool32              indirect_memory_copy;
    ktl::bool32              indirect_memory_to_image_copy;
};

struct physical_device_copy_memory_indirect_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_copy_memory_indirect_features_nv;
    void *                   next = nullptr;
    ktl::bool32              indirect_copy;
};

struct physical_device_copy_memory_indirect_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_copy_memory_indirect_properties_khr;
    void *                   next = nullptr;
    ktl::api::queue_flags    supported_queues;
};

using physical_device_copy_memory_indirect_properties_nv = physical_device_copy_memory_indirect_properties_khr;

struct physical_device_memory_decompression_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_memory_decompression_features_ext;
    void *                   next = nullptr;
    ktl::bool32              memory_decompression;
};

using physical_device_memory_decompression_features_nv = physical_device_memory_decompression_features_ext;

struct physical_device_memory_decompression_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_memory_decompression_properties_ext;
    void *                   next = nullptr;
    ktl::api::memory_decompression_method_flags_ext decompression_methods;
    ktl::u64                                        max_decompression_indirect_count;
};

using physical_device_memory_decompression_properties_nv = physical_device_memory_decompression_properties_ext;

struct shading_rate_palette_nv final
{
    ktl::i32                                        shading_rate_palette_entry_count;
    const ktl::api::shading_rate_palette_entry_nv * shading_rate_palette_entries;
};

struct pipeline_viewport_shading_rate_image_state_create_info_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_pipeline_viewport_shading_rate_image_state_create_info_nv;
    const void *                              next = nullptr;
    ktl::bool32                               shading_rate_image_enable;
    ktl::i32                                  viewport_count = 0;
    const ktl::api::shading_rate_palette_nv * shading_rate_palettes;
};

struct physical_device_shading_rate_image_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shading_rate_image_features_nv;
    void *                   next = nullptr;
    ktl::bool32              shading_rate_image;
    ktl::bool32              shading_rate_coarse_sample_order;
};

struct physical_device_shading_rate_image_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shading_rate_image_properties_nv;
    void *                   next = nullptr;
    ktl::api::extent2d       shading_rate_texel_size;
    ktl::i32                 shading_rate_palette_size;
    ktl::i32                 shading_rate_max_coarse_samples;
};

struct physical_device_invocation_mask_features_huawei final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_invocation_mask_features_huawei;
    void *                   next = nullptr;
    ktl::bool32              invocation_mask;
};

struct coarse_sample_location_nv final
{
    ktl::i32 pixel_x;
    ktl::i32 pixel_y;
    ktl::i32 sample;
};

struct coarse_sample_order_custom_nv final
{
    ktl::api::shading_rate_palette_entry_nv     shading_rate;
    ktl::i32                                    sample_count;
    ktl::i32                                    sample_location_count;
    const ktl::api::coarse_sample_location_nv * sample_locations;
};

struct pipeline_viewport_coarse_sample_order_state_create_info_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_pipeline_viewport_coarse_sample_order_state_create_info_nv;
    const void *                                    next = nullptr;
    ktl::api::coarse_sample_order_type_nv           sample_order_type;
    ktl::i32                                        custom_sample_order_count = 0;
    const ktl::api::coarse_sample_order_custom_nv * custom_sample_orders;
};

struct physical_device_mesh_shader_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_mesh_shader_features_nv;
    void *                   next = nullptr;
    ktl::bool32              task_shader;
    ktl::bool32              mesh_shader;
};

struct physical_device_mesh_shader_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_mesh_shader_properties_nv;
    void *                   next = nullptr;
    ktl::i32                 max_draw_mesh_tasks_count;
    ktl::i32                 max_task_work_group_invocations;
    ktl::i32                 max_task_work_group_size[3];
    ktl::i32                 max_task_total_memory_size;
    ktl::i32                 max_task_output_count;
    ktl::i32                 max_mesh_work_group_invocations;
    ktl::i32                 max_mesh_work_group_size[3];
    ktl::i32                 max_mesh_total_memory_size;
    ktl::i32                 max_mesh_output_vertices;
    ktl::i32                 max_mesh_output_primitives;
    ktl::i32                 max_mesh_multiview_view_count;
    ktl::i32                 mesh_output_per_vertex_granularity;
    ktl::i32                 mesh_output_per_primitive_granularity;
};

struct draw_mesh_tasks_indirect_command_nv final
{
    ktl::i32 task_count;
    ktl::i32 first_task;
};

struct physical_device_mesh_shader_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_mesh_shader_features_ext;
    void *                   next = nullptr;
    ktl::bool32              task_shader;
    ktl::bool32              mesh_shader;
    ktl::bool32              multiview_mesh_shader;
    ktl::bool32              primitive_fragment_shading_rate_mesh_shader;
    ktl::bool32              mesh_shader_queries;
};

struct physical_device_mesh_shader_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_mesh_shader_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 max_task_work_group_total_count;
    ktl::i32                 max_task_work_group_count[3];
    ktl::i32                 max_task_work_group_invocations;
    ktl::i32                 max_task_work_group_size[3];
    ktl::i32                 max_task_payload_size;
    ktl::i32                 max_task_shared_memory_size;
    ktl::i32                 max_task_payload_and_shared_memory_size;
    ktl::i32                 max_mesh_work_group_total_count;
    ktl::i32                 max_mesh_work_group_count[3];
    ktl::i32                 max_mesh_work_group_invocations;
    ktl::i32                 max_mesh_work_group_size[3];
    ktl::i32                 max_mesh_shared_memory_size;
    ktl::i32                 max_mesh_payload_and_shared_memory_size;
    ktl::i32                 max_mesh_output_memory_size;
    ktl::i32                 max_mesh_payload_and_output_memory_size;
    ktl::i32                 max_mesh_output_components;
    ktl::i32                 max_mesh_output_vertices;
    ktl::i32                 max_mesh_output_primitives;
    ktl::i32                 max_mesh_output_layers;
    ktl::i32                 max_mesh_multiview_view_count;
    ktl::i32                 mesh_output_per_vertex_granularity;
    ktl::i32                 mesh_output_per_primitive_granularity;
    ktl::i32                 max_preferred_task_work_group_invocations;
    ktl::i32                 max_preferred_mesh_work_group_invocations;
    ktl::bool32              prefers_local_invocation_vertex_output;
    ktl::bool32              prefers_local_invocation_primitive_output;
    ktl::bool32              prefers_compact_vertex_output;
    ktl::bool32              prefers_compact_primitive_output;
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
    const void *             next = nullptr;
    ktl::api::ray_tracing_shader_group_type_khr type;
    ktl::i32                                    general_shader;
    ktl::i32                                    closest_hit_shader;
    ktl::i32                                    any_hit_shader;
    ktl::i32                                    intersection_shader;
};

struct ray_tracing_shader_group_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_ray_tracing_shader_group_create_info_khr;
    const void *             next = nullptr;
    ktl::api::ray_tracing_shader_group_type_khr type;
    ktl::i32                                    general_shader;
    ktl::i32                                    closest_hit_shader;
    ktl::i32                                    any_hit_shader;
    ktl::i32                                    intersection_shader;
    const void *                                shader_group_capture_replay_handle = nullptr;
};

struct ray_tracing_pipeline_create_info_nv final
{
    ktl::api::structure_type        type  = ktl::api::structure_type::v_ray_tracing_pipeline_create_info_nv;
    const void *                    next  = nullptr;
    ktl::api::pipeline_create_flags flags = 0;
    ktl::i32                        stage_count;
    const ktl::api::pipeline_shader_stage_create_info *       stages;
    ktl::i32                                                  group_count;
    const ktl::api::ray_tracing_shader_group_create_info_nv * groups;
    ktl::i32                                                  max_recursion_depth;
    ktl::api::pipeline_layout                                 layout               = 0;
    ktl::api::pipeline                                        base_pipeline_handle = 0;
    ktl::i32                                                  base_pipeline_index;
};

struct ray_tracing_pipeline_create_info_khr final
{
    ktl::api::structure_type        type        = ktl::api::structure_type::v_ray_tracing_pipeline_create_info_khr;
    const void *                    next        = nullptr;
    ktl::api::pipeline_create_flags flags       = 0;
    ktl::i32                        stage_count = 0;
    const ktl::api::pipeline_shader_stage_create_info *              stages;
    ktl::i32                                                         group_count = 0;
    const ktl::api::ray_tracing_shader_group_create_info_khr *       groups;
    ktl::i32                                                         max_pipeline_ray_recursion_depth;
    const ktl::api::pipeline_library_create_info_khr *               library_info         = nullptr;
    const ktl::api::ray_tracing_pipeline_interface_create_info_khr * library_interface    = nullptr;
    const ktl::api::pipeline_dynamic_state_create_info *             dynamic_state        = nullptr;
    ktl::api::pipeline_layout                                        layout               = 0;
    ktl::api::pipeline                                               base_pipeline_handle = 0;
    ktl::i32                                                         base_pipeline_index;
};

struct geometry_triangles_nv final
{
    ktl::api::structure_type type        = ktl::api::structure_type::v_geometry_triangles_nv;
    const void *             next        = nullptr;
    ktl::api::buffer         vertex_data = 0;
    ktl::dvsize              vertex_offset;
    ktl::i32                 vertex_count;
    ktl::dvsize              vertex_stride;
    ktl::api::format         vertex_format;
    ktl::api::buffer         index_data = 0;
    ktl::dvsize              index_offset;
    ktl::i32                 index_count;
    ktl::api::index_type     index_type;
    ktl::api::buffer         transform_data = 0;
    ktl::dvsize              transform_offset;
};

struct geometry_aabbnv final
{
    ktl::api::structure_type type      = ktl::api::structure_type::v_geometry_aabb_nv;
    const void *             next      = nullptr;
    ktl::api::buffer         aabb_data = 0;
    ktl::i32                 num_aabbs;
    ktl::i32                 stride;
    ktl::dvsize              offset;
};

struct geometry_data_nv final
{
    ktl::api::geometry_triangles_nv triangles;
    ktl::api::geometry_aabbnv       aabbs;
};

struct geometry_nv final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_geometry_nv;
    const void *                 next = nullptr;
    ktl::api::geometry_type_khr  geometry_type;
    ktl::api::geometry_data_nv   geometry;
    ktl::api::geometry_flags_khr flags = 0;
};

struct acceleration_structure_info_nv final
{
    ktl::api::structure_type                        type = ktl::api::structure_type::v_acceleration_structure_info_nv;
    const void *                                    next = nullptr;
    ktl::api::acceleration_structure_type_nv        type;
    ktl::api::build_acceleration_structure_flags_nv flags          = 0;
    ktl::i32                                        instance_count = 0;
    ktl::i32                                        geometry_count = 0;
    const ktl::api::geometry_nv *                   geometries;
};

struct acceleration_structure_create_info_nv final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_acceleration_structure_create_info_nv;
    const void *                             next = nullptr;
    ktl::dvsize                              compacted_size;
    ktl::api::acceleration_structure_info_nv info;
};

struct bind_acceleration_structure_memory_info_nv final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_bind_acceleration_structure_memory_info_nv;
    const void *                        next = nullptr;
    ktl::api::acceleration_structure_nv acceleration_structure;
    ktl::api::device_memory             memory;
    ktl::dvsize                         memory_offset;
    ktl::i32                            device_index_count = 0;
    const ktl::i32 *                    device_indices;
};

struct write_descriptor_set_acceleration_structure_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_write_descriptor_set_acceleration_structure_khr;
    const void *             next = nullptr;
    ktl::i32                 acceleration_structure_count;
    const ktl::api::acceleration_structure_khr * acceleration_structures;
};

struct write_descriptor_set_acceleration_structure_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_write_descriptor_set_acceleration_structure_nv;
    const void *             next = nullptr;
    ktl::i32                 acceleration_structure_count;
    const ktl::api::acceleration_structure_nv * acceleration_structures;
};

struct acceleration_structure_memory_requirements_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_memory_requirements_info_nv;
    const void *             next = nullptr;
    ktl::api::acceleration_structure_memory_requirements_type_nv type;
    ktl::api::acceleration_structure_nv                          acceleration_structure;
};

struct physical_device_acceleration_structure_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_acceleration_structure_features_khr;
    void *                   next = nullptr;
    ktl::bool32              acceleration_structure;
    ktl::bool32              acceleration_structure_capture_replay;
    ktl::bool32              acceleration_structure_indirect_build;
    ktl::bool32              acceleration_structure_host_commands;
    ktl::bool32              descriptor_binding_acceleration_structure_update_after_bind;
};

struct physical_device_ray_tracing_pipeline_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_pipeline_features_khr;
    void *                   next = nullptr;
    ktl::bool32              ray_tracing_pipeline;
    ktl::bool32              ray_tracing_pipeline_shader_group_handle_capture_replay;
    ktl::bool32              ray_tracing_pipeline_shader_group_handle_capture_replay_mixed;
    ktl::bool32              ray_tracing_pipeline_trace_rays_indirect;
    ktl::bool32              ray_traversal_primitive_culling;
};

struct physical_device_ray_query_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_query_features_khr;
    void *                   next = nullptr;
    ktl::bool32              ray_query;
};

struct physical_device_acceleration_structure_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_acceleration_structure_properties_khr;
    void *                   next = nullptr;
    ktl::u64                 max_geometry_count;
    ktl::u64                 max_instance_count;
    ktl::u64                 max_primitive_count;
    ktl::i32                 max_per_stage_descriptor_acceleration_structures;
    ktl::i32                 max_per_stage_descriptor_update_after_bind_acceleration_structures;
    ktl::i32                 max_descriptor_set_acceleration_structures;
    ktl::i32                 max_descriptor_set_update_after_bind_acceleration_structures;
    ktl::i32                 min_acceleration_structure_scratch_offset_alignment;
};

struct physical_device_ray_tracing_pipeline_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_pipeline_properties_khr;
    void *                   next = nullptr;
    ktl::i32                 shader_group_handle_size;
    ktl::i32                 max_ray_recursion_depth;
    ktl::i32                 max_shader_group_stride;
    ktl::i32                 shader_group_base_alignment;
    ktl::i32                 shader_group_handle_capture_replay_size;
    ktl::i32                 max_ray_dispatch_invocation_count;
    ktl::i32                 shader_group_handle_alignment;
    ktl::i32                 max_ray_hit_attribute_size;
};

struct physical_device_ray_tracing_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_properties_nv;
    void *                   next = nullptr;
    ktl::i32                 shader_group_handle_size;
    ktl::i32                 max_recursion_depth;
    ktl::i32                 max_shader_group_stride;
    ktl::i32                 shader_group_base_alignment;
    ktl::u64                 max_geometry_count;
    ktl::u64                 max_instance_count;
    ktl::u64                 max_triangle_count;
    ktl::i32                 max_descriptor_set_acceleration_structures;
};

struct strided_device_address_region_khr final
{
    ktl::dvaddr device_address = 0;
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
    ktl::i32    width;
    ktl::i32    height;
    ktl::i32    depth;
};

struct physical_device_ray_tracing_maintenance1features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_maintenance_1_features_khr;
    void *                   next = nullptr;
    ktl::bool32              ray_tracing_maintenance1;
    ktl::bool32              ray_tracing_pipeline_trace_rays_indirect2;
};

struct drm_format_modifier_properties_list_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_drm_format_modifier_properties_list_ext;
    void *                   next = nullptr;
    ktl::i32                 drm_format_modifier_count                            = 0;
    ktl::api::drm_format_modifier_properties_ext * drm_format_modifier_properties = nullptr;
};

struct drm_format_modifier_properties_ext final
{
    ktl::u64                       drm_format_modifier;
    ktl::i32                       drm_format_modifier_plane_count;
    ktl::api::format_feature_flags drm_format_modifier_tiling_features;
};

struct physical_device_image_drm_format_modifier_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_drm_format_modifier_info_ext;
    const void *             next = nullptr;
    ktl::u64                 drm_format_modifier;
    ktl::api::sharing_mode   sharing_mode;
    ktl::i32                 queue_family_index_count = 0;
    const ktl::i32 *         queue_family_indices;
};

struct image_drm_format_modifier_list_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_drm_format_modifier_list_create_info_ext;
    const void *             next = nullptr;
    ktl::i32                 drm_format_modifier_count;
    const ktl::u64 *         drm_format_modifiers;
};

struct image_drm_format_modifier_explicit_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_drm_format_modifier_explicit_create_info_ext;
    const void *             next = nullptr;
    ktl::u64                 drm_format_modifier;
    ktl::i32                 drm_format_modifier_plane_count;
    const ktl::api::subresource_layout * plane_layouts;
};

struct image_drm_format_modifier_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_drm_format_modifier_properties_ext;
    void *                   next = nullptr;
    ktl::u64                 drm_format_modifier;
};

struct image_stencil_usage_create_info final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_image_stencil_usage_create_info;
    const void *                next = nullptr;
    ktl::api::image_usage_flags stencil_usage;
};

using image_stencil_usage_create_info_ext = image_stencil_usage_create_info;

struct device_memory_overallocation_create_info_amd final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_memory_overallocation_create_info_amd;
    const void *             next = nullptr;
    ktl::api::memory_overallocation_behavior_amd overallocation_behavior;
};

struct physical_device_fragment_density_map_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_features_ext;
    void *                   next = nullptr;
    ktl::bool32              fragment_density_map;
    ktl::bool32              fragment_density_map_dynamic;
    ktl::bool32              fragment_density_map_non_subsampled_images;
};

struct physical_device_fragment_density_map2features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_2_features_ext;
    void *                   next = nullptr;
    ktl::bool32              fragment_density_map_deferred;
};

struct physical_device_fragment_density_map_offset_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_fragment_density_map_offset_features_ext;
    void *      next = nullptr;
    ktl::bool32 fragment_density_map_offset;
};

using physical_device_fragment_density_map_offset_features_qcom =
    physical_device_fragment_density_map_offset_features_ext;

struct physical_device_fragment_density_map_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_properties_ext;
    void *                   next = nullptr;
    ktl::api::extent2d       min_fragment_density_texel_size;
    ktl::api::extent2d       max_fragment_density_texel_size;
    ktl::bool32              fragment_density_invocations;
};

struct physical_device_fragment_density_map2properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_density_map_2_properties_ext;
    void *                   next = nullptr;
    ktl::bool32              subsampled_loads;
    const ktl::bool32        subsampled_coarse_reconstruction_early_access;
    ktl::i32                 max_subsampled_array_layers;
    ktl::i32                 max_descriptor_set_subsampled_samplers;
};

struct physical_device_fragment_density_map_offset_properties_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_fragment_density_map_offset_properties_ext;
    void *             next = nullptr;
    ktl::api::extent2d fragment_density_offset_granularity;
};

using physical_device_fragment_density_map_offset_properties_qcom =
    physical_device_fragment_density_map_offset_properties_ext;

struct render_pass_fragment_density_map_create_info_ext final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_render_pass_fragment_density_map_create_info_ext;
    const void *                   next = nullptr;
    ktl::api::attachment_reference fragment_density_map_attachment;
};

struct render_pass_fragment_density_map_offset_end_info_ext final
{
    ktl::api::structure_type   type = ktl::api::structure_type::v_render_pass_fragment_density_map_offset_end_info_ext;
    const void *               next = nullptr;
    ktl::i32                   fragment_density_offset_count = 0;
    const ktl::api::offset2d * fragment_density_offsets;
};

using subpass_fragment_density_map_offset_end_info_qcom = render_pass_fragment_density_map_offset_end_info_ext;

struct physical_device_scalar_block_layout_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_scalar_block_layout_features;
    void *                   next = nullptr;
    ktl::bool32              scalar_block_layout;
};

using physical_device_scalar_block_layout_features_ext = physical_device_scalar_block_layout_features;

struct surface_protected_capabilities_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_surface_protected_capabilities_khr;
    void *                   next = nullptr;
    ktl::bool32              supports_protected;
};

struct physical_device_uniform_buffer_standard_layout_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_uniform_buffer_standard_layout_features;
    void *                   next = nullptr;
    ktl::bool32              uniform_buffer_standard_layout;
};

using physical_device_uniform_buffer_standard_layout_features_khr =
    physical_device_uniform_buffer_standard_layout_features;

struct physical_device_depth_clip_enable_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_depth_clip_enable_features_ext;
    void *                   next = nullptr;
    ktl::bool32              depth_clip_enable;
};

struct pipeline_rasterization_depth_clip_state_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rasterization_depth_clip_state_create_info_ext;
    const void *             next = nullptr;
    ktl::api::pipeline_rasterization_depth_clip_state_create_flags_ext flags = 0;
    ktl::bool32                                                        depth_clip_enable;
};

struct physical_device_memory_budget_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_memory_budget_properties_ext;
    void *                   next = nullptr;
    ktl::dvsize              heap_budget[KTL_API_MAX_MEMORY_HEAPS];
    ktl::dvsize              heap_usage[KTL_API_MAX_MEMORY_HEAPS];
};

struct physical_device_memory_priority_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_memory_priority_features_ext;
    void *                   next = nullptr;
    ktl::bool32              memory_priority;
};

struct memory_priority_allocate_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_priority_allocate_info_ext;
    const void *             next = nullptr;
    float                    priority;
};

struct physical_device_pageable_device_local_memory_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_pageable_device_local_memory_features_ext;
    void *      next = nullptr;
    ktl::bool32 pageable_device_local_memory;
};

struct physical_device_buffer_device_address_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_buffer_device_address_features;
    void *                   next = nullptr;
    ktl::bool32              buffer_device_address;
    ktl::bool32              buffer_device_address_capture_replay;
    ktl::bool32              buffer_device_address_multi_device;
};

using physical_device_buffer_device_address_features_khr = physical_device_buffer_device_address_features;

struct physical_device_buffer_device_address_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_buffer_device_address_features_ext;
    void *                   next = nullptr;
    ktl::bool32              buffer_device_address;
    ktl::bool32              buffer_device_address_capture_replay;
    ktl::bool32              buffer_device_address_multi_device;
};

using physical_device_buffer_address_features_ext = physical_device_buffer_device_address_features_ext;

struct buffer_device_address_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_buffer_device_address_info;
    const void *             next = nullptr;
    ktl::api::buffer         buffer;
};

using buffer_device_address_info_khr = buffer_device_address_info;

using buffer_device_address_info_ext = buffer_device_address_info;

struct buffer_opaque_capture_address_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_buffer_opaque_capture_address_create_info;
    const void *             next = nullptr;
    ktl::u64                 opaque_capture_address;
};

using buffer_opaque_capture_address_create_info_khr = buffer_opaque_capture_address_create_info;

struct buffer_device_address_create_info_ext final
{
    ktl::api::structure_type type           = ktl::api::structure_type::v_buffer_device_address_create_info_ext;
    const void *             next           = nullptr;
    ktl::dvaddr              device_address = 0;
};

struct physical_device_image_view_image_format_info_ext final
{
    ktl::api::structure_type  type = ktl::api::structure_type::v_physical_device_image_view_image_format_info_ext;
    void *                    next = nullptr;
    ktl::api::image_view_type image_view_type;
};

struct filter_cubic_image_view_image_format_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_filter_cubic_image_view_image_format_properties_ext;
    void *                   next = nullptr;
    ktl::bool32              filter_cubic;
    ktl::bool32              filter_cubic_minmax;
};

struct physical_device_imageless_framebuffer_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_imageless_framebuffer_features;
    void *                   next = nullptr;
    ktl::bool32              imageless_framebuffer;
};

using physical_device_imageless_framebuffer_features_khr = physical_device_imageless_framebuffer_features;

struct framebuffer_attachments_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_framebuffer_attachments_create_info;
    const void *             next = nullptr;
    ktl::i32                 attachment_image_info_count = 0;
    const ktl::api::framebuffer_attachment_image_info * attachment_image_infos;
};

using framebuffer_attachments_create_info_khr = framebuffer_attachments_create_info;

struct framebuffer_attachment_image_info final
{
    ktl::api::structure_type     type  = ktl::api::structure_type::v_framebuffer_attachment_image_info;
    const void *                 next  = nullptr;
    ktl::api::image_create_flags flags = 0;
    ktl::api::image_usage_flags  usage;
    ktl::i32                     width;
    ktl::i32                     height;
    ktl::i32                     layer_count;
    ktl::i32                     view_format_count = 0;
    const ktl::api::format *     view_formats;
};

using framebuffer_attachment_image_info_khr = framebuffer_attachment_image_info;

struct render_pass_attachment_begin_info final
{
    ktl::api::structure_type     type             = ktl::api::structure_type::v_render_pass_attachment_begin_info;
    const void *                 next             = nullptr;
    ktl::i32                     attachment_count = 0;
    const ktl::api::image_view * attachments;
};

using render_pass_attachment_begin_info_khr = render_pass_attachment_begin_info;

struct physical_device_texture_compression_astchdrfeatures final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_texture_compression_astc_hdr_features;
    void *                   next = nullptr;
    ktl::bool32              texture_compression_astc__hdr;
};

using physical_device_texture_compression_astchdrfeatures_ext = physical_device_texture_compression_astchdrfeatures;

struct physical_device_cooperative_matrix_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_matrix_features_nv;
    void *                   next = nullptr;
    ktl::bool32              cooperative_matrix;
    ktl::bool32              cooperative_matrix_robust_buffer_access;
};

struct physical_device_cooperative_matrix_properties_nv final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_physical_device_cooperative_matrix_properties_nv;
    void *                       next = nullptr;
    ktl::api::shader_stage_flags cooperative_matrix_supported_stages;
};

struct cooperative_matrix_properties_nv final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_cooperative_matrix_properties_nv;
    void *                      next = nullptr;
    ktl::i32                    msize;
    ktl::i32                    nsize;
    ktl::i32                    ksize;
    ktl::api::component_type_nv atype;
    ktl::api::component_type_nv btype;
    ktl::api::component_type_nv ctype;
    ktl::api::component_type_nv dtype;
    ktl::api::scope_nv          scope;
};

struct physical_device_ycbcr_image_arrays_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ycbcr_image_arrays_features_ext;
    void *                   next = nullptr;
    ktl::bool32              ycbcr_image_arrays;
};

struct image_view_handle_info_nvx final
{
    ktl::api::structure_type  type = ktl::api::structure_type::v_image_view_handle_info_nvx;
    const void *              next = nullptr;
    ktl::api::image_view      image_view;
    ktl::api::descriptor_type descriptor_type;
    ktl::api::sampler         sampler = 0;
};

struct image_view_address_properties_nvx final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_view_address_properties_nvx;
    void *                   next = nullptr;
    ktl::dvaddr              device_address;
    ktl::dvsize              size;
};

struct present_frame_token_ggp final
{
    ktl::api::structure_type  type = ktl::api::structure_type::v_present_frame_token_ggp;
    const void *              next = nullptr;
    ktl::api::ggp_frame_token frame_token;
};

struct pipeline_creation_feedback final
{
    ktl::api::pipeline_creation_feedback_flags flags;
    ktl::u64                                   duration;
};

using pipeline_creation_feedback_ext = pipeline_creation_feedback;

struct pipeline_creation_feedback_create_info final
{
    ktl::api::structure_type               type = ktl::api::structure_type::v_pipeline_creation_feedback_create_info;
    const void *                           next = nullptr;
    ktl::api::pipeline_creation_feedback * pipeline_creation_feedback;
    ktl::i32                               pipeline_stage_creation_feedback_count = 0;
    ktl::api::pipeline_creation_feedback * pipeline_stage_creation_feedbacks;
};

using pipeline_creation_feedback_create_info_ext = pipeline_creation_feedback_create_info;

struct surface_full_screen_exclusive_info_ext final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_surface_full_screen_exclusive_info_ext;
    void *                              next = nullptr;
    ktl::api::full_screen_exclusive_ext full_screen_exclusive;
};

struct surface_full_screen_exclusive_win32info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_surface_full_screen_exclusive_win32_info_ext;
    const void *             next = nullptr;
    ktl::api::hmonitor       hmonitor;
};

struct surface_capabilities_full_screen_exclusive_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_surface_capabilities_full_screen_exclusive_ext;
    void *                   next = nullptr;
    ktl::bool32              full_screen_exclusive_supported;
};

struct physical_device_present_barrier_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_barrier_features_nv;
    void *                   next = nullptr;
    ktl::bool32              present_barrier;
};

struct surface_capabilities_present_barrier_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_surface_capabilities_present_barrier_nv;
    void *                   next = nullptr;
    ktl::bool32              present_barrier_supported;
};

struct swapchain_present_barrier_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_present_barrier_create_info_nv;
    void *                   next = nullptr;
    ktl::bool32              present_barrier_enable;
};

struct physical_device_performance_query_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_performance_query_features_khr;
    void *                   next = nullptr;
    ktl::bool32              performance_counter_query_pools;
    ktl::bool32              performance_counter_multiple_query_pools;
};

struct physical_device_performance_query_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_performance_query_properties_khr;
    void *                   next = nullptr;
    ktl::bool32              allow_command_buffer_query_copies;
};

struct performance_counter_khr final
{
    ktl::api::structure_type                  type = ktl::api::structure_type::v_performance_counter_khr;
    void *                                    next = nullptr;
    ktl::api::performance_counter_unit_khr    unit;
    ktl::api::performance_counter_scope_khr   scope;
    ktl::api::performance_counter_storage_khr storage;
    ktl::u8                                   uuid[KTL_API_UUID_SIZE];
};

struct performance_counter_description_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_performance_counter_description_khr;
    void *                   next = nullptr;
    ktl::api::performance_counter_description_flags_khr flags = 0;
    char                                                name[KTL_API_MAX_DESCRIPTION_SIZE];
    char                                                category[KTL_API_MAX_DESCRIPTION_SIZE];
    char                                                description[KTL_API_MAX_DESCRIPTION_SIZE];
};

struct query_pool_performance_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_query_pool_performance_create_info_khr;
    const void *             next = nullptr;
    ktl::i32                 queue_family_index;
    ktl::i32                 counter_index_count;
    const ktl::i32 *         counter_indices;
};

struct acquire_profiling_lock_info_khr final
{
    ktl::api::structure_type                   type  = ktl::api::structure_type::v_acquire_profiling_lock_info_khr;
    const void *                               next  = nullptr;
    ktl::api::acquire_profiling_lock_flags_khr flags = 0;
    ktl::u64                                   timeout;
};

struct performance_query_submit_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_performance_query_submit_info_khr;
    const void *             next = nullptr;
    ktl::i32                 counter_pass_index;
};

struct performance_query_reservation_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_performance_query_reservation_info_khr;
    const void *             next = nullptr;
    ktl::i32                 max_performance_queries_per_pool;
};

struct headless_surface_create_info_ext final
{
    ktl::api::structure_type                    type  = ktl::api::structure_type::v_headless_surface_create_info_ext;
    const void *                                next  = nullptr;
    ktl::api::headless_surface_create_flags_ext flags = 0;
};

struct physical_device_coverage_reduction_mode_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_coverage_reduction_mode_features_nv;
    void *                   next = nullptr;
    ktl::bool32              coverage_reduction_mode;
};

struct pipeline_coverage_reduction_state_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_coverage_reduction_state_create_info_nv;
    const void *             next = nullptr;
    ktl::api::pipeline_coverage_reduction_state_create_flags_nv flags = 0;
    ktl::api::coverage_reduction_mode_nv                        coverage_reduction_mode;
};

struct framebuffer_mixed_samples_combination_nv final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_framebuffer_mixed_samples_combination_nv;
    void *                               next = nullptr;
    ktl::api::coverage_reduction_mode_nv coverage_reduction_mode;
    ktl::api::sample_count_flag_bits     rasterization_samples;
    ktl::api::sample_count_flags         depth_stencil_samples;
    ktl::api::sample_count_flags         color_samples;
};

struct physical_device_shader_integer_functions2features_intel final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_shader_integer_functions_2_features_intel;
    void *      next = nullptr;
    ktl::bool32 shader_integer_functions2;
};

struct performance_value_intel final
{
    ktl::api::performance_value_type_intel type;
    ktl::api::performance_value_data_intel data;
};

struct initialize_performance_api_info_intel final
{
    ktl::api::structure_type type      = ktl::api::structure_type::v_initialize_performance_api_info_intel;
    const void *             next      = nullptr;
    void *                   user_data = nullptr;
};

struct query_pool_performance_query_create_info_intel final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_query_pool_performance_query_create_info_intel;
    const void *             next = nullptr;
    ktl::api::query_pool_sampling_mode_intel performance_counters_sampling;
};

using query_pool_create_info_intel = query_pool_performance_query_create_info_intel;

struct performance_marker_info_intel final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_performance_marker_info_intel;
    const void *             next = nullptr;
    ktl::u64                 marker;
};

struct performance_stream_marker_info_intel final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_performance_stream_marker_info_intel;
    const void *             next = nullptr;
    ktl::i32                 marker;
};

struct performance_override_info_intel final
{
    ktl::api::structure_type                  type = ktl::api::structure_type::v_performance_override_info_intel;
    const void *                              next = nullptr;
    ktl::api::performance_override_type_intel type;
    ktl::bool32                               enable;
    ktl::u64                                  parameter;
};

struct performance_configuration_acquire_info_intel final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_performance_configuration_acquire_info_intel;
    const void *             next = nullptr;
    ktl::api::performance_configuration_type_intel type;
};

struct physical_device_shader_clock_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_clock_features_khr;
    void *                   next = nullptr;
    ktl::bool32              shader_subgroup_clock;
    ktl::bool32              shader_device_clock;
};

struct physical_device_index_type_uint8features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_index_type_uint8_features;
    void *                   next = nullptr;
    ktl::bool32              index_type_uint8;
};

using physical_device_index_type_uint8features_khr = physical_device_index_type_uint8features;

using physical_device_index_type_uint8features_ext = physical_device_index_type_uint8features;

struct physical_device_shader_smbuiltins_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_sm_builtins_properties_nv;
    void *                   next = nullptr;
    ktl::i32                 shader_smcount;
    ktl::i32                 shader_warps_per_sm;
};

struct physical_device_shader_smbuiltins_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_sm_builtins_features_nv;
    void *                   next = nullptr;
    ktl::bool32              shader_smbuiltins;
};

struct physical_device_fragment_shader_interlock_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shader_interlock_features_ext;
    void *                   next = nullptr;
    ktl::bool32              fragment_shader_sample_interlock;
    ktl::bool32              fragment_shader_pixel_interlock;
    ktl::bool32              fragment_shader_shading_rate_interlock;
};

struct physical_device_separate_depth_stencil_layouts_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_separate_depth_stencil_layouts_features;
    void *                   next = nullptr;
    ktl::bool32              separate_depth_stencil_layouts;
};

using physical_device_separate_depth_stencil_layouts_features_khr =
    physical_device_separate_depth_stencil_layouts_features;

struct attachment_reference_stencil_layout final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_attachment_reference_stencil_layout;
    void *                   next = nullptr;
    ktl::api::image_layout   stencil_layout;
};

struct physical_device_primitive_topology_list_restart_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_primitive_topology_list_restart_features_ext;
    void *      next = nullptr;
    ktl::bool32 primitive_topology_list_restart;
    ktl::bool32 primitive_topology_patch_list_restart;
};

using attachment_reference_stencil_layout_khr = attachment_reference_stencil_layout;

struct attachment_description_stencil_layout final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_attachment_description_stencil_layout;
    void *                   next = nullptr;
    ktl::api::image_layout   stencil_initial_layout;
    ktl::api::image_layout   stencil_final_layout;
};

using attachment_description_stencil_layout_khr = attachment_description_stencil_layout;

struct physical_device_pipeline_executable_properties_features_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_pipeline_executable_properties_features_khr;
    void *      next = nullptr;
    ktl::bool32 pipeline_executable_info;
};

struct pipeline_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_info_khr;
    const void *             next = nullptr;
    ktl::api::pipeline       pipeline;
};

using pipeline_info_ext = pipeline_info_khr;

struct pipeline_executable_properties_khr final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_pipeline_executable_properties_khr;
    void *                       next = nullptr;
    ktl::api::shader_stage_flags stages;
    char                         name[KTL_API_MAX_DESCRIPTION_SIZE];
    char                         description[KTL_API_MAX_DESCRIPTION_SIZE];
    ktl::i32                     subgroup_size;
};

struct pipeline_executable_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_executable_info_khr;
    const void *             next = nullptr;
    ktl::api::pipeline       pipeline;
    ktl::i32                 executable_index;
};

struct pipeline_executable_statistic_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_executable_statistic_khr;
    void *                   next = nullptr;
    char                     name[KTL_API_MAX_DESCRIPTION_SIZE];
    char                     description[KTL_API_MAX_DESCRIPTION_SIZE];
    ktl::api::pipeline_executable_statistic_format_khr format;
    ktl::api::pipeline_executable_statistic_value_khr  value;
};

struct pipeline_executable_internal_representation_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_executable_internal_representation_khr;
    void *                   next = nullptr;
    char                     name[KTL_API_MAX_DESCRIPTION_SIZE];
    char                     description[KTL_API_MAX_DESCRIPTION_SIZE];
    ktl::bool32              is_text;
    ktl::usize               data_size;
    void *                   data = nullptr;
};

struct physical_device_shader_demote_to_helper_invocation_features final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_shader_demote_to_helper_invocation_features;
    void *      next = nullptr;
    ktl::bool32 shader_demote_to_helper_invocation;
};

using physical_device_shader_demote_to_helper_invocation_features_ext =
    physical_device_shader_demote_to_helper_invocation_features;

struct physical_device_texel_buffer_alignment_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_texel_buffer_alignment_features_ext;
    void *                   next = nullptr;
    ktl::bool32              texel_buffer_alignment;
};

struct physical_device_texel_buffer_alignment_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_texel_buffer_alignment_properties;
    void *                   next = nullptr;
    ktl::dvsize              storage_texel_buffer_offset_alignment_bytes;
    ktl::bool32              storage_texel_buffer_offset_single_texel_alignment;
    ktl::dvsize              uniform_texel_buffer_offset_alignment_bytes;
    ktl::bool32              uniform_texel_buffer_offset_single_texel_alignment;
};

using physical_device_texel_buffer_alignment_properties_ext = physical_device_texel_buffer_alignment_properties;

struct physical_device_subgroup_size_control_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_subgroup_size_control_features;
    void *                   next = nullptr;
    ktl::bool32              subgroup_size_control;
    ktl::bool32              compute_full_subgroups;
};

using physical_device_subgroup_size_control_features_ext = physical_device_subgroup_size_control_features;

struct physical_device_subgroup_size_control_properties final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_physical_device_subgroup_size_control_properties;
    void *                       next = nullptr;
    ktl::i32                     min_subgroup_size;
    ktl::i32                     max_subgroup_size;
    ktl::i32                     max_compute_workgroup_subgroups;
    ktl::api::shader_stage_flags required_subgroup_size_stages;
};

using physical_device_subgroup_size_control_properties_ext = physical_device_subgroup_size_control_properties;

struct pipeline_shader_stage_required_subgroup_size_create_info final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_pipeline_shader_stage_required_subgroup_size_create_info;
    const void * next = nullptr;
    ktl::i32     required_subgroup_size;
};

using pipeline_shader_stage_required_subgroup_size_create_info_ext =
    pipeline_shader_stage_required_subgroup_size_create_info;

using shader_required_subgroup_size_create_info_ext = pipeline_shader_stage_required_subgroup_size_create_info;

struct subpass_shading_pipeline_create_info_huawei final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_subpass_shading_pipeline_create_info_huawei;
    void *                   next = nullptr;
    ktl::api::render_pass    render_pass;
    ktl::i32                 subpass;
};

struct physical_device_subpass_shading_properties_huawei final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_subpass_shading_properties_huawei;
    void *                   next = nullptr;
    ktl::i32                 max_subpass_shading_workgroup_size_aspect_ratio;
};

struct physical_device_cluster_culling_shader_properties_huawei final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_cluster_culling_shader_properties_huawei;
    void *      next = nullptr;
    ktl::i32    max_work_group_count[3];
    ktl::i32    max_work_group_size[3];
    ktl::i32    max_output_cluster_count;
    ktl::dvsize indirect_buffer_offset_alignment;
};

struct memory_opaque_capture_address_allocate_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_opaque_capture_address_allocate_info;
    const void *             next = nullptr;
    ktl::u64                 opaque_capture_address;
};

using memory_opaque_capture_address_allocate_info_khr = memory_opaque_capture_address_allocate_info;

struct device_memory_opaque_capture_address_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_memory_opaque_capture_address_info;
    const void *             next = nullptr;
    ktl::api::device_memory  memory;
};

using device_memory_opaque_capture_address_info_khr = device_memory_opaque_capture_address_info;

struct physical_device_line_rasterization_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_line_rasterization_features;
    void *                   next = nullptr;
    ktl::bool32              rectangular_lines;
    ktl::bool32              bresenham_lines;
    ktl::bool32              smooth_lines;
    ktl::bool32              stippled_rectangular_lines;
    ktl::bool32              stippled_bresenham_lines;
    ktl::bool32              stippled_smooth_lines;
};

using physical_device_line_rasterization_features_khr = physical_device_line_rasterization_features;

using physical_device_line_rasterization_features_ext = physical_device_line_rasterization_features;

struct physical_device_line_rasterization_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_line_rasterization_properties;
    void *                   next = nullptr;
    ktl::i32                 line_sub_pixel_precision_bits;
};

using physical_device_line_rasterization_properties_khr = physical_device_line_rasterization_properties;

using physical_device_line_rasterization_properties_ext = physical_device_line_rasterization_properties;

struct pipeline_rasterization_line_state_create_info final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_pipeline_rasterization_line_state_create_info;
    const void *                      next = nullptr;
    ktl::api::line_rasterization_mode line_rasterization_mode;
    ktl::bool32                       stippled_line_enable;
    ktl::i32                          line_stipple_factor;
    ktl::u16                          line_stipple_pattern;
};

using pipeline_rasterization_line_state_create_info_khr = pipeline_rasterization_line_state_create_info;

using pipeline_rasterization_line_state_create_info_ext = pipeline_rasterization_line_state_create_info;

struct physical_device_pipeline_creation_cache_control_features final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_pipeline_creation_cache_control_features;
    void *      next = nullptr;
    ktl::bool32 pipeline_creation_cache_control;
};

using physical_device_pipeline_creation_cache_control_features_ext =
    physical_device_pipeline_creation_cache_control_features;

struct physical_device_vulkan11features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_1_features;
    void *                   next = nullptr;
    ktl::bool32              storage_buffer16bit_access;
    ktl::bool32              uniform_and_storage_buffer16bit_access;
    ktl::bool32              storage_push_constant16;
    ktl::bool32              storage_input_output16;
    ktl::bool32              multiview;
    ktl::bool32              multiview_geometry_shader;
    ktl::bool32              multiview_tessellation_shader;
    ktl::bool32              variable_pointers_storage_buffer;
    ktl::bool32              variable_pointers;
    ktl::bool32              protected_memory;
    ktl::bool32              sampler_ycbcr_conversion;
    ktl::bool32              shader_draw_parameters;
};

struct physical_device_vulkan11properties final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_physical_device_vulkan_1_1_properties;
    void *                            next = nullptr;
    ktl::u8                           device_uuid[KTL_API_UUID_SIZE];
    ktl::u8                           driver_uuid[KTL_API_UUID_SIZE];
    ktl::u8                           device_luid[KTL_API_LUID_SIZE];
    ktl::i32                          device_node_mask;
    ktl::bool32                       device_luidvalid;
    ktl::i32                          subgroup_size;
    ktl::api::shader_stage_flags      subgroup_supported_stages;
    ktl::api::subgroup_feature_flags  subgroup_supported_operations;
    ktl::bool32                       subgroup_quad_operations_in_all_stages;
    ktl::api::point_clipping_behavior point_clipping_behavior;
    ktl::i32                          max_multiview_view_count;
    ktl::i32                          max_multiview_instance_index;
    ktl::bool32                       protected_no_fault;
    ktl::i32                          max_per_set_descriptors;
    ktl::dvsize                       max_memory_allocation_size;
};

struct physical_device_vulkan12features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_2_features;
    void *                   next = nullptr;
    ktl::bool32              sampler_mirror_clamp_to_edge;
    ktl::bool32              draw_indirect_count;
    ktl::bool32              storage_buffer8bit_access;
    ktl::bool32              uniform_and_storage_buffer8bit_access;
    ktl::bool32              storage_push_constant8;
    ktl::bool32              shader_buffer_int64atomics;
    ktl::bool32              shader_shared_int64atomics;
    ktl::bool32              shader_float16;
    ktl::bool32              shader_int8;
    ktl::bool32              descriptor_indexing;
    ktl::bool32              shader_input_attachment_array_dynamic_indexing;
    ktl::bool32              shader_uniform_texel_buffer_array_dynamic_indexing;
    ktl::bool32              shader_storage_texel_buffer_array_dynamic_indexing;
    ktl::bool32              shader_uniform_buffer_array_non_uniform_indexing;
    ktl::bool32              shader_sampled_image_array_non_uniform_indexing;
    ktl::bool32              shader_storage_buffer_array_non_uniform_indexing;
    ktl::bool32              shader_storage_image_array_non_uniform_indexing;
    ktl::bool32              shader_input_attachment_array_non_uniform_indexing;
    ktl::bool32              shader_uniform_texel_buffer_array_non_uniform_indexing;
    ktl::bool32              shader_storage_texel_buffer_array_non_uniform_indexing;
    ktl::bool32              descriptor_binding_uniform_buffer_update_after_bind;
    ktl::bool32              descriptor_binding_sampled_image_update_after_bind;
    ktl::bool32              descriptor_binding_storage_image_update_after_bind;
    ktl::bool32              descriptor_binding_storage_buffer_update_after_bind;
    ktl::bool32              descriptor_binding_uniform_texel_buffer_update_after_bind;
    ktl::bool32              descriptor_binding_storage_texel_buffer_update_after_bind;
    ktl::bool32              descriptor_binding_update_unused_while_pending;
    ktl::bool32              descriptor_binding_partially_bound;
    ktl::bool32              descriptor_binding_variable_descriptor_count;
    ktl::bool32              runtime_descriptor_array;
    ktl::bool32              sampler_filter_minmax;
    ktl::bool32              scalar_block_layout;
    ktl::bool32              imageless_framebuffer;
    ktl::bool32              uniform_buffer_standard_layout;
    ktl::bool32              shader_subgroup_extended_types;
    ktl::bool32              separate_depth_stencil_layouts;
    ktl::bool32              host_query_reset;
    ktl::bool32              timeline_semaphore;
    ktl::bool32              buffer_device_address;
    ktl::bool32              buffer_device_address_capture_replay;
    ktl::bool32              buffer_device_address_multi_device;
    ktl::bool32              vulkan_memory_model;
    ktl::bool32              vulkan_memory_model_device_scope;
    ktl::bool32              vulkan_memory_model_availability_visibility_chains;
    ktl::bool32              shader_output_viewport_index;
    ktl::bool32              shader_output_layer;
    ktl::bool32              subgroup_broadcast_dynamic_id;
};

struct physical_device_vulkan12properties final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_physical_device_vulkan_1_2_properties;
    void *                        next = nullptr;
    ktl::api::driver_id           driver_id;
    char                          driver_name[KTL_API_MAX_DRIVER_NAME_SIZE];
    char                          driver_info[KTL_API_MAX_DRIVER_INFO_SIZE];
    ktl::api::conformance_version conformance_version;
    ktl::api::shader_float_controls_independence denorm_behavior_independence;
    ktl::api::shader_float_controls_independence rounding_mode_independence;
    ktl::bool32                                  shader_signed_zero_inf_nan_preserve_float16;
    ktl::bool32                                  shader_signed_zero_inf_nan_preserve_float32;
    ktl::bool32                                  shader_signed_zero_inf_nan_preserve_float64;
    ktl::bool32                                  shader_denorm_preserve_float16;
    ktl::bool32                                  shader_denorm_preserve_float32;
    ktl::bool32                                  shader_denorm_preserve_float64;
    ktl::bool32                                  shader_denorm_flush_to_zero_float16;
    ktl::bool32                                  shader_denorm_flush_to_zero_float32;
    ktl::bool32                                  shader_denorm_flush_to_zero_float64;
    ktl::bool32                                  shader_rounding_mode_rtefloat16;
    ktl::bool32                                  shader_rounding_mode_rtefloat32;
    ktl::bool32                                  shader_rounding_mode_rtefloat64;
    ktl::bool32                                  shader_rounding_mode_rtzfloat16;
    ktl::bool32                                  shader_rounding_mode_rtzfloat32;
    ktl::bool32                                  shader_rounding_mode_rtzfloat64;
    ktl::i32                                     max_update_after_bind_descriptors_in_all_pools;
    ktl::bool32                                  shader_uniform_buffer_array_non_uniform_indexing_native;
    ktl::bool32                                  shader_sampled_image_array_non_uniform_indexing_native;
    ktl::bool32                                  shader_storage_buffer_array_non_uniform_indexing_native;
    ktl::bool32                                  shader_storage_image_array_non_uniform_indexing_native;
    ktl::bool32                                  shader_input_attachment_array_non_uniform_indexing_native;
    ktl::bool32                                  robust_buffer_access_update_after_bind;
    ktl::bool32                                  quad_divergent_implicit_lod;
    ktl::i32                                     max_per_stage_descriptor_update_after_bind_samplers;
    ktl::i32                                     max_per_stage_descriptor_update_after_bind_uniform_buffers;
    ktl::i32                                     max_per_stage_descriptor_update_after_bind_storage_buffers;
    ktl::i32                                     max_per_stage_descriptor_update_after_bind_sampled_images;
    ktl::i32                                     max_per_stage_descriptor_update_after_bind_storage_images;
    ktl::i32                                     max_per_stage_descriptor_update_after_bind_input_attachments;
    ktl::i32                                     max_per_stage_update_after_bind_resources;
    ktl::i32                                     max_descriptor_set_update_after_bind_samplers;
    ktl::i32                                     max_descriptor_set_update_after_bind_uniform_buffers;
    ktl::i32                                     max_descriptor_set_update_after_bind_uniform_buffers_dynamic;
    ktl::i32                                     max_descriptor_set_update_after_bind_storage_buffers;
    ktl::i32                                     max_descriptor_set_update_after_bind_storage_buffers_dynamic;
    ktl::i32                                     max_descriptor_set_update_after_bind_sampled_images;
    ktl::i32                                     max_descriptor_set_update_after_bind_storage_images;
    ktl::i32                                     max_descriptor_set_update_after_bind_input_attachments;
    ktl::api::resolve_mode_flags                 supported_depth_resolve_modes;
    ktl::api::resolve_mode_flags                 supported_stencil_resolve_modes;
    ktl::bool32                                  independent_resolve_none;
    ktl::bool32                                  independent_resolve;
    ktl::bool32                                  filter_minmax_single_component_formats;
    ktl::bool32                                  filter_minmax_image_component_mapping;
    ktl::u64                                     max_timeline_semaphore_value_difference;
    ktl::api::sample_count_flags                 framebuffer_integer_color_sample_counts = 0;
};

struct physical_device_vulkan13features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_3_features;
    void *                   next = nullptr;
    ktl::bool32              robust_image_access;
    ktl::bool32              inline_uniform_block;
    ktl::bool32              descriptor_binding_inline_uniform_block_update_after_bind;
    ktl::bool32              pipeline_creation_cache_control;
    ktl::bool32              private_data;
    ktl::bool32              shader_demote_to_helper_invocation;
    ktl::bool32              shader_terminate_invocation;
    ktl::bool32              subgroup_size_control;
    ktl::bool32              compute_full_subgroups;
    ktl::bool32              synchronization2;
    ktl::bool32              texture_compression_astc__hdr;
    ktl::bool32              shader_zero_initialize_workgroup_memory;
    ktl::bool32              dynamic_rendering;
    ktl::bool32              shader_integer_dot_product;
    ktl::bool32              maintenance4;
};

struct physical_device_vulkan13properties final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_physical_device_vulkan_1_3_properties;
    void *                       next = nullptr;
    ktl::i32                     min_subgroup_size;
    ktl::i32                     max_subgroup_size;
    ktl::i32                     max_compute_workgroup_subgroups;
    ktl::api::shader_stage_flags required_subgroup_size_stages;
    ktl::i32                     max_inline_uniform_block_size;
    ktl::i32                     max_per_stage_descriptor_inline_uniform_blocks;
    ktl::i32                     max_per_stage_descriptor_update_after_bind_inline_uniform_blocks;
    ktl::i32                     max_descriptor_set_inline_uniform_blocks;
    ktl::i32                     max_descriptor_set_update_after_bind_inline_uniform_blocks;
    ktl::i32                     max_inline_uniform_total_size;
    ktl::bool32                  integer_dot_product8bit_unsigned_accelerated;
    ktl::bool32                  integer_dot_product8bit_signed_accelerated;
    ktl::bool32                  integer_dot_product8bit_mixed_signedness_accelerated;
    ktl::bool32                  integer_dot_product4x8bit_packed_unsigned_accelerated;
    ktl::bool32                  integer_dot_product4x8bit_packed_signed_accelerated;
    ktl::bool32                  integer_dot_product4x8bit_packed_mixed_signedness_accelerated;
    ktl::bool32                  integer_dot_product16bit_unsigned_accelerated;
    ktl::bool32                  integer_dot_product16bit_signed_accelerated;
    ktl::bool32                  integer_dot_product16bit_mixed_signedness_accelerated;
    ktl::bool32                  integer_dot_product32bit_unsigned_accelerated;
    ktl::bool32                  integer_dot_product32bit_signed_accelerated;
    ktl::bool32                  integer_dot_product32bit_mixed_signedness_accelerated;
    ktl::bool32                  integer_dot_product64bit_unsigned_accelerated;
    ktl::bool32                  integer_dot_product64bit_signed_accelerated;
    ktl::bool32                  integer_dot_product64bit_mixed_signedness_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating8bit_unsigned_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating8bit_signed_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating16bit_unsigned_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating16bit_signed_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating32bit_unsigned_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating32bit_signed_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating64bit_unsigned_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating64bit_signed_accelerated;
    ktl::bool32                  integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated;
    ktl::dvsize                  storage_texel_buffer_offset_alignment_bytes;
    ktl::bool32                  storage_texel_buffer_offset_single_texel_alignment;
    ktl::dvsize                  uniform_texel_buffer_offset_alignment_bytes;
    ktl::bool32                  uniform_texel_buffer_offset_single_texel_alignment;
    ktl::dvsize                  max_buffer_size;
};

struct physical_device_vulkan14features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_4_features;
    void *                   next = nullptr;
    ktl::bool32              global_priority_query;
    ktl::bool32              shader_subgroup_rotate;
    ktl::bool32              shader_subgroup_rotate_clustered;
    ktl::bool32              shader_float_controls2;
    ktl::bool32              shader_expect_assume;
    ktl::bool32              rectangular_lines;
    ktl::bool32              bresenham_lines;
    ktl::bool32              smooth_lines;
    ktl::bool32              stippled_rectangular_lines;
    ktl::bool32              stippled_bresenham_lines;
    ktl::bool32              stippled_smooth_lines;
    ktl::bool32              vertex_attribute_instance_rate_divisor;
    ktl::bool32              vertex_attribute_instance_rate_zero_divisor;
    ktl::bool32              index_type_uint8;
    ktl::bool32              dynamic_rendering_local_read;
    ktl::bool32              maintenance5;
    ktl::bool32              maintenance6;
    ktl::bool32              pipeline_protected_access;
    ktl::bool32              pipeline_robustness;
    ktl::bool32              host_image_copy;
    ktl::bool32              push_descriptor;
};

struct physical_device_vulkan14properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_1_4_properties;
    void *                   next = nullptr;
    ktl::i32                 line_sub_pixel_precision_bits;
    ktl::i32                 max_vertex_attrib_divisor;
    ktl::bool32              supports_non_zero_first_instance;
    ktl::i32                 max_push_descriptors;
    ktl::bool32              dynamic_rendering_local_read_depth_stencil_attachments;
    ktl::bool32              dynamic_rendering_local_read_multisampled_attachments;
    ktl::bool32              early_fragment_multisample_coverage_after_sample_counting;
    ktl::bool32              early_fragment_sample_mask_test_before_sample_counting;
    ktl::bool32              depth_stencil_swizzle_one_support;
    ktl::bool32              polygon_mode_point_size;
    ktl::bool32              non_strict_single_pixel_wide_lines_use_parallelogram;
    ktl::bool32              non_strict_wide_lines_use_parallelogram;
    ktl::bool32              block_texel_view_compatible_multiple_layers;
    ktl::i32                 max_combined_image_sampler_descriptor_count;
    ktl::bool32              fragment_shading_rate_clamp_combiner_inputs;
    ktl::api::pipeline_robustness_buffer_behavior default_robustness_storage_buffers;
    ktl::api::pipeline_robustness_buffer_behavior default_robustness_uniform_buffers;
    ktl::api::pipeline_robustness_buffer_behavior default_robustness_vertex_inputs;
    ktl::api::pipeline_robustness_image_behavior  default_robustness_images;
    ktl::i32                                      copy_src_layout_count                         = 0;
    ktl::api::image_layout *                      copy_src_layouts                              = nullptr;
    ktl::i32                                      copy_dst_layout_count                         = 0;
    ktl::api::image_layout *                      copy_dst_layouts                              = nullptr;
    ktl::u8                                       optimal_tiling_layout_uuid[KTL_API_UUID_SIZE] = 0;
    ktl::bool32                                   identical_memory_type_requirements;
};

struct pipeline_compiler_control_create_info_amd final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_compiler_control_create_info_amd;
    const void *             next = nullptr;
    ktl::api::pipeline_compiler_control_flags_amd compiler_control_flags = 0;
};

struct physical_device_coherent_memory_features_amd final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_coherent_memory_features_amd;
    void *                   next = nullptr;
    ktl::bool32              device_coherent_memory;
};

struct fault_data final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_fault_data;
    void *                   next = nullptr;
    ktl::api::fault_level    fault_level;
    ktl::api::fault_type     fault_type;
};

struct fault_callback_info final
{
    ktl::api::structure_type                 type        = ktl::api::structure_type::v_fault_callback_info;
    const void *                             next        = nullptr;
    ktl::i32                                 fault_count = 0;
    ktl::api::fault_data *                   faults      = nullptr;
    ktl::api::pfn_vk_fault_callback_function pfn_fault_callback;
};

struct physical_device_tool_properties final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_physical_device_tool_properties;
    void *                       next = nullptr;
    char                         name[KTL_API_MAX_EXTENSION_NAME_SIZE];
    char                         version[KTL_API_MAX_EXTENSION_NAME_SIZE];
    ktl::api::tool_purpose_flags purposes;
    char                         description[KTL_API_MAX_DESCRIPTION_SIZE];
    char                         layer[KTL_API_MAX_EXTENSION_NAME_SIZE];
};

using physical_device_tool_properties_ext = physical_device_tool_properties;

struct sampler_custom_border_color_create_info_ext final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_sampler_custom_border_color_create_info_ext;
    const void *                next = nullptr;
    ktl::api::clear_color_value custom_border_color;
    ktl::api::format            format;
};

struct physical_device_custom_border_color_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_custom_border_color_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 max_custom_border_color_samplers;
};

struct physical_device_custom_border_color_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_custom_border_color_features_ext;
    void *                   next = nullptr;
    ktl::bool32              custom_border_colors;
    ktl::bool32              custom_border_color_without_format;
};

struct sampler_border_color_component_mapping_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_sampler_border_color_component_mapping_create_info_ext;
    const void *             next = nullptr;
    ktl::api::component_mapping components;
    ktl::bool32                 srgb;
};

struct physical_device_border_color_swizzle_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_border_color_swizzle_features_ext;
    void *                   next = nullptr;
    ktl::bool32              border_color_swizzle;
    ktl::bool32              border_color_swizzle_from_image;
};

struct acceleration_structure_geometry_triangles_data_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_geometry_triangles_data_khr;
    const void *             next = nullptr;
    ktl::api::format         vertex_format;
    ktl::api::device_or_host_address_const_khr vertex_data;
    ktl::dvsize                                vertex_stride;
    ktl::i32                                   max_vertex;
    ktl::api::index_type                       index_type;
    ktl::api::device_or_host_address_const_khr index_data;
    ktl::api::device_or_host_address_const_khr transform_data;
};

struct acceleration_structure_geometry_aabbs_data_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_geometry_aabbs_data_khr;
    const void *             next = nullptr;
    ktl::api::device_or_host_address_const_khr data;
    ktl::dvsize                                stride;
};

struct acceleration_structure_geometry_instances_data_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_geometry_instances_data_khr;
    const void *             next = nullptr;
    ktl::bool32              array_of_pointers;
    ktl::api::device_or_host_address_const_khr data;
};

struct acceleration_structure_geometry_linear_swept_spheres_data_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_acceleration_structure_geometry_linear_swept_spheres_data_nv;
    const void *                                         next = nullptr;
    ktl::api::format                                     vertex_format;
    ktl::api::device_or_host_address_const_khr           vertex_data;
    ktl::dvsize                                          vertex_stride;
    ktl::api::format                                     radius_format;
    ktl::api::device_or_host_address_const_khr           radius_data;
    ktl::dvsize                                          radius_stride;
    ktl::api::index_type                                 index_type;
    ktl::api::device_or_host_address_const_khr           index_data;
    ktl::dvsize                                          index_stride;
    ktl::api::ray_tracing_lss_indexing_mode_nv           indexing_mode;
    ktl::api::ray_tracing_lss_primitive_end_caps_mode_nv end_caps_mode;
};

struct acceleration_structure_geometry_spheres_data_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_geometry_spheres_data_nv;
    const void *             next = nullptr;
    ktl::api::format         vertex_format;
    ktl::api::device_or_host_address_const_khr vertex_data;
    ktl::dvsize                                vertex_stride;
    ktl::api::format                           radius_format;
    ktl::api::device_or_host_address_const_khr radius_data;
    ktl::dvsize                                radius_stride;
    ktl::api::index_type                       index_type;
    ktl::api::device_or_host_address_const_khr index_data;
    ktl::dvsize                                index_stride;
};

struct acceleration_structure_geometry_khr final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_acceleration_structure_geometry_khr;
    const void *                next = nullptr;
    ktl::api::geometry_type_khr geometry_type;
    ktl::api::acceleration_structure_geometry_data_khr geometry;
    ktl::api::geometry_flags_khr                       flags = 0;
};

struct acceleration_structure_build_geometry_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_build_geometry_info_khr;
    const void *             next = nullptr;
    ktl::api::acceleration_structure_type_khr             type;
    ktl::api::build_acceleration_structure_flags_khr      flags = 0;
    ktl::api::build_acceleration_structure_mode_khr       mode;
    ktl::api::acceleration_structure_khr                  src_acceleration_structure = 0;
    ktl::api::acceleration_structure_khr                  dst_acceleration_structure = 0;
    ktl::i32                                              geometry_count             = 0;
    const ktl::api::acceleration_structure_geometry_khr * geometries                 = nullptr;
    const ktl::api::acceleration_structure_geometry_khr * geometries;
    ktl::api::device_or_host_address_khr                  scratch_data;
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
    const void *             next = nullptr;
    ktl::api::acceleration_structure_create_flags_khr create_flags = 0;
    ktl::api::buffer                                  buffer;
    ktl::dvsize                                       offset;
    ktl::dvsize                                       size;
    ktl::api::acceleration_structure_type_khr         type;
    ktl::dvaddr                                       device_address = 0;
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
    ktl::api::transform_matrix_khr        transform;
    ktl::i32                              instance_custom_index;
    ktl::i32                              mask;
    ktl::i32                              instance_shader_binding_table_record_offset;
    ktl::api::geometry_instance_flags_khr flags = 0;
    ktl::u64                              acceleration_structure_reference;
};

using acceleration_structure_instance_nv = acceleration_structure_instance_khr;

struct acceleration_structure_device_address_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_device_address_info_khr;
    const void *             next = nullptr;
    ktl::api::acceleration_structure_khr acceleration_structure;
};

struct acceleration_structure_version_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_version_info_khr;
    const void *             next = nullptr;
    const ktl::u8 *          version_data;
};

struct copy_acceleration_structure_info_khr final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_copy_acceleration_structure_info_khr;
    const void *                         next = nullptr;
    ktl::api::acceleration_structure_khr src;
    ktl::api::acceleration_structure_khr dst;
    ktl::api::copy_acceleration_structure_mode_khr mode;
};

struct copy_acceleration_structure_to_memory_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_copy_acceleration_structure_to_memory_info_khr;
    const void *             next = nullptr;
    ktl::api::acceleration_structure_khr           src;
    ktl::api::device_or_host_address_khr           dst;
    ktl::api::copy_acceleration_structure_mode_khr mode;
};

struct copy_memory_to_acceleration_structure_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_copy_memory_to_acceleration_structure_info_khr;
    const void *             next = nullptr;
    ktl::api::device_or_host_address_const_khr     src;
    ktl::api::acceleration_structure_khr           dst;
    ktl::api::copy_acceleration_structure_mode_khr mode;
};

struct ray_tracing_pipeline_interface_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_ray_tracing_pipeline_interface_create_info_khr;
    const void *             next = nullptr;
    ktl::i32                 max_pipeline_ray_payload_size;
    ktl::i32                 max_pipeline_ray_hit_attribute_size;
};

struct pipeline_library_create_info_khr final
{
    ktl::api::structure_type   type          = ktl::api::structure_type::v_pipeline_library_create_info_khr;
    const void *               next          = nullptr;
    ktl::i32                   library_count = 0;
    const ktl::api::pipeline * libraries;
};

struct refresh_object_khr final
{
    ktl::api::object_type              object_type;
    ktl::u64                           object_handle;
    ktl::api::refresh_object_flags_khr flags = 0;
};

struct refresh_object_list_khr final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_refresh_object_list_khr;
    const void *                         next = nullptr;
    ktl::i32                             object_count;
    const ktl::api::refresh_object_khr * objects;
};

struct physical_device_extended_dynamic_state_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_extended_dynamic_state_features_ext;
    void *                   next = nullptr;
    ktl::bool32              extended_dynamic_state;
};

struct physical_device_extended_dynamic_state2features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_extended_dynamic_state_2_features_ext;
    void *                   next = nullptr;
    ktl::bool32              extended_dynamic_state2;
    ktl::bool32              extended_dynamic_state2logic_op;
    ktl::bool32              extended_dynamic_state2patch_control_points;
};

struct physical_device_extended_dynamic_state3features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_extended_dynamic_state_3_features_ext;
    void *                   next = nullptr;
    ktl::bool32              extended_dynamic_state3tessellation_domain_origin;
    ktl::bool32              extended_dynamic_state3depth_clamp_enable;
    ktl::bool32              extended_dynamic_state3polygon_mode;
    ktl::bool32              extended_dynamic_state3rasterization_samples;
    ktl::bool32              extended_dynamic_state3sample_mask;
    ktl::bool32              extended_dynamic_state3alpha_to_coverage_enable;
    ktl::bool32              extended_dynamic_state3alpha_to_one_enable;
    ktl::bool32              extended_dynamic_state3logic_op_enable;
    ktl::bool32              extended_dynamic_state3color_blend_enable;
    ktl::bool32              extended_dynamic_state3color_blend_equation;
    ktl::bool32              extended_dynamic_state3color_write_mask;
    ktl::bool32              extended_dynamic_state3rasterization_stream;
    ktl::bool32              extended_dynamic_state3conservative_rasterization_mode;
    ktl::bool32              extended_dynamic_state3extra_primitive_overestimation_size;
    ktl::bool32              extended_dynamic_state3depth_clip_enable;
    ktl::bool32              extended_dynamic_state3sample_locations_enable;
    ktl::bool32              extended_dynamic_state3color_blend_advanced;
    ktl::bool32              extended_dynamic_state3provoking_vertex_mode;
    ktl::bool32              extended_dynamic_state3line_rasterization_mode;
    ktl::bool32              extended_dynamic_state3line_stipple_enable;
    ktl::bool32              extended_dynamic_state3depth_clip_negative_one_to_one;
    ktl::bool32              extended_dynamic_state3viewport_wscaling_enable;
    ktl::bool32              extended_dynamic_state3viewport_swizzle;
    ktl::bool32              extended_dynamic_state3coverage_to_color_enable;
    ktl::bool32              extended_dynamic_state3coverage_to_color_location;
    ktl::bool32              extended_dynamic_state3coverage_modulation_mode;
    ktl::bool32              extended_dynamic_state3coverage_modulation_table_enable;
    ktl::bool32              extended_dynamic_state3coverage_modulation_table;
    ktl::bool32              extended_dynamic_state3coverage_reduction_mode;
    ktl::bool32              extended_dynamic_state3representative_fragment_test_enable;
    ktl::bool32              extended_dynamic_state3shading_rate_image_enable;
};

struct physical_device_extended_dynamic_state3properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_extended_dynamic_state_3_properties_ext;
    void *                   next = nullptr;
    ktl::bool32              dynamic_primitive_topology_unrestricted;
};

struct color_blend_equation_ext final
{
    ktl::api::blend_factor src_color_blend_factor;
    ktl::api::blend_factor dst_color_blend_factor;
    ktl::api::blend_op     color_blend_op;
    ktl::api::blend_factor src_alpha_blend_factor;
    ktl::api::blend_factor dst_alpha_blend_factor;
    ktl::api::blend_op     alpha_blend_op;
};

struct color_blend_advanced_ext final
{
    ktl::api::blend_op          advanced_blend_op;
    ktl::bool32                 src_premultiplied;
    ktl::bool32                 dst_premultiplied;
    ktl::api::blend_overlap_ext blend_overlap;
    ktl::bool32                 clamp_results;
};

struct render_pass_transform_begin_info_qcom final
{
    ktl::api::structure_type                  type = ktl::api::structure_type::v_render_pass_transform_begin_info_qcom;
    const void *                              next = nullptr;
    ktl::api::surface_transform_flag_bits_khr transform;
};

struct copy_command_transform_info_qcom final
{
    ktl::api::structure_type                  type = ktl::api::structure_type::v_copy_command_transform_info_qcom;
    const void *                              next = nullptr;
    ktl::api::surface_transform_flag_bits_khr transform;
};

struct command_buffer_inheritance_render_pass_transform_info_qcom final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_command_buffer_inheritance_render_pass_transform_info_qcom;
    const void *                              next = nullptr;
    ktl::api::surface_transform_flag_bits_khr transform;
    ktl::api::rect2d                          render_area;
};

struct physical_device_partitioned_acceleration_structure_features_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_partitioned_acceleration_structure_features_nv;
    void *      next = nullptr;
    ktl::bool32 partitioned_acceleration_structure;
};

struct physical_device_partitioned_acceleration_structure_properties_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_partitioned_acceleration_structure_properties_nv;
    void *   next = nullptr;
    ktl::i32 max_partition_count;
};

struct build_partitioned_acceleration_structure_indirect_command_nv final
{
    ktl::api::partitioned_acceleration_structure_op_type_nv op_type;
    ktl::i32                                                arg_count;
    ktl::api::strided_device_address_nv                     arg_data;
};

struct partitioned_acceleration_structure_flags_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_partitioned_acceleration_structure_flags_nv;
    void *                   next = nullptr;
    ktl::bool32              enable_partition_translation;
};

struct partitioned_acceleration_structure_write_instance_data_nv final
{
    ktl::api::transform_matrix_khr                                 transform;
    float                                                          explicit_aabb[6];
    ktl::i32                                                       instance_id;
    ktl::i32                                                       instance_mask;
    ktl::i32                                                       instance_contribution_to_hit_group_index;
    ktl::api::partitioned_acceleration_structure_instance_flags_nv instance_flags = 0;
    ktl::i32                                                       instance_index;
    ktl::i32                                                       partition_index;
    ktl::dvaddr                                                    acceleration_structure;
};

struct partitioned_acceleration_structure_update_instance_data_nv final
{
    ktl::i32    instance_index;
    ktl::i32    instance_contribution_to_hit_group_index;
    ktl::dvaddr acceleration_structure;
};

struct partitioned_acceleration_structure_write_partition_translation_data_nv final
{
    ktl::i32 partition_index;
    float    partition_translation[3];
};

struct write_descriptor_set_partitioned_acceleration_structure_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_write_descriptor_set_partitioned_acceleration_structure_nv;
    void *              next = nullptr;
    ktl::i32            acceleration_structure_count;
    const ktl::dvaddr * acceleration_structures;
};

struct partitioned_acceleration_structure_instances_input_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_partitioned_acceleration_structure_instances_input_nv;
    void *                   next = nullptr;
    ktl::api::build_acceleration_structure_flags_khr flags = 0;
    ktl::i32                                         instance_count;
    ktl::i32                                         max_instance_per_partition_count;
    ktl::i32                                         partition_count;
    ktl::i32                                         max_instance_in_global_partition_count;
};

struct build_partitioned_acceleration_structure_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_build_partitioned_acceleration_structure_info_nv;
    void *                   next = nullptr;
    ktl::api::partitioned_acceleration_structure_instances_input_nv input;
    ktl::dvaddr                                                     src_acceleration_structure_data = 0;
    ktl::dvaddr                                                     dst_acceleration_structure_data;
    ktl::dvaddr                                                     scratch_data;
    ktl::dvaddr                                                     src_infos;
    ktl::dvaddr                                                     src_infos_count;
};

struct physical_device_diagnostics_config_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_diagnostics_config_features_nv;
    void *                   next = nullptr;
    ktl::bool32              diagnostics_config;
};

struct device_diagnostics_config_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_diagnostics_config_create_info_nv;
    const void *             next = nullptr;
    ktl::api::device_diagnostics_config_flags_nv flags = 0;
};

struct pipeline_offline_create_info final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_pipeline_offline_create_info;
    const void *                     next = nullptr;
    ktl::u8                          pipeline_identifier[KTL_API_UUID_SIZE];
    ktl::api::pipeline_match_control match_control;
    ktl::dvsize                      pool_entry_size;
};

struct physical_device_zero_initialize_workgroup_memory_features final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_zero_initialize_workgroup_memory_features;
    void *      next = nullptr;
    ktl::bool32 shader_zero_initialize_workgroup_memory;
};

using physical_device_zero_initialize_workgroup_memory_features_khr =
    physical_device_zero_initialize_workgroup_memory_features;

struct physical_device_shader_subgroup_uniform_control_flow_features_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_shader_subgroup_uniform_control_flow_features_khr;
    void *      next = nullptr;
    ktl::bool32 shader_subgroup_uniform_control_flow;
};

struct physical_device_robustness2features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_robustness_2_features_khr;
    void *                   next = nullptr;
    ktl::bool32              robust_buffer_access2;
    ktl::bool32              robust_image_access2;
    ktl::bool32              null_descriptor;
};

using physical_device_robustness2features_ext = physical_device_robustness2features_khr;

struct physical_device_robustness2properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_robustness_2_properties_khr;
    void *                   next = nullptr;
    ktl::dvsize              robust_storage_buffer_access_size_alignment;
    ktl::dvsize              robust_uniform_buffer_access_size_alignment;
};

using physical_device_robustness2properties_ext = physical_device_robustness2properties_khr;

struct physical_device_image_robustness_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_robustness_features;
    void *                   next = nullptr;
    ktl::bool32              robust_image_access;
};

using physical_device_image_robustness_features_ext = physical_device_image_robustness_features;

struct physical_device_workgroup_memory_explicit_layout_features_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_workgroup_memory_explicit_layout_features_khr;
    void *      next = nullptr;
    ktl::bool32 workgroup_memory_explicit_layout;
    ktl::bool32 workgroup_memory_explicit_layout_scalar_block_layout;
    ktl::bool32 workgroup_memory_explicit_layout8bit_access;
    ktl::bool32 workgroup_memory_explicit_layout16bit_access;
};

struct physical_device_portability_subset_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_portability_subset_features_khr;
    void *                   next = nullptr;
    const ktl::bool32        constant_alpha_color_blend_factors;
    ktl::bool32              events;
    ktl::bool32              image_view_format_reinterpretation;
    ktl::bool32              image_view_format_swizzle;
    ktl::bool32              image_view2don3dimage;
    ktl::bool32              multisample_array_image;
    ktl::bool32              mutable_comparison_samplers;
    ktl::bool32              point_polygons;
    ktl::bool32              sampler_mip_lod_bias;
    ktl::bool32              separate_stencil_mask_ref;
    ktl::bool32              shader_sample_rate_interpolation_functions;
    ktl::bool32              tessellation_isolines;
    ktl::bool32              tessellation_point_mode;
    ktl::bool32              triangle_fans;
    ktl::bool32              vertex_attribute_access_beyond_stride;
};

struct physical_device_portability_subset_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_portability_subset_properties_khr;
    void *                   next = nullptr;
    ktl::i32                 min_vertex_input_binding_stride_alignment;
};

struct physical_device4444formats_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_4444_formats_features_ext;
    void *                   next = nullptr;
    ktl::bool32              format_a4r4g4b4;
    ktl::bool32              format_a4b4g4r4;
};

struct physical_device_subpass_shading_features_huawei final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_subpass_shading_features_huawei;
    void *                   next = nullptr;
    ktl::bool32              subpass_shading;
};

struct physical_device_cluster_culling_shader_features_huawei final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cluster_culling_shader_features_huawei;
    void *                   next = nullptr;
    ktl::bool32              clusterculling_shader;
    ktl::bool32              multiview_cluster_culling_shader;
};

struct physical_device_cluster_culling_shader_vrs_features_huawei final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_cluster_culling_shader_vrs_features_huawei;
    void *      next = nullptr;
    ktl::bool32 cluster_shading_rate;
};

struct buffer_copy2 final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_buffer_copy_2;
    const void *             next = nullptr;
    ktl::dvsize              src_offset;
    ktl::dvsize              dst_offset;
    ktl::dvsize              size;
};

using buffer_copy2khr = buffer_copy2;

struct image_copy2 final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_image_copy_2;
    const void *                       next = nullptr;
    ktl::api::image_subresource_layers src_subresource;
    ktl::api::offset3d                 src_offset;
    ktl::api::image_subresource_layers dst_subresource;
    ktl::api::offset3d                 dst_offset;
    ktl::api::extent3d                 extent;
};

using image_copy2khr = image_copy2;

struct image_blit2 final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_image_blit_2;
    const void *                       next = nullptr;
    ktl::api::image_subresource_layers src_subresource;
    ktl::api::offset3d                 src_offsets[2];
    ktl::api::image_subresource_layers dst_subresource;
    ktl::api::offset3d                 dst_offsets[2];
};

using image_blit2khr = image_blit2;

struct buffer_image_copy2 final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_buffer_image_copy_2;
    const void *                       next = nullptr;
    ktl::dvsize                        buffer_offset;
    ktl::i32                           buffer_row_length;
    ktl::i32                           buffer_image_height;
    ktl::api::image_subresource_layers image_subresource;
    ktl::api::offset3d                 image_offset;
    ktl::api::extent3d                 image_extent;
};

using buffer_image_copy2khr = buffer_image_copy2;

struct image_resolve2 final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_image_resolve_2;
    const void *                       next = nullptr;
    ktl::api::image_subresource_layers src_subresource;
    ktl::api::offset3d                 src_offset;
    ktl::api::image_subresource_layers dst_subresource;
    ktl::api::offset3d                 dst_offset;
    ktl::api::extent3d                 extent;
};

using image_resolve2khr = image_resolve2;

struct copy_buffer_info2 final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_copy_buffer_info_2;
    const void *                   next = nullptr;
    ktl::api::buffer               src_buffer;
    ktl::api::buffer               dst_buffer;
    ktl::i32                       region_count;
    const ktl::api::buffer_copy2 * regions;
};

using copy_buffer_info2khr = copy_buffer_info2;

struct copy_image_info2 final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_copy_image_info_2;
    const void *                  next = nullptr;
    ktl::api::image               src_image;
    ktl::api::image_layout        src_image_layout;
    ktl::api::image               dst_image;
    ktl::api::image_layout        dst_image_layout;
    ktl::i32                      region_count;
    const ktl::api::image_copy2 * regions;
};

using copy_image_info2khr = copy_image_info2;

struct blit_image_info2 final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_blit_image_info_2;
    const void *                  next = nullptr;
    ktl::api::image               src_image;
    ktl::api::image_layout        src_image_layout;
    ktl::api::image               dst_image;
    ktl::api::image_layout        dst_image_layout;
    ktl::i32                      region_count;
    const ktl::api::image_blit2 * regions;
    ktl::api::filter              filter;
};

using blit_image_info2khr = blit_image_info2;

struct copy_buffer_to_image_info2 final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_copy_buffer_to_image_info_2;
    const void *                         next = nullptr;
    ktl::api::buffer                     src_buffer;
    ktl::api::image                      dst_image;
    ktl::api::image_layout               dst_image_layout;
    ktl::i32                             region_count;
    const ktl::api::buffer_image_copy2 * regions;
};

using copy_buffer_to_image_info2khr = copy_buffer_to_image_info2;

struct copy_image_to_buffer_info2 final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_copy_image_to_buffer_info_2;
    const void *                         next = nullptr;
    ktl::api::image                      src_image;
    ktl::api::image_layout               src_image_layout;
    ktl::api::buffer                     dst_buffer;
    ktl::i32                             region_count;
    const ktl::api::buffer_image_copy2 * regions;
};

using copy_image_to_buffer_info2khr = copy_image_to_buffer_info2;

struct resolve_image_info2 final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_resolve_image_info_2;
    const void *                     next = nullptr;
    ktl::api::image                  src_image;
    ktl::api::image_layout           src_image_layout;
    ktl::api::image                  dst_image;
    ktl::api::image_layout           dst_image_layout;
    ktl::i32                         region_count;
    const ktl::api::image_resolve2 * regions;
};

using resolve_image_info2khr = resolve_image_info2;

struct physical_device_shader_image_atomic_int64features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_image_atomic_int64_features_ext;
    void *                   next = nullptr;
    ktl::bool32              shader_image_int64atomics;
    ktl::bool32              sparse_image_int64atomics;
};

struct fragment_shading_rate_attachment_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_fragment_shading_rate_attachment_info_khr;
    const void *             next = nullptr;
    const ktl::api::attachment_reference2 * fragment_shading_rate_attachment = nullptr;
    ktl::api::extent2d                      shading_rate_attachment_texel_size;
};

struct pipeline_fragment_shading_rate_state_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_fragment_shading_rate_state_create_info_khr;
    const void *             next = nullptr;
    ktl::api::extent2d       fragment_size;
    ktl::api::fragment_shading_rate_combiner_op_khr combiner_ops[2];
};

struct physical_device_fragment_shading_rate_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shading_rate_features_khr;
    void *                   next = nullptr;
    ktl::bool32              pipeline_fragment_shading_rate;
    ktl::bool32              primitive_fragment_shading_rate;
    ktl::bool32              attachment_fragment_shading_rate;
};

struct physical_device_fragment_shading_rate_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shading_rate_properties_khr;
    void *                   next = nullptr;
    ktl::api::extent2d       min_fragment_shading_rate_attachment_texel_size;
    ktl::api::extent2d       max_fragment_shading_rate_attachment_texel_size;
    ktl::i32                 max_fragment_shading_rate_attachment_texel_size_aspect_ratio;
    ktl::bool32              primitive_fragment_shading_rate_with_multiple_viewports;
    ktl::bool32              layered_shading_rate_attachments;
    ktl::bool32              fragment_shading_rate_non_trivial_combiner_ops;
    ktl::api::extent2d       max_fragment_size;
    ktl::i32                 max_fragment_size_aspect_ratio;
    ktl::i32                 max_fragment_shading_rate_coverage_samples;
    ktl::api::sample_count_flag_bits max_fragment_shading_rate_rasterization_samples;
    ktl::bool32                      fragment_shading_rate_with_shader_depth_stencil_writes;
    ktl::bool32                      fragment_shading_rate_with_sample_mask;
    ktl::bool32                      fragment_shading_rate_with_shader_sample_mask;
    ktl::bool32                      fragment_shading_rate_with_conservative_rasterization;
    ktl::bool32                      fragment_shading_rate_with_fragment_shader_interlock;
    ktl::bool32                      fragment_shading_rate_with_custom_sample_locations;
    ktl::bool32                      fragment_shading_rate_strict_multiply_combiner;
};

struct physical_device_fragment_shading_rate_khr final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_physical_device_fragment_shading_rate_khr;
    void *                       next = nullptr;
    ktl::api::sample_count_flags sample_counts;
    ktl::api::extent2d           fragment_size;
};

struct physical_device_shader_terminate_invocation_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_terminate_invocation_features;
    void *                   next = nullptr;
    ktl::bool32              shader_terminate_invocation;
};

using physical_device_shader_terminate_invocation_features_khr = physical_device_shader_terminate_invocation_features;

struct physical_device_fragment_shading_rate_enums_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fragment_shading_rate_enums_features_nv;
    void *                   next = nullptr;
    ktl::bool32              fragment_shading_rate_enums;
    ktl::bool32              supersample_fragment_shading_rates;
    ktl::bool32              no_invocation_fragment_shading_rates;
};

struct physical_device_fragment_shading_rate_enums_properties_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_fragment_shading_rate_enums_properties_nv;
    void *                           next = nullptr;
    ktl::api::sample_count_flag_bits max_fragment_shading_rate_invocation_count;
};

struct pipeline_fragment_shading_rate_enum_state_create_info_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_pipeline_fragment_shading_rate_enum_state_create_info_nv;
    const void *                                    next = nullptr;
    ktl::api::fragment_shading_rate_type_nv         shading_rate_type;
    ktl::api::fragment_shading_rate_nv              shading_rate;
    ktl::api::fragment_shading_rate_combiner_op_khr combiner_ops[2];
};

struct acceleration_structure_build_sizes_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_build_sizes_info_khr;
    void *                   next = nullptr;
    ktl::dvsize              acceleration_structure_size;
    ktl::dvsize              update_scratch_size;
    ktl::dvsize              build_scratch_size;
};

struct physical_device_image2dview_of3dfeatures_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_2d_view_of_3d_features_ext;
    void *                   next = nullptr;
    ktl::bool32              image2dview_of3d;
    ktl::bool32              sampler2dview_of3d;
};

struct physical_device_image_sliced_view_of3dfeatures_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_sliced_view_of_3d_features_ext;
    void *                   next = nullptr;
    ktl::bool32              image_sliced_view_of3d;
};

struct physical_device_attachment_feedback_loop_dynamic_state_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_attachment_feedback_loop_dynamic_state_features_ext;
    void *      next = nullptr;
    ktl::bool32 attachment_feedback_loop_dynamic_state;
};

struct physical_device_legacy_vertex_attributes_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_legacy_vertex_attributes_features_ext;
    void *                   next = nullptr;
    ktl::bool32              legacy_vertex_attributes;
};

struct physical_device_legacy_vertex_attributes_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_legacy_vertex_attributes_properties_ext;
    void *                   next = nullptr;
    ktl::bool32              native_unaligned_performance;
};

struct physical_device_mutable_descriptor_type_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_mutable_descriptor_type_features_ext;
    void *                   next = nullptr;
    ktl::bool32              mutable_descriptor_type;
};

using physical_device_mutable_descriptor_type_features_valve = physical_device_mutable_descriptor_type_features_ext;

struct mutable_descriptor_type_list_ext final
{
    ktl::i32                          descriptor_type_count = 0;
    const ktl::api::descriptor_type * descriptor_types;
};

using mutable_descriptor_type_list_valve = mutable_descriptor_type_list_ext;

struct mutable_descriptor_type_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_mutable_descriptor_type_create_info_ext;
    const void *             next = nullptr;
    ktl::i32                 mutable_descriptor_type_list_count = 0;
    const ktl::api::mutable_descriptor_type_list_ext * mutable_descriptor_type_lists;
};

using mutable_descriptor_type_create_info_valve = mutable_descriptor_type_create_info_ext;

struct physical_device_depth_clip_control_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_depth_clip_control_features_ext;
    void *                   next = nullptr;
    ktl::bool32              depth_clip_control;
};

struct physical_device_zero_initialize_device_memory_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_zero_initialize_device_memory_features_ext;
    void *      next = nullptr;
    ktl::bool32 zero_initialize_device_memory;
};

struct begin_custom_resolve_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_begin_custom_resolve_info_ext;
    void *                   next = nullptr;
};

struct physical_device_custom_resolve_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_custom_resolve_features_ext;
    void *                   next = nullptr;
    ktl::bool32              custom_resolve;
};

struct custom_resolve_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_custom_resolve_create_info_ext;
    const void *             next = nullptr;
    ktl::bool32              custom_resolve;
    ktl::i32                 color_attachment_count = 0;
    const ktl::api::format * color_attachment_formats;
    ktl::api::format         depth_attachment_format;
    ktl::api::format         stencil_attachment_format;
};

struct physical_device_device_generated_commands_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_generated_commands_features_ext;
    void *                   next = nullptr;
    ktl::bool32              device_generated_commands;
    ktl::bool32              dynamic_generated_pipeline_layout;
};

struct physical_device_device_generated_commands_properties_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_device_generated_commands_properties_ext;
    void *                                           next = nullptr;
    ktl::i32                                         max_indirect_pipeline_count;
    ktl::i32                                         max_indirect_shader_object_count;
    ktl::i32                                         max_indirect_sequence_count;
    ktl::i32                                         max_indirect_commands_token_count;
    ktl::i32                                         max_indirect_commands_token_offset;
    ktl::i32                                         max_indirect_commands_indirect_stride;
    ktl::api::indirect_commands_input_mode_flags_ext supported_indirect_commands_input_modes;
    ktl::api::shader_stage_flags                     supported_indirect_commands_shader_stages;
    ktl::api::shader_stage_flags                     supported_indirect_commands_shader_stages_pipeline_binding;
    ktl::api::shader_stage_flags                     supported_indirect_commands_shader_stages_shader_binding;
    ktl::bool32                                      device_generated_commands_transform_feedback;
    ktl::bool32                                      device_generated_commands_multi_draw_indirect_count;
};

struct generated_commands_pipeline_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_generated_commands_pipeline_info_ext;
    void *                   next = nullptr;
    ktl::api::pipeline       pipeline;
};

struct generated_commands_shader_info_ext final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_generated_commands_shader_info_ext;
    void *                       next = nullptr;
    ktl::i32                     shader_count;
    const ktl::api::shader_ext * shaders;
};

struct generated_commands_memory_requirements_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_generated_commands_memory_requirements_info_ext;
    const void *             next = nullptr;
    ktl::api::indirect_execution_set_ext   indirect_execution_set = 0;
    ktl::api::indirect_commands_layout_ext indirect_commands_layout;
    ktl::i32                               max_sequence_count;
    ktl::i32                               max_draw_count;
};

struct indirect_execution_set_pipeline_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_indirect_execution_set_pipeline_info_ext;
    const void *             next = nullptr;
    ktl::api::pipeline       initial_pipeline;
    ktl::i32                 max_pipeline_count;
};

struct indirect_execution_set_shader_layout_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_indirect_execution_set_shader_layout_info_ext;
    const void *             next = nullptr;
    ktl::i32                 set_layout_count = 0;
    const ktl::api::descriptor_set_layout * set_layouts;
};

struct indirect_execution_set_shader_info_ext final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_indirect_execution_set_shader_info_ext;
    const void *                 next = nullptr;
    ktl::i32                     shader_count;
    const ktl::api::shader_ext * initial_shaders;
    const ktl::api::indirect_execution_set_shader_layout_info_ext * set_layout_infos = nullptr;
    ktl::i32                                                        max_shader_count;
    ktl::i32                                                        push_constant_range_count = 0;
    const ktl::api::push_constant_range *                           push_constant_ranges;
};

struct indirect_execution_set_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_indirect_execution_set_create_info_ext;
    const void *             next = nullptr;
    ktl::api::indirect_execution_set_info_type_ext type;
    ktl::api::indirect_execution_set_info_ext      info;
};

struct generated_commands_info_ext final
{
    ktl::api::structure_type               type = ktl::api::structure_type::v_generated_commands_info_ext;
    const void *                           next = nullptr;
    ktl::api::shader_stage_flags           shader_stages;
    ktl::api::indirect_execution_set_ext   indirect_execution_set = 0;
    ktl::api::indirect_commands_layout_ext indirect_commands_layout;
    ktl::dvaddr                            indirect_address;
    ktl::dvsize                            indirect_address_size;
    ktl::dvaddr                            preprocess_address = 0;
    ktl::dvsize                            preprocess_size;
    ktl::i32                               max_sequence_count;
    ktl::dvaddr                            sequence_count_address = 0;
    ktl::i32                               max_draw_count;
};

struct write_indirect_execution_set_pipeline_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_write_indirect_execution_set_pipeline_ext;
    const void *             next = nullptr;
    ktl::i32                 index;
    ktl::api::pipeline       pipeline;
};

struct write_indirect_execution_set_shader_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_write_indirect_execution_set_shader_ext;
    const void *             next = nullptr;
    ktl::i32                 index;
    ktl::api::shader_ext     shader;
};

struct indirect_commands_layout_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_indirect_commands_layout_create_info_ext;
    const void *             next = nullptr;
    ktl::api::indirect_commands_layout_usage_flags_ext   flags = 0;
    ktl::api::shader_stage_flags                         shader_stages;
    ktl::i32                                             indirect_stride;
    ktl::api::pipeline_layout                            pipeline_layout = 0;
    ktl::i32                                             token_count;
    const ktl::api::indirect_commands_layout_token_ext * tokens;
};

struct indirect_commands_layout_token_ext final
{
    ktl::api::structure_type                   type = ktl::api::structure_type::v_indirect_commands_layout_token_ext;
    const void *                               next = nullptr;
    ktl::api::indirect_commands_token_type_ext type;
    ktl::api::indirect_commands_token_data_ext data;
    ktl::i32                                   offset;
};

struct draw_indirect_count_indirect_command_ext final
{
    ktl::dvaddr buffer_address;
    ktl::i32    stride;
    ktl::i32    command_count;
};

struct indirect_commands_vertex_buffer_token_ext final
{
    ktl::i32 vertex_binding_unit;
};

struct bind_vertex_buffer_indirect_command_ext final
{
    ktl::dvaddr buffer_address;
    ktl::i32    size;
    ktl::i32    stride;
};

struct indirect_commands_index_buffer_token_ext final
{
    ktl::api::indirect_commands_input_mode_flag_bits_ext mode;
};

struct bind_index_buffer_indirect_command_ext final
{
    ktl::dvaddr          buffer_address;
    ktl::i32             size;
    ktl::api::index_type index_type;
};

struct indirect_commands_push_constant_token_ext final
{
    ktl::api::push_constant_range update_range;
};

struct indirect_commands_execution_set_token_ext final
{
    ktl::api::indirect_execution_set_info_type_ext type;
    ktl::api::shader_stage_flags                   shader_stages;
};

struct pipeline_viewport_depth_clip_control_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_depth_clip_control_create_info_ext;
    const void *             next = nullptr;
    ktl::bool32              negative_one_to_one;
};

struct physical_device_depth_clamp_control_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_depth_clamp_control_features_ext;
    void *                   next = nullptr;
    ktl::bool32              depth_clamp_control;
};

struct pipeline_viewport_depth_clamp_control_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_viewport_depth_clamp_control_create_info_ext;
    const void *             next = nullptr;
    ktl::api::depth_clamp_mode_ext          depth_clamp_mode;
    const ktl::api::depth_clamp_range_ext * depth_clamp_range = nullptr;
};

struct physical_device_vertex_input_dynamic_state_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vertex_input_dynamic_state_features_ext;
    void *                   next = nullptr;
    ktl::bool32              vertex_input_dynamic_state;
};

struct physical_device_external_memory_rdmafeatures_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_memory_rdma_features_nv;
    void *                   next = nullptr;
    ktl::bool32              external_memory_rdma;
};

struct physical_device_shader_relaxed_extended_instruction_features_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_shader_relaxed_extended_instruction_features_khr;
    void *      next = nullptr;
    ktl::bool32 shader_relaxed_extended_instruction;
};

struct vertex_input_binding_description2ext final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_vertex_input_binding_description_2_ext;
    void *                      next = nullptr;
    ktl::i32                    binding;
    ktl::i32                    stride;
    ktl::api::vertex_input_rate input_rate;
    ktl::i32                    divisor;
};

struct vertex_input_attribute_description2ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_vertex_input_attribute_description_2_ext;
    void *                   next = nullptr;
    ktl::i32                 location;
    ktl::i32                 binding;
    ktl::api::format         format;
    ktl::i32                 offset;
};

struct physical_device_color_write_enable_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_color_write_enable_features_ext;
    void *                   next = nullptr;
    ktl::bool32              color_write_enable;
};

struct pipeline_color_write_create_info_ext final
{
    ktl::api::structure_type type             = ktl::api::structure_type::v_pipeline_color_write_create_info_ext;
    const void *             next             = nullptr;
    ktl::i32                 attachment_count = 0;
    const ktl::bool32 *      color_write_enables;
};

struct memory_barrier2 final
{
    ktl::api::structure_type        type            = ktl::api::structure_type::v_memory_barrier_2;
    const void *                    next            = nullptr;
    ktl::api::pipeline_stage_flags2 src_stage_mask  = 0;
    ktl::api::access_flags2         src_access_mask = 0;
    ktl::api::pipeline_stage_flags2 dst_stage_mask  = 0;
    ktl::api::access_flags2         dst_access_mask = 0;
};

using memory_barrier2khr = memory_barrier2;

struct image_memory_barrier2 final
{
    ktl::api::structure_type          type            = ktl::api::structure_type::v_image_memory_barrier_2;
    const void *                      next            = nullptr;
    ktl::api::pipeline_stage_flags2   src_stage_mask  = 0;
    ktl::api::access_flags2           src_access_mask = 0;
    ktl::api::pipeline_stage_flags2   dst_stage_mask  = 0;
    ktl::api::access_flags2           dst_access_mask = 0;
    ktl::api::image_layout            old_layout;
    ktl::api::image_layout            new_layout;
    ktl::i32                          src_queue_family_index;
    ktl::i32                          dst_queue_family_index;
    ktl::api::image                   image;
    ktl::api::image_subresource_range subresource_range;
};

using image_memory_barrier2khr = image_memory_barrier2;

struct buffer_memory_barrier2 final
{
    ktl::api::structure_type        type            = ktl::api::structure_type::v_buffer_memory_barrier_2;
    const void *                    next            = nullptr;
    ktl::api::pipeline_stage_flags2 src_stage_mask  = 0;
    ktl::api::access_flags2         src_access_mask = 0;
    ktl::api::pipeline_stage_flags2 dst_stage_mask  = 0;
    ktl::api::access_flags2         dst_access_mask = 0;
    ktl::i32                        src_queue_family_index;
    ktl::i32                        dst_queue_family_index;
    ktl::api::buffer                buffer;
    ktl::dvsize                     offset;
    ktl::dvsize                     size;
};

using buffer_memory_barrier2khr = buffer_memory_barrier2;

struct memory_barrier_access_flags3khr final
{
    ktl::api::structure_type   type             = ktl::api::structure_type::v_memory_barrier_access_flags_3_khr;
    const void *               next             = nullptr;
    ktl::api::access_flags3khr src_access_mask3 = 0;
    ktl::api::access_flags3khr dst_access_mask3 = 0;
};

struct dependency_info final
{
    ktl::api::structure_type                 type                 = ktl::api::structure_type::v_dependency_info;
    const void *                             next                 = nullptr;
    ktl::api::dependency_flags               dependency_flags     = 0;
    ktl::i32                                 memory_barrier_count = 0;
    const ktl::api::memory_barrier2 *        memory_barriers;
    ktl::i32                                 buffer_memory_barrier_count = 0;
    const ktl::api::buffer_memory_barrier2 * buffer_memory_barriers;
    ktl::i32                                 image_memory_barrier_count = 0;
    const ktl::api::image_memory_barrier2 *  image_memory_barriers;
};

using dependency_info_khr = dependency_info;

struct semaphore_submit_info final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_semaphore_submit_info;
    const void *                    next = nullptr;
    ktl::api::semaphore             semaphore;
    ktl::u64                        value;
    ktl::api::pipeline_stage_flags2 stage_mask = 0;
    ktl::i32                        device_index;
};

using semaphore_submit_info_khr = semaphore_submit_info;

struct command_buffer_submit_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_command_buffer_submit_info;
    const void *             next = nullptr;
    ktl::api::command_buffer command_buffer;
    ktl::i32                 device_mask;
};

using command_buffer_submit_info_khr = command_buffer_submit_info;

struct submit_info2 final
{
    ktl::api::structure_type                     type                      = ktl::api::structure_type::v_submit_info_2;
    const void *                                 next                      = nullptr;
    ktl::api::submit_flags                       flags                     = 0;
    ktl::i32                                     wait_semaphore_info_count = 0;
    const ktl::api::semaphore_submit_info *      wait_semaphore_infos;
    ktl::i32                                     command_buffer_info_count = 0;
    const ktl::api::command_buffer_submit_info * command_buffer_infos;
    ktl::i32                                     signal_semaphore_info_count = 0;
    const ktl::api::semaphore_submit_info *      signal_semaphore_infos;
};

using submit_info2khr = submit_info2;

struct queue_family_checkpoint_properties2nv final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_queue_family_checkpoint_properties_2_nv;
    void *                          next = nullptr;
    ktl::api::pipeline_stage_flags2 checkpoint_execution_stage_mask;
};

struct checkpoint_data2nv final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_checkpoint_data_2_nv;
    void *                          next = nullptr;
    ktl::api::pipeline_stage_flags2 stage;
    void *                          checkpoint_marker;
};

struct physical_device_synchronization2features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_synchronization_2_features;
    void *                   next = nullptr;
    ktl::bool32              synchronization2;
};

using physical_device_synchronization2features_khr = physical_device_synchronization2features;

struct physical_device_unified_image_layouts_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_unified_image_layouts_features_khr;
    void *                   next = nullptr;
    ktl::bool32              unified_image_layouts;
    ktl::bool32              unified_image_layouts_video;
};

struct physical_device_host_image_copy_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_host_image_copy_features;
    void *                   next = nullptr;
    ktl::bool32              host_image_copy;
};

using physical_device_host_image_copy_features_ext = physical_device_host_image_copy_features;

struct physical_device_host_image_copy_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_host_image_copy_properties;
    void *                   next = nullptr;
    ktl::i32                 copy_src_layout_count                         = 0;
    ktl::api::image_layout * copy_src_layouts                              = nullptr;
    ktl::i32                 copy_dst_layout_count                         = 0;
    ktl::api::image_layout * copy_dst_layouts                              = nullptr;
    ktl::u8                  optimal_tiling_layout_uuid[KTL_API_UUID_SIZE] = 0;
    ktl::bool32              identical_memory_type_requirements;
};

using physical_device_host_image_copy_properties_ext = physical_device_host_image_copy_properties;

struct memory_to_image_copy final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_memory_to_image_copy;
    const void *                       next = nullptr;
    const void *                       host_pointer;
    ktl::i32                           memory_row_length;
    ktl::i32                           memory_image_height;
    ktl::api::image_subresource_layers image_subresource;
    ktl::api::offset3d                 image_offset;
    ktl::api::extent3d                 image_extent;
};

using memory_to_image_copy_ext = memory_to_image_copy;

struct image_to_memory_copy final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_image_to_memory_copy;
    const void *                       next = nullptr;
    void *                             host_pointer;
    ktl::i32                           memory_row_length;
    ktl::i32                           memory_image_height;
    ktl::api::image_subresource_layers image_subresource;
    ktl::api::offset3d                 image_offset;
    ktl::api::extent3d                 image_extent;
};

using image_to_memory_copy_ext = image_to_memory_copy;

struct copy_memory_to_image_info final
{
    ktl::api::structure_type               type  = ktl::api::structure_type::v_copy_memory_to_image_info;
    const void *                           next  = nullptr;
    ktl::api::host_image_copy_flags        flags = 0;
    ktl::api::image                        dst_image;
    ktl::api::image_layout                 dst_image_layout;
    ktl::i32                               region_count;
    const ktl::api::memory_to_image_copy * regions;
};

using copy_memory_to_image_info_ext = copy_memory_to_image_info;

struct copy_image_to_memory_info final
{
    ktl::api::structure_type               type  = ktl::api::structure_type::v_copy_image_to_memory_info;
    const void *                           next  = nullptr;
    ktl::api::host_image_copy_flags        flags = 0;
    ktl::api::image                        src_image;
    ktl::api::image_layout                 src_image_layout;
    ktl::i32                               region_count;
    const ktl::api::image_to_memory_copy * regions;
};

using copy_image_to_memory_info_ext = copy_image_to_memory_info;

struct copy_image_to_image_info final
{
    ktl::api::structure_type        type  = ktl::api::structure_type::v_copy_image_to_image_info;
    const void *                    next  = nullptr;
    ktl::api::host_image_copy_flags flags = 0;
    ktl::api::image                 src_image;
    ktl::api::image_layout          src_image_layout;
    ktl::api::image                 dst_image;
    ktl::api::image_layout          dst_image_layout;
    ktl::i32                        region_count;
    const ktl::api::image_copy2 *   regions;
};

using copy_image_to_image_info_ext = copy_image_to_image_info;

struct host_image_layout_transition_info final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_host_image_layout_transition_info;
    const void *                      next = nullptr;
    ktl::api::image                   image;
    ktl::api::image_layout            old_layout;
    ktl::api::image_layout            new_layout;
    ktl::api::image_subresource_range subresource_range;
};

using host_image_layout_transition_info_ext = host_image_layout_transition_info;

struct subresource_host_memcpy_size final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_subresource_host_memcpy_size;
    void *                   next = nullptr;
    ktl::dvsize              size;
};

using subresource_host_memcpy_size_ext = subresource_host_memcpy_size;

struct host_image_copy_device_performance_query final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_host_image_copy_device_performance_query;
    void *                   next = nullptr;
    ktl::bool32              optimal_device_access;
    ktl::bool32              identical_memory_layout;
};

using host_image_copy_device_performance_query_ext = host_image_copy_device_performance_query;

struct physical_device_vulkan_sc10properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_sc_1_0_properties;
    void *                   next = nullptr;
    ktl::bool32              device_no_dynamic_host_allocations;
    ktl::bool32              device_destroy_frees_memory;
    ktl::bool32              command_pool_multiple_command_buffers_recording;
    ktl::bool32              command_pool_reset_command_buffer;
    ktl::bool32              command_buffer_simultaneous_use;
    ktl::bool32              secondary_command_buffer_null_or_imageless_framebuffer;
    ktl::bool32              recycle_descriptor_set_memory;
    ktl::bool32              recycle_pipeline_memory;
    ktl::i32                 max_render_pass_subpasses;
    ktl::i32                 max_render_pass_dependencies;
    ktl::i32                 max_subpass_input_attachments;
    ktl::i32                 max_subpass_preserve_attachments;
    ktl::i32                 max_framebuffer_attachments;
    ktl::i32                 max_descriptor_set_layout_bindings;
    ktl::i32                 max_query_fault_count;
    ktl::i32                 max_callback_fault_count;
    ktl::i32                 max_command_pool_command_buffers;
    ktl::dvsize              max_command_buffer_size;
};

struct pipeline_pool_size final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_pool_size;
    const void *             next = nullptr;
    ktl::dvsize              pool_entry_size;
    ktl::i32                 pool_entry_count;
};

struct device_object_reservation_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_object_reservation_create_info;
    const void *             next = nullptr;
    ktl::i32                 pipeline_cache_create_info_count = 0;
    const ktl::api::pipeline_cache_create_info * pipeline_cache_create_infos;
    ktl::i32                                     pipeline_pool_size_count = 0;
    const ktl::api::pipeline_pool_size *         pipeline_pool_sizes;
    ktl::i32                                     semaphore_request_count                     = 0;
    ktl::i32                                     command_buffer_request_count                = 0;
    ktl::i32                                     fence_request_count                         = 0;
    ktl::i32                                     device_memory_request_count                 = 0;
    ktl::i32                                     buffer_request_count                        = 0;
    ktl::i32                                     image_request_count                         = 0;
    ktl::i32                                     event_request_count                         = 0;
    ktl::i32                                     query_pool_request_count                    = 0;
    ktl::i32                                     buffer_view_request_count                   = 0;
    ktl::i32                                     image_view_request_count                    = 0;
    ktl::i32                                     layered_image_view_request_count            = 0;
    ktl::i32                                     pipeline_cache_request_count                = 0;
    ktl::i32                                     pipeline_layout_request_count               = 0;
    ktl::i32                                     render_pass_request_count                   = 0;
    ktl::i32                                     graphics_pipeline_request_count             = 0;
    ktl::i32                                     compute_pipeline_request_count              = 0;
    ktl::i32                                     descriptor_set_layout_request_count         = 0;
    ktl::i32                                     sampler_request_count                       = 0;
    ktl::i32                                     descriptor_pool_request_count               = 0;
    ktl::i32                                     descriptor_set_request_count                = 0;
    ktl::i32                                     framebuffer_request_count                   = 0;
    ktl::i32                                     command_pool_request_count                  = 0;
    ktl::i32                                     sampler_ycbcr_conversion_request_count      = 0;
    ktl::i32                                     surface_request_count                       = 0;
    ktl::i32                                     swapchain_request_count                     = 0;
    ktl::i32                                     display_mode_request_count                  = 0;
    ktl::i32                                     subpass_description_request_count           = 0;
    ktl::i32                                     attachment_description_request_count        = 0;
    ktl::i32                                     descriptor_set_layout_binding_request_count = 0;
    ktl::i32                                     descriptor_set_layout_binding_limit;
    ktl::i32                                     max_image_view_mip_levels;
    ktl::i32                                     max_image_view_array_layers;
    ktl::i32                                     max_layered_image_view_mip_levels;
    ktl::i32                                     max_occlusion_queries_per_pool;
    ktl::i32                                     max_pipeline_statistics_queries_per_pool;
    ktl::i32                                     max_timestamp_queries_per_pool;
    ktl::i32                                     max_immutable_samplers_per_descriptor_set_layout;
};

struct command_pool_memory_reservation_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_command_pool_memory_reservation_create_info;
    const void *             next = nullptr;
    ktl::dvsize              command_pool_reserved_size;
    ktl::i32                 command_pool_max_command_buffers;
};

struct command_pool_memory_consumption final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_command_pool_memory_consumption;
    void *                   next = nullptr;
    ktl::dvsize              command_pool_allocated;
    ktl::dvsize              command_pool_reserved_size;
    ktl::dvsize              command_buffer_allocated;
};

struct physical_device_vulkan_sc10features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_vulkan_sc_1_0_features;
    void *                   next = nullptr;
    ktl::bool32              shader_atomic_instructions;
};

struct physical_device_primitives_generated_query_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_primitives_generated_query_features_ext;
    void *                   next = nullptr;
    ktl::bool32              primitives_generated_query;
    ktl::bool32              primitives_generated_query_with_rasterizer_discard;
    ktl::bool32              primitives_generated_query_with_non_zero_streams;
};

struct physical_device_legacy_dithering_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_legacy_dithering_features_ext;
    void *                   next = nullptr;
    ktl::bool32              legacy_dithering;
};

struct physical_device_multisampled_render_to_single_sampled_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_multisampled_render_to_single_sampled_features_ext;
    void *      next = nullptr;
    ktl::bool32 multisampled_render_to_single_sampled;
};

struct surface_capabilities_present_id2khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_surface_capabilities_present_id_2_khr;
    void *                   next = nullptr;
    ktl::bool32              present_id2supported;
};

struct surface_capabilities_present_wait2khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_surface_capabilities_present_wait_2_khr;
    void *                   next = nullptr;
    ktl::bool32              present_wait2supported;
};

struct subpass_resolve_performance_query_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_subpass_resolve_performance_query_ext;
    void *                   next = nullptr;
    ktl::bool32              optimal;
};

struct multisampled_render_to_single_sampled_info_ext final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_multisampled_render_to_single_sampled_info_ext;
    const void *                     next = nullptr;
    ktl::bool32                      multisampled_render_to_single_sampled_enable;
    ktl::api::sample_count_flag_bits rasterization_samples;
};

struct physical_device_pipeline_protected_access_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_protected_access_features;
    void *                   next = nullptr;
    ktl::bool32              pipeline_protected_access;
};

using physical_device_pipeline_protected_access_features_ext = physical_device_pipeline_protected_access_features;

struct queue_family_video_properties_khr final
{
    ktl::api::structure_type                  type = ktl::api::structure_type::v_queue_family_video_properties_khr;
    void *                                    next = nullptr;
    ktl::api::video_codec_operation_flags_khr video_codec_operations;
};

struct queue_family_query_result_status_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_query_result_status_properties_khr;
    void *                   next = nullptr;
    ktl::bool32              query_result_status_support;
};

struct video_profile_list_info_khr final
{
    ktl::api::structure_type                 type          = ktl::api::structure_type::v_video_profile_list_info_khr;
    const void *                             next          = nullptr;
    ktl::i32                                 profile_count = 0;
    const ktl::api::video_profile_info_khr * profiles;
};

struct physical_device_video_format_info_khr final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_physical_device_video_format_info_khr;
    const void *                next = nullptr;
    ktl::api::image_usage_flags image_usage;
};

struct video_format_properties_khr final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_video_format_properties_khr;
    void *                       next = nullptr;
    ktl::api::format             format;
    ktl::api::component_mapping  component_mapping;
    ktl::api::image_create_flags image_create_flags;
    ktl::api::image_type         image_type;
    ktl::api::image_tiling       image_tiling;
    ktl::api::image_usage_flags  image_usage_flags;
};

struct video_encode_quantization_map_capabilities_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_quantization_map_capabilities_khr;
    void *                   next = nullptr;
    ktl::api::extent2d       max_quantization_map_extent;
};

struct video_encode_h264quantization_map_capabilities_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_quantization_map_capabilities_khr;
    void *                   next = nullptr;
    ktl::i32                 min_qp_delta;
    ktl::i32                 max_qp_delta;
};

struct video_encode_h265quantization_map_capabilities_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_quantization_map_capabilities_khr;
    void *                   next = nullptr;
    ktl::i32                 min_qp_delta;
    ktl::i32                 max_qp_delta;
};

struct video_encode_av1quantization_map_capabilities_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_av1_quantization_map_capabilities_khr;
    void *                   next = nullptr;
    ktl::i32                 min_qindex_delta;
    ktl::i32                 max_qindex_delta;
};

struct video_format_quantization_map_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_format_quantization_map_properties_khr;
    void *                   next = nullptr;
    ktl::api::extent2d       quantization_map_texel_size;
};

struct video_format_h265quantization_map_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_format_h265_quantization_map_properties_khr;
    void *                   next = nullptr;
    ktl::api::video_encode_h265ctb_size_flags_khr compatible_ctb_sizes;
};

struct video_format_av1quantization_map_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_format_av1_quantization_map_properties_khr;
    void *                   next = nullptr;
    ktl::api::video_encode_av1superblock_size_flags_khr compatible_superblock_sizes;
};

struct video_profile_info_khr final
{
    ktl::api::structure_type                      type = ktl::api::structure_type::v_video_profile_info_khr;
    const void *                                  next = nullptr;
    ktl::api::video_codec_operation_flag_bits_khr video_codec_operation;
    ktl::api::video_chroma_subsampling_flags_khr  chroma_subsampling;
    ktl::api::video_component_bit_depth_flags_khr luma_bit_depth;
    ktl::api::video_component_bit_depth_flags_khr chroma_bit_depth = 0;
};

struct video_capabilities_khr final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_video_capabilities_khr;
    void *                               next = nullptr;
    ktl::api::video_capability_flags_khr flags;
    ktl::dvsize                          min_bitstream_buffer_offset_alignment;
    ktl::dvsize                          min_bitstream_buffer_size_alignment;
    ktl::api::extent2d                   picture_access_granularity;
    ktl::api::extent2d                   min_coded_extent;
    ktl::api::extent2d                   max_coded_extent;
    ktl::i32                             max_dpb_slots;
    ktl::i32                             max_active_reference_pictures;
    ktl::api::extension_properties       std_header_version;
};

struct video_session_memory_requirements_khr final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_video_session_memory_requirements_khr;
    void *                        next = nullptr;
    ktl::i32                      memory_bind_index;
    ktl::api::memory_requirements memory_requirements;
};

struct bind_video_session_memory_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_bind_video_session_memory_info_khr;
    const void *             next = nullptr;
    ktl::i32                 memory_bind_index;
    ktl::api::device_memory  memory;
    ktl::dvsize              memory_offset;
    ktl::dvsize              memory_size;
};

struct video_picture_resource_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_picture_resource_info_khr;
    const void *             next = nullptr;
    ktl::api::offset2d       coded_offset;
    ktl::api::extent2d       coded_extent;
    ktl::i32                 base_array_layer;
    ktl::api::image_view     image_view_binding;
};

struct video_reference_slot_info_khr final
{
    ktl::api::structure_type                          type = ktl::api::structure_type::v_video_reference_slot_info_khr;
    const void *                                      next = nullptr;
    ktl::i32                                          slot_index;
    const ktl::api::video_picture_resource_info_khr * picture_resource = nullptr;
};

struct video_decode_capabilities_khr final
{
    ktl::api::structure_type                    type = ktl::api::structure_type::v_video_decode_capabilities_khr;
    void *                                      next = nullptr;
    ktl::api::video_decode_capability_flags_khr flags;
};

struct video_decode_usage_info_khr final
{
    ktl::api::structure_type               type              = ktl::api::structure_type::v_video_decode_usage_info_khr;
    const void *                           next              = nullptr;
    ktl::api::video_decode_usage_flags_khr video_usage_hints = 0;
};

struct video_decode_info_khr final
{
    ktl::api::structure_type                        type  = ktl::api::structure_type::v_video_decode_info_khr;
    const void *                                    next  = nullptr;
    ktl::api::video_decode_flags_khr                flags = 0;
    ktl::api::buffer                                src_buffer;
    ktl::dvsize                                     src_buffer_offset;
    ktl::dvsize                                     src_buffer_range;
    ktl::api::video_picture_resource_info_khr       dst_picture_resource;
    const ktl::api::video_reference_slot_info_khr * setup_reference_slot = nullptr;
    ktl::i32                                        reference_slot_count = 0;
    const ktl::api::video_reference_slot_info_khr * reference_slots;
};

struct physical_device_video_maintenance1features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_video_maintenance_1_features_khr;
    void *                   next = nullptr;
    ktl::bool32              video_maintenance1;
};

struct physical_device_video_maintenance2features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_video_maintenance_2_features_khr;
    void *                   next = nullptr;
    ktl::bool32              video_maintenance2;
};

struct video_inline_query_info_khr final
{
    ktl::api::structure_type type       = ktl::api::structure_type::v_video_inline_query_info_khr;
    const void *             next       = nullptr;
    ktl::api::query_pool     query_pool = 0;
    ktl::i32                 first_query;
    ktl::i32                 query_count;
};

struct video_decode_h264profile_info_khr final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_video_decode_h264_profile_info_khr;
    const void *                        next = nullptr;
    ktl::api::std_video_h264profile_idc std_profile_idc;
    ktl::api::video_decode_h264picture_layout_flag_bits_khr picture_layout = 0;
};

struct video_decode_h264capabilities_khr final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_video_decode_h264_capabilities_khr;
    void *                            next = nullptr;
    ktl::api::std_video_h264level_idc max_level_idc;
    ktl::api::offset2d                field_offset_granularity;
};

struct video_decode_h264session_parameters_add_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_h264_session_parameters_add_info_khr;
    const void *             next = nullptr;
    ktl::i32                 std_spscount = 0;
    const ktl::api::std_video_h264sequence_parameter_set * std_spss;
    ktl::i32                                               std_ppscount = 0;
    const ktl::api::std_video_h264picture_parameter_set *  std_ppss;
};

struct video_decode_h264session_parameters_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_h264_session_parameters_create_info_khr;
    const void *             next = nullptr;
    ktl::i32                 max_std_spscount;
    ktl::i32                 max_std_ppscount;
    const ktl::api::video_decode_h264session_parameters_add_info_khr * parameters_add_info = nullptr;
};

struct video_decode_h264inline_session_parameters_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_h264_inline_session_parameters_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_h264sequence_parameter_set * std_sps = nullptr;
    const ktl::api::std_video_h264picture_parameter_set *  std_pps = nullptr;
};

struct video_decode_h264picture_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_h264_picture_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_decode_h264picture_info * std_picture_info;
    ktl::i32                                            slice_count;
    const ktl::i32 *                                    slice_offsets;
};

struct video_decode_h264dpb_slot_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_h264_dpb_slot_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_decode_h264reference_info * std_reference_info;
};

struct video_decode_h265profile_info_khr final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_video_decode_h265_profile_info_khr;
    const void *                        next = nullptr;
    ktl::api::std_video_h265profile_idc std_profile_idc;
};

struct video_decode_h265capabilities_khr final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_video_decode_h265_capabilities_khr;
    void *                            next = nullptr;
    ktl::api::std_video_h265level_idc max_level_idc;
};

struct video_decode_h265session_parameters_add_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_h265_session_parameters_add_info_khr;
    const void *             next = nullptr;
    ktl::i32                 std_vpscount = 0;
    const ktl::api::std_video_h265video_parameter_set *    std_vpss;
    ktl::i32                                               std_spscount = 0;
    const ktl::api::std_video_h265sequence_parameter_set * std_spss;
    ktl::i32                                               std_ppscount = 0;
    const ktl::api::std_video_h265picture_parameter_set *  std_ppss;
};

struct video_decode_h265session_parameters_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_h265_session_parameters_create_info_khr;
    const void *             next = nullptr;
    ktl::i32                 max_std_vpscount;
    ktl::i32                 max_std_spscount;
    ktl::i32                 max_std_ppscount;
    const ktl::api::video_decode_h265session_parameters_add_info_khr * parameters_add_info = nullptr;
};

struct video_decode_h265inline_session_parameters_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_h265_inline_session_parameters_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_h265video_parameter_set *    std_vps = nullptr;
    const ktl::api::std_video_h265sequence_parameter_set * std_sps = nullptr;
    const ktl::api::std_video_h265picture_parameter_set *  std_pps = nullptr;
};

struct video_decode_h265picture_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_h265_picture_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_decode_h265picture_info * std_picture_info;
    ktl::i32                                            slice_segment_count;
    const ktl::i32 *                                    slice_segment_offsets;
};

struct video_decode_h265dpb_slot_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_h265_dpb_slot_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_decode_h265reference_info * std_reference_info;
};

struct physical_device_video_decode_vp9features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_video_decode_vp9_features_khr;
    void *                   next = nullptr;
    ktl::bool32              video_decode_vp9;
};

struct video_decode_vp9profile_info_khr final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_video_decode_vp9_profile_info_khr;
    const void *                   next = nullptr;
    ktl::api::std_video_vp9profile std_profile;
};

struct video_decode_vp9capabilities_khr final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_video_decode_vp9_capabilities_khr;
    void *                       next = nullptr;
    ktl::api::std_video_vp9level max_level;
};

struct video_decode_vp9picture_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_vp9_picture_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_decode_vp9picture_info * std_picture_info;
    ktl::i32 reference_name_slot_indices[KTL_API_MAX_VIDEO_VP9_REFERENCES_PER_FRAME_KHR];
    ktl::i32 uncompressed_header_offset;
    ktl::i32 compressed_header_offset;
    ktl::i32 tiles_offset;
};

struct video_decode_av1profile_info_khr final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_video_decode_av1_profile_info_khr;
    const void *                   next = nullptr;
    ktl::api::std_video_av1profile std_profile;
    ktl::bool32                    film_grain_support;
};

struct video_decode_av1capabilities_khr final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_video_decode_av1_capabilities_khr;
    void *                       next = nullptr;
    ktl::api::std_video_av1level max_level;
};

struct video_decode_av1session_parameters_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_av1_session_parameters_create_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_av1sequence_header * std_sequence_header;
};

struct video_decode_av1inline_session_parameters_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_av1_inline_session_parameters_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_av1sequence_header * std_sequence_header = nullptr;
};

struct video_decode_av1picture_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_av1_picture_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_decode_av1picture_info * std_picture_info;
    ktl::i32         reference_name_slot_indices[KTL_API_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR];
    ktl::i32         frame_header_offset;
    ktl::i32         tile_count;
    const ktl::i32 * tile_offsets;
    const ktl::i32 * tile_sizes;
};

struct video_decode_av1dpb_slot_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_decode_av1_dpb_slot_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_decode_av1reference_info * std_reference_info;
};

struct video_session_create_info_khr final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_video_session_create_info_khr;
    const void *                             next = nullptr;
    ktl::i32                                 queue_family_index;
    ktl::api::video_session_create_flags_khr flags = 0;
    const ktl::api::video_profile_info_khr * video_profile;
    ktl::api::format                         picture_format;
    ktl::api::extent2d                       max_coded_extent;
    ktl::api::format                         reference_picture_format;
    ktl::i32                                 max_dpb_slots;
    ktl::i32                                 max_active_reference_pictures;
    const ktl::api::extension_properties *   std_header_version;
};

struct video_session_parameters_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_session_parameters_create_info_khr;
    const void *             next = nullptr;
    ktl::api::video_session_parameters_create_flags_khr flags                             = 0;
    ktl::api::video_session_parameters_khr              video_session_parameters_template = 0;
    ktl::api::video_session_khr                         video_session;
};

struct video_session_parameters_update_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_session_parameters_update_info_khr;
    const void *             next = nullptr;
    ktl::i32                 update_sequence_count;
};

struct video_encode_session_parameters_get_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_session_parameters_get_info_khr;
    const void *             next = nullptr;
    ktl::api::video_session_parameters_khr video_session_parameters;
};

struct video_encode_session_parameters_feedback_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_session_parameters_feedback_info_khr;
    void *                   next = nullptr;
    ktl::bool32              has_overrides;
};

struct video_begin_coding_info_khr final
{
    ktl::api::structure_type                        type  = ktl::api::structure_type::v_video_begin_coding_info_khr;
    const void *                                    next  = nullptr;
    ktl::api::video_begin_coding_flags_khr          flags = 0;
    ktl::api::video_session_khr                     video_session;
    ktl::api::video_session_parameters_khr          video_session_parameters = 0;
    ktl::i32                                        reference_slot_count     = 0;
    const ktl::api::video_reference_slot_info_khr * reference_slots;
};

struct video_end_coding_info_khr final
{
    ktl::api::structure_type             type  = ktl::api::structure_type::v_video_end_coding_info_khr;
    const void *                         next  = nullptr;
    ktl::api::video_end_coding_flags_khr flags = 0;
};

struct video_coding_control_info_khr final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_video_coding_control_info_khr;
    const void *                             next = nullptr;
    ktl::api::video_coding_control_flags_khr flags;
};

struct video_encode_usage_info_khr final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_video_encode_usage_info_khr;
    const void *                             next = nullptr;
    ktl::api::video_encode_usage_flags_khr   video_usage_hints   = 0;
    ktl::api::video_encode_content_flags_khr video_content_hints = 0;
    ktl::api::video_encode_tuning_mode_khr   tuning_mode         = 0;
};

struct video_encode_info_khr final
{
    ktl::api::structure_type                        type  = ktl::api::structure_type::v_video_encode_info_khr;
    const void *                                    next  = nullptr;
    ktl::api::video_encode_flags_khr                flags = 0;
    ktl::api::buffer                                dst_buffer;
    ktl::dvsize                                     dst_buffer_offset;
    ktl::dvsize                                     dst_buffer_range;
    ktl::api::video_picture_resource_info_khr       src_picture_resource;
    const ktl::api::video_reference_slot_info_khr * setup_reference_slot = nullptr;
    ktl::i32                                        reference_slot_count = 0;
    const ktl::api::video_reference_slot_info_khr * reference_slots;
    ktl::i32                                        preceding_externally_encoded_bytes;
};

struct video_encode_quantization_map_info_khr final
{
    ktl::api::structure_type type             = ktl::api::structure_type::v_video_encode_quantization_map_info_khr;
    const void *             next             = nullptr;
    ktl::api::image_view     quantization_map = 0;
    ktl::api::extent2d       quantization_map_extent;
};

struct video_encode_quantization_map_session_parameters_create_info_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_video_encode_quantization_map_session_parameters_create_info_khr;
    const void *       next = nullptr;
    ktl::api::extent2d quantization_map_texel_size;
};

struct physical_device_video_encode_quantization_map_features_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_video_encode_quantization_map_features_khr;
    void *      next = nullptr;
    ktl::bool32 video_encode_quantization_map;
};

struct query_pool_video_encode_feedback_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_query_pool_video_encode_feedback_create_info_khr;
    const void *             next = nullptr;
    ktl::api::video_encode_feedback_flags_khr encode_feedback_flags;
};

struct video_encode_quality_level_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_quality_level_info_khr;
    const void *             next = nullptr;
    ktl::i32                 quality_level;
};

struct physical_device_video_encode_quality_level_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_video_encode_quality_level_info_khr;
    const void *             next = nullptr;
    const ktl::api::video_profile_info_khr * video_profile;
    ktl::i32                                 quality_level;
};

struct video_encode_quality_level_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_quality_level_properties_khr;
    void *                   next = nullptr;
    ktl::api::video_encode_rate_control_mode_flag_bits_khr preferred_rate_control_mode;
    ktl::i32                                               preferred_rate_control_layer_count;
};

struct video_encode_rate_control_info_khr final
{
    ktl::api::structure_type                      type = ktl::api::structure_type::v_video_encode_rate_control_info_khr;
    const void *                                  next = nullptr;
    ktl::api::video_encode_rate_control_flags_khr flags                          = 0;
    ktl::api::video_encode_rate_control_mode_flag_bits_khr     rate_control_mode = 0;
    ktl::i32                                                   layer_count       = 0;
    const ktl::api::video_encode_rate_control_layer_info_khr * layers;
    ktl::i32                                                   virtual_buffer_size_in_ms;
    ktl::i32                                                   initial_virtual_buffer_size_in_ms;
};

struct video_encode_rate_control_layer_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_rate_control_layer_info_khr;
    const void *             next = nullptr;
    ktl::u64                 average_bitrate;
    ktl::u64                 max_bitrate;
    ktl::i32                 frame_rate_numerator;
    ktl::i32                 frame_rate_denominator;
};

struct video_encode_capabilities_khr final
{
    ktl::api::structure_type                           type = ktl::api::structure_type::v_video_encode_capabilities_khr;
    void *                                             next = nullptr;
    ktl::api::video_encode_capability_flags_khr        flags;
    ktl::api::video_encode_rate_control_mode_flags_khr rate_control_modes;
    ktl::i32                                           max_rate_control_layers;
    ktl::u64                                           max_bitrate;
    ktl::i32                                           max_quality_levels;
    ktl::api::extent2d                                 encode_input_picture_granularity;
    ktl::api::video_encode_feedback_flags_khr          supported_encode_feedback_flags;
};

struct video_encode_h264capabilities_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_capabilities_khr;
    void *                   next = nullptr;
    ktl::api::video_encode_h264capability_flags_khr flags;
    ktl::api::std_video_h264level_idc               max_level_idc;
    ktl::i32                                        max_slice_count;
    ktl::i32                                        max_ppicture_l0reference_count;
    ktl::i32                                        max_bpicture_l0reference_count;
    ktl::i32                                        max_l1reference_count;
    ktl::i32                                        max_temporal_layer_count;
    ktl::bool32                                     expect_dyadic_temporal_layer_pattern;
    ktl::i32                                        min_qp;
    ktl::i32                                        max_qp;
    ktl::bool32                                     prefers_gop_remaining_frames;
    ktl::bool32                                     requires_gop_remaining_frames;
    ktl::api::video_encode_h264std_flags_khr        std_syntax_flags;
};

struct video_encode_h264quality_level_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_quality_level_properties_khr;
    void *                   next = nullptr;
    ktl::api::video_encode_h264rate_control_flags_khr preferred_rate_control_flags;
    ktl::i32                                          preferred_gop_frame_count;
    ktl::i32                                          preferred_idr_period;
    ktl::i32                                          preferred_consecutive_bframe_count;
    ktl::i32                                          preferred_temporal_layer_count;
    ktl::api::video_encode_h264qp_khr                 preferred_constant_qp;
    ktl::i32                                          preferred_max_l0reference_count;
    ktl::i32                                          preferred_max_l1reference_count;
    ktl::bool32                                       preferred_std_entropy_coding_mode_flag;
};

struct video_encode_h264session_create_info_khr final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_video_encode_h264_session_create_info_khr;
    const void *                      next = nullptr;
    ktl::bool32                       use_max_level_idc;
    ktl::api::std_video_h264level_idc max_level_idc;
};

struct video_encode_h264session_parameters_add_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_session_parameters_add_info_khr;
    const void *             next = nullptr;
    ktl::i32                 std_spscount                               = 0;
    const ktl::api::std_video_h264sequence_parameter_set * std_spss     = nullptr;
    ktl::i32                                               std_ppscount = 0;
    const ktl::api::std_video_h264picture_parameter_set *  std_ppss     = nullptr;
};

struct video_encode_h264session_parameters_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_session_parameters_create_info_khr;
    const void *             next = nullptr;
    ktl::i32                 max_std_spscount;
    ktl::i32                 max_std_ppscount;
    const ktl::api::video_encode_h264session_parameters_add_info_khr * parameters_add_info = nullptr;
};

struct video_encode_h264session_parameters_get_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_session_parameters_get_info_khr;
    const void *             next = nullptr;
    ktl::bool32              write_std_sps;
    ktl::bool32              write_std_pps;
    ktl::i32                 std_spsid;
    ktl::i32                 std_ppsid;
};

struct video_encode_h264session_parameters_feedback_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_session_parameters_feedback_info_khr;
    void *                   next = nullptr;
    ktl::bool32              has_std_spsoverrides;
    ktl::bool32              has_std_ppsoverrides;
};

struct video_encode_h264dpb_slot_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_dpb_slot_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_encode_h264reference_info * std_reference_info;
};

struct video_encode_h264picture_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_picture_info_khr;
    const void *             next = nullptr;
    ktl::i32                 nalu_slice_entry_count;
    const ktl::api::video_encode_h264nalu_slice_info_khr * nalu_slice_entries;
    const ktl::api::std_video_encode_h264picture_info *    std_picture_info;
    ktl::bool32                                            generate_prefix_nalu;
};

struct video_encode_h264profile_info_khr final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_video_encode_h264_profile_info_khr;
    const void *                        next = nullptr;
    ktl::api::std_video_h264profile_idc std_profile_idc;
};

struct video_encode_h264nalu_slice_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_nalu_slice_info_khr;
    const void *             next = nullptr;
    const ktl::i32           constant_qp;
    const ktl::api::std_video_encode_h264slice_header * std_slice_header;
};

struct video_encode_h264rate_control_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_rate_control_info_khr;
    const void *             next = nullptr;
    ktl::api::video_encode_h264rate_control_flags_khr flags = 0;
    ktl::i32                                          gop_frame_count;
    ktl::i32                                          idr_period;
    ktl::i32                                          consecutive_bframe_count;
    ktl::i32                                          temporal_layer_count;
};

struct video_encode_h264qp_khr final
{
    ktl::i32 qp_i;
    ktl::i32 qp_p;
    ktl::i32 qp_b;
};

struct video_encode_h264frame_size_khr final
{
    ktl::i32 frame_isize;
    ktl::i32 frame_psize;
    ktl::i32 frame_bsize;
};

struct video_encode_h264gop_remaining_frame_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h264_gop_remaining_frame_info_khr;
    const void *             next = nullptr;
    ktl::bool32              use_gop_remaining_frames;
    ktl::i32                 gop_remaining_i;
    ktl::i32                 gop_remaining_p;
    ktl::i32                 gop_remaining_b;
};

struct video_encode_h264rate_control_layer_info_khr final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_video_encode_h264_rate_control_layer_info_khr;
    const void *                      next = nullptr;
    ktl::bool32                       use_min_qp;
    ktl::api::video_encode_h264qp_khr min_qp;
    ktl::bool32                       use_max_qp;
    ktl::api::video_encode_h264qp_khr max_qp;
    ktl::bool32                       use_max_frame_size;
    ktl::api::video_encode_h264frame_size_khr max_frame_size;
};

struct video_encode_h265capabilities_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_capabilities_khr;
    void *                   next = nullptr;
    ktl::api::video_encode_h265capability_flags_khr           flags;
    ktl::api::std_video_h265level_idc                         max_level_idc;
    ktl::i32                                                  max_slice_segment_count;
    ktl::api::extent2d                                        max_tiles;
    ktl::api::video_encode_h265ctb_size_flags_khr             ctb_sizes;
    ktl::api::video_encode_h265transform_block_size_flags_khr transform_block_sizes;
    ktl::i32                                                  max_ppicture_l0reference_count;
    ktl::i32                                                  max_bpicture_l0reference_count;
    ktl::i32                                                  max_l1reference_count;
    ktl::i32                                                  max_sub_layer_count;
    ktl::bool32                                               expect_dyadic_temporal_sub_layer_pattern;
    ktl::i32                                                  min_qp;
    ktl::i32                                                  max_qp;
    ktl::bool32                                               prefers_gop_remaining_frames;
    ktl::bool32                                               requires_gop_remaining_frames;
    ktl::api::video_encode_h265std_flags_khr                  std_syntax_flags;
};

struct video_encode_h265quality_level_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_quality_level_properties_khr;
    void *                   next = nullptr;
    ktl::api::video_encode_h265rate_control_flags_khr preferred_rate_control_flags;
    ktl::i32                                          preferred_gop_frame_count;
    ktl::i32                                          preferred_idr_period;
    ktl::i32                                          preferred_consecutive_bframe_count;
    ktl::i32                                          preferred_sub_layer_count;
    ktl::api::video_encode_h265qp_khr                 preferred_constant_qp;
    ktl::i32                                          preferred_max_l0reference_count;
    ktl::i32                                          preferred_max_l1reference_count;
};

struct video_encode_h265session_create_info_khr final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_video_encode_h265_session_create_info_khr;
    const void *                      next = nullptr;
    ktl::bool32                       use_max_level_idc;
    ktl::api::std_video_h265level_idc max_level_idc;
};

struct video_encode_h265session_parameters_add_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_session_parameters_add_info_khr;
    const void *             next = nullptr;
    ktl::i32                 std_vpscount                               = 0;
    const ktl::api::std_video_h265video_parameter_set *    std_vpss     = nullptr;
    ktl::i32                                               std_spscount = 0;
    const ktl::api::std_video_h265sequence_parameter_set * std_spss     = nullptr;
    ktl::i32                                               std_ppscount = 0;
    const ktl::api::std_video_h265picture_parameter_set *  std_ppss     = nullptr;
};

struct video_encode_h265session_parameters_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_session_parameters_create_info_khr;
    const void *             next = nullptr;
    ktl::i32                 max_std_vpscount;
    ktl::i32                 max_std_spscount;
    ktl::i32                 max_std_ppscount;
    const ktl::api::video_encode_h265session_parameters_add_info_khr * parameters_add_info = nullptr;
};

struct video_encode_h265session_parameters_get_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_session_parameters_get_info_khr;
    const void *             next = nullptr;
    ktl::bool32              write_std_vps;
    ktl::bool32              write_std_sps;
    ktl::bool32              write_std_pps;
    ktl::i32                 std_vpsid;
    ktl::i32                 std_spsid;
    ktl::i32                 std_ppsid;
};

struct video_encode_h265session_parameters_feedback_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_session_parameters_feedback_info_khr;
    void *                   next = nullptr;
    ktl::bool32              has_std_vpsoverrides;
    ktl::bool32              has_std_spsoverrides;
    ktl::bool32              has_std_ppsoverrides;
};

struct video_encode_h265picture_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_picture_info_khr;
    const void *             next = nullptr;
    ktl::i32                 nalu_slice_segment_entry_count;
    const ktl::api::video_encode_h265nalu_slice_segment_info_khr * nalu_slice_segment_entries;
    const ktl::api::std_video_encode_h265picture_info *            std_picture_info;
};

struct video_encode_h265nalu_slice_segment_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_nalu_slice_segment_info_khr;
    const void *             next = nullptr;
    const ktl::i32           constant_qp;
    const ktl::api::std_video_encode_h265slice_segment_header * std_slice_segment_header;
};

struct video_encode_h265rate_control_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_rate_control_info_khr;
    const void *             next = nullptr;
    ktl::api::video_encode_h265rate_control_flags_khr flags = 0;
    ktl::i32                                          gop_frame_count;
    ktl::i32                                          idr_period;
    ktl::i32                                          consecutive_bframe_count;
    ktl::i32                                          sub_layer_count;
};

struct video_encode_h265qp_khr final
{
    ktl::i32 qp_i;
    ktl::i32 qp_p;
    ktl::i32 qp_b;
};

struct video_encode_h265frame_size_khr final
{
    ktl::i32 frame_isize;
    ktl::i32 frame_psize;
    ktl::i32 frame_bsize;
};

struct video_encode_h265gop_remaining_frame_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_gop_remaining_frame_info_khr;
    const void *             next = nullptr;
    ktl::bool32              use_gop_remaining_frames;
    ktl::i32                 gop_remaining_i;
    ktl::i32                 gop_remaining_p;
    ktl::i32                 gop_remaining_b;
};

struct video_encode_h265rate_control_layer_info_khr final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_video_encode_h265_rate_control_layer_info_khr;
    const void *                      next = nullptr;
    ktl::bool32                       use_min_qp;
    ktl::api::video_encode_h265qp_khr min_qp;
    ktl::bool32                       use_max_qp;
    ktl::api::video_encode_h265qp_khr max_qp;
    ktl::bool32                       use_max_frame_size;
    ktl::api::video_encode_h265frame_size_khr max_frame_size;
};

struct video_encode_h265profile_info_khr final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_video_encode_h265_profile_info_khr;
    const void *                        next = nullptr;
    ktl::api::std_video_h265profile_idc std_profile_idc;
};

struct video_encode_h265dpb_slot_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_h265_dpb_slot_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_encode_h265reference_info * std_reference_info;
};

struct video_encode_av1capabilities_khr final
{
    ktl::api::structure_type                       type = ktl::api::structure_type::v_video_encode_av1_capabilities_khr;
    void *                                         next = nullptr;
    ktl::api::video_encode_av1capability_flags_khr flags;
    ktl::api::std_video_av1level                   max_level;
    ktl::api::extent2d                             coded_picture_alignment;
    ktl::api::extent2d                             max_tiles;
    ktl::api::extent2d                             min_tile_size;
    ktl::api::extent2d                             max_tile_size;
    ktl::api::video_encode_av1superblock_size_flags_khr superblock_sizes;
    ktl::i32                                            max_single_reference_count;
    ktl::i32                                            single_reference_name_mask;
    ktl::i32                                            max_unidirectional_compound_reference_count;
    ktl::i32                                            max_unidirectional_compound_group1reference_count;
    ktl::i32                                            unidirectional_compound_reference_name_mask;
    ktl::i32                                            max_bidirectional_compound_reference_count;
    ktl::i32                                            max_bidirectional_compound_group1reference_count;
    ktl::i32                                            max_bidirectional_compound_group2reference_count;
    ktl::i32                                            bidirectional_compound_reference_name_mask;
    ktl::i32                                            max_temporal_layer_count;
    ktl::i32                                            max_spatial_layer_count;
    ktl::i32                                            max_operating_points;
    ktl::i32                                            min_qindex;
    ktl::i32                                            max_qindex;
    ktl::bool32                                         prefers_gop_remaining_frames;
    ktl::bool32                                         requires_gop_remaining_frames;
    ktl::api::video_encode_av1std_flags_khr             std_syntax_flags;
};

struct video_encode_av1quality_level_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_av1_quality_level_properties_khr;
    void *                   next = nullptr;
    ktl::api::video_encode_av1rate_control_flags_khr preferred_rate_control_flags;
    ktl::i32                                         preferred_gop_frame_count;
    ktl::i32                                         preferred_key_frame_period;
    ktl::i32                                         preferred_consecutive_bipredictive_frame_count;
    ktl::i32                                         preferred_temporal_layer_count;
    ktl::api::video_encode_av1qindex_khr             preferred_constant_qindex;
    ktl::i32                                         preferred_max_single_reference_count;
    ktl::i32                                         preferred_single_reference_name_mask;
    ktl::i32                                         preferred_max_unidirectional_compound_reference_count;
    ktl::i32                                         preferred_max_unidirectional_compound_group1reference_count;
    ktl::i32                                         preferred_unidirectional_compound_reference_name_mask;
    ktl::i32                                         preferred_max_bidirectional_compound_reference_count;
    ktl::i32                                         preferred_max_bidirectional_compound_group1reference_count;
    ktl::i32                                         preferred_max_bidirectional_compound_group2reference_count;
    ktl::i32                                         preferred_bidirectional_compound_reference_name_mask;
};

struct physical_device_video_encode_av1features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_video_encode_av1_features_khr;
    void *                   next = nullptr;
    ktl::bool32              video_encode_av1;
};

struct video_encode_av1session_create_info_khr final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_video_encode_av1_session_create_info_khr;
    const void *                 next = nullptr;
    ktl::bool32                  use_max_level;
    ktl::api::std_video_av1level max_level;
};

struct video_encode_av1session_parameters_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_av1_session_parameters_create_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_av1sequence_header *             std_sequence_header;
    const ktl::api::std_video_encode_av1decoder_model_info *   std_decoder_model_info    = nullptr;
    ktl::i32                                                   std_operating_point_count = 0;
    const ktl::api::std_video_encode_av1operating_point_info * std_operating_points      = nullptr;
};

struct video_encode_av1dpb_slot_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_av1_dpb_slot_info_khr;
    const void *             next = nullptr;
    const ktl::api::std_video_encode_av1reference_info * std_reference_info;
};

struct video_encode_av1picture_info_khr final
{
    ktl::api::structure_type                      type = ktl::api::structure_type::v_video_encode_av1_picture_info_khr;
    const void *                                  next = nullptr;
    ktl::api::video_encode_av1prediction_mode_khr prediction_mode;
    ktl::api::video_encode_av1rate_control_group_khr   rate_control_group;
    const ktl::i32                                     constant_qindex;
    const ktl::api::std_video_encode_av1picture_info * std_picture_info;
    ktl::i32    reference_name_slot_indices[KTL_API_MAX_VIDEO_AV1_REFERENCES_PER_FRAME_KHR];
    ktl::bool32 primary_reference_cdf_only;
    ktl::bool32 generate_obu_extension_header;
};

struct video_encode_av1profile_info_khr final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_video_encode_av1_profile_info_khr;
    const void *                   next = nullptr;
    ktl::api::std_video_av1profile std_profile;
};

struct video_encode_av1rate_control_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_av1_rate_control_info_khr;
    const void *             next = nullptr;
    ktl::api::video_encode_av1rate_control_flags_khr flags = 0;
    ktl::i32                                         gop_frame_count;
    ktl::i32                                         key_frame_period;
    ktl::i32                                         consecutive_bipredictive_frame_count;
    ktl::i32                                         temporal_layer_count;
};

struct video_encode_av1qindex_khr final
{
    ktl::i32 intra_qindex;
    ktl::i32 predictive_qindex;
    ktl::i32 bipredictive_qindex;
};

struct video_encode_av1frame_size_khr final
{
    ktl::i32 intra_frame_size;
    ktl::i32 predictive_frame_size;
    ktl::i32 bipredictive_frame_size;
};

struct video_encode_av1gop_remaining_frame_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_av1_gop_remaining_frame_info_khr;
    const void *             next = nullptr;
    ktl::bool32              use_gop_remaining_frames;
    ktl::i32                 gop_remaining_intra;
    ktl::i32                 gop_remaining_predictive;
    ktl::i32                 gop_remaining_bipredictive;
};

struct video_encode_av1rate_control_layer_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_av1_rate_control_layer_info_khr;
    const void *             next = nullptr;
    ktl::bool32              use_min_qindex;
    ktl::api::video_encode_av1qindex_khr     min_qindex;
    ktl::bool32                              use_max_qindex;
    ktl::api::video_encode_av1qindex_khr     max_qindex;
    ktl::bool32                              use_max_frame_size;
    ktl::api::video_encode_av1frame_size_khr max_frame_size;
};

struct physical_device_inherited_viewport_scissor_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_inherited_viewport_scissor_features_nv;
    void *                   next = nullptr;
    ktl::bool32              inherited_viewport_scissor2d;
};

struct command_buffer_inheritance_viewport_scissor_info_nv final
{
    ktl::api::structure_type   type = ktl::api::structure_type::v_command_buffer_inheritance_viewport_scissor_info_nv;
    const void *               next = nullptr;
    ktl::bool32                viewport_scissor2d;
    ktl::i32                   viewport_depth_count;
    const ktl::api::viewport * viewport_depths;
};

struct physical_device_ycbcr2plane444formats_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ycbcr_2_plane_444_formats_features_ext;
    void *                   next = nullptr;
    ktl::bool32              ycbcr2plane444formats;
};

struct physical_device_provoking_vertex_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_provoking_vertex_features_ext;
    void *                   next = nullptr;
    ktl::bool32              provoking_vertex_last;
    ktl::bool32              transform_feedback_preserves_provoking_vertex;
};

struct physical_device_provoking_vertex_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_provoking_vertex_properties_ext;
    void *                   next = nullptr;
    ktl::bool32              provoking_vertex_mode_per_pipeline;
    ktl::bool32              transform_feedback_preserves_triangle_fan_provoking_vertex;
};

struct pipeline_rasterization_provoking_vertex_state_create_info_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_pipeline_rasterization_provoking_vertex_state_create_info_ext;
    const void *                        next = nullptr;
    ktl::api::provoking_vertex_mode_ext provoking_vertex_mode;
};

struct video_encode_intra_refresh_capabilities_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_intra_refresh_capabilities_khr;
    void *                   next = nullptr;
    ktl::api::video_encode_intra_refresh_mode_flags_khr intra_refresh_modes = 0;
    ktl::i32                                            max_intra_refresh_cycle_duration;
    ktl::i32                                            max_intra_refresh_active_reference_pictures;
    ktl::bool32                                         partition_independent_intra_refresh_regions;
    ktl::bool32                                         non_rectangular_intra_refresh_regions;
};

struct video_encode_session_intra_refresh_create_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_session_intra_refresh_create_info_khr;
    const void *             next = nullptr;
    ktl::api::video_encode_intra_refresh_mode_flag_bits_khr intra_refresh_mode = 0;
};

struct video_encode_intra_refresh_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_intra_refresh_info_khr;
    const void *             next = nullptr;
    ktl::i32                 intra_refresh_cycle_duration;
    ktl::i32                 intra_refresh_index;
};

struct video_reference_intra_refresh_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_reference_intra_refresh_info_khr;
    const void *             next = nullptr;
    ktl::i32                 dirty_intra_refresh_regions;
};

struct physical_device_video_encode_intra_refresh_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_video_encode_intra_refresh_features_khr;
    void *                   next = nullptr;
    ktl::bool32              video_encode_intra_refresh;
};

struct cu_module_create_info_nvx final
{
    ktl::api::structure_type type      = ktl::api::structure_type::v_cu_module_create_info_nvx;
    const void *             next      = nullptr;
    ktl::usize               data_size = 0;
    const void *             data;
};

struct cu_module_texturing_mode_create_info_nvx final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_cu_module_texturing_mode_create_info_nvx;
    const void *             next = nullptr;
    ktl::bool32              use64bit_texturing;
};

struct cu_function_create_info_nvx final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_cu_function_create_info_nvx;
    const void *             next = nullptr;
    ktl::api::cu_module_nvx  module;
    const char *             name;
};

struct cu_launch_info_nvx final
{
    ktl::api::structure_type  type = ktl::api::structure_type::v_cu_launch_info_nvx;
    const void *              next = nullptr;
    ktl::api::cu_function_nvx function;
    ktl::i32                  grid_dim_x;
    ktl::i32                  grid_dim_y;
    ktl::i32                  grid_dim_z;
    ktl::i32                  block_dim_x;
    ktl::i32                  block_dim_y;
    ktl::i32                  block_dim_z;
    ktl::i32                  shared_mem_bytes;
    ktl::usize                param_count = 0;
    const void *              params;
    ktl::usize                extra_count = 0;
    const void *              extras;
};

struct physical_device_descriptor_buffer_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_buffer_features_ext;
    void *                   next = nullptr;
    ktl::bool32              descriptor_buffer;
    ktl::bool32              descriptor_buffer_capture_replay;
    ktl::bool32              descriptor_buffer_image_layout_ignored;
    ktl::bool32              descriptor_buffer_push_descriptors;
};

struct physical_device_descriptor_buffer_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_buffer_properties_ext;
    void *                   next = nullptr;
    ktl::bool32              combined_image_sampler_descriptor_single_array;
    ktl::bool32              bufferless_push_descriptors;
    ktl::bool32              allow_sampler_image_view_post_submit_creation;
    ktl::dvsize              descriptor_buffer_offset_alignment;
    ktl::i32                 max_descriptor_buffer_bindings;
    ktl::i32                 max_resource_descriptor_buffer_bindings;
    ktl::i32                 max_sampler_descriptor_buffer_bindings;
    ktl::i32                 max_embedded_immutable_sampler_bindings;
    ktl::i32                 max_embedded_immutable_samplers;
    ktl::usize               buffer_capture_replay_descriptor_data_size;
    ktl::usize               image_capture_replay_descriptor_data_size;
    ktl::usize               image_view_capture_replay_descriptor_data_size;
    ktl::usize               sampler_capture_replay_descriptor_data_size;
    ktl::usize               acceleration_structure_capture_replay_descriptor_data_size;
    ktl::usize               sampler_descriptor_size;
    ktl::usize               combined_image_sampler_descriptor_size;
    ktl::usize               sampled_image_descriptor_size;
    ktl::usize               storage_image_descriptor_size;
    ktl::usize               uniform_texel_buffer_descriptor_size;
    ktl::usize               robust_uniform_texel_buffer_descriptor_size;
    ktl::usize               storage_texel_buffer_descriptor_size;
    ktl::usize               robust_storage_texel_buffer_descriptor_size;
    ktl::usize               uniform_buffer_descriptor_size;
    ktl::usize               robust_uniform_buffer_descriptor_size;
    ktl::usize               storage_buffer_descriptor_size;
    ktl::usize               robust_storage_buffer_descriptor_size;
    ktl::usize               input_attachment_descriptor_size;
    ktl::usize               acceleration_structure_descriptor_size;
    ktl::dvsize              max_sampler_descriptor_buffer_range;
    ktl::dvsize              max_resource_descriptor_buffer_range;
    ktl::dvsize              sampler_descriptor_buffer_address_space_size;
    ktl::dvsize              resource_descriptor_buffer_address_space_size;
    ktl::dvsize              descriptor_buffer_address_space_size;
};

struct physical_device_descriptor_buffer_density_map_properties_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_descriptor_buffer_density_map_properties_ext;
    void *     next = nullptr;
    ktl::usize combined_image_sampler_density_map_descriptor_size;
};

struct descriptor_address_info_ext final
{
    ktl::api::structure_type type    = ktl::api::structure_type::v_descriptor_address_info_ext;
    void *                   next    = nullptr;
    ktl::dvaddr              address = 0;
    ktl::dvsize              range;
    ktl::api::format         format;
};

struct descriptor_buffer_binding_info_ext final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_descriptor_buffer_binding_info_ext;
    const void *                 next = nullptr;
    ktl::dvaddr                  address;
    ktl::api::buffer_usage_flags usage = 0;
};

struct descriptor_buffer_binding_push_descriptor_buffer_handle_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_descriptor_buffer_binding_push_descriptor_buffer_handle_ext;
    const void *     next = nullptr;
    ktl::api::buffer buffer;
};

struct descriptor_get_info_ext final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_descriptor_get_info_ext;
    const void *                  next = nullptr;
    ktl::api::descriptor_type     type;
    ktl::api::descriptor_data_ext data;
};

struct buffer_capture_descriptor_data_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_buffer_capture_descriptor_data_info_ext;
    const void *             next = nullptr;
    ktl::api::buffer         buffer;
};

struct image_capture_descriptor_data_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_capture_descriptor_data_info_ext;
    const void *             next = nullptr;
    ktl::api::image          image;
};

struct image_view_capture_descriptor_data_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_view_capture_descriptor_data_info_ext;
    const void *             next = nullptr;
    ktl::api::image_view     image_view;
};

struct sampler_capture_descriptor_data_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_sampler_capture_descriptor_data_info_ext;
    const void *             next = nullptr;
    ktl::api::sampler        sampler;
};

struct acceleration_structure_capture_descriptor_data_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_capture_descriptor_data_info_ext;
    const void *             next = nullptr;
    ktl::api::acceleration_structure_khr acceleration_structure    = 0;
    ktl::api::acceleration_structure_nv  acceleration_structure_nv = 0;
};

struct opaque_capture_descriptor_data_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_opaque_capture_descriptor_data_create_info_ext;
    const void *             next = nullptr;
    const void *             opaque_capture_descriptor_data;
};

struct physical_device_shader_integer_dot_product_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_integer_dot_product_features;
    void *                   next = nullptr;
    ktl::bool32              shader_integer_dot_product;
};

using physical_device_shader_integer_dot_product_features_khr = physical_device_shader_integer_dot_product_features;

struct physical_device_shader_integer_dot_product_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_integer_dot_product_properties;
    void *                   next = nullptr;
    ktl::bool32              integer_dot_product8bit_unsigned_accelerated;
    ktl::bool32              integer_dot_product8bit_signed_accelerated;
    ktl::bool32              integer_dot_product8bit_mixed_signedness_accelerated;
    ktl::bool32              integer_dot_product4x8bit_packed_unsigned_accelerated;
    ktl::bool32              integer_dot_product4x8bit_packed_signed_accelerated;
    ktl::bool32              integer_dot_product4x8bit_packed_mixed_signedness_accelerated;
    ktl::bool32              integer_dot_product16bit_unsigned_accelerated;
    ktl::bool32              integer_dot_product16bit_signed_accelerated;
    ktl::bool32              integer_dot_product16bit_mixed_signedness_accelerated;
    ktl::bool32              integer_dot_product32bit_unsigned_accelerated;
    ktl::bool32              integer_dot_product32bit_signed_accelerated;
    ktl::bool32              integer_dot_product32bit_mixed_signedness_accelerated;
    ktl::bool32              integer_dot_product64bit_unsigned_accelerated;
    ktl::bool32              integer_dot_product64bit_signed_accelerated;
    ktl::bool32              integer_dot_product64bit_mixed_signedness_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating8bit_unsigned_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating8bit_signed_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating8bit_mixed_signedness_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating4x8bit_packed_unsigned_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating4x8bit_packed_signed_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating4x8bit_packed_mixed_signedness_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating16bit_unsigned_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating16bit_signed_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating16bit_mixed_signedness_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating32bit_unsigned_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating32bit_signed_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating32bit_mixed_signedness_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating64bit_unsigned_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating64bit_signed_accelerated;
    ktl::bool32              integer_dot_product_accumulating_saturating64bit_mixed_signedness_accelerated;
};

using physical_device_shader_integer_dot_product_properties_khr = physical_device_shader_integer_dot_product_properties;

struct physical_device_drm_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_drm_properties_ext;
    void *                   next = nullptr;
    ktl::bool32              has_primary;
    ktl::bool32              has_render;
    ktl::i64                 primary_major;
    ktl::i64                 primary_minor;
    ktl::i64                 render_major;
    ktl::i64                 render_minor;
};

struct physical_device_fragment_shader_barycentric_features_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_fragment_shader_barycentric_features_khr;
    void *      next = nullptr;
    ktl::bool32 fragment_shader_barycentric;
};

struct physical_device_fragment_shader_barycentric_properties_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_fragment_shader_barycentric_properties_khr;
    void *      next = nullptr;
    ktl::bool32 tri_strip_vertex_order_independent_of_provoking_vertex;
};

struct physical_device_shader_fma_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_fma_features_khr;
    void *                   next = nullptr;
    ktl::bool32              shader_fma_float16;
    ktl::bool32              shader_fma_float32;
    ktl::bool32              shader_fma_float64;
};

struct physical_device_ray_tracing_motion_blur_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_motion_blur_features_nv;
    void *                   next = nullptr;
    ktl::bool32              ray_tracing_motion_blur;
    ktl::bool32              ray_tracing_motion_blur_pipeline_trace_rays_indirect;
};

struct physical_device_ray_tracing_validation_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_validation_features_nv;
    void *                   next = nullptr;
    ktl::bool32              ray_tracing_validation;
};

struct physical_device_ray_tracing_linear_swept_spheres_features_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_ray_tracing_linear_swept_spheres_features_nv;
    void *      next = nullptr;
    ktl::bool32 spheres;
    ktl::bool32 linear_swept_spheres;
};

struct acceleration_structure_geometry_motion_triangles_data_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_acceleration_structure_geometry_motion_triangles_data_nv;
    const void *                               next = nullptr;
    ktl::api::device_or_host_address_const_khr vertex_data;
};

struct acceleration_structure_motion_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_motion_info_nv;
    const void *             next = nullptr;
    ktl::i32                 max_instances;
    ktl::api::acceleration_structure_motion_info_flags_nv flags = 0;
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
    ktl::api::srtdata_nv                  transform_t0;
    ktl::api::srtdata_nv                  transform_t1;
    ktl::i32                              instance_custom_index;
    ktl::i32                              mask;
    ktl::i32                              instance_shader_binding_table_record_offset;
    ktl::api::geometry_instance_flags_khr flags = 0;
    ktl::u64                              acceleration_structure_reference;
};

struct acceleration_structure_matrix_motion_instance_nv final
{
    ktl::api::transform_matrix_khr        transform_t0;
    ktl::api::transform_matrix_khr        transform_t1;
    ktl::i32                              instance_custom_index;
    ktl::i32                              mask;
    ktl::i32                              instance_shader_binding_table_record_offset;
    ktl::api::geometry_instance_flags_khr flags = 0;
    ktl::u64                              acceleration_structure_reference;
};

struct acceleration_structure_motion_instance_nv final
{
    ktl::api::acceleration_structure_motion_instance_type_nv  type;
    ktl::api::acceleration_structure_motion_instance_flags_nv flags = 0;
    ktl::api::acceleration_structure_motion_instance_data_nv  data;
};

struct memory_get_remote_address_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_remote_address_info_nv;
    const void *             next = nullptr;
    ktl::api::device_memory  memory;
    ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct import_memory_buffer_collection_fuchsia final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_import_memory_buffer_collection_fuchsia;
    const void *                        next = nullptr;
    ktl::api::buffer_collection_fuchsia collection;
    ktl::i32                            index;
};

struct buffer_collection_image_create_info_fuchsia final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_buffer_collection_image_create_info_fuchsia;
    const void *                        next = nullptr;
    ktl::api::buffer_collection_fuchsia collection;
    ktl::i32                            index;
};

struct buffer_collection_buffer_create_info_fuchsia final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_buffer_collection_buffer_create_info_fuchsia;
    const void *                        next = nullptr;
    ktl::api::buffer_collection_fuchsia collection;
    ktl::i32                            index;
};

struct buffer_collection_create_info_fuchsia final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_buffer_collection_create_info_fuchsia;
    const void *             next = nullptr;
    ktl::api::zx_handle_t    collection_token;
};

struct buffer_collection_properties_fuchsia final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_buffer_collection_properties_fuchsia;
    void *                                   next = nullptr;
    ktl::i32                                 memory_type_bits;
    ktl::i32                                 buffer_count;
    ktl::i32                                 create_info_index;
    ktl::u64                                 sysmem_pixel_format;
    ktl::api::format_feature_flags           format_features;
    ktl::api::sysmem_color_space_fuchsia     sysmem_color_space_index;
    ktl::api::component_mapping              sampler_ycbcr_conversion_components;
    ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
    ktl::api::sampler_ycbcr_range            suggested_ycbcr_range;
    ktl::api::chroma_location                suggested_xchroma_offset;
    ktl::api::chroma_location                suggested_ychroma_offset;
};

struct buffer_constraints_info_fuchsia final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_buffer_constraints_info_fuchsia;
    const void *                   next = nullptr;
    ktl::api::buffer_create_info   create_info;
    ktl::api::format_feature_flags required_format_features = 0;
    ktl::api::buffer_collection_constraints_info_fuchsia buffer_collection_constraints;
};

struct sysmem_color_space_fuchsia final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_sysmem_color_space_fuchsia;
    const void *             next = nullptr;
    ktl::i32                 color_space;
};

struct image_format_constraints_info_fuchsia final
{
    ktl::api::structure_type       type = ktl::api::structure_type::v_image_format_constraints_info_fuchsia;
    const void *                   next = nullptr;
    ktl::api::image_create_info    image_create_info;
    ktl::api::format_feature_flags required_format_features;
    ktl::api::image_format_constraints_flags_fuchsia flags               = 0;
    ktl::u64                                         sysmem_pixel_format = 0;
    ktl::i32                                         color_space_count;
    const ktl::api::sysmem_color_space_fuchsia *     color_spaces;
};

struct image_constraints_info_fuchsia final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_constraints_info_fuchsia;
    const void *             next = nullptr;
    ktl::i32                 format_constraints_count;
    const ktl::api::image_format_constraints_info_fuchsia * format_constraints;
    ktl::api::buffer_collection_constraints_info_fuchsia    buffer_collection_constraints;
    ktl::api::image_constraints_info_flags_fuchsia          flags = 0;
};

struct buffer_collection_constraints_info_fuchsia final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_buffer_collection_constraints_info_fuchsia;
    const void *             next = nullptr;
    ktl::i32                 min_buffer_count;
    ktl::i32                 max_buffer_count;
    ktl::i32                 min_buffer_count_for_camping;
    ktl::i32                 min_buffer_count_for_dedicated_slack;
    ktl::i32                 min_buffer_count_for_shared_slack;
};

struct cuda_module_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_cuda_module_create_info_nv;
    const void *             next = nullptr;
    ktl::usize               data_size;
    const void *             data;
};

struct cuda_function_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_cuda_function_create_info_nv;
    const void *             next = nullptr;
    ktl::api::cuda_module_nv module;
    const char *             name;
};

struct cuda_launch_info_nv final
{
    ktl::api::structure_type   type = ktl::api::structure_type::v_cuda_launch_info_nv;
    const void *               next = nullptr;
    ktl::api::cuda_function_nv function;
    ktl::i32                   grid_dim_x;
    ktl::i32                   grid_dim_y;
    ktl::i32                   grid_dim_z;
    ktl::i32                   block_dim_x;
    ktl::i32                   block_dim_y;
    ktl::i32                   block_dim_z;
    ktl::i32                   shared_mem_bytes;
    ktl::usize                 param_count = 0;
    const void *               params;
    ktl::usize                 extra_count = 0;
    const void *               extras;
};

struct physical_device_rgba10x6formats_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_rgba10x6_formats_features_ext;
    void *                   next = nullptr;
    ktl::bool32              format_rgba10x6without_ycb_cr_sampler;
};

struct format_properties3 final
{
    ktl::api::structure_type        type                    = ktl::api::structure_type::v_format_properties_3;
    void *                          next                    = nullptr;
    ktl::api::format_feature_flags2 linear_tiling_features  = 0;
    ktl::api::format_feature_flags2 optimal_tiling_features = 0;
    ktl::api::format_feature_flags2 buffer_features         = 0;
};

using format_properties3khr = format_properties3;

struct drm_format_modifier_properties_list2ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_drm_format_modifier_properties_list_2_ext;
    void *                   next = nullptr;
    ktl::i32                 drm_format_modifier_count                            = 0;
    ktl::api::drm_format_modifier_properties2ext * drm_format_modifier_properties = nullptr;
};

struct drm_format_modifier_properties2ext final
{
    ktl::u64                        drm_format_modifier;
    ktl::i32                        drm_format_modifier_plane_count;
    ktl::api::format_feature_flags2 drm_format_modifier_tiling_features;
};

struct android_hardware_buffer_format_properties2android final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_android_hardware_buffer_format_properties_2_android;
    void *                   next = nullptr;
    ktl::api::format         format;
    ktl::u64                 external_format;
    ktl::api::format_feature_flags2          format_features;
    ktl::api::component_mapping              sampler_ycbcr_conversion_components;
    ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
    ktl::api::sampler_ycbcr_range            suggested_ycbcr_range;
    ktl::api::chroma_location                suggested_xchroma_offset;
    ktl::api::chroma_location                suggested_ychroma_offset;
};

struct pipeline_rendering_create_info final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_rendering_create_info;
    const void *             next = nullptr;
    ktl::i32                 view_mask;
    ktl::i32                 color_attachment_count = 0;
    const ktl::api::format * color_attachment_formats;
    ktl::api::format         depth_attachment_format;
    ktl::api::format         stencil_attachment_format;
};

using pipeline_rendering_create_info_khr = pipeline_rendering_create_info;

struct rendering_info final
{
    ktl::api::structure_type                    type  = ktl::api::structure_type::v_rendering_info;
    const void *                                next  = nullptr;
    ktl::api::rendering_flags                   flags = 0;
    ktl::api::rect2d                            render_area;
    ktl::i32                                    layer_count;
    ktl::i32                                    view_mask;
    ktl::i32                                    color_attachment_count = 0;
    const ktl::api::rendering_attachment_info * color_attachments;
    const ktl::api::rendering_attachment_info * depth_attachment   = nullptr;
    const ktl::api::rendering_attachment_info * stencil_attachment = nullptr;
};

using rendering_info_khr = rendering_info;

struct rendering_end_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_rendering_end_info_khr;
    const void *             next = nullptr;
};

using rendering_end_info_ext = rendering_end_info_khr;

struct rendering_attachment_info final
{
    ktl::api::structure_type         type       = ktl::api::structure_type::v_rendering_attachment_info;
    const void *                     next       = nullptr;
    ktl::api::image_view             image_view = 0;
    ktl::api::image_layout           image_layout;
    ktl::api::resolve_mode_flag_bits resolve_mode       = 0;
    ktl::api::image_view             resolve_image_view = 0;
    ktl::api::image_layout           resolve_image_layout;
    ktl::api::attachment_load_op     load_op;
    ktl::api::attachment_store_op    store_op;
    ktl::api::clear_value            clear_value;
};

using rendering_attachment_info_khr = rendering_attachment_info;

struct rendering_fragment_shading_rate_attachment_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_rendering_fragment_shading_rate_attachment_info_khr;
    const void *             next = nullptr;
    ktl::api::image_view     image_view = 0;
    ktl::api::image_layout   image_layout;
    ktl::api::extent2d       shading_rate_attachment_texel_size;
};

struct rendering_fragment_density_map_attachment_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_rendering_fragment_density_map_attachment_info_ext;
    const void *             next = nullptr;
    ktl::api::image_view     image_view;
    ktl::api::image_layout   image_layout;
};

struct physical_device_dynamic_rendering_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_dynamic_rendering_features;
    void *                   next = nullptr;
    ktl::bool32              dynamic_rendering;
};

using physical_device_dynamic_rendering_features_khr = physical_device_dynamic_rendering_features;

struct command_buffer_inheritance_rendering_info final
{
    ktl::api::structure_type         type  = ktl::api::structure_type::v_command_buffer_inheritance_rendering_info;
    const void *                     next  = nullptr;
    ktl::api::rendering_flags        flags = 0;
    ktl::i32                         view_mask;
    ktl::i32                         color_attachment_count = 0;
    ktl::i32                         color_attachment_count;
    const ktl::api::format *         color_attachment_formats;
    ktl::api::format                 depth_attachment_format;
    ktl::api::format                 stencil_attachment_format;
    ktl::api::sample_count_flag_bits rasterization_samples = 0;
};

using command_buffer_inheritance_rendering_info_khr = command_buffer_inheritance_rendering_info;

struct attachment_sample_count_info_amd final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_attachment_sample_count_info_amd;
    const void *                             next = nullptr;
    ktl::i32                                 color_attachment_count = 0;
    const ktl::api::sample_count_flag_bits * color_attachment_samples;
    ktl::api::sample_count_flag_bits         depth_stencil_attachment_samples = 0;
};

using attachment_sample_count_info_nv = attachment_sample_count_info_amd;

struct multiview_per_view_attributes_info_nvx final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_multiview_per_view_attributes_info_nvx;
    const void *             next = nullptr;
    ktl::bool32              per_view_attributes;
    ktl::bool32              per_view_attributes_position_xonly;
};

struct physical_device_image_view_min_lod_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_view_min_lod_features_ext;
    void *                   next = nullptr;
    ktl::bool32              min_lod;
};

struct image_view_min_lod_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_view_min_lod_create_info_ext;
    const void *             next = nullptr;
    float                    min_lod;
};

struct physical_device_rasterization_order_attachment_access_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_rasterization_order_attachment_access_features_ext;
    void *      next = nullptr;
    ktl::bool32 rasterization_order_color_attachment_access;
    ktl::bool32 rasterization_order_depth_attachment_access;
    ktl::bool32 rasterization_order_stencil_attachment_access;
};

using physical_device_rasterization_order_attachment_access_features_arm =
    physical_device_rasterization_order_attachment_access_features_ext;

struct physical_device_linear_color_attachment_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_linear_color_attachment_features_nv;
    void *                   next = nullptr;
    ktl::bool32              linear_color_attachment;
};

struct physical_device_graphics_pipeline_library_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_graphics_pipeline_library_features_ext;
    void *                   next = nullptr;
    ktl::bool32              graphics_pipeline_library;
};

struct physical_device_pipeline_binary_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_binary_features_khr;
    void *                   next = nullptr;
    ktl::bool32              pipeline_binaries;
};

struct device_pipeline_binary_internal_cache_control_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_pipeline_binary_internal_cache_control_khr;
    const void *             next = nullptr;
    ktl::bool32              disable_internal_cache;
};

struct physical_device_pipeline_binary_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_binary_properties_khr;
    void *                   next = nullptr;
    ktl::bool32              pipeline_binary_internal_cache;
    ktl::bool32              pipeline_binary_internal_cache_control;
    ktl::bool32              pipeline_binary_prefers_internal_cache;
    ktl::bool32              pipeline_binary_precompiled_internal_cache;
    ktl::bool32              pipeline_binary_compressed_data;
};

struct physical_device_graphics_pipeline_library_properties_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_graphics_pipeline_library_properties_ext;
    void *      next = nullptr;
    ktl::bool32 graphics_pipeline_library_fast_linking;
    ktl::bool32 graphics_pipeline_library_independent_interpolation_decoration;
};

struct graphics_pipeline_library_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_graphics_pipeline_library_create_info_ext;
    const void *             next = nullptr;
    ktl::api::graphics_pipeline_library_flags_ext flags;
};

struct physical_device_descriptor_set_host_mapping_features_valve final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_descriptor_set_host_mapping_features_valve;
    void *      next = nullptr;
    ktl::bool32 descriptor_set_host_mapping;
};

struct descriptor_set_binding_reference_valve final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_descriptor_set_binding_reference_valve;
    const void *                    next = nullptr;
    ktl::api::descriptor_set_layout descriptor_set_layout;
    ktl::i32                        binding;
};

struct descriptor_set_layout_host_mapping_info_valve final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_descriptor_set_layout_host_mapping_info_valve;
    void *                   next = nullptr;
    ktl::usize               descriptor_offset;
    ktl::i32                 descriptor_size;
};

struct physical_device_nested_command_buffer_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_nested_command_buffer_features_ext;
    void *                   next = nullptr;
    ktl::bool32              nested_command_buffer;
    ktl::bool32              nested_command_buffer_rendering;
    ktl::bool32              nested_command_buffer_simultaneous_use;
};

struct physical_device_nested_command_buffer_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_nested_command_buffer_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 max_command_buffer_nesting_level;
};

struct physical_device_shader_module_identifier_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_module_identifier_features_ext;
    void *                   next = nullptr;
    ktl::bool32              shader_module_identifier;
};

struct physical_device_shader_module_identifier_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_module_identifier_properties_ext;
    void *                   next = nullptr;
    ktl::u8                  shader_module_identifier_algorithm_uuid[KTL_API_UUID_SIZE];
};

struct pipeline_shader_stage_module_identifier_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_shader_stage_module_identifier_create_info_ext;
    const void *             next = nullptr;
    ktl::i32                 identifier_size = 0;
    const ktl::u8 *          identifier;
};

struct shader_module_identifier_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_shader_module_identifier_ext;
    void *                   next = nullptr;
    ktl::i32                 identifier_size;
    ktl::u8                  identifier[KTL_API_MAX_SHADER_MODULE_IDENTIFIER_SIZE_EXT];
};

struct image_compression_control_ext final
{
    ktl::api::structure_type                           type = ktl::api::structure_type::v_image_compression_control_ext;
    const void *                                       next = nullptr;
    ktl::api::image_compression_flags_ext              flags;
    ktl::i32                                           compression_control_plane_count = 0;
    ktl::api::image_compression_fixed_rate_flags_ext * fixed_rate_flags;
};

struct physical_device_image_compression_control_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_compression_control_features_ext;
    void *                   next = nullptr;
    ktl::bool32              image_compression_control;
};

struct image_compression_properties_ext final
{
    ktl::api::structure_type              type = ktl::api::structure_type::v_image_compression_properties_ext;
    void *                                next = nullptr;
    ktl::api::image_compression_flags_ext image_compression_flags;
    ktl::api::image_compression_fixed_rate_flags_ext image_compression_fixed_rate_flags;
};

struct physical_device_image_compression_control_swapchain_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_image_compression_control_swapchain_features_ext;
    void *      next = nullptr;
    ktl::bool32 image_compression_control_swapchain;
};

struct image_subresource2 final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_image_subresource_2;
    void *                      next = nullptr;
    ktl::api::image_subresource image_subresource;
};

using image_subresource2khr = image_subresource2;

using image_subresource2ext = image_subresource2;

struct subresource_layout2 final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_subresource_layout_2;
    void *                       next = nullptr;
    ktl::api::subresource_layout subresource_layout;
};

using subresource_layout2khr = subresource_layout2;

using subresource_layout2ext = subresource_layout2;

struct render_pass_creation_control_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_creation_control_ext;
    const void *             next = nullptr;
    ktl::bool32              disallow_merging;
};

struct render_pass_creation_feedback_info_ext final
{
    ktl::i32 post_merge_subpass_count;
};

struct render_pass_creation_feedback_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_creation_feedback_create_info_ext;
    const void *             next = nullptr;
    ktl::api::render_pass_creation_feedback_info_ext * render_pass_feedback;
};

struct render_pass_subpass_feedback_info_ext final
{
    ktl::api::subpass_merge_status_ext subpass_merge_status;
    char                               description[KTL_API_MAX_DESCRIPTION_SIZE];
    ktl::i32                           post_merge_index;
};

struct render_pass_subpass_feedback_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_subpass_feedback_create_info_ext;
    const void *             next = nullptr;
    ktl::api::render_pass_subpass_feedback_info_ext * subpass_feedback;
};

struct physical_device_subpass_merge_feedback_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_subpass_merge_feedback_features_ext;
    void *                   next = nullptr;
    ktl::bool32              subpass_merge_feedback;
};

struct micromap_build_info_ext final
{
    ktl::api::structure_type                   type = ktl::api::structure_type::v_micromap_build_info_ext;
    const void *                               next = nullptr;
    ktl::api::micromap_type_ext                type;
    ktl::api::build_micromap_flags_ext         flags = 0;
    ktl::api::build_micromap_mode_ext          mode;
    ktl::api::micromap_ext                     dst_micromap       = 0;
    ktl::i32                                   usage_counts_count = 0;
    const ktl::api::micromap_usage_ext *       usage_counts       = nullptr;
    const ktl::api::micromap_usage_ext *       usage_counts;
    ktl::api::device_or_host_address_const_khr data;
    ktl::api::device_or_host_address_khr       scratch_data;
    ktl::api::device_or_host_address_const_khr triangle_array;
    ktl::dvsize                                triangle_array_stride;
};

struct micromap_create_info_ext final
{
    ktl::api::structure_type            type         = ktl::api::structure_type::v_micromap_create_info_ext;
    const void *                        next         = nullptr;
    ktl::api::micromap_create_flags_ext create_flags = 0;
    ktl::api::buffer                    buffer;
    ktl::dvsize                         offset;
    ktl::dvsize                         size;
    ktl::api::micromap_type_ext         type;
    ktl::dvaddr                         device_address = 0;
};

struct micromap_version_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_micromap_version_info_ext;
    const void *             next = nullptr;
    const ktl::u8 *          version_data;
};

struct copy_micromap_info_ext final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_copy_micromap_info_ext;
    const void *                     next = nullptr;
    ktl::api::micromap_ext           src;
    ktl::api::micromap_ext           dst;
    ktl::api::copy_micromap_mode_ext mode;
};

struct copy_micromap_to_memory_info_ext final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_copy_micromap_to_memory_info_ext;
    const void *                         next = nullptr;
    ktl::api::micromap_ext               src;
    ktl::api::device_or_host_address_khr dst;
    ktl::api::copy_micromap_mode_ext     mode;
};

struct copy_memory_to_micromap_info_ext final
{
    ktl::api::structure_type                   type = ktl::api::structure_type::v_copy_memory_to_micromap_info_ext;
    const void *                               next = nullptr;
    ktl::api::device_or_host_address_const_khr src;
    ktl::api::micromap_ext                     dst;
    ktl::api::copy_micromap_mode_ext           mode;
};

struct micromap_build_sizes_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_micromap_build_sizes_info_ext;
    const void *             next = nullptr;
    ktl::dvsize              micromap_size;
    ktl::dvsize              build_scratch_size;
    ktl::bool32              discardable;
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
    void *                   next = nullptr;
    ktl::bool32              micromap;
    ktl::bool32              micromap_capture_replay;
    ktl::bool32              micromap_host_commands;
};

struct physical_device_opacity_micromap_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_opacity_micromap_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 max_opacity2state_subdivision_level;
    ktl::i32                 max_opacity4state_subdivision_level;
};

struct acceleration_structure_triangles_opacity_micromap_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_triangles_opacity_micromap_ext;
    void *                   next = nullptr;
    ktl::api::index_type     index_type;
    ktl::api::device_or_host_address_const_khr index_buffer;
    ktl::dvsize                                index_stride;
    ktl::i32                                   base_triangle;
    ktl::i32                                   usage_counts_count = 0;
    const ktl::api::micromap_usage_ext *       usage_counts       = nullptr;
    const ktl::api::micromap_usage_ext *       usage_counts;
    ktl::api::micromap_ext                     micromap = 0;
};

struct physical_device_displacement_micromap_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_displacement_micromap_features_nv;
    void *                   next = nullptr;
    ktl::bool32              displacement_micromap;
};

struct physical_device_displacement_micromap_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_displacement_micromap_properties_nv;
    void *                   next = nullptr;
    ktl::i32                 max_displacement_micromap_subdivision_level;
};

struct acceleration_structure_triangles_displacement_micromap_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_acceleration_structure_triangles_displacement_micromap_nv;
    void *                                     next = nullptr;
    ktl::api::format                           displacement_bias_and_scale_format;
    ktl::api::format                           displacement_vector_format;
    ktl::api::device_or_host_address_const_khr displacement_bias_and_scale_buffer;
    ktl::dvsize                                displacement_bias_and_scale_stride;
    ktl::api::device_or_host_address_const_khr displacement_vector_buffer;
    ktl::dvsize                                displacement_vector_stride;
    ktl::api::device_or_host_address_const_khr displaced_micromap_primitive_flags;
    ktl::dvsize                                displaced_micromap_primitive_flags_stride;
    ktl::api::index_type                       index_type;
    ktl::api::device_or_host_address_const_khr index_buffer;
    ktl::dvsize                                index_stride;
    ktl::i32                                   base_triangle;
    ktl::i32                                   usage_counts_count = 0;
    const ktl::api::micromap_usage_ext *       usage_counts       = nullptr;
    const ktl::api::micromap_usage_ext *       usage_counts;
    ktl::api::micromap_ext                     micromap = 0;
};

struct pipeline_properties_identifier_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_properties_identifier_ext;
    void *                   next = nullptr;
    ktl::u8                  pipeline_identifier[KTL_API_UUID_SIZE];
};

struct physical_device_pipeline_properties_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_properties_features_ext;
    void *                   next = nullptr;
    ktl::bool32              pipeline_properties_identifier;
};

struct physical_device_shader_early_and_late_fragment_tests_features_amd final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_shader_early_and_late_fragment_tests_features_amd;
    void *      next = nullptr;
    ktl::bool32 shader_early_and_late_fragment_tests;
};

struct external_memory_acquire_unmodified_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_external_memory_acquire_unmodified_ext;
    const void *             next = nullptr;
    ktl::bool32              acquire_unmodified_memory;
};

struct export_metal_object_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_object_create_info_ext;
    const void *             next = nullptr;
    ktl::api::export_metal_object_type_flag_bits_ext export_object_type = 0;
};

struct export_metal_objects_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_objects_info_ext;
    const void *             next = nullptr;
};

struct export_metal_device_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_device_info_ext;
    const void *             next = nullptr;
    ktl::api::mtldevice_id   mtl_device;
};

struct export_metal_command_queue_info_ext final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_export_metal_command_queue_info_ext;
    const void *                  next = nullptr;
    ktl::api::queue               queue;
    ktl::api::mtlcommand_queue_id mtl_command_queue;
};

struct export_metal_buffer_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_buffer_info_ext;
    const void *             next = nullptr;
    ktl::api::device_memory  memory;
    ktl::api::mtlbuffer_id   mtl_buffer;
};

struct import_metal_buffer_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_import_metal_buffer_info_ext;
    const void *             next = nullptr;
    ktl::api::mtlbuffer_id   mtl_buffer;
};

struct export_metal_texture_info_ext final
{
    ktl::api::structure_type         type        = ktl::api::structure_type::v_export_metal_texture_info_ext;
    const void *                     next        = nullptr;
    ktl::api::image                  image       = 0;
    ktl::api::image_view             image_view  = 0;
    ktl::api::buffer_view            buffer_view = 0;
    ktl::api::image_aspect_flag_bits plane;
    ktl::api::mtltexture_id          mtl_texture;
};

struct import_metal_texture_info_ext final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_import_metal_texture_info_ext;
    const void *                     next = nullptr;
    ktl::api::image_aspect_flag_bits plane;
    ktl::api::mtltexture_id          mtl_texture;
};

struct export_metal_iosurface_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_export_metal_io_surface_info_ext;
    const void *             next = nullptr;
    ktl::api::image          image;
    ktl::api::iosurface_ref  io_surface;
};

struct import_metal_iosurface_info_ext final
{
    ktl::api::structure_type type       = ktl::api::structure_type::v_import_metal_io_surface_info_ext;
    const void *             next       = nullptr;
    ktl::api::iosurface_ref  io_surface = 0;
};

struct export_metal_shared_event_info_ext final
{
    ktl::api::structure_type     type      = ktl::api::structure_type::v_export_metal_shared_event_info_ext;
    const void *                 next      = nullptr;
    ktl::api::semaphore          semaphore = 0;
    ktl::api::event              event     = 0;
    ktl::api::mtlshared_event_id mtl_shared_event;
};

struct import_metal_shared_event_info_ext final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_import_metal_shared_event_info_ext;
    const void *                 next = nullptr;
    ktl::api::mtlshared_event_id mtl_shared_event;
};

struct physical_device_non_seamless_cube_map_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_non_seamless_cube_map_features_ext;
    void *                   next = nullptr;
    ktl::bool32              non_seamless_cube_map;
};

struct physical_device_pipeline_robustness_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_robustness_features;
    void *                   next = nullptr;
    ktl::bool32              pipeline_robustness;
};

using physical_device_pipeline_robustness_features_ext = physical_device_pipeline_robustness_features;

struct pipeline_robustness_create_info final
{
    ktl::api::structure_type                      type = ktl::api::structure_type::v_pipeline_robustness_create_info;
    const void *                                  next = nullptr;
    ktl::api::pipeline_robustness_buffer_behavior storage_buffers;
    ktl::api::pipeline_robustness_buffer_behavior uniform_buffers;
    ktl::api::pipeline_robustness_buffer_behavior vertex_inputs;
    ktl::api::pipeline_robustness_image_behavior  images;
};

using pipeline_robustness_create_info_ext = pipeline_robustness_create_info;

struct physical_device_pipeline_robustness_properties final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_robustness_properties;
    void *                   next = nullptr;
    ktl::api::pipeline_robustness_buffer_behavior default_robustness_storage_buffers;
    ktl::api::pipeline_robustness_buffer_behavior default_robustness_uniform_buffers;
    ktl::api::pipeline_robustness_buffer_behavior default_robustness_vertex_inputs;
    ktl::api::pipeline_robustness_image_behavior  default_robustness_images;
};

using physical_device_pipeline_robustness_properties_ext = physical_device_pipeline_robustness_properties;

struct image_view_sample_weight_create_info_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_view_sample_weight_create_info_qcom;
    const void *             next = nullptr;
    ktl::api::offset2d       filter_center;
    ktl::api::extent2d       filter_size;
    ktl::i32                 num_phases;
};

struct physical_device_image_processing_features_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_processing_features_qcom;
    void *                   next = nullptr;
    ktl::bool32              texture_sample_weighted;
    ktl::bool32              texture_box_filter;
    ktl::bool32              texture_block_match;
};

struct physical_device_image_processing_properties_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_processing_properties_qcom;
    void *                   next = nullptr;
    ktl::i32                 max_weight_filter_phases    = 0;
    ktl::api::extent2d       max_weight_filter_dimension = 0;
    ktl::api::extent2d       max_block_match_region      = 0;
    ktl::api::extent2d       max_box_filter_block_size   = 0;
};

struct physical_device_tile_properties_features_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tile_properties_features_qcom;
    void *                   next = nullptr;
    ktl::bool32              tile_properties;
};

struct tile_properties_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_tile_properties_qcom;
    void *                   next = nullptr;
    ktl::api::extent3d       tile_size;
    ktl::api::extent2d       apron_size;
    ktl::api::offset2d       origin;
};

struct tile_memory_bind_info_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_tile_memory_bind_info_qcom;
    const void *             next = nullptr;
    ktl::api::device_memory  memory;
};

struct physical_device_amigo_profiling_features_sec final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_amigo_profiling_features_sec;
    void *                   next = nullptr;
    ktl::bool32              amigo_profiling;
};

struct amigo_profiling_submit_info_sec final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_amigo_profiling_submit_info_sec;
    const void *             next = nullptr;
    ktl::u64                 first_draw_timestamp;
    ktl::u64                 swap_buffer_timestamp;
};

struct physical_device_attachment_feedback_loop_layout_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_attachment_feedback_loop_layout_features_ext;
    void *      next = nullptr;
    ktl::bool32 attachment_feedback_loop_layout;
};

using physical_device_depth_clamp_zero_one_features_ext = physical_device_depth_clamp_zero_one_features_khr;

struct attachment_feedback_loop_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_attachment_feedback_loop_info_ext;
    const void *             next = nullptr;
    ktl::bool32              feedback_loop_enable;
};

struct physical_device_address_binding_report_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_address_binding_report_features_ext;
    void *                   next = nullptr;
    ktl::bool32              report_address_binding;
};

struct rendering_attachment_flags_info_khr final
{
    ktl::api::structure_type                 type  = ktl::api::structure_type::v_rendering_attachment_flags_info_khr;
    const void *                             next  = nullptr;
    ktl::api::rendering_attachment_flags_khr flags = 0;
};

struct resolve_image_mode_info_khr final
{
    ktl::api::structure_type          type                 = ktl::api::structure_type::v_resolve_image_mode_info_khr;
    const void *                      next                 = nullptr;
    ktl::api::resolve_image_flags_khr flags                = 0;
    ktl::api::resolve_mode_flag_bits  resolve_mode         = 0;
    ktl::api::resolve_mode_flag_bits  stencil_resolve_mode = 0;
};

struct device_address_binding_callback_data_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_address_binding_callback_data_ext;
    void *                   next = nullptr;
    ktl::api::device_address_binding_flags_ext flags = 0;
    ktl::dvaddr                                base_address;
    ktl::dvsize                                size;
    ktl::api::device_address_binding_type_ext  binding_type;
};

struct physical_device_optical_flow_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_optical_flow_features_nv;
    void *                   next = nullptr;
    ktl::bool32              optical_flow;
};

struct physical_device_optical_flow_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_optical_flow_properties_nv;
    void *                   next = nullptr;
    ktl::api::optical_flow_grid_size_flags_nv supported_output_grid_sizes;
    ktl::api::optical_flow_grid_size_flags_nv supported_hint_grid_sizes;
    ktl::bool32                               hint_supported;
    ktl::bool32                               cost_supported;
    ktl::bool32                               bidirectional_flow_supported;
    ktl::bool32                               global_flow_supported;
    ktl::i32                                  min_width;
    ktl::i32                                  min_height;
    ktl::i32                                  max_width;
    ktl::i32                                  max_height;
    ktl::i32                                  max_num_regions_of_interest;
};

struct optical_flow_image_format_info_nv final
{
    ktl::api::structure_type              type = ktl::api::structure_type::v_optical_flow_image_format_info_nv;
    const void *                          next = nullptr;
    ktl::api::optical_flow_usage_flags_nv usage;
};

struct optical_flow_image_format_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_optical_flow_image_format_properties_nv;
    void *                   next = nullptr;
    ktl::api::format         format;
};

struct optical_flow_session_create_info_nv final
{
    ktl::api::structure_type                    type = ktl::api::structure_type::v_optical_flow_session_create_info_nv;
    void *                                      next = nullptr;
    ktl::i32                                    width;
    ktl::i32                                    height;
    ktl::api::format                            image_format;
    ktl::api::format                            flow_vector_format;
    ktl::api::format                            cost_format = 0;
    ktl::api::optical_flow_grid_size_flags_nv   output_grid_size;
    ktl::api::optical_flow_grid_size_flags_nv   hint_grid_size    = 0;
    ktl::api::optical_flow_performance_level_nv performance_level = 0;
    ktl::api::optical_flow_session_create_flags_nv flags          = 0;
};

struct optical_flow_session_create_private_data_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_optical_flow_session_create_private_data_info_nv;
    void *                   next = nullptr;
    ktl::i32                 id;
    ktl::i32                 size;
    const void *             private_data;
};

struct optical_flow_execute_info_nv final
{
    ktl::api::structure_type                type         = ktl::api::structure_type::v_optical_flow_execute_info_nv;
    void *                                  next         = nullptr;
    ktl::api::optical_flow_execute_flags_nv flags        = 0;
    ktl::i32                                region_count = 0;
    const ktl::api::rect2d *                regions;
};

struct physical_device_fault_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fault_features_ext;
    void *                   next = nullptr;
    ktl::bool32              device_fault;
    ktl::bool32              device_fault_vendor_binary;
};

struct device_fault_address_info_khr final
{
    ktl::api::device_fault_address_type_khr address_type;
    ktl::dvaddr                             reported_address;
    ktl::dvsize                             address_precision;
};

using device_fault_address_info_ext = device_fault_address_info_khr;

struct device_fault_vendor_info_khr final
{
    char     description[KTL_API_MAX_DESCRIPTION_SIZE];
    ktl::u64 vendor_fault_code;
    ktl::u64 vendor_fault_data;
};

using device_fault_vendor_info_ext = device_fault_vendor_info_khr;

struct device_fault_info_khr final
{
    ktl::api::structure_type                type = ktl::api::structure_type::v_device_fault_info_khr;
    void *                                  next = nullptr;
    ktl::api::device_fault_flags_khr        flags;
    ktl::u64                                group_id;
    char                                    description[KTL_API_MAX_DESCRIPTION_SIZE];
    ktl::api::device_fault_address_info_khr fault_address_info       = 0;
    ktl::api::device_fault_address_info_khr instruction_address_info = 0;
    ktl::api::device_fault_vendor_info_khr  vendor_info              = 0;
};

struct device_fault_debug_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_fault_debug_info_khr;
    void *                   next = nullptr;
    ktl::i32                 vendor_binary_size;
    void *                   vendor_binary_data = nullptr;
};

struct device_fault_counts_ext final
{
    ktl::api::structure_type type               = ktl::api::structure_type::v_device_fault_counts_ext;
    void *                   next               = nullptr;
    ktl::i32                 address_info_count = 0;
    ktl::i32                 vendor_info_count  = 0;
    ktl::dvsize              vendor_binary_size = 0;
};

struct device_fault_info_ext final
{
    ktl::api::structure_type                  type = ktl::api::structure_type::v_device_fault_info_ext;
    void *                                    next = nullptr;
    char                                      description[KTL_API_MAX_DESCRIPTION_SIZE];
    ktl::api::device_fault_address_info_khr * address_infos      = nullptr;
    ktl::api::device_fault_vendor_info_khr *  vendor_infos       = nullptr;
    void *                                    vendor_binary_data = nullptr;
};

struct device_fault_vendor_binary_header_version_one_khr final
{
    ktl::i32                                                header_size;
    ktl::api::device_fault_vendor_binary_header_version_khr header_version;
    ktl::i32                                                vendor_id;
    ktl::i32                                                device_id;
    ktl::i32                                                driver_version;
    ktl::u8                                                 pipeline_cache_uuid[KTL_API_UUID_SIZE];
    ktl::i32                                                application_name_offset;
    ktl::i32                                                application_version;
    ktl::i32                                                engine_name_offset;
    ktl::i32                                                engine_version;
    ktl::i32                                                api_version;
};

using device_fault_vendor_binary_header_version_one_ext = device_fault_vendor_binary_header_version_one_khr;

struct physical_device_fault_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fault_features_khr;
    void *                   next = nullptr;
    ktl::bool32              device_fault;
    ktl::bool32              device_fault_vendor_binary;
    ktl::bool32              device_fault_report_masked;
    ktl::bool32              device_fault_device_lost_on_masked;
};

struct physical_device_fault_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_fault_properties_khr;
    void *                   next = nullptr;
    ktl::i32                 max_device_fault_count;
};

struct physical_device_pipeline_library_group_handles_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_pipeline_library_group_handles_features_ext;
    void *      next = nullptr;
    ktl::bool32 pipeline_library_group_handles;
};

struct depth_bias_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_depth_bias_info_ext;
    const void *             next = nullptr;
    float                    depth_bias_constant_factor;
    float                    depth_bias_clamp;
    float                    depth_bias_slope_factor;
};

struct depth_bias_representation_info_ext final
{
    ktl::api::structure_type                type = ktl::api::structure_type::v_depth_bias_representation_info_ext;
    const void *                            next = nullptr;
    ktl::api::depth_bias_representation_ext depth_bias_representation;
    ktl::bool32                             depth_bias_exact;
};

struct decompress_memory_region_nv final
{
    ktl::dvaddr                                    src_address;
    ktl::dvaddr                                    dst_address;
    ktl::dvsize                                    compressed_size;
    ktl::dvsize                                    decompressed_size;
    ktl::api::memory_decompression_method_flags_nv decompression_method;
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
    ktl::api::structure_type                        type = ktl::api::structure_type::v_decompress_memory_info_ext;
    const void *                                    next = nullptr;
    ktl::api::memory_decompression_method_flags_ext decompression_method;
    ktl::i32                                        region_count;
    const ktl::api::decompress_memory_region_ext *  regions;
};

struct physical_device_shader_core_builtins_properties_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_core_builtins_properties_arm;
    void *                   next = nullptr;
    ktl::u64                 shader_core_mask;
    ktl::i32                 shader_core_count;
    ktl::i32                 shader_warps_per_core;
};

struct physical_device_shader_core_builtins_features_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_core_builtins_features_arm;
    void *                   next = nullptr;
    ktl::bool32              shader_core_builtins;
};

struct frame_boundary_ext final
{
    ktl::api::structure_type           type  = ktl::api::structure_type::v_frame_boundary_ext;
    const void *                       next  = nullptr;
    ktl::api::frame_boundary_flags_ext flags = 0;
    ktl::u64                           frame_id;
    ktl::i32                           image_count  = 0;
    const ktl::api::image *            images       = nullptr;
    ktl::i32                           buffer_count = 0;
    const ktl::api::buffer *           buffers      = nullptr;
    ktl::u64                           tag_name     = 0;
    ktl::usize                         tag_size     = 0;
    const void *                       tag          = nullptr;
};

struct physical_device_frame_boundary_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_frame_boundary_features_ext;
    void *                   next = nullptr;
    ktl::bool32              frame_boundary;
};

struct physical_device_dynamic_rendering_unused_attachments_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_dynamic_rendering_unused_attachments_features_ext;
    void *      next = nullptr;
    ktl::bool32 dynamic_rendering_unused_attachments;
};

struct physical_device_internally_synchronized_queues_features_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_internally_synchronized_queues_features_khr;
    void *      next = nullptr;
    ktl::bool32 internally_synchronized_queues;
};

struct surface_present_mode_khr final
{
    ktl::api::structure_type   type = ktl::api::structure_type::v_surface_present_mode_khr;
    void *                     next = nullptr;
    ktl::api::present_mode_khr present_mode;
};

using surface_present_mode_ext = surface_present_mode_khr;

struct surface_present_scaling_capabilities_khr final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_surface_present_scaling_capabilities_khr;
    void *                              next = nullptr;
    ktl::api::present_scaling_flags_khr supported_present_scaling   = 0;
    ktl::api::present_gravity_flags_khr supported_present_gravity_x = 0;
    ktl::api::present_gravity_flags_khr supported_present_gravity_y = 0;
    ktl::api::extent2d                  min_scaled_image_extent     = 0;
    ktl::api::extent2d                  max_scaled_image_extent     = 0;
};

using surface_present_scaling_capabilities_ext = surface_present_scaling_capabilities_khr;

struct surface_present_mode_compatibility_khr final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_surface_present_mode_compatibility_khr;
    void *                       next = nullptr;
    ktl::i32                     present_mode_count = 0;
    ktl::api::present_mode_khr * present_modes      = nullptr;
};

using surface_present_mode_compatibility_ext = surface_present_mode_compatibility_khr;

struct physical_device_swapchain_maintenance1features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_swapchain_maintenance_1_features_khr;
    void *                   next = nullptr;
    ktl::bool32              swapchain_maintenance1;
};

using physical_device_swapchain_maintenance1features_ext = physical_device_swapchain_maintenance1features_khr;

struct swapchain_present_fence_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_swapchain_present_fence_info_khr;
    const void *             next = nullptr;
    ktl::i32                 swapchain_count;
    const ktl::api::fence *  fences;
};

using swapchain_present_fence_info_ext = swapchain_present_fence_info_khr;

struct swapchain_present_modes_create_info_khr final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_swapchain_present_modes_create_info_khr;
    const void *                       next = nullptr;
    ktl::i32                           present_mode_count;
    const ktl::api::present_mode_khr * present_modes;
};

using swapchain_present_modes_create_info_ext = swapchain_present_modes_create_info_khr;

struct swapchain_present_mode_info_khr final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_swapchain_present_mode_info_khr;
    const void *                       next = nullptr;
    ktl::i32                           swapchain_count;
    const ktl::api::present_mode_khr * present_modes;
};

using swapchain_present_mode_info_ext = swapchain_present_mode_info_khr;

struct swapchain_present_scaling_create_info_khr final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_swapchain_present_scaling_create_info_khr;
    const void *                        next = nullptr;
    ktl::api::present_scaling_flags_khr scaling_behavior  = 0;
    ktl::api::present_gravity_flags_khr present_gravity_x = 0;
    ktl::api::present_gravity_flags_khr present_gravity_y = 0;
};

using swapchain_present_scaling_create_info_ext = swapchain_present_scaling_create_info_khr;

struct release_swapchain_images_info_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_release_swapchain_images_info_khr;
    const void *             next = nullptr;
    ktl::api::swapchain_khr  swapchain;
    ktl::i32                 image_index_count;
    const ktl::i32 *         image_indices;
};

using release_swapchain_images_info_ext = release_swapchain_images_info_khr;

struct physical_device_depth_bias_control_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_depth_bias_control_features_ext;
    void *                   next = nullptr;
    ktl::bool32              depth_bias_control;
    ktl::bool32              least_representable_value_force_unorm_representation;
    ktl::bool32              float_representation;
    ktl::bool32              depth_bias_exact;
};

struct physical_device_ray_tracing_invocation_reorder_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_features_ext;
    void *      next = nullptr;
    ktl::bool32 ray_tracing_invocation_reorder;
};

struct physical_device_ray_tracing_invocation_reorder_features_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_features_nv;
    void *      next = nullptr;
    ktl::bool32 ray_tracing_invocation_reorder;
};

struct physical_device_ray_tracing_invocation_reorder_properties_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_properties_ext;
    void *                                            next = nullptr;
    ktl::api::ray_tracing_invocation_reorder_mode_ext ray_tracing_invocation_reorder_reordering_hint;
    ktl::i32                                          max_shader_binding_table_record_index;
};

struct physical_device_ray_tracing_invocation_reorder_properties_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_ray_tracing_invocation_reorder_properties_nv;
    void *                                            next = nullptr;
    ktl::api::ray_tracing_invocation_reorder_mode_ext ray_tracing_invocation_reorder_reordering_hint;
};

struct physical_device_extended_sparse_address_space_features_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_extended_sparse_address_space_features_nv;
    void *      next = nullptr;
    ktl::bool32 extended_sparse_address_space;
};

struct physical_device_extended_sparse_address_space_properties_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_extended_sparse_address_space_properties_nv;
    void *                       next = nullptr;
    ktl::dvsize                  extended_sparse_address_space_size;
    ktl::api::image_usage_flags  extended_sparse_image_usage_flags;
    ktl::api::buffer_usage_flags extended_sparse_buffer_usage_flags;
};

struct direct_driver_loading_info_lunarg final
{
    ktl::api::structure_type                       type = ktl::api::structure_type::v_direct_driver_loading_info_lunarg;
    void *                                         next = nullptr;
    ktl::api::direct_driver_loading_flags_lunarg   flags;
    ktl::api::pfn_vk_get_instance_proc_addr_lunarg pfn_get_instance_proc_addr;
};

struct direct_driver_loading_list_lunarg final
{
    ktl::api::structure_type                    type = ktl::api::structure_type::v_direct_driver_loading_list_lunarg;
    const void *                                next = nullptr;
    ktl::api::direct_driver_loading_mode_lunarg mode;
    ktl::i32                                    driver_count;
    const ktl::api::direct_driver_loading_info_lunarg * drivers;
};

struct physical_device_multiview_per_view_viewports_features_qcom final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_multiview_per_view_viewports_features_qcom;
    void *      next = nullptr;
    ktl::bool32 multiview_per_view_viewports;
};

struct physical_device_ray_tracing_position_fetch_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ray_tracing_position_fetch_features_khr;
    void *                   next = nullptr;
    ktl::bool32              ray_tracing_position_fetch;
};

struct device_image_subresource_info final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_device_image_subresource_info;
    const void *                         next = nullptr;
    const ktl::api::image_create_info *  create_info;
    const ktl::api::image_subresource2 * subresource;
};

using device_image_subresource_info_khr = device_image_subresource_info;

struct physical_device_shader_core_properties_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_core_properties_arm;
    void *                   next = nullptr;
    ktl::i32                 pixel_rate;
    ktl::i32                 texel_rate;
    ktl::i32                 fma_rate;
};

struct physical_device_multiview_per_view_render_areas_features_qcom final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_multiview_per_view_render_areas_features_qcom;
    void *      next = nullptr;
    ktl::bool32 multiview_per_view_render_areas;
};

struct multiview_per_view_render_areas_render_pass_begin_info_qcom final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_multiview_per_view_render_areas_render_pass_begin_info_qcom;
    const void *             next                       = nullptr;
    ktl::i32                 per_view_render_area_count = 0;
    const ktl::api::rect2d * per_view_render_areas;
};

struct query_low_latency_support_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_query_low_latency_support_nv;
    const void *             next = nullptr;
    void *                   queried_low_latency_data;
};

struct memory_map_info final
{
    ktl::api::structure_type   type  = ktl::api::structure_type::v_memory_map_info;
    const void *               next  = nullptr;
    ktl::api::memory_map_flags flags = 0;
    ktl::api::device_memory    memory;
    ktl::dvsize                offset;
    ktl::dvsize                size;
};

using memory_map_info_khr = memory_map_info;

struct memory_unmap_info final
{
    ktl::api::structure_type     type  = ktl::api::structure_type::v_memory_unmap_info;
    const void *                 next  = nullptr;
    ktl::api::memory_unmap_flags flags = 0;
    ktl::api::device_memory      memory;
};

using memory_unmap_info_khr = memory_unmap_info;

struct physical_device_shader_object_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_object_features_ext;
    void *                   next = nullptr;
    ktl::bool32              shader_object;
};

struct physical_device_shader_object_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_object_properties_ext;
    void *                   next = nullptr;
    ktl::u8                  shader_binary_uuid[KTL_API_UUID_SIZE];
    ktl::i32                 shader_binary_version;
};

struct shader_create_info_ext final
{
    ktl::api::structure_type                type  = ktl::api::structure_type::v_shader_create_info_ext;
    const void *                            next  = nullptr;
    ktl::api::shader_create_flags_ext       flags = 0;
    ktl::api::shader_stage_flag_bits        stage;
    ktl::api::shader_stage_flags            next_stage = 0;
    ktl::api::shader_code_type_ext          code_type;
    ktl::usize                              code_size;
    const void *                            code;
    const char *                            name                      = nullptr;
    ktl::i32                                set_layout_count          = 0;
    const ktl::api::descriptor_set_layout * set_layouts               = nullptr;
    ktl::i32                                push_constant_range_count = 0;
    const ktl::api::push_constant_range *   push_constant_ranges      = nullptr;
    const ktl::api::specialization_info *   specialization_info       = nullptr;
};

struct physical_device_shader_tile_image_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_tile_image_features_ext;
    void *                   next = nullptr;
    ktl::bool32              shader_tile_image_color_read_access;
    ktl::bool32              shader_tile_image_depth_read_access;
    ktl::bool32              shader_tile_image_stencil_read_access;
};

struct physical_device_shader_tile_image_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_tile_image_properties_ext;
    void *                   next = nullptr;
    ktl::bool32              shader_tile_image_coherent_read_accelerated;
    ktl::bool32              shader_tile_image_read_sample_from_pixel_rate_invocation;
    ktl::bool32              shader_tile_image_read_from_helper_invocation;
};

struct import_screen_buffer_info_qnx final
{
    ktl::api::structure_type   type = ktl::api::structure_type::v_import_screen_buffer_info_qnx;
    const void *               next = nullptr;
    ktl::api::_screen_buffer * buffer;
};

struct screen_buffer_properties_qnx final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_screen_buffer_properties_qnx;
    void *                   next = nullptr;
    ktl::dvsize              allocation_size;
    ktl::i32                 memory_type_bits;
};

struct screen_buffer_format_properties_qnx final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_screen_buffer_format_properties_qnx;
    void *                                   next = nullptr;
    ktl::api::format                         format;
    ktl::u64                                 external_format;
    ktl::u64                                 screen_usage;
    ktl::api::format_feature_flags           format_features;
    ktl::api::component_mapping              sampler_ycbcr_conversion_components;
    ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
    ktl::api::sampler_ycbcr_range            suggested_ycbcr_range;
    ktl::api::chroma_location                suggested_xchroma_offset;
    ktl::api::chroma_location                suggested_ychroma_offset;
};

struct external_format_qnx final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_external_format_qnx;
    void *                   next = nullptr;
    ktl::u64                 external_format;
};

struct physical_device_external_memory_screen_buffer_features_qnx final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_external_memory_screen_buffer_features_qnx;
    void *      next = nullptr;
    ktl::bool32 screen_buffer_import;
};

struct physical_device_cooperative_matrix_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_matrix_features_khr;
    void *                   next = nullptr;
    ktl::bool32              cooperative_matrix;
    ktl::bool32              cooperative_matrix_robust_buffer_access;
};

struct cooperative_matrix_properties_khr final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_cooperative_matrix_properties_khr;
    void *                       next = nullptr;
    ktl::i32                     msize;
    ktl::i32                     nsize;
    ktl::i32                     ksize;
    ktl::api::component_type_khr atype;
    ktl::api::component_type_khr btype;
    ktl::api::component_type_khr ctype;
    ktl::api::component_type_khr result_type;
    ktl::bool32                  saturating_accumulation;
    ktl::api::scope_khr          scope;
};

struct physical_device_cooperative_matrix_properties_khr final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_physical_device_cooperative_matrix_properties_khr;
    void *                       next = nullptr;
    ktl::api::shader_stage_flags cooperative_matrix_supported_stages;
};

struct physical_device_cooperative_matrix_conversion_features_qcom final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_cooperative_matrix_conversion_features_qcom;
    void *      next = nullptr;
    ktl::bool32 cooperative_matrix_conversion;
};

struct physical_device_shader_enqueue_properties_amdx final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_enqueue_properties_amdx;
    void *                   next = nullptr;
    ktl::i32                 max_execution_graph_depth;
    ktl::i32                 max_execution_graph_shader_output_nodes;
    ktl::i32                 max_execution_graph_shader_payload_size;
    ktl::i32                 max_execution_graph_shader_payload_count;
    ktl::i32                 execution_graph_dispatch_address_alignment;
    ktl::i32                 max_execution_graph_workgroup_count[3];
    ktl::i32                 max_execution_graph_workgroups;
};

struct physical_device_shader_enqueue_features_amdx final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_enqueue_features_amdx;
    void *                   next = nullptr;
    ktl::bool32              shader_enqueue;
    ktl::bool32              shader_mesh_enqueue;
};

struct execution_graph_pipeline_create_info_amdx final
{
    ktl::api::structure_type        type        = ktl::api::structure_type::v_execution_graph_pipeline_create_info_amdx;
    const void *                    next        = nullptr;
    ktl::api::pipeline_create_flags flags       = 0;
    ktl::i32                        stage_count = 0;
    const ktl::api::pipeline_shader_stage_create_info * stages               = nullptr;
    const ktl::api::pipeline_library_create_info_khr *  library_info         = nullptr;
    ktl::api::pipeline_layout                           layout               = 0;
    ktl::api::pipeline                                  base_pipeline_handle = 0;
    ktl::i32                                            base_pipeline_index;
};

struct pipeline_shader_stage_node_create_info_amdx final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_shader_stage_node_create_info_amdx;
    const void *             next = nullptr;
    const char *             name = nullptr;
    ktl::i32                 index;
};

struct execution_graph_pipeline_scratch_size_amdx final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_execution_graph_pipeline_scratch_size_amdx;
    void *                   next = nullptr;
    ktl::dvsize              min_size;
    ktl::dvsize              max_size;
    ktl::dvsize              size_granularity;
};

struct dispatch_graph_info_amdx final
{
    ktl::i32                                    node_index;
    ktl::i32                                    payload_count = 0;
    ktl::api::device_or_host_address_const_amdx payloads;
    ktl::u64                                    payload_stride;
};

struct dispatch_graph_count_info_amdx final
{
    ktl::i32                                    count = 0;
    ktl::api::device_or_host_address_const_amdx infos;
    ktl::u64                                    stride;
};

struct physical_device_anti_lag_features_amd final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_anti_lag_features_amd;
    void *                   next = nullptr;
    ktl::bool32              anti_lag;
};

struct anti_lag_data_amd final
{
    ktl::api::structure_type                         type = ktl::api::structure_type::v_anti_lag_data_amd;
    const void *                                     next = nullptr;
    ktl::api::anti_lag_mode_amd                      mode;
    ktl::i32                                         max_fps;
    const ktl::api::anti_lag_presentation_info_amd * presentation_info = nullptr;
};

struct anti_lag_presentation_info_amd final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_anti_lag_presentation_info_amd;
    void *                       next = nullptr;
    ktl::api::anti_lag_stage_amd stage;
    ktl::u64                     frame_index;
};

struct bind_memory_status final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_bind_memory_status;
    const void *             next = nullptr;
    ktl::api::result *       result;
};

struct physical_device_tile_memory_heap_features_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tile_memory_heap_features_qcom;
    void *                   next = nullptr;
    ktl::bool32              tile_memory_heap;
};

struct physical_device_tile_memory_heap_properties_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tile_memory_heap_properties_qcom;
    void *                   next = nullptr;
    ktl::bool32              queue_submit_boundary;
    ktl::bool32              tile_buffer_transfers;
};

struct tile_memory_size_info_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_tile_memory_size_info_qcom;
    const void *             next = nullptr;
    ktl::dvsize              size;
};

struct tile_memory_requirements_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_tile_memory_requirements_qcom;
    void *                   next = nullptr;
    ktl::dvsize              size;
    ktl::dvsize              alignment;
};

using bind_memory_status_khr = bind_memory_status;

struct bind_descriptor_sets_info final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_bind_descriptor_sets_info;
    const void *                     next = nullptr;
    ktl::api::shader_stage_flags     stage_flags;
    ktl::api::pipeline_layout        layout    = 0;
    ktl::i32                         first_set = 0;
    ktl::i32                         descriptor_set_count;
    const ktl::api::descriptor_set * descriptor_sets;
    ktl::i32                         dynamic_offset_count = 0;
    const ktl::i32 *                 dynamic_offsets;
};

using bind_descriptor_sets_info_khr = bind_descriptor_sets_info;

struct push_constants_info final
{
    ktl::api::structure_type     type   = ktl::api::structure_type::v_push_constants_info;
    const void *                 next   = nullptr;
    ktl::api::pipeline_layout    layout = 0;
    ktl::api::shader_stage_flags stage_flags;
    ktl::i32                     offset = 0;
    ktl::i32                     size;
    const void *                 values;
};

using push_constants_info_khr = push_constants_info;

struct push_descriptor_set_info final
{
    ktl::api::structure_type               type = ktl::api::structure_type::v_push_descriptor_set_info;
    const void *                           next = nullptr;
    ktl::api::shader_stage_flags           stage_flags;
    ktl::api::pipeline_layout              layout = 0;
    ktl::i32                               set    = 0;
    ktl::i32                               descriptor_write_count;
    const ktl::api::write_descriptor_set * descriptor_writes;
};

using push_descriptor_set_info_khr = push_descriptor_set_info;

struct push_descriptor_set_with_template_info final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_push_descriptor_set_with_template_info;
    const void *                         next = nullptr;
    ktl::api::descriptor_update_template descriptor_update_template;
    ktl::api::pipeline_layout            layout = 0;
    ktl::i32                             set    = 0;
    const void *                         data;
};

using push_descriptor_set_with_template_info_khr = push_descriptor_set_with_template_info;

struct set_descriptor_buffer_offsets_info_ext final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_set_descriptor_buffer_offsets_info_ext;
    const void *                 next = nullptr;
    ktl::api::shader_stage_flags stage_flags;
    ktl::api::pipeline_layout    layout    = 0;
    ktl::i32                     first_set = 0;
    ktl::i32                     set_count;
    const ktl::i32 *             buffer_indices;
    const ktl::dvsize *          offsets;
};

struct bind_descriptor_buffer_embedded_samplers_info_ext final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_bind_descriptor_buffer_embedded_samplers_info_ext;
    const void *                 next = nullptr;
    ktl::api::shader_stage_flags stage_flags;
    ktl::api::pipeline_layout    layout = 0;
    ktl::i32                     set    = 0;
};

struct physical_device_cubic_clamp_features_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cubic_clamp_features_qcom;
    void *                   next = nullptr;
    ktl::bool32              cubic_range_clamp;
};

struct physical_device_ycbcr_degamma_features_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_ycbcr_degamma_features_qcom;
    void *                   next = nullptr;
    ktl::bool32              ycbcr_degamma;
};

struct sampler_ycbcr_conversion_ycbcr_degamma_create_info_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_sampler_ycbcr_conversion_ycbcr_degamma_create_info_qcom;
    void *                   next = nullptr;
    ktl::bool32              enable_ydegamma;
    ktl::bool32              enable_cb_cr_degamma;
};

struct physical_device_cubic_weights_features_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cubic_weights_features_qcom;
    void *                   next = nullptr;
    ktl::bool32              selectable_cubic_weights;
};

struct sampler_cubic_weights_create_info_qcom final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_sampler_cubic_weights_create_info_qcom;
    const void *                        next = nullptr;
    ktl::api::cubic_filter_weights_qcom cubic_weights;
};

struct blit_image_cubic_weights_info_qcom final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_blit_image_cubic_weights_info_qcom;
    const void *                        next = nullptr;
    ktl::api::cubic_filter_weights_qcom cubic_weights;
};

struct physical_device_image_processing2features_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_processing_2_features_qcom;
    void *                   next = nullptr;
    ktl::bool32              texture_block_match2;
};

struct physical_device_image_processing2properties_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_processing_2_properties_qcom;
    void *                   next = nullptr;
    ktl::api::extent2d       max_block_match_window = 0;
};

struct sampler_block_match_window_create_info_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_sampler_block_match_window_create_info_qcom;
    const void *             next = nullptr;
    ktl::api::extent2d       window_extent;
    ktl::api::block_match_window_compare_mode_qcom window_compare_mode;
};

struct physical_device_descriptor_pool_overallocation_features_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_descriptor_pool_overallocation_features_nv;
    void *      next = nullptr;
    ktl::bool32 descriptor_pool_overallocation;
};

struct physical_device_layered_driver_properties_msft final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_layered_driver_properties_msft;
    void *                   next = nullptr;
    ktl::api::layered_driver_underlying_api_msft underlying_api;
};

struct physical_device_per_stage_descriptor_set_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_per_stage_descriptor_set_features_nv;
    void *                   next = nullptr;
    ktl::bool32              per_stage_descriptor_set;
    ktl::bool32              dynamic_pipeline_layout;
};

struct physical_device_external_format_resolve_features_android final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_external_format_resolve_features_android;
    void *      next = nullptr;
    ktl::bool32 external_format_resolve;
};

struct physical_device_external_format_resolve_properties_android final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_external_format_resolve_properties_android;
    void *                    next = nullptr;
    ktl::bool32               null_color_attachment_with_external_format_resolve;
    ktl::api::chroma_location external_format_resolve_chroma_offset_x;
    ktl::api::chroma_location external_format_resolve_chroma_offset_y;
};

struct android_hardware_buffer_format_resolve_properties_android final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_android_hardware_buffer_format_resolve_properties_android;
    void *           next = nullptr;
    ktl::api::format color_attachment_format;
};

struct latency_sleep_mode_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_latency_sleep_mode_info_nv;
    const void *             next = nullptr;
    ktl::bool32              low_latency_mode;
    ktl::bool32              low_latency_boost;
    ktl::i32                 minimum_interval_us;
};

struct latency_sleep_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_latency_sleep_info_nv;
    const void *             next = nullptr;
    ktl::api::semaphore      signal_semaphore;
    ktl::u64                 value;
};

struct set_latency_marker_info_nv final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_set_latency_marker_info_nv;
    const void *                next = nullptr;
    ktl::u64                    present_id;
    ktl::api::latency_marker_nv marker;
};

struct get_latency_marker_info_nv final
{
    ktl::api::structure_type                    type         = ktl::api::structure_type::v_get_latency_marker_info_nv;
    const void *                                next         = nullptr;
    ktl::i32                                    timing_count = 0;
    ktl::api::latency_timings_frame_report_nv * timings      = nullptr;
};

struct latency_timings_frame_report_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_latency_timings_frame_report_nv;
    void *                   next = nullptr;
    ktl::u64                 present_id;
    ktl::u64                 input_sample_time_us;
    ktl::u64                 sim_start_time_us;
    ktl::u64                 sim_end_time_us;
    ktl::u64                 render_submit_start_time_us;
    ktl::u64                 render_submit_end_time_us;
    ktl::u64                 present_start_time_us;
    ktl::u64                 present_end_time_us;
    ktl::u64                 driver_start_time_us;
    ktl::u64                 driver_end_time_us;
    ktl::u64                 os_render_queue_start_time_us;
    ktl::u64                 os_render_queue_end_time_us;
    ktl::u64                 gpu_render_start_time_us;
    ktl::u64                 gpu_render_end_time_us;
};

struct out_of_band_queue_type_info_nv final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_out_of_band_queue_type_info_nv;
    const void *                        next = nullptr;
    ktl::api::out_of_band_queue_type_nv queue_type;
};

struct latency_submission_present_id_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_latency_submission_present_id_nv;
    const void *             next = nullptr;
    ktl::u64                 present_id;
};

struct swapchain_latency_create_info_nv final
{
    ktl::api::structure_type type                = ktl::api::structure_type::v_swapchain_latency_create_info_nv;
    const void *             next                = nullptr;
    ktl::bool32              latency_mode_enable = 0;
};

struct latency_surface_capabilities_nv final
{
    ktl::api::structure_type     type               = ktl::api::structure_type::v_latency_surface_capabilities_nv;
    const void *                 next               = nullptr;
    ktl::i32                     present_mode_count = 0;
    ktl::api::present_mode_khr * present_modes      = nullptr;
};

struct physical_device_cuda_kernel_launch_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cuda_kernel_launch_features_nv;
    void *                   next = nullptr;
    ktl::bool32              cuda_kernel_launch_features;
};

struct physical_device_cuda_kernel_launch_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cuda_kernel_launch_properties_nv;
    void *                   next = nullptr;
    ktl::i32                 compute_capability_minor;
    ktl::i32                 compute_capability_major;
};

struct device_queue_shader_core_control_create_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_device_queue_shader_core_control_create_info_arm;
    void *                   next = nullptr;
    ktl::i32                 shader_core_count;
};

struct physical_device_scheduling_controls_features_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_scheduling_controls_features_arm;
    void *                   next = nullptr;
    ktl::bool32              scheduling_controls;
};

struct physical_device_scheduling_controls_properties_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_scheduling_controls_properties_arm;
    void *                   next = nullptr;
    ktl::api::physical_device_scheduling_controls_flags_arm scheduling_controls_flags;
};

struct physical_device_relaxed_line_rasterization_features_img final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_relaxed_line_rasterization_features_img;
    void *                   next = nullptr;
    ktl::bool32              relaxed_line_rasterization;
};

struct physical_device_render_pass_striped_features_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_render_pass_striped_features_arm;
    void *                   next = nullptr;
    ktl::bool32              render_pass_striped;
};

struct physical_device_render_pass_striped_properties_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_render_pass_striped_properties_arm;
    void *                   next = nullptr;
    ktl::api::extent2d       render_pass_stripe_granularity;
    ktl::i32                 max_render_pass_stripes;
};

struct render_pass_stripe_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_stripe_info_arm;
    const void *             next = nullptr;
    ktl::api::rect2d         stripe_area;
};

struct render_pass_stripe_begin_info_arm final
{
    ktl::api::structure_type                      type = ktl::api::structure_type::v_render_pass_stripe_begin_info_arm;
    const void *                                  next = nullptr;
    ktl::i32                                      stripe_info_count;
    const ktl::api::render_pass_stripe_info_arm * stripe_infos;
};

struct render_pass_stripe_submit_info_arm final
{
    ktl::api::structure_type                type = ktl::api::structure_type::v_render_pass_stripe_submit_info_arm;
    const void *                            next = nullptr;
    ktl::i32                                stripe_semaphore_info_count;
    const ktl::api::semaphore_submit_info * stripe_semaphore_infos;
};

struct physical_device_pipeline_opacity_micromap_features_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_pipeline_opacity_micromap_features_arm;
    void *                   next = nullptr;
    ktl::bool32              pipeline_opacity_micromap;
};

struct physical_device_shader_maximal_reconvergence_features_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_shader_maximal_reconvergence_features_khr;
    void *      next = nullptr;
    ktl::bool32 shader_maximal_reconvergence;
};

struct physical_device_shader_subgroup_rotate_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_subgroup_rotate_features;
    void *                   next = nullptr;
    ktl::bool32              shader_subgroup_rotate;
    ktl::bool32              shader_subgroup_rotate_clustered;
};

using physical_device_shader_subgroup_rotate_features_khr = physical_device_shader_subgroup_rotate_features;

struct physical_device_shader_expect_assume_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_expect_assume_features;
    void *                   next = nullptr;
    ktl::bool32              shader_expect_assume;
};

using physical_device_shader_expect_assume_features_khr = physical_device_shader_expect_assume_features;

struct physical_device_shader_float_controls2features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_float_controls_2_features;
    void *                   next = nullptr;
    ktl::bool32              shader_float_controls2;
};

using physical_device_shader_float_controls2features_khr = physical_device_shader_float_controls2features;

struct physical_device_dynamic_rendering_local_read_features final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_dynamic_rendering_local_read_features;
    void *                   next = nullptr;
    ktl::bool32              dynamic_rendering_local_read;
};

using physical_device_dynamic_rendering_local_read_features_khr = physical_device_dynamic_rendering_local_read_features;

struct rendering_attachment_location_info final
{
    ktl::api::structure_type type                   = ktl::api::structure_type::v_rendering_attachment_location_info;
    const void *             next                   = nullptr;
    ktl::i32                 color_attachment_count = 0;
    const ktl::i32 *         color_attachment_locations;
};

using rendering_attachment_location_info_khr = rendering_attachment_location_info;

struct rendering_input_attachment_index_info final
{
    ktl::api::structure_type type                   = ktl::api::structure_type::v_rendering_input_attachment_index_info;
    const void *             next                   = nullptr;
    ktl::i32                 color_attachment_count = 0;
    const ktl::i32 *         color_attachment_input_indices = nullptr;
    const ktl::i32 *         depth_input_attachment_index   = nullptr;
    const ktl::i32 *         stencil_input_attachment_index = nullptr;
};

using rendering_input_attachment_index_info_khr = rendering_input_attachment_index_info;

struct physical_device_shader_quad_control_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_quad_control_features_khr;
    void *                   next = nullptr;
    ktl::bool32              shader_quad_control;
};

struct physical_device_shader_atomic_float16vector_features_nv final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_shader_atomic_float16_vector_features_nv;
    void *      next = nullptr;
    ktl::bool32 shader_float16vector_atomics;
};

struct physical_device_map_memory_placed_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_map_memory_placed_features_ext;
    void *                   next = nullptr;
    ktl::bool32              memory_map_placed;
    ktl::bool32              memory_map_range_placed;
    ktl::bool32              memory_unmap_reserve;
};

struct physical_device_map_memory_placed_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_map_memory_placed_properties_ext;
    void *                   next = nullptr;
    ktl::dvsize              min_placed_memory_map_alignment;
};

struct memory_map_placed_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_map_placed_info_ext;
    const void *             next = nullptr;
    void *                   placed_address;
};

struct physical_device_shader_bfloat16features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_bfloat16_features_khr;
    void *                   next = nullptr;
    ktl::bool32              shader_bfloat16type;
    ktl::bool32              shader_bfloat16dot_product;
    ktl::bool32              shader_bfloat16cooperative_matrix;
};

struct physical_device_raw_access_chains_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_raw_access_chains_features_nv;
    void *                   next = nullptr;
    ktl::bool32              shader_raw_access_chains;
};

struct physical_device_command_buffer_inheritance_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_command_buffer_inheritance_features_nv;
    void *                   next = nullptr;
    ktl::bool32              command_buffer_inheritance;
};

struct physical_device_image_alignment_control_features_mesa final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_alignment_control_features_mesa;
    void *                   next = nullptr;
    ktl::bool32              image_alignment_control;
};

struct physical_device_image_alignment_control_properties_mesa final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_image_alignment_control_properties_mesa;
    void *                   next = nullptr;
    ktl::i32                 supported_image_alignment_mask;
};

struct image_alignment_control_create_info_mesa final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_image_alignment_control_create_info_mesa;
    const void *             next = nullptr;
    ktl::i32                 maximum_requested_alignment;
};

struct physical_device_shader_replicated_composites_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_shader_replicated_composites_features_ext;
    void *      next = nullptr;
    ktl::bool32 shader_replicated_composites;
};

using physical_device_present_mode_fifo_latest_ready_features_ext =
    physical_device_present_mode_fifo_latest_ready_features_khr;

struct physical_device_present_mode_fifo_latest_ready_features_khr final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_present_mode_fifo_latest_ready_features_khr;
    void *      next = nullptr;
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
    void *                   next = nullptr;
    ktl::bool32              cooperative_matrix_workgroup_scope;
    ktl::bool32              cooperative_matrix_flexible_dimensions;
    ktl::bool32              cooperative_matrix_reductions;
    ktl::bool32              cooperative_matrix_conversions;
    ktl::bool32              cooperative_matrix_per_element_operations;
    ktl::bool32              cooperative_matrix_tensor_addressing;
    ktl::bool32              cooperative_matrix_block_loads;
};

struct physical_device_cooperative_matrix2properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_matrix_2_properties_nv;
    void *                   next = nullptr;
    ktl::i32                 cooperative_matrix_workgroup_scope_max_workgroup_size;
    ktl::i32                 cooperative_matrix_flexible_dimensions_max_dimension;
    ktl::i32                 cooperative_matrix_workgroup_scope_reserved_shared_memory;
};

struct cooperative_matrix_flexible_dimensions_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_cooperative_matrix_flexible_dimensions_properties_nv;
    void *                   next = nullptr;
    ktl::i32                 mgranularity;
    ktl::i32                 ngranularity;
    ktl::i32                 kgranularity;
    ktl::api::component_type_khr atype;
    ktl::api::component_type_khr btype;
    ktl::api::component_type_khr ctype;
    ktl::api::component_type_khr result_type;
    ktl::bool32                  saturating_accumulation;
    ktl::api::scope_khr          scope;
    ktl::i32                     workgroup_invocations;
};

struct physical_device_hdr_vivid_features_huawei final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_hdr_vivid_features_huawei;
    void *                   next = nullptr;
    ktl::bool32              hdr_vivid;
};

struct physical_device_vertex_attribute_robustness_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_vertex_attribute_robustness_features_ext;
    void *      next = nullptr;
    ktl::bool32 vertex_attribute_robustness;
};

struct physical_device_dense_geometry_format_features_amdx final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_dense_geometry_format_features_amdx;
    void *                   next = nullptr;
    ktl::bool32              dense_geometry_format;
};

struct acceleration_structure_dense_geometry_format_triangles_data_amdx final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_acceleration_structure_dense_geometry_format_triangles_data_amdx;
    const void *                               next = nullptr;
    ktl::api::device_or_host_address_const_khr compressed_data;
    ktl::dvsize                                data_size;
    ktl::i32                                   num_triangles;
    ktl::i32                                   num_vertices;
    ktl::i32                                   max_primitive_index;
    ktl::i32                                   max_geometry_index;
    ktl::api::compressed_triangle_format_amdx  format;
};

struct physical_device_depth_clamp_zero_one_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_depth_clamp_zero_one_features_khr;
    void *                   next = nullptr;
    ktl::bool32              depth_clamp_zero_one;
};

struct physical_device_cooperative_vector_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_cooperative_vector_features_nv;
    void *                   next = nullptr;
    ktl::bool32              cooperative_vector;
    ktl::bool32              cooperative_vector_training;
};

struct cooperative_vector_properties_nv final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_cooperative_vector_properties_nv;
    void *                       next = nullptr;
    ktl::api::component_type_khr input_type;
    ktl::api::component_type_khr input_interpretation;
    ktl::api::component_type_khr matrix_interpretation;
    ktl::api::component_type_khr bias_interpretation;
    ktl::api::component_type_khr result_type;
    ktl::bool32                  transpose;
};

struct physical_device_cooperative_vector_properties_nv final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_physical_device_cooperative_vector_properties_nv;
    void *                       next = nullptr;
    ktl::api::shader_stage_flags cooperative_vector_supported_stages;
    ktl::bool32                  cooperative_vector_training_float16accumulation;
    ktl::bool32                  cooperative_vector_training_float32accumulation;
    ktl::i32                     max_cooperative_vector_components;
};

struct convert_cooperative_vector_matrix_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_convert_cooperative_vector_matrix_info_nv;
    const void *             next = nullptr;
    ktl::usize               src_size;
    ktl::api::device_or_host_address_const_khr    src_data;
    ktl::usize *                                  dst_size;
    ktl::api::device_or_host_address_khr          dst_data;
    ktl::api::component_type_khr                  src_component_type;
    ktl::api::component_type_khr                  dst_component_type;
    ktl::i32                                      num_rows;
    ktl::i32                                      num_columns;
    ktl::api::cooperative_vector_matrix_layout_nv src_layout;
    ktl::usize                                    src_stride;
    ktl::api::cooperative_vector_matrix_layout_nv dst_layout;
    ktl::usize                                    dst_stride;
};

struct physical_device_tile_shading_features_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tile_shading_features_qcom;
    void *                   next = nullptr;
    ktl::bool32              tile_shading;
    ktl::bool32              tile_shading_fragment_stage;
    ktl::bool32              tile_shading_color_attachments;
    ktl::bool32              tile_shading_depth_attachments;
    ktl::bool32              tile_shading_stencil_attachments;
    ktl::bool32              tile_shading_input_attachments;
    ktl::bool32              tile_shading_sampled_attachments;
    ktl::bool32              tile_shading_per_tile_draw;
    ktl::bool32              tile_shading_per_tile_dispatch;
    ktl::bool32              tile_shading_dispatch_tile;
    ktl::bool32              tile_shading_apron;
    ktl::bool32              tile_shading_anisotropic_apron;
    ktl::bool32              tile_shading_atomic_ops;
    ktl::bool32              tile_shading_image_processing;
};

struct physical_device_tile_shading_properties_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tile_shading_properties_qcom;
    void *                   next = nullptr;
    ktl::i32                 max_apron_size;
    ktl::bool32              prefer_non_coherent;
    ktl::api::extent2d       tile_granularity;
    ktl::api::extent2d       max_tile_shading_rate;
};

struct render_pass_tile_shading_create_info_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_render_pass_tile_shading_create_info_qcom;
    const void *             next = nullptr;
    ktl::api::tile_shading_render_pass_flags_qcom flags           = 0;
    ktl::api::extent2d                            tile_apron_size = 0;
};

struct per_tile_begin_info_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_per_tile_begin_info_qcom;
    const void *             next = nullptr;
};

struct per_tile_end_info_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_per_tile_end_info_qcom;
    const void *             next = nullptr;
};

struct dispatch_tile_info_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_dispatch_tile_info_qcom;
    const void *             next = nullptr;
};

struct physical_device_fragment_density_map_layered_properties_valve final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_fragment_density_map_layered_properties_valve;
    void *   next = nullptr;
    ktl::i32 max_fragment_density_map_layers;
};

struct physical_device_fragment_density_map_layered_features_valve final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_fragment_density_map_layered_features_valve;
    void *      next = nullptr;
    ktl::bool32 fragment_density_map_layered;
};

struct pipeline_fragment_density_map_layered_create_info_valve final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_pipeline_fragment_density_map_layered_create_info_valve;
    const void *             next = nullptr;
    ktl::i32                 max_fragment_density_map_layers;
};

struct set_present_config_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_set_present_config_nv;
    const void *             next = nullptr;
    ktl::i32                 num_frames_per_batch;
    ktl::i32                 present_config_feedback;
};

struct physical_device_present_metering_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_present_metering_features_nv;
    void *                   next = nullptr;
    ktl::bool32              present_metering;
};

struct external_compute_queue_device_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_external_compute_queue_device_create_info_nv;
    const void *             next = nullptr;
    ktl::i32                 reserved_external_queues;
};

struct external_compute_queue_create_info_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_external_compute_queue_create_info_nv;
    const void *             next = nullptr;
    ktl::api::queue          preferred_queue;
};

struct external_compute_queue_data_params_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_external_compute_queue_data_params_nv;
    const void *             next = nullptr;
    ktl::i32                 device_index;
};

struct physical_device_external_compute_queue_properties_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_external_compute_queue_properties_nv;
    void *                   next = nullptr;
    ktl::i32                 external_data_size;
    ktl::i32                 max_external_queues;
};

struct physical_device_shader_uniform_buffer_unsized_array_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_shader_uniform_buffer_unsized_array_features_ext;
    void *      next = nullptr;
    ktl::bool32 shader_uniform_buffer_unsized_array;
};

struct physical_device_shader_mixed_float_dot_product_features_valve final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_shader_mixed_float_dot_product_features_valve;
    void *      next = nullptr;
    ktl::bool32 shader_mixed_float_dot_product_float16acc_float32;
    ktl::bool32 shader_mixed_float_dot_product_float16acc_float16;
    ktl::bool32 shader_mixed_float_dot_product_bfloat16acc;
    ktl::bool32 shader_mixed_float_dot_product_float8acc_float32;
};

struct physical_device_format_pack_features_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_format_pack_features_arm;
    void *                   next = nullptr;
    ktl::bool32              format_pack;
};

struct tensor_description_arm final
{
    ktl::api::structure_type         type = ktl::api::structure_type::v_tensor_description_arm;
    const void *                     next = nullptr;
    ktl::api::tensor_tiling_arm      tiling;
    ktl::api::format                 format;
    ktl::i32                         dimension_count;
    const ktl::i64 *                 dimensions;
    const ktl::i64 *                 strides = nullptr;
    ktl::api::tensor_usage_flags_arm usage;
};

struct tensor_create_info_arm final
{
    ktl::api::structure_type                 type  = ktl::api::structure_type::v_tensor_create_info_arm;
    const void *                             next  = nullptr;
    ktl::api::tensor_create_flags_arm        flags = 0;
    const ktl::api::tensor_description_arm * description;
    ktl::api::sharing_mode                   sharing_mode;
    ktl::i32                                 queue_family_index_count = 0;
    const ktl::i32 *                         queue_family_indices;
};

struct tensor_view_create_info_arm final
{
    ktl::api::structure_type               type  = ktl::api::structure_type::v_tensor_view_create_info_arm;
    const void *                           next  = nullptr;
    ktl::api::tensor_view_create_flags_arm flags = 0;
    ktl::api::tensor_arm                   tensor;
    ktl::api::format                       format;
};

struct tensor_memory_requirements_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_tensor_memory_requirements_info_arm;
    const void *             next = nullptr;
    ktl::api::tensor_arm     tensor;
};

struct bind_tensor_memory_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_bind_tensor_memory_info_arm;
    const void *             next = nullptr;
    ktl::api::tensor_arm     tensor;
    ktl::api::device_memory  memory;
    ktl::dvsize              memory_offset;
};

struct write_descriptor_set_tensor_arm final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_write_descriptor_set_tensor_arm;
    const void *                      next = nullptr;
    ktl::i32                          tensor_view_count;
    const ktl::api::tensor_view_arm * tensor_views;
};

struct tensor_format_properties_arm final
{
    ktl::api::structure_type        type = ktl::api::structure_type::v_tensor_format_properties_arm;
    void *                          next = nullptr;
    ktl::api::format_feature_flags2 optimal_tiling_tensor_features;
    ktl::api::format_feature_flags2 linear_tiling_tensor_features;
};

struct physical_device_tensor_properties_arm final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_physical_device_tensor_properties_arm;
    void *                       next = nullptr;
    ktl::i32                     max_tensor_dimension_count;
    ktl::u64                     max_tensor_elements;
    ktl::u64                     max_per_dimension_tensor_elements;
    ktl::i64                     max_tensor_stride;
    ktl::u64                     max_tensor_size;
    ktl::i32                     max_tensor_shader_access_array_length;
    ktl::i32                     max_tensor_shader_access_size;
    ktl::i32                     max_descriptor_set_storage_tensors;
    ktl::i32                     max_per_stage_descriptor_set_storage_tensors;
    ktl::i32                     max_descriptor_set_update_after_bind_storage_tensors;
    ktl::i32                     max_per_stage_descriptor_update_after_bind_storage_tensors;
    ktl::bool32                  shader_storage_tensor_array_non_uniform_indexing_native;
    ktl::api::shader_stage_flags shader_tensor_supported_stages;
};

struct tensor_memory_barrier_arm final
{
    ktl::api::structure_type        type            = ktl::api::structure_type::v_tensor_memory_barrier_arm;
    const void *                    next            = nullptr;
    ktl::api::pipeline_stage_flags2 src_stage_mask  = 0;
    ktl::api::access_flags2         src_access_mask = 0;
    ktl::api::pipeline_stage_flags2 dst_stage_mask  = 0;
    ktl::api::access_flags2         dst_access_mask = 0;
    ktl::i32                        src_queue_family_index;
    ktl::i32                        dst_queue_family_index;
    ktl::api::tensor_arm            tensor;
};

struct tensor_dependency_info_arm final
{
    ktl::api::structure_type                    type = ktl::api::structure_type::v_tensor_dependency_info_arm;
    const void *                                next = nullptr;
    ktl::i32                                    tensor_memory_barrier_count;
    const ktl::api::tensor_memory_barrier_arm * tensor_memory_barriers;
};

struct physical_device_tensor_features_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_tensor_features_arm;
    void *                   next = nullptr;
    ktl::bool32              tensor_non_packed;
    ktl::bool32              shader_tensor_access;
    ktl::bool32              shader_storage_tensor_array_dynamic_indexing;
    ktl::bool32              shader_storage_tensor_array_non_uniform_indexing;
    ktl::bool32              descriptor_binding_storage_tensor_update_after_bind;
    ktl::bool32              tensors;
};

struct device_tensor_memory_requirements_arm final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_device_tensor_memory_requirements_arm;
    const void *                             next = nullptr;
    const ktl::api::tensor_create_info_arm * create_info;
};

struct copy_tensor_info_arm final
{
    ktl::api::structure_type          type = ktl::api::structure_type::v_copy_tensor_info_arm;
    const void *                      next = nullptr;
    ktl::api::tensor_arm              src_tensor;
    ktl::api::tensor_arm              dst_tensor;
    ktl::i32                          region_count;
    const ktl::api::tensor_copy_arm * regions;
};

struct tensor_copy_arm final
{
    ktl::api::structure_type type            = ktl::api::structure_type::v_tensor_copy_arm;
    const void *             next            = nullptr;
    ktl::i32                 dimension_count = 0;
    const ktl::u64 *         src_offset      = nullptr;
    const ktl::u64 *         dst_offset      = nullptr;
    const ktl::u64 *         extent          = nullptr;
};

struct memory_dedicated_allocate_info_tensor_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_dedicated_allocate_info_tensor_arm;
    const void *             next = nullptr;
    ktl::api::tensor_arm     tensor;
};

struct physical_device_descriptor_buffer_tensor_properties_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_buffer_tensor_properties_arm;
    void *                   next = nullptr;
    ktl::usize               tensor_capture_replay_descriptor_data_size;
    ktl::usize               tensor_view_capture_replay_descriptor_data_size;
    ktl::usize               tensor_descriptor_size;
};

struct physical_device_descriptor_buffer_tensor_features_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_buffer_tensor_features_arm;
    void *                   next = nullptr;
    ktl::bool32              descriptor_buffer_tensor_descriptors;
};

struct tensor_capture_descriptor_data_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_tensor_capture_descriptor_data_info_arm;
    const void *             next = nullptr;
    ktl::api::tensor_arm     tensor;
};

struct tensor_view_capture_descriptor_data_info_arm final
{
    ktl::api::structure_type  type = ktl::api::structure_type::v_tensor_view_capture_descriptor_data_info_arm;
    const void *              next = nullptr;
    ktl::api::tensor_view_arm tensor_view;
};

struct descriptor_get_tensor_info_arm final
{
    ktl::api::structure_type  type        = ktl::api::structure_type::v_descriptor_get_tensor_info_arm;
    const void *              next        = nullptr;
    ktl::api::tensor_view_arm tensor_view = 0;
};

struct frame_boundary_tensors_arm final
{
    ktl::api::structure_type     type = ktl::api::structure_type::v_frame_boundary_tensors_arm;
    const void *                 next = nullptr;
    ktl::i32                     tensor_count;
    const ktl::api::tensor_arm * tensors;
};

struct physical_device_external_tensor_info_arm final
{
    ktl::api::structure_type          type  = ktl::api::structure_type::v_physical_device_external_tensor_info_arm;
    const void *                      next  = nullptr;
    ktl::api::tensor_create_flags_arm flags = 0;
    const ktl::api::tensor_description_arm *        description;
    ktl::api::external_memory_handle_type_flag_bits handle_type;
};

struct external_tensor_properties_arm final
{
    ktl::api::structure_type             type = ktl::api::structure_type::v_external_tensor_properties_arm;
    const void *                         next = nullptr;
    ktl::api::external_memory_properties external_memory_properties;
};

struct external_memory_tensor_create_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_external_memory_tensor_create_info_arm;
    const void *             next = nullptr;
    ktl::api::external_memory_handle_type_flags handle_types = 0;
};

struct physical_device_shader_float8features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_float8_features_ext;
    void *                   next = nullptr;
    ktl::bool32              shader_float8;
    ktl::bool32              shader_float8cooperative_matrix;
};

struct surface_create_info_ohos final
{
    ktl::api::structure_type            type  = ktl::api::structure_type::v_surface_create_info_ohos;
    const void *                        next  = nullptr;
    ktl::api::surface_create_flags_ohos flags = 0;
    ktl::api::ohnative_window *         window;
};

struct physical_device_data_graph_features_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_data_graph_features_arm;
    void *                   next = nullptr;
    ktl::bool32              data_graph;
    ktl::bool32              data_graph_update_after_bind;
    ktl::bool32              data_graph_specialization_constants;
    ktl::bool32              data_graph_descriptor_buffer;
    ktl::bool32              data_graph_shader_module;
};

struct data_graph_pipeline_constant_tensor_semi_structured_sparsity_info_arm final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_data_graph_pipeline_constant_tensor_semi_structured_sparsity_info_arm;
    const void * next = nullptr;
    ktl::i32     dimension;
    ktl::i32     zero_count;
    ktl::i32     group_size;
};

struct data_graph_pipeline_constant_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_constant_arm;
    const void *             next = nullptr;
    ktl::i32                 id;
    const void *             constant_data;
};

struct data_graph_pipeline_resource_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_resource_info_arm;
    const void *             next = nullptr;
    ktl::i32                 descriptor_set;
    ktl::i32                 binding;
    ktl::i32                 array_element = 0;
};

struct data_graph_pipeline_compiler_control_create_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_compiler_control_create_info_arm;
    const void *             next = nullptr;
    const char *             vendor_options;
};

struct data_graph_pipeline_create_info_arm final
{
    ktl::api::structure_type            type  = ktl::api::structure_type::v_data_graph_pipeline_create_info_arm;
    const void *                        next  = nullptr;
    ktl::api::pipeline_create_flags2khr flags = 0;
    ktl::api::pipeline_layout           layout;
    ktl::i32                            resource_info_count = 0;
    const ktl::api::data_graph_pipeline_resource_info_arm * resource_infos;
};

struct data_graph_pipeline_shader_module_create_info_arm final
{
    ktl::api::structure_type type   = ktl::api::structure_type::v_data_graph_pipeline_shader_module_create_info_arm;
    const void *             next   = nullptr;
    ktl::api::shader_module  module = 0;
    const char *             name;
    const ktl::api::specialization_info *              specialization_info = nullptr;
    const ktl::i32                                     constant_count      = 0;
    const ktl::api::data_graph_pipeline_constant_arm * constants           = nullptr;
};

struct data_graph_pipeline_session_create_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_session_create_info_arm;
    const void *             next = nullptr;
    ktl::api::data_graph_pipeline_session_create_flags_arm flags = 0;
    ktl::api::pipeline                                     data_graph_pipeline;
};

struct data_graph_pipeline_session_bind_point_requirements_info_arm final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_data_graph_pipeline_session_bind_point_requirements_info_arm;
    const void *                              next = nullptr;
    ktl::api::data_graph_pipeline_session_arm session;
};

struct data_graph_pipeline_session_bind_point_requirement_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_session_bind_point_requirement_arm;
    void *                   next = nullptr;
    ktl::api::data_graph_pipeline_session_bind_point_arm      bind_point;
    ktl::api::data_graph_pipeline_session_bind_point_type_arm bind_point_type;
    ktl::i32                                                  num_objects;
};

struct data_graph_pipeline_session_memory_requirements_info_arm final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_data_graph_pipeline_session_memory_requirements_info_arm;
    const void *                                         next = nullptr;
    ktl::api::data_graph_pipeline_session_arm            session;
    ktl::api::data_graph_pipeline_session_bind_point_arm bind_point;
    ktl::i32                                             object_index;
};

struct bind_data_graph_pipeline_session_memory_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_bind_data_graph_pipeline_session_memory_info_arm;
    const void *             next = nullptr;
    ktl::api::data_graph_pipeline_session_arm            session;
    ktl::api::data_graph_pipeline_session_bind_point_arm bind_point;
    ktl::i32                                             object_index;
    ktl::api::device_memory                              memory;
    ktl::dvsize                                          memory_offset;
};

struct data_graph_pipeline_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_info_arm;
    const void *             next = nullptr;
    ktl::api::pipeline       data_graph_pipeline;
};

struct data_graph_pipeline_property_query_result_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_property_query_result_arm;
    void *                   next = nullptr;
    ktl::api::data_graph_pipeline_property_arm property;
    ktl::bool32                                is_text;
    ktl::usize                                 data_size = 0;
    void *                                     data      = nullptr;
};

struct data_graph_pipeline_identifier_create_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_identifier_create_info_arm;
    const void *             next = nullptr;
    ktl::i32                 identifier_size;
    const ktl::u8 *          identifier;
};

struct data_graph_pipeline_dispatch_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_dispatch_info_arm;
    void *                   next = nullptr;
    ktl::api::data_graph_pipeline_dispatch_flags_arm flags = 0;
};

struct physical_device_data_graph_processing_engine_arm final
{
    ktl::api::physical_device_data_graph_processing_engine_type_arm type;
    ktl::bool32                                                     is_foreign;
};

struct physical_device_data_graph_operation_support_arm final
{
    ktl::api::physical_device_data_graph_operation_type_arm operation_type;
    char     name[KTL_API_MAX_PHYSICAL_DEVICE_DATA_GRAPH_OPERATION_SET_NAME_SIZE_ARM];
    ktl::i32 version;
};

struct queue_family_data_graph_properties_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_queue_family_data_graph_properties_arm;
    void *                   next = nullptr;
    ktl::api::physical_device_data_graph_processing_engine_arm engine;
    ktl::api::physical_device_data_graph_operation_support_arm operation;
};

struct physical_device_queue_family_data_graph_processing_engine_info_arm final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_queue_family_data_graph_processing_engine_info_arm;
    const void *                                                    next = nullptr;
    ktl::i32                                                        queue_family_index;
    ktl::api::physical_device_data_graph_processing_engine_type_arm engine_type;
};

struct queue_family_data_graph_processing_engine_properties_arm final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_queue_family_data_graph_processing_engine_properties_arm;
    void *                                         next = nullptr;
    ktl::api::external_semaphore_handle_type_flags foreign_semaphore_handle_types;
    ktl::api::external_memory_handle_type_flags    foreign_memory_handle_types;
};

struct data_graph_processing_engine_create_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_processing_engine_create_info_arm;
    const void *             next = nullptr;
    ktl::i32                 processing_engine_count;
    ktl::api::physical_device_data_graph_processing_engine_arm * processing_engines;
};

struct physical_device_pipeline_cache_incremental_mode_features_sec final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_pipeline_cache_incremental_mode_features_sec;
    void *      next = nullptr;
    ktl::bool32 pipeline_cache_incremental_mode;
};

struct data_graph_pipeline_builtin_model_create_info_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_data_graph_pipeline_builtin_model_create_info_qcom;
    const void *             next = nullptr;
    const ktl::api::physical_device_data_graph_operation_support_arm * operation;
};

struct physical_device_data_graph_model_features_qcom final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_data_graph_model_features_qcom;
    void *                   next = nullptr;
    ktl::bool32              data_graph_model;
};

struct physical_device_shader_untyped_pointers_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_untyped_pointers_features_khr;
    void *                   next = nullptr;
    ktl::bool32              shader_untyped_pointers;
};

struct native_buffer_ohos final
{
    ktl::api::structure_type    type = ktl::api::structure_type::v_native_buffer_ohos;
    const void *                next = nullptr;
    ktl::api::ohbuffer_handle * handle;
};

struct swapchain_image_create_info_ohos final
{
    ktl::api::structure_type                   type = ktl::api::structure_type::v_swapchain_image_create_info_ohos;
    const void *                               next = nullptr;
    ktl::api::swapchain_image_usage_flags_ohos usage;
};

struct physical_device_presentation_properties_ohos final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_presentation_properties_ohos;
    void *                   next = nullptr;
    ktl::bool32              shared_image;
};

struct physical_device_video_encode_rgb_conversion_features_valve final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_video_encode_rgb_conversion_features_valve;
    void *      next = nullptr;
    ktl::bool32 video_encode_rgb_conversion;
};

struct video_encode_rgb_conversion_capabilities_valve final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_rgb_conversion_capabilities_valve;
    void *                   next = nullptr;
    ktl::api::video_encode_rgb_model_conversion_flags_valve  rgb_models;
    ktl::api::video_encode_rgb_range_compression_flags_valve rgb_ranges;
    ktl::api::video_encode_rgb_chroma_offset_flags_valve     x_chroma_offsets;
    ktl::api::video_encode_rgb_chroma_offset_flags_valve     y_chroma_offsets;
};

struct video_encode_profile_rgb_conversion_info_valve final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_profile_rgb_conversion_info_valve;
    const void *             next = nullptr;
    ktl::bool32              perform_encode_rgb_conversion;
};

struct video_encode_session_rgb_conversion_create_info_valve final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_video_encode_session_rgb_conversion_create_info_valve;
    const void *             next = nullptr;
    ktl::api::video_encode_rgb_model_conversion_flag_bits_valve  rgb_model;
    ktl::api::video_encode_rgb_range_compression_flag_bits_valve rgb_range;
    ktl::api::video_encode_rgb_chroma_offset_flag_bits_valve     x_chroma_offset;
    ktl::api::video_encode_rgb_chroma_offset_flag_bits_valve     y_chroma_offset;
};

struct physical_device_shader64bit_indexing_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_64_bit_indexing_features_ext;
    void *                   next = nullptr;
    ktl::bool32              shader64bit_indexing;
};

struct native_buffer_usage_ohos final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_native_buffer_usage_ohos;
    void *                   next = nullptr;
    ktl::u64                 ohosnative_buffer_usage;
};

struct native_buffer_properties_ohos final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_native_buffer_properties_ohos;
    void *                   next = nullptr;
    ktl::dvsize              allocation_size;
    ktl::i32                 memory_type_bits;
};

struct native_buffer_format_properties_ohos final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_native_buffer_format_properties_ohos;
    void *                                   next = nullptr;
    ktl::api::format                         format;
    ktl::u64                                 external_format;
    ktl::api::format_feature_flags           format_features;
    ktl::api::component_mapping              sampler_ycbcr_conversion_components;
    ktl::api::sampler_ycbcr_model_conversion suggested_ycbcr_model;
    ktl::api::sampler_ycbcr_range            suggested_ycbcr_range;
    ktl::api::chroma_location                suggested_xchroma_offset;
    ktl::api::chroma_location                suggested_ychroma_offset;
};

struct import_native_buffer_info_ohos final
{
    ktl::api::structure_type      type = ktl::api::structure_type::v_import_native_buffer_info_ohos;
    const void *                  next = nullptr;
    ktl::api::oh__native_buffer * buffer;
};

struct memory_get_native_buffer_info_ohos final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_memory_get_native_buffer_info_ohos;
    const void *             next = nullptr;
    ktl::api::device_memory  memory;
};

struct external_format_ohos final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_external_format_ohos;
    void *                   next = nullptr;
    ktl::u64                 external_format;
};

struct physical_device_performance_counters_by_region_features_arm final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_performance_counters_by_region_features_arm;
    void *      next = nullptr;
    ktl::bool32 performance_counters_by_region;
};

struct physical_device_performance_counters_by_region_properties_arm final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_performance_counters_by_region_properties_arm;
    void *             next = nullptr;
    ktl::i32           max_per_region_performance_counters;
    ktl::api::extent2d performance_counter_region_size;
    ktl::i32           row_stride_alignment;
    ktl::i32           region_alignment;
    ktl::bool32        identity_transform_order;
};

struct performance_counter_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_performance_counter_arm;
    void *                   next = nullptr;
    ktl::i32                 counter_id;
};

struct performance_counter_description_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_performance_counter_description_arm;
    void *                   next = nullptr;
    ktl::api::performance_counter_description_flags_arm flags = 0;
    char                                                name[KTL_API_MAX_DESCRIPTION_SIZE];
};

struct render_pass_performance_counters_by_region_begin_info_arm final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_render_pass_performance_counters_by_region_begin_info_arm;
    void *              next = nullptr;
    ktl::i32            counter_address_count;
    const ktl::dvaddr * counter_addresses;
    ktl::bool32         serialize_regions;
    ktl::i32            counter_index_count;
    ktl::i32 *          counter_indices;
};

struct compute_occupancy_priority_parameters_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_compute_occupancy_priority_parameters_nv;
    const void *             next = nullptr;
    float                    occupancy_priority;
    float                    occupancy_throttling;
};

struct physical_device_compute_occupancy_priority_features_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_compute_occupancy_priority_features_nv;
    void *                   next = nullptr;
    ktl::bool32              compute_occupancy_priority;
};

struct physical_device_shader_long_vector_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_long_vector_features_ext;
    void *                   next = nullptr;
    ktl::bool32              long_vector;
};

struct physical_device_shader_long_vector_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_long_vector_properties_ext;
    void *                   next = nullptr;
    ktl::i32                 max_vector_components;
};

struct physical_device_texture_compression_astc3dfeatures_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_texture_compression_astc_3d_features_ext;
    void *      next = nullptr;
    ktl::bool32 texture_compression_astc_3d;
};

struct physical_device_shader_subgroup_partitioned_features_ext final
{
    ktl::api::structure_type type =
        ktl::api::structure_type::v_physical_device_shader_subgroup_partitioned_features_ext;
    void *      next = nullptr;
    ktl::bool32 shader_subgroup_partitioned;
};

struct host_address_range_ext final
{
    void *     address;
    ktl::usize size;
};

struct host_address_range_const_ext final
{
    const void * address;
    ktl::usize   size;
};

struct texel_buffer_descriptor_info_ext final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_texel_buffer_descriptor_info_ext;
    const void *                       next = nullptr;
    ktl::api::format                   format;
    ktl::api::device_address_range_ext address_range;
};

struct image_descriptor_info_ext final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_image_descriptor_info_ext;
    const void *                             next = nullptr;
    const ktl::api::image_view_create_info * view;
    ktl::api::image_layout                   layout;
};

struct resource_descriptor_info_ext final
{
    ktl::api::structure_type               type = ktl::api::structure_type::v_resource_descriptor_info_ext;
    const void *                           next = nullptr;
    ktl::api::descriptor_type              type;
    ktl::api::resource_descriptor_data_ext data;
};

struct bind_heap_info_ext final
{
    ktl::api::structure_type           type = ktl::api::structure_type::v_bind_heap_info_ext;
    const void *                       next = nullptr;
    ktl::api::device_address_range_ext heap_range;
    ktl::dvsize                        reserved_range_offset;
    ktl::dvsize                        reserved_range_size;
};

struct push_data_info_ext final
{
    ktl::api::structure_type               type = ktl::api::structure_type::v_push_data_info_ext;
    const void *                           next = nullptr;
    ktl::i32                               offset;
    ktl::api::host_address_range_const_ext data;
};

struct descriptor_mapping_source_constant_offset_ext final
{
    ktl::i32                              heap_offset;
    ktl::i32                              heap_array_stride;
    const ktl::api::sampler_create_info * embedded_sampler = nullptr;
    ktl::i32                              sampler_heap_offset;
    ktl::i32                              sampler_heap_array_stride;
};

struct descriptor_mapping_source_push_index_ext final
{
    ktl::i32                              heap_offset;
    ktl::i32                              push_offset;
    ktl::i32                              heap_index_stride;
    ktl::i32                              heap_array_stride;
    const ktl::api::sampler_create_info * embedded_sampler = nullptr;
    ktl::bool32                           use_combined_image_sampler_index;
    ktl::i32                              sampler_heap_offset;
    ktl::i32                              sampler_push_offset;
    ktl::i32                              sampler_heap_index_stride;
    ktl::i32                              sampler_heap_array_stride;
};

struct descriptor_mapping_source_indirect_index_ext final
{
    ktl::i32                              heap_offset;
    ktl::i32                              push_offset;
    ktl::i32                              address_offset;
    ktl::i32                              heap_index_stride;
    ktl::i32                              heap_array_stride;
    const ktl::api::sampler_create_info * embedded_sampler = nullptr;
    ktl::bool32                           use_combined_image_sampler_index;
    ktl::i32                              sampler_heap_offset;
    ktl::i32                              sampler_push_offset;
    ktl::i32                              sampler_address_offset;
    ktl::i32                              sampler_heap_index_stride;
    ktl::i32                              sampler_heap_array_stride;
};

struct descriptor_mapping_source_indirect_index_array_ext final
{
    ktl::i32                              heap_offset;
    ktl::i32                              push_offset;
    ktl::i32                              address_offset;
    ktl::i32                              heap_index_stride;
    const ktl::api::sampler_create_info * embedded_sampler = nullptr;
    ktl::bool32                           use_combined_image_sampler_index;
    ktl::i32                              sampler_heap_offset;
    ktl::i32                              sampler_push_offset;
    ktl::i32                              sampler_address_offset;
    ktl::i32                              sampler_heap_index_stride;
};

struct descriptor_mapping_source_heap_data_ext final
{
    ktl::i32 heap_offset;
    ktl::i32 push_offset;
};

struct descriptor_mapping_source_shader_record_index_ext final
{
    ktl::i32                              heap_offset;
    ktl::i32                              shader_record_offset;
    ktl::i32                              heap_index_stride;
    ktl::i32                              heap_array_stride;
    const ktl::api::sampler_create_info * embedded_sampler = nullptr;
    ktl::bool32                           use_combined_image_sampler_index;
    ktl::i32                              sampler_heap_offset;
    ktl::i32                              sampler_shader_record_offset;
    ktl::i32                              sampler_heap_index_stride;
    ktl::i32                              sampler_heap_array_stride;
};

struct descriptor_mapping_source_indirect_address_ext final
{
    ktl::i32 push_offset;
    ktl::i32 address_offset;
};

struct descriptor_set_and_binding_mapping_ext final
{
    ktl::api::structure_type                type = ktl::api::structure_type::v_descriptor_set_and_binding_mapping_ext;
    const void *                            next = nullptr;
    ktl::i32                                descriptor_set;
    ktl::i32                                first_binding;
    ktl::i32                                binding_count;
    ktl::api::spirv_resource_type_flags_ext resource_mask;
    ktl::api::descriptor_mapping_source_ext source;
    ktl::api::descriptor_mapping_source_data_ext source_data;
};

struct shader_descriptor_set_and_binding_mapping_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_shader_descriptor_set_and_binding_mapping_info_ext;
    const void *             next = nullptr;
    ktl::i32                 mapping_count = 0;
    const ktl::api::descriptor_set_and_binding_mapping_ext * mappings;
};

struct sampler_custom_border_color_index_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_sampler_custom_border_color_index_create_info_ext;
    const void *             next = nullptr;
    ktl::i32                 index;
};

struct opaque_capture_data_create_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_opaque_capture_data_create_info_ext;
    const void *             next = nullptr;
    const ktl::api::host_address_range_const_ext * data = nullptr;
};

struct indirect_commands_layout_push_data_token_nv final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_indirect_commands_layout_push_data_token_nv;
    const void *             next = nullptr;
    ktl::i32                 push_data_offset;
    ktl::i32                 push_data_size;
};

struct subsampled_image_format_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_subsampled_image_format_properties_ext;
    const void *             next = nullptr;
    ktl::i32                 subsampled_image_descriptor_count;
};

struct physical_device_descriptor_heap_features_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_heap_features_ext;
    void *                   next = nullptr;
    ktl::bool32              descriptor_heap;
    ktl::bool32              descriptor_heap_capture_replay;
};

struct physical_device_descriptor_heap_properties_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_heap_properties_ext;
    void *                   next = nullptr;
    ktl::dvsize              sampler_heap_alignment;
    ktl::dvsize              resource_heap_alignment;
    ktl::dvsize              max_sampler_heap_size;
    ktl::dvsize              max_resource_heap_size;
    ktl::dvsize              min_sampler_heap_reserved_range;
    ktl::dvsize              min_sampler_heap_reserved_range_with_embedded;
    ktl::dvsize              min_resource_heap_reserved_range;
    ktl::dvsize              sampler_descriptor_size;
    ktl::dvsize              image_descriptor_size;
    ktl::dvsize              buffer_descriptor_size;
    ktl::dvsize              sampler_descriptor_alignment;
    ktl::dvsize              image_descriptor_alignment;
    ktl::dvsize              buffer_descriptor_alignment;
    ktl::dvsize              max_push_data_size;
    ktl::usize               image_capture_replay_opaque_data_size;
    ktl::i32                 max_descriptor_heap_embedded_samplers;
    ktl::i32                 sampler_ycbcr_conversion_count;
    ktl::bool32              sparse_descriptor_heaps;
    ktl::bool32              protected_descriptor_heaps;
};

struct command_buffer_inheritance_descriptor_heap_info_ext final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_command_buffer_inheritance_descriptor_heap_info_ext;
    const void *             next = nullptr;
    const ktl::api::bind_heap_info_ext * sampler_heap_bind_info  = nullptr;
    const ktl::api::bind_heap_info_ext * resource_heap_bind_info = nullptr;
};

struct physical_device_descriptor_heap_tensor_properties_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_descriptor_heap_tensor_properties_arm;
    void *                   next = nullptr;
    ktl::dvsize              tensor_descriptor_size;
    ktl::dvsize              tensor_descriptor_alignment;
    ktl::usize               tensor_capture_replay_opaque_data_size;
};

struct physical_device_shader_instrumentation_features_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_instrumentation_features_arm;
    void *                   next = nullptr;
    ktl::bool32              shader_instrumentation;
};

struct physical_device_shader_instrumentation_properties_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_instrumentation_properties_arm;
    void *                   next = nullptr;
    ktl::i32                 num_metrics;
    ktl::bool32              per_basic_block_granularity;
};

struct shader_instrumentation_create_info_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_shader_instrumentation_create_info_arm;
    void *                   next = nullptr;
};

struct shader_instrumentation_metric_description_arm final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_shader_instrumentation_metric_description_arm;
    void *                   next = nullptr;
    char                     name[KTL_API_MAX_DESCRIPTION_SIZE];
    char                     description[KTL_API_MAX_DESCRIPTION_SIZE];
};

struct shader_instrumentation_metric_data_header_arm final
{
    ktl::i32                     result_index;
    ktl::i32                     result_sub_index;
    ktl::api::shader_stage_flags stages;
    ktl::i32                     basic_block_index;
};

struct device_address_range_khr final
{
    ktl::dvaddr address = 0;
    ktl::dvsize size;
};

using device_address_range_ext = device_address_range_khr;

struct device_memory_copy_khr final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_device_memory_copy_khr;
    const void *                        next = nullptr;
    ktl::api::device_address_range_khr  src_range;
    ktl::api::address_command_flags_khr src_flags = 0;
    ktl::api::device_address_range_khr  dst_range;
    ktl::api::address_command_flags_khr dst_flags = 0;
};

struct copy_device_memory_info_khr final
{
    ktl::api::structure_type                 type = ktl::api::structure_type::v_copy_device_memory_info_khr;
    const void *                             next = nullptr;
    ktl::i32                                 region_count;
    const ktl::api::device_memory_copy_khr * regions;
};

struct device_memory_image_copy_khr final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_device_memory_image_copy_khr;
    const void *                        next = nullptr;
    ktl::api::device_address_range_khr  address_range;
    ktl::api::address_command_flags_khr address_flags = 0;
    ktl::i32                            address_row_length;
    ktl::i32                            address_image_height;
    ktl::api::image_subresource_layers  image_subresource;
    ktl::api::image_layout              image_layout;
    ktl::api::offset3d                  image_offset;
    ktl::api::extent3d                  image_extent;
};

struct copy_device_memory_image_info_khr final
{
    ktl::api::structure_type                       type = ktl::api::structure_type::v_copy_device_memory_image_info_khr;
    const void *                                   next = nullptr;
    ktl::api::image                                image;
    ktl::i32                                       region_count;
    const ktl::api::device_memory_image_copy_khr * regions;
};

struct memory_range_barriers_info_khr final
{
    ktl::api::structure_type                   type = ktl::api::structure_type::v_memory_range_barriers_info_khr;
    const void *                               next = nullptr;
    ktl::i32                                   memory_range_barrier_count = 0;
    const ktl::api::memory_range_barrier_khr * memory_range_barriers;
};

struct memory_range_barrier_khr final
{
    ktl::api::structure_type            type            = ktl::api::structure_type::v_memory_range_barrier_khr;
    const void *                        next            = nullptr;
    ktl::api::pipeline_stage_flags2     src_stage_mask  = 0;
    ktl::api::access_flags2             src_access_mask = 0;
    ktl::api::pipeline_stage_flags2     dst_stage_mask  = 0;
    ktl::api::access_flags2             dst_access_mask = 0;
    ktl::i32                            src_queue_family_index;
    ktl::i32                            dst_queue_family_index;
    ktl::api::device_address_range_khr  address_range;
    ktl::api::address_command_flags_khr address_flags = 0;
};

struct physical_device_device_address_commands_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_device_address_commands_features_khr;
    void *                   next = nullptr;
    ktl::bool32              device_address_commands;
};

struct conditional_rendering_begin_info2ext final
{
    ktl::api::structure_type                  type = ktl::api::structure_type::v_conditional_rendering_begin_info_2_ext;
    const void *                              next = nullptr;
    ktl::api::device_address_range_khr        address_range;
    ktl::api::address_command_flags_khr       address_flags = 0;
    ktl::api::conditional_rendering_flags_ext flags         = 0;
};

struct acceleration_structure_create_info2khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_acceleration_structure_create_info_2_khr;
    const void *             next = nullptr;
    ktl::api::acceleration_structure_create_flags_khr create_flags = 0;
    ktl::api::device_address_range_khr                address_range;
    ktl::api::address_command_flags_khr               address_flags = 0;
    ktl::api::acceleration_structure_type_khr         type;
};

struct bind_index_buffer3info_khr final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_bind_index_buffer_3_info_khr;
    const void *                        next = nullptr;
    ktl::api::device_address_range_khr  address_range;
    ktl::api::address_command_flags_khr address_flags = 0;
    ktl::api::index_type                index_type;
};

struct bind_vertex_buffer3info_khr final
{
    ktl::api::structure_type                   type = ktl::api::structure_type::v_bind_vertex_buffer_3_info_khr;
    const void *                               next = nullptr;
    ktl::bool32                                set_stride;
    ktl::api::strided_device_address_range_khr address_range;
    ktl::api::address_command_flags_khr        address_flags = 0;
};

struct draw_indirect2info_khr final
{
    ktl::api::structure_type                   type = ktl::api::structure_type::v_draw_indirect_2_info_khr;
    const void *                               next = nullptr;
    ktl::api::strided_device_address_range_khr address_range;
    ktl::api::address_command_flags_khr        address_flags = 0;
    ktl::i32                                   draw_count;
};

struct draw_indirect_count2info_khr final
{
    ktl::api::structure_type                   type = ktl::api::structure_type::v_draw_indirect_count_2_info_khr;
    const void *                               next = nullptr;
    ktl::api::strided_device_address_range_khr address_range;
    ktl::api::address_command_flags_khr        address_flags = 0;
    ktl::api::device_address_range_khr         count_address_range;
    ktl::api::address_command_flags_khr        count_address_flags = 0;
    ktl::i32                                   max_draw_count;
};

struct dispatch_indirect2info_khr final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_dispatch_indirect_2_info_khr;
    const void *                        next = nullptr;
    ktl::api::device_address_range_khr  address_range;
    ktl::api::address_command_flags_khr address_flags = 0;
};

struct bind_transform_feedback_buffer2info_ext final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_bind_transform_feedback_buffer_2_info_ext;
    const void *                        next = nullptr;
    ktl::api::device_address_range_khr  address_range;
    ktl::api::address_command_flags_khr address_flags = 0;
};

struct memory_marker_info_amd final
{
    ktl::api::structure_type            type = ktl::api::structure_type::v_memory_marker_info_amd;
    const void *                        next = nullptr;
    ktl::api::pipeline_stage_flags2khr  stage;
    ktl::api::device_address_range_khr  dst_range;
    ktl::api::address_command_flags_khr dst_flags = 0;
    ktl::i32                            marker;
};

struct physical_device_shader_constant_data_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_constant_data_features_khr;
    void *                   next = nullptr;
    ktl::bool32              shader_constant_data;
};

struct physical_device_shader_abort_features_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_abort_features_khr;
    void *                   next = nullptr;
    ktl::bool32              shader_abort;
};

struct physical_device_shader_abort_properties_khr final
{
    ktl::api::structure_type type = ktl::api::structure_type::v_physical_device_shader_abort_properties_khr;
    void *                   next = nullptr;
    ktl::u64                 max_shader_abort_message_size;
};

struct device_fault_shader_abort_message_info_khr final
{
    ktl::api::structure_type type              = ktl::api::structure_type::v_device_fault_shader_abort_message_info_khr;
    void *                   next              = nullptr;
    ktl::u64                 message_data_size = 0;
    void *                   message_data      = nullptr;
};

} // namespace ktl::api

#endif
