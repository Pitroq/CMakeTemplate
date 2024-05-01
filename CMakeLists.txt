cmake_minimum_required(VERSION 3.20.0)
project(CMakeTemplate)

set(SOURCES 
    src/main.cpp
    src/calculations.cpp
)

add_executable(
    ${PROJECT_NAME}
    ${SOURCES}
)

target_include_directories(
    ${PROJECT_NAME}
    PRIVATE 
    ${PROJECT_SOURCE_DIR}/include
)
add_subdirectory(test)
add_subdirectory(lib/googletest)