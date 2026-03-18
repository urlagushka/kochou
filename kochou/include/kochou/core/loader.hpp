#ifndef KOCHOU_CORE_LOADER_HPP
#define KOCHOU_CORE_LOADER_HPP

#include <iostream>
#include <mutex>

#include <ktl/errc.hpp>
#include <ktl/fixed_string.hpp>
#include <ktl/result.hpp>

#if defined(_WIN32)
#include <windows.h>

#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME "vulkan-1.dll"
#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE 256

namespace
{
ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE >
__get_last_error()
{
    ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE > msg = {};
    DWORD                                                            rc  = GetLastError();
    if (!rc) [[unlikely]]
    {
        return msg;
    }

    DWORD size =
        FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS, nullptr, rc,
                       MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), msg.data, static_cast< DWORD >(msg.size), nullptr);
    if (!size)
    {
        return "no error message!";
    }

    return msg;
}
} // namespace

namespace kochou::loader
{
using handle_type = HMODULE;
using proc_type   = FARPROC;

inline ktl::result< handle_type, ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE > >
load()
{
    SetLastError(0);

    handle_type ptr = LoadLibraryA(KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME);
    if (!ptr) [[unlikely]]
    {
        return __get_last_error();
    }
    return ptr;
}

inline ktl::result< proc_type, ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE > >
proc(handle_type _handle, const char * _name)
{
    SetLastError(0);

    proc_type ptr = GetProcAddress(_handle, _name);
    if (!ptr) [[unlikely]]
    {
        return __get_last_error();
    }
    return ptr;
}

inline ktl::result< void *, ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE > >
free(handle_type _handle)
{
    SetLastError(0);

    int rc = FreeLibrary(_handle);
    if (!rc) [[unlikely]]
    {
        return __get_last_error();
    }
    return nullptr;
}
} // namespace kochou::loader

#elif defined(__linux__) || defined(__APPLE__)
#include <dlfcn.h>

#if defined(__linux__)
#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME "libvulkan.so.1"
#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE 256
#else
#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME "libMoltenVK.dylib"
#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE 256
#endif

namespace kochou::loader
{
using handle_type = void *;
using proc_type   = void *;

inline ktl::result< handle_type, ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE > >
load()
{
    ::dlerror();

    handle_type ptr = ::dlopen(KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME, RTLD_NOW | RTLD_LOCAL);
    std::cout << ptr << std::endl;
    if (!ptr)
    {
        std::cout << "ptrerror" << std::endl;
    }
    if (!ptr) [[unlikely]]
    {
        char * err = ::dlerror();
        if (!err) [[unlikely]]
        {
            std::abort();
        }
        return err;
    }
    return ptr;
}

inline ktl::result< proc_type, ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE > >
proc(handle_type _handle, const char * _name)
{
    ::dlerror();

    proc_type ptr = ::dlsym(_handle, _name);
    if (!ptr) [[unlikely]]
    {
        char * err = ::dlerror();
        if (!err) [[unlikely]]
        {
            std::abort();
        }
        return err;
    }
    return ptr;
}

inline ktl::result< void *, ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE > >
free(handle_type _handle)
{
    ::dlerror();

    int rc = ::dlclose(_handle);
    if (rc) [[unlikely]]
    {
        char * err = ::dlerror();
        if (!err) [[unlikely]]
        {
            std::abort();
        }
        return err;
    }
    return nullptr;
}
} // namespace kochou::loader
#endif
#endif
