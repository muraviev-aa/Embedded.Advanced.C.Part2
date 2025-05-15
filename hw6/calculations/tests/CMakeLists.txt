cmake_minimum_required(VERSION 3.10)
project(CalculationsTests)

add_subdirectory(../googletest googletest)

add_executable(calculations_test calculations_test.cpp)

target_link_libraries(calculations_test gtest_main)

target_include_directories(calculations_test PRIVATE ../include)
target_sources(calculations_test PRIVATE ../src/calculations.c)

enable_testing()
add_test(NAME calculations_test COMMAND calculations_test)