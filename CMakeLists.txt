cmake_minimum_required(VERSION 3.10)

set(This LeetCode)
#set the project name
project(${This} CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(include)
add_subdirectory(src)
enable_testing()

# file(GLOB_RECURSE HEADERS "${PROJECT_SOURCE_DIR}/include/*.hpp")
# file(GLOB_RECURSE SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

# add_library(${This} ${SOURCES} ${HEADERS})
# target_include_directories(${This} PRIVATE ${HEADERS})

# add_subdirectory(depend/googletest)
# add_subdirectory(test)