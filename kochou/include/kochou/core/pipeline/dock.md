# pipelines

export pipeline from xml
import pipeline into xml

construct pipeline from modules
-> success - pipeline
-> failure - conflict
using ext_pipeline_feedback

sub modules:
    shaders          | required
    vertex           | if 2d | if not mesh
    assembly         | if 2d | if not mesh
    viewport         | +     | ?
    scissor          | +     | ?
    viewport_state   | +     | ?
    rasterization    | +     | ?
    multisample      | +     | ?
    color_blend      | +     | ?
    pipeline_layout  | +     | ?
    depth_stencil    | +     | ?
