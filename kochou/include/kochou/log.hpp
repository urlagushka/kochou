#ifndef KOCHOU_LOG_HPP
#define KOCHOU_LOG_HPP

#include <concepts>
#include <format>
#include <iostream>
#include <source_location>
#include <string_view>

#include <ktl/type.hpp>

namespace kochou::log
{
enum class lvl_type : ktl::u8
{
    info    = 1,
    warning = 2,
    error   = 3,
    fatal   = 4,
    debug   = 5,
};
using tim_type = std::chrono::time_point< std::chrono::system_clock >;
using ctx_type = std::source_location;
using msg_type = std::string_view;

[[maybe_unused]] inline msg_type
format_log(const tim_type & _tim, const ctx_type & _ctx, const msg_type & _msg, const msg_type & _lvl)
{
    msg_type ctx_msg = std::format("");
    return std::format("[KOCHOU] {} {} {} {}", _lvl, _tim, ctx_msg, _msg);
}

[[maybe_unused]] inline consteval bool
exit_condition(lvl_type _lvl)
{
    return static_cast< ktl::u8 >(_lvl) > KOCHOU_LOG_LEVEL;
}

#ifdef KOCHOU_BUILD_DEBUG
[[maybe_unused]] inline void
debug(msg_type _msg, ctx_type _ctx = ctx_type::current())
{
    if constexpr (!exit_condition(lvl_type::debug))
    {
        std::cout << format_log(std::chrono::system_clock::now(), _ctx, _msg, "DEBUG") << std::endl;
    }
}

[[maybe_unused]] inline void
info(msg_type _msg, ctx_type _ctx = ctx_type::current())
{
    if constexpr (!exit_condition(lvl_type::info))
    {
        std::cout << format_log(std::chrono::system_clock::now(), _ctx, _msg, "INFO") << std::endl;
    }
}

[[maybe_unused]] inline void
warning(msg_type _msg, ctx_type _ctx = ctx_type::current())
{
    if constexpr (!exit_condition(lvl_type::warning))
    {
        std::cout << format_log(std::chrono::system_clock::now(), _ctx, _msg, "WARNING") << std::endl;
    }
}

[[maybe_unused]] inline void
error(msg_type _msg, ctx_type _ctx = ctx_type::current())
{
    if constexpr (!exit_condition(lvl_type::error))
    {
        std::cout << format_log(std::chrono::system_clock::now(), _ctx, _msg, "ERROR") << std::endl;
    }
}

[[maybe_unused]] inline void
fatal(msg_type _msg, ctx_type _ctx = ctx_type::current())
{
    if constexpr (!exit_condition(lvl_type::fatal))
    {
        std::cout << format_log(std::chrono::system_clock::now(), _ctx, _msg, "FATAL") << std::endl;
    }
}

#elifdef KOCHOU_BUILD_RELEASE
[[maybe_unused]] inline void
debug(msg_type, ctx_type)
{
}

[[maybe_unused]] inline void
info(msg_type, ctx_type)
{
}

[[maybe_unused]] inline void
warning(msg_type, ctx_type)
{
}

[[maybe_unused]] inline void
error(msg_type, ctx_type)
{
}

[[maybe_unused]] inline void
fatal(msg_type, ctx_type)
{
}

#else
static_assert(false && "kochou build mode unspecified!");
#endif
} // namespace kochou::log

#endif
