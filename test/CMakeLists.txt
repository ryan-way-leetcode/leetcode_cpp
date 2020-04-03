add_executable(leetCode_Tests $<TARGET_OBJECTS:easy_tests>)

target_link_libraries(leetCode_Tests PUBLIC
gtest_main
gtest
leetCode_Includes
)

add_test(
    NAME leetCode_Tests
    COMMAND test
)

add_subdirectory(easy)