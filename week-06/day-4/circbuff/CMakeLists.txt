cmake_minimum_required(VERSION 3.15)
project(circbuff C)

set(CMAKE_C_STANDARD 99)

add_executable(circbuff main.c Circle_Buffer.h Circle_Buffer.c)