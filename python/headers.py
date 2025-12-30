def make_constants_header(filename: str, constants: list) -> None:
    with open(filename, "w+", encoding="utf-8") as f:
        f.write(
"#ifndef KOCHOU_CORE_CONSTANTS_HPP\n"
"#define KOCHOU_CORE_CONSTANTS_HPP\n\n"
"#include <cstdint>\n\n"
"namespace kochou::core\n{\n"
)
        before = 0
        after = 0
        for constant in constants:
            before = max(before, len(constant.type))
            after = max(after, len(constant.name))
        for constant in constants:
            before_str = ' ' * (before - len(constant.type))
            after_str = ' ' * (after - len(constant.name))
            f.write(f"    {constant.type}{before_str} {constant.name}{after_str} = {constant.value};\n")
        f.write(
"}\n\n"
"#endif\n"
)

def make_enums_header() -> None:
    pass


def make_structs_header() -> None:
    pass


def make_funcs_header() -> None:
    pass


def make_extension_deps_header() -> None:
    pass


def make_feature_deps_header() -> None:
    pass
