#include <gtest/gtest.h>
#include "../../../include/easy/349IntersectionofTwoArrays.hpp"

using namespace IntersectionofTwoArrays;

TEST(IntersectionofTwoArrays, Example1)
{
  Solution s;
  vector<int> nums1 = { 1, 2, 2, 1 };
  vector<int> nums2 = { 2, 2 };
  vector<int> out = { 2 };

  vector<int> act = s.intersection(nums1, nums2);
  
  EXPECT_EQ(nums1, nums2);
}

TEST(IntersectionofTwoArrays, Example2)
{
  Solution s;
  vector<int> nums1 = { 4, 9, 5 };
  vector<int> nums2 = { 9, 4, 9, 8, 4 };
  vector<int> out = { 9, 4 };

  vector<int> act = s.intersection(nums1, nums2);
  
  EXPECT_EQ(nums1, nums2);
}
