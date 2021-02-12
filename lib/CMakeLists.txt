set(LIB_NAME shitTalker)

set(shitTalkerInc ${PROJECT_SOURCE_DIR}/lib/shitTalker/include)
file(GLOB shitTalkerSrc shitTalker/src/*.cpp)

add_library(
    ${LIB_NAME} 
    SHARED 
    ${shitTalkerSrc}
)

target_include_directories(
    ${LIB_NAME} 
    PUBLIC
    ${shitTalkerInc}
)

# Things  to consider
# This script is hardcoded for 1 library (the MOD_NAME)
# This will need to be refactored if extended with additional libraries.