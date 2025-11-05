#ifndef KOCHOU_CORE_EXTENSION_HPP
#define KOCHOU_CORE_EXTENSION_HPP

#include <optional>
#include <set>

#include <kochou/result.hpp>
#include <kochou/errc.hpp>
#include <kochou/core/version.hpp>

namespace kochou::core
{
class extension final
{
    public:
        using result_type = result< extension, errc >;
        enum type
            : uint32_t
        {
            khr,
            ext,
            nv,
            amd,
            intel,
            arm,
            img,
            qcom,
            mvk,
            fuchsia,
            ggp,
            nn,
            google,
            valve,
            huawei,
            brcm,
            sec,
            mesa
        };

        enum target
            : uint32_t
        {
            instance,
            device
        };

        extension(std::string_view name);
        extension(const extension &) = default;
        extension(extension &&) = default;
        extension & operator=(const extension &) = default;
        extension & operator=(extension &&) = default;
        ~extension() = default;

        static result_type from(std::string_view _name);
        std::optional< errc > make();

        std::string_view view_name() const;
        type copy_type() const;
        target copy_target() const;
        vk_version copy_version() const;

    private:
        bool is_deprecated() const;
        result< type, errc > get_type() const;
        result< target, errc > get_target() const;
        result< vk_version, errc > get_version() const;

    private:
        std::string name_;
        type type_;
        target target_;
        vk_version version_;
};

using extension_set = std::set< extension >;
}

#endif
