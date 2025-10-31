```cpp
class wrapper : external< hold::shared/unique, wrapper > {};

// external provides static method make

wrapper::make(...) -> kochou::result< Tptr<wrapper>, kochou::errc >;
```
