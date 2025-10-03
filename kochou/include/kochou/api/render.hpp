#ifndef KOCHOU_RENDER_HPP
#define KOCHOU_RENDER_HPP

#include "kochou/utils/ensure.hpp"
#include "kochou/utils/external.hpp"
#include "kochou/utils/memory.hpp"
#include "kochou/utils/yaml.hpp"

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

namespace kochou
{
    class render final // final?
        : external< hold::shared >
    {

    };


}

#endif
