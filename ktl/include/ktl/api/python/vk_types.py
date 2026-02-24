class VkConstant:
    name: str
    type: str
    value: str

    def __init__(self, name: str, type: str, value: str):
        self.name = name
        self.type = type
        self.value = value


class VkEnumField:
    name: str
    value: str
    is_deprecated: bool

    def __init__(self, name: str, value: str) -> None:
        self.name = name
        self.value = value
        self.alias = ""
        self.is_deprecated = False


class VkEnum:
    name: str
    fields: dict
    underling_type: str

    def __init__(self, name: str, fields: dict, underling_type: str) -> None:
        self.name = name
        self.fields = fields
        self.underling_type = underling_type
