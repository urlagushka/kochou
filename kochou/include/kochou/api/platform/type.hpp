#ifndef KOCHOU_API_PLATFORM_TYPE_HPP
#define KOCHOU_API_PLATFORM_TYPE_HPP

namespace kochou::api
{
    enum class vk_api_version // apiv
        : uint32_t
    {
        v1_0 = VK_API_VERSION_1_0,
        v1_1 = VK_API_VERSION_1_1,
        v1_2 = VK_API_VERSION_1_2,
        v1_3 = VK_API_VERSION_1_3,
        v1_4 = VK_API_VERSION_1_4
    };

    enum class os_type
    {
        linux,
        macos,
        windows
    };
}

#endif
