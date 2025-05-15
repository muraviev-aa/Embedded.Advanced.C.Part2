cmake_minimum_required(VERSION 3.28)
project(calculations C)

# Добавляем подкаталог с тестами
add_subdirectory(tests)

# Создаем исполняемый файл main из src/main.c и src/calculations.c
add_executable(calculations_app src/main.c src/calculations.c)

target_include_directories(calculations_app PRIVATE include)