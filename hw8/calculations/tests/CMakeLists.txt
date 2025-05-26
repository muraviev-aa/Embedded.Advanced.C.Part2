# Установка минимальной версии CMake
cmake_minimum_required(VERSION 3.10)

# Установка проекта
project(UnitTests)

# Включение FetchContent
include(FetchContent)

# Загрузка Unity
FetchContent_Declare(
    unity
    GIT_REPOSITORY https://github.com/ThrowTheSwitch/Unity.git
    GIT_TAG        master  # Или укажите конкретный тег, если нужно
)

# Загрузка Unity
FetchContent_MakeAvailable(unity)

# Установка пути к заголовочным файлам вашего проекта
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)  # Путь к include
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)      # Путь к src для math.c

# Добавление исполняемого файла для тестов
add_executable(main_test main_test.c test_math.c test_area.c ../src/math.c ../src/area.c)

# Линковка с библиотеками
target_link_libraries(main_test unity)