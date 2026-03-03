#ifndef KTL_LOG_HPP
#define KTL_LOG_HPP

#include <concepts>
#include <format>
#include <iostream>
#include <source_location>
#include <string_view>

#include <ktl/errc.hpp>
#include <ktl/flat_set.hpp>

namespace ktl
{
using log_tim_type = std::chrono::time_point< std::chrono::system_clock >;
using log_ctx_type = std::source_location;
using log_msg_type = std::string;
using log_lvl_type = ktl::err_level;
using log_err_type = ktl::errc;

struct log_data final
{
    log_tim_type tim;
    log_ctx_type ctx;
    log_msg_type msg;
    log_lvl_type lvl;
    log_err_type err;
};

constexpr std::string
format_log(const log_data &);

constexpr std::string
format_log(const log_tim_type &, const log_ctx_type &, const log_msg_type &, const log_lvl_type &,
           const log_err_type &);

void
log(std::string_view _msg, log_ctx_type _ctx = log_ctx_type::current());
} // namespace ktl

#endif
