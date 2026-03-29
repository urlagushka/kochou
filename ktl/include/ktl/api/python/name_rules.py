from utils import first_diff_index, c_name_to_cpp
from type_cast import cast_type

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


def make_underling_type(_src: str) -> str:
    return cast_type(_src)


def make_type(_src: str) -> str | None:
    if _src is None:
        return None
    return cast_type(_src)


def make_bitpos(src: str, underling_type: str) -> str | None:
    if src is None:
        return None
    if underling_type == "ktl::u32":
        return f"(1U << {src})"
    if underling_type == "ktl::u64":
        return f"(1ULL << {src})"
    return None # non valid for vulkan spec


def make_constant(src: str) -> str | None:
    if src is None or not src.startswith("VK_"):
        return None
    return "KTL_API" + src[2:]

def make_handle(src: str) -> str | None:
    pass
