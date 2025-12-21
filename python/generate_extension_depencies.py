#!/usr/bin/env python3
import urllib.request
import xml.etree.ElementTree as ET
from pathlib import Path

VK_XML_URL = "https://raw.githubusercontent.com/KhronosGroup/Vulkan-Docs/main/xml/vk.xml"
OUTPUT_FILE = "vulkan_extension_requirements.hpp"

# Скачиваем vk.xml, если отсутствует
xml_path = Path("vk.xml")
if not xml_path.exists():
    print("Скачиваем vk.xml...")
    urllib.request.urlretrieve(VK_XML_URL, xml_path)

tree = ET.parse(xml_path)
root = tree.getroot()

# --- Вспомогательные функции ---
def vk_version_to_uint32(version_str):
    """Преобразует 'VK_VERSION_1_2' → VK_MAKE_API_VERSION(0, 1, 2, 0)"""
    if not version_str or not version_str.startswith("VK_VERSION_"):
        return None
    parts = version_str.replace("VK_VERSION_", "").split("_")
    major = int(parts[0])
    minor = int(parts[1]) if len(parts) > 1 else 0
    return f"VK_MAKE_API_VERSION(0, {major}, {minor}, 0)"

def get_all_transitive_deps(ext_name, direct_deps, all_exts):
    """Рекурсивно собирает все зависимости, избегая циклов"""
    visited = set()
    result = set()

    def dfs(name):
        if name in visited:
            return
        visited.add(name)
        if name in all_exts:
            result.add(name)
            for dep in all_exts[name]["required_extensions"]:
                dfs(dep)

    for dep in direct_deps:
        dfs(dep)
    return result

# --- Сбор данных ---
extensions = {}

for ext_elem in root.findall("extensions/extension"):
    name = ext_elem.get("name")
    if not name:
        continue

    ext_type = ext_elem.get("type", "device")
    protect = ext_elem.get("protect")
    promoted_to = None
    required_api = None

    promoted_elem = ext_elem.find("promotedto")
    if promoted_elem is not None and promoted_elem.text:
        ver = promoted_elem.text.strip()
        if ver.startswith("VK_VERSION_"):
            promoted_to = ver

    for req in ext_elem.findall("require"):
        feature_attr = req.get("feature")
        if feature_attr and feature_attr.startswith("VK_VERSION_"):
            required_api = feature_attr
            break

    # === Главное: depends ===
    required_exts = set()
    depends = ext_elem.get("depends", "").strip()
    if depends:
        # Удаляем скобки и делим по " and "
        clean = depends.replace("(", "").replace(")", "")
        parts = clean.split(" and ")
        for part in parts:
            part = part.strip()
            if " or " in part:
                part = part.split(" or ")[0].strip()  # берем первый вариант
            if part and part != name and not part.startswith("VK_VERSION_"):
                required_exts.add(part)

    extensions[name] = {
        "name": name,
        "type": ext_type,
        "protect": protect,
        "required_extensions": required_exts,
        "required_api_version": required_api,
        "promoted_to_core": promoted_to,
    }

# --- Вычисление транзитивных зависимостей ---
for name in extensions:
    direct = extensions[name]["required_extensions"]
    transitive = get_all_transitive_deps(name, direct, extensions)
    extensions[name]["transitive_extensions"] = transitive

# --- Подготовка данных для генерации ---
all_extension_names = sorted(extensions.keys())
all_dep_names = sorted({dep for ext in extensions.values() for dep in ext["transitive_extensions"]})
dep_to_index = {name: i for i, name in enumerate(all_dep_names)}

# --- Генерация C++23 ---
with open(OUTPUT_FILE, "w", encoding="utf-8") as f:
    f.write(R'''#pragma once

#include <vulkan/vulkan_core.h>
#include <span>
#include <cstddef>

struct extension_requirements final
{
    enum target
    {
        instance,
        device
    };

    uint32_t required_api_version;
    const char* promoted_to_core;
    std::span< const char * > required_extensions;
    const char * platform_protect;
    target extension_target;
};

''')

    # Массив имён всех расширений (для поиска по имени)
    f.write("namespace {\n")
    f.write("constexpr const char* all_extension_names[] = {\n")
    for name in all_extension_names:
        f.write(f'    "{name}",\n')
    f.write("};\n\n")

    # Массив всех транзитивных зависимостей (глобальный пул строк)
    if all_dep_names:
        f.write("constexpr const char* all_dependency_names[] = {\n")
        for name in all_dep_names:
            f.write(f'    "{name}",\n')
        f.write("};\n\n")
    else:
        f.write("constexpr const char* all_dependency_names[] = {};\n\n")

    # Массив описаний
    f.write("constexpr extension_requirements all_requirements[] = {\n")
    for name in all_extension_names:
        info = extensions[name]
        req_api = vk_version_to_uint32(info["required_api_version"]) or "0"
        promoted = f'"{info["promoted_to_core"]}"' if info["promoted_to_core"] else "nullptr"
        target = "extension_requirements::instance" if info["type"] == "instance" else "extension_requirements::device"
        platform = f'"{info["protect"]}"' if info["protect"] else "nullptr"

        transitive = info["transitive_extensions"]
        if transitive:
            indices = sorted(dep_to_index[dep] for dep in transitive)
            first = indices[0]
            count = len(indices)
            span_str = f"std::span{{all_dependency_names + {first}, {count}}}"
        else:
            span_str = "std::span<const char*>{})"

        f.write(f"    {{ // {name}\n")
        f.write(f"        .required_api_version = {req_api},\n")
        f.write(f"        .promoted_to_core = {promoted},\n")
        f.write(f"        .required_extensions = {span_str},\n")
        f.write(f"        .platform_protect = {platform},\n")
        f.write(f"        .extension_target = {target}\n")
        f.write(f"    }},\n")
    f.write("};\n")
    f.write("} // anonymous namespace\n\n")

    # Функция поиска
    f.write(R'''constexpr extension_requirements get_extension_requirements(const char * extension_name) {
    for (size_t i = 0; i < sizeof(all_extension_names) / sizeof(all_extension_names[0]); ++i) {
        if (all_extension_names[i] == nullptr) continue;
        // compare C strings
        const char* p1 = extension_name;
        const char* p2 = all_extension_names[i];
        while (*p1 && *p2 && *p1 == *p2) {
            ++p1;
            ++p2;
        }
        if (*p1 == '\0' && *p2 == '\0') {
            return all_requirements[i];
        }
    }
    // Unknown extension: return empty requirements
    return extension_requirements{
        .required_api_version = 0,
        .promoted_to_core = nullptr,
        .required_extensions = std::span<const char*>{},
        .platform_protect = nullptr,
        .extension_target = extension_requirements::device
    };
}
''')

print(f"✅ Сгенерировано: {OUTPUT_FILE}")
print(f"   Расширений: {len(all_extension_names)}")
print(f"   Уникальных транзитивных зависимостей: {len(all_dep_names)}")