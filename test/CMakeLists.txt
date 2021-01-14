include(GoogleTest)
set(This leetCodeTests)

set(SOURCES
    easy/sortedArrayToBSTTests.cpp
    easy/oneAndTwoBitCharsTests.cpp
    easy/moveZeroes.cpp
    easy/sumOfTwoNoZeroIntegersTests.cpp
    easy/numberofboomerangesTests.cpp
    easy/228summaryrangesTest.cpp
    easy/232implementQueueUsingStacksTests.cpp
    easy/290wordPatternTests.cpp
    easy/292NimGameTests.cpp
    easy/344ReverseStringTests.cpp
    easy/349IntersectionofTwoArraysTests.cpp
    easy/345ReverseVowelsTest.cpp
    easy/350IntersectionofTwoArraysIITests.cpp
    easy/434NumberOfSegmentsInAStringTests.cpp
    easy/387FirstUniqueCharacterInStringTests.cpp
    easy/383RansomNoteTests.cpp

    med/456132PatternTests.cpp
    med/1162AsFarFromLandAsPossibleTests.cpp
    med/184SumTests.cpp
    med/40CombintaionSumIITests.cpp
    med/207CourseScheduleTests.cpp
    med/735AsteroidCollisionTests.cpp
    med/29DivideTwoIntegersTests.cpp
    med/443StringCompressionTests.cpp
    med/8StringToIntegerTests.cpp
    med/150EvaluateReversePolishNotationTests.cpp
    med/187RepeatedDNASequencesTests.cpp
    med/851LoudAndRichTests.cpp
    med/1310XorQueriesTests.cpp

    templateTests.cpp
)

add_executable(${This} ${SOURCES})

target_link_libraries(${This} PUBLIC
gtest_main
leetCode_Includes
leetCode_Sources
)


gtest_discover_tests(${This})
