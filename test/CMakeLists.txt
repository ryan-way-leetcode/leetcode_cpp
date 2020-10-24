set(This leetCodeTests)

set(SOURCES
    easy/sortedArrayToBSTTests.cpp
    easy/oneAndTwoBitCharsTests.cpp
    easy/moveZeroes.cpp
    easy/sumOfTwoNoZeroIntegersTests.cpp
)

add_executable(${This} ${SOURCES})

target_link_libraries(${This} PUBLIC
gtest_main
leetCode_Includes
leetCode_Sources
)

include(GoogleTest)

gtest_discover_tests(${This})
