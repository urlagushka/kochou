#ifndef KTL_API_LOADER_HPP
#define KTL_API_LOADER_HPP

#include <ktl/errc.hpp>
#include <ktl/fixed_string.hpp>
#include <ktl/result.hpp>

#if defined(KOCHOU_PLATFORM_WIN32)
#include <windows.h>

#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE 256

namespace
{
inline ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE >
__get_last_error()
{
    ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE > msg = {};
    DWORD                                                            rc  = GetLastError();
    if (!rc) [[unlikely]]
    {
        std::abort();
    }

    DWORD size =
        FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS, nullptr, rc,
                       MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), msg.data, static_cast< DWORD >(msg.size), nullptr);
    if (!size)
    {
        std::abort();
    }

    return msg;
}
} // namespace

namespace ktl::loader
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
} // namespace ktl::loader

#elif defined(KOCHOU_PLATFORM_MACOS) || defined(KOCHOU_PLATFORM_LINUX)
#include <dlfcn.h>

#if defined(KOCHOU_PLATFORM_LINUX)
#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE 256
#else
#define KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE 256
#endif

namespace
{
inline ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE >
__get_last_error()
{
    char * err = ::dlerror();
    if (!err) [[unlikely]]
    {
        std::abort();
    }

    return ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE >(err, ::strlen(err));
}
} // namespace

namespace ktl::loader
{
using handle_type                = void *;
using proc_type                  = void *;
static const proc_type proc_null = nullptr;

inline ktl::result< handle_type, ktl::fixed_string< KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_ERROR_SIZE > >
load()
{
    ::dlerror();

    handle_type ptr = ::dlopen(KOCHOU_LOADER_VULKAN_DYNAMIC_LIB_NAME, RTLD_NOW | RTLD_LOCAL);
    if (!ptr) [[unlikely]]
    {
        return ktl::err(__get_last_error());
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
        return ktl::err(__get_last_error());
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
        return ktl::err(__get_last_error());
    }
    return nullptr;
}
} // namespace ktl::loader
#endif
#endif
