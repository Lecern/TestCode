cmake_minimum_required(VERSION 3.7)
project(TestCode)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c Sorting/BubbleSort.c Sorting/InsertSort.c)
add_executable(TestCode ${SOURCE_FILES})