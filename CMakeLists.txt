cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME LearningHowToBuild)

project(${PROJECT_NAME} VERSION 0.1.0 LANGUAGES CXX) # Var get set when you call this, etc things happen. 

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

set(CMAKE_BUILD_TYPE Debug)

set (BIN_DIR ${PROJECT_SOURCE_DIR}/bin)

# CMAKE_CURRENT_SOURCE_DIR
# 1. Make shared library
# 2. Make Executable

# Dependencies
add_subdirectory(submodules/pybind11)

# My source code
add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(bindings/shitTalker)

# file(GLOB shared_src lib/ShitTalker/src/*.cpp)

# add_library(shitTalker SHARED ${shared_src})

# target_include_directories(shitTalker
#     PUBLIC lib/ShitTalker/include
# )


# file(GLOB DUMMY_SRC src/*.cpp)

# add_executable(dummy_exc ${DUMMY_SRC})

# target_include_directories(dummy_exc
#     PUBLIC lib/ShitTalker/include
# )

# set_target_properties(dummy_exc
#     PROPERTIES 
#     RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR}
# )

# target_link_libraries(dummy_exc
#     PUBLIC shitTalker
# )

# add_subdirectory(bindings/shitTalker)