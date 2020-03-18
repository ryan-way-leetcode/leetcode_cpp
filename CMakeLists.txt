cmake_minimum_required(VERSION 3.10)

set(This LeetCode)
#set the project name
project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "")

add_library(${This} STATIC ${SOURCES} ${HEADERS})

add_subdirectory(depend/googletest)
add_subdirectory(test)