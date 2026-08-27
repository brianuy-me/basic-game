cmake_minimum_required(VERSION 3.21...4.4) # version range
project(myProj VERSION 1.0.0 LANGUAGES CXX) # project name, version, and language

# Language standard - the equivalent of /std:c++17
set(CMAKE_CXX_STANDARD 17) # set the C++ standard to C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON) # require the standard to be set, error out if not supported
set(CMAKE_CXX_EXTENSIONS OFF) # /std:c++17, not the vendor dialect

# One executable, built from one source file
file(GLOB_RECURSE HEADERS "include/*.h" "include/*.hpp")
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(app ${SOURCES} ${HEADERS}) # .hpp are not compiled, listed so it shows in the VS solution

# The /I flag is used to specify include directories for the compiler
target_include_directories(app PRIVATE include)

# Warning and conformance flags (for MSVC only, conditional)
target_compile_options(app PRIVATE $<$<CXX_COMPILER_ID:MSVC>:/W4 /permissive- /utf-8>)