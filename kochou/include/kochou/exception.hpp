#ifndef KOCHOU_EXCEPTION_HPP
#define KOCHOU_EXCEPTION_HPP

#include <source_location>
#include <stdexcept>
#include <ostream>
#include <format>

#include "unit.hpp"

namespace kochou
{
    struct exception final
        : std::runtime_error
    {
        explicit exception(const unit * const _unit, std::string_view _message = {})
            : unit_name_(_unit->unit_name_)
            , pointer_(reinterpret_cast< uintptr_t >(_unit))
            , message_(_message)
            , location_(std::source_location::current())
        {
            if (_message.empty())
            {
                message_ = "empty message";
            }
        }

        std::string unit_name;
        uintptr_t pointer;
        std::string message;
        std::source_location location;
    };

    std::ostream & operator<<(std::ostream & _out, const exception & _exception)
    {
        out << std::format(
            "KOCHOU - exception called by {}, {}\n",
            _exception.unit_name,
            _exception.pointer
        );

        out << std::format(
            "MESSAGE - {}\n",
            _exception.message
        );

        out << std::format(
            "BACKTRACE - {}({}:{}) `{}`\n",
            _exception.location.file_name(),
            _exception.location.line(),
            _exception.location.column(),
            _exception.location.function_name()
        );

        return out;
    }
}

#endif
