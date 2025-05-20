# Создаем цель для тестов
add_executable(calculations_tests
        calculations_test.cpp
        sqlite_test.cpp
        area_test.cpp
        main_test.cpp
)

add_library(sqlite3 STATIC ../resources/sqlite/sqlite3.c)

# Связываем с gtest и библиотекой sqlite
target_link_libraries(calculations_tests PRIVATE gtest gtest_main sqlite3)

# Указываем include директории
target_include_directories(calculations_tests PRIVATE
        ../include
        ${gtest_SOURCE_DIR}/include
)

target_compile_definitions(calculations_tests PRIVATE RESOURCE_PATH="${RESOURCE_DIR}")

# Добавляем исходники из src, если нужно
target_sources(calculations_tests PRIVATE
        ../src/calculations.c
        ../src/area.c)