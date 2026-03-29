def make_enum_cast_header_impl(enum) -> str:
    return f"    "


def make_constants_header(filename: str, constants: list) -> None:
    with open(filename, "w", encoding="utf-8") as f:
        f.write(
            "#ifndef KTL_API_CONSTANTS_HPP\n"
            "#define KTL_API_CONSTANTS_HPP\n\n"
            "#include <ktl/api/type.hpp>\n\n")

        before = 0
        after = 0
        for constant in constants:
            before = max(before, len(constant.type))
            after = max(after, len(constant.name))
        for constant in constants:
            # before_str = ' ' * (before - len(constant.type))
            after_str = ' ' * (after - len(constant.name))
            f.write(f"#define {constant.name}{after_str} {constant.value}\n")
        f.write("\n#endif\n")


def make_enums_header(filename: str, enums: list) -> None:
    with open(filename, "w", encoding="utf-8") as f:
        f.write(
            "#ifndef KTL_API_ENUMS_HPP\n"
            "#define KTL_API_ENUMS_HPP\n\n"
            "#include <ktl/api/type.hpp>\n\n"
            "namespace ktl::api\n{\n"
        )
        
        for enum in enums:
            f.write(
                f"    enum class {enum.name} : {enum.underling_type}\n"
                 "    {\n")

            offset_before = 0
            max_len = 0
            for field in enum.fields:
                if field.is_deprecated:
                    offset_before = len("[[deprecated]] ")
                max_len = max(max_len, len(field.name))

            for field in enum.fields:
                if field.is_deprecated:
                    f.write(f"        {field.name}{' ' * (max_len - len(field.name))} [[deprecated]] = {field.value}")
                else:
                    f.write(f"        {field.name}{' ' * offset_before}{' ' * (max_len - len(field.name))} = {field.value}")
                if field != enum.fields[-1]:
                    f.write(",")
                f.write("\n")
            f.write("    };\n\n")
        f.write(
            "}\n\n"
            "#endif\n"
        )


def make_handles_header(filename: str, handles: list) -> None:
    with open(filename, "w", encoding="utf-8") as f:
        f.write(
            "#ifndef KTL_API_HANDLES_HPP\n"
            "#define KTL_API_HANDLES_HPP\n\n"
            "#include <ktl/api/enums.hpp>\n"
            "#include <ktl/api/type.hpp>\n\n"
            "namespace ktl::api\n{\n"
        )

        for handle in handles:
            if handle.alias:
                f.write(f"using {handle.raw_name_str} = {handle.alias};\n\n")
                continue

            f.write(
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

        f.write(
            "}\n\n"
            "#endif\n"
        )


def make_structs_header(filename: str, structs: list) -> None:
    with open(filename, "w", encoding="utf-8") as f:
        f.write(
            "#ifndef KTL_API_STRUCTS_HPP\n"
            "#define KTL_API_STRUCTS_HPP\n\n"
            "#include <ktl/api/bitmasks.hpp>\n"
            "#include <ktl/api/enums.hpp>\n"
            "#include <ktl/api/handles.hpp>\n"
            "#include <ktl/api/type.hpp>\n\n"
            "namespace ktl::api\n{\n"
        )

        for struct in structs:
            if struct.alias:
                f.write(f"using {struct.name_str} = {struct.alias};\n\n")
                continue

            f.write(
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
                f.write(f"{act};\n")
            f.write("};\n\n")

        f.write(
            "}\n\n"
            "#endif\n"
        )


def make_bitmasks_header(filename: str, bitmasks: list) -> None:
    with open(filename, "w", encoding="utf-8") as f:
        f.write(
            "#ifndef KTL_API_BITMASKS_HPP\n"
            "#define KTL_API_BITMASKS_HPP\n\n"
            "#include <ktl/api/type.hpp>\n\n"
            "namespace ktl::api\n{\n"
        )

        for bitmask in bitmasks:
            f.write(f"using {bitmask.name_str} = {bitmask.type_str};\n")

        f.write(
            "\n}\n\n"
            "#endif\n"
        )

def make_funcs_header() -> None:
    pass


def make_extension_deps_header() -> None:
    pass


def make_feature_deps_header() -> None:
    pass
