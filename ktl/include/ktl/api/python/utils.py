from vk_types import VkStruct, VkStructField
from collections import defaultdict, deque


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
        return "stype"
    if name == "pNext":
        return "pnext"

    result = []
    for i, c in enumerate(name):
        if c.isupper() and i > 0 and not name[i-1].isupper() and not name[i-1].isdigit():
            result.append('_')
        result.append(c.lower())
    return ''.join(result)


def is_vulkan_video(name: str) -> bool: # vulkan-video is not supported now
    return "video" in name.lower() and "video_queue" not in name.lower()


def make_vulkan_value(_number: str, _offset: str) -> str:
    return str(1_000_000 + (int(_number) - 1) * 1000 + int(_offset))


_PRIMITIVES = frozenset({
    'int', 'uint', 'int8_t', 'uint8_t', 'int16_t', 'uint16_t',
    'int32_t', 'uint32_t', 'int64_t', 'uint64_t', 'size_t', 'ptrdiff_t',
    'void', 'bool', 'float', 'double', 'char', 'wchar_t', 'nullptr_t',
})


def _extract_type_name(tppe: str) -> str | None:
    """
    Извлекает базовое имя типа из «чистого» tppe (без *, const и т.д.).
    Примеры:
        'ktl::api::physical_device_limits' → 'physical_device_limits'
        'VkInstance' → 'VkInstance'
        'uint32_t' → None
    """
    if not tppe:
        return None
    
    tppe = tppe.strip()
    
    # Убираем префиксы пространства имён
    for prefix in ['const ', 'volatile ', 'struct ', 'class ', 'ktl::api::']:
        while tppe.startswith(prefix):
            tppe = tppe[len(prefix):]
    
    tppe = tppe.strip()
    if not tppe or tppe in _PRIMITIVES:
        return None
    
    # Если осталось ::, берём последнюю часть (базовое имя)
    if '::' in tppe:
        tppe = tppe.split('::')[-1]
    
    return tppe if tppe else None


def _get_dependencies(item: VkStruct) -> set[str]:
    """
    Собирает множество имён типов, от которых зависит item.
    Игнорирует:
    - примитивные типы
    - самоссылки через указатели (T* внутри T не требует полного определения)
    """
    deps = set()
    item_name = item.name

    # Зависимость от alias (using A = B требует, чтобы B был определён)
    if item.alias and isinstance(item.alias, str):
        if ref := _extract_type_name(item.alias):
            deps.add(ref)
    
    # Зависимости от полей
    for field in item.fields:
        if not isinstance(field, VkStructField) or not field.tppe:
            continue
        
        if ref := _extract_type_name(field.tppe):
            # ⚠️ Ключевое: если поле — указатель на САМ СЕБЯ, это не зависимость
            # (forward declaration достаточно для T*)
            if field.is_pointer and ref == item_name:
                continue
            deps.add(ref)
    
    return deps


def sort_by_dependencies(items: list[VkStruct]) -> list[VkStruct]:
    """
    Топологическая сортировка (алгоритм Кана).
    Типы, от которых зависят другие, будут идти раньше.
    """
    name_to_item: dict[str, VkStruct] = {it.name: it for it in items}
    in_degree: defaultdict[str, int] = defaultdict(int)
    graph: defaultdict[str, list[str]] = defaultdict(list)
    
    # Инициализируем in_degree для всех узлов
    for name in name_to_item:
        in_degree[name]  # создаёт запись со значением 0
    
    # Строим граф: edge A→B означает "B зависит от A"
    for item in items:
        deps = _get_dependencies(item)
        for dep in deps:
            if dep in name_to_item:  # только если тип есть в списке генерации
                graph[dep].append(item.name)
                in_degree[item.name] += 1
    
    # Алгоритм Кана: начинаем с узлов без входящих рёбер
    queue = deque([name for name in in_degree if in_degree[name] == 0])
    result: list[VkStruct] = []
    
    while queue:
        current = queue.popleft()
        result.append(name_to_item[current])
        
        for neighbor in graph[current]:
            in_degree[neighbor] -= 1
            if in_degree[neighbor] == 0:
                queue.append(neighbor)
    
    # Проверка на циклы
    if len(result) != len(items):
        processed = {it.name for it in result}
        remaining = [it.name for it in items if it.name not in processed]
        
        # Отладочный вывод зависимостей проблемных типов
        import sys
        print(f"\n=== UNRESOLVED: {remaining} ===", file=sys.stderr)
        for name in remaining:
            item = name_to_item[name]
            deps = _get_dependencies(item)
            print(f"{name} depends on: {deps}", file=sys.stderr)
            for f in item.fields:
                if isinstance(f, VkStructField):
                    print(f"  field: {f.name} : {f.tppe} (ptr={f.is_pointer})", file=sys.stderr)
        
        raise ValueError(f"Cyclic dependencies or unresolved types: {remaining}")
    
    return result
