#ifndef KOCHOU_CORE_LOADER_LINUX_HPP
#define KOCHOU_CORE_LOADER_LINUX_HPP

#include <mutex>

#include <ktl/errc.hpp>
#include <ktl/fixed_string.hpp>
#include <ktl/result.hpp>

#if defined(_WIN32)
#include <windows.h>

#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME "vulkan1.dll"
#define KOCHOU_LOADER_DYNAMIC_LIB_ERROR_SIZE 256

namespace
{
static std::mutex __loader_mutex;
}

namespace kochou::loader
{
using handle_type = HMODULE;
using proc_type   = FARPROC;
using load_fn     = HMODULE (*)(const char *);
using proc_fn     = FARPROC (*)(HMODULE, const char *);
using free_fn     = BOOL (*)(HMODULE);
} // namespace kochou::loader

#elif defined(__linux__) || defined(__APPLE__)
#include <dlfcn.h>

#if defined(__linux__)
#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME "libvulkan.so.1"
#define KOCHOU_LOADER_DYNAMIC_LIB_ERROR_SIZE 256
#else
#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME "libMoltenVK.dylib"
#define KOCHOU_LOADER_DYNAMIC_LIB_ERROR_SIZE 256
#endif

namespace
{
static std::mutex __loader_mutex;
}

namespace kochou::loader
{
using handle_type = void *;
using proc_type   = void *;
using error_type  = char *;

inline ktl::result< handle_type, ktl::fixed_string< KOCHOU_LOADER_DYNAMIC_LIB_ERROR_SIZE > >
load()
{
    std::lock_guard< std::mutex > lock(__loader_mutex);
    ::dlerror();

    handle_type ptr = ::dlopen(KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME, RTLD_NOW | RTLD_LOCAL);
    if (!ptr) [[unlikely]]
    {
        return ::dlerror();
    }
    return ptr;
}

inline ktl::result< proc_type, ktl::fixed_string< KOCHOU_LOADER_DYNAMIC_LIB_ERROR_SIZE > >
proc(handle_type _handle, const char * _name)
{
    std::lock_guard< std::mutex > lock(__loader_mutex);
    ::dlerror();

    proc_type ptr = ::dlsym(_handle, _name);
    if (!ptr) [[unlikely]]
    {
        return ::dlerror();
    }
    return ptr;
}

inline ktl::result< void *, ktl::fixed_string< KOCHOU_LOADER_DYNAMIC_LIB_ERROR_SIZE > >
free(handle_type _handle)
{
    std::lock_guard< std::mutex > lock(__loader_mutex);
    ::dlerror();

    int rc = ::dlclose(_handle);
    if (rc) [[unlikely]]
    {
        return ::dlerror();
    }
    return nullptr;
}
} // namespace kochou::loader
#endif
