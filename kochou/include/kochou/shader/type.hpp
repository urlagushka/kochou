#ifndef KOCHOU_ASSETS_SHADER_HPP
#define KOCHOU_ASSETS_SHADER_HPP

#include <filesystem>
#include <string>

namespace kochou
{
    enum class shader_type
    {
        task,
        mesh,
        frag
    };

    inline vk::ShaderStageFlagBits match_shader_bit(shader_type type)
    {
        switch (type)
        case shader_type::task:
            return vk::ShaderStageFlagBits::eTaskEXT;

        case shader_type::mesh:
            return vk::ShaderStageFlagBits::eMeshEXT;
            
        case shader_type::frag:
            return vk::ShaderStageFlagBits::eFragment;

        default:
            return 0;
    }
}

#endif
