#ifndef KOCHOU_CORE_EXTENSION_HPP
#define KOCHOU_CORE_EXTENSION_HPP

#include <stdexcept>

#include <vulkan/vulkan_extension_inspection.hpp>

namespace kochou::core
{
    struct extension
    {
        enum _type
        {
            khr,
            ext,
            not_supported
        };

        enum _target
        {
            instance,
            device,
            not_supported
        };

        enum _version
        {
            vk_api_version_1_0,
            vk_api_version_1_1,
            vk_api_version_1_2,
            vk_api_version_1_3,
            vk_api_version_1_4
        };

        std::string name;
        _type type;
        _target target;
        _version version;

        inline static extension from(std::string_view _name)
        {
            auto get_type = [](std::string_view name) -> _type
            {
                std::string_view tmp = _name.substr(3, 3);
                switch (tmp)
                {
                case "KHR":
                    return _type::khr;

                case "EXT":
                    return _type::ext;
                
                default:
                    return _type::not_supported;
                }
            };

            auto get_target = [](std::string_view _name) -> _target
            {
                static const auto instance_set = vk::getInstanceExtensions();
                static const auto device_set = vk::getDeviceExtensions();

                if (instance_set.find(_name) != instance_set.end())
                {
                    return _target::instance;
                }

                if (device_set.find(_name) != device_set.end())
                {
                    return _target::device;
                }

                return _target::not_supported;
            };

            return {_name, get_type(_name), get_target(_name)};
        }
    };

    using extension_set = std::set< extension >;
}

#endif
