def first_diff_index(s1: str, s2: str) -> int:
    min_len = min(len(s1), len(s2))
    for i in range(min_len):
        if s1[i] != s2[i]:
            return i
    if len(s1) != len(s2):
        return min_len
    return len(s1)


def c_name_to_cpp(name: str) -> str:
    if name == "sType":
        return "type"
    if name.startswith("p") and len(name) > 1 and name[1].isupper():
        name = name[1:]
    elif name.startswith("pp") and len(name) > 2 and name[2].isupper():
        name = name[2:]

    result = []
    for i, c in enumerate(name):
        if c.isupper() and i > 0 and not name[i-1].isupper():
            result.append('_')
        result.append(c.lower())
    return ''.join(result)
