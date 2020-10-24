#include "../../include/easy/moveZeroes.hpp"
#include <iostream>

void MoveZeroes::Solution::moveZeroes(vector<int>& nums) {

  for(int firstNonZero = 0, cur = 0; cur < nums.size(); cur++)
  {
    if (nums[cur] != 0) {
      swap(nums[firstNonZero++], nums[cur]);
    }
  }

}
