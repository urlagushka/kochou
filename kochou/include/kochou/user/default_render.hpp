#ifndef KOCHOU_USER_DEFAULT_RENDER_HPP
#define KOCHOU_USER_DEFAULT_RENDER_HPP

#include <kochou/core/core.hpp>

namespace kochou::user
{
class metadata_render : core::ensure< core::extension< "VK_EXT_mesh_shader" > >,
                        core::ensure< core::extension< "VK_KHR_dynamic_rendering" > >,
                        core::ensure< core::version< core::vulkan_version::v1_3 > >
{
public:
    consteval metadata_render() = default;
};
} // namespace kochou::user

#endif
