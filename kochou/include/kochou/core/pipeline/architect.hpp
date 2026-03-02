#ifndef KOCHOU_CORE_ARCHITECT_HPP
#define KOCHOU_CORE_ARCHITECT_HPP

#include <ktl/errc.hpp>
#include <ktl/flat_set.hpp>
#include <ktl/result.hpp>

#include <kochou/core/ensure/ensure.hpp>
#include <kochou/core/ensure/extension.hpp>

namespace kochou::core
{
struct pipeline; // external ???

struct pipeline_builder final
{
    using result_type = ktl::result< kochou::core::pipeline, ktl::errc >;

    static result_type make(/* cpp config */) noexcept;
    static result_type make(/* xml config */) noexcept;
};

struct pipeline_builder_feedback final : core::ensure< core::extension< "VK_EXT_pipeline_creation_feedback" > >
{
    using result_type = ktl::result< kochou::core::pipeline, ktl::errc >;

    static result_type make(/* cpp config */) noexcept;
    static result_type make(/* xml config */) noexcept;
};
} // namespace kochou::core

#endif
