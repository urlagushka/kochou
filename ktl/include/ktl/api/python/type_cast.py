DEFAULT_POSITIVE_TYPE = "ktl::u32"
DEFAULT_NEGATIVE_TYPE = "ktl::i32"

def is_exception(_type: str) -> bool:
    if _type == "Display":
        return True
    if _type == "VisualID":
        return True
    if _type == "Window":
        return True
    if _type == "RROutput":
        return True
    if _type == "wl_display":
        return True
    if _type == "wl_surface":
        return True
    if _type == "ubm_device":
        return True
    if _type == "ubm_surface":
        return True
    if _type == "HINSTANCE":
        return True
    if _type == "HWND":
        return True
    if _type == "HMONITOR":
        return True
    if _type == "HANDLE":
        return True
    if _type == "SECURITY_ATTRIBUTES":
        return True
    if _type == "DWORD":
        return True
    if _type == "LPCWSTR":
        return True
    if _type == "xcb_connection_t":
        return True
    if _type == "xcb_visualid_t":
        return True
    if _type == "xcb_window_t":
        return True
    if _type == "IDirectFB":
        return True
    if _type == "IDirectFBSurface":
        return True
    if _type == "zx_handle_t":
        return True
    if _type == "GgpStreamDescriptor":
        return True
    if _type == "GgpFrameToken":
        return True
    if _type == "_screen_context":
        return True
    if _type == "_screen_window":
        return True
    if _type == "_screen_buffer":
        return True
    if _type == "NvSciSyncAttrList":
        return True
    if _type == "NvSciSyncObj":
        return True
    if _type == "NvSciSyncFence":
        return True
    if _type == "NvSciBufAttrList":
        return True
    if _type == "NvSciBufObj":
        return True
    if _type == "OHNativeWindow":
        return True
    if _type == "OHBufferHandle":
        return True
    if _type == "OH_NativeBuffer":
        return True
    if _type == "CAMetalLayer":
        return True
    if _type == "MTLDevice_id":
        return True
    if _type == "MTLCommandQueue_id":
        return True
    if _type == "MTLBuffer_id":
        return True
    if _type == "MTLTexture_id":
        return True
    if _type == "MTLSharedEvent_id":
        return True
    if _type == "IOSurfaceRef":
        return True
    if _type == "ANativeWindow":
        return True
    if _type == "AHardwareBuffer":
        return True

    if _type == "int":
        return True
    if _type == "void":
        return True
    if _type == "char":
        return True
    if _type == "float":
        return True
    if _type == "double":
        return True

    return False


def cast_type(_type : str) -> str | None:
    if is_exception(_type):
        return _type

    if _type == "int8_t" or _type == "std::int8_t":
        return "ktl::i8"
    if _type == "int16_t" or _type == "std::int16_t":
        return "ktl::i16"
    if _type == "int32_t" or _type == "std::int32_t":
        return "ktl::i32"
    if _type == "int64_t" or _type == "std::int64_t":
        return "ktl::i64"

    if _type == "uint8_t" or _type == "std::uint8_t":
        return "ktl::u8"
    if _type == "uint16_t" or _type == "std::uint16_t":
        return "ktl::u16"
    if _type == "uint32_t" or _type == "std::uint32_t":
        return "ktl::i32"
    if _type == "uint64_t" or _type == "std::uint64_t":
        return "ktl::u64"

    if _type == "8":
        return "ktl::u8"
    if _type == "16":
        return "ktl::u16"
    if _type == "32":
        return "ktl::u32"
    if _type == "64":
        return "ktl::u64"
    if _type == "-8":
        return "ktl::i8"
    if _type == "-16":
        return "ktl::i16"
    if _type == "-32":
        return "ktl::i32"
    if _type == "-64":
        return "ktl::i64"

    if _type == "size_t":
        return "ktl::usize"

    if _type == "VkResult":
        return "ktl::api::result"
    if _type == "VkSampleMask":
        return "ktl::api::spmask"
    if _type == "VkBool32":
        return "ktl::api::bool32"
    if _type == "VkFlags":
        return "ktl::api::flag32"
    if _type == "VkFlags64":
        return "ktl::api::flag64"
    if _type == "VkDeviceSize":
        return "ktl::api::dvsize"
    if _type == "VkDeviceAddress":
        return "ktl::api::dvaddr"

    if _type == "PFN_vkInternalAllocationNotification":
        return "ktl::api::pfn_internal_allocation_notification"
    if _type == "PFN_vkInternalFreeNotification":
        return "ktl::api::pfn_internal_free_notification"
    if _type == "PFN_vkReallocationFunction":
        return "ktl::api::pfn_reallocation_function"
    if _type == "PFN_vkAllocationFunction":
        return "ktl::api::pfn_allocation_function"
    if _type == "PFN_vkFreeFunction":
        return "ktl::api::pfn_free_function"
    if _type == "PFN_vkVoidFunction":
        return "ktl::api::pfn_void_function"
    if _type == "PFN_vkDebugReportCallbackEXT":
        return "ktl::api::pfn_debug_report_callback_ext"
    if _type == "PFN_vkDebugUtilsMessengerCallbackEXT":
        return "ktl::api::pfn_debug_utils_messenger_callback_ext"
    if _type == "PFN_vkFaultCallbackFunction":
        return "ktl::api::pfn_fault_callback_function"
    if _type == "PFN_vkDeviceMemoryReportCallbackEXT":
        return "ktl::api::pfn_device_memory_report_callback_ext"
    if _type == "PFN_vkGetInstanceProcAddrLUNARG":
        return "ktl::api::pfn_get_instance_proc_addr_lunarg"

    return None
