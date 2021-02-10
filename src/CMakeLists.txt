set(BIN_NAME dummy_exc)

file(GLOB dummy_src *.cpp)

add_executable(${BIN_NAME} ${dummy_src})

target_include_directories(
    ${BIN_NAME}
    PUBLIC 
    # ninja works once I replaced the following line: 
    # ${shitTalkerInc}
    ${PROJECT_SOURCE_DIR}/lib/shitTalker/include
)

set_target_properties(
    ${BIN_NAME}
    PROPERTIES 
    RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR} # This variable is defined in the root CMakeLists.txt
)

target_link_libraries(
    ${BIN_NAME}
    PUBLIC
    # ninja works once I replaced the following line:
    # ${LIB_NAME}
    shitTalker
)