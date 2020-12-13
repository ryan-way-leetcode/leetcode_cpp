cmake_minimum_required(VERSION 3.10)

set(This LeetCode)
#set the project name
project(${This} CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(include)
add_subdirectory(src)
enable_testing()

add_subdirectory(depend/googletest)
add_subdirectory(test)
