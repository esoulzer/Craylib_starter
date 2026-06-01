cmake_minimum_required(VERSION 3.24...3.30)
project(Craylib_starter VERSION 0.1.0 LANGUAGES C)


set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED ON)
# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# NOTE: Get all source files in the src directory and add them to the executable target
file(GLOB_RECURSE SOURCES "src/*.c")
#file(GLOB_RECURSE HEADERS ${CMAKE_SOURCE_DIR}/include/*.h)
add_executable(${PROJECT_NAME} ${SOURCES})

#NOTE: the file(GLOB_RECURSE) command does not work with the include directory, so we will just add it manually
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${PROJECT_NAME})

set_property(TARGET ${PROJECT_NAME} PROPERTY VS_DEBUGGER_WORKING_DIRECTORY $<TARGET_FILE_DIR:${PROJECT_NAME}>)

#NOTE: Link raylib
target_link_libraries(${PROJECT_NAME} PRIVATE
    raylib
    winmm
)

