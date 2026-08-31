cmake_minimum_required(VERSION 4.2)
project(app VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE HEADERS "include/*.h" "include/*.hpp")
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(app ${SOURCES} ${HEADERS})

target_include_directories(app PRIVATE include)
target_compile_options(app PRIVATE $<$<CXX_COMPILER_ID:MSVC>:/W4 /permissive- /utf-8>)