cmake_minimum_required(VERSION 3.15)
project(chained_list C)

set(CMAKE_C_STANDARD 99)

add_executable(chained_list main.c Chained_List.h Chained_List.c)