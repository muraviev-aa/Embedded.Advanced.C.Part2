add_library(math math.c
area.c)

target_include_directories(math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)

add_executable(main main.c)
target_link_libraries(main math)