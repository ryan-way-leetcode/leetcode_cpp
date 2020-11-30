#include <gtest/gtest.h>
#include "../../../include/easy/350IntersectionofTwoArraysII.hpp"

using namespace IntersectionofTwoArraysII;

bool compareVectorContents(vector<int> vec1, vector<int> vec2)
{
  unordered_map<int, int> map;

  for(int i : vec1)
  {
    cout << i << ",";
  }
  for(int i : vec2)
  {
    cout << i << ",";
  }
  cout << endl;

  for(int i : vec2)
  {
    map[i]++;
  }

  for(int i : vec1)
  {
    if(map.count(i) == 0) return false;
    map[i]--;
  }

  return all_of(map.begin(), map.end(), [](pair<int, int> p) { return p.second == 0; });
}

TEST(IntersectionofTwoArraysII, Example1)
{
  Solution s;
  vector<int> nums1 = { 1, 2, 2, 1 };
  vector<int> nums2 = { 2, 2 };
  vector<int> out = { 2, 2 };

  vector<int> act = s.intersect(nums1, nums2);
  
  EXPECT_TRUE(compareVectorContents(act, out));
}

TEST(IntersectionofTwoArraysII, Example2)
{
  Solution s;
  vector<int> nums1 = { 4, 9, 5 };
  vector<int> nums2 = { 9, 4, 9, 8, 4 };
  vector<int> out = { 9, 4 };

  vector<int> act = s.intersect(nums1, nums2);
  
  EXPECT_TRUE(compareVectorContents(act, out));
}
