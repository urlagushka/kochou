#ifndef KOCHOU_USER_DEFAULT_RENDER_HPP
#define KOCHOU_USER_DEFAULT_RENDER_HPP

#include <kochou/core/core.hpp>
#include <kochou/core/requirements/should.hpp>

namespace kochou::user
{
// compile time
class metadata_render : core::ensure< core::extension< "VK_EXT_mesh_shader" > >,
                        core::ensure< core::extension< "VK_KHR_dynamic_rendering" > >,
                        core::should< core::extension< "VK_MVK_something" > >,
                        core::ensure< core::version< core::vulkan_version::v1_3 > >
{
public:
    consteval metadata_render() = default;
};

// runtime
// bool can_use_metadata_render = kochou::core::allowed< metadata_render >();
} // namespace kochou::user

#endif
