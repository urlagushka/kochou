#ifndef KOCHOU_EXCEPTION_HPP
#define KOCHOU_EXCEPTION_HPP

#include <source_location>
#include <stdexcept>
#include <ostream>
#include <format>

namespace kochou
{
    struct exception final
        : std::runtime_error
    {
        using trace = std::source_location;
        explicit exception(const void * const _unit, std::string_view _message = {}, trace _trace = trace::current())
            : std::runtime_error(std::string(_message))
            , pointer(reinterpret_cast< uintptr_t >(_unit))
            , message(_message)
            , backtrace(_trace)
        {
            if (_message.empty())
            {
                message = "empty message";
            }
        }

        uintptr_t pointer;
        std::string message;
        trace backtrace;
    };

    std::ostream & operator<<(std::ostream & _out, const exception & _exception)
    {
        _out << std::format(
            "KOCHOU - exception called by 0x{}\n",
            _exception.pointer
        );

        _out << std::format(
            "MESSAGE - {}\n",
            _exception.message
        );

        _out << std::format(
            "BACKTRACE - {}({}:{}) `{}`",
            _exception.backtrace.file_name(),
            _exception.backtrace.line(),
            _exception.backtrace.column(),
            _exception.backtrace.function_name()
        );

        return _out;
    }
}

#endif
