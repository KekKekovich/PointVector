cmake_minimum_required(VERSION 3.8)
project(untitled9)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Point.cpp Point.h)
add_executable(untitled9 ${SOURCE_FILES} Point.cpp Point.h)