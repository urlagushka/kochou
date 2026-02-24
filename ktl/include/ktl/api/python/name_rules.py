from utils import first_diff_index, c_name_to_cpp


def make_cpp_name(src: str) -> str | None:
    if src is None or not src.startswith("Vk"):
        return None
    return c_name_to_cpp(src[2:])


def make_field_name(src: str, cmp: str) -> str | None:
    if src is None or not src.startswith("VK_"):
        return None
    tmp = src.lower()[3:]
    if cmp is not None:
        tmp = tmp[first_diff_index(tmp, cmp):]
    if tmp.startswith('_'):
        tmp = tmp[1:]
    return f"v_{tmp}"


def make_underling_type(src: str) -> str:
    if src is None:
        return "std::uint32_t"
    return f"std::uint{src}_t"


def make_type(src: str) -> str | None:
    if src is None:
        return None
    if src.startswith("uint") or src.startswith("size_t"):
        return "std::" + src
    return src


def make_bitpos(src: str, underling_type: str) -> str | None:
    if src is None:
        return None
    if underling_type == "std::uint32_t":
        return f"(1U << {src})"
    if underling_type == "std::uint64_t":
        return f"(1ULL << {src})"
    return None # non valid for vulkan spec


def make_constant(src: str) -> str | None:
    if src is None or not src.startswith("VK_"):
        return None
    return "KTL_API" + src[2:]
