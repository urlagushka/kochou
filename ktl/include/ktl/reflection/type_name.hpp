#ifndef KTL_REFLECTION_TYPE_NAME_HPP
#define KTL_REFLECTION_TYPE_NAME_HPP

#include <string_view>

namespace ktl::reflection
{
template < typename T >
consteval std::string_view
type_name()
{
    std::string_view name;
    std::string_view prefix;
    std::string_view suffix;

#ifdef __clang__
    name   = __PRETTY_FUNCTION__;
    prefix = "std::string_view ktl::reflection::type_name() [T = ";
    suffix = "]";
#elif defined(__GNUC__)
    name   = __PRETTY_FUNCTION__;
    prefix = "constexpr std::string_view ktl::reflection::type_name() [with T = ";
    suffix = "]";
#elif defined(_MSC_VER)
    name   = __FUNCSIG__;
    prefix = "std::string_view __cdecl ktl::reflection::type_name<";
    suffix = ">(void)";
#else
#error "unexpected compiler!"
#endif

    name.remove_prefix(prefix.size());
    name.remove_suffix(suffix.size());

    return name;
}
} // namespace ktl::reflection

#endif
