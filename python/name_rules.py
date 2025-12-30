from utils import first_diff_index, c_name_to_cpp


def make_cpp_name(src: str) -> str:
    if src is None or not src.startswith("Vk"):
        return None
    return c_name_to_cpp(src[2:])


def make_field_name(src: str, cmp: str) -> str:
    if src is None or not src.startswith("VK_"):
        return None
    tmp = src.lower()[3:]
    if cmp is None:
        return tmp
    tmp = tmp[first_diff_index(src, cmp):]
    if tmp.startswith('_'):
        tmp = tmp[1:]
    return 'i' + tmp


def make_underling_type(src: str) -> str:
    if src is None:
        return "uint32_t"
    return f"uint{src}_t"


def make_bitpos(src: str, underling_type: str) -> str:
    if src is None:
        return None
    if underling_type == "uint32_t":
        return f"(1U << {src})"
    if underling_type == "uint64_t":
        return f"(1ULL << {src})"
    return None # non valid for vulkan spec


def make_constant(src: str) -> str:
    if src is None or not src.startswith("VK_"):
        return None
    return "KOCHOU" + src[2:]
