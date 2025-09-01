#ifndef KOCHOU_API_SHADERS_TYPE_HPP
#define KOCHOU_API_SHADERS_TYPE_HPP

#include <filesystem>
#include <string>

namespace kochou
{
    using fs = std::filesystem;

    enum class shader_type // sh_type
    {
        task,
        mesh,
        frag
    };

    struct shader_load_info // sh_info
    {
        fs::path path;
        std::string entry;
        shader_type sh_type;
    };

    struct shader // sh
    {
        std::string entry;
        vk::ShaderStageFlagBits bits;
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
