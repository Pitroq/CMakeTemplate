add_executable(${PROJECT_NAME}Test
    sampleTest.cpp
    calculationsTest.cpp
    ${PROJECT_SOURCE_DIR}/src/calculations.cpp
)

target_include_directories(
    ${PROJECT_NAME}Test
    PRIVATE 
    ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(
    ${PROJECT_NAME}Test
    PRIVATE gtest
    gtest_main
)