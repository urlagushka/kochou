#ifndef KTL_API_COMMANDS_HPP
#define KTL_API_COMMANDS_HPP

#include <array>

#include <ktl/loader.hpp>

#ifndef KTL_API_API_HPP
#include "common.hpp"
#endif


namespace ktl::api
{
static constexpr ktl::usize pfn_table_size = 829;
using pfn_table = std::array< ktl::loader::proc_type, pfn_table_size >;
thread_local pfn_table * ptable = nullptr;           

ktl::api::result create_instance(const ktl::api::instance_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::instance * _p_instance)
{
ktl::loader::proc_type ptr = &ptable[0];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_instance)ptr)(_p_create_info, _p_allocator, _p_instance);
}

void destroy_instance(ktl::api::instance _instance, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[1];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_instance)ptr)(_instance, _p_allocator);
}

ktl::api::result enumerate_physical_devices(ktl::api::instance _instance, ktl::i32 * _p_physical_device_count, ktl::api::physical_device * _p_physical_devices)
{
ktl::loader::proc_type ptr = &ptable[2];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_enumerate_physical_devices)ptr)(_instance, _p_physical_device_count, _p_physical_devices);
}

ktl::api::pfn_void_function get_device_proc_addr(ktl::api::device _device, const char * _p_name)
{
ktl::loader::proc_type ptr = &ptable[3];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_proc_addr)ptr)(_device, _p_name);
}

ktl::api::pfn_void_function get_instance_proc_addr(ktl::api::instance _instance, const char * _p_name)
{
ktl::loader::proc_type ptr = &ptable[4];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_instance_proc_addr)ptr)(_instance, _p_name);
}

void get_physical_device_properties(ktl::api::physical_device _physical_device, ktl::api::physical_device_properties * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[5];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_properties)ptr)(_physical_device, _p_properties);
}

void get_physical_device_queue_family_properties(ktl::api::physical_device _physical_device, ktl::i32 * _p_queue_family_property_count, ktl::api::queue_family_properties * _p_queue_family_properties)
{
ktl::loader::proc_type ptr = &ptable[6];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_queue_family_properties)ptr)(_physical_device, _p_queue_family_property_count, _p_queue_family_properties);
}

void get_physical_device_memory_properties(ktl::api::physical_device _physical_device, ktl::api::physical_device_memory_properties * _p_memory_properties)
{
ktl::loader::proc_type ptr = &ptable[7];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_memory_properties)ptr)(_physical_device, _p_memory_properties);
}

void get_physical_device_features(ktl::api::physical_device _physical_device, ktl::api::physical_device_features * _p_features)
{
ktl::loader::proc_type ptr = &ptable[8];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_features)ptr)(_physical_device, _p_features);
}

void get_physical_device_format_properties(ktl::api::physical_device _physical_device, ktl::api::format _format, ktl::api::format_properties * _p_format_properties)
{
ktl::loader::proc_type ptr = &ptable[9];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_format_properties)ptr)(_physical_device, _format, _p_format_properties);
}

ktl::api::result get_physical_device_image_format_properties(ktl::api::physical_device _physical_device, ktl::api::format _format, ktl::api::image_type _type, ktl::api::image_tiling _tiling, ktl::api::image_usage_flags _usage, ktl::api::image_create_flags _flags, ktl::api::image_format_properties * _p_image_format_properties)
{
ktl::loader::proc_type ptr = &ptable[10];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_image_format_properties)ptr)(_physical_device, _format, _type, _tiling, _usage, _flags, _p_image_format_properties);
}

ktl::api::result create_device(ktl::api::physical_device _physical_device, const ktl::api::device_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::device * _p_device)
{
ktl::loader::proc_type ptr = &ptable[11];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_device)ptr)(_physical_device, _p_create_info, _p_allocator, _p_device);
}

void destroy_device(ktl::api::device _device, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[12];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_device)ptr)(_device, _p_allocator);
}

ktl::api::result enumerate_instance_version(ktl::i32 * _p_api_version)
{
ktl::loader::proc_type ptr = &ptable[13];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_enumerate_instance_version)ptr)(_p_api_version);
}

ktl::api::result enumerate_instance_layer_properties(ktl::i32 * _p_property_count, ktl::api::layer_properties * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[14];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_enumerate_instance_layer_properties)ptr)(_p_property_count, _p_properties);
}

ktl::api::result enumerate_instance_extension_properties(const char * _p_layer_name, ktl::i32 * _p_property_count, ktl::api::extension_properties * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[15];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_enumerate_instance_extension_properties)ptr)(_p_layer_name, _p_property_count, _p_properties);
}

ktl::api::result enumerate_device_layer_properties(ktl::api::physical_device _physical_device, ktl::i32 * _p_property_count, ktl::api::layer_properties * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[16];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_enumerate_device_layer_properties)ptr)(_physical_device, _p_property_count, _p_properties);
}

ktl::api::result enumerate_device_extension_properties(ktl::api::physical_device _physical_device, const char * _p_layer_name, ktl::i32 * _p_property_count, ktl::api::extension_properties * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[17];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_enumerate_device_extension_properties)ptr)(_physical_device, _p_layer_name, _p_property_count, _p_properties);
}

void get_device_queue(ktl::api::device _device, ktl::i32 _queue_family_index, ktl::i32 _queue_index, ktl::api::queue * _p_queue)
{
ktl::loader::proc_type ptr = &ptable[18];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_queue)ptr)(_device, _queue_family_index, _queue_index, _p_queue);
}

ktl::api::result queue_submit(ktl::api::queue _queue, ktl::i32 _submit_count, const ktl::api::submit_info * _p_submits, ktl::api::fence _fence)
{
ktl::loader::proc_type ptr = &ptable[19];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_submit)ptr)(_queue, _submit_count, _p_submits, _fence);
}

ktl::api::result queue_wait_idle(ktl::api::queue _queue)
{
ktl::loader::proc_type ptr = &ptable[20];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_wait_idle)ptr)(_queue);
}

ktl::api::result device_wait_idle(ktl::api::device _device)
{
ktl::loader::proc_type ptr = &ptable[21];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_device_wait_idle)ptr)(_device);
}

ktl::api::result allocate_memory(ktl::api::device _device, const ktl::api::memory_allocate_info * _p_allocate_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::device_memory * _p_memory)
{
ktl::loader::proc_type ptr = &ptable[22];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_allocate_memory)ptr)(_device, _p_allocate_info, _p_allocator, _p_memory);
}

void free_memory(ktl::api::device _device, ktl::api::device_memory _memory, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[23];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_free_memory)ptr)(_device, _memory, _p_allocator);
}

ktl::api::result map_memory(ktl::api::device _device, ktl::api::device_memory _memory, ktl::api::dvsize _offset, ktl::api::dvsize _size, ktl::api::memory_map_flags _flags, void * _pp_data)
{
ktl::loader::proc_type ptr = &ptable[24];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_map_memory)ptr)(_device, _memory, _offset, _size, _flags, _pp_data);
}

void unmap_memory(ktl::api::device _device, ktl::api::device_memory _memory)
{
ktl::loader::proc_type ptr = &ptable[25];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_unmap_memory)ptr)(_device, _memory);
}

ktl::api::result flush_mapped_memory_ranges(ktl::api::device _device, ktl::i32 _memory_range_count, const ktl::api::mapped_memory_range * _p_memory_ranges)
{
ktl::loader::proc_type ptr = &ptable[26];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_flush_mapped_memory_ranges)ptr)(_device, _memory_range_count, _p_memory_ranges);
}

ktl::api::result invalidate_mapped_memory_ranges(ktl::api::device _device, ktl::i32 _memory_range_count, const ktl::api::mapped_memory_range * _p_memory_ranges)
{
ktl::loader::proc_type ptr = &ptable[27];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_invalidate_mapped_memory_ranges)ptr)(_device, _memory_range_count, _p_memory_ranges);
}

void get_device_memory_commitment(ktl::api::device _device, ktl::api::device_memory _memory, ktl::api::dvsize * _p_committed_memory_in_bytes)
{
ktl::loader::proc_type ptr = &ptable[28];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_memory_commitment)ptr)(_device, _memory, _p_committed_memory_in_bytes);
}

void get_buffer_memory_requirements(ktl::api::device _device, ktl::api::buffer _buffer, ktl::api::memory_requirements * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[29];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_buffer_memory_requirements)ptr)(_device, _buffer, _p_memory_requirements);
}

ktl::api::result bind_buffer_memory(ktl::api::device _device, ktl::api::buffer _buffer, ktl::api::device_memory _memory, ktl::api::dvsize _memory_offset)
{
ktl::loader::proc_type ptr = &ptable[30];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_bind_buffer_memory)ptr)(_device, _buffer, _memory, _memory_offset);
}

void get_image_memory_requirements(ktl::api::device _device, ktl::api::image _image, ktl::api::memory_requirements * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[31];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_memory_requirements)ptr)(_device, _image, _p_memory_requirements);
}

ktl::api::result bind_image_memory(ktl::api::device _device, ktl::api::image _image, ktl::api::device_memory _memory, ktl::api::dvsize _memory_offset)
{
ktl::loader::proc_type ptr = &ptable[32];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_bind_image_memory)ptr)(_device, _image, _memory, _memory_offset);
}

void get_image_sparse_memory_requirements(ktl::api::device _device, ktl::api::image _image, ktl::i32 * _p_sparse_memory_requirement_count, ktl::api::sparse_image_memory_requirements * _p_sparse_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[33];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_sparse_memory_requirements)ptr)(_device, _image, _p_sparse_memory_requirement_count, _p_sparse_memory_requirements);
}

void get_physical_device_sparse_image_format_properties(ktl::api::physical_device _physical_device, ktl::api::format _format, ktl::api::image_type _type, ktl::api::sample_count_flag_bits _samples, ktl::api::image_usage_flags _usage, ktl::api::image_tiling _tiling, ktl::i32 * _p_property_count, ktl::api::sparse_image_format_properties * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[34];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_sparse_image_format_properties)ptr)(_physical_device, _format, _type, _samples, _usage, _tiling, _p_property_count, _p_properties);
}

ktl::api::result queue_bind_sparse(ktl::api::queue _queue, ktl::i32 _bind_info_count, const ktl::api::bind_sparse_info * _p_bind_info, ktl::api::fence _fence)
{
ktl::loader::proc_type ptr = &ptable[35];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_bind_sparse)ptr)(_queue, _bind_info_count, _p_bind_info, _fence);
}

ktl::api::result create_fence(ktl::api::device _device, const ktl::api::fence_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::fence * _p_fence)
{
ktl::loader::proc_type ptr = &ptable[36];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_fence)ptr)(_device, _p_create_info, _p_allocator, _p_fence);
}

void destroy_fence(ktl::api::device _device, ktl::api::fence _fence, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[37];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_fence)ptr)(_device, _fence, _p_allocator);
}

ktl::api::result reset_fences(ktl::api::device _device, ktl::i32 _fence_count, const ktl::api::fence * _p_fences)
{
ktl::loader::proc_type ptr = &ptable[38];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_reset_fences)ptr)(_device, _fence_count, _p_fences);
}

ktl::api::result get_fence_status(ktl::api::device _device, ktl::api::fence _fence)
{
ktl::loader::proc_type ptr = &ptable[39];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_fence_status)ptr)(_device, _fence);
}

ktl::api::result wait_for_fences(ktl::api::device _device, ktl::i32 _fence_count, const ktl::api::fence * _p_fences, ktl::api::bool32 _wait_all, ktl::u64 _timeout)
{
ktl::loader::proc_type ptr = &ptable[40];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_wait_for_fences)ptr)(_device, _fence_count, _p_fences, _wait_all, _timeout);
}

ktl::api::result create_semaphore(ktl::api::device _device, const ktl::api::semaphore_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::semaphore * _p_semaphore)
{
ktl::loader::proc_type ptr = &ptable[41];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_semaphore)ptr)(_device, _p_create_info, _p_allocator, _p_semaphore);
}

void destroy_semaphore(ktl::api::device _device, ktl::api::semaphore _semaphore, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[42];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_semaphore)ptr)(_device, _semaphore, _p_allocator);
}

ktl::api::result create_event(ktl::api::device _device, const ktl::api::event_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::event * _p_event)
{
ktl::loader::proc_type ptr = &ptable[43];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_event)ptr)(_device, _p_create_info, _p_allocator, _p_event);
}

void destroy_event(ktl::api::device _device, ktl::api::event _event, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[44];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_event)ptr)(_device, _event, _p_allocator);
}

ktl::api::result get_event_status(ktl::api::device _device, ktl::api::event _event)
{
ktl::loader::proc_type ptr = &ptable[45];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_event_status)ptr)(_device, _event);
}

ktl::api::result set_event(ktl::api::device _device, ktl::api::event _event)
{
ktl::loader::proc_type ptr = &ptable[46];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_event)ptr)(_device, _event);
}

ktl::api::result reset_event(ktl::api::device _device, ktl::api::event _event)
{
ktl::loader::proc_type ptr = &ptable[47];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_reset_event)ptr)(_device, _event);
}

ktl::api::result create_query_pool(ktl::api::device _device, const ktl::api::query_pool_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::query_pool * _p_query_pool)
{
ktl::loader::proc_type ptr = &ptable[48];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_query_pool)ptr)(_device, _p_create_info, _p_allocator, _p_query_pool);
}

void destroy_query_pool(ktl::api::device _device, ktl::api::query_pool _query_pool, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[49];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_query_pool)ptr)(_device, _query_pool, _p_allocator);
}

ktl::api::result get_query_pool_results(ktl::api::device _device, ktl::api::query_pool _query_pool, ktl::i32 _first_query, ktl::i32 _query_count, ktl::usize _data_size, void * _p_data, ktl::api::dvsize _stride, ktl::api::query_result_flags _flags)
{
ktl::loader::proc_type ptr = &ptable[50];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_query_pool_results)ptr)(_device, _query_pool, _first_query, _query_count, _data_size, _p_data, _stride, _flags);
}

void reset_query_pool(ktl::api::device _device, ktl::api::query_pool _query_pool, ktl::i32 _first_query, ktl::i32 _query_count)
{
ktl::loader::proc_type ptr = &ptable[51];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_reset_query_pool)ptr)(_device, _query_pool, _first_query, _query_count);
}

ktl::api::result create_buffer(ktl::api::device _device, const ktl::api::buffer_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::buffer * _p_buffer)
{
ktl::loader::proc_type ptr = &ptable[53];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_buffer)ptr)(_device, _p_create_info, _p_allocator, _p_buffer);
}

void destroy_buffer(ktl::api::device _device, ktl::api::buffer _buffer, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[54];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_buffer)ptr)(_device, _buffer, _p_allocator);
}

ktl::api::result create_buffer_view(ktl::api::device _device, const ktl::api::buffer_view_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::buffer_view * _p_view)
{
ktl::loader::proc_type ptr = &ptable[55];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_buffer_view)ptr)(_device, _p_create_info, _p_allocator, _p_view);
}

void destroy_buffer_view(ktl::api::device _device, ktl::api::buffer_view _buffer_view, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[56];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_buffer_view)ptr)(_device, _buffer_view, _p_allocator);
}

ktl::api::result create_image(ktl::api::device _device, const ktl::api::image_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::image * _p_image)
{
ktl::loader::proc_type ptr = &ptable[57];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_image)ptr)(_device, _p_create_info, _p_allocator, _p_image);
}

void destroy_image(ktl::api::device _device, ktl::api::image _image, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[58];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_image)ptr)(_device, _image, _p_allocator);
}

void get_image_subresource_layout(ktl::api::device _device, ktl::api::image _image, const ktl::api::image_subresource * _p_subresource, ktl::api::subresource_layout * _p_layout)
{
ktl::loader::proc_type ptr = &ptable[59];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_subresource_layout)ptr)(_device, _image, _p_subresource, _p_layout);
}

ktl::api::result create_image_view(ktl::api::device _device, const ktl::api::image_view_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::image_view * _p_view)
{
ktl::loader::proc_type ptr = &ptable[60];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_image_view)ptr)(_device, _p_create_info, _p_allocator, _p_view);
}

void destroy_image_view(ktl::api::device _device, ktl::api::image_view _image_view, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[61];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_image_view)ptr)(_device, _image_view, _p_allocator);
}

ktl::api::result create_shader_module(ktl::api::device _device, const ktl::api::shader_module_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::shader_module * _p_shader_module)
{
ktl::loader::proc_type ptr = &ptable[62];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_shader_module)ptr)(_device, _p_create_info, _p_allocator, _p_shader_module);
}

void destroy_shader_module(ktl::api::device _device, ktl::api::shader_module _shader_module, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[63];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_shader_module)ptr)(_device, _shader_module, _p_allocator);
}

ktl::api::result create_pipeline_cache(ktl::api::device _device, const ktl::api::pipeline_cache_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::pipeline_cache * _p_pipeline_cache)
{
ktl::loader::proc_type ptr = &ptable[64];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_pipeline_cache)ptr)(_device, _p_create_info, _p_allocator, _p_pipeline_cache);
}

void destroy_pipeline_cache(ktl::api::device _device, ktl::api::pipeline_cache _pipeline_cache, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[65];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_pipeline_cache)ptr)(_device, _pipeline_cache, _p_allocator);
}

ktl::api::result get_pipeline_cache_data(ktl::api::device _device, ktl::api::pipeline_cache _pipeline_cache, ktl::usize * _p_data_size, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[66];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_pipeline_cache_data)ptr)(_device, _pipeline_cache, _p_data_size, _p_data);
}

ktl::api::result merge_pipeline_caches(ktl::api::device _device, ktl::api::pipeline_cache _dst_cache, ktl::i32 _src_cache_count, const ktl::api::pipeline_cache * _p_src_caches)
{
ktl::loader::proc_type ptr = &ptable[67];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_merge_pipeline_caches)ptr)(_device, _dst_cache, _src_cache_count, _p_src_caches);
}

ktl::api::result create_pipeline_binaries_khr(ktl::api::device _device, const ktl::api::pipeline_binary_create_info_khr * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::pipeline_binary_handles_info_khr * _p_binaries)
{
ktl::loader::proc_type ptr = &ptable[68];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_pipeline_binaries_khr)ptr)(_device, _p_create_info, _p_allocator, _p_binaries);
}

void destroy_pipeline_binary_khr(ktl::api::device _device, ktl::api::pipeline_binary_khr _pipeline_binary, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[69];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_pipeline_binary_khr)ptr)(_device, _pipeline_binary, _p_allocator);
}

ktl::api::result get_pipeline_key_khr(ktl::api::device _device, const ktl::api::pipeline_create_info_khr * _p_pipeline_create_info, ktl::api::pipeline_binary_key_khr * _p_pipeline_key)
{
ktl::loader::proc_type ptr = &ptable[70];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_pipeline_key_khr)ptr)(_device, _p_pipeline_create_info, _p_pipeline_key);
}

ktl::api::result get_pipeline_binary_data_khr(ktl::api::device _device, const ktl::api::pipeline_binary_data_info_khr * _p_info, ktl::api::pipeline_binary_key_khr * _p_pipeline_binary_key, ktl::usize * _p_pipeline_binary_data_size, void * _p_pipeline_binary_data)
{
ktl::loader::proc_type ptr = &ptable[71];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_pipeline_binary_data_khr)ptr)(_device, _p_info, _p_pipeline_binary_key, _p_pipeline_binary_data_size, _p_pipeline_binary_data);
}

ktl::api::result release_captured_pipeline_data_khr(ktl::api::device _device, const ktl::api::release_captured_pipeline_data_info_khr * _p_info, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[72];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_release_captured_pipeline_data_khr)ptr)(_device, _p_info, _p_allocator);
}

ktl::api::result create_graphics_pipelines(ktl::api::device _device, ktl::api::pipeline_cache _pipeline_cache, ktl::i32 _create_info_count, const ktl::api::graphics_pipeline_create_info * _p_create_infos, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::pipeline * _p_pipelines)
{
ktl::loader::proc_type ptr = &ptable[73];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_graphics_pipelines)ptr)(_device, _pipeline_cache, _create_info_count, _p_create_infos, _p_allocator, _p_pipelines);
}

ktl::api::result create_compute_pipelines(ktl::api::device _device, ktl::api::pipeline_cache _pipeline_cache, ktl::i32 _create_info_count, const ktl::api::compute_pipeline_create_info * _p_create_infos, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::pipeline * _p_pipelines)
{
ktl::loader::proc_type ptr = &ptable[74];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_compute_pipelines)ptr)(_device, _pipeline_cache, _create_info_count, _p_create_infos, _p_allocator, _p_pipelines);
}

ktl::api::result get_device_subpass_shading_max_workgroup_size_huawei(ktl::api::device _device, ktl::api::render_pass _renderpass, ktl::api::extent2d * _p_max_workgroup_size)
{
ktl::loader::proc_type ptr = &ptable[75];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_subpass_shading_max_workgroup_size_huawei)ptr)(_device, _renderpass, _p_max_workgroup_size);
}

void destroy_pipeline(ktl::api::device _device, ktl::api::pipeline _pipeline, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[76];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_pipeline)ptr)(_device, _pipeline, _p_allocator);
}

ktl::api::result create_pipeline_layout(ktl::api::device _device, const ktl::api::pipeline_layout_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::pipeline_layout * _p_pipeline_layout)
{
ktl::loader::proc_type ptr = &ptable[77];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_pipeline_layout)ptr)(_device, _p_create_info, _p_allocator, _p_pipeline_layout);
}

void destroy_pipeline_layout(ktl::api::device _device, ktl::api::pipeline_layout _pipeline_layout, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[78];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_pipeline_layout)ptr)(_device, _pipeline_layout, _p_allocator);
}

ktl::api::result create_sampler(ktl::api::device _device, const ktl::api::sampler_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::sampler * _p_sampler)
{
ktl::loader::proc_type ptr = &ptable[79];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_sampler)ptr)(_device, _p_create_info, _p_allocator, _p_sampler);
}

void destroy_sampler(ktl::api::device _device, ktl::api::sampler _sampler, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[80];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_sampler)ptr)(_device, _sampler, _p_allocator);
}

ktl::api::result create_descriptor_set_layout(ktl::api::device _device, const ktl::api::descriptor_set_layout_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::descriptor_set_layout * _p_set_layout)
{
ktl::loader::proc_type ptr = &ptable[81];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_descriptor_set_layout)ptr)(_device, _p_create_info, _p_allocator, _p_set_layout);
}

void destroy_descriptor_set_layout(ktl::api::device _device, ktl::api::descriptor_set_layout _descriptor_set_layout, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[82];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_descriptor_set_layout)ptr)(_device, _descriptor_set_layout, _p_allocator);
}

ktl::api::result create_descriptor_pool(ktl::api::device _device, const ktl::api::descriptor_pool_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::descriptor_pool * _p_descriptor_pool)
{
ktl::loader::proc_type ptr = &ptable[83];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_descriptor_pool)ptr)(_device, _p_create_info, _p_allocator, _p_descriptor_pool);
}

void destroy_descriptor_pool(ktl::api::device _device, ktl::api::descriptor_pool _descriptor_pool, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[84];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_descriptor_pool)ptr)(_device, _descriptor_pool, _p_allocator);
}

ktl::api::result reset_descriptor_pool(ktl::api::device _device, ktl::api::descriptor_pool _descriptor_pool, ktl::api::descriptor_pool_reset_flags _flags)
{
ktl::loader::proc_type ptr = &ptable[85];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_reset_descriptor_pool)ptr)(_device, _descriptor_pool, _flags);
}

ktl::api::result allocate_descriptor_sets(ktl::api::device _device, const ktl::api::descriptor_set_allocate_info * _p_allocate_info, ktl::api::descriptor_set * _p_descriptor_sets)
{
ktl::loader::proc_type ptr = &ptable[86];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_allocate_descriptor_sets)ptr)(_device, _p_allocate_info, _p_descriptor_sets);
}

ktl::api::result free_descriptor_sets(ktl::api::device _device, ktl::api::descriptor_pool _descriptor_pool, ktl::i32 _descriptor_set_count, const ktl::api::descriptor_set * _p_descriptor_sets)
{
ktl::loader::proc_type ptr = &ptable[87];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_free_descriptor_sets)ptr)(_device, _descriptor_pool, _descriptor_set_count, _p_descriptor_sets);
}

void update_descriptor_sets(ktl::api::device _device, ktl::i32 _descriptor_write_count, const ktl::api::write_descriptor_set * _p_descriptor_writes, ktl::i32 _descriptor_copy_count, const ktl::api::copy_descriptor_set * _p_descriptor_copies)
{
ktl::loader::proc_type ptr = &ptable[88];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_update_descriptor_sets)ptr)(_device, _descriptor_write_count, _p_descriptor_writes, _descriptor_copy_count, _p_descriptor_copies);
}

ktl::api::result create_framebuffer(ktl::api::device _device, const ktl::api::framebuffer_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::framebuffer * _p_framebuffer)
{
ktl::loader::proc_type ptr = &ptable[89];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_framebuffer)ptr)(_device, _p_create_info, _p_allocator, _p_framebuffer);
}

void destroy_framebuffer(ktl::api::device _device, ktl::api::framebuffer _framebuffer, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[90];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_framebuffer)ptr)(_device, _framebuffer, _p_allocator);
}

ktl::api::result create_render_pass(ktl::api::device _device, const ktl::api::render_pass_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::render_pass * _p_render_pass)
{
ktl::loader::proc_type ptr = &ptable[91];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_render_pass)ptr)(_device, _p_create_info, _p_allocator, _p_render_pass);
}

void destroy_render_pass(ktl::api::device _device, ktl::api::render_pass _render_pass, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[92];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_render_pass)ptr)(_device, _render_pass, _p_allocator);
}

void get_render_area_granularity(ktl::api::device _device, ktl::api::render_pass _render_pass, ktl::api::extent2d * _p_granularity)
{
ktl::loader::proc_type ptr = &ptable[93];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_render_area_granularity)ptr)(_device, _render_pass, _p_granularity);
}

void get_rendering_area_granularity(ktl::api::device _device, const ktl::api::rendering_area_info * _p_rendering_area_info, ktl::api::extent2d * _p_granularity)
{
ktl::loader::proc_type ptr = &ptable[94];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_rendering_area_granularity)ptr)(_device, _p_rendering_area_info, _p_granularity);
}

ktl::api::result create_command_pool(ktl::api::device _device, const ktl::api::command_pool_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::command_pool * _p_command_pool)
{
ktl::loader::proc_type ptr = &ptable[96];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_command_pool)ptr)(_device, _p_create_info, _p_allocator, _p_command_pool);
}

void destroy_command_pool(ktl::api::device _device, ktl::api::command_pool _command_pool, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[97];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_command_pool)ptr)(_device, _command_pool, _p_allocator);
}

ktl::api::result reset_command_pool(ktl::api::device _device, ktl::api::command_pool _command_pool, ktl::api::command_pool_reset_flags _flags)
{
ktl::loader::proc_type ptr = &ptable[98];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_reset_command_pool)ptr)(_device, _command_pool, _flags);
}

ktl::api::result allocate_command_buffers(ktl::api::device _device, const ktl::api::command_buffer_allocate_info * _p_allocate_info, ktl::api::command_buffer * _p_command_buffers)
{
ktl::loader::proc_type ptr = &ptable[99];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_allocate_command_buffers)ptr)(_device, _p_allocate_info, _p_command_buffers);
}

void free_command_buffers(ktl::api::device _device, ktl::api::command_pool _command_pool, ktl::i32 _command_buffer_count, const ktl::api::command_buffer * _p_command_buffers)
{
ktl::loader::proc_type ptr = &ptable[100];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_free_command_buffers)ptr)(_device, _command_pool, _command_buffer_count, _p_command_buffers);
}

ktl::api::result begin_command_buffer(ktl::api::command_buffer _command_buffer, const ktl::api::command_buffer_begin_info * _p_begin_info)
{
ktl::loader::proc_type ptr = &ptable[101];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_begin_command_buffer)ptr)(_command_buffer, _p_begin_info);
}

ktl::api::result end_command_buffer(ktl::api::command_buffer _command_buffer)
{
ktl::loader::proc_type ptr = &ptable[102];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_end_command_buffer)ptr)(_command_buffer);
}

ktl::api::result reset_command_buffer(ktl::api::command_buffer _command_buffer, ktl::api::command_buffer_reset_flags _flags)
{
ktl::loader::proc_type ptr = &ptable[103];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_reset_command_buffer)ptr)(_command_buffer, _flags);
}

void cmd_bind_pipeline(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_bind_point _pipeline_bind_point, ktl::api::pipeline _pipeline)
{
ktl::loader::proc_type ptr = &ptable[104];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_pipeline)ptr)(_command_buffer, _pipeline_bind_point, _pipeline);
}

void cmd_set_primitive_restart_index_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _primitive_restart_index)
{
ktl::loader::proc_type ptr = &ptable[105];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_primitive_restart_index_ext)ptr)(_command_buffer, _primitive_restart_index);
}

void cmd_set_attachment_feedback_loop_enable_ext(ktl::api::command_buffer _command_buffer, ktl::api::image_aspect_flags _aspect_mask)
{
ktl::loader::proc_type ptr = &ptable[106];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_attachment_feedback_loop_enable_ext)ptr)(_command_buffer, _aspect_mask);
}

void cmd_set_viewport(ktl::api::command_buffer _command_buffer, ktl::i32 _first_viewport, ktl::i32 _viewport_count, const ktl::api::viewport * _p_viewports)
{
ktl::loader::proc_type ptr = &ptable[107];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_viewport)ptr)(_command_buffer, _first_viewport, _viewport_count, _p_viewports);
}

void cmd_set_scissor(ktl::api::command_buffer _command_buffer, ktl::i32 _first_scissor, ktl::i32 _scissor_count, const ktl::api::rect2d * _p_scissors)
{
ktl::loader::proc_type ptr = &ptable[108];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_scissor)ptr)(_command_buffer, _first_scissor, _scissor_count, _p_scissors);
}

void cmd_set_line_width(ktl::api::command_buffer _command_buffer, float _line_width)
{
ktl::loader::proc_type ptr = &ptable[109];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_line_width)ptr)(_command_buffer, _line_width);
}

void cmd_set_depth_bias(ktl::api::command_buffer _command_buffer, float _depth_bias_constant_factor, float _depth_bias_clamp, float _depth_bias_slope_factor)
{
ktl::loader::proc_type ptr = &ptable[110];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_bias)ptr)(_command_buffer, _depth_bias_constant_factor, _depth_bias_clamp, _depth_bias_slope_factor);
}

void cmd_set_blend_constants(ktl::api::command_buffer _command_buffer, const float _blend_constants[4])
{
ktl::loader::proc_type ptr = &ptable[111];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_blend_constants)ptr)(_command_buffer, _blend_constants);
}

void cmd_set_depth_bounds(ktl::api::command_buffer _command_buffer, float _min_depth_bounds, float _max_depth_bounds)
{
ktl::loader::proc_type ptr = &ptable[112];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_bounds)ptr)(_command_buffer, _min_depth_bounds, _max_depth_bounds);
}

void cmd_set_stencil_compare_mask(ktl::api::command_buffer _command_buffer, ktl::api::stencil_face_flags _face_mask, ktl::i32 _compare_mask)
{
ktl::loader::proc_type ptr = &ptable[113];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_stencil_compare_mask)ptr)(_command_buffer, _face_mask, _compare_mask);
}

void cmd_set_stencil_write_mask(ktl::api::command_buffer _command_buffer, ktl::api::stencil_face_flags _face_mask, ktl::i32 _write_mask)
{
ktl::loader::proc_type ptr = &ptable[114];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_stencil_write_mask)ptr)(_command_buffer, _face_mask, _write_mask);
}

void cmd_set_stencil_reference(ktl::api::command_buffer _command_buffer, ktl::api::stencil_face_flags _face_mask, ktl::i32 _reference)
{
ktl::loader::proc_type ptr = &ptable[115];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_stencil_reference)ptr)(_command_buffer, _face_mask, _reference);
}

void cmd_bind_descriptor_sets(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_bind_point _pipeline_bind_point, ktl::api::pipeline_layout _layout, ktl::i32 _first_set, ktl::i32 _descriptor_set_count, const ktl::api::descriptor_set * _p_descriptor_sets, ktl::i32 _dynamic_offset_count, const ktl::i32 * _p_dynamic_offsets)
{
ktl::loader::proc_type ptr = &ptable[116];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_descriptor_sets)ptr)(_command_buffer, _pipeline_bind_point, _layout, _first_set, _descriptor_set_count, _p_descriptor_sets, _dynamic_offset_count, _p_dynamic_offsets);
}

void cmd_bind_index_buffer(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset, ktl::api::index_type _index_type)
{
ktl::loader::proc_type ptr = &ptable[117];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_index_buffer)ptr)(_command_buffer, _buffer, _offset, _index_type);
}

void cmd_bind_vertex_buffers(ktl::api::command_buffer _command_buffer, ktl::i32 _first_binding, ktl::i32 _binding_count, const ktl::api::buffer * _p_buffers, const ktl::api::dvsize * _p_offsets)
{
ktl::loader::proc_type ptr = &ptable[118];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_vertex_buffers)ptr)(_command_buffer, _first_binding, _binding_count, _p_buffers, _p_offsets);
}

void cmd_draw(ktl::api::command_buffer _command_buffer, ktl::i32 _vertex_count, ktl::i32 _instance_count, ktl::i32 _first_vertex, ktl::i32 _first_instance)
{
ktl::loader::proc_type ptr = &ptable[119];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw)ptr)(_command_buffer, _vertex_count, _instance_count, _first_vertex, _first_instance);
}

void cmd_draw_indexed(ktl::api::command_buffer _command_buffer, ktl::i32 _index_count, ktl::i32 _instance_count, ktl::i32 _first_index, ktl::i32 _vertex_offset, ktl::i32 _first_instance)
{
ktl::loader::proc_type ptr = &ptable[120];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_indexed)ptr)(_command_buffer, _index_count, _instance_count, _first_index, _vertex_offset, _first_instance);
}

void cmd_draw_multi_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _draw_count, const ktl::api::multi_draw_info_ext * _p_vertex_info, ktl::i32 _instance_count, ktl::i32 _first_instance, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[121];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_multi_ext)ptr)(_command_buffer, _draw_count, _p_vertex_info, _instance_count, _first_instance, _stride);
}

void cmd_draw_multi_indexed_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _draw_count, const ktl::api::multi_draw_indexed_info_ext * _p_index_info, ktl::i32 _instance_count, ktl::i32 _first_instance, ktl::i32 _stride, const ktl::i32 * _p_vertex_offset)
{
ktl::loader::proc_type ptr = &ptable[122];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_multi_indexed_ext)ptr)(_command_buffer, _draw_count, _p_index_info, _instance_count, _first_instance, _stride, _p_vertex_offset);
}

void cmd_draw_indirect(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset, ktl::i32 _draw_count, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[123];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_indirect)ptr)(_command_buffer, _buffer, _offset, _draw_count, _stride);
}

void cmd_draw_indexed_indirect(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset, ktl::i32 _draw_count, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[124];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_indexed_indirect)ptr)(_command_buffer, _buffer, _offset, _draw_count, _stride);
}

void cmd_dispatch(ktl::api::command_buffer _command_buffer, ktl::i32 _group_count_x, ktl::i32 _group_count_y, ktl::i32 _group_count_z)
{
ktl::loader::proc_type ptr = &ptable[125];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_dispatch)ptr)(_command_buffer, _group_count_x, _group_count_y, _group_count_z);
}

void cmd_dispatch_indirect(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset)
{
ktl::loader::proc_type ptr = &ptable[126];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_dispatch_indirect)ptr)(_command_buffer, _buffer, _offset);
}

void cmd_subpass_shading_huawei(ktl::api::command_buffer _command_buffer)
{
ktl::loader::proc_type ptr = &ptable[127];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_subpass_shading_huawei)ptr)(_command_buffer);
}

void cmd_draw_cluster_huawei(ktl::api::command_buffer _command_buffer, ktl::i32 _group_count_x, ktl::i32 _group_count_y, ktl::i32 _group_count_z)
{
ktl::loader::proc_type ptr = &ptable[128];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_cluster_huawei)ptr)(_command_buffer, _group_count_x, _group_count_y, _group_count_z);
}

void cmd_draw_cluster_indirect_huawei(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset)
{
ktl::loader::proc_type ptr = &ptable[129];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_cluster_indirect_huawei)ptr)(_command_buffer, _buffer, _offset);
}

void cmd_update_pipeline_indirect_buffer_nv(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_bind_point _pipeline_bind_point, ktl::api::pipeline _pipeline)
{
ktl::loader::proc_type ptr = &ptable[130];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_update_pipeline_indirect_buffer_nv)ptr)(_command_buffer, _pipeline_bind_point, _pipeline);
}

void cmd_copy_buffer(ktl::api::command_buffer _command_buffer, ktl::api::buffer _src_buffer, ktl::api::buffer _dst_buffer, ktl::i32 _region_count, const ktl::api::buffer_copy * _p_regions)
{
ktl::loader::proc_type ptr = &ptable[131];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_buffer)ptr)(_command_buffer, _src_buffer, _dst_buffer, _region_count, _p_regions);
}

void cmd_copy_image(ktl::api::command_buffer _command_buffer, ktl::api::image _src_image, ktl::api::image_layout _src_image_layout, ktl::api::image _dst_image, ktl::api::image_layout _dst_image_layout, ktl::i32 _region_count, const ktl::api::image_copy * _p_regions)
{
ktl::loader::proc_type ptr = &ptable[132];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_image)ptr)(_command_buffer, _src_image, _src_image_layout, _dst_image, _dst_image_layout, _region_count, _p_regions);
}

void cmd_blit_image(ktl::api::command_buffer _command_buffer, ktl::api::image _src_image, ktl::api::image_layout _src_image_layout, ktl::api::image _dst_image, ktl::api::image_layout _dst_image_layout, ktl::i32 _region_count, const ktl::api::image_blit * _p_regions, ktl::api::filter _filter)
{
ktl::loader::proc_type ptr = &ptable[133];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_blit_image)ptr)(_command_buffer, _src_image, _src_image_layout, _dst_image, _dst_image_layout, _region_count, _p_regions, _filter);
}

void cmd_copy_buffer_to_image(ktl::api::command_buffer _command_buffer, ktl::api::buffer _src_buffer, ktl::api::image _dst_image, ktl::api::image_layout _dst_image_layout, ktl::i32 _region_count, const ktl::api::buffer_image_copy * _p_regions)
{
ktl::loader::proc_type ptr = &ptable[134];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_buffer_to_image)ptr)(_command_buffer, _src_buffer, _dst_image, _dst_image_layout, _region_count, _p_regions);
}

void cmd_copy_image_to_buffer(ktl::api::command_buffer _command_buffer, ktl::api::image _src_image, ktl::api::image_layout _src_image_layout, ktl::api::buffer _dst_buffer, ktl::i32 _region_count, const ktl::api::buffer_image_copy * _p_regions)
{
ktl::loader::proc_type ptr = &ptable[135];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_image_to_buffer)ptr)(_command_buffer, _src_image, _src_image_layout, _dst_buffer, _region_count, _p_regions);
}

void cmd_copy_memory_indirect_nv(ktl::api::command_buffer _command_buffer, ktl::api::dvaddr _copy_buffer_address, ktl::i32 _copy_count, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[136];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_memory_indirect_nv)ptr)(_command_buffer, _copy_buffer_address, _copy_count, _stride);
}

void cmd_copy_memory_indirect_khr(ktl::api::command_buffer _command_buffer, const ktl::api::copy_memory_indirect_info_khr * _p_copy_memory_indirect_info)
{
ktl::loader::proc_type ptr = &ptable[137];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_memory_indirect_khr)ptr)(_command_buffer, _p_copy_memory_indirect_info);
}

void cmd_copy_memory_to_image_indirect_nv(ktl::api::command_buffer _command_buffer, ktl::api::dvaddr _copy_buffer_address, ktl::i32 _copy_count, ktl::i32 _stride, ktl::api::image _dst_image, ktl::api::image_layout _dst_image_layout, const ktl::api::image_subresource_layers * _p_image_subresources)
{
ktl::loader::proc_type ptr = &ptable[138];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_memory_to_image_indirect_nv)ptr)(_command_buffer, _copy_buffer_address, _copy_count, _stride, _dst_image, _dst_image_layout, _p_image_subresources);
}

void cmd_copy_memory_to_image_indirect_khr(ktl::api::command_buffer _command_buffer, const ktl::api::copy_memory_to_image_indirect_info_khr * _p_copy_memory_to_image_indirect_info)
{
ktl::loader::proc_type ptr = &ptable[139];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_memory_to_image_indirect_khr)ptr)(_command_buffer, _p_copy_memory_to_image_indirect_info);
}

void cmd_update_buffer(ktl::api::command_buffer _command_buffer, ktl::api::buffer _dst_buffer, ktl::api::dvsize _dst_offset, ktl::api::dvsize _data_size, const void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[140];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_update_buffer)ptr)(_command_buffer, _dst_buffer, _dst_offset, _data_size, _p_data);
}

void cmd_fill_buffer(ktl::api::command_buffer _command_buffer, ktl::api::buffer _dst_buffer, ktl::api::dvsize _dst_offset, ktl::api::dvsize _size, ktl::i32 _data)
{
ktl::loader::proc_type ptr = &ptable[141];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_fill_buffer)ptr)(_command_buffer, _dst_buffer, _dst_offset, _size, _data);
}

void cmd_clear_color_image(ktl::api::command_buffer _command_buffer, ktl::api::image _image, ktl::api::image_layout _image_layout, const ktl::api::clear_color_value * _p_color, ktl::i32 _range_count, const ktl::api::image_subresource_range * _p_ranges)
{
ktl::loader::proc_type ptr = &ptable[142];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_clear_color_image)ptr)(_command_buffer, _image, _image_layout, _p_color, _range_count, _p_ranges);
}

void cmd_clear_depth_stencil_image(ktl::api::command_buffer _command_buffer, ktl::api::image _image, ktl::api::image_layout _image_layout, const ktl::api::clear_depth_stencil_value * _p_depth_stencil, ktl::i32 _range_count, const ktl::api::image_subresource_range * _p_ranges)
{
ktl::loader::proc_type ptr = &ptable[143];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_clear_depth_stencil_image)ptr)(_command_buffer, _image, _image_layout, _p_depth_stencil, _range_count, _p_ranges);
}

void cmd_clear_attachments(ktl::api::command_buffer _command_buffer, ktl::i32 _attachment_count, const ktl::api::clear_attachment * _p_attachments, ktl::i32 _rect_count, const ktl::api::clear_rect * _p_rects)
{
ktl::loader::proc_type ptr = &ptable[144];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_clear_attachments)ptr)(_command_buffer, _attachment_count, _p_attachments, _rect_count, _p_rects);
}

void cmd_resolve_image(ktl::api::command_buffer _command_buffer, ktl::api::image _src_image, ktl::api::image_layout _src_image_layout, ktl::api::image _dst_image, ktl::api::image_layout _dst_image_layout, ktl::i32 _region_count, const ktl::api::image_resolve * _p_regions)
{
ktl::loader::proc_type ptr = &ptable[145];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_resolve_image)ptr)(_command_buffer, _src_image, _src_image_layout, _dst_image, _dst_image_layout, _region_count, _p_regions);
}

void cmd_set_event(ktl::api::command_buffer _command_buffer, ktl::api::event _event, ktl::api::pipeline_stage_flags _stage_mask)
{
ktl::loader::proc_type ptr = &ptable[146];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_event)ptr)(_command_buffer, _event, _stage_mask);
}

void cmd_reset_event(ktl::api::command_buffer _command_buffer, ktl::api::event _event, ktl::api::pipeline_stage_flags _stage_mask)
{
ktl::loader::proc_type ptr = &ptable[147];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_reset_event)ptr)(_command_buffer, _event, _stage_mask);
}

void cmd_wait_events(ktl::api::command_buffer _command_buffer, ktl::i32 _event_count, const ktl::api::event * _p_events, ktl::api::pipeline_stage_flags _src_stage_mask, ktl::api::pipeline_stage_flags _dst_stage_mask, ktl::i32 _memory_barrier_count, const ktl::api::memory_barrier * _p_memory_barriers, ktl::i32 _buffer_memory_barrier_count, const ktl::api::buffer_memory_barrier * _p_buffer_memory_barriers, ktl::i32 _image_memory_barrier_count, const ktl::api::image_memory_barrier * _p_image_memory_barriers)
{
ktl::loader::proc_type ptr = &ptable[148];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_wait_events)ptr)(_command_buffer, _event_count, _p_events, _src_stage_mask, _dst_stage_mask, _memory_barrier_count, _p_memory_barriers, _buffer_memory_barrier_count, _p_buffer_memory_barriers, _image_memory_barrier_count, _p_image_memory_barriers);
}

void cmd_pipeline_barrier(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_stage_flags _src_stage_mask, ktl::api::pipeline_stage_flags _dst_stage_mask, ktl::api::dependency_flags _dependency_flags, ktl::i32 _memory_barrier_count, const ktl::api::memory_barrier * _p_memory_barriers, ktl::i32 _buffer_memory_barrier_count, const ktl::api::buffer_memory_barrier * _p_buffer_memory_barriers, ktl::i32 _image_memory_barrier_count, const ktl::api::image_memory_barrier * _p_image_memory_barriers)
{
ktl::loader::proc_type ptr = &ptable[149];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_pipeline_barrier)ptr)(_command_buffer, _src_stage_mask, _dst_stage_mask, _dependency_flags, _memory_barrier_count, _p_memory_barriers, _buffer_memory_barrier_count, _p_buffer_memory_barriers, _image_memory_barrier_count, _p_image_memory_barriers);
}

void cmd_begin_query(ktl::api::command_buffer _command_buffer, ktl::api::query_pool _query_pool, ktl::i32 _query, ktl::api::query_control_flags _flags)
{
ktl::loader::proc_type ptr = &ptable[150];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_query)ptr)(_command_buffer, _query_pool, _query, _flags);
}

void cmd_end_query(ktl::api::command_buffer _command_buffer, ktl::api::query_pool _query_pool, ktl::i32 _query)
{
ktl::loader::proc_type ptr = &ptable[151];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_query)ptr)(_command_buffer, _query_pool, _query);
}

void cmd_begin_conditional_rendering_ext(ktl::api::command_buffer _command_buffer, const ktl::api::conditional_rendering_begin_info_ext * _p_conditional_rendering_begin)
{
ktl::loader::proc_type ptr = &ptable[152];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_conditional_rendering_ext)ptr)(_command_buffer, _p_conditional_rendering_begin);
}

void cmd_end_conditional_rendering_ext(ktl::api::command_buffer _command_buffer)
{
ktl::loader::proc_type ptr = &ptable[153];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_conditional_rendering_ext)ptr)(_command_buffer);
}

void cmd_begin_custom_resolve_ext(ktl::api::command_buffer _command_buffer, const ktl::api::begin_custom_resolve_info_ext * _p_begin_custom_resolve_info)
{
ktl::loader::proc_type ptr = &ptable[154];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_custom_resolve_ext)ptr)(_command_buffer, _p_begin_custom_resolve_info);
}

void cmd_reset_query_pool(ktl::api::command_buffer _command_buffer, ktl::api::query_pool _query_pool, ktl::i32 _first_query, ktl::i32 _query_count)
{
ktl::loader::proc_type ptr = &ptable[155];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_reset_query_pool)ptr)(_command_buffer, _query_pool, _first_query, _query_count);
}

void cmd_write_timestamp(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_stage_flag_bits _pipeline_stage, ktl::api::query_pool _query_pool, ktl::i32 _query)
{
ktl::loader::proc_type ptr = &ptable[156];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_write_timestamp)ptr)(_command_buffer, _pipeline_stage, _query_pool, _query);
}

void cmd_copy_query_pool_results(ktl::api::command_buffer _command_buffer, ktl::api::query_pool _query_pool, ktl::i32 _first_query, ktl::i32 _query_count, ktl::api::buffer _dst_buffer, ktl::api::dvsize _dst_offset, ktl::api::dvsize _stride, ktl::api::query_result_flags _flags)
{
ktl::loader::proc_type ptr = &ptable[157];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_query_pool_results)ptr)(_command_buffer, _query_pool, _first_query, _query_count, _dst_buffer, _dst_offset, _stride, _flags);
}

void cmd_push_constants(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_layout _layout, ktl::api::shader_stage_flags _stage_flags, ktl::i32 _offset, ktl::i32 _size, const void * _p_values)
{
ktl::loader::proc_type ptr = &ptable[158];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_push_constants)ptr)(_command_buffer, _layout, _stage_flags, _offset, _size, _p_values);
}

void cmd_begin_render_pass(ktl::api::command_buffer _command_buffer, const ktl::api::render_pass_begin_info * _p_render_pass_begin, ktl::api::subpass_contents _contents)
{
ktl::loader::proc_type ptr = &ptable[159];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_render_pass)ptr)(_command_buffer, _p_render_pass_begin, _contents);
}

void cmd_next_subpass(ktl::api::command_buffer _command_buffer, ktl::api::subpass_contents _contents)
{
ktl::loader::proc_type ptr = &ptable[160];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_next_subpass)ptr)(_command_buffer, _contents);
}

void cmd_end_render_pass(ktl::api::command_buffer _command_buffer)
{
ktl::loader::proc_type ptr = &ptable[161];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_render_pass)ptr)(_command_buffer);
}

void cmd_execute_commands(ktl::api::command_buffer _command_buffer, ktl::i32 _command_buffer_count, const ktl::api::command_buffer * _p_command_buffers)
{
ktl::loader::proc_type ptr = &ptable[162];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_execute_commands)ptr)(_command_buffer, _command_buffer_count, _p_command_buffers);
}

ktl::api::result create_android_surface_khr(ktl::api::instance _instance, const ktl::api::android_surface_create_info_khr * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[163];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_android_surface_khr)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::result create_surface_ohos(ktl::api::instance _instance, const ktl::api::surface_create_info_ohos * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[164];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_surface_ohos)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::result get_physical_device_display_properties_khr(ktl::api::physical_device _physical_device, ktl::i32 * _p_property_count, ktl::api::display_properties_khr * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[165];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_display_properties_khr)ptr)(_physical_device, _p_property_count, _p_properties);
}

ktl::api::result get_physical_device_display_plane_properties_khr(ktl::api::physical_device _physical_device, ktl::i32 * _p_property_count, ktl::api::display_plane_properties_khr * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[166];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_display_plane_properties_khr)ptr)(_physical_device, _p_property_count, _p_properties);
}

ktl::api::result get_display_plane_supported_displays_khr(ktl::api::physical_device _physical_device, ktl::i32 _plane_index, ktl::i32 * _p_display_count, ktl::api::display_khr * _p_displays)
{
ktl::loader::proc_type ptr = &ptable[167];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_display_plane_supported_displays_khr)ptr)(_physical_device, _plane_index, _p_display_count, _p_displays);
}

ktl::api::result get_display_mode_properties_khr(ktl::api::physical_device _physical_device, ktl::api::display_khr _display, ktl::i32 * _p_property_count, ktl::api::display_mode_properties_khr * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[168];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_display_mode_properties_khr)ptr)(_physical_device, _display, _p_property_count, _p_properties);
}

ktl::api::result create_display_mode_khr(ktl::api::physical_device _physical_device, ktl::api::display_khr _display, const ktl::api::display_mode_create_info_khr * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::display_mode_khr * _p_mode)
{
ktl::loader::proc_type ptr = &ptable[169];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_display_mode_khr)ptr)(_physical_device, _display, _p_create_info, _p_allocator, _p_mode);
}

ktl::api::result get_display_plane_capabilities_khr(ktl::api::physical_device _physical_device, ktl::api::display_mode_khr _mode, ktl::i32 _plane_index, ktl::api::display_plane_capabilities_khr * _p_capabilities)
{
ktl::loader::proc_type ptr = &ptable[170];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_display_plane_capabilities_khr)ptr)(_physical_device, _mode, _plane_index, _p_capabilities);
}

ktl::api::result create_display_plane_surface_khr(ktl::api::instance _instance, const ktl::api::display_surface_create_info_khr * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[171];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_display_plane_surface_khr)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::result create_shared_swapchains_khr(ktl::api::device _device, ktl::i32 _swapchain_count, const ktl::api::swapchain_create_info_khr * _p_create_infos, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::swapchain_khr * _p_swapchains)
{
ktl::loader::proc_type ptr = &ptable[172];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_shared_swapchains_khr)ptr)(_device, _swapchain_count, _p_create_infos, _p_allocator, _p_swapchains);
}

void destroy_surface_khr(ktl::api::instance _instance, ktl::api::surface_khr _surface, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[173];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_surface_khr)ptr)(_instance, _surface, _p_allocator);
}

ktl::api::result get_physical_device_surface_support_khr(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, ktl::api::surface_khr _surface, ktl::api::bool32 * _p_supported)
{
ktl::loader::proc_type ptr = &ptable[174];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_surface_support_khr)ptr)(_physical_device, _queue_family_index, _surface, _p_supported);
}

ktl::api::result get_physical_device_surface_capabilities_khr(ktl::api::physical_device _physical_device, ktl::api::surface_khr _surface, ktl::api::surface_capabilities_khr * _p_surface_capabilities)
{
ktl::loader::proc_type ptr = &ptable[175];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_surface_capabilities_khr)ptr)(_physical_device, _surface, _p_surface_capabilities);
}

ktl::api::result get_physical_device_surface_formats_khr(ktl::api::physical_device _physical_device, ktl::api::surface_khr _surface, ktl::i32 * _p_surface_format_count, ktl::api::surface_format_khr * _p_surface_formats)
{
ktl::loader::proc_type ptr = &ptable[176];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_surface_formats_khr)ptr)(_physical_device, _surface, _p_surface_format_count, _p_surface_formats);
}

ktl::api::result get_physical_device_surface_present_modes_khr(ktl::api::physical_device _physical_device, ktl::api::surface_khr _surface, ktl::i32 * _p_present_mode_count, ktl::api::present_mode_khr * _p_present_modes)
{
ktl::loader::proc_type ptr = &ptable[177];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_surface_present_modes_khr)ptr)(_physical_device, _surface, _p_present_mode_count, _p_present_modes);
}

ktl::api::result create_swapchain_khr(ktl::api::device _device, const ktl::api::swapchain_create_info_khr * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::swapchain_khr * _p_swapchain)
{
ktl::loader::proc_type ptr = &ptable[178];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_swapchain_khr)ptr)(_device, _p_create_info, _p_allocator, _p_swapchain);
}

void destroy_swapchain_khr(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[179];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_swapchain_khr)ptr)(_device, _swapchain, _p_allocator);
}

ktl::api::result get_swapchain_images_khr(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, ktl::i32 * _p_swapchain_image_count, ktl::api::image * _p_swapchain_images)
{
ktl::loader::proc_type ptr = &ptable[180];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_swapchain_images_khr)ptr)(_device, _swapchain, _p_swapchain_image_count, _p_swapchain_images);
}

ktl::api::result acquire_next_image_khr(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, ktl::u64 _timeout, ktl::api::semaphore _semaphore, ktl::api::fence _fence, ktl::i32 * _p_image_index)
{
ktl::loader::proc_type ptr = &ptable[181];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_acquire_next_image_khr)ptr)(_device, _swapchain, _timeout, _semaphore, _fence, _p_image_index);
}

ktl::api::result queue_present_khr(ktl::api::queue _queue, const ktl::api::present_info_khr * _p_present_info)
{
ktl::loader::proc_type ptr = &ptable[182];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_present_khr)ptr)(_queue, _p_present_info);
}

ktl::api::result create_vi_surface_nn(ktl::api::instance _instance, const ktl::api::vi_surface_create_info_nn * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[183];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_vi_surface_nn)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::result create_wayland_surface_khr(ktl::api::instance _instance, const ktl::api::wayland_surface_create_info_khr * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[184];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_wayland_surface_khr)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::bool32 get_physical_device_wayland_presentation_support_khr(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, wl_display * _display)
{
ktl::loader::proc_type ptr = &ptable[185];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_wayland_presentation_support_khr)ptr)(_physical_device, _queue_family_index, _display);
}

ktl::api::result create_ubm_surface_sec(ktl::api::instance _instance, const ktl::api::ubm_surface_create_info_sec * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[186];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_ubm_surface_sec)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::bool32 get_physical_device_ubm_presentation_support_sec(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, ubm_device * _device)
{
ktl::loader::proc_type ptr = &ptable[187];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_ubm_presentation_support_sec)ptr)(_physical_device, _queue_family_index, _device);
}

ktl::api::result create_win32surface_khr(ktl::api::instance _instance, const ktl::api::win32surface_create_info_khr * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[188];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_win32surface_khr)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::bool32 get_physical_device_win32presentation_support_khr(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index)
{
ktl::loader::proc_type ptr = &ptable[189];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_win32presentation_support_khr)ptr)(_physical_device, _queue_family_index);
}

ktl::api::result create_xlib_surface_khr(ktl::api::instance _instance, const ktl::api::xlib_surface_create_info_khr * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[190];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_xlib_surface_khr)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::bool32 get_physical_device_xlib_presentation_support_khr(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, Display * _dpy, VisualID _visual_id)
{
ktl::loader::proc_type ptr = &ptable[191];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_xlib_presentation_support_khr)ptr)(_physical_device, _queue_family_index, _dpy, _visual_id);
}

ktl::api::result create_xcb_surface_khr(ktl::api::instance _instance, const ktl::api::xcb_surface_create_info_khr * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[192];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_xcb_surface_khr)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::bool32 get_physical_device_xcb_presentation_support_khr(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, xcb_connection_t * _connection, xcb_visualid_t _visual_id)
{
ktl::loader::proc_type ptr = &ptable[193];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_xcb_presentation_support_khr)ptr)(_physical_device, _queue_family_index, _connection, _visual_id);
}

ktl::api::result create_direct_fbsurface_ext(ktl::api::instance _instance, const ktl::api::direct_fbsurface_create_info_ext * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[194];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_direct_fbsurface_ext)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::bool32 get_physical_device_direct_fbpresentation_support_ext(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, IDirectFB * _dfb)
{
ktl::loader::proc_type ptr = &ptable[195];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_direct_fbpresentation_support_ext)ptr)(_physical_device, _queue_family_index, _dfb);
}

ktl::api::result create_image_pipe_surface_fuchsia(ktl::api::instance _instance, const ktl::api::image_pipe_surface_create_info_fuchsia * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[196];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_image_pipe_surface_fuchsia)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::result create_stream_descriptor_surface_ggp(ktl::api::instance _instance, const ktl::api::stream_descriptor_surface_create_info_ggp * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[197];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_stream_descriptor_surface_ggp)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::result create_screen_surface_qnx(ktl::api::instance _instance, const ktl::api::screen_surface_create_info_qnx * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[198];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_screen_surface_qnx)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::bool32 get_physical_device_screen_presentation_support_qnx(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, _screen_window * _window)
{
ktl::loader::proc_type ptr = &ptable[199];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_screen_presentation_support_qnx)ptr)(_physical_device, _queue_family_index, _window);
}

ktl::api::result create_debug_report_callback_ext(ktl::api::instance _instance, const ktl::api::debug_report_callback_create_info_ext * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::debug_report_callback_ext * _p_callback)
{
ktl::loader::proc_type ptr = &ptable[200];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_debug_report_callback_ext)ptr)(_instance, _p_create_info, _p_allocator, _p_callback);
}

void destroy_debug_report_callback_ext(ktl::api::instance _instance, ktl::api::debug_report_callback_ext _callback, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[201];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_debug_report_callback_ext)ptr)(_instance, _callback, _p_allocator);
}

void debug_report_message_ext(ktl::api::instance _instance, ktl::api::debug_report_flags_ext _flags, ktl::api::debug_report_object_type_ext _object_type, ktl::u64 _object, ktl::usize _location, ktl::i32 _message_code, const char * _p_layer_prefix, const char * _p_message)
{
ktl::loader::proc_type ptr = &ptable[202];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_debug_report_message_ext)ptr)(_instance, _flags, _object_type, _object, _location, _message_code, _p_layer_prefix, _p_message);
}

ktl::api::result debug_marker_set_object_name_ext(ktl::api::device _device, const ktl::api::debug_marker_object_name_info_ext * _p_name_info)
{
ktl::loader::proc_type ptr = &ptable[203];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_debug_marker_set_object_name_ext)ptr)(_device, _p_name_info);
}

ktl::api::result debug_marker_set_object_tag_ext(ktl::api::device _device, const ktl::api::debug_marker_object_tag_info_ext * _p_tag_info)
{
ktl::loader::proc_type ptr = &ptable[204];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_debug_marker_set_object_tag_ext)ptr)(_device, _p_tag_info);
}

void cmd_debug_marker_begin_ext(ktl::api::command_buffer _command_buffer, const ktl::api::debug_marker_marker_info_ext * _p_marker_info)
{
ktl::loader::proc_type ptr = &ptable[205];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_debug_marker_begin_ext)ptr)(_command_buffer, _p_marker_info);
}

void cmd_debug_marker_end_ext(ktl::api::command_buffer _command_buffer)
{
ktl::loader::proc_type ptr = &ptable[206];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_debug_marker_end_ext)ptr)(_command_buffer);
}

void cmd_debug_marker_insert_ext(ktl::api::command_buffer _command_buffer, const ktl::api::debug_marker_marker_info_ext * _p_marker_info)
{
ktl::loader::proc_type ptr = &ptable[207];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_debug_marker_insert_ext)ptr)(_command_buffer, _p_marker_info);
}

ktl::api::result get_physical_device_external_image_format_properties_nv(ktl::api::physical_device _physical_device, ktl::api::format _format, ktl::api::image_type _type, ktl::api::image_tiling _tiling, ktl::api::image_usage_flags _usage, ktl::api::image_create_flags _flags, ktl::api::external_memory_handle_type_flags_nv _external_handle_type, ktl::api::external_image_format_properties_nv * _p_external_image_format_properties)
{
ktl::loader::proc_type ptr = &ptable[208];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_external_image_format_properties_nv)ptr)(_physical_device, _format, _type, _tiling, _usage, _flags, _external_handle_type, _p_external_image_format_properties);
}

ktl::api::result get_memory_win32handle_nv(ktl::api::device _device, ktl::api::device_memory _memory, ktl::api::external_memory_handle_type_flags_nv _handle_type, HANDLE * _p_handle)
{
ktl::loader::proc_type ptr = &ptable[209];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_win32handle_nv)ptr)(_device, _memory, _handle_type, _p_handle);
}

void cmd_execute_generated_commands_nv(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _is_preprocessed, const ktl::api::generated_commands_info_nv * _p_generated_commands_info)
{
ktl::loader::proc_type ptr = &ptable[210];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_execute_generated_commands_nv)ptr)(_command_buffer, _is_preprocessed, _p_generated_commands_info);
}

void cmd_preprocess_generated_commands_nv(ktl::api::command_buffer _command_buffer, const ktl::api::generated_commands_info_nv * _p_generated_commands_info)
{
ktl::loader::proc_type ptr = &ptable[211];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_preprocess_generated_commands_nv)ptr)(_command_buffer, _p_generated_commands_info);
}

void cmd_bind_pipeline_shader_group_nv(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_bind_point _pipeline_bind_point, ktl::api::pipeline _pipeline, ktl::i32 _group_index)
{
ktl::loader::proc_type ptr = &ptable[212];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_pipeline_shader_group_nv)ptr)(_command_buffer, _pipeline_bind_point, _pipeline, _group_index);
}

void get_generated_commands_memory_requirements_nv(ktl::api::device _device, const ktl::api::generated_commands_memory_requirements_info_nv * _p_info, ktl::api::memory_requirements2 * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[213];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_generated_commands_memory_requirements_nv)ptr)(_device, _p_info, _p_memory_requirements);
}

ktl::api::result create_indirect_commands_layout_nv(ktl::api::device _device, const ktl::api::indirect_commands_layout_create_info_nv * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::indirect_commands_layout_nv * _p_indirect_commands_layout)
{
ktl::loader::proc_type ptr = &ptable[214];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_indirect_commands_layout_nv)ptr)(_device, _p_create_info, _p_allocator, _p_indirect_commands_layout);
}

void destroy_indirect_commands_layout_nv(ktl::api::device _device, ktl::api::indirect_commands_layout_nv _indirect_commands_layout, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[215];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_indirect_commands_layout_nv)ptr)(_device, _indirect_commands_layout, _p_allocator);
}

void cmd_execute_generated_commands_ext(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _is_preprocessed, const ktl::api::generated_commands_info_ext * _p_generated_commands_info)
{
ktl::loader::proc_type ptr = &ptable[216];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_execute_generated_commands_ext)ptr)(_command_buffer, _is_preprocessed, _p_generated_commands_info);
}

void cmd_preprocess_generated_commands_ext(ktl::api::command_buffer _command_buffer, const ktl::api::generated_commands_info_ext * _p_generated_commands_info, ktl::api::command_buffer _state_command_buffer)
{
ktl::loader::proc_type ptr = &ptable[217];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_preprocess_generated_commands_ext)ptr)(_command_buffer, _p_generated_commands_info, _state_command_buffer);
}

void get_generated_commands_memory_requirements_ext(ktl::api::device _device, const ktl::api::generated_commands_memory_requirements_info_ext * _p_info, ktl::api::memory_requirements2 * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[218];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_generated_commands_memory_requirements_ext)ptr)(_device, _p_info, _p_memory_requirements);
}

ktl::api::result create_indirect_commands_layout_ext(ktl::api::device _device, const ktl::api::indirect_commands_layout_create_info_ext * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::indirect_commands_layout_ext * _p_indirect_commands_layout)
{
ktl::loader::proc_type ptr = &ptable[219];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_indirect_commands_layout_ext)ptr)(_device, _p_create_info, _p_allocator, _p_indirect_commands_layout);
}

void destroy_indirect_commands_layout_ext(ktl::api::device _device, ktl::api::indirect_commands_layout_ext _indirect_commands_layout, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[220];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_indirect_commands_layout_ext)ptr)(_device, _indirect_commands_layout, _p_allocator);
}

ktl::api::result create_indirect_execution_set_ext(ktl::api::device _device, const ktl::api::indirect_execution_set_create_info_ext * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::indirect_execution_set_ext * _p_indirect_execution_set)
{
ktl::loader::proc_type ptr = &ptable[221];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_indirect_execution_set_ext)ptr)(_device, _p_create_info, _p_allocator, _p_indirect_execution_set);
}

void destroy_indirect_execution_set_ext(ktl::api::device _device, ktl::api::indirect_execution_set_ext _indirect_execution_set, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[222];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_indirect_execution_set_ext)ptr)(_device, _indirect_execution_set, _p_allocator);
}

void update_indirect_execution_set_pipeline_ext(ktl::api::device _device, ktl::api::indirect_execution_set_ext _indirect_execution_set, ktl::i32 _execution_set_write_count, const ktl::api::write_indirect_execution_set_pipeline_ext * _p_execution_set_writes)
{
ktl::loader::proc_type ptr = &ptable[223];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_update_indirect_execution_set_pipeline_ext)ptr)(_device, _indirect_execution_set, _execution_set_write_count, _p_execution_set_writes);
}

void update_indirect_execution_set_shader_ext(ktl::api::device _device, ktl::api::indirect_execution_set_ext _indirect_execution_set, ktl::i32 _execution_set_write_count, const ktl::api::write_indirect_execution_set_shader_ext * _p_execution_set_writes)
{
ktl::loader::proc_type ptr = &ptable[224];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_update_indirect_execution_set_shader_ext)ptr)(_device, _indirect_execution_set, _execution_set_write_count, _p_execution_set_writes);
}

void get_physical_device_features2(ktl::api::physical_device _physical_device, ktl::api::physical_device_features2 * _p_features)
{
ktl::loader::proc_type ptr = &ptable[225];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_features2)ptr)(_physical_device, _p_features);
}

void get_physical_device_properties2(ktl::api::physical_device _physical_device, ktl::api::physical_device_properties2 * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[227];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_properties2)ptr)(_physical_device, _p_properties);
}

void get_physical_device_format_properties2(ktl::api::physical_device _physical_device, ktl::api::format _format, ktl::api::format_properties2 * _p_format_properties)
{
ktl::loader::proc_type ptr = &ptable[229];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_format_properties2)ptr)(_physical_device, _format, _p_format_properties);
}

ktl::api::result get_physical_device_image_format_properties2(ktl::api::physical_device _physical_device, const ktl::api::physical_device_image_format_info2 * _p_image_format_info, ktl::api::image_format_properties2 * _p_image_format_properties)
{
ktl::loader::proc_type ptr = &ptable[231];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_image_format_properties2)ptr)(_physical_device, _p_image_format_info, _p_image_format_properties);
}

void get_physical_device_queue_family_properties2(ktl::api::physical_device _physical_device, ktl::i32 * _p_queue_family_property_count, ktl::api::queue_family_properties2 * _p_queue_family_properties)
{
ktl::loader::proc_type ptr = &ptable[233];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_queue_family_properties2)ptr)(_physical_device, _p_queue_family_property_count, _p_queue_family_properties);
}

void get_physical_device_memory_properties2(ktl::api::physical_device _physical_device, ktl::api::physical_device_memory_properties2 * _p_memory_properties)
{
ktl::loader::proc_type ptr = &ptable[235];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_memory_properties2)ptr)(_physical_device, _p_memory_properties);
}

void get_physical_device_sparse_image_format_properties2(ktl::api::physical_device _physical_device, const ktl::api::physical_device_sparse_image_format_info2 * _p_format_info, ktl::i32 * _p_property_count, ktl::api::sparse_image_format_properties2 * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[237];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_sparse_image_format_properties2)ptr)(_physical_device, _p_format_info, _p_property_count, _p_properties);
}

void cmd_push_descriptor_set(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_bind_point _pipeline_bind_point, ktl::api::pipeline_layout _layout, ktl::i32 _set, ktl::i32 _descriptor_write_count, const ktl::api::write_descriptor_set * _p_descriptor_writes)
{
ktl::loader::proc_type ptr = &ptable[239];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_push_descriptor_set)ptr)(_command_buffer, _pipeline_bind_point, _layout, _set, _descriptor_write_count, _p_descriptor_writes);
}

void trim_command_pool(ktl::api::device _device, ktl::api::command_pool _command_pool, ktl::api::command_pool_trim_flags _flags)
{
ktl::loader::proc_type ptr = &ptable[241];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_trim_command_pool)ptr)(_device, _command_pool, _flags);
}

void get_physical_device_external_buffer_properties(ktl::api::physical_device _physical_device, const ktl::api::physical_device_external_buffer_info * _p_external_buffer_info, ktl::api::external_buffer_properties * _p_external_buffer_properties)
{
ktl::loader::proc_type ptr = &ptable[243];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_external_buffer_properties)ptr)(_physical_device, _p_external_buffer_info, _p_external_buffer_properties);
}

ktl::api::result get_memory_win32handle_khr(ktl::api::device _device, const ktl::api::memory_get_win32handle_info_khr * _p_get_win32handle_info, HANDLE * _p_handle)
{
ktl::loader::proc_type ptr = &ptable[245];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_win32handle_khr)ptr)(_device, _p_get_win32handle_info, _p_handle);
}

ktl::api::result get_memory_win32handle_properties_khr(ktl::api::device _device, ktl::api::external_memory_handle_type_flag_bits _handle_type, HANDLE _handle, ktl::api::memory_win32handle_properties_khr * _p_memory_win32handle_properties)
{
ktl::loader::proc_type ptr = &ptable[246];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_win32handle_properties_khr)ptr)(_device, _handle_type, _handle, _p_memory_win32handle_properties);
}

ktl::api::result get_memory_fd_khr(ktl::api::device _device, const ktl::api::memory_get_fd_info_khr * _p_get_fd_info, int * _p_fd)
{
ktl::loader::proc_type ptr = &ptable[247];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_fd_khr)ptr)(_device, _p_get_fd_info, _p_fd);
}

ktl::api::result get_memory_fd_properties_khr(ktl::api::device _device, ktl::api::external_memory_handle_type_flag_bits _handle_type, int _fd, ktl::api::memory_fd_properties_khr * _p_memory_fd_properties)
{
ktl::loader::proc_type ptr = &ptable[248];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_fd_properties_khr)ptr)(_device, _handle_type, _fd, _p_memory_fd_properties);
}

ktl::api::result get_memory_zircon_handle_fuchsia(ktl::api::device _device, const ktl::api::memory_get_zircon_handle_info_fuchsia * _p_get_zircon_handle_info, zx_handle_t * _p_zircon_handle)
{
ktl::loader::proc_type ptr = &ptable[249];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_zircon_handle_fuchsia)ptr)(_device, _p_get_zircon_handle_info, _p_zircon_handle);
}

ktl::api::result get_memory_zircon_handle_properties_fuchsia(ktl::api::device _device, ktl::api::external_memory_handle_type_flag_bits _handle_type, zx_handle_t _zircon_handle, ktl::api::memory_zircon_handle_properties_fuchsia * _p_memory_zircon_handle_properties)
{
ktl::loader::proc_type ptr = &ptable[250];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_zircon_handle_properties_fuchsia)ptr)(_device, _handle_type, _zircon_handle, _p_memory_zircon_handle_properties);
}

ktl::api::result get_memory_remote_address_nv(ktl::api::device _device, const ktl::api::memory_get_remote_address_info_nv * _p_memory_get_remote_address_info, ktl::api::remote_address_nv * _p_address)
{
ktl::loader::proc_type ptr = &ptable[251];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_remote_address_nv)ptr)(_device, _p_memory_get_remote_address_info, _p_address);
}

ktl::api::result get_memory_sci_buf_nv(ktl::api::device _device, const ktl::api::memory_get_sci_buf_info_nv * _p_get_sci_buf_info, NvSciBufObj * _p_handle)
{
ktl::loader::proc_type ptr = &ptable[252];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_sci_buf_nv)ptr)(_device, _p_get_sci_buf_info, _p_handle);
}

ktl::api::result get_physical_device_external_memory_sci_buf_properties_nv(ktl::api::physical_device _physical_device, ktl::api::external_memory_handle_type_flag_bits _handle_type, NvSciBufObj _handle, ktl::api::memory_sci_buf_properties_nv * _p_memory_sci_buf_properties)
{
ktl::loader::proc_type ptr = &ptable[253];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_external_memory_sci_buf_properties_nv)ptr)(_physical_device, _handle_type, _handle, _p_memory_sci_buf_properties);
}

ktl::api::result get_physical_device_sci_buf_attributes_nv(ktl::api::physical_device _physical_device, NvSciBufAttrList _p_attributes)
{
ktl::loader::proc_type ptr = &ptable[254];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_sci_buf_attributes_nv)ptr)(_physical_device, _p_attributes);
}

void get_physical_device_external_semaphore_properties(ktl::api::physical_device _physical_device, const ktl::api::physical_device_external_semaphore_info * _p_external_semaphore_info, ktl::api::external_semaphore_properties * _p_external_semaphore_properties)
{
ktl::loader::proc_type ptr = &ptable[255];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_external_semaphore_properties)ptr)(_physical_device, _p_external_semaphore_info, _p_external_semaphore_properties);
}

ktl::api::result get_semaphore_win32handle_khr(ktl::api::device _device, const ktl::api::semaphore_get_win32handle_info_khr * _p_get_win32handle_info, HANDLE * _p_handle)
{
ktl::loader::proc_type ptr = &ptable[257];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_semaphore_win32handle_khr)ptr)(_device, _p_get_win32handle_info, _p_handle);
}

ktl::api::result import_semaphore_win32handle_khr(ktl::api::device _device, const ktl::api::import_semaphore_win32handle_info_khr * _p_import_semaphore_win32handle_info)
{
ktl::loader::proc_type ptr = &ptable[258];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_import_semaphore_win32handle_khr)ptr)(_device, _p_import_semaphore_win32handle_info);
}

ktl::api::result get_semaphore_fd_khr(ktl::api::device _device, const ktl::api::semaphore_get_fd_info_khr * _p_get_fd_info, int * _p_fd)
{
ktl::loader::proc_type ptr = &ptable[259];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_semaphore_fd_khr)ptr)(_device, _p_get_fd_info, _p_fd);
}

ktl::api::result import_semaphore_fd_khr(ktl::api::device _device, const ktl::api::import_semaphore_fd_info_khr * _p_import_semaphore_fd_info)
{
ktl::loader::proc_type ptr = &ptable[260];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_import_semaphore_fd_khr)ptr)(_device, _p_import_semaphore_fd_info);
}

ktl::api::result get_semaphore_zircon_handle_fuchsia(ktl::api::device _device, const ktl::api::semaphore_get_zircon_handle_info_fuchsia * _p_get_zircon_handle_info, zx_handle_t * _p_zircon_handle)
{
ktl::loader::proc_type ptr = &ptable[261];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_semaphore_zircon_handle_fuchsia)ptr)(_device, _p_get_zircon_handle_info, _p_zircon_handle);
}

ktl::api::result import_semaphore_zircon_handle_fuchsia(ktl::api::device _device, const ktl::api::import_semaphore_zircon_handle_info_fuchsia * _p_import_semaphore_zircon_handle_info)
{
ktl::loader::proc_type ptr = &ptable[262];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_import_semaphore_zircon_handle_fuchsia)ptr)(_device, _p_import_semaphore_zircon_handle_info);
}

void get_physical_device_external_fence_properties(ktl::api::physical_device _physical_device, const ktl::api::physical_device_external_fence_info * _p_external_fence_info, ktl::api::external_fence_properties * _p_external_fence_properties)
{
ktl::loader::proc_type ptr = &ptable[263];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_external_fence_properties)ptr)(_physical_device, _p_external_fence_info, _p_external_fence_properties);
}

ktl::api::result get_fence_win32handle_khr(ktl::api::device _device, const ktl::api::fence_get_win32handle_info_khr * _p_get_win32handle_info, HANDLE * _p_handle)
{
ktl::loader::proc_type ptr = &ptable[265];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_fence_win32handle_khr)ptr)(_device, _p_get_win32handle_info, _p_handle);
}

ktl::api::result import_fence_win32handle_khr(ktl::api::device _device, const ktl::api::import_fence_win32handle_info_khr * _p_import_fence_win32handle_info)
{
ktl::loader::proc_type ptr = &ptable[266];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_import_fence_win32handle_khr)ptr)(_device, _p_import_fence_win32handle_info);
}

ktl::api::result get_fence_fd_khr(ktl::api::device _device, const ktl::api::fence_get_fd_info_khr * _p_get_fd_info, int * _p_fd)
{
ktl::loader::proc_type ptr = &ptable[267];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_fence_fd_khr)ptr)(_device, _p_get_fd_info, _p_fd);
}

ktl::api::result import_fence_fd_khr(ktl::api::device _device, const ktl::api::import_fence_fd_info_khr * _p_import_fence_fd_info)
{
ktl::loader::proc_type ptr = &ptable[268];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_import_fence_fd_khr)ptr)(_device, _p_import_fence_fd_info);
}

ktl::api::result get_fence_sci_sync_fence_nv(ktl::api::device _device, const ktl::api::fence_get_sci_sync_info_nv * _p_get_sci_sync_handle_info, void * _p_handle)
{
ktl::loader::proc_type ptr = &ptable[269];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_fence_sci_sync_fence_nv)ptr)(_device, _p_get_sci_sync_handle_info, _p_handle);
}

ktl::api::result get_fence_sci_sync_obj_nv(ktl::api::device _device, const ktl::api::fence_get_sci_sync_info_nv * _p_get_sci_sync_handle_info, void * _p_handle)
{
ktl::loader::proc_type ptr = &ptable[270];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_fence_sci_sync_obj_nv)ptr)(_device, _p_get_sci_sync_handle_info, _p_handle);
}

ktl::api::result import_fence_sci_sync_fence_nv(ktl::api::device _device, const ktl::api::import_fence_sci_sync_info_nv * _p_import_fence_sci_sync_info)
{
ktl::loader::proc_type ptr = &ptable[271];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_import_fence_sci_sync_fence_nv)ptr)(_device, _p_import_fence_sci_sync_info);
}

ktl::api::result import_fence_sci_sync_obj_nv(ktl::api::device _device, const ktl::api::import_fence_sci_sync_info_nv * _p_import_fence_sci_sync_info)
{
ktl::loader::proc_type ptr = &ptable[272];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_import_fence_sci_sync_obj_nv)ptr)(_device, _p_import_fence_sci_sync_info);
}

ktl::api::result get_semaphore_sci_sync_obj_nv(ktl::api::device _device, const ktl::api::semaphore_get_sci_sync_info_nv * _p_get_sci_sync_info, void * _p_handle)
{
ktl::loader::proc_type ptr = &ptable[273];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_semaphore_sci_sync_obj_nv)ptr)(_device, _p_get_sci_sync_info, _p_handle);
}

ktl::api::result import_semaphore_sci_sync_obj_nv(ktl::api::device _device, const ktl::api::import_semaphore_sci_sync_info_nv * _p_import_semaphore_sci_sync_info)
{
ktl::loader::proc_type ptr = &ptable[274];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_import_semaphore_sci_sync_obj_nv)ptr)(_device, _p_import_semaphore_sci_sync_info);
}

ktl::api::result get_physical_device_sci_sync_attributes_nv(ktl::api::physical_device _physical_device, const ktl::api::sci_sync_attributes_info_nv * _p_sci_sync_attributes_info, NvSciSyncAttrList _p_attributes)
{
ktl::loader::proc_type ptr = &ptable[275];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_sci_sync_attributes_nv)ptr)(_physical_device, _p_sci_sync_attributes_info, _p_attributes);
}

ktl::api::result create_semaphore_sci_sync_pool_nv(ktl::api::device _device, const ktl::api::semaphore_sci_sync_pool_create_info_nv * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::semaphore_sci_sync_pool_nv * _p_semaphore_pool)
{
ktl::loader::proc_type ptr = &ptable[276];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_semaphore_sci_sync_pool_nv)ptr)(_device, _p_create_info, _p_allocator, _p_semaphore_pool);
}

void destroy_semaphore_sci_sync_pool_nv(ktl::api::device _device, ktl::api::semaphore_sci_sync_pool_nv _semaphore_pool, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[277];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_semaphore_sci_sync_pool_nv)ptr)(_device, _semaphore_pool, _p_allocator);
}

ktl::api::result release_display_ext(ktl::api::physical_device _physical_device, ktl::api::display_khr _display)
{
ktl::loader::proc_type ptr = &ptable[278];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_release_display_ext)ptr)(_physical_device, _display);
}

ktl::api::result acquire_xlib_display_ext(ktl::api::physical_device _physical_device, Display * _dpy, ktl::api::display_khr _display)
{
ktl::loader::proc_type ptr = &ptable[279];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_acquire_xlib_display_ext)ptr)(_physical_device, _dpy, _display);
}

ktl::api::result get_rand_routput_display_ext(ktl::api::physical_device _physical_device, Display * _dpy, RROutput _rr_output, ktl::api::display_khr * _p_display)
{
ktl::loader::proc_type ptr = &ptable[280];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_rand_routput_display_ext)ptr)(_physical_device, _dpy, _rr_output, _p_display);
}

ktl::api::result acquire_winrt_display_nv(ktl::api::physical_device _physical_device, ktl::api::display_khr _display)
{
ktl::loader::proc_type ptr = &ptable[281];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_acquire_winrt_display_nv)ptr)(_physical_device, _display);
}

ktl::api::result get_winrt_display_nv(ktl::api::physical_device _physical_device, ktl::i32 _device_relative_id, ktl::api::display_khr * _p_display)
{
ktl::loader::proc_type ptr = &ptable[282];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_winrt_display_nv)ptr)(_physical_device, _device_relative_id, _p_display);
}

ktl::api::result display_power_control_ext(ktl::api::device _device, ktl::api::display_khr _display, const ktl::api::display_power_info_ext * _p_display_power_info)
{
ktl::loader::proc_type ptr = &ptable[283];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_display_power_control_ext)ptr)(_device, _display, _p_display_power_info);
}

ktl::api::result register_device_event_ext(ktl::api::device _device, const ktl::api::device_event_info_ext * _p_device_event_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::fence * _p_fence)
{
ktl::loader::proc_type ptr = &ptable[284];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_register_device_event_ext)ptr)(_device, _p_device_event_info, _p_allocator, _p_fence);
}

ktl::api::result register_display_event_ext(ktl::api::device _device, ktl::api::display_khr _display, const ktl::api::display_event_info_ext * _p_display_event_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::fence * _p_fence)
{
ktl::loader::proc_type ptr = &ptable[285];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_register_display_event_ext)ptr)(_device, _display, _p_display_event_info, _p_allocator, _p_fence);
}

ktl::api::result get_swapchain_counter_ext(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, ktl::api::surface_counter_flag_bits_ext _counter, ktl::u64 * _p_counter_value)
{
ktl::loader::proc_type ptr = &ptable[286];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_swapchain_counter_ext)ptr)(_device, _swapchain, _counter, _p_counter_value);
}

ktl::api::result get_physical_device_surface_capabilities2ext(ktl::api::physical_device _physical_device, ktl::api::surface_khr _surface, ktl::api::surface_capabilities2ext * _p_surface_capabilities)
{
ktl::loader::proc_type ptr = &ptable[287];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_surface_capabilities2ext)ptr)(_physical_device, _surface, _p_surface_capabilities);
}

ktl::api::result enumerate_physical_device_groups(ktl::api::instance _instance, ktl::i32 * _p_physical_device_group_count, ktl::api::physical_device_group_properties * _p_physical_device_group_properties)
{
ktl::loader::proc_type ptr = &ptable[288];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_enumerate_physical_device_groups)ptr)(_instance, _p_physical_device_group_count, _p_physical_device_group_properties);
}

void get_device_group_peer_memory_features(ktl::api::device _device, ktl::i32 _heap_index, ktl::i32 _local_device_index, ktl::i32 _remote_device_index, ktl::api::peer_memory_feature_flags * _p_peer_memory_features)
{
ktl::loader::proc_type ptr = &ptable[290];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_group_peer_memory_features)ptr)(_device, _heap_index, _local_device_index, _remote_device_index, _p_peer_memory_features);
}

ktl::api::result bind_buffer_memory2(ktl::api::device _device, ktl::i32 _bind_info_count, const ktl::api::bind_buffer_memory_info * _p_bind_infos)
{
ktl::loader::proc_type ptr = &ptable[292];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_bind_buffer_memory2)ptr)(_device, _bind_info_count, _p_bind_infos);
}

ktl::api::result bind_image_memory2(ktl::api::device _device, ktl::i32 _bind_info_count, const ktl::api::bind_image_memory_info * _p_bind_infos)
{
ktl::loader::proc_type ptr = &ptable[294];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_bind_image_memory2)ptr)(_device, _bind_info_count, _p_bind_infos);
}

void cmd_set_device_mask(ktl::api::command_buffer _command_buffer, ktl::i32 _device_mask)
{
ktl::loader::proc_type ptr = &ptable[296];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_device_mask)ptr)(_command_buffer, _device_mask);
}

ktl::api::result get_device_group_present_capabilities_khr(ktl::api::device _device, ktl::api::device_group_present_capabilities_khr * _p_device_group_present_capabilities)
{
ktl::loader::proc_type ptr = &ptable[298];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_group_present_capabilities_khr)ptr)(_device, _p_device_group_present_capabilities);
}

ktl::api::result get_device_group_surface_present_modes_khr(ktl::api::device _device, ktl::api::surface_khr _surface, ktl::api::device_group_present_mode_flags_khr * _p_modes)
{
ktl::loader::proc_type ptr = &ptable[299];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_group_surface_present_modes_khr)ptr)(_device, _surface, _p_modes);
}

ktl::api::result acquire_next_image2khr(ktl::api::device _device, const ktl::api::acquire_next_image_info_khr * _p_acquire_info, ktl::i32 * _p_image_index)
{
ktl::loader::proc_type ptr = &ptable[300];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_acquire_next_image2khr)ptr)(_device, _p_acquire_info, _p_image_index);
}

void cmd_dispatch_base(ktl::api::command_buffer _command_buffer, ktl::i32 _base_group_x, ktl::i32 _base_group_y, ktl::i32 _base_group_z, ktl::i32 _group_count_x, ktl::i32 _group_count_y, ktl::i32 _group_count_z)
{
ktl::loader::proc_type ptr = &ptable[301];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_dispatch_base)ptr)(_command_buffer, _base_group_x, _base_group_y, _base_group_z, _group_count_x, _group_count_y, _group_count_z);
}

ktl::api::result get_physical_device_present_rectangles_khr(ktl::api::physical_device _physical_device, ktl::api::surface_khr _surface, ktl::i32 * _p_rect_count, ktl::api::rect2d * _p_rects)
{
ktl::loader::proc_type ptr = &ptable[303];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_present_rectangles_khr)ptr)(_physical_device, _surface, _p_rect_count, _p_rects);
}

ktl::api::result create_descriptor_update_template(ktl::api::device _device, const ktl::api::descriptor_update_template_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::descriptor_update_template * _p_descriptor_update_template)
{
ktl::loader::proc_type ptr = &ptable[304];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_descriptor_update_template)ptr)(_device, _p_create_info, _p_allocator, _p_descriptor_update_template);
}

void destroy_descriptor_update_template(ktl::api::device _device, ktl::api::descriptor_update_template _descriptor_update_template, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[306];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_descriptor_update_template)ptr)(_device, _descriptor_update_template, _p_allocator);
}

void update_descriptor_set_with_template(ktl::api::device _device, ktl::api::descriptor_set _descriptor_set, ktl::api::descriptor_update_template _descriptor_update_template, const void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[308];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_update_descriptor_set_with_template)ptr)(_device, _descriptor_set, _descriptor_update_template, _p_data);
}

void cmd_push_descriptor_set_with_template(ktl::api::command_buffer _command_buffer, ktl::api::descriptor_update_template _descriptor_update_template, ktl::api::pipeline_layout _layout, ktl::i32 _set, const void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[310];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_push_descriptor_set_with_template)ptr)(_command_buffer, _descriptor_update_template, _layout, _set, _p_data);
}

void set_hdr_metadata_ext(ktl::api::device _device, ktl::i32 _swapchain_count, const ktl::api::swapchain_khr * _p_swapchains, const ktl::api::hdr_metadata_ext * _p_metadata)
{
ktl::loader::proc_type ptr = &ptable[312];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_hdr_metadata_ext)ptr)(_device, _swapchain_count, _p_swapchains, _p_metadata);
}

ktl::api::result get_swapchain_status_khr(ktl::api::device _device, ktl::api::swapchain_khr _swapchain)
{
ktl::loader::proc_type ptr = &ptable[313];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_swapchain_status_khr)ptr)(_device, _swapchain);
}

ktl::api::result get_refresh_cycle_duration_google(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, ktl::api::refresh_cycle_duration_google * _p_display_timing_properties)
{
ktl::loader::proc_type ptr = &ptable[314];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_refresh_cycle_duration_google)ptr)(_device, _swapchain, _p_display_timing_properties);
}

ktl::api::result get_past_presentation_timing_google(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, ktl::i32 * _p_presentation_timing_count, ktl::api::past_presentation_timing_google * _p_presentation_timings)
{
ktl::loader::proc_type ptr = &ptable[315];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_past_presentation_timing_google)ptr)(_device, _swapchain, _p_presentation_timing_count, _p_presentation_timings);
}

ktl::api::result create_iossurface_mvk(ktl::api::instance _instance, const ktl::api::iossurface_create_info_mvk * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[316];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_iossurface_mvk)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::result create_mac_ossurface_mvk(ktl::api::instance _instance, const ktl::api::mac_ossurface_create_info_mvk * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[317];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_mac_ossurface_mvk)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::result create_metal_surface_ext(ktl::api::instance _instance, const ktl::api::metal_surface_create_info_ext * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[318];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_metal_surface_ext)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

void cmd_set_viewport_wscaling_nv(ktl::api::command_buffer _command_buffer, ktl::i32 _first_viewport, ktl::i32 _viewport_count, const ktl::api::viewport_wscaling_nv * _p_viewport_wscalings)
{
ktl::loader::proc_type ptr = &ptable[319];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_viewport_wscaling_nv)ptr)(_command_buffer, _first_viewport, _viewport_count, _p_viewport_wscalings);
}

void cmd_set_discard_rectangle_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _first_discard_rectangle, ktl::i32 _discard_rectangle_count, const ktl::api::rect2d * _p_discard_rectangles)
{
ktl::loader::proc_type ptr = &ptable[320];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_discard_rectangle_ext)ptr)(_command_buffer, _first_discard_rectangle, _discard_rectangle_count, _p_discard_rectangles);
}

void cmd_set_discard_rectangle_enable_ext(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _discard_rectangle_enable)
{
ktl::loader::proc_type ptr = &ptable[321];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_discard_rectangle_enable_ext)ptr)(_command_buffer, _discard_rectangle_enable);
}

void cmd_set_discard_rectangle_mode_ext(ktl::api::command_buffer _command_buffer, ktl::api::discard_rectangle_mode_ext _discard_rectangle_mode)
{
ktl::loader::proc_type ptr = &ptable[322];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_discard_rectangle_mode_ext)ptr)(_command_buffer, _discard_rectangle_mode);
}

void cmd_set_sample_locations_ext(ktl::api::command_buffer _command_buffer, const ktl::api::sample_locations_info_ext * _p_sample_locations_info)
{
ktl::loader::proc_type ptr = &ptable[323];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_sample_locations_ext)ptr)(_command_buffer, _p_sample_locations_info);
}

void get_physical_device_multisample_properties_ext(ktl::api::physical_device _physical_device, ktl::api::sample_count_flag_bits _samples, ktl::api::multisample_properties_ext * _p_multisample_properties)
{
ktl::loader::proc_type ptr = &ptable[324];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_multisample_properties_ext)ptr)(_physical_device, _samples, _p_multisample_properties);
}

ktl::api::result get_physical_device_surface_capabilities2khr(ktl::api::physical_device _physical_device, const ktl::api::physical_device_surface_info2khr * _p_surface_info, ktl::api::surface_capabilities2khr * _p_surface_capabilities)
{
ktl::loader::proc_type ptr = &ptable[325];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_surface_capabilities2khr)ptr)(_physical_device, _p_surface_info, _p_surface_capabilities);
}

ktl::api::result get_physical_device_surface_formats2khr(ktl::api::physical_device _physical_device, const ktl::api::physical_device_surface_info2khr * _p_surface_info, ktl::i32 * _p_surface_format_count, ktl::api::surface_format2khr * _p_surface_formats)
{
ktl::loader::proc_type ptr = &ptable[326];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_surface_formats2khr)ptr)(_physical_device, _p_surface_info, _p_surface_format_count, _p_surface_formats);
}

ktl::api::result get_physical_device_display_properties2khr(ktl::api::physical_device _physical_device, ktl::i32 * _p_property_count, ktl::api::display_properties2khr * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[327];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_display_properties2khr)ptr)(_physical_device, _p_property_count, _p_properties);
}

ktl::api::result get_physical_device_display_plane_properties2khr(ktl::api::physical_device _physical_device, ktl::i32 * _p_property_count, ktl::api::display_plane_properties2khr * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[328];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_display_plane_properties2khr)ptr)(_physical_device, _p_property_count, _p_properties);
}

ktl::api::result get_display_mode_properties2khr(ktl::api::physical_device _physical_device, ktl::api::display_khr _display, ktl::i32 * _p_property_count, ktl::api::display_mode_properties2khr * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[329];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_display_mode_properties2khr)ptr)(_physical_device, _display, _p_property_count, _p_properties);
}

ktl::api::result get_display_plane_capabilities2khr(ktl::api::physical_device _physical_device, const ktl::api::display_plane_info2khr * _p_display_plane_info, ktl::api::display_plane_capabilities2khr * _p_capabilities)
{
ktl::loader::proc_type ptr = &ptable[330];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_display_plane_capabilities2khr)ptr)(_physical_device, _p_display_plane_info, _p_capabilities);
}

void get_buffer_memory_requirements2(ktl::api::device _device, const ktl::api::buffer_memory_requirements_info2 * _p_info, ktl::api::memory_requirements2 * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[331];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_buffer_memory_requirements2)ptr)(_device, _p_info, _p_memory_requirements);
}

void get_image_memory_requirements2(ktl::api::device _device, const ktl::api::image_memory_requirements_info2 * _p_info, ktl::api::memory_requirements2 * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[333];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_memory_requirements2)ptr)(_device, _p_info, _p_memory_requirements);
}

void get_image_sparse_memory_requirements2(ktl::api::device _device, const ktl::api::image_sparse_memory_requirements_info2 * _p_info, ktl::i32 * _p_sparse_memory_requirement_count, ktl::api::sparse_image_memory_requirements2 * _p_sparse_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[335];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_sparse_memory_requirements2)ptr)(_device, _p_info, _p_sparse_memory_requirement_count, _p_sparse_memory_requirements);
}

void get_device_buffer_memory_requirements(ktl::api::device _device, const ktl::api::device_buffer_memory_requirements * _p_info, ktl::api::memory_requirements2 * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[337];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_buffer_memory_requirements)ptr)(_device, _p_info, _p_memory_requirements);
}

void get_device_image_memory_requirements(ktl::api::device _device, const ktl::api::device_image_memory_requirements * _p_info, ktl::api::memory_requirements2 * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[339];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_image_memory_requirements)ptr)(_device, _p_info, _p_memory_requirements);
}

void get_device_image_sparse_memory_requirements(ktl::api::device _device, const ktl::api::device_image_memory_requirements * _p_info, ktl::i32 * _p_sparse_memory_requirement_count, ktl::api::sparse_image_memory_requirements2 * _p_sparse_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[341];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_image_sparse_memory_requirements)ptr)(_device, _p_info, _p_sparse_memory_requirement_count, _p_sparse_memory_requirements);
}

ktl::api::result create_sampler_ycbcr_conversion(ktl::api::device _device, const ktl::api::sampler_ycbcr_conversion_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::sampler_ycbcr_conversion * _p_ycbcr_conversion)
{
ktl::loader::proc_type ptr = &ptable[343];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_sampler_ycbcr_conversion)ptr)(_device, _p_create_info, _p_allocator, _p_ycbcr_conversion);
}

void destroy_sampler_ycbcr_conversion(ktl::api::device _device, ktl::api::sampler_ycbcr_conversion _ycbcr_conversion, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[345];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_sampler_ycbcr_conversion)ptr)(_device, _ycbcr_conversion, _p_allocator);
}

void get_device_queue2(ktl::api::device _device, const ktl::api::device_queue_info2 * _p_queue_info, ktl::api::queue * _p_queue)
{
ktl::loader::proc_type ptr = &ptable[347];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_queue2)ptr)(_device, _p_queue_info, _p_queue);
}

ktl::api::result create_validation_cache_ext(ktl::api::device _device, const ktl::api::validation_cache_create_info_ext * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::validation_cache_ext * _p_validation_cache)
{
ktl::loader::proc_type ptr = &ptable[348];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_validation_cache_ext)ptr)(_device, _p_create_info, _p_allocator, _p_validation_cache);
}

void destroy_validation_cache_ext(ktl::api::device _device, ktl::api::validation_cache_ext _validation_cache, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[349];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_validation_cache_ext)ptr)(_device, _validation_cache, _p_allocator);
}

ktl::api::result get_validation_cache_data_ext(ktl::api::device _device, ktl::api::validation_cache_ext _validation_cache, ktl::usize * _p_data_size, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[350];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_validation_cache_data_ext)ptr)(_device, _validation_cache, _p_data_size, _p_data);
}

ktl::api::result merge_validation_caches_ext(ktl::api::device _device, ktl::api::validation_cache_ext _dst_cache, ktl::i32 _src_cache_count, const ktl::api::validation_cache_ext * _p_src_caches)
{
ktl::loader::proc_type ptr = &ptable[351];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_merge_validation_caches_ext)ptr)(_device, _dst_cache, _src_cache_count, _p_src_caches);
}

void get_descriptor_set_layout_support(ktl::api::device _device, const ktl::api::descriptor_set_layout_create_info * _p_create_info, ktl::api::descriptor_set_layout_support * _p_support)
{
ktl::loader::proc_type ptr = &ptable[352];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_descriptor_set_layout_support)ptr)(_device, _p_create_info, _p_support);
}

ktl::api::result get_swapchain_gralloc_usage_android(ktl::api::device _device, ktl::api::format _format, ktl::api::image_usage_flags _image_usage, int * _gralloc_usage)
{
ktl::loader::proc_type ptr = &ptable[354];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_swapchain_gralloc_usage_android)ptr)(_device, _format, _image_usage, _gralloc_usage);
}

ktl::api::result get_swapchain_gralloc_usage2android(ktl::api::device _device, ktl::api::format _format, ktl::api::image_usage_flags _image_usage, ktl::api::swapchain_image_usage_flags_android _swapchain_image_usage, ktl::u64 * _gralloc_consumer_usage, ktl::u64 * _gralloc_producer_usage)
{
ktl::loader::proc_type ptr = &ptable[355];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_swapchain_gralloc_usage2android)ptr)(_device, _format, _image_usage, _swapchain_image_usage, _gralloc_consumer_usage, _gralloc_producer_usage);
}

ktl::api::result acquire_image_android(ktl::api::device _device, ktl::api::image _image, int _native_fence_fd, ktl::api::semaphore _semaphore, ktl::api::fence _fence)
{
ktl::loader::proc_type ptr = &ptable[356];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_acquire_image_android)ptr)(_device, _image, _native_fence_fd, _semaphore, _fence);
}

ktl::api::result queue_signal_release_image_android(ktl::api::queue _queue, ktl::i32 _wait_semaphore_count, const ktl::api::semaphore * _p_wait_semaphores, ktl::api::image _image, int * _p_native_fence_fd)
{
ktl::loader::proc_type ptr = &ptable[357];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_signal_release_image_android)ptr)(_queue, _wait_semaphore_count, _p_wait_semaphores, _image, _p_native_fence_fd);
}

ktl::api::result get_shader_info_amd(ktl::api::device _device, ktl::api::pipeline _pipeline, ktl::api::shader_stage_flag_bits _shader_stage, ktl::api::shader_info_type_amd _info_type, ktl::usize * _p_info_size, void * _p_info)
{
ktl::loader::proc_type ptr = &ptable[358];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_shader_info_amd)ptr)(_device, _pipeline, _shader_stage, _info_type, _p_info_size, _p_info);
}

void set_local_dimming_amd(ktl::api::device _device, ktl::api::swapchain_khr _swap_chain, ktl::api::bool32 _local_dimming_enable)
{
ktl::loader::proc_type ptr = &ptable[359];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_local_dimming_amd)ptr)(_device, _swap_chain, _local_dimming_enable);
}

ktl::api::result get_physical_device_calibrateable_time_domains_khr(ktl::api::physical_device _physical_device, ktl::i32 * _p_time_domain_count, ktl::api::time_domain_khr * _p_time_domains)
{
ktl::loader::proc_type ptr = &ptable[360];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_calibrateable_time_domains_khr)ptr)(_physical_device, _p_time_domain_count, _p_time_domains);
}

ktl::api::result get_calibrated_timestamps_khr(ktl::api::device _device, ktl::i32 _timestamp_count, const ktl::api::calibrated_timestamp_info_khr * _p_timestamp_infos, ktl::u64 * _p_timestamps, ktl::u64 * _p_max_deviation)
{
ktl::loader::proc_type ptr = &ptable[362];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_calibrated_timestamps_khr)ptr)(_device, _timestamp_count, _p_timestamp_infos, _p_timestamps, _p_max_deviation);
}

ktl::api::result set_debug_utils_object_name_ext(ktl::api::device _device, const ktl::api::debug_utils_object_name_info_ext * _p_name_info)
{
ktl::loader::proc_type ptr = &ptable[364];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_debug_utils_object_name_ext)ptr)(_device, _p_name_info);
}

ktl::api::result set_debug_utils_object_tag_ext(ktl::api::device _device, const ktl::api::debug_utils_object_tag_info_ext * _p_tag_info)
{
ktl::loader::proc_type ptr = &ptable[365];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_debug_utils_object_tag_ext)ptr)(_device, _p_tag_info);
}

void queue_begin_debug_utils_label_ext(ktl::api::queue _queue, const ktl::api::debug_utils_label_ext * _p_label_info)
{
ktl::loader::proc_type ptr = &ptable[366];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_begin_debug_utils_label_ext)ptr)(_queue, _p_label_info);
}

void queue_end_debug_utils_label_ext(ktl::api::queue _queue)
{
ktl::loader::proc_type ptr = &ptable[367];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_end_debug_utils_label_ext)ptr)(_queue);
}

void queue_insert_debug_utils_label_ext(ktl::api::queue _queue, const ktl::api::debug_utils_label_ext * _p_label_info)
{
ktl::loader::proc_type ptr = &ptable[368];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_insert_debug_utils_label_ext)ptr)(_queue, _p_label_info);
}

void cmd_begin_debug_utils_label_ext(ktl::api::command_buffer _command_buffer, const ktl::api::debug_utils_label_ext * _p_label_info)
{
ktl::loader::proc_type ptr = &ptable[369];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_debug_utils_label_ext)ptr)(_command_buffer, _p_label_info);
}

void cmd_end_debug_utils_label_ext(ktl::api::command_buffer _command_buffer)
{
ktl::loader::proc_type ptr = &ptable[370];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_debug_utils_label_ext)ptr)(_command_buffer);
}

void cmd_insert_debug_utils_label_ext(ktl::api::command_buffer _command_buffer, const ktl::api::debug_utils_label_ext * _p_label_info)
{
ktl::loader::proc_type ptr = &ptable[371];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_insert_debug_utils_label_ext)ptr)(_command_buffer, _p_label_info);
}

ktl::api::result create_debug_utils_messenger_ext(ktl::api::instance _instance, const ktl::api::debug_utils_messenger_create_info_ext * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::debug_utils_messenger_ext * _p_messenger)
{
ktl::loader::proc_type ptr = &ptable[372];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_debug_utils_messenger_ext)ptr)(_instance, _p_create_info, _p_allocator, _p_messenger);
}

void destroy_debug_utils_messenger_ext(ktl::api::instance _instance, ktl::api::debug_utils_messenger_ext _messenger, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[373];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_debug_utils_messenger_ext)ptr)(_instance, _messenger, _p_allocator);
}

void submit_debug_utils_message_ext(ktl::api::instance _instance, ktl::api::debug_utils_message_severity_flag_bits_ext _message_severity, ktl::api::debug_utils_message_type_flags_ext _message_types, const ktl::api::debug_utils_messenger_callback_data_ext * _p_callback_data)
{
ktl::loader::proc_type ptr = &ptable[374];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_submit_debug_utils_message_ext)ptr)(_instance, _message_severity, _message_types, _p_callback_data);
}

ktl::api::result get_memory_host_pointer_properties_ext(ktl::api::device _device, ktl::api::external_memory_handle_type_flag_bits _handle_type, const void * _p_host_pointer, ktl::api::memory_host_pointer_properties_ext * _p_memory_host_pointer_properties)
{
ktl::loader::proc_type ptr = &ptable[375];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_host_pointer_properties_ext)ptr)(_device, _handle_type, _p_host_pointer, _p_memory_host_pointer_properties);
}

void cmd_write_buffer_marker_amd(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_stage_flag_bits _pipeline_stage, ktl::api::buffer _dst_buffer, ktl::api::dvsize _dst_offset, ktl::i32 _marker)
{
ktl::loader::proc_type ptr = &ptable[376];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_write_buffer_marker_amd)ptr)(_command_buffer, _pipeline_stage, _dst_buffer, _dst_offset, _marker);
}

ktl::api::result create_render_pass2(ktl::api::device _device, const ktl::api::render_pass_create_info2 * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::render_pass * _p_render_pass)
{
ktl::loader::proc_type ptr = &ptable[377];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_render_pass2)ptr)(_device, _p_create_info, _p_allocator, _p_render_pass);
}

void cmd_begin_render_pass2(ktl::api::command_buffer _command_buffer, const ktl::api::render_pass_begin_info * _p_render_pass_begin, const ktl::api::subpass_begin_info * _p_subpass_begin_info)
{
ktl::loader::proc_type ptr = &ptable[379];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_render_pass2)ptr)(_command_buffer, _p_render_pass_begin, _p_subpass_begin_info);
}

void cmd_next_subpass2(ktl::api::command_buffer _command_buffer, const ktl::api::subpass_begin_info * _p_subpass_begin_info, const ktl::api::subpass_end_info * _p_subpass_end_info)
{
ktl::loader::proc_type ptr = &ptable[381];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_next_subpass2)ptr)(_command_buffer, _p_subpass_begin_info, _p_subpass_end_info);
}

void cmd_end_render_pass2(ktl::api::command_buffer _command_buffer, const ktl::api::subpass_end_info * _p_subpass_end_info)
{
ktl::loader::proc_type ptr = &ptable[383];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_render_pass2)ptr)(_command_buffer, _p_subpass_end_info);
}

ktl::api::result get_semaphore_counter_value(ktl::api::device _device, ktl::api::semaphore _semaphore, ktl::u64 * _p_value)
{
ktl::loader::proc_type ptr = &ptable[385];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_semaphore_counter_value)ptr)(_device, _semaphore, _p_value);
}

ktl::api::result wait_semaphores(ktl::api::device _device, const ktl::api::semaphore_wait_info * _p_wait_info, ktl::u64 _timeout)
{
ktl::loader::proc_type ptr = &ptable[387];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_wait_semaphores)ptr)(_device, _p_wait_info, _timeout);
}

ktl::api::result signal_semaphore(ktl::api::device _device, const ktl::api::semaphore_signal_info * _p_signal_info)
{
ktl::loader::proc_type ptr = &ptable[389];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_signal_semaphore)ptr)(_device, _p_signal_info);
}

ktl::api::result get_android_hardware_buffer_properties_android(ktl::api::device _device, const AHardwareBuffer * _buffer, ktl::api::android_hardware_buffer_properties_android * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[391];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_android_hardware_buffer_properties_android)ptr)(_device, _buffer, _p_properties);
}

ktl::api::result get_memory_android_hardware_buffer_android(ktl::api::device _device, const ktl::api::memory_get_android_hardware_buffer_info_android * _p_info, AHardwareBuffer * _p_buffer)
{
ktl::loader::proc_type ptr = &ptable[392];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_android_hardware_buffer_android)ptr)(_device, _p_info, _p_buffer);
}

void cmd_draw_indirect_count(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset, ktl::api::buffer _count_buffer, ktl::api::dvsize _count_buffer_offset, ktl::i32 _max_draw_count, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[393];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_indirect_count)ptr)(_command_buffer, _buffer, _offset, _count_buffer, _count_buffer_offset, _max_draw_count, _stride);
}

void cmd_draw_indexed_indirect_count(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset, ktl::api::buffer _count_buffer, ktl::api::dvsize _count_buffer_offset, ktl::i32 _max_draw_count, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[396];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_indexed_indirect_count)ptr)(_command_buffer, _buffer, _offset, _count_buffer, _count_buffer_offset, _max_draw_count, _stride);
}

void cmd_set_checkpoint_nv(ktl::api::command_buffer _command_buffer, const void * _p_checkpoint_marker)
{
ktl::loader::proc_type ptr = &ptable[399];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_checkpoint_nv)ptr)(_command_buffer, _p_checkpoint_marker);
}

void get_queue_checkpoint_data_nv(ktl::api::queue _queue, ktl::i32 * _p_checkpoint_data_count, ktl::api::checkpoint_data_nv * _p_checkpoint_data)
{
ktl::loader::proc_type ptr = &ptable[400];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_queue_checkpoint_data_nv)ptr)(_queue, _p_checkpoint_data_count, _p_checkpoint_data);
}

void cmd_bind_transform_feedback_buffers_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _first_binding, ktl::i32 _binding_count, const ktl::api::buffer * _p_buffers, const ktl::api::dvsize * _p_offsets, const ktl::api::dvsize * _p_sizes)
{
ktl::loader::proc_type ptr = &ptable[401];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_transform_feedback_buffers_ext)ptr)(_command_buffer, _first_binding, _binding_count, _p_buffers, _p_offsets, _p_sizes);
}

void cmd_begin_transform_feedback_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _first_counter_buffer, ktl::i32 _counter_buffer_count, const ktl::api::buffer * _p_counter_buffers, const ktl::api::dvsize * _p_counter_buffer_offsets)
{
ktl::loader::proc_type ptr = &ptable[402];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_transform_feedback_ext)ptr)(_command_buffer, _first_counter_buffer, _counter_buffer_count, _p_counter_buffers, _p_counter_buffer_offsets);
}

void cmd_end_transform_feedback_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _first_counter_buffer, ktl::i32 _counter_buffer_count, const ktl::api::buffer * _p_counter_buffers, const ktl::api::dvsize * _p_counter_buffer_offsets)
{
ktl::loader::proc_type ptr = &ptable[403];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_transform_feedback_ext)ptr)(_command_buffer, _first_counter_buffer, _counter_buffer_count, _p_counter_buffers, _p_counter_buffer_offsets);
}

void cmd_begin_query_indexed_ext(ktl::api::command_buffer _command_buffer, ktl::api::query_pool _query_pool, ktl::i32 _query, ktl::api::query_control_flags _flags, ktl::i32 _index)
{
ktl::loader::proc_type ptr = &ptable[404];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_query_indexed_ext)ptr)(_command_buffer, _query_pool, _query, _flags, _index);
}

void cmd_end_query_indexed_ext(ktl::api::command_buffer _command_buffer, ktl::api::query_pool _query_pool, ktl::i32 _query, ktl::i32 _index)
{
ktl::loader::proc_type ptr = &ptable[405];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_query_indexed_ext)ptr)(_command_buffer, _query_pool, _query, _index);
}

void cmd_draw_indirect_byte_count_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _instance_count, ktl::i32 _first_instance, ktl::api::buffer _counter_buffer, ktl::api::dvsize _counter_buffer_offset, ktl::i32 _counter_offset, ktl::i32 _vertex_stride)
{
ktl::loader::proc_type ptr = &ptable[406];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_indirect_byte_count_ext)ptr)(_command_buffer, _instance_count, _first_instance, _counter_buffer, _counter_buffer_offset, _counter_offset, _vertex_stride);
}

void cmd_set_exclusive_scissor_nv(ktl::api::command_buffer _command_buffer, ktl::i32 _first_exclusive_scissor, ktl::i32 _exclusive_scissor_count, const ktl::api::rect2d * _p_exclusive_scissors)
{
ktl::loader::proc_type ptr = &ptable[407];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_exclusive_scissor_nv)ptr)(_command_buffer, _first_exclusive_scissor, _exclusive_scissor_count, _p_exclusive_scissors);
}

void cmd_set_exclusive_scissor_enable_nv(ktl::api::command_buffer _command_buffer, ktl::i32 _first_exclusive_scissor, ktl::i32 _exclusive_scissor_count, const ktl::api::bool32 * _p_exclusive_scissor_enables)
{
ktl::loader::proc_type ptr = &ptable[408];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_exclusive_scissor_enable_nv)ptr)(_command_buffer, _first_exclusive_scissor, _exclusive_scissor_count, _p_exclusive_scissor_enables);
}

void cmd_bind_shading_rate_image_nv(ktl::api::command_buffer _command_buffer, ktl::api::image_view _image_view, ktl::api::image_layout _image_layout)
{
ktl::loader::proc_type ptr = &ptable[409];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_shading_rate_image_nv)ptr)(_command_buffer, _image_view, _image_layout);
}

void cmd_set_viewport_shading_rate_palette_nv(ktl::api::command_buffer _command_buffer, ktl::i32 _first_viewport, ktl::i32 _viewport_count, const ktl::api::shading_rate_palette_nv * _p_shading_rate_palettes)
{
ktl::loader::proc_type ptr = &ptable[410];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_viewport_shading_rate_palette_nv)ptr)(_command_buffer, _first_viewport, _viewport_count, _p_shading_rate_palettes);
}

void cmd_set_coarse_sample_order_nv(ktl::api::command_buffer _command_buffer, ktl::api::coarse_sample_order_type_nv _sample_order_type, ktl::i32 _custom_sample_order_count, const ktl::api::coarse_sample_order_custom_nv * _p_custom_sample_orders)
{
ktl::loader::proc_type ptr = &ptable[411];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_coarse_sample_order_nv)ptr)(_command_buffer, _sample_order_type, _custom_sample_order_count, _p_custom_sample_orders);
}

void cmd_draw_mesh_tasks_nv(ktl::api::command_buffer _command_buffer, ktl::i32 _task_count, ktl::i32 _first_task)
{
ktl::loader::proc_type ptr = &ptable[412];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_mesh_tasks_nv)ptr)(_command_buffer, _task_count, _first_task);
}

void cmd_draw_mesh_tasks_indirect_nv(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset, ktl::i32 _draw_count, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[413];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_mesh_tasks_indirect_nv)ptr)(_command_buffer, _buffer, _offset, _draw_count, _stride);
}

void cmd_draw_mesh_tasks_indirect_count_nv(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset, ktl::api::buffer _count_buffer, ktl::api::dvsize _count_buffer_offset, ktl::i32 _max_draw_count, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[414];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_mesh_tasks_indirect_count_nv)ptr)(_command_buffer, _buffer, _offset, _count_buffer, _count_buffer_offset, _max_draw_count, _stride);
}

void cmd_draw_mesh_tasks_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _group_count_x, ktl::i32 _group_count_y, ktl::i32 _group_count_z)
{
ktl::loader::proc_type ptr = &ptable[415];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_mesh_tasks_ext)ptr)(_command_buffer, _group_count_x, _group_count_y, _group_count_z);
}

void cmd_draw_mesh_tasks_indirect_ext(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset, ktl::i32 _draw_count, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[416];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_mesh_tasks_indirect_ext)ptr)(_command_buffer, _buffer, _offset, _draw_count, _stride);
}

void cmd_draw_mesh_tasks_indirect_count_ext(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset, ktl::api::buffer _count_buffer, ktl::api::dvsize _count_buffer_offset, ktl::i32 _max_draw_count, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[417];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_mesh_tasks_indirect_count_ext)ptr)(_command_buffer, _buffer, _offset, _count_buffer, _count_buffer_offset, _max_draw_count, _stride);
}

ktl::api::result compile_deferred_nv(ktl::api::device _device, ktl::api::pipeline _pipeline, ktl::i32 _shader)
{
ktl::loader::proc_type ptr = &ptable[418];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_compile_deferred_nv)ptr)(_device, _pipeline, _shader);
}

ktl::api::result create_acceleration_structure_nv(ktl::api::device _device, const ktl::api::acceleration_structure_create_info_nv * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::acceleration_structure_nv * _p_acceleration_structure)
{
ktl::loader::proc_type ptr = &ptable[419];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_acceleration_structure_nv)ptr)(_device, _p_create_info, _p_allocator, _p_acceleration_structure);
}

void cmd_bind_invocation_mask_huawei(ktl::api::command_buffer _command_buffer, ktl::api::image_view _image_view, ktl::api::image_layout _image_layout)
{
ktl::loader::proc_type ptr = &ptable[420];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_invocation_mask_huawei)ptr)(_command_buffer, _image_view, _image_layout);
}

void destroy_acceleration_structure_khr(ktl::api::device _device, ktl::api::acceleration_structure_khr _acceleration_structure, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[421];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_acceleration_structure_khr)ptr)(_device, _acceleration_structure, _p_allocator);
}

void destroy_acceleration_structure_nv(ktl::api::device _device, ktl::api::acceleration_structure_nv _acceleration_structure, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[422];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_acceleration_structure_nv)ptr)(_device, _acceleration_structure, _p_allocator);
}

void get_acceleration_structure_memory_requirements_nv(ktl::api::device _device, const ktl::api::acceleration_structure_memory_requirements_info_nv * _p_info, ktl::api::memory_requirements2 * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[423];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_acceleration_structure_memory_requirements_nv)ptr)(_device, _p_info, _p_memory_requirements);
}

ktl::api::result bind_acceleration_structure_memory_nv(ktl::api::device _device, ktl::i32 _bind_info_count, const ktl::api::bind_acceleration_structure_memory_info_nv * _p_bind_infos)
{
ktl::loader::proc_type ptr = &ptable[424];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_bind_acceleration_structure_memory_nv)ptr)(_device, _bind_info_count, _p_bind_infos);
}

void cmd_copy_acceleration_structure_nv(ktl::api::command_buffer _command_buffer, ktl::api::acceleration_structure_nv _dst, ktl::api::acceleration_structure_nv _src, ktl::api::copy_acceleration_structure_mode_khr _mode)
{
ktl::loader::proc_type ptr = &ptable[425];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_acceleration_structure_nv)ptr)(_command_buffer, _dst, _src, _mode);
}

void cmd_copy_acceleration_structure_khr(ktl::api::command_buffer _command_buffer, const ktl::api::copy_acceleration_structure_info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[426];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_acceleration_structure_khr)ptr)(_command_buffer, _p_info);
}

ktl::api::result copy_acceleration_structure_khr(ktl::api::device _device, ktl::api::deferred_operation_khr _deferred_operation, const ktl::api::copy_acceleration_structure_info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[427];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_copy_acceleration_structure_khr)ptr)(_device, _deferred_operation, _p_info);
}

void cmd_copy_acceleration_structure_to_memory_khr(ktl::api::command_buffer _command_buffer, const ktl::api::copy_acceleration_structure_to_memory_info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[428];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_acceleration_structure_to_memory_khr)ptr)(_command_buffer, _p_info);
}

ktl::api::result copy_acceleration_structure_to_memory_khr(ktl::api::device _device, ktl::api::deferred_operation_khr _deferred_operation, const ktl::api::copy_acceleration_structure_to_memory_info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[429];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_copy_acceleration_structure_to_memory_khr)ptr)(_device, _deferred_operation, _p_info);
}

void cmd_copy_memory_to_acceleration_structure_khr(ktl::api::command_buffer _command_buffer, const ktl::api::copy_memory_to_acceleration_structure_info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[430];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_memory_to_acceleration_structure_khr)ptr)(_command_buffer, _p_info);
}

ktl::api::result copy_memory_to_acceleration_structure_khr(ktl::api::device _device, ktl::api::deferred_operation_khr _deferred_operation, const ktl::api::copy_memory_to_acceleration_structure_info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[431];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_copy_memory_to_acceleration_structure_khr)ptr)(_device, _deferred_operation, _p_info);
}

void cmd_write_acceleration_structures_properties_khr(ktl::api::command_buffer _command_buffer, ktl::i32 _acceleration_structure_count, const ktl::api::acceleration_structure_khr * _p_acceleration_structures, ktl::api::query_type _query_type, ktl::api::query_pool _query_pool, ktl::i32 _first_query)
{
ktl::loader::proc_type ptr = &ptable[432];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_write_acceleration_structures_properties_khr)ptr)(_command_buffer, _acceleration_structure_count, _p_acceleration_structures, _query_type, _query_pool, _first_query);
}

void cmd_write_acceleration_structures_properties_nv(ktl::api::command_buffer _command_buffer, ktl::i32 _acceleration_structure_count, const ktl::api::acceleration_structure_nv * _p_acceleration_structures, ktl::api::query_type _query_type, ktl::api::query_pool _query_pool, ktl::i32 _first_query)
{
ktl::loader::proc_type ptr = &ptable[433];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_write_acceleration_structures_properties_nv)ptr)(_command_buffer, _acceleration_structure_count, _p_acceleration_structures, _query_type, _query_pool, _first_query);
}

void cmd_build_acceleration_structure_nv(ktl::api::command_buffer _command_buffer, const ktl::api::acceleration_structure_info_nv * _p_info, ktl::api::buffer _instance_data, ktl::api::dvsize _instance_offset, ktl::api::bool32 _update, ktl::api::acceleration_structure_nv _dst, ktl::api::acceleration_structure_nv _src, ktl::api::buffer _scratch, ktl::api::dvsize _scratch_offset)
{
ktl::loader::proc_type ptr = &ptable[434];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_build_acceleration_structure_nv)ptr)(_command_buffer, _p_info, _instance_data, _instance_offset, _update, _dst, _src, _scratch, _scratch_offset);
}

ktl::api::result write_acceleration_structures_properties_khr(ktl::api::device _device, ktl::i32 _acceleration_structure_count, const ktl::api::acceleration_structure_khr * _p_acceleration_structures, ktl::api::query_type _query_type, ktl::usize _data_size, void * _p_data, ktl::usize _stride)
{
ktl::loader::proc_type ptr = &ptable[435];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_write_acceleration_structures_properties_khr)ptr)(_device, _acceleration_structure_count, _p_acceleration_structures, _query_type, _data_size, _p_data, _stride);
}

void cmd_trace_rays_khr(ktl::api::command_buffer _command_buffer, const ktl::api::strided_device_address_region_khr * _p_raygen_shader_binding_table, const ktl::api::strided_device_address_region_khr * _p_miss_shader_binding_table, const ktl::api::strided_device_address_region_khr * _p_hit_shader_binding_table, const ktl::api::strided_device_address_region_khr * _p_callable_shader_binding_table, ktl::i32 _width, ktl::i32 _height, ktl::i32 _depth)
{
ktl::loader::proc_type ptr = &ptable[436];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_trace_rays_khr)ptr)(_command_buffer, _p_raygen_shader_binding_table, _p_miss_shader_binding_table, _p_hit_shader_binding_table, _p_callable_shader_binding_table, _width, _height, _depth);
}

void cmd_trace_rays_nv(ktl::api::command_buffer _command_buffer, ktl::api::buffer _raygen_shader_binding_table_buffer, ktl::api::dvsize _raygen_shader_binding_offset, ktl::api::buffer _miss_shader_binding_table_buffer, ktl::api::dvsize _miss_shader_binding_offset, ktl::api::dvsize _miss_shader_binding_stride, ktl::api::buffer _hit_shader_binding_table_buffer, ktl::api::dvsize _hit_shader_binding_offset, ktl::api::dvsize _hit_shader_binding_stride, ktl::api::buffer _callable_shader_binding_table_buffer, ktl::api::dvsize _callable_shader_binding_offset, ktl::api::dvsize _callable_shader_binding_stride, ktl::i32 _width, ktl::i32 _height, ktl::i32 _depth)
{
ktl::loader::proc_type ptr = &ptable[437];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_trace_rays_nv)ptr)(_command_buffer, _raygen_shader_binding_table_buffer, _raygen_shader_binding_offset, _miss_shader_binding_table_buffer, _miss_shader_binding_offset, _miss_shader_binding_stride, _hit_shader_binding_table_buffer, _hit_shader_binding_offset, _hit_shader_binding_stride, _callable_shader_binding_table_buffer, _callable_shader_binding_offset, _callable_shader_binding_stride, _width, _height, _depth);
}

ktl::api::result get_ray_tracing_shader_group_handles_khr(ktl::api::device _device, ktl::api::pipeline _pipeline, ktl::i32 _first_group, ktl::i32 _group_count, ktl::usize _data_size, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[438];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_ray_tracing_shader_group_handles_khr)ptr)(_device, _pipeline, _first_group, _group_count, _data_size, _p_data);
}

ktl::api::result get_ray_tracing_capture_replay_shader_group_handles_khr(ktl::api::device _device, ktl::api::pipeline _pipeline, ktl::i32 _first_group, ktl::i32 _group_count, ktl::usize _data_size, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[440];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_ray_tracing_capture_replay_shader_group_handles_khr)ptr)(_device, _pipeline, _first_group, _group_count, _data_size, _p_data);
}

ktl::api::result get_acceleration_structure_handle_nv(ktl::api::device _device, ktl::api::acceleration_structure_nv _acceleration_structure, ktl::usize _data_size, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[441];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_acceleration_structure_handle_nv)ptr)(_device, _acceleration_structure, _data_size, _p_data);
}

ktl::api::result create_ray_tracing_pipelines_nv(ktl::api::device _device, ktl::api::pipeline_cache _pipeline_cache, ktl::i32 _create_info_count, const ktl::api::ray_tracing_pipeline_create_info_nv * _p_create_infos, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::pipeline * _p_pipelines)
{
ktl::loader::proc_type ptr = &ptable[442];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_ray_tracing_pipelines_nv)ptr)(_device, _pipeline_cache, _create_info_count, _p_create_infos, _p_allocator, _p_pipelines);
}

ktl::api::result create_ray_tracing_pipelines_khr(ktl::api::device _device, ktl::api::deferred_operation_khr _deferred_operation, ktl::api::pipeline_cache _pipeline_cache, ktl::i32 _create_info_count, const ktl::api::ray_tracing_pipeline_create_info_khr * _p_create_infos, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::pipeline * _p_pipelines)
{
ktl::loader::proc_type ptr = &ptable[443];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_ray_tracing_pipelines_khr)ptr)(_device, _deferred_operation, _pipeline_cache, _create_info_count, _p_create_infos, _p_allocator, _p_pipelines);
}

ktl::api::result get_physical_device_cooperative_matrix_properties_nv(ktl::api::physical_device _physical_device, ktl::i32 * _p_property_count, ktl::api::cooperative_matrix_properties_nv * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[444];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_cooperative_matrix_properties_nv)ptr)(_physical_device, _p_property_count, _p_properties);
}

void cmd_trace_rays_indirect_khr(ktl::api::command_buffer _command_buffer, const ktl::api::strided_device_address_region_khr * _p_raygen_shader_binding_table, const ktl::api::strided_device_address_region_khr * _p_miss_shader_binding_table, const ktl::api::strided_device_address_region_khr * _p_hit_shader_binding_table, const ktl::api::strided_device_address_region_khr * _p_callable_shader_binding_table, ktl::api::dvaddr _indirect_device_address)
{
ktl::loader::proc_type ptr = &ptable[445];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_trace_rays_indirect_khr)ptr)(_command_buffer, _p_raygen_shader_binding_table, _p_miss_shader_binding_table, _p_hit_shader_binding_table, _p_callable_shader_binding_table, _indirect_device_address);
}

void cmd_trace_rays_indirect2khr(ktl::api::command_buffer _command_buffer, ktl::api::dvaddr _indirect_device_address)
{
ktl::loader::proc_type ptr = &ptable[446];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_trace_rays_indirect2khr)ptr)(_command_buffer, _indirect_device_address);
}

void get_cluster_acceleration_structure_build_sizes_nv(ktl::api::device _device, const ktl::api::cluster_acceleration_structure_input_info_nv * _p_info, ktl::api::acceleration_structure_build_sizes_info_khr * _p_size_info)
{
ktl::loader::proc_type ptr = &ptable[447];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_cluster_acceleration_structure_build_sizes_nv)ptr)(_device, _p_info, _p_size_info);
}

void cmd_build_cluster_acceleration_structure_indirect_nv(ktl::api::command_buffer _command_buffer, const ktl::api::cluster_acceleration_structure_commands_info_nv * _p_command_infos)
{
ktl::loader::proc_type ptr = &ptable[448];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_build_cluster_acceleration_structure_indirect_nv)ptr)(_command_buffer, _p_command_infos);
}

void get_device_acceleration_structure_compatibility_khr(ktl::api::device _device, const ktl::api::acceleration_structure_version_info_khr * _p_version_info, ktl::api::acceleration_structure_compatibility_khr * _p_compatibility)
{
ktl::loader::proc_type ptr = &ptable[449];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_acceleration_structure_compatibility_khr)ptr)(_device, _p_version_info, _p_compatibility);
}

ktl::api::dvsize get_ray_tracing_shader_group_stack_size_khr(ktl::api::device _device, ktl::api::pipeline _pipeline, ktl::i32 _group, ktl::api::shader_group_shader_khr _group_shader)
{
ktl::loader::proc_type ptr = &ptable[450];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_ray_tracing_shader_group_stack_size_khr)ptr)(_device, _pipeline, _group, _group_shader);
}

void cmd_set_ray_tracing_pipeline_stack_size_khr(ktl::api::command_buffer _command_buffer, ktl::i32 _pipeline_stack_size)
{
ktl::loader::proc_type ptr = &ptable[451];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_ray_tracing_pipeline_stack_size_khr)ptr)(_command_buffer, _pipeline_stack_size);
}

ktl::i32 get_image_view_handle_nvx(ktl::api::device _device, const ktl::api::image_view_handle_info_nvx * _p_info)
{
ktl::loader::proc_type ptr = &ptable[452];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_view_handle_nvx)ptr)(_device, _p_info);
}

ktl::u64 get_image_view_handle64nvx(ktl::api::device _device, const ktl::api::image_view_handle_info_nvx * _p_info)
{
ktl::loader::proc_type ptr = &ptable[453];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_view_handle64nvx)ptr)(_device, _p_info);
}

ktl::api::result get_image_view_address_nvx(ktl::api::device _device, ktl::api::image_view _image_view, ktl::api::image_view_address_properties_nvx * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[454];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_view_address_nvx)ptr)(_device, _image_view, _p_properties);
}

ktl::u64 get_device_combined_image_sampler_index_nvx(ktl::api::device _device, ktl::u64 _image_view_index, ktl::u64 _sampler_index)
{
ktl::loader::proc_type ptr = &ptable[455];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_combined_image_sampler_index_nvx)ptr)(_device, _image_view_index, _sampler_index);
}

ktl::api::result get_physical_device_surface_present_modes2ext(ktl::api::physical_device _physical_device, const ktl::api::physical_device_surface_info2khr * _p_surface_info, ktl::i32 * _p_present_mode_count, ktl::api::present_mode_khr * _p_present_modes)
{
ktl::loader::proc_type ptr = &ptable[456];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_surface_present_modes2ext)ptr)(_physical_device, _p_surface_info, _p_present_mode_count, _p_present_modes);
}

ktl::api::result get_device_group_surface_present_modes2ext(ktl::api::device _device, const ktl::api::physical_device_surface_info2khr * _p_surface_info, ktl::api::device_group_present_mode_flags_khr * _p_modes)
{
ktl::loader::proc_type ptr = &ptable[457];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_group_surface_present_modes2ext)ptr)(_device, _p_surface_info, _p_modes);
}

ktl::api::result acquire_full_screen_exclusive_mode_ext(ktl::api::device _device, ktl::api::swapchain_khr _swapchain)
{
ktl::loader::proc_type ptr = &ptable[458];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_acquire_full_screen_exclusive_mode_ext)ptr)(_device, _swapchain);
}

ktl::api::result release_full_screen_exclusive_mode_ext(ktl::api::device _device, ktl::api::swapchain_khr _swapchain)
{
ktl::loader::proc_type ptr = &ptable[459];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_release_full_screen_exclusive_mode_ext)ptr)(_device, _swapchain);
}

ktl::api::result enumerate_physical_device_queue_family_performance_query_counters_khr(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, ktl::i32 * _p_counter_count, ktl::api::performance_counter_khr * _p_counters, ktl::api::performance_counter_description_khr * _p_counter_descriptions)
{
ktl::loader::proc_type ptr = &ptable[460];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_enumerate_physical_device_queue_family_performance_query_counters_khr)ptr)(_physical_device, _queue_family_index, _p_counter_count, _p_counters, _p_counter_descriptions);
}

void get_physical_device_queue_family_performance_query_passes_khr(ktl::api::physical_device _physical_device, const ktl::api::query_pool_performance_create_info_khr * _p_performance_query_create_info, ktl::i32 * _p_num_passes)
{
ktl::loader::proc_type ptr = &ptable[461];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_queue_family_performance_query_passes_khr)ptr)(_physical_device, _p_performance_query_create_info, _p_num_passes);
}

ktl::api::result acquire_profiling_lock_khr(ktl::api::device _device, const ktl::api::acquire_profiling_lock_info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[462];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_acquire_profiling_lock_khr)ptr)(_device, _p_info);
}

void release_profiling_lock_khr(ktl::api::device _device)
{
ktl::loader::proc_type ptr = &ptable[463];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_release_profiling_lock_khr)ptr)(_device);
}

ktl::api::result get_image_drm_format_modifier_properties_ext(ktl::api::device _device, ktl::api::image _image, ktl::api::image_drm_format_modifier_properties_ext * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[464];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_drm_format_modifier_properties_ext)ptr)(_device, _image, _p_properties);
}

ktl::u64 get_buffer_opaque_capture_address(ktl::api::device _device, const ktl::api::buffer_device_address_info * _p_info)
{
ktl::loader::proc_type ptr = &ptable[465];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_buffer_opaque_capture_address)ptr)(_device, _p_info);
}

ktl::api::dvaddr get_buffer_device_address(ktl::api::device _device, const ktl::api::buffer_device_address_info * _p_info)
{
ktl::loader::proc_type ptr = &ptable[467];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_buffer_device_address)ptr)(_device, _p_info);
}

ktl::api::result create_headless_surface_ext(ktl::api::instance _instance, const ktl::api::headless_surface_create_info_ext * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::surface_khr * _p_surface)
{
ktl::loader::proc_type ptr = &ptable[470];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_headless_surface_ext)ptr)(_instance, _p_create_info, _p_allocator, _p_surface);
}

ktl::api::result get_physical_device_supported_framebuffer_mixed_samples_combinations_nv(ktl::api::physical_device _physical_device, ktl::i32 * _p_combination_count, ktl::api::framebuffer_mixed_samples_combination_nv * _p_combinations)
{
ktl::loader::proc_type ptr = &ptable[471];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_supported_framebuffer_mixed_samples_combinations_nv)ptr)(_physical_device, _p_combination_count, _p_combinations);
}

ktl::api::result initialize_performance_api_intel(ktl::api::device _device, const ktl::api::initialize_performance_api_info_intel * _p_initialize_info)
{
ktl::loader::proc_type ptr = &ptable[472];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_initialize_performance_api_intel)ptr)(_device, _p_initialize_info);
}

void uninitialize_performance_api_intel(ktl::api::device _device)
{
ktl::loader::proc_type ptr = &ptable[473];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_uninitialize_performance_api_intel)ptr)(_device);
}

ktl::api::result cmd_set_performance_marker_intel(ktl::api::command_buffer _command_buffer, const ktl::api::performance_marker_info_intel * _p_marker_info)
{
ktl::loader::proc_type ptr = &ptable[474];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_performance_marker_intel)ptr)(_command_buffer, _p_marker_info);
}

ktl::api::result cmd_set_performance_stream_marker_intel(ktl::api::command_buffer _command_buffer, const ktl::api::performance_stream_marker_info_intel * _p_marker_info)
{
ktl::loader::proc_type ptr = &ptable[475];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_performance_stream_marker_intel)ptr)(_command_buffer, _p_marker_info);
}

ktl::api::result cmd_set_performance_override_intel(ktl::api::command_buffer _command_buffer, const ktl::api::performance_override_info_intel * _p_override_info)
{
ktl::loader::proc_type ptr = &ptable[476];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_performance_override_intel)ptr)(_command_buffer, _p_override_info);
}

ktl::api::result acquire_performance_configuration_intel(ktl::api::device _device, const ktl::api::performance_configuration_acquire_info_intel * _p_acquire_info, ktl::api::performance_configuration_intel * _p_configuration)
{
ktl::loader::proc_type ptr = &ptable[477];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_acquire_performance_configuration_intel)ptr)(_device, _p_acquire_info, _p_configuration);
}

ktl::api::result release_performance_configuration_intel(ktl::api::device _device, ktl::api::performance_configuration_intel _configuration)
{
ktl::loader::proc_type ptr = &ptable[478];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_release_performance_configuration_intel)ptr)(_device, _configuration);
}

ktl::api::result queue_set_performance_configuration_intel(ktl::api::queue _queue, ktl::api::performance_configuration_intel _configuration)
{
ktl::loader::proc_type ptr = &ptable[479];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_set_performance_configuration_intel)ptr)(_queue, _configuration);
}

ktl::api::result get_performance_parameter_intel(ktl::api::device _device, ktl::api::performance_parameter_type_intel _parameter, ktl::api::performance_value_intel * _p_value)
{
ktl::loader::proc_type ptr = &ptable[480];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_performance_parameter_intel)ptr)(_device, _parameter, _p_value);
}

ktl::u64 get_device_memory_opaque_capture_address(ktl::api::device _device, const ktl::api::device_memory_opaque_capture_address_info * _p_info)
{
ktl::loader::proc_type ptr = &ptable[481];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_memory_opaque_capture_address)ptr)(_device, _p_info);
}

ktl::api::result get_pipeline_executable_properties_khr(ktl::api::device _device, const ktl::api::pipeline_info_khr * _p_pipeline_info, ktl::i32 * _p_executable_count, ktl::api::pipeline_executable_properties_khr * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[483];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_pipeline_executable_properties_khr)ptr)(_device, _p_pipeline_info, _p_executable_count, _p_properties);
}

ktl::api::result get_pipeline_executable_statistics_khr(ktl::api::device _device, const ktl::api::pipeline_executable_info_khr * _p_executable_info, ktl::i32 * _p_statistic_count, ktl::api::pipeline_executable_statistic_khr * _p_statistics)
{
ktl::loader::proc_type ptr = &ptable[484];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_pipeline_executable_statistics_khr)ptr)(_device, _p_executable_info, _p_statistic_count, _p_statistics);
}

ktl::api::result get_pipeline_executable_internal_representations_khr(ktl::api::device _device, const ktl::api::pipeline_executable_info_khr * _p_executable_info, ktl::i32 * _p_internal_representation_count, ktl::api::pipeline_executable_internal_representation_khr * _p_internal_representations)
{
ktl::loader::proc_type ptr = &ptable[485];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_pipeline_executable_internal_representations_khr)ptr)(_device, _p_executable_info, _p_internal_representation_count, _p_internal_representations);
}

void cmd_set_line_stipple(ktl::api::command_buffer _command_buffer, ktl::i32 _line_stipple_factor, ktl::u16 _line_stipple_pattern)
{
ktl::loader::proc_type ptr = &ptable[486];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_line_stipple)ptr)(_command_buffer, _line_stipple_factor, _line_stipple_pattern);
}

ktl::api::result get_fault_data(ktl::api::device _device, ktl::api::fault_query_behavior _fault_query_behavior, ktl::api::bool32 * _p_unrecorded_faults, ktl::i32 * _p_fault_count, ktl::api::fault_data * _p_faults)
{
ktl::loader::proc_type ptr = &ptable[489];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_fault_data)ptr)(_device, _fault_query_behavior, _p_unrecorded_faults, _p_fault_count, _p_faults);
}

ktl::api::result get_physical_device_tool_properties(ktl::api::physical_device _physical_device, ktl::i32 * _p_tool_count, ktl::api::physical_device_tool_properties * _p_tool_properties)
{
ktl::loader::proc_type ptr = &ptable[490];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_tool_properties)ptr)(_physical_device, _p_tool_count, _p_tool_properties);
}

ktl::api::result create_acceleration_structure_khr(ktl::api::device _device, const ktl::api::acceleration_structure_create_info_khr * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::acceleration_structure_khr * _p_acceleration_structure)
{
ktl::loader::proc_type ptr = &ptable[492];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_acceleration_structure_khr)ptr)(_device, _p_create_info, _p_allocator, _p_acceleration_structure);
}

void cmd_build_acceleration_structures_khr(ktl::api::command_buffer _command_buffer, ktl::i32 _info_count, const ktl::api::acceleration_structure_build_geometry_info_khr * _p_infos, const ktl::api::acceleration_structure_build_range_info_khr * _pp_build_range_infos)
{
ktl::loader::proc_type ptr = &ptable[493];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_build_acceleration_structures_khr)ptr)(_command_buffer, _info_count, _p_infos, _pp_build_range_infos);
}

void cmd_build_acceleration_structures_indirect_khr(ktl::api::command_buffer _command_buffer, ktl::i32 _info_count, const ktl::api::acceleration_structure_build_geometry_info_khr * _p_infos, const ktl::api::dvaddr * _p_indirect_device_addresses, const ktl::i32 * _p_indirect_strides, const ktl::i32 * _pp_max_primitive_counts)
{
ktl::loader::proc_type ptr = &ptable[494];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_build_acceleration_structures_indirect_khr)ptr)(_command_buffer, _info_count, _p_infos, _p_indirect_device_addresses, _p_indirect_strides, _pp_max_primitive_counts);
}

ktl::api::result build_acceleration_structures_khr(ktl::api::device _device, ktl::api::deferred_operation_khr _deferred_operation, ktl::i32 _info_count, const ktl::api::acceleration_structure_build_geometry_info_khr * _p_infos, const ktl::api::acceleration_structure_build_range_info_khr * _pp_build_range_infos)
{
ktl::loader::proc_type ptr = &ptable[495];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_build_acceleration_structures_khr)ptr)(_device, _deferred_operation, _info_count, _p_infos, _pp_build_range_infos);
}

ktl::api::dvaddr get_acceleration_structure_device_address_khr(ktl::api::device _device, const ktl::api::acceleration_structure_device_address_info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[496];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_acceleration_structure_device_address_khr)ptr)(_device, _p_info);
}

ktl::api::result create_deferred_operation_khr(ktl::api::device _device, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::deferred_operation_khr * _p_deferred_operation)
{
ktl::loader::proc_type ptr = &ptable[497];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_deferred_operation_khr)ptr)(_device, _p_allocator, _p_deferred_operation);
}

void destroy_deferred_operation_khr(ktl::api::device _device, ktl::api::deferred_operation_khr _operation, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[498];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_deferred_operation_khr)ptr)(_device, _operation, _p_allocator);
}

ktl::i32 get_deferred_operation_max_concurrency_khr(ktl::api::device _device, ktl::api::deferred_operation_khr _operation)
{
ktl::loader::proc_type ptr = &ptable[499];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_deferred_operation_max_concurrency_khr)ptr)(_device, _operation);
}

ktl::api::result get_deferred_operation_result_khr(ktl::api::device _device, ktl::api::deferred_operation_khr _operation)
{
ktl::loader::proc_type ptr = &ptable[500];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_deferred_operation_result_khr)ptr)(_device, _operation);
}

ktl::api::result deferred_operation_join_khr(ktl::api::device _device, ktl::api::deferred_operation_khr _operation)
{
ktl::loader::proc_type ptr = &ptable[501];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_deferred_operation_join_khr)ptr)(_device, _operation);
}

void get_pipeline_indirect_memory_requirements_nv(ktl::api::device _device, const ktl::api::compute_pipeline_create_info * _p_create_info, ktl::api::memory_requirements2 * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[502];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_pipeline_indirect_memory_requirements_nv)ptr)(_device, _p_create_info, _p_memory_requirements);
}

ktl::api::dvaddr get_pipeline_indirect_device_address_nv(ktl::api::device _device, const ktl::api::pipeline_indirect_device_address_info_nv * _p_info)
{
ktl::loader::proc_type ptr = &ptable[503];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_pipeline_indirect_device_address_nv)ptr)(_device, _p_info);
}

void anti_lag_update_amd(ktl::api::device _device, const ktl::api::anti_lag_data_amd * _p_data)
{
ktl::loader::proc_type ptr = &ptable[504];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_anti_lag_update_amd)ptr)(_device, _p_data);
}

void cmd_set_cull_mode(ktl::api::command_buffer _command_buffer, ktl::api::cull_mode_flags _cull_mode)
{
ktl::loader::proc_type ptr = &ptable[505];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_cull_mode)ptr)(_command_buffer, _cull_mode);
}

void cmd_set_front_face(ktl::api::command_buffer _command_buffer, ktl::api::front_face _front_face)
{
ktl::loader::proc_type ptr = &ptable[507];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_front_face)ptr)(_command_buffer, _front_face);
}

void cmd_set_primitive_topology(ktl::api::command_buffer _command_buffer, ktl::api::primitive_topology _primitive_topology)
{
ktl::loader::proc_type ptr = &ptable[509];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_primitive_topology)ptr)(_command_buffer, _primitive_topology);
}

void cmd_set_viewport_with_count(ktl::api::command_buffer _command_buffer, ktl::i32 _viewport_count, const ktl::api::viewport * _p_viewports)
{
ktl::loader::proc_type ptr = &ptable[511];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_viewport_with_count)ptr)(_command_buffer, _viewport_count, _p_viewports);
}

void cmd_set_scissor_with_count(ktl::api::command_buffer _command_buffer, ktl::i32 _scissor_count, const ktl::api::rect2d * _p_scissors)
{
ktl::loader::proc_type ptr = &ptable[513];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_scissor_with_count)ptr)(_command_buffer, _scissor_count, _p_scissors);
}

void cmd_bind_index_buffer2(ktl::api::command_buffer _command_buffer, ktl::api::buffer _buffer, ktl::api::dvsize _offset, ktl::api::dvsize _size, ktl::api::index_type _index_type)
{
ktl::loader::proc_type ptr = &ptable[515];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_index_buffer2)ptr)(_command_buffer, _buffer, _offset, _size, _index_type);
}

void cmd_bind_vertex_buffers2(ktl::api::command_buffer _command_buffer, ktl::i32 _first_binding, ktl::i32 _binding_count, const ktl::api::buffer * _p_buffers, const ktl::api::dvsize * _p_offsets, const ktl::api::dvsize * _p_sizes, const ktl::api::dvsize * _p_strides)
{
ktl::loader::proc_type ptr = &ptable[517];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_vertex_buffers2)ptr)(_command_buffer, _first_binding, _binding_count, _p_buffers, _p_offsets, _p_sizes, _p_strides);
}

void cmd_set_depth_test_enable(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _depth_test_enable)
{
ktl::loader::proc_type ptr = &ptable[519];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_test_enable)ptr)(_command_buffer, _depth_test_enable);
}

void cmd_set_depth_write_enable(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _depth_write_enable)
{
ktl::loader::proc_type ptr = &ptable[521];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_write_enable)ptr)(_command_buffer, _depth_write_enable);
}

void cmd_set_depth_compare_op(ktl::api::command_buffer _command_buffer, ktl::api::compare_op _depth_compare_op)
{
ktl::loader::proc_type ptr = &ptable[523];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_compare_op)ptr)(_command_buffer, _depth_compare_op);
}

void cmd_set_depth_bounds_test_enable(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _depth_bounds_test_enable)
{
ktl::loader::proc_type ptr = &ptable[525];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_bounds_test_enable)ptr)(_command_buffer, _depth_bounds_test_enable);
}

void cmd_set_stencil_test_enable(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _stencil_test_enable)
{
ktl::loader::proc_type ptr = &ptable[527];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_stencil_test_enable)ptr)(_command_buffer, _stencil_test_enable);
}

void cmd_set_stencil_op(ktl::api::command_buffer _command_buffer, ktl::api::stencil_face_flags _face_mask, ktl::api::stencil_op _fail_op, ktl::api::stencil_op _pass_op, ktl::api::stencil_op _depth_fail_op, ktl::api::compare_op _compare_op)
{
ktl::loader::proc_type ptr = &ptable[529];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_stencil_op)ptr)(_command_buffer, _face_mask, _fail_op, _pass_op, _depth_fail_op, _compare_op);
}

void cmd_set_patch_control_points_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _patch_control_points)
{
ktl::loader::proc_type ptr = &ptable[531];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_patch_control_points_ext)ptr)(_command_buffer, _patch_control_points);
}

void cmd_set_rasterizer_discard_enable(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _rasterizer_discard_enable)
{
ktl::loader::proc_type ptr = &ptable[532];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_rasterizer_discard_enable)ptr)(_command_buffer, _rasterizer_discard_enable);
}

void cmd_set_depth_bias_enable(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _depth_bias_enable)
{
ktl::loader::proc_type ptr = &ptable[534];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_bias_enable)ptr)(_command_buffer, _depth_bias_enable);
}

void cmd_set_logic_op_ext(ktl::api::command_buffer _command_buffer, ktl::api::logic_op _logic_op)
{
ktl::loader::proc_type ptr = &ptable[536];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_logic_op_ext)ptr)(_command_buffer, _logic_op);
}

void cmd_set_primitive_restart_enable(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _primitive_restart_enable)
{
ktl::loader::proc_type ptr = &ptable[537];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_primitive_restart_enable)ptr)(_command_buffer, _primitive_restart_enable);
}

void cmd_set_tessellation_domain_origin_ext(ktl::api::command_buffer _command_buffer, ktl::api::tessellation_domain_origin _domain_origin)
{
ktl::loader::proc_type ptr = &ptable[539];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_tessellation_domain_origin_ext)ptr)(_command_buffer, _domain_origin);
}

void cmd_set_depth_clamp_enable_ext(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _depth_clamp_enable)
{
ktl::loader::proc_type ptr = &ptable[540];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_clamp_enable_ext)ptr)(_command_buffer, _depth_clamp_enable);
}

void cmd_set_polygon_mode_ext(ktl::api::command_buffer _command_buffer, ktl::api::polygon_mode _polygon_mode)
{
ktl::loader::proc_type ptr = &ptable[541];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_polygon_mode_ext)ptr)(_command_buffer, _polygon_mode);
}

void cmd_set_rasterization_samples_ext(ktl::api::command_buffer _command_buffer, ktl::api::sample_count_flag_bits _rasterization_samples)
{
ktl::loader::proc_type ptr = &ptable[542];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_rasterization_samples_ext)ptr)(_command_buffer, _rasterization_samples);
}

void cmd_set_sample_mask_ext(ktl::api::command_buffer _command_buffer, ktl::api::sample_count_flag_bits _samples, const ktl::api::spmask * _p_sample_mask)
{
ktl::loader::proc_type ptr = &ptable[543];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_sample_mask_ext)ptr)(_command_buffer, _samples, _p_sample_mask);
}

void cmd_set_alpha_to_coverage_enable_ext(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _alpha_to_coverage_enable)
{
ktl::loader::proc_type ptr = &ptable[544];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_alpha_to_coverage_enable_ext)ptr)(_command_buffer, _alpha_to_coverage_enable);
}

void cmd_set_alpha_to_one_enable_ext(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _alpha_to_one_enable)
{
ktl::loader::proc_type ptr = &ptable[545];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_alpha_to_one_enable_ext)ptr)(_command_buffer, _alpha_to_one_enable);
}

void cmd_set_logic_op_enable_ext(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _logic_op_enable)
{
ktl::loader::proc_type ptr = &ptable[546];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_logic_op_enable_ext)ptr)(_command_buffer, _logic_op_enable);
}

void cmd_set_color_blend_enable_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _first_attachment, ktl::i32 _attachment_count, const ktl::api::bool32 * _p_color_blend_enables)
{
ktl::loader::proc_type ptr = &ptable[547];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_color_blend_enable_ext)ptr)(_command_buffer, _first_attachment, _attachment_count, _p_color_blend_enables);
}

void cmd_set_color_blend_equation_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _first_attachment, ktl::i32 _attachment_count, const ktl::api::color_blend_equation_ext * _p_color_blend_equations)
{
ktl::loader::proc_type ptr = &ptable[548];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_color_blend_equation_ext)ptr)(_command_buffer, _first_attachment, _attachment_count, _p_color_blend_equations);
}

void cmd_set_color_write_mask_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _first_attachment, ktl::i32 _attachment_count, const ktl::api::color_component_flags * _p_color_write_masks)
{
ktl::loader::proc_type ptr = &ptable[549];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_color_write_mask_ext)ptr)(_command_buffer, _first_attachment, _attachment_count, _p_color_write_masks);
}

void cmd_set_rasterization_stream_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _rasterization_stream)
{
ktl::loader::proc_type ptr = &ptable[550];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_rasterization_stream_ext)ptr)(_command_buffer, _rasterization_stream);
}

void cmd_set_conservative_rasterization_mode_ext(ktl::api::command_buffer _command_buffer, ktl::api::conservative_rasterization_mode_ext _conservative_rasterization_mode)
{
ktl::loader::proc_type ptr = &ptable[551];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_conservative_rasterization_mode_ext)ptr)(_command_buffer, _conservative_rasterization_mode);
}

void cmd_set_extra_primitive_overestimation_size_ext(ktl::api::command_buffer _command_buffer, float _extra_primitive_overestimation_size)
{
ktl::loader::proc_type ptr = &ptable[552];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_extra_primitive_overestimation_size_ext)ptr)(_command_buffer, _extra_primitive_overestimation_size);
}

void cmd_set_depth_clip_enable_ext(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _depth_clip_enable)
{
ktl::loader::proc_type ptr = &ptable[553];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_clip_enable_ext)ptr)(_command_buffer, _depth_clip_enable);
}

void cmd_set_sample_locations_enable_ext(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _sample_locations_enable)
{
ktl::loader::proc_type ptr = &ptable[554];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_sample_locations_enable_ext)ptr)(_command_buffer, _sample_locations_enable);
}

void cmd_set_color_blend_advanced_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _first_attachment, ktl::i32 _attachment_count, const ktl::api::color_blend_advanced_ext * _p_color_blend_advanced)
{
ktl::loader::proc_type ptr = &ptable[555];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_color_blend_advanced_ext)ptr)(_command_buffer, _first_attachment, _attachment_count, _p_color_blend_advanced);
}

void cmd_set_provoking_vertex_mode_ext(ktl::api::command_buffer _command_buffer, ktl::api::provoking_vertex_mode_ext _provoking_vertex_mode)
{
ktl::loader::proc_type ptr = &ptable[556];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_provoking_vertex_mode_ext)ptr)(_command_buffer, _provoking_vertex_mode);
}

void cmd_set_line_rasterization_mode_ext(ktl::api::command_buffer _command_buffer, ktl::api::line_rasterization_mode_ext _line_rasterization_mode)
{
ktl::loader::proc_type ptr = &ptable[557];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_line_rasterization_mode_ext)ptr)(_command_buffer, _line_rasterization_mode);
}

void cmd_set_line_stipple_enable_ext(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _stippled_line_enable)
{
ktl::loader::proc_type ptr = &ptable[558];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_line_stipple_enable_ext)ptr)(_command_buffer, _stippled_line_enable);
}

void cmd_set_depth_clip_negative_one_to_one_ext(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _negative_one_to_one)
{
ktl::loader::proc_type ptr = &ptable[559];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_clip_negative_one_to_one_ext)ptr)(_command_buffer, _negative_one_to_one);
}

void cmd_set_viewport_wscaling_enable_nv(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _viewport_wscaling_enable)
{
ktl::loader::proc_type ptr = &ptable[560];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_viewport_wscaling_enable_nv)ptr)(_command_buffer, _viewport_wscaling_enable);
}

void cmd_set_viewport_swizzle_nv(ktl::api::command_buffer _command_buffer, ktl::i32 _first_viewport, ktl::i32 _viewport_count, const ktl::api::viewport_swizzle_nv * _p_viewport_swizzles)
{
ktl::loader::proc_type ptr = &ptable[561];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_viewport_swizzle_nv)ptr)(_command_buffer, _first_viewport, _viewport_count, _p_viewport_swizzles);
}

void cmd_set_coverage_to_color_enable_nv(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _coverage_to_color_enable)
{
ktl::loader::proc_type ptr = &ptable[562];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_coverage_to_color_enable_nv)ptr)(_command_buffer, _coverage_to_color_enable);
}

void cmd_set_coverage_to_color_location_nv(ktl::api::command_buffer _command_buffer, ktl::i32 _coverage_to_color_location)
{
ktl::loader::proc_type ptr = &ptable[563];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_coverage_to_color_location_nv)ptr)(_command_buffer, _coverage_to_color_location);
}

void cmd_set_coverage_modulation_mode_nv(ktl::api::command_buffer _command_buffer, ktl::api::coverage_modulation_mode_nv _coverage_modulation_mode)
{
ktl::loader::proc_type ptr = &ptable[564];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_coverage_modulation_mode_nv)ptr)(_command_buffer, _coverage_modulation_mode);
}

void cmd_set_coverage_modulation_table_enable_nv(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _coverage_modulation_table_enable)
{
ktl::loader::proc_type ptr = &ptable[565];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_coverage_modulation_table_enable_nv)ptr)(_command_buffer, _coverage_modulation_table_enable);
}

void cmd_set_coverage_modulation_table_nv(ktl::api::command_buffer _command_buffer, ktl::i32 _coverage_modulation_table_count, const float * _p_coverage_modulation_table)
{
ktl::loader::proc_type ptr = &ptable[566];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_coverage_modulation_table_nv)ptr)(_command_buffer, _coverage_modulation_table_count, _p_coverage_modulation_table);
}

void cmd_set_shading_rate_image_enable_nv(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _shading_rate_image_enable)
{
ktl::loader::proc_type ptr = &ptable[567];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_shading_rate_image_enable_nv)ptr)(_command_buffer, _shading_rate_image_enable);
}

void cmd_set_coverage_reduction_mode_nv(ktl::api::command_buffer _command_buffer, ktl::api::coverage_reduction_mode_nv _coverage_reduction_mode)
{
ktl::loader::proc_type ptr = &ptable[568];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_coverage_reduction_mode_nv)ptr)(_command_buffer, _coverage_reduction_mode);
}

void cmd_set_representative_fragment_test_enable_nv(ktl::api::command_buffer _command_buffer, ktl::api::bool32 _representative_fragment_test_enable)
{
ktl::loader::proc_type ptr = &ptable[569];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_representative_fragment_test_enable_nv)ptr)(_command_buffer, _representative_fragment_test_enable);
}

ktl::api::result create_private_data_slot(ktl::api::device _device, const ktl::api::private_data_slot_create_info * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::private_data_slot * _p_private_data_slot)
{
ktl::loader::proc_type ptr = &ptable[570];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_private_data_slot)ptr)(_device, _p_create_info, _p_allocator, _p_private_data_slot);
}

void destroy_private_data_slot(ktl::api::device _device, ktl::api::private_data_slot _private_data_slot, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[572];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_private_data_slot)ptr)(_device, _private_data_slot, _p_allocator);
}

ktl::api::result set_private_data(ktl::api::device _device, ktl::api::object_type _object_type, ktl::u64 _object_handle, ktl::api::private_data_slot _private_data_slot, ktl::u64 _data)
{
ktl::loader::proc_type ptr = &ptable[574];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_private_data)ptr)(_device, _object_type, _object_handle, _private_data_slot, _data);
}

void get_private_data(ktl::api::device _device, ktl::api::object_type _object_type, ktl::u64 _object_handle, ktl::api::private_data_slot _private_data_slot, ktl::u64 * _p_data)
{
ktl::loader::proc_type ptr = &ptable[576];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_private_data)ptr)(_device, _object_type, _object_handle, _private_data_slot, _p_data);
}

void cmd_copy_buffer2(ktl::api::command_buffer _command_buffer, const ktl::api::copy_buffer_info2 * _p_copy_buffer_info)
{
ktl::loader::proc_type ptr = &ptable[578];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_buffer2)ptr)(_command_buffer, _p_copy_buffer_info);
}

void cmd_copy_image2(ktl::api::command_buffer _command_buffer, const ktl::api::copy_image_info2 * _p_copy_image_info)
{
ktl::loader::proc_type ptr = &ptable[580];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_image2)ptr)(_command_buffer, _p_copy_image_info);
}

void cmd_blit_image2(ktl::api::command_buffer _command_buffer, const ktl::api::blit_image_info2 * _p_blit_image_info)
{
ktl::loader::proc_type ptr = &ptable[582];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_blit_image2)ptr)(_command_buffer, _p_blit_image_info);
}

void cmd_copy_buffer_to_image2(ktl::api::command_buffer _command_buffer, const ktl::api::copy_buffer_to_image_info2 * _p_copy_buffer_to_image_info)
{
ktl::loader::proc_type ptr = &ptable[584];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_buffer_to_image2)ptr)(_command_buffer, _p_copy_buffer_to_image_info);
}

void cmd_copy_image_to_buffer2(ktl::api::command_buffer _command_buffer, const ktl::api::copy_image_to_buffer_info2 * _p_copy_image_to_buffer_info)
{
ktl::loader::proc_type ptr = &ptable[586];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_image_to_buffer2)ptr)(_command_buffer, _p_copy_image_to_buffer_info);
}

void cmd_resolve_image2(ktl::api::command_buffer _command_buffer, const ktl::api::resolve_image_info2 * _p_resolve_image_info)
{
ktl::loader::proc_type ptr = &ptable[588];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_resolve_image2)ptr)(_command_buffer, _p_resolve_image_info);
}

void cmd_refresh_objects_khr(ktl::api::command_buffer _command_buffer, const ktl::api::refresh_object_list_khr * _p_refresh_objects)
{
ktl::loader::proc_type ptr = &ptable[590];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_refresh_objects_khr)ptr)(_command_buffer, _p_refresh_objects);
}

ktl::api::result get_physical_device_refreshable_object_types_khr(ktl::api::physical_device _physical_device, ktl::i32 * _p_refreshable_object_type_count, ktl::api::object_type * _p_refreshable_object_types)
{
ktl::loader::proc_type ptr = &ptable[591];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_refreshable_object_types_khr)ptr)(_physical_device, _p_refreshable_object_type_count, _p_refreshable_object_types);
}

void cmd_set_fragment_shading_rate_khr(ktl::api::command_buffer _command_buffer, const ktl::api::extent2d * _p_fragment_size, const ktl::api::fragment_shading_rate_combiner_op_khr _combiner_ops[2])
{
ktl::loader::proc_type ptr = &ptable[592];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_fragment_shading_rate_khr)ptr)(_command_buffer, _p_fragment_size, _combiner_ops);
}

ktl::api::result get_physical_device_fragment_shading_rates_khr(ktl::api::physical_device _physical_device, ktl::i32 * _p_fragment_shading_rate_count, ktl::api::physical_device_fragment_shading_rate_khr * _p_fragment_shading_rates)
{
ktl::loader::proc_type ptr = &ptable[593];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_fragment_shading_rates_khr)ptr)(_physical_device, _p_fragment_shading_rate_count, _p_fragment_shading_rates);
}

void cmd_set_fragment_shading_rate_enum_nv(ktl::api::command_buffer _command_buffer, ktl::api::fragment_shading_rate_nv _shading_rate, const ktl::api::fragment_shading_rate_combiner_op_khr _combiner_ops[2])
{
ktl::loader::proc_type ptr = &ptable[594];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_fragment_shading_rate_enum_nv)ptr)(_command_buffer, _shading_rate, _combiner_ops);
}

void get_acceleration_structure_build_sizes_khr(ktl::api::device _device, ktl::api::acceleration_structure_build_type_khr _build_type, const ktl::api::acceleration_structure_build_geometry_info_khr * _p_build_info, const ktl::i32 * _p_max_primitive_counts, ktl::api::acceleration_structure_build_sizes_info_khr * _p_size_info)
{
ktl::loader::proc_type ptr = &ptable[595];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_acceleration_structure_build_sizes_khr)ptr)(_device, _build_type, _p_build_info, _p_max_primitive_counts, _p_size_info);
}

void cmd_set_vertex_input_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _vertex_binding_description_count, const ktl::api::vertex_input_binding_description2ext * _p_vertex_binding_descriptions, ktl::i32 _vertex_attribute_description_count, const ktl::api::vertex_input_attribute_description2ext * _p_vertex_attribute_descriptions)
{
ktl::loader::proc_type ptr = &ptable[596];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_vertex_input_ext)ptr)(_command_buffer, _vertex_binding_description_count, _p_vertex_binding_descriptions, _vertex_attribute_description_count, _p_vertex_attribute_descriptions);
}

void cmd_set_color_write_enable_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _attachment_count, const ktl::api::bool32 * _p_color_write_enables)
{
ktl::loader::proc_type ptr = &ptable[597];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_color_write_enable_ext)ptr)(_command_buffer, _attachment_count, _p_color_write_enables);
}

void cmd_set_event2(ktl::api::command_buffer _command_buffer, ktl::api::event _event, const ktl::api::dependency_info * _p_dependency_info)
{
ktl::loader::proc_type ptr = &ptable[598];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_event2)ptr)(_command_buffer, _event, _p_dependency_info);
}

void cmd_reset_event2(ktl::api::command_buffer _command_buffer, ktl::api::event _event, ktl::api::pipeline_stage_flags2 _stage_mask)
{
ktl::loader::proc_type ptr = &ptable[600];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_reset_event2)ptr)(_command_buffer, _event, _stage_mask);
}

void cmd_wait_events2(ktl::api::command_buffer _command_buffer, ktl::i32 _event_count, const ktl::api::event * _p_events, const ktl::api::dependency_info * _p_dependency_infos)
{
ktl::loader::proc_type ptr = &ptable[602];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_wait_events2)ptr)(_command_buffer, _event_count, _p_events, _p_dependency_infos);
}

void cmd_pipeline_barrier2(ktl::api::command_buffer _command_buffer, const ktl::api::dependency_info * _p_dependency_info)
{
ktl::loader::proc_type ptr = &ptable[604];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_pipeline_barrier2)ptr)(_command_buffer, _p_dependency_info);
}

ktl::api::result queue_submit2(ktl::api::queue _queue, ktl::i32 _submit_count, const ktl::api::submit_info2 * _p_submits, ktl::api::fence _fence)
{
ktl::loader::proc_type ptr = &ptable[606];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_submit2)ptr)(_queue, _submit_count, _p_submits, _fence);
}

void cmd_write_timestamp2(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_stage_flags2 _stage, ktl::api::query_pool _query_pool, ktl::i32 _query)
{
ktl::loader::proc_type ptr = &ptable[608];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_write_timestamp2)ptr)(_command_buffer, _stage, _query_pool, _query);
}

void cmd_write_buffer_marker2amd(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_stage_flags2 _stage, ktl::api::buffer _dst_buffer, ktl::api::dvsize _dst_offset, ktl::i32 _marker)
{
ktl::loader::proc_type ptr = &ptable[610];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_write_buffer_marker2amd)ptr)(_command_buffer, _stage, _dst_buffer, _dst_offset, _marker);
}

void get_queue_checkpoint_data2nv(ktl::api::queue _queue, ktl::i32 * _p_checkpoint_data_count, ktl::api::checkpoint_data2nv * _p_checkpoint_data)
{
ktl::loader::proc_type ptr = &ptable[611];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_queue_checkpoint_data2nv)ptr)(_queue, _p_checkpoint_data_count, _p_checkpoint_data);
}

ktl::api::result copy_memory_to_image(ktl::api::device _device, const ktl::api::copy_memory_to_image_info * _p_copy_memory_to_image_info)
{
ktl::loader::proc_type ptr = &ptable[612];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_copy_memory_to_image)ptr)(_device, _p_copy_memory_to_image_info);
}

ktl::api::result copy_image_to_memory(ktl::api::device _device, const ktl::api::copy_image_to_memory_info * _p_copy_image_to_memory_info)
{
ktl::loader::proc_type ptr = &ptable[614];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_copy_image_to_memory)ptr)(_device, _p_copy_image_to_memory_info);
}

ktl::api::result copy_image_to_image(ktl::api::device _device, const ktl::api::copy_image_to_image_info * _p_copy_image_to_image_info)
{
ktl::loader::proc_type ptr = &ptable[616];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_copy_image_to_image)ptr)(_device, _p_copy_image_to_image_info);
}

ktl::api::result transition_image_layout(ktl::api::device _device, ktl::i32 _transition_count, const ktl::api::host_image_layout_transition_info * _p_transitions)
{
ktl::loader::proc_type ptr = &ptable[618];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_transition_image_layout)ptr)(_device, _transition_count, _p_transitions);
}

void get_command_pool_memory_consumption(ktl::api::device _device, ktl::api::command_pool _command_pool, ktl::api::command_buffer _command_buffer, ktl::api::command_pool_memory_consumption * _p_consumption)
{
ktl::loader::proc_type ptr = &ptable[620];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_command_pool_memory_consumption)ptr)(_device, _command_pool, _command_buffer, _p_consumption);
}

void cmd_decompress_memory_nv(ktl::api::command_buffer _command_buffer, ktl::i32 _decompress_region_count, const ktl::api::decompress_memory_region_nv * _p_decompress_memory_regions)
{
ktl::loader::proc_type ptr = &ptable[621];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_decompress_memory_nv)ptr)(_command_buffer, _decompress_region_count, _p_decompress_memory_regions);
}

void cmd_decompress_memory_indirect_count_nv(ktl::api::command_buffer _command_buffer, ktl::api::dvaddr _indirect_commands_address, ktl::api::dvaddr _indirect_commands_count_address, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[622];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_decompress_memory_indirect_count_nv)ptr)(_command_buffer, _indirect_commands_address, _indirect_commands_count_address, _stride);
}

void get_partitioned_acceleration_structures_build_sizes_nv(ktl::api::device _device, const ktl::api::partitioned_acceleration_structure_instances_input_nv * _p_info, ktl::api::acceleration_structure_build_sizes_info_khr * _p_size_info)
{
ktl::loader::proc_type ptr = &ptable[623];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_partitioned_acceleration_structures_build_sizes_nv)ptr)(_device, _p_info, _p_size_info);
}

void cmd_build_partitioned_acceleration_structures_nv(ktl::api::command_buffer _command_buffer, const ktl::api::build_partitioned_acceleration_structure_info_nv * _p_build_info)
{
ktl::loader::proc_type ptr = &ptable[624];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_build_partitioned_acceleration_structures_nv)ptr)(_command_buffer, _p_build_info);
}

void cmd_decompress_memory_ext(ktl::api::command_buffer _command_buffer, const ktl::api::decompress_memory_info_ext * _p_decompress_memory_info_ext)
{
ktl::loader::proc_type ptr = &ptable[625];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_decompress_memory_ext)ptr)(_command_buffer, _p_decompress_memory_info_ext);
}

void cmd_decompress_memory_indirect_count_ext(ktl::api::command_buffer _command_buffer, ktl::api::memory_decompression_method_flags_ext _decompression_method, ktl::api::dvaddr _indirect_commands_address, ktl::api::dvaddr _indirect_commands_count_address, ktl::i32 _max_decompression_count, ktl::i32 _stride)
{
ktl::loader::proc_type ptr = &ptable[626];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_decompress_memory_indirect_count_ext)ptr)(_command_buffer, _decompression_method, _indirect_commands_address, _indirect_commands_count_address, _max_decompression_count, _stride);
}

ktl::api::result create_cu_module_nvx(ktl::api::device _device, const ktl::api::cu_module_create_info_nvx * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::cu_module_nvx * _p_module)
{
ktl::loader::proc_type ptr = &ptable[627];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_cu_module_nvx)ptr)(_device, _p_create_info, _p_allocator, _p_module);
}

ktl::api::result create_cu_function_nvx(ktl::api::device _device, const ktl::api::cu_function_create_info_nvx * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::cu_function_nvx * _p_function)
{
ktl::loader::proc_type ptr = &ptable[628];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_cu_function_nvx)ptr)(_device, _p_create_info, _p_allocator, _p_function);
}

void destroy_cu_module_nvx(ktl::api::device _device, ktl::api::cu_module_nvx _module, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[629];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_cu_module_nvx)ptr)(_device, _module, _p_allocator);
}

void destroy_cu_function_nvx(ktl::api::device _device, ktl::api::cu_function_nvx _function, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[630];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_cu_function_nvx)ptr)(_device, _function, _p_allocator);
}

void cmd_cu_launch_kernel_nvx(ktl::api::command_buffer _command_buffer, const ktl::api::cu_launch_info_nvx * _p_launch_info)
{
ktl::loader::proc_type ptr = &ptable[631];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_cu_launch_kernel_nvx)ptr)(_command_buffer, _p_launch_info);
}

void get_descriptor_set_layout_size_ext(ktl::api::device _device, ktl::api::descriptor_set_layout _layout, ktl::api::dvsize * _p_layout_size_in_bytes)
{
ktl::loader::proc_type ptr = &ptable[632];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_descriptor_set_layout_size_ext)ptr)(_device, _layout, _p_layout_size_in_bytes);
}

void get_descriptor_set_layout_binding_offset_ext(ktl::api::device _device, ktl::api::descriptor_set_layout _layout, ktl::i32 _binding, ktl::api::dvsize * _p_offset)
{
ktl::loader::proc_type ptr = &ptable[633];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_descriptor_set_layout_binding_offset_ext)ptr)(_device, _layout, _binding, _p_offset);
}

void get_descriptor_ext(ktl::api::device _device, const ktl::api::descriptor_get_info_ext * _p_descriptor_info, ktl::usize _data_size, void * _p_descriptor)
{
ktl::loader::proc_type ptr = &ptable[634];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_descriptor_ext)ptr)(_device, _p_descriptor_info, _data_size, _p_descriptor);
}

void cmd_bind_descriptor_buffers_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _buffer_count, const ktl::api::descriptor_buffer_binding_info_ext * _p_binding_infos)
{
ktl::loader::proc_type ptr = &ptable[635];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_descriptor_buffers_ext)ptr)(_command_buffer, _buffer_count, _p_binding_infos);
}

void cmd_set_descriptor_buffer_offsets_ext(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_bind_point _pipeline_bind_point, ktl::api::pipeline_layout _layout, ktl::i32 _first_set, ktl::i32 _set_count, const ktl::i32 * _p_buffer_indices, const ktl::api::dvsize * _p_offsets)
{
ktl::loader::proc_type ptr = &ptable[636];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_descriptor_buffer_offsets_ext)ptr)(_command_buffer, _pipeline_bind_point, _layout, _first_set, _set_count, _p_buffer_indices, _p_offsets);
}

void cmd_bind_descriptor_buffer_embedded_samplers_ext(ktl::api::command_buffer _command_buffer, ktl::api::pipeline_bind_point _pipeline_bind_point, ktl::api::pipeline_layout _layout, ktl::i32 _set)
{
ktl::loader::proc_type ptr = &ptable[637];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_descriptor_buffer_embedded_samplers_ext)ptr)(_command_buffer, _pipeline_bind_point, _layout, _set);
}

ktl::api::result get_buffer_opaque_capture_descriptor_data_ext(ktl::api::device _device, const ktl::api::buffer_capture_descriptor_data_info_ext * _p_info, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[638];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_buffer_opaque_capture_descriptor_data_ext)ptr)(_device, _p_info, _p_data);
}

ktl::api::result get_image_opaque_capture_descriptor_data_ext(ktl::api::device _device, const ktl::api::image_capture_descriptor_data_info_ext * _p_info, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[639];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_opaque_capture_descriptor_data_ext)ptr)(_device, _p_info, _p_data);
}

ktl::api::result get_image_view_opaque_capture_descriptor_data_ext(ktl::api::device _device, const ktl::api::image_view_capture_descriptor_data_info_ext * _p_info, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[640];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_view_opaque_capture_descriptor_data_ext)ptr)(_device, _p_info, _p_data);
}

ktl::api::result get_sampler_opaque_capture_descriptor_data_ext(ktl::api::device _device, const ktl::api::sampler_capture_descriptor_data_info_ext * _p_info, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[641];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_sampler_opaque_capture_descriptor_data_ext)ptr)(_device, _p_info, _p_data);
}

ktl::api::result get_acceleration_structure_opaque_capture_descriptor_data_ext(ktl::api::device _device, const ktl::api::acceleration_structure_capture_descriptor_data_info_ext * _p_info, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[642];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_acceleration_structure_opaque_capture_descriptor_data_ext)ptr)(_device, _p_info, _p_data);
}

void set_device_memory_priority_ext(ktl::api::device _device, ktl::api::device_memory _memory, float _priority)
{
ktl::loader::proc_type ptr = &ptable[643];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_device_memory_priority_ext)ptr)(_device, _memory, _priority);
}

ktl::api::result acquire_drm_display_ext(ktl::api::physical_device _physical_device, ktl::i32 _drm_fd, ktl::api::display_khr _display)
{
ktl::loader::proc_type ptr = &ptable[644];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_acquire_drm_display_ext)ptr)(_physical_device, _drm_fd, _display);
}

ktl::api::result get_drm_display_ext(ktl::api::physical_device _physical_device, ktl::i32 _drm_fd, ktl::i32 _connector_id, ktl::api::display_khr * _display)
{
ktl::loader::proc_type ptr = &ptable[645];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_drm_display_ext)ptr)(_physical_device, _drm_fd, _connector_id, _display);
}

ktl::api::result wait_for_present2khr(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, const ktl::api::present_wait2info_khr * _p_present_wait2info)
{
ktl::loader::proc_type ptr = &ptable[646];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_wait_for_present2khr)ptr)(_device, _swapchain, _p_present_wait2info);
}

ktl::api::result wait_for_present_khr(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, ktl::u64 _present_id, ktl::u64 _timeout)
{
ktl::loader::proc_type ptr = &ptable[647];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_wait_for_present_khr)ptr)(_device, _swapchain, _present_id, _timeout);
}

ktl::api::result create_buffer_collection_fuchsia(ktl::api::device _device, const ktl::api::buffer_collection_create_info_fuchsia * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::buffer_collection_fuchsia * _p_collection)
{
ktl::loader::proc_type ptr = &ptable[648];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_buffer_collection_fuchsia)ptr)(_device, _p_create_info, _p_allocator, _p_collection);
}

ktl::api::result set_buffer_collection_buffer_constraints_fuchsia(ktl::api::device _device, ktl::api::buffer_collection_fuchsia _collection, const ktl::api::buffer_constraints_info_fuchsia * _p_buffer_constraints_info)
{
ktl::loader::proc_type ptr = &ptable[649];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_buffer_collection_buffer_constraints_fuchsia)ptr)(_device, _collection, _p_buffer_constraints_info);
}

ktl::api::result set_buffer_collection_image_constraints_fuchsia(ktl::api::device _device, ktl::api::buffer_collection_fuchsia _collection, const ktl::api::image_constraints_info_fuchsia * _p_image_constraints_info)
{
ktl::loader::proc_type ptr = &ptable[650];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_buffer_collection_image_constraints_fuchsia)ptr)(_device, _collection, _p_image_constraints_info);
}

void destroy_buffer_collection_fuchsia(ktl::api::device _device, ktl::api::buffer_collection_fuchsia _collection, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[651];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_buffer_collection_fuchsia)ptr)(_device, _collection, _p_allocator);
}

ktl::api::result get_buffer_collection_properties_fuchsia(ktl::api::device _device, ktl::api::buffer_collection_fuchsia _collection, ktl::api::buffer_collection_properties_fuchsia * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[652];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_buffer_collection_properties_fuchsia)ptr)(_device, _collection, _p_properties);
}

ktl::api::result create_cuda_module_nv(ktl::api::device _device, const ktl::api::cuda_module_create_info_nv * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::cuda_module_nv * _p_module)
{
ktl::loader::proc_type ptr = &ptable[653];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_cuda_module_nv)ptr)(_device, _p_create_info, _p_allocator, _p_module);
}

ktl::api::result get_cuda_module_cache_nv(ktl::api::device _device, ktl::api::cuda_module_nv _module, ktl::usize * _p_cache_size, void * _p_cache_data)
{
ktl::loader::proc_type ptr = &ptable[654];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_cuda_module_cache_nv)ptr)(_device, _module, _p_cache_size, _p_cache_data);
}

ktl::api::result create_cuda_function_nv(ktl::api::device _device, const ktl::api::cuda_function_create_info_nv * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::cuda_function_nv * _p_function)
{
ktl::loader::proc_type ptr = &ptable[655];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_cuda_function_nv)ptr)(_device, _p_create_info, _p_allocator, _p_function);
}

void destroy_cuda_module_nv(ktl::api::device _device, ktl::api::cuda_module_nv _module, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[656];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_cuda_module_nv)ptr)(_device, _module, _p_allocator);
}

void destroy_cuda_function_nv(ktl::api::device _device, ktl::api::cuda_function_nv _function, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[657];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_cuda_function_nv)ptr)(_device, _function, _p_allocator);
}

void cmd_cuda_launch_kernel_nv(ktl::api::command_buffer _command_buffer, const ktl::api::cuda_launch_info_nv * _p_launch_info)
{
ktl::loader::proc_type ptr = &ptable[658];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_cuda_launch_kernel_nv)ptr)(_command_buffer, _p_launch_info);
}

void cmd_begin_rendering(ktl::api::command_buffer _command_buffer, const ktl::api::rendering_info * _p_rendering_info)
{
ktl::loader::proc_type ptr = &ptable[659];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_rendering)ptr)(_command_buffer, _p_rendering_info);
}

void cmd_end_rendering(ktl::api::command_buffer _command_buffer)
{
ktl::loader::proc_type ptr = &ptable[661];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_rendering)ptr)(_command_buffer);
}

void cmd_end_rendering2khr(ktl::api::command_buffer _command_buffer, const ktl::api::rendering_end_info_khr * _p_rendering_end_info)
{
ktl::loader::proc_type ptr = &ptable[662];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_rendering2khr)ptr)(_command_buffer, _p_rendering_end_info);
}

void get_descriptor_set_layout_host_mapping_info_valve(ktl::api::device _device, const ktl::api::descriptor_set_binding_reference_valve * _p_binding_reference, ktl::api::descriptor_set_layout_host_mapping_info_valve * _p_host_mapping)
{
ktl::loader::proc_type ptr = &ptable[665];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_descriptor_set_layout_host_mapping_info_valve)ptr)(_device, _p_binding_reference, _p_host_mapping);
}

void get_descriptor_set_host_mapping_valve(ktl::api::device _device, ktl::api::descriptor_set _descriptor_set, void * _pp_data)
{
ktl::loader::proc_type ptr = &ptable[666];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_descriptor_set_host_mapping_valve)ptr)(_device, _descriptor_set, _pp_data);
}

ktl::api::result create_micromap_ext(ktl::api::device _device, const ktl::api::micromap_create_info_ext * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::micromap_ext * _p_micromap)
{
ktl::loader::proc_type ptr = &ptable[667];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_micromap_ext)ptr)(_device, _p_create_info, _p_allocator, _p_micromap);
}

void cmd_build_micromaps_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _info_count, const ktl::api::micromap_build_info_ext * _p_infos)
{
ktl::loader::proc_type ptr = &ptable[668];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_build_micromaps_ext)ptr)(_command_buffer, _info_count, _p_infos);
}

ktl::api::result build_micromaps_ext(ktl::api::device _device, ktl::api::deferred_operation_khr _deferred_operation, ktl::i32 _info_count, const ktl::api::micromap_build_info_ext * _p_infos)
{
ktl::loader::proc_type ptr = &ptable[669];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_build_micromaps_ext)ptr)(_device, _deferred_operation, _info_count, _p_infos);
}

void destroy_micromap_ext(ktl::api::device _device, ktl::api::micromap_ext _micromap, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[670];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_micromap_ext)ptr)(_device, _micromap, _p_allocator);
}

void cmd_copy_micromap_ext(ktl::api::command_buffer _command_buffer, const ktl::api::copy_micromap_info_ext * _p_info)
{
ktl::loader::proc_type ptr = &ptable[671];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_micromap_ext)ptr)(_command_buffer, _p_info);
}

ktl::api::result copy_micromap_ext(ktl::api::device _device, ktl::api::deferred_operation_khr _deferred_operation, const ktl::api::copy_micromap_info_ext * _p_info)
{
ktl::loader::proc_type ptr = &ptable[672];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_copy_micromap_ext)ptr)(_device, _deferred_operation, _p_info);
}

void cmd_copy_micromap_to_memory_ext(ktl::api::command_buffer _command_buffer, const ktl::api::copy_micromap_to_memory_info_ext * _p_info)
{
ktl::loader::proc_type ptr = &ptable[673];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_micromap_to_memory_ext)ptr)(_command_buffer, _p_info);
}

ktl::api::result copy_micromap_to_memory_ext(ktl::api::device _device, ktl::api::deferred_operation_khr _deferred_operation, const ktl::api::copy_micromap_to_memory_info_ext * _p_info)
{
ktl::loader::proc_type ptr = &ptable[674];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_copy_micromap_to_memory_ext)ptr)(_device, _deferred_operation, _p_info);
}

void cmd_copy_memory_to_micromap_ext(ktl::api::command_buffer _command_buffer, const ktl::api::copy_memory_to_micromap_info_ext * _p_info)
{
ktl::loader::proc_type ptr = &ptable[675];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_memory_to_micromap_ext)ptr)(_command_buffer, _p_info);
}

ktl::api::result copy_memory_to_micromap_ext(ktl::api::device _device, ktl::api::deferred_operation_khr _deferred_operation, const ktl::api::copy_memory_to_micromap_info_ext * _p_info)
{
ktl::loader::proc_type ptr = &ptable[676];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_copy_memory_to_micromap_ext)ptr)(_device, _deferred_operation, _p_info);
}

void cmd_write_micromaps_properties_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _micromap_count, const ktl::api::micromap_ext * _p_micromaps, ktl::api::query_type _query_type, ktl::api::query_pool _query_pool, ktl::i32 _first_query)
{
ktl::loader::proc_type ptr = &ptable[677];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_write_micromaps_properties_ext)ptr)(_command_buffer, _micromap_count, _p_micromaps, _query_type, _query_pool, _first_query);
}

ktl::api::result write_micromaps_properties_ext(ktl::api::device _device, ktl::i32 _micromap_count, const ktl::api::micromap_ext * _p_micromaps, ktl::api::query_type _query_type, ktl::usize _data_size, void * _p_data, ktl::usize _stride)
{
ktl::loader::proc_type ptr = &ptable[678];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_write_micromaps_properties_ext)ptr)(_device, _micromap_count, _p_micromaps, _query_type, _data_size, _p_data, _stride);
}

void get_device_micromap_compatibility_ext(ktl::api::device _device, const ktl::api::micromap_version_info_ext * _p_version_info, ktl::api::acceleration_structure_compatibility_khr * _p_compatibility)
{
ktl::loader::proc_type ptr = &ptable[679];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_micromap_compatibility_ext)ptr)(_device, _p_version_info, _p_compatibility);
}

void get_micromap_build_sizes_ext(ktl::api::device _device, ktl::api::acceleration_structure_build_type_khr _build_type, const ktl::api::micromap_build_info_ext * _p_build_info, ktl::api::micromap_build_sizes_info_ext * _p_size_info)
{
ktl::loader::proc_type ptr = &ptable[680];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_micromap_build_sizes_ext)ptr)(_device, _build_type, _p_build_info, _p_size_info);
}

void get_shader_module_identifier_ext(ktl::api::device _device, ktl::api::shader_module _shader_module, ktl::api::shader_module_identifier_ext * _p_identifier)
{
ktl::loader::proc_type ptr = &ptable[681];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_shader_module_identifier_ext)ptr)(_device, _shader_module, _p_identifier);
}

void get_shader_module_create_info_identifier_ext(ktl::api::device _device, const ktl::api::shader_module_create_info * _p_create_info, ktl::api::shader_module_identifier_ext * _p_identifier)
{
ktl::loader::proc_type ptr = &ptable[682];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_shader_module_create_info_identifier_ext)ptr)(_device, _p_create_info, _p_identifier);
}

void get_image_subresource_layout2(ktl::api::device _device, ktl::api::image _image, const ktl::api::image_subresource2 * _p_subresource, ktl::api::subresource_layout2 * _p_layout)
{
ktl::loader::proc_type ptr = &ptable[683];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_subresource_layout2)ptr)(_device, _image, _p_subresource, _p_layout);
}

ktl::api::result get_pipeline_properties_ext(ktl::api::device _device, const ktl::api::pipeline_info_khr * _p_pipeline_info, ktl::api::base_out_structure * _p_pipeline_properties)
{
ktl::loader::proc_type ptr = &ptable[686];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_pipeline_properties_ext)ptr)(_device, _p_pipeline_info, _p_pipeline_properties);
}

void export_metal_objects_ext(ktl::api::device _device, ktl::api::export_metal_objects_info_ext * _p_metal_objects_info)
{
ktl::loader::proc_type ptr = &ptable[687];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_export_metal_objects_ext)ptr)(_device, _p_metal_objects_info);
}

void cmd_bind_tile_memory_qcom(ktl::api::command_buffer _command_buffer, const ktl::api::tile_memory_bind_info_qcom * _p_tile_memory_bind_info)
{
ktl::loader::proc_type ptr = &ptable[688];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_tile_memory_qcom)ptr)(_command_buffer, _p_tile_memory_bind_info);
}

ktl::api::result get_framebuffer_tile_properties_qcom(ktl::api::device _device, ktl::api::framebuffer _framebuffer, ktl::i32 * _p_properties_count, ktl::api::tile_properties_qcom * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[689];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_framebuffer_tile_properties_qcom)ptr)(_device, _framebuffer, _p_properties_count, _p_properties);
}

ktl::api::result get_dynamic_rendering_tile_properties_qcom(ktl::api::device _device, const ktl::api::rendering_info * _p_rendering_info, ktl::api::tile_properties_qcom * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[690];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_dynamic_rendering_tile_properties_qcom)ptr)(_device, _p_rendering_info, _p_properties);
}

ktl::api::result get_physical_device_optical_flow_image_formats_nv(ktl::api::physical_device _physical_device, const ktl::api::optical_flow_image_format_info_nv * _p_optical_flow_image_format_info, ktl::i32 * _p_format_count, ktl::api::optical_flow_image_format_properties_nv * _p_image_format_properties)
{
ktl::loader::proc_type ptr = &ptable[691];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_optical_flow_image_formats_nv)ptr)(_physical_device, _p_optical_flow_image_format_info, _p_format_count, _p_image_format_properties);
}

ktl::api::result create_optical_flow_session_nv(ktl::api::device _device, const ktl::api::optical_flow_session_create_info_nv * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::optical_flow_session_nv * _p_session)
{
ktl::loader::proc_type ptr = &ptable[692];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_optical_flow_session_nv)ptr)(_device, _p_create_info, _p_allocator, _p_session);
}

void destroy_optical_flow_session_nv(ktl::api::device _device, ktl::api::optical_flow_session_nv _session, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[693];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_optical_flow_session_nv)ptr)(_device, _session, _p_allocator);
}

ktl::api::result bind_optical_flow_session_image_nv(ktl::api::device _device, ktl::api::optical_flow_session_nv _session, ktl::api::optical_flow_session_binding_point_nv _binding_point, ktl::api::image_view _view, ktl::api::image_layout _layout)
{
ktl::loader::proc_type ptr = &ptable[694];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_bind_optical_flow_session_image_nv)ptr)(_device, _session, _binding_point, _view, _layout);
}

void cmd_optical_flow_execute_nv(ktl::api::command_buffer _command_buffer, ktl::api::optical_flow_session_nv _session, const ktl::api::optical_flow_execute_info_nv * _p_execute_info)
{
ktl::loader::proc_type ptr = &ptable[695];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_optical_flow_execute_nv)ptr)(_command_buffer, _session, _p_execute_info);
}

ktl::api::result get_device_fault_info_ext(ktl::api::device _device, ktl::api::device_fault_counts_ext * _p_fault_counts, ktl::api::device_fault_info_ext * _p_fault_info)
{
ktl::loader::proc_type ptr = &ptable[696];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_fault_info_ext)ptr)(_device, _p_fault_counts, _p_fault_info);
}

ktl::api::result get_device_fault_reports_khr(ktl::api::device _device, ktl::u64 _timeout, ktl::i32 * _p_fault_counts, ktl::api::device_fault_info_khr * _p_fault_info)
{
ktl::loader::proc_type ptr = &ptable[697];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_fault_reports_khr)ptr)(_device, _timeout, _p_fault_counts, _p_fault_info);
}

ktl::api::result get_device_fault_debug_info_khr(ktl::api::device _device, ktl::api::device_fault_debug_info_khr * _p_debug_info)
{
ktl::loader::proc_type ptr = &ptable[698];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_fault_debug_info_khr)ptr)(_device, _p_debug_info);
}

void cmd_set_depth_bias2ext(ktl::api::command_buffer _command_buffer, const ktl::api::depth_bias_info_ext * _p_depth_bias_info)
{
ktl::loader::proc_type ptr = &ptable[699];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_bias2ext)ptr)(_command_buffer, _p_depth_bias_info);
}

ktl::api::result release_swapchain_images_khr(ktl::api::device _device, const ktl::api::release_swapchain_images_info_khr * _p_release_info)
{
ktl::loader::proc_type ptr = &ptable[700];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_release_swapchain_images_khr)ptr)(_device, _p_release_info);
}

void get_device_image_subresource_layout(ktl::api::device _device, const ktl::api::device_image_subresource_info * _p_info, ktl::api::subresource_layout2 * _p_layout)
{
ktl::loader::proc_type ptr = &ptable[702];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_image_subresource_layout)ptr)(_device, _p_info, _p_layout);
}

ktl::api::result map_memory2(ktl::api::device _device, const ktl::api::memory_map_info * _p_memory_map_info, void * _pp_data)
{
ktl::loader::proc_type ptr = &ptable[704];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_map_memory2)ptr)(_device, _p_memory_map_info, _pp_data);
}

ktl::api::result unmap_memory2(ktl::api::device _device, const ktl::api::memory_unmap_info * _p_memory_unmap_info)
{
ktl::loader::proc_type ptr = &ptable[706];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_unmap_memory2)ptr)(_device, _p_memory_unmap_info);
}

ktl::api::result create_shaders_ext(ktl::api::device _device, ktl::i32 _create_info_count, const ktl::api::shader_create_info_ext * _p_create_infos, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::shader_ext * _p_shaders)
{
ktl::loader::proc_type ptr = &ptable[708];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_shaders_ext)ptr)(_device, _create_info_count, _p_create_infos, _p_allocator, _p_shaders);
}

void destroy_shader_ext(ktl::api::device _device, ktl::api::shader_ext _shader, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[709];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_shader_ext)ptr)(_device, _shader, _p_allocator);
}

ktl::api::result get_shader_binary_data_ext(ktl::api::device _device, ktl::api::shader_ext _shader, ktl::usize * _p_data_size, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[710];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_shader_binary_data_ext)ptr)(_device, _shader, _p_data_size, _p_data);
}

void cmd_bind_shaders_ext(ktl::api::command_buffer _command_buffer, ktl::i32 _stage_count, const ktl::api::shader_stage_flag_bits * _p_stages, const ktl::api::shader_ext * _p_shaders)
{
ktl::loader::proc_type ptr = &ptable[711];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_shaders_ext)ptr)(_command_buffer, _stage_count, _p_stages, _p_shaders);
}

ktl::api::result set_swapchain_present_timing_queue_size_ext(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, ktl::i32 _size)
{
ktl::loader::proc_type ptr = &ptable[712];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_swapchain_present_timing_queue_size_ext)ptr)(_device, _swapchain, _size);
}

ktl::api::result get_swapchain_timing_properties_ext(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, ktl::api::swapchain_timing_properties_ext * _p_swapchain_timing_properties, ktl::u64 * _p_swapchain_timing_properties_counter)
{
ktl::loader::proc_type ptr = &ptable[713];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_swapchain_timing_properties_ext)ptr)(_device, _swapchain, _p_swapchain_timing_properties, _p_swapchain_timing_properties_counter);
}

ktl::api::result get_swapchain_time_domain_properties_ext(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, ktl::api::swapchain_time_domain_properties_ext * _p_swapchain_time_domain_properties, ktl::u64 * _p_time_domains_counter)
{
ktl::loader::proc_type ptr = &ptable[714];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_swapchain_time_domain_properties_ext)ptr)(_device, _swapchain, _p_swapchain_time_domain_properties, _p_time_domains_counter);
}

ktl::api::result get_past_presentation_timing_ext(ktl::api::device _device, const ktl::api::past_presentation_timing_info_ext * _p_past_presentation_timing_info, ktl::api::past_presentation_timing_properties_ext * _p_past_presentation_timing_properties)
{
ktl::loader::proc_type ptr = &ptable[715];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_past_presentation_timing_ext)ptr)(_device, _p_past_presentation_timing_info, _p_past_presentation_timing_properties);
}

ktl::api::result get_screen_buffer_properties_qnx(ktl::api::device _device, const _screen_buffer * _buffer, ktl::api::screen_buffer_properties_qnx * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[716];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_screen_buffer_properties_qnx)ptr)(_device, _buffer, _p_properties);
}

ktl::api::result get_physical_device_cooperative_matrix_properties_khr(ktl::api::physical_device _physical_device, ktl::i32 * _p_property_count, ktl::api::cooperative_matrix_properties_khr * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[717];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_cooperative_matrix_properties_khr)ptr)(_physical_device, _p_property_count, _p_properties);
}

ktl::api::result get_execution_graph_pipeline_scratch_size_amdx(ktl::api::device _device, ktl::api::pipeline _execution_graph, ktl::api::execution_graph_pipeline_scratch_size_amdx * _p_size_info)
{
ktl::loader::proc_type ptr = &ptable[718];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_execution_graph_pipeline_scratch_size_amdx)ptr)(_device, _execution_graph, _p_size_info);
}

ktl::api::result get_execution_graph_pipeline_node_index_amdx(ktl::api::device _device, ktl::api::pipeline _execution_graph, const ktl::api::pipeline_shader_stage_node_create_info_amdx * _p_node_info, ktl::i32 * _p_node_index)
{
ktl::loader::proc_type ptr = &ptable[719];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_execution_graph_pipeline_node_index_amdx)ptr)(_device, _execution_graph, _p_node_info, _p_node_index);
}

ktl::api::result create_execution_graph_pipelines_amdx(ktl::api::device _device, ktl::api::pipeline_cache _pipeline_cache, ktl::i32 _create_info_count, const ktl::api::execution_graph_pipeline_create_info_amdx * _p_create_infos, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::pipeline * _p_pipelines)
{
ktl::loader::proc_type ptr = &ptable[720];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_execution_graph_pipelines_amdx)ptr)(_device, _pipeline_cache, _create_info_count, _p_create_infos, _p_allocator, _p_pipelines);
}

void cmd_initialize_graph_scratch_memory_amdx(ktl::api::command_buffer _command_buffer, ktl::api::pipeline _execution_graph, ktl::api::dvaddr _scratch, ktl::api::dvsize _scratch_size)
{
ktl::loader::proc_type ptr = &ptable[721];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_initialize_graph_scratch_memory_amdx)ptr)(_command_buffer, _execution_graph, _scratch, _scratch_size);
}

void cmd_dispatch_graph_amdx(ktl::api::command_buffer _command_buffer, ktl::api::dvaddr _scratch, ktl::api::dvsize _scratch_size, const ktl::api::dispatch_graph_count_info_amdx * _p_count_info)
{
ktl::loader::proc_type ptr = &ptable[722];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_dispatch_graph_amdx)ptr)(_command_buffer, _scratch, _scratch_size, _p_count_info);
}

void cmd_dispatch_graph_indirect_amdx(ktl::api::command_buffer _command_buffer, ktl::api::dvaddr _scratch, ktl::api::dvsize _scratch_size, const ktl::api::dispatch_graph_count_info_amdx * _p_count_info)
{
ktl::loader::proc_type ptr = &ptable[723];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_dispatch_graph_indirect_amdx)ptr)(_command_buffer, _scratch, _scratch_size, _p_count_info);
}

void cmd_dispatch_graph_indirect_count_amdx(ktl::api::command_buffer _command_buffer, ktl::api::dvaddr _scratch, ktl::api::dvsize _scratch_size, ktl::api::dvaddr _count_info)
{
ktl::loader::proc_type ptr = &ptable[724];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_dispatch_graph_indirect_count_amdx)ptr)(_command_buffer, _scratch, _scratch_size, _count_info);
}

void cmd_bind_descriptor_sets2(ktl::api::command_buffer _command_buffer, const ktl::api::bind_descriptor_sets_info * _p_bind_descriptor_sets_info)
{
ktl::loader::proc_type ptr = &ptable[725];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_descriptor_sets2)ptr)(_command_buffer, _p_bind_descriptor_sets_info);
}

void cmd_push_constants2(ktl::api::command_buffer _command_buffer, const ktl::api::push_constants_info * _p_push_constants_info)
{
ktl::loader::proc_type ptr = &ptable[727];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_push_constants2)ptr)(_command_buffer, _p_push_constants_info);
}

void cmd_push_descriptor_set2(ktl::api::command_buffer _command_buffer, const ktl::api::push_descriptor_set_info * _p_push_descriptor_set_info)
{
ktl::loader::proc_type ptr = &ptable[729];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_push_descriptor_set2)ptr)(_command_buffer, _p_push_descriptor_set_info);
}

void cmd_push_descriptor_set_with_template2(ktl::api::command_buffer _command_buffer, const ktl::api::push_descriptor_set_with_template_info * _p_push_descriptor_set_with_template_info)
{
ktl::loader::proc_type ptr = &ptable[731];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_push_descriptor_set_with_template2)ptr)(_command_buffer, _p_push_descriptor_set_with_template_info);
}

void cmd_set_descriptor_buffer_offsets2ext(ktl::api::command_buffer _command_buffer, const ktl::api::set_descriptor_buffer_offsets_info_ext * _p_set_descriptor_buffer_offsets_info)
{
ktl::loader::proc_type ptr = &ptable[733];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_descriptor_buffer_offsets2ext)ptr)(_command_buffer, _p_set_descriptor_buffer_offsets_info);
}

void cmd_bind_descriptor_buffer_embedded_samplers2ext(ktl::api::command_buffer _command_buffer, const ktl::api::bind_descriptor_buffer_embedded_samplers_info_ext * _p_bind_descriptor_buffer_embedded_samplers_info)
{
ktl::loader::proc_type ptr = &ptable[734];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_descriptor_buffer_embedded_samplers2ext)ptr)(_command_buffer, _p_bind_descriptor_buffer_embedded_samplers_info);
}

ktl::api::result set_latency_sleep_mode_nv(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, const ktl::api::latency_sleep_mode_info_nv * _p_sleep_mode_info)
{
ktl::loader::proc_type ptr = &ptable[735];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_latency_sleep_mode_nv)ptr)(_device, _swapchain, _p_sleep_mode_info);
}

ktl::api::result latency_sleep_nv(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, const ktl::api::latency_sleep_info_nv * _p_sleep_info)
{
ktl::loader::proc_type ptr = &ptable[736];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_latency_sleep_nv)ptr)(_device, _swapchain, _p_sleep_info);
}

void set_latency_marker_nv(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, const ktl::api::set_latency_marker_info_nv * _p_latency_marker_info)
{
ktl::loader::proc_type ptr = &ptable[737];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_set_latency_marker_nv)ptr)(_device, _swapchain, _p_latency_marker_info);
}

void get_latency_timings_nv(ktl::api::device _device, ktl::api::swapchain_khr _swapchain, ktl::api::get_latency_marker_info_nv * _p_latency_marker_info)
{
ktl::loader::proc_type ptr = &ptable[738];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_latency_timings_nv)ptr)(_device, _swapchain, _p_latency_marker_info);
}

void queue_notify_out_of_band_nv(ktl::api::queue _queue, const ktl::api::out_of_band_queue_type_info_nv * _p_queue_type_info)
{
ktl::loader::proc_type ptr = &ptable[739];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_notify_out_of_band_nv)ptr)(_queue, _p_queue_type_info);
}

void cmd_set_rendering_attachment_locations(ktl::api::command_buffer _command_buffer, const ktl::api::rendering_attachment_location_info * _p_location_info)
{
ktl::loader::proc_type ptr = &ptable[740];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_rendering_attachment_locations)ptr)(_command_buffer, _p_location_info);
}

void cmd_set_rendering_input_attachment_indices(ktl::api::command_buffer _command_buffer, const ktl::api::rendering_input_attachment_index_info * _p_input_attachment_index_info)
{
ktl::loader::proc_type ptr = &ptable[742];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_rendering_input_attachment_indices)ptr)(_command_buffer, _p_input_attachment_index_info);
}

void cmd_set_depth_clamp_range_ext(ktl::api::command_buffer _command_buffer, ktl::api::depth_clamp_mode_ext _depth_clamp_mode, const ktl::api::depth_clamp_range_ext * _p_depth_clamp_range)
{
ktl::loader::proc_type ptr = &ptable[744];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_depth_clamp_range_ext)ptr)(_command_buffer, _depth_clamp_mode, _p_depth_clamp_range);
}

ktl::api::result get_physical_device_cooperative_matrix_flexible_dimensions_properties_nv(ktl::api::physical_device _physical_device, ktl::i32 * _p_property_count, ktl::api::cooperative_matrix_flexible_dimensions_properties_nv * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[745];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_cooperative_matrix_flexible_dimensions_properties_nv)ptr)(_physical_device, _p_property_count, _p_properties);
}

ktl::api::result get_memory_metal_handle_ext(ktl::api::device _device, const ktl::api::memory_get_metal_handle_info_ext * _p_get_metal_handle_info, void * _p_handle)
{
ktl::loader::proc_type ptr = &ptable[746];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_metal_handle_ext)ptr)(_device, _p_get_metal_handle_info, _p_handle);
}

ktl::api::result get_memory_metal_handle_properties_ext(ktl::api::device _device, ktl::api::external_memory_handle_type_flag_bits _handle_type, const void * _p_handle, ktl::api::memory_metal_handle_properties_ext * _p_memory_metal_handle_properties)
{
ktl::loader::proc_type ptr = &ptable[747];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_metal_handle_properties_ext)ptr)(_device, _handle_type, _p_handle, _p_memory_metal_handle_properties);
}

ktl::api::result get_physical_device_cooperative_vector_properties_nv(ktl::api::physical_device _physical_device, ktl::i32 * _p_property_count, ktl::api::cooperative_vector_properties_nv * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[748];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_cooperative_vector_properties_nv)ptr)(_physical_device, _p_property_count, _p_properties);
}

ktl::api::result convert_cooperative_vector_matrix_nv(ktl::api::device _device, const ktl::api::convert_cooperative_vector_matrix_info_nv * _p_info)
{
ktl::loader::proc_type ptr = &ptable[749];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_convert_cooperative_vector_matrix_nv)ptr)(_device, _p_info);
}

void cmd_convert_cooperative_vector_matrix_nv(ktl::api::command_buffer _command_buffer, ktl::i32 _info_count, const ktl::api::convert_cooperative_vector_matrix_info_nv * _p_infos)
{
ktl::loader::proc_type ptr = &ptable[750];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_convert_cooperative_vector_matrix_nv)ptr)(_command_buffer, _info_count, _p_infos);
}

void cmd_dispatch_tile_qcom(ktl::api::command_buffer _command_buffer, const ktl::api::dispatch_tile_info_qcom * _p_dispatch_tile_info)
{
ktl::loader::proc_type ptr = &ptable[751];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_dispatch_tile_qcom)ptr)(_command_buffer, _p_dispatch_tile_info);
}

void cmd_begin_per_tile_execution_qcom(ktl::api::command_buffer _command_buffer, const ktl::api::per_tile_begin_info_qcom * _p_per_tile_begin_info)
{
ktl::loader::proc_type ptr = &ptable[752];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_per_tile_execution_qcom)ptr)(_command_buffer, _p_per_tile_begin_info);
}

void cmd_end_per_tile_execution_qcom(ktl::api::command_buffer _command_buffer, const ktl::api::per_tile_end_info_qcom * _p_per_tile_end_info)
{
ktl::loader::proc_type ptr = &ptable[753];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_per_tile_execution_qcom)ptr)(_command_buffer, _p_per_tile_end_info);
}

ktl::api::result create_external_compute_queue_nv(ktl::api::device _device, const ktl::api::external_compute_queue_create_info_nv * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::external_compute_queue_nv * _p_external_queue)
{
ktl::loader::proc_type ptr = &ptable[754];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_external_compute_queue_nv)ptr)(_device, _p_create_info, _p_allocator, _p_external_queue);
}

void destroy_external_compute_queue_nv(ktl::api::device _device, ktl::api::external_compute_queue_nv _external_queue, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[755];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_external_compute_queue_nv)ptr)(_device, _external_queue, _p_allocator);
}

void get_external_compute_queue_data_nv(ktl::api::external_compute_queue_nv _external_queue, ktl::api::external_compute_queue_data_params_nv * _params, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[756];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_external_compute_queue_data_nv)ptr)(_external_queue, _params, _p_data);
}

ktl::api::result enumerate_physical_device_shader_instrumentation_metrics_arm(ktl::api::physical_device _physical_device, ktl::i32 * _p_description_count, ktl::api::shader_instrumentation_metric_description_arm * _p_descriptions)
{
ktl::loader::proc_type ptr = &ptable[757];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_enumerate_physical_device_shader_instrumentation_metrics_arm)ptr)(_physical_device, _p_description_count, _p_descriptions);
}

ktl::api::result create_shader_instrumentation_arm(ktl::api::device _device, const ktl::api::shader_instrumentation_create_info_arm * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::shader_instrumentation_arm * _p_instrumentation)
{
ktl::loader::proc_type ptr = &ptable[758];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_shader_instrumentation_arm)ptr)(_device, _p_create_info, _p_allocator, _p_instrumentation);
}

void destroy_shader_instrumentation_arm(ktl::api::device _device, ktl::api::shader_instrumentation_arm _instrumentation, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[759];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_shader_instrumentation_arm)ptr)(_device, _instrumentation, _p_allocator);
}

void cmd_begin_shader_instrumentation_arm(ktl::api::command_buffer _command_buffer, ktl::api::shader_instrumentation_arm _instrumentation)
{
ktl::loader::proc_type ptr = &ptable[760];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_shader_instrumentation_arm)ptr)(_command_buffer, _instrumentation);
}

void cmd_end_shader_instrumentation_arm(ktl::api::command_buffer _command_buffer)
{
ktl::loader::proc_type ptr = &ptable[761];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_shader_instrumentation_arm)ptr)(_command_buffer);
}

ktl::api::result get_shader_instrumentation_values_arm(ktl::api::device _device, ktl::api::shader_instrumentation_arm _instrumentation, ktl::i32 * _p_metric_block_count, void * _p_metric_values, ktl::api::shader_instrumentation_values_flags_arm _flags)
{
ktl::loader::proc_type ptr = &ptable[762];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_shader_instrumentation_values_arm)ptr)(_device, _instrumentation, _p_metric_block_count, _p_metric_values, _flags);
}

void clear_shader_instrumentation_metrics_arm(ktl::api::device _device, ktl::api::shader_instrumentation_arm _instrumentation)
{
ktl::loader::proc_type ptr = &ptable[763];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_clear_shader_instrumentation_metrics_arm)ptr)(_device, _instrumentation);
}

ktl::api::result create_tensor_arm(ktl::api::device _device, const ktl::api::tensor_create_info_arm * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::tensor_arm * _p_tensor)
{
ktl::loader::proc_type ptr = &ptable[764];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_tensor_arm)ptr)(_device, _p_create_info, _p_allocator, _p_tensor);
}

void destroy_tensor_arm(ktl::api::device _device, ktl::api::tensor_arm _tensor, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[765];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_tensor_arm)ptr)(_device, _tensor, _p_allocator);
}

ktl::api::result create_tensor_view_arm(ktl::api::device _device, const ktl::api::tensor_view_create_info_arm * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::tensor_view_arm * _p_view)
{
ktl::loader::proc_type ptr = &ptable[766];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_tensor_view_arm)ptr)(_device, _p_create_info, _p_allocator, _p_view);
}

void destroy_tensor_view_arm(ktl::api::device _device, ktl::api::tensor_view_arm _tensor_view, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[767];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_tensor_view_arm)ptr)(_device, _tensor_view, _p_allocator);
}

void get_tensor_memory_requirements_arm(ktl::api::device _device, const ktl::api::tensor_memory_requirements_info_arm * _p_info, ktl::api::memory_requirements2 * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[768];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_tensor_memory_requirements_arm)ptr)(_device, _p_info, _p_memory_requirements);
}

ktl::api::result bind_tensor_memory_arm(ktl::api::device _device, ktl::i32 _bind_info_count, const ktl::api::bind_tensor_memory_info_arm * _p_bind_infos)
{
ktl::loader::proc_type ptr = &ptable[769];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_bind_tensor_memory_arm)ptr)(_device, _bind_info_count, _p_bind_infos);
}

void get_device_tensor_memory_requirements_arm(ktl::api::device _device, const ktl::api::device_tensor_memory_requirements_arm * _p_info, ktl::api::memory_requirements2 * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[770];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_device_tensor_memory_requirements_arm)ptr)(_device, _p_info, _p_memory_requirements);
}

void cmd_copy_tensor_arm(ktl::api::command_buffer _command_buffer, const ktl::api::copy_tensor_info_arm * _p_copy_tensor_info)
{
ktl::loader::proc_type ptr = &ptable[771];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_tensor_arm)ptr)(_command_buffer, _p_copy_tensor_info);
}

ktl::api::result get_tensor_opaque_capture_descriptor_data_arm(ktl::api::device _device, const ktl::api::tensor_capture_descriptor_data_info_arm * _p_info, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[772];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_tensor_opaque_capture_descriptor_data_arm)ptr)(_device, _p_info, _p_data);
}

ktl::api::result get_tensor_view_opaque_capture_descriptor_data_arm(ktl::api::device _device, const ktl::api::tensor_view_capture_descriptor_data_info_arm * _p_info, void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[773];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_tensor_view_opaque_capture_descriptor_data_arm)ptr)(_device, _p_info, _p_data);
}

void get_physical_device_external_tensor_properties_arm(ktl::api::physical_device _physical_device, const ktl::api::physical_device_external_tensor_info_arm * _p_external_tensor_info, ktl::api::external_tensor_properties_arm * _p_external_tensor_properties)
{
ktl::loader::proc_type ptr = &ptable[774];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_external_tensor_properties_arm)ptr)(_physical_device, _p_external_tensor_info, _p_external_tensor_properties);
}

ktl::api::result create_data_graph_pipelines_arm(ktl::api::device _device, ktl::api::deferred_operation_khr _deferred_operation, ktl::api::pipeline_cache _pipeline_cache, ktl::i32 _create_info_count, const ktl::api::data_graph_pipeline_create_info_arm * _p_create_infos, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::pipeline * _p_pipelines)
{
ktl::loader::proc_type ptr = &ptable[775];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_data_graph_pipelines_arm)ptr)(_device, _deferred_operation, _pipeline_cache, _create_info_count, _p_create_infos, _p_allocator, _p_pipelines);
}

ktl::api::result create_data_graph_pipeline_session_arm(ktl::api::device _device, const ktl::api::data_graph_pipeline_session_create_info_arm * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::data_graph_pipeline_session_arm * _p_session)
{
ktl::loader::proc_type ptr = &ptable[776];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_data_graph_pipeline_session_arm)ptr)(_device, _p_create_info, _p_allocator, _p_session);
}

ktl::api::result get_data_graph_pipeline_session_bind_point_requirements_arm(ktl::api::device _device, const ktl::api::data_graph_pipeline_session_bind_point_requirements_info_arm * _p_info, ktl::i32 * _p_bind_point_requirement_count, ktl::api::data_graph_pipeline_session_bind_point_requirement_arm * _p_bind_point_requirements)
{
ktl::loader::proc_type ptr = &ptable[777];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_data_graph_pipeline_session_bind_point_requirements_arm)ptr)(_device, _p_info, _p_bind_point_requirement_count, _p_bind_point_requirements);
}

void get_data_graph_pipeline_session_memory_requirements_arm(ktl::api::device _device, const ktl::api::data_graph_pipeline_session_memory_requirements_info_arm * _p_info, ktl::api::memory_requirements2 * _p_memory_requirements)
{
ktl::loader::proc_type ptr = &ptable[778];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_data_graph_pipeline_session_memory_requirements_arm)ptr)(_device, _p_info, _p_memory_requirements);
}

ktl::api::result bind_data_graph_pipeline_session_memory_arm(ktl::api::device _device, ktl::i32 _bind_info_count, const ktl::api::bind_data_graph_pipeline_session_memory_info_arm * _p_bind_infos)
{
ktl::loader::proc_type ptr = &ptable[779];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_bind_data_graph_pipeline_session_memory_arm)ptr)(_device, _bind_info_count, _p_bind_infos);
}

void destroy_data_graph_pipeline_session_arm(ktl::api::device _device, ktl::api::data_graph_pipeline_session_arm _session, const ktl::api::allocation_callbacks * _p_allocator)
{
ktl::loader::proc_type ptr = &ptable[780];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_destroy_data_graph_pipeline_session_arm)ptr)(_device, _session, _p_allocator);
}

void cmd_dispatch_data_graph_arm(ktl::api::command_buffer _command_buffer, ktl::api::data_graph_pipeline_session_arm _session, const ktl::api::data_graph_pipeline_dispatch_info_arm * _p_info)
{
ktl::loader::proc_type ptr = &ptable[781];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_dispatch_data_graph_arm)ptr)(_command_buffer, _session, _p_info);
}

ktl::api::result get_data_graph_pipeline_available_properties_arm(ktl::api::device _device, const ktl::api::data_graph_pipeline_info_arm * _p_pipeline_info, ktl::i32 * _p_properties_count, ktl::api::data_graph_pipeline_property_arm * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[782];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_data_graph_pipeline_available_properties_arm)ptr)(_device, _p_pipeline_info, _p_properties_count, _p_properties);
}

ktl::api::result get_data_graph_pipeline_properties_arm(ktl::api::device _device, const ktl::api::data_graph_pipeline_info_arm * _p_pipeline_info, ktl::i32 _properties_count, ktl::api::data_graph_pipeline_property_query_result_arm * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[783];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_data_graph_pipeline_properties_arm)ptr)(_device, _p_pipeline_info, _properties_count, _p_properties);
}

ktl::api::result get_physical_device_queue_family_data_graph_properties_arm(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, ktl::i32 * _p_queue_family_data_graph_property_count, ktl::api::queue_family_data_graph_properties_arm * _p_queue_family_data_graph_properties)
{
ktl::loader::proc_type ptr = &ptable[784];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_queue_family_data_graph_properties_arm)ptr)(_physical_device, _queue_family_index, _p_queue_family_data_graph_property_count, _p_queue_family_data_graph_properties);
}

void get_physical_device_queue_family_data_graph_processing_engine_properties_arm(ktl::api::physical_device _physical_device, const ktl::api::physical_device_queue_family_data_graph_processing_engine_info_arm * _p_queue_family_data_graph_processing_engine_info, ktl::api::queue_family_data_graph_processing_engine_properties_arm * _p_queue_family_data_graph_processing_engine_properties)
{
ktl::loader::proc_type ptr = &ptable[785];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_queue_family_data_graph_processing_engine_properties_arm)ptr)(_physical_device, _p_queue_family_data_graph_processing_engine_info, _p_queue_family_data_graph_processing_engine_properties);
}

ktl::api::result get_native_buffer_properties_ohos(ktl::api::device _device, const OH_NativeBuffer * _buffer, ktl::api::native_buffer_properties_ohos * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[786];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_native_buffer_properties_ohos)ptr)(_device, _buffer, _p_properties);
}

ktl::api::result get_memory_native_buffer_ohos(ktl::api::device _device, const ktl::api::memory_get_native_buffer_info_ohos * _p_info, OH_NativeBuffer * _p_buffer)
{
ktl::loader::proc_type ptr = &ptable[787];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_memory_native_buffer_ohos)ptr)(_device, _p_info, _p_buffer);
}

ktl::api::result get_swapchain_gralloc_usage_ohos(ktl::api::device _device, ktl::api::format _format, ktl::api::image_usage_flags _image_usage, ktl::u64 * _gralloc_usage)
{
ktl::loader::proc_type ptr = &ptable[788];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_swapchain_gralloc_usage_ohos)ptr)(_device, _format, _image_usage, _gralloc_usage);
}

ktl::api::result acquire_image_ohos(ktl::api::device _device, ktl::api::image _image, ktl::i32 _native_fence_fd, ktl::api::semaphore _semaphore, ktl::api::fence _fence)
{
ktl::loader::proc_type ptr = &ptable[789];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_acquire_image_ohos)ptr)(_device, _image, _native_fence_fd, _semaphore, _fence);
}

ktl::api::result queue_signal_release_image_ohos(ktl::api::queue _queue, ktl::i32 _wait_semaphore_count, const ktl::api::semaphore * _p_wait_semaphores, ktl::api::image _image, ktl::i32 * _p_native_fence_fd)
{
ktl::loader::proc_type ptr = &ptable[790];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_signal_release_image_ohos)ptr)(_queue, _wait_semaphore_count, _p_wait_semaphores, _image, _p_native_fence_fd);
}

ktl::api::result queue_set_perf_hint_qcom(ktl::api::queue _queue, const ktl::api::perf_hint_info_qcom * _p_perf_hint_info)
{
ktl::loader::proc_type ptr = &ptable[791];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_queue_set_perf_hint_qcom)ptr)(_queue, _p_perf_hint_info);
}

ktl::api::result enumerate_physical_device_queue_family_performance_counters_by_region_arm(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, ktl::i32 * _p_counter_count, ktl::api::performance_counter_arm * _p_counters, ktl::api::performance_counter_description_arm * _p_counter_descriptions)
{
ktl::loader::proc_type ptr = &ptable[792];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_enumerate_physical_device_queue_family_performance_counters_by_region_arm)ptr)(_physical_device, _queue_family_index, _p_counter_count, _p_counters, _p_counter_descriptions);
}

void cmd_set_compute_occupancy_priority_nv(ktl::api::command_buffer _command_buffer, const ktl::api::compute_occupancy_priority_parameters_nv * _p_parameters)
{
ktl::loader::proc_type ptr = &ptable[793];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_compute_occupancy_priority_nv)ptr)(_command_buffer, _p_parameters);
}

ktl::api::result write_sampler_descriptors_ext(ktl::api::device _device, ktl::i32 _sampler_count, const ktl::api::sampler_create_info * _p_samplers, const ktl::api::host_address_range_ext * _p_descriptors)
{
ktl::loader::proc_type ptr = &ptable[794];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_write_sampler_descriptors_ext)ptr)(_device, _sampler_count, _p_samplers, _p_descriptors);
}

ktl::api::result write_resource_descriptors_ext(ktl::api::device _device, ktl::i32 _resource_count, const ktl::api::resource_descriptor_info_ext * _p_resources, const ktl::api::host_address_range_ext * _p_descriptors)
{
ktl::loader::proc_type ptr = &ptable[795];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_write_resource_descriptors_ext)ptr)(_device, _resource_count, _p_resources, _p_descriptors);
}

void cmd_bind_sampler_heap_ext(ktl::api::command_buffer _command_buffer, const ktl::api::bind_heap_info_ext * _p_bind_info)
{
ktl::loader::proc_type ptr = &ptable[796];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_sampler_heap_ext)ptr)(_command_buffer, _p_bind_info);
}

void cmd_bind_resource_heap_ext(ktl::api::command_buffer _command_buffer, const ktl::api::bind_heap_info_ext * _p_bind_info)
{
ktl::loader::proc_type ptr = &ptable[797];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_resource_heap_ext)ptr)(_command_buffer, _p_bind_info);
}

void cmd_push_data_ext(ktl::api::command_buffer _command_buffer, const ktl::api::push_data_info_ext * _p_push_data_info)
{
ktl::loader::proc_type ptr = &ptable[798];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_push_data_ext)ptr)(_command_buffer, _p_push_data_info);
}

ktl::api::result register_custom_border_color_ext(ktl::api::device _device, const ktl::api::sampler_custom_border_color_create_info_ext * _p_border_color, ktl::api::bool32 _request_index, ktl::i32 * _p_index)
{
ktl::loader::proc_type ptr = &ptable[799];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_register_custom_border_color_ext)ptr)(_device, _p_border_color, _request_index, _p_index);
}

void unregister_custom_border_color_ext(ktl::api::device _device, ktl::i32 _index)
{
ktl::loader::proc_type ptr = &ptable[800];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_unregister_custom_border_color_ext)ptr)(_device, _index);
}

ktl::api::result get_image_opaque_capture_data_ext(ktl::api::device _device, ktl::i32 _image_count, const ktl::api::image * _p_images, ktl::api::host_address_range_ext * _p_datas)
{
ktl::loader::proc_type ptr = &ptable[801];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_image_opaque_capture_data_ext)ptr)(_device, _image_count, _p_images, _p_datas);
}

ktl::api::dvsize get_physical_device_descriptor_size_ext(ktl::api::physical_device _physical_device, ktl::api::descriptor_type _descriptor_type)
{
ktl::loader::proc_type ptr = &ptable[802];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_descriptor_size_ext)ptr)(_physical_device, _descriptor_type);
}

ktl::api::result get_tensor_opaque_capture_data_arm(ktl::api::device _device, ktl::i32 _tensor_count, const ktl::api::tensor_arm * _p_tensors, ktl::api::host_address_range_ext * _p_datas)
{
ktl::loader::proc_type ptr = &ptable[803];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_tensor_opaque_capture_data_arm)ptr)(_device, _tensor_count, _p_tensors, _p_datas);
}

void cmd_copy_memory_khr(ktl::api::command_buffer _command_buffer, const ktl::api::copy_device_memory_info_khr * _p_copy_memory_info)
{
ktl::loader::proc_type ptr = &ptable[804];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_memory_khr)ptr)(_command_buffer, _p_copy_memory_info);
}

void cmd_copy_memory_to_image_khr(ktl::api::command_buffer _command_buffer, const ktl::api::copy_device_memory_image_info_khr * _p_copy_memory_info)
{
ktl::loader::proc_type ptr = &ptable[805];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_memory_to_image_khr)ptr)(_command_buffer, _p_copy_memory_info);
}

void cmd_copy_image_to_memory_khr(ktl::api::command_buffer _command_buffer, const ktl::api::copy_device_memory_image_info_khr * _p_copy_memory_info)
{
ktl::loader::proc_type ptr = &ptable[806];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_image_to_memory_khr)ptr)(_command_buffer, _p_copy_memory_info);
}

void cmd_update_memory_khr(ktl::api::command_buffer _command_buffer, const ktl::api::device_address_range_khr * _p_dst_range, ktl::api::address_command_flags_khr _dst_flags, ktl::api::dvsize _data_size, const void * _p_data)
{
ktl::loader::proc_type ptr = &ptable[807];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_update_memory_khr)ptr)(_command_buffer, _p_dst_range, _dst_flags, _data_size, _p_data);
}

void cmd_fill_memory_khr(ktl::api::command_buffer _command_buffer, const ktl::api::device_address_range_khr * _p_dst_range, ktl::api::address_command_flags_khr _dst_flags, ktl::i32 _data)
{
ktl::loader::proc_type ptr = &ptable[808];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_fill_memory_khr)ptr)(_command_buffer, _p_dst_range, _dst_flags, _data);
}

void cmd_copy_query_pool_results_to_memory_khr(ktl::api::command_buffer _command_buffer, ktl::api::query_pool _query_pool, ktl::i32 _first_query, ktl::i32 _query_count, const ktl::api::strided_device_address_range_khr * _p_dst_range, ktl::api::address_command_flags_khr _dst_flags, ktl::api::query_result_flags _query_result_flags)
{
ktl::loader::proc_type ptr = &ptable[809];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_copy_query_pool_results_to_memory_khr)ptr)(_command_buffer, _query_pool, _first_query, _query_count, _p_dst_range, _dst_flags, _query_result_flags);
}

void cmd_begin_conditional_rendering2ext(ktl::api::command_buffer _command_buffer, const ktl::api::conditional_rendering_begin_info2ext * _p_conditional_rendering_begin)
{
ktl::loader::proc_type ptr = &ptable[810];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_conditional_rendering2ext)ptr)(_command_buffer, _p_conditional_rendering_begin);
}

void cmd_bind_transform_feedback_buffers2ext(ktl::api::command_buffer _command_buffer, ktl::i32 _first_binding, ktl::i32 _binding_count, const ktl::api::bind_transform_feedback_buffer2info_ext * _p_binding_infos)
{
ktl::loader::proc_type ptr = &ptable[811];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_transform_feedback_buffers2ext)ptr)(_command_buffer, _first_binding, _binding_count, _p_binding_infos);
}

void cmd_begin_transform_feedback2ext(ktl::api::command_buffer _command_buffer, ktl::i32 _first_counter_range, ktl::i32 _counter_range_count, const ktl::api::bind_transform_feedback_buffer2info_ext * _p_counter_infos)
{
ktl::loader::proc_type ptr = &ptable[812];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_begin_transform_feedback2ext)ptr)(_command_buffer, _first_counter_range, _counter_range_count, _p_counter_infos);
}

void cmd_end_transform_feedback2ext(ktl::api::command_buffer _command_buffer, ktl::i32 _first_counter_range, ktl::i32 _counter_range_count, const ktl::api::bind_transform_feedback_buffer2info_ext * _p_counter_infos)
{
ktl::loader::proc_type ptr = &ptable[813];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_end_transform_feedback2ext)ptr)(_command_buffer, _first_counter_range, _counter_range_count, _p_counter_infos);
}

void cmd_draw_indirect_byte_count2ext(ktl::api::command_buffer _command_buffer, ktl::i32 _instance_count, ktl::i32 _first_instance, const ktl::api::bind_transform_feedback_buffer2info_ext * _p_counter_info, ktl::i32 _counter_offset, ktl::i32 _vertex_stride)
{
ktl::loader::proc_type ptr = &ptable[814];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_indirect_byte_count2ext)ptr)(_command_buffer, _instance_count, _first_instance, _p_counter_info, _counter_offset, _vertex_stride);
}

void cmd_write_marker_to_memory_amd(ktl::api::command_buffer _command_buffer, const ktl::api::memory_marker_info_amd * _p_info)
{
ktl::loader::proc_type ptr = &ptable[815];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_write_marker_to_memory_amd)ptr)(_command_buffer, _p_info);
}

void cmd_bind_index_buffer3khr(ktl::api::command_buffer _command_buffer, const ktl::api::bind_index_buffer3info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[816];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_index_buffer3khr)ptr)(_command_buffer, _p_info);
}

void cmd_bind_vertex_buffers3khr(ktl::api::command_buffer _command_buffer, ktl::i32 _first_binding, ktl::i32 _binding_count, const ktl::api::bind_vertex_buffer3info_khr * _p_binding_infos)
{
ktl::loader::proc_type ptr = &ptable[817];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_bind_vertex_buffers3khr)ptr)(_command_buffer, _first_binding, _binding_count, _p_binding_infos);
}

void cmd_draw_indirect2khr(ktl::api::command_buffer _command_buffer, const ktl::api::draw_indirect2info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[818];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_indirect2khr)ptr)(_command_buffer, _p_info);
}

void cmd_draw_indexed_indirect2khr(ktl::api::command_buffer _command_buffer, const ktl::api::draw_indirect2info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[819];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_indexed_indirect2khr)ptr)(_command_buffer, _p_info);
}

void cmd_draw_indirect_count2khr(ktl::api::command_buffer _command_buffer, const ktl::api::draw_indirect_count2info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[820];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_indirect_count2khr)ptr)(_command_buffer, _p_info);
}

void cmd_draw_indexed_indirect_count2khr(ktl::api::command_buffer _command_buffer, const ktl::api::draw_indirect_count2info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[821];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_indexed_indirect_count2khr)ptr)(_command_buffer, _p_info);
}

void cmd_draw_mesh_tasks_indirect2ext(ktl::api::command_buffer _command_buffer, const ktl::api::draw_indirect2info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[822];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_mesh_tasks_indirect2ext)ptr)(_command_buffer, _p_info);
}

void cmd_draw_mesh_tasks_indirect_count2ext(ktl::api::command_buffer _command_buffer, const ktl::api::draw_indirect_count2info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[823];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_draw_mesh_tasks_indirect_count2ext)ptr)(_command_buffer, _p_info);
}

void cmd_dispatch_indirect2khr(ktl::api::command_buffer _command_buffer, const ktl::api::dispatch_indirect2info_khr * _p_info)
{
ktl::loader::proc_type ptr = &ptable[824];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_dispatch_indirect2khr)ptr)(_command_buffer, _p_info);
}

ktl::api::result create_acceleration_structure2khr(ktl::api::device _device, const ktl::api::acceleration_structure_create_info2khr * _p_create_info, const ktl::api::allocation_callbacks * _p_allocator, ktl::api::acceleration_structure_khr * _p_acceleration_structure)
{
ktl::loader::proc_type ptr = &ptable[825];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_create_acceleration_structure2khr)ptr)(_device, _p_create_info, _p_allocator, _p_acceleration_structure);
}

ktl::api::result get_physical_device_queue_family_data_graph_engine_operation_properties_arm(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, const ktl::api::queue_family_data_graph_properties_arm * _p_queue_family_data_graph_properties, ktl::api::base_out_structure * _p_properties)
{
ktl::loader::proc_type ptr = &ptable[826];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_queue_family_data_graph_engine_operation_properties_arm)ptr)(_physical_device, _queue_family_index, _p_queue_family_data_graph_properties, _p_properties);
}

void cmd_set_dispatch_parameters_arm(ktl::api::command_buffer _command_buffer, const ktl::api::dispatch_parameters_arm * _p_dispatch_parameters)
{
ktl::loader::proc_type ptr = &ptable[827];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_cmd_set_dispatch_parameters_arm)ptr)(_command_buffer, _p_dispatch_parameters);
}

ktl::api::result get_physical_device_queue_family_data_graph_optical_flow_image_formats_arm(ktl::api::physical_device _physical_device, ktl::i32 _queue_family_index, const ktl::api::queue_family_data_graph_properties_arm * _p_queue_family_data_graph_properties, const ktl::api::data_graph_optical_flow_image_format_info_arm * _p_optical_flow_image_format_info, ktl::i32 * _p_format_count, ktl::api::data_graph_optical_flow_image_format_properties_arm * _p_image_format_properties)
{
ktl::loader::proc_type ptr = &ptable[828];
if (ptr == ktl::loader::proc_null) [[unlikely]]
{
std::abort();
}
return ((pfn_get_physical_device_queue_family_data_graph_optical_flow_image_formats_arm)ptr)(_physical_device, _queue_family_index, _p_queue_family_data_graph_properties, _p_optical_flow_image_format_info, _p_format_count, _p_image_format_properties);
}

}

#endif
