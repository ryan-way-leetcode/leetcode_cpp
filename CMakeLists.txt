cmake_minimum_required(VERSION 3.10)

set(This LeetCode)
#set the project name
project(${Test} C CXX)

file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(main ${SOURCES})

enable_testing()
add_subdirectory(depend/googletest)
file(GLOB_RECURSE TESTS "test/*/*.cpp")
add_executable(tests ${TESTS})
add_test(tests tests)