cmake_minimum_required(VERSION 3.7)
project(TestCode)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES List/LinkedList.c)
add_executable(TestCode ${SOURCE_FILES})