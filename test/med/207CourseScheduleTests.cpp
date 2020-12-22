#include <gtest/gtest.h>
#include "../../../../include/med/207CourseSchedule.hpp"

using namespace CourseSchedule;

TEST(CourseSchedule, Example1)
{
  Solution sol;
  int numCourses = 2;
  vector<vector<int>> prerequisites
  {
    { 1, 0}
  };
  bool output = true;

  EXPECT_EQ(sol.canFinish(numCourses, prerequisites), output);
}

TEST(CourseSchedule, Example2)
{
  Solution sol;
  int numCourses = 2;
  vector<vector<int>> prerequisites
  {
    { 1, 0 },
    { 0, 1 }
  };
  bool output = false;

  EXPECT_EQ(sol.canFinish(numCourses, prerequisites), output);
}

TEST(CourseSchedule, Example3)
{
  Solution sol;
  int numCourses = 3;
  vector<vector<int>> prerequisites
  {
    { 1, 0 },
    { 0, 2 },
    { 2, 1 }
  };
  bool output = false;

  EXPECT_EQ(sol.canFinish(numCourses, prerequisites), output);
}
