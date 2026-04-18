HANDLE_META = """template < typename T >
struct handle_meta
{
    using parent = T::parent;
    using type   = T::type;
    enum : std::underlying_type_t< ktl::api::object_type >
    {
        object = 0
    };
};"""


FORMAT_META = """template < ktl::api::format FORMAT >
struct format_meta
{
};

template <>
struct format_meta< ktl::api::format::v_undefined >
{
    struct component final
    {
        ktl::u32 bits        = {};
        bool     has_plane   = {};
        ktl::u32 plane_index = {};
        bool     is_present  = {};
    };
    struct plane final
    {
        ktl::u32         width_divisor  = {};
        ktl::u32         height_divisor = {};
        ktl::api::format compatible     = {};
    };
};"""


ENUM_META = """"""


STRUCT_META = """"""


COMMAND_META = """template < ktl::u32 >
struct command_meta
{
    static constexpr ktl::api::version                    version;
    static constexpr std::array< ktl::api::extension, 0 > extensions;
    static constexpr bool                                 is_instance;
    static constexpr std::string_view                     raw_name;

    static constexpr bool conditionalrendering;
    static constexpr bool allow_no_queues;
    static constexpr ktl::u32 queues;
    static constexpr ktl::u32 renderpass;
    static constexpr ktl::u32 cmdbufferlevel;
    static constexpr ktl::u32 tasks;
};"""


FEATURE_META = """struct feature_dependency
{
    ktl::api::structure_type type;
    ktl::usize               offset;
};

template < ktl::api::feature >
struct feature_meta
{
    static constexpr ktl::api::version                    version;
    static constexpr std::array< feature_dependency, 0 >  features;
    static constexpr std::array< ktl::api::extension, 0 > extensions;
};"""


EXTENSION_META = """template < ktl::api::extension >
struct extension_meta
{
    static constexpr ktl::api::version                    version;
    static constexpr std::array< ktl::api::extension, 0 > extensions;
    static constexpr std::array< ktl::u32, 0 >            commands;
    static constexpr bool                                 is_promoted;
    static constexpr ktl::api::version                    promoted;
};"""
