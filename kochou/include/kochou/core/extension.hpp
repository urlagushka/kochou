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

        std::string name;
        _type type;
        _target target;

        inline static extension from(std::string_view name)
        {
            auto get_type = [](std::string_view name) -> _type
            {
                std::string_view tmp = name.substr(3, 3);
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

            auto get_target = [](std::string_view name) -> _target
            {
                static const auto instance_set = vk::getInstanceExtensions();
                static const auto device_set = vk::getDeviceExtensions();

                if (instance_set.find(name) != instance_set.end())
                {
                    return _target::instance;
                }

                if (device_set.find(name) != device_set.end())
                {
                    return _target::device;
                }

                return _target::not_supported;
            };

            return {name, get_type(name), get_target(name)};
        }
    };
}

#endif
