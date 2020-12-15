#ifndef FOURSUM
#define FOURSUM

#include <vector>
#include <iostream>
#include <numeric>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

using namespace std;

namespace FourSum {
  
  class Solution {
    public:
      vector<vector<int>> fourSum(vector<int>& nums, int target);
  };

}
#endif
