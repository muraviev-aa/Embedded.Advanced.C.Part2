cmake_minimum_required(VERSION 3.10)
project(calculations C)

set(CMAKE_C_STANDARD 11)

# Добавляем директорию с исходным кодом
add_subdirectory(src)
add_subdirectory(tests)