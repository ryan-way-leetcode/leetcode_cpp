set(SOURCES
easy/sortedArrayToBST_Test.cpp
)

add_executable(leetCode_Tests ${SOURCES})

target_link_libraries(leetCode_Tests PUBLIC
gtest_main
leetCode_Includes
)

add_test(
    NAME leetCode_Tests
    COMMAND test
)
