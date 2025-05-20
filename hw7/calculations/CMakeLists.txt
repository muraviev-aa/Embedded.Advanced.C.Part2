cmake_minimum_required(VERSION 3.19)

cmake_policy(SET CMP0135 NEW)

project(Calculations)

include(FetchContent)

# Подключение googletest
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
        DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(googletest)

# Путь к папке с исходниками SQLite
set(SQLITE_SRC_PATH "resources/sqlite")

# Создаем исполняемый файл
add_executable(calculations_app src/main.c
        ${SQLITE_SRC_PATH}/sqlite3.c)

get_filename_component(RESOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/resources" ABSOLUTE)
target_compile_definitions(calculations_app PRIVATE RESOURCE_PATH="${RESOURCE_DIR}")

target_include_directories(calculations_app PRIVATE include ${SQLITE_SRC_PATH})

target_sources(calculations_app PRIVATE
        ../src/calculations.c
        ../src/area.c)

add_subdirectory(tests)