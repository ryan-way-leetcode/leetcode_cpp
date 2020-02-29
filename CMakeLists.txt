cmake_minimum_required(VERSION 3.10)

#set the project name
project(LeetCode)

file(GLOB SOURCES src/*.cpp)

add_executable(main ${SOURCES})