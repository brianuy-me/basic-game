# Objectives
- [x] Create a working build

## Building - without preset
```powershell
# Visual Studio 18 2026 generator
cmake -B build -G "Visual Studio 18 2026" -A x64

# Ninja Multi-Config generator
cmake -B build -G "Ninja Multi-Config"

cmake --build build --config Debug --target app
```

## Building - with preset
```powershell
cmake --list-presets              # list presets
cmake --build --list-presets      # list build presets

# Visual Studio 18 2026 generator
cmake --preset vs2026
cmake --build --preset vs2026-debug
cmake --build --preset vs2026-release

# Ninja Multi-Config generator
cmake --preset ninja
cmake --build --preset ninja-debug
cmake --build --preset ninja-release
```