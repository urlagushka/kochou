#ifndef KOCHOU_CORE_ARCHITECT_HPP
#define KOCHOU_CORE_ARCHITECT_HPP

namespace kochou::core
{
    struct conflict
    {
        enum severity
        {
            failure,
            warning,
        };

        auto component
        std::list< component > componentN
    };

    class scheme
    {
        std::vector< conflict > __conflicts;
    };

    template< typename T >
    struct architect
    {
        template< typename ... Args >
        static scheme make(Args ...&& args)
        {

        }
    };
}

/*


// установка параметров
auto scheme = architect< pipeline >::make({
    shader_stage | required
    scissor      | std::optional
    ...
    depth        | std::optional
    ...
});

// проверка корректности параметров
if (!scheme.is_possible())
{
    for (const auto & conflict : scheme.conflicts())
    {
        std::cout << conflict << std::endl;
    }
}

// сборка T
auto my_custom_pipeline = scheme.draw();

*/

#endif
