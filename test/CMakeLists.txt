set(This leetCodeTests)

set(SOURCES
    easy/sortedArrayToBSTTests.cpp
    easy/oneAndTwoBitCharsTests.cpp
)

add_executable(${This} ${SOURCES})

target_link_libraries(${This} PUBLIC
gtest_main
leetCode_Includes
leetCode_Sources
)

add_test(
    NAME ${This}
    COMMAND ${This}
)
