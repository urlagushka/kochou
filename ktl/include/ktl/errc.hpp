#ifndef KTL_ERRC_HPP
#define KTL_ERRC_HPP

#include <ostream>
#include <unordered_map>

#include <ktl/fixed_string.hpp>
#include <ktl/mask.hpp>

#define KTL_MAX_ERRC_NAME_SIZE 256

namespace ktl
{
enum class err_level
{
    debug   = 0,
    info    = 1,
    warning = 2,
    error   = 3,
    fatal   = 4
};

enum class errc
{
    // common
    success,
    unspecified,
    invalid_argument,
    out_of_range,
    no_memory,

    // vulkan api
    extension_wrong_value,
    extension_not_provides,
    extension_is_deprecated,

    feature_wrong_value,
    feature_not_provides,
    feature_is_deprecated,

    bad_vk_api_version,
    unknown_vk_api_version,

    queue_wrong_value,
    queue_not_provides,
    queue_not_dedicated,

    layer_wrong_value,
    layer_not_provides,

    vulkan_chain_duplicate,
};

inline constexpr void // ktl::fixed_string< KTL_MAX_ERRC_NAME_SIZE >
errc_to_string(errc _errc)
{
    /*
    constexpr ktl::flat_map< ktl::errc, ktl::fixed_string< KTL_MAX_ERRC_NAME_SIZE > > mapper = {
        {errc::unspecified, "unspecified"},
        {errc::extension_not_provided, "extension_not_provides"},
        {errc::extension_is_deprecated, "extension_is_deprecated"},
        {errc::bad_vk_api_version, "bad_vk_api_version"},
        {errc::unknown_vk_api_version, "unknown_vk_api_version"},
        {errc::queue_is_not_dedicated, "queue_is_not_dedicated"}};

    auto rc = mapper.at(_errc);
    if (rc.is_err())
    {
        return rc.take_err();
    }
    return rc.take_ok();
    */
    // return ktl::fixed_string< KTL_MAX_ERRC_NAME_SIZE >("draft");
}

inline std::ostream &
operator<<(std::ostream & _out, const errc & _errc)
{
    return _out; // << errc_to_string(_errc);
}
} // namespace ktl

#endif
