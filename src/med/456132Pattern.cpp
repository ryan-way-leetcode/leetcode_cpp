#include "../../include/med/456132Pattern.hpp"

bool D132Pattern::Solution::find132pattern(vector<int>& nums)
{
  if (nums.size() < 3) return false;

  vector<int> min_values(nums.size(), INT_MAX);
  stack<int> twos;

  int small = INT_MAX;
  
  for(int i = 0; i < nums.size(); i++)
  {
    small = min(small, nums[i]);
    min_values[i] = small;
  }

  for(int i = nums.size()-1; i >= 0; i--)
  {
    while(twos.size() > 0 && twos.top() <= min_values[i]) twos.pop();

    if(twos.size() > 0 && nums[i] > twos.top())
    {
      return true;
    }
    else if(nums[i] > min_values[i])
    {
      twos.push(nums[i]);
    }
  }


  return false;

}


