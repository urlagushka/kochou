#ifndef KOCHOU_ERRC_HPP
#define KOCHOU_ERRC_HPP

#include <ostream>

namespace kochou
{
    enum class errc
    {
        unspecified,
        extension_not_provided,
        bad_vk_api_version
    };

    std::string errc_to_string(errc _errc)
    {
        static const std::unordered_map< errc, std::string > mapper = {
            {errc::unspecified, "unspecified"},
            {errc::extension_not_provided, "extension_not_provides"},
            {errc::bad_vk_api_version, "bad_vk_api_version"}
        };

        return mapper.at(_errc);
    }

    std::ostream & operator<<(std::ostream & _out, const errc & _errc)
    {
        return _out << errc_to_string(_errc);
    }
}

#endif
