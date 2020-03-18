cmake_minimum_required(VERSION 3.10)

set(This LeetCodeTests)

file(GLOB_RECURSE SOURCES "*.cpp")
add_executable(${This} ${SOURCES})
target_link_libraries(${This} PUBLIC
    gtest_main
    LeetCode
)
add_test(
    NAME ${This} 
    COMMAND test
)