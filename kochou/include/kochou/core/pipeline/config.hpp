#ifndef KOCHOU_CORE_PIPELINE_CONFIG_HPP
#define KOCHOU_CORE_PIPELINE_CONFIG_HPP

#include <cstdint>
#include <filesystem>

#include <ktl/flat_map.hpp>

namespace kochou::core
{
struct pipeline_tag;
struct pipeline_requirement;
struct pipeline_description;

using pipeline_hash = std::uint64_t;

// to context
/* key: pipeline_hash
   value: path to bin file
*/
ktl::flat_map< pipeline_hash, std::filesystem::path > pupupu;
} // namespace kochou::core

/*
что собственно происходит
мы на вход в рантайме получаем какой либо конфиг пайплайна (пока непонятно какой)
смотрим его хеш, если хеш есть в таблице контекста, то загружаем уже готовый бинарник
если нет, то компилируем пайплайн и сохраняем его на диск

ПРОБЛЕМА
всякие расширения типо mesh_shading нужно добавлять на этапе компиляции, а конфиг пайплайна
может быть создан скорее всего только в рантайме
*/

#endif
