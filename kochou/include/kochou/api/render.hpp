#ifndef KOCHOU_API_RENDER_HPP
#define KOCHOU_API_RENDER_HPP

#include <kochou/core/ensure/ensure.hpp>
#include <kochou/core/external/external.hpp>
#include <kochou/ktl/memory.hpp>

/*
API LEVEL
draw:
    NO
    2D
    3D

modules:
    culling
    shadows
    fxgraph
    light

CORE LEVEL
by default:
    -> dynamic_rendering
    -> descriptor_indexing

by draw:
    NO     -> empty
    2D, 3D -> present queue

by modules:
    culling -> mesh_shading
    shadows -> ???
    fxgraph -> ???
*/

namespace kochou::api
{
    class render
        : kochou::core::external< kochou::core::hold::shared, render >
    {

    };
}

#endif
