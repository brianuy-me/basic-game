# Basic game for learning purpose

## Objectives
- Learn CMakeLists.txt syntax
- Learn CMakePresets.txt syntax
- Learn .vscode\launch.json syntax
- Learn .vscode\settings.json syntax

## CMake build

#### CMakeList.txt
```cmake
cmake_minimum_required(VERSION 3.21...4.4) # version range
project(myProj VERSION 1.0.0 LANGUAGES CXX) # project name, version, and language

# Language standard - the equivalent of /std:c++17
set(CMAKE_CXX_STANDARD 17) # set the C++ standard to C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON) # require the standard to be set, error out if not supported
set(CMAKE_CXX_EXTENSIONS OFF) # /std:c++17, not the vendor dialect

# One executable, built from one source file
file(GLOB_RECURSE HEADERS "include/*.h" "include/*.hpp")
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(myProj ${SOURCES} ${HEADERS}) # .hpp are not compiled, listed so it shows in the VS solution

# The /I flag is used to specify include directories for the compiler
target_include_directories(myProj PRIVATE include)

# Warning and conformance flags (for MSVC only, conditional)
target_compile_options(myProj PRIVATE $<$<CXX_COMPILER_ID:MSVC>:/W4 /permissive- /utf-8>)
```
#### CMakePresets.json
```json
{
    "version": 3,
    "cmakeMinimumRequired": { "major": 3, "minor": 21, "patch": 0 },
    "configurePresets": [
        {
            "name": "vs2026",
            "displayName": "Visual Studio 2026 (x64)",
            "architecture": "x64",
            "binaryDir": "${sourceDir}/build/${presetName}",
            "generator": "Visual Studio 18 2026"
        },
    ],
    "buildPresets": [
        { "name": "vs2026-debug",   "configurePreset": "vs2026", "configuration": "Debug" },
        { "name": "vs2026-release", "configurePreset": "vs2026", "configuration": "Release" }
    ]
}
```
---
#### Build - without preset
```powershell
cmake -B build -S . -G "Visual Studio 18 2026" -A x64 # configure — once
cmake --build build --config Debug # build — every time
```
#### Building - with preset
```powershell
cmake --list-presets              # list presets
cmake --build --list-presets      # list build presets

cmake --preset vs2026
cmake --build --preset vs2026-debug
```