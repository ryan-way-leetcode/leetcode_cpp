#include "../../include/med/334IncreasingTripletSubsequence.hpp"

bool increasingTripletO3(vector<int>& nums)
{
  if(nums.size() < 3) return false;

  for(int i = 0; i < nums.size()-2; i++)
  {
    for(int j = i+1; j < nums.size()-1; j++)
    {
      for(int k = j+1; k < nums.size(); k++)
      {
        if(nums[i] < nums[j] && nums[j] < nums[k]) return true;
      }
    }
  }

  return false;
}

bool increasingTripletON(vector<int>& nums)
{
  if(nums.size() < 3) return false;
  int small = INT_MAX, second = INT_MAX;
  int first = nums[0];

  for(int i : nums)
  {
    if(second < i)
    {
      return true;
    }
    else if(i < small)
    {
      small = i;
    }
    else if(small < i && i < second)
    {
      first = small;
      second = i;
    }

  }

  return false;
}

bool IncreasingTripletSubsequence::Solution::increasingTriplet(
    vector<int>& nums)
{
  return increasingTripletON(nums);
}
