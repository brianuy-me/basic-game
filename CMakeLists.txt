cmake_minimum_required(VERSION 4.2)

project(app 
	VERSION 0.1.0 
	DESCRIPTION "project description" 
	HOMEPAGE_URL "https://github.com/brianuy-me/<project>" 
	LANGUAGES CXX
)

# list the .cpp files here
add_executable(app 
	src/main.cpp
	src/character.cpp
)

target_compile_features(app PRIVATE cxx_std_20)
target_include_directories(app PRIVATE include)
target_compile_options(app PRIVATE $<$<CXX_COMPILER_ID:MSVC>:/W4 /permissive- /utf-8>)

set_target_properties(app PROPERTIES CXX_EXTENSIONS OFF)

include(GNUInstallDirs)
install(TARGETS app RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})