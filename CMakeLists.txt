cmake_minimum_required(VERSION 3.28)
project(part2 C)

set(CMAKE_C_STANDARD 11)

add_executable(1_1 hw1/1.c)
add_executable(1_2 hw1/2.c)
add_executable(1_3 hw1/3.c)
add_executable(1_4 hw1/4.c)
add_executable(1_5 hw1/5.c)
add_executable(1_6 hw1/6.c)
add_executable(1_12 hw1_optional/12.c)
add_executable(2_1 hw2/1.c)
add_executable(2_2 hw2/2.c)
add_executable(3_1 hw3_optional/3_1/main.c
        hw3_optional/3_1/lib.c)
add_executable(3_2 hw3_optional/3_2/main.c
        hw3_optional/3_1/lib.c)
add_executable(3_1_1 hw3_optional/1.c)
add_executable(3_1_2 hw3_optional/2.c)
