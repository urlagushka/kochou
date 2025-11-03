#ifndef KOCHOU_CORE_EXTENSION_HPP
#define KOCHOU_CORE_EXTENSION_HPP

#include <stdexcept>

#include <vulkan/vulkan_extension_inspection.hpp>

#include <kochou/result.hpp>
#include <kochou/errc.hpp>

namespace kochou::core
{
    struct extension
    {
        using result_type = result< extension, errc >;
        enum _type
        {
            khr,
            ext
        };

        enum _target
        {
            instance,
            device
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

        inline static result_type from(std::string_view _name)
        {
            auto get_type = [&]() -> result< _type, errc >
            {
                std::string_view prefix = _name.substr(3, 3);

                if (prefix == "KHR")
                {
                    return ok(_type::khr);
                }
                if (prefix == "EXT")
                {
                    return ok(_type::ext);
                }

                return err(errc::extension_not_provided);
            };

            auto get_target = [&]() -> result< _target, errc >
            {
                static const auto instance_set = vk::getInstanceExtensions();
                static const auto device_set = vk::getDeviceExtensions();
                const std::string str_name(_name);

                if (instance_set.contains(str_name))
                {
                    return ok(_target::instance);
                }
                if (device_set.contains(str_name))
                {
                    return ok(_target::device);
                }

                return err(errc::extension_not_provided);
            };

            auto type_result = get_type();
            if (type_result.is_err())
            {
                return err(type_result.take_err());
            }
            auto target_result = get_target();
            if (target_result.is_err())
            {
                return err(target_result.take_err());
            }
            return ok(extension{_name.data(), type_result.take_ok(), target_result.take_ok()});
        }
    };

    using extension_set = std::set< extension >;
}

#endif
