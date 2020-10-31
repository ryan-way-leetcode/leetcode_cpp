#include "../../include/easy/228summaryranges.hpp"

vector<string> SummaryRanges::Solution::summaryRanges(vector<int>& nums)
{
  if (nums.size() == 0) return {};
  
  vector<string> ret = {};
  int range_start = 0;
  
  for(int i = 1; i < nums.size(); i++)
  {
    if (nums[i] != nums[i-1]+1)
    {
      ret.push_back(to_string(nums[range_start]) +
          (range_start == i-1 ? ""
          : "->" + to_string(nums[i-1])));

      range_start = i;
    } 
  }

  ret.push_back(to_string(nums[range_start]) + 
      (range_start == nums.size()-1 ? ""
      : "->" + to_string(nums[nums.size()-1])));
  
  return ret;
}
