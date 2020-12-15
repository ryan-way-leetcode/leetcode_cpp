#include "../../include/med/184Sum.hpp"

vector<vector<int>> FourSum::Solution::fourSum(
    vector<int>& nums,
    int target)
{
  if (nums.size() < 4) return {};

  sort(nums.begin(), nums.end());
  
  vector<vector<int>> ret;

  for(int i = 0; i < nums.size()-3; ) 
  {
    for(int j = i+1; j < nums.size()-2; )
    {
      int r = target-(nums[i] + nums[j]);

      int k = j+1;
      int l = nums.size()-1;

      while(k<l)
      {
        int sum = nums[k] + nums[l];
        if(sum == r)
        {
          ret.push_back({nums[i], nums[j], nums[k], nums[l]});
          while(k<l && nums[k] == nums[k+1]) k++;
          while(k<l && nums[l] == nums[l-1]) l--;
          k++;
          l--;
        }
        else if(sum > r)
          l--;
        else
          k++;
      }

      int j_nums = nums[j];
      while(j < nums.size()-2 && nums[j] == j_nums) j++;
    }

    int i_nums = nums[i];
    while(i < nums.size()-3 && nums[i] == i_nums) i++;
  }
  return ret;
}
