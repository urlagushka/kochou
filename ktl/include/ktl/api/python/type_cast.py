def cast_type(_type : str) -> str | None:
    if _type is None: # default value
        return "ktl::u32"

    if _type == "int8_t" or _type == "std::int8_t":
        return "ktl::i8"
    if _type == "int16_t" or _type == "std::int16_t":
        return "ktl::i16"
    if _type == "int32_t" or _type == "std::int32_t":
        return "ktl::i32"
    if _type == "int64_t" or _type == "std::int64_t":
        return "ktl::i64"

    if _type == "uint8_t" or _type == "std::uint8_t":
        return "ktl::u8"
    if _type == "uint16_t" or _type == "std::uint16_t":
        return "ktl::u16"
    if _type == "uint32_t" or _type == "std::uint32_t":
        return "ktl::i32"
    if _type == "uint64_t" or _type == "std::uint64_t":
        return "ktl::u64"

    if _type == "8":
        return "ktl::u8"
    if _type == "16":
        return "ktl::u16"
    if _type == "32":
        return "ktl::u32"
    if _type == "64":
        return "ktl::u64"

    if _type == "size_t":
        return "ktl::usize"

    if _type == "void":
        return "void"
    if _type == "char":
        return "char"
    if _type == "float":
        return "float"
    if _type == "double":
        return "double"

    if _type == "VkSampleMask":
        return "ktl::spmask"
    if _type == "VkBool32":
        return "ktl::bool32"
    if _type == "VkFlags":
        return "ktl::flag32"
    if _type == "VkFlags64":
        return "ktl::flag64"
    if _type == "VkDeviceSize":
        return "ktl::dvsize"
    if _type == "VkDeviceAddress":
        return "ktl::dvaddr"

    return None
