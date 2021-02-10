set (MOD_NAME cppShitTalker)

pybind11_add_module(${MOD_NAME} shitTalker.cpp)  # Defining a Target

target_include_directories(${MOD_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/lib/ShitTalker/include
)

target_link_libraries(${MOD_NAME}
    PUBLIC shitTalker
)