# pipelines

export pipeline from xml
import pipeline into xml

construct pipeline from modules
-> success - pipeline
-> failure - conflict
using ext_pipeline_feedback

static_pipeline
dynamic_pipeline

sub modules:
    shaders          | required
    vertex           | if 2d |
    assembly         | if 2d |
    viewport         | +     | allow dynamic
    scissor          | +     | allow dynamic
    viewport_state   | +     | allow dynamic
    rasterization    | +     | ?
    multisample      | +     | ?
    color_blend      | +     | ?
    pipeline_layout  | +     | ?
    depth_stencil    | +     | ?
