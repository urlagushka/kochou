#include <kochou/core/extension.hpp>

#include <vulkan/vulkan_extension_inspection.hpp>

kochou::core::extension::extension(std::string_view name)
    : name_(name)
{}

kochou::core::extension::result_type 
kochou::core::extension::from(std::string_view _name)
{
    extension tmp(_name);
    auto result = tmp.make();
    if (result.has_value())
    {
        return err{result.value()};
    }

    return ok{std::move(tmp)};
}

std::optional< kochou::errc >
kochou::core::extension::make()
{
    if (is_deprecated())
    {
        return errc::extension_is_deprecated;
    }

    auto type_result = get_type();
    if (type_result.is_err())
    {
        return type_result.take_err();
    }

    auto target_result = get_target();
    if (target_result.is_err())
    {
        return target_result.take_err();
    }

    type_ = type_result.take_ok();
    target_ = target_result.take_ok();

    return std::nullopt;
}

std::string_view
kochou::core::extension::view_name() const
{
    return name_;
}

kochou::core::extension::type
kochou::core::extension::copy_type() const
{
    return type_;
}

kochou::core::extension::target
kochou::core::extension::copy_target() const
{
    return target_;
}

kochou::core::vk_version
kochou::core::extension::copy_version() const
{
    return version_;
}

bool
kochou::core::extension::is_deprecated() const
{
    static const auto deprecated_map = vk::getDeprecatedExtensions();
    if (deprecated_map.contains(name_))
    {
        return true;
    }

    return false;
}

kochou::result< kochou::core::extension::type, kochou::errc >
kochou::core::extension::get_type() const
{
    if (name_.size() < 3)
    {
        return err{errc::extension_not_provided};
    }

    std::string prefix = name_.substr(3, name_.size() - 3);
    if (prefix.starts_with("KHR"))
    {
        return ok{type::khr};
    }
    if (prefix.starts_with("EXT"))
    {
        return ok{type::ext};
    }
    if (prefix.starts_with("NV"))
    {
        return ok{type::nv};
    }
    if (prefix.starts_with("AMD"))
    {
        return ok{type::amd};
    }
    if (prefix.starts_with("INTEL"))
    {
        return ok{type::intel};
    }
    if (prefix.starts_with("ARM"))
    {
        return ok{type::arm};
    }
    if (prefix.starts_with("IMG"))
    {
        return ok{type::img};
    }
    if (prefix.starts_with("QCOM"))
    {
        return ok{type::qcom};
    }
    if (prefix.starts_with("MVK"))
    {
        return ok{type::mvk};
    }
    if (prefix.starts_with("FUCHSIA"))
    {
        return ok{type::fuchsia};
    }
    if (prefix.starts_with("GGP"))
    {
        return ok{type::ggp};
    }
    if (prefix.starts_with("NN"))
    {
        return ok{type::nn};
    }
    if (prefix.starts_with("GOOGLE"))
    {
        return ok{type::google};
    }
    if (prefix.starts_with("VALVE"))
    {
        return ok{type::valve};
    }
    if (prefix.starts_with("HUAWEI"))
    {
        return ok{type::huawei};
    }
    if (prefix.starts_with("BRCM"))
    {
        return ok{type::brcm};
    }
    if (prefix.starts_with("SEC"))
    {
        return ok{type::sec};
    }
    if (prefix.starts_with("MESA"))
    {
        return ok{type::mesa};
    }

    return err{errc::extension_not_provided};
}

kochou::result< kochou::core::extension::target, kochou::errc >
kochou::core::extension::get_target() const
{
    static const auto instance_set = vk::getInstanceExtensions();
    static const auto device_set = vk::getDeviceExtensions();

    if (instance_set.contains(name_))
    {
        return ok{target::instance};
    }
    if (device_set.contains(name_))
    {
        return ok{target::device};
    }

    return err{errc::extension_not_provided};
}
