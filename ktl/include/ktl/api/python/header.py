def make_enum_cast_header_impl(enum) -> str:
    return f"    "


def fill_constants(file, constants: list, addf: str) -> None:
    for constant in constants:
        file.write(f"#define {constant.name} {constant.value}\n")
    file.write(addf)


def fill_enums(file, enums: list) -> None:    
    for enum in enums:
        file.write(
            f"enum class {enum.name} : {enum.underling_type}\n"
            "{\n"
        )

        valid_fields = list(dict.fromkeys(sorted(enum.fields, key=lambda f: f.is_alias)))
        for field in valid_fields:
            if field.is_deprecated:
                file.write(f"{field.name} [[deprecated]] = {field.value}")
            else:
                file.write(f"{field.name} = {field.value}")
            if field != valid_fields[-1]:
                file.write(",")
            file.write("\n")
        file.write("};\n\n")


def fill_aliased_enums(file, enums: list) -> None:
    for enum in enums:
        file.write(f"using {enum.name} = {enum.alias};\n")
    file.write("\n")


def fill_handles(file, handles: list) -> None:
    for handle in handles:
        if handle.alias:
            file.write(f"using {handle.raw_name_str} = {handle.alias};\n\n")
            continue

        file.write(
            f"struct {handle.opaque_str};\n"
            f"using {handle.pointer_str} = {handle.opaque_str} *;\n"
            "template <>\n"
            f"struct ptr_meta< {handle.pointer_str} > final\n"
            "{\n"
            f"using parent = {handle.parent_str};\n"
            f"using type   = {handle.opaque_str};\n"
            "enum : std::underlying_type_t< ktl::api::object_type >\n"
            "{\n"
            f"object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::{handle.object_str})\n"
            "};\n"
            "};\n\n"
        )


def fill_structs(file, structs: list) -> None:
    for struct in structs:
        if struct.alias:
            file.write(f"using {struct.name_str} = {struct.alias};\n\n")
            continue

        file.write(
            f"struct {struct.name_str} final\n"
            "{\n"
        )
        for field in struct.fields:
            act = ""
            if field.is_const:
                act += "const "
            act += f"{field.type_str} "
            if field.is_pointer:
                act += "* "
            act += field.name_str

            if field.default_value:
                act += f" = {field.default_value}"
            file.write(f"{act};\n")
        file.write("};\n\n")


def fill_bitmasks(file, bitmasks: list) -> None:
    for bitmask in bitmasks:
        file.write(f"using {bitmask.name_str} = {bitmask.type_str};\n")


def fill_unions(file, unions: list) -> None:
    for union in unions:
        file.write(
            f"union {union.name_str}\n"
             "{\n"
        )
        for field in union.fields:
            file.write(f"    {field.type_str} {field.name_str};\n")
        file.write("};\n\n")


"""
template < ktl::api::format FORMAT >
struct format_meta
{
    struct component final
    {
        static constexpr ktl::u32 bits        = {};
        static constexpr ktl::u32 plane_index = {};
        static constexpr bool     has_plane   = {};
        static constexpr bool     is_present  = {};
    };
    struct plane final
    {
        static constexpr ktl::u32         width_divisor  = {};
        static constexpr ktl::u32         height_divisor = {};
        static constexpr ktl::api::format compatible     = {};
    };

    static constexpr ktl::u32 block_size       = {};
    static constexpr ktl::u32 texels_per_block = {};
    static constexpr ktl::u32 packed           = {};
    static constexpr ktl::u32 chroma           = {};
    static constexpr ktl::u32 block_width      = {};
    static constexpr ktl::u32 block_height     = {};
    static constexpr ktl::u32 block_depth      = {};
    static constexpr bool     is_3d            = {};
    static constexpr bool     is_compressed    = {};

    static constexpr component              r             = {};
    static constexpr component              g             = {};
    static constexpr component              b             = {};
    static constexpr component              a             = {};
    static constexpr ktl::u32               planes_amount = {};
    static constexpr std::array< plane, 3 > planes        = {};
};
"""
def fill_formats(file, formats: list) -> None:
    file.write(
        "template < ktl::api::format FORMAT >\n"
        "struct format_meta\n"
        "{\n"
        "struct component final\n"
        "{\n"
        "ktl::u32 bits        = {};\n"
        "bool     has_plane   = {};\n"
        "ktl::u32 plane_index = {};\n"
        "bool     is_present  = {};\n"
        "};\n"
        "struct plane final\n"
        "{\n"
        "ktl::u32         width_divisor  = {};\n"
        "ktl::u32         height_divisor = {};\n"
        "ktl::api::format compatible     = {};\n"
        "};\n"
        "\n"
        "static constexpr ktl::u32 block_size       = {};\n"
        "static constexpr ktl::u32 texels_per_block = {};\n"
        "static constexpr ktl::u32 packed           = {};\n"
        "static constexpr ktl::u32 chroma           = {};\n"
        "static constexpr ktl::u32 block_width      = {};\n"
        "static constexpr ktl::u32 block_height     = {};\n"
        "static constexpr ktl::u32 block_depth      = {};\n"
        "static constexpr bool     is_3d            = {};\n"
        "static constexpr bool     is_compressed    = {};\n"
        "\n"
        "static constexpr component              r             = {};\n"
        "static constexpr component              g             = {};\n"
        "static constexpr component              b             = {};\n"
        "static constexpr component              a             = {};\n"
        "static constexpr ktl::u32               planes_amount = {};\n"
        "static constexpr std::array< plane, 3 > planes        = {};\n"
        "};\n"
        "\n"
        "template <>\n"
        "struct format_meta< ktl::api::format::v_undefined >\n"
        "{\n"
        "struct component final\n"
        "{\n"
        "ktl::u32 bits        = {};\n"
        "bool     has_plane   = {};\n"
        "ktl::u32 plane_index = {};\n"
        "bool     is_present  = {};\n"
        "};\n"
        "struct plane final\n"
        "{\n"
        "ktl::u32         width_divisor  = {};\n"
        "ktl::u32         height_divisor = {};\n"
        "ktl::api::format compatible     = {};\n"
        "};\n"
        "\n"
        "static constexpr ktl::u32 block_size       = {};\n"
        "static constexpr ktl::u32 texels_per_block = {};\n"
        "static constexpr ktl::u32 packed           = {};\n"
        "static constexpr ktl::u32 chroma           = {};\n"
        "static constexpr ktl::u32 block_width      = {};\n"
        "static constexpr ktl::u32 block_height     = {};\n"
        "static constexpr ktl::u32 block_depth      = {};\n"
        "static constexpr bool     is_3d            = {};\n"
        "static constexpr bool     is_compressed    = {};\n"
        "\n"
        "static constexpr component              r             = {};\n"
        "static constexpr component              g             = {};\n"
        "static constexpr component              b             = {};\n"
        "static constexpr component              a             = {};\n"
        "static constexpr ktl::u32               planes_amount = {};\n"
        "static constexpr std::array< plane, 3 > planes        = {};\n"
        "};\n"
        "\n"
    )
    for format in formats:
        file.write(
            "template < >\n"
            f"struct format_meta< {format.name}\n>"
            "{\n"
            "using component = ktl::api::format_meta< ktl::api::format::v_undefined >::component;\n"
            "using plane = ktl::api::format_meta< ktl::api::format::v_undefined >::plane;\n"
            "\n"
            f"static constexpr ktl::u32 block_size = {format.block_size};\n"
            f"static constexpr ktl::u32 texels_per_block = {format.texels_per_block};\n"
            f"static constexpr ktl::u32 packed = {format.packed};\n"
            f"static constexpr ktl::u32 chroma = {format.chroma};\n"
            f"static constexpr ktl::u32 block_width = {format.block_width};\n"
            f"static constexpr ktl::u32 block_height = {format.block_height};\n"
            f"static constexpr ktl::u32 block_depth = {format.block_depth};\n"
            f"static constexpr bool is_3d = {format.is_3d};\n"
            f"static constexpr bool is_compressed = {format.is_compressed};\n"
            "static constexpr component r = {"
            f"{format.r.bits},\n"
            f"{format.r.has_plane},\n"
            f"{format.r.plane_index},\n"
            f"{format.r.is_present}\n"
            "};\n"
            "static constexpr component g = {"
            f"{format.g.bits},\n"
            f"{format.g.has_plane},\n"
            f"{format.g.plane_index},\n"
            f"{format.g.is_present}\n"
            "};\n"
            "static constexpr component b = {"
            f"{format.b.bits},\n"
            f"{format.b.has_plane},\n"
            f"{format.b.plane_index},\n"
            f"{format.b.is_present}\n"
            "};\n"
            "static constexpr component a = {"
            f"{format.a.bits},\n"
            f"{format.a.has_plane},\n"
            f"{format.a.plane_index},\n"
            f"{format.a.is_present}\n"
            "};\n"
            f"static constexpr ktl::u32 planes_amount = {format.planes_amount};\n"
            "static constexpr std::array< plane, 3 > planes = {\n"
            "plane{\n"
            f"{format.planes[0].width_divisor},\n"
            f"{format.planes[0].height_divisor},\n"
            f"{format.planes[0].compatible}\n"
            "},\n"
            "plane{\n"
            f"{format.planes[1].width_divisor},\n"
            f"{format.planes[1].height_divisor},\n"
            f"{format.planes[1].compatible}\n"
            "},\n"
            "plane{\n"
            f"{format.planes[2].width_divisor},\n"
            f"{format.planes[2].height_divisor},\n"
            f"{format.planes[2].compatible}\n"
            "}\n"
            "};\n"
            "};\n"
            "\n"
        )


def make_funcs_header() -> None:
    pass


def make_extension_deps_header() -> None:
    pass


def make_feature_deps_header() -> None:
    pass
