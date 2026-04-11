# kochou-registry

### deps:
* kochou
* ktl (includes in kochou)

### about:
```txt
kochou-registry is a public repo that contains officially approwed engine/renderer components
```

### common component tree:
```txt
components (dir)
-- kochou-component_XXX
    -- about.md
    -- spec.json
    -- layout.json
    -- src (dir, cpp)
    -- include (dir, hpp)
    -- modules (dir, cppm)
    -- xmake.lua
```

spec.json
```json
{
    "id": 0,
    "version": {
        "major": 0,
        "minor": 0,
        "patch": 0
    },
    "deps": [0, 1, 2],
    "author": "",
    "mail": "",
    "link": ""
}
```

layout.json
```json
{
    ???
}
```
