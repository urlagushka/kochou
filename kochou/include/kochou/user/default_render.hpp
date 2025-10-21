#ifndef KOCHOU_USER_DEFFULT_RENDER_HPP
#define KOCHOU_USER_DEFAULT_RENDER_HPP

#include "kochou/api/render.hpp"

namespace kochou::user
{
    class default_render
        : api::render
    {
        default_render()
            : /* setup unit list */
            , /* or default_render = render(default_xml_config) ??? */
        {}
    };
}

#endif
