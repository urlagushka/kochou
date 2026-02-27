def make_enum_cast_header_impl(enum) -> str:
    return f"    "


def make_constants_header(filename: str, constants: list) -> None:
    with open(filename, "w", encoding="utf-8") as f:
        f.write(
            "#ifndef KTL_CONSTANTS_HPP\n"
            "#define KTL_CONSTANTS_HPP\n\n"
            "#include <cstdint>\n\n")

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
            "#ifndef KTL_ENUMS_HPP\n"
            "#define KTL_ENUMS_HPP\n\n"
            "#include <cstdint>\n\n"
            "namespace ktl::api\n{\n")
        
        for enum in enums:
            f.write(f"    enum class {enum.name}\n")
            f.write(f"        : {enum.underling_type}\n")
            f.write("    {\n")

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
            "#endif\n")


def make_structs_header() -> None:
    pass


def make_funcs_header() -> None:
    pass


def make_extension_deps_header() -> None:
    pass


def make_feature_deps_header() -> None:
    pass
