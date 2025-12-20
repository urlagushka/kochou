#ifndef KOCHOU_LOG_HPP
#define KOCHOU_LOG_HPP

#include <source_location>
#include <string_view>
#include <iostream>
#include <format>

namespace kochou
{
    using src_ctx = std::source_location;

    enum class log_level
    {
        info,
        warning,
        error,
        fatal,
        debug
    };

    inline void log_info(std::string_view _msg, src_ctx _ctx = src_ctx::current());
    inline void log_warning(std::string_view _msg, src_ctx _ctx = src_ctx::current());
    inline void log_error(std::string_view _msg, src_ctx _ctx = src_ctx::current());
    inline void log_fatal(std::string_view _msg, src_ctx _ctx = src_ctx::current());
    inline void log_debug(std::string_view _msg, src_ctx _ctx = src_ctx::current());
}

void
kochou::log_info(std::string_view _msg, src_ctx _ctx)
{

}

void
kochou::log_warning(std::string_view _msg, src_ctx _ctx)
{

}

void
kochou::log_error(std::string_view _msg, src_ctx _ctx)
{

}

void
kochou::log_fatal(std::string_view _msg, src_ctx _ctx)
{

}

void
kochou::log_debug(std::string_view _msg, src_ctx _ctx)
{

}

#endif
