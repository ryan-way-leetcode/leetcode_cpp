set(This leetCodeTests)

set(SOURCES
easy/sortedArrayToBST_Test.cpp
)

add_executable(${This} ${SOURCES})

target_link_libraries(${This} PUBLIC
gtest_main
leetCode_Includes
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
