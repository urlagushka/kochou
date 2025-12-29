#ifndef KOCHOU_LOADER_DRAFT_HPP
#define KOCHOU_LOADER_DRAFT_HPP

#include <type_traits>
#include <syncstream>
#include <concepts>
#include <ostream>
#include <string>

namespace kochou::loader
{
    // every vulkan struct
    struct application_info final
    {
        uint32_t     type = static_cast< uint32_t >(core::structure_type::application_info);
        const void * next = nullptr;
        const char * application_name;
        uint32_t     application_version;
        const char * engine_name;
        uint32_t     engine_version;
        uint32_t     api_version;
    };

    std::ostream & operator<<(std::ostream & out, const application_info & _application_info) noexcept
    {
        std::osyncstream synced_out(out);
        return synced_out
            << "kochou::core::application_info\n"
            << std::format("type: {}\n", core::enum_cast< core::structure_type >(_application_info.type))
            << std::format("next: {}\n", _application_info.next)
            << std::format("application_name: {}\n", _application_info.application_name)
            << std::format("application_version: {}\n", _application_info.application_version)
            << std::format("engine_name: {}\n", _application_info.engine_name)
            << std::format("engine_version: {}\n", _application_info.engine_version)
            << std::format("api_version: {}\n", _application_info.api_version);
    }

    template < >
    struct std::formatter< application_info >
        : std::formatter< std::string >
    {
        auto format(application_info _application_info, format_context & _format_context) const noexcept
        {
            return std::formatter< std::string >::format(
                std::format("
                    kochou::core::application_info\n
                    type: {}\n,
                    next: {}\n
                    application_name: {}\n
                    application_version: {}\n
                    engine_name: {}\n
                    engine_version: {}\n
                    api_version: {}\n",

                    core::enum_cast< core::structure_type >(_application_info.type),
                    _application_info.next,
                    _application_info.application_name,
                    _application_info.application_version,
                    _application_info.engine_name,
                    _application_info.engine_version,
                    _application_info.api_version
                ), _format_context);
        }
    };
}

namespace kochou::core
{
    enum class structure_type
        : ktl::mask_underlying_type // uint32_t
    {
        application_info = 0
        // ....          = 1
    };

    template< typename ENUM >
        requires std::is_enum_v< ENUM >
    struct enum_cast final
    {
        constexpr std::string operator()(ENUM _enum) noexcept
        {
            return "invalid_enum";
        }
    };

    template< >
    struct enum_cast< structure_type > final
    {
        constexpr std::string operator()(structure_type _structure_type) noexcept
        {
            constexpr ktl::flat_map< structure_type, std::string > enum_map = {
                {structure_type::application_info, "application_info"}
                // ....
            };

            if constexpr (enum_map.contains(_structure_type))
            {
                return enum_map.at(_structure_type);
            }
            return "invalid_value";
        }
    };
}

#endif
