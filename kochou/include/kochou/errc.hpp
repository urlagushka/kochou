#ifndef KOCHOU_ERRC_HPP
#define KOCHOU_ERRC_HPP

namespace kochou
{
    struct errc
    {
        enum _errc
        {
            unspecified,
            extension_not_provides,
            bad_vk_api_version
        };

        _errc code = _errc::unspecified;

        std::string to_string()
        {
            using errc_pair = std::pair< _errc, std::string >
            static constexpr std::vector< errc_pair > mapper = {
                {_errc::unspecified, "unspecified"},
                {_errc::extension_not_provides, "extension_not_provides"},
                {_errc::bad_vk_api_version, "bad_vk_api_version"}
            };

            return std::find(mapper.cbegin(), mapper.cend(), code)->second;
        }
    };
}

#endif
