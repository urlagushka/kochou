def make_enum_cast_header_impl(enum) -> str:
    return f"    "


def fill_constants(file, constants: list, addf) -> None:
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
            f"    using parent = {handle.parent_str};\n"
            f"    using type   = {handle.opaque_str};\n"
                "    enum : std::underlying_type_t< ktl::api::object_type >\n"
                "    {\n"
            f"        object = static_cast< std::underlying_type_t< ktl::api::object_type > >(ktl::api::object_type::{handle.object_str})\n"
                "    };\n"
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


def make_funcs_header() -> None:
    pass


def make_extension_deps_header() -> None:
    pass


def make_feature_deps_header() -> None:
    pass
