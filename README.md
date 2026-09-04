# Objectives
- [x] Create a working build
- [ ] Create something useful

## Building
Please note the Visual Studio 2022 cannot be used on this project

#### Visual Studio 2026 IDE (Recommended)
Visual Studio 18 2026 IDE
Simply open the project folder via Visual Studio 2026
Choose from the drop down options
- vs2026-x64-debug
- vs2026-x64-release
- ninja-x64-debug
- ninja-x64-release

When changing builds remmember to set the exe so the build 
button works (F5)

#### Terminal options
```powershell
# Visual Studio 18 2026 generator
cmake --preset vs2026-x64
cmake --build --preset vs2026-x64-debug
cmake --build --preset vs2026-x64-release

# Ninja Multi-Config generator
cmake --preset ninja-x64
cmake --build --preset ninja-x64-debug
cmake --build --preset ninja-x64-release
```