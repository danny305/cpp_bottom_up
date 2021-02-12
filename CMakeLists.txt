cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(PROJECT_NAME LearningHowToBuild)

project(${PROJECT_NAME} VERSION 0.1.0 LANGUAGES CXX) # Var get set when you call this, etc things happen. 

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

set(CMAKE_BUILD_TYPE Debug)

message(STATUS "Build Type: ${CMAKE_BUILD_TYPE}")
message(STATUS "C++ flags, Debug configuration:   ${CMAKE_CXX_FLAGS_DEBUG}")
message(STATUS "C++ flags, Release configuration: ${CMAKE_CXX_FLAGS_RELEASE}")

set(BIN_DIR ${PROJECT_SOURCE_DIR}/bin)

# CMAKE_CURRENT_SOURCE_DIR
# 1. Make shared library
# 2. Make Executable

# Dependencies
add_subdirectory(submodules/pybind11)

# My source code
add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(bindings/shitTalker)