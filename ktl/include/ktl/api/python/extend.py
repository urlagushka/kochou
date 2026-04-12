

import xml.etree.ElementTree as ET
from typing import Dict, Optional

def get_extension_number(xml_root: ET.Element, enum_name: str) -> Optional[int]:
    """Находит номер расширения, в котором определён enum."""
    # Ищем <enum> по имени
    enum_elem = xml_root.find(f".//enum[@name='{enum_name}']")
    if enum_elem is None:
        return None
    
    # Поднимаемся к родительскому <extension> и берём number
    parent = enum_elem.find('..')
    while parent is not None and parent.tag != 'extension':
        parent = parent.find('..')
    
    if parent is not None and parent.tag == 'extension':
        num = parent.get('number')
        return int(num) if num else None
    return None

def compute_vk_object_type_value(enum_elem: ET.Element, xml_root: ET.Element) -> Optional[int]:
    """Вычисляет значение для VkObjectType с учётом extension number."""
    
    # 1. Прямое значение (ядро или предрассчитанное)
    if "value" in enum_elem.attrib:
        return int(enum_elem.get("value"), 0)
    
    # 2. Вычисление через offset + extension number
    if enum_elem.get("extends") == "VkObjectType" and "offset" in enum_elem.attrib:
        offset = int(enum_elem.get("offset"))
        enum_name = enum_elem.get("name")
        ext_num = get_extension_number(xml_root, enum_name)
        
        if ext_num is not None:
            return 1000000000 + (ext_num * 1000) + offset
    
    # 3. Alias — рекурсивное разрешение
    alias = enum_elem.get("alias")
    if alias:
        for elem in xml_root.findall(f".//enum[@name='{alias}']"):
            return compute_vk_object_type_value(elem, xml_root)
    
    return None

def get_all_vk_object_type_values(xml_path: str) -> Dict[str, int]:
    """Возвращает { 'VK_OBJECT_TYPE_...': numeric_value } для всех значений."""
    tree = ET.parse(xml_path)
    root = tree.getroot()
    result = {}
    
    # 1. Основной блок (ядро)
    enums_block = root.find(".//enums[@name='VkObjectType']")
    if enums_block is not None:
        for enum_elem in enums_block.findall("enum"):
            name = enum_elem.get("name")
            value = compute_vk_object_type_value(enum_elem, root)
            if name and value is not None:
                result[name] = value
                print(name, value)
    
    # 2. Расширения: <enum extends="VkObjectType">
    for enum_elem in root.findall(".//enum[@extends='VkObjectType']"):
        name = enum_elem.get("name")
        if name and name not in result:
            value = compute_vk_object_type_value(enum_elem, root)
            if value is not None:
                result[name] = value
                print(name, value)
    
    return result

def extend_object_type(enums, handles):
    pass