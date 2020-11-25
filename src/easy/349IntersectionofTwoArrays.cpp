#include "../../include/easy/349IntersectionofTwoArrays.hpp"

vector<int> IntersectionofTwoArrays::Solution::intersection(
    vector<int>& nums1,
    vector<int>& nums2)
{
  
  unordered_set<int> s_nums2(nums2.begin(), nums2.end());
  unordered_set<int> s_result;
  
  for(vector<int>::iterator it = nums1.begin(); it != nums1.end(); it++)
  {
    if(s_nums2.count(*it))
    {
      s_result.insert(*it);
    }
  }

  return vector<int>(s_result.begin(), s_result.end());
}


