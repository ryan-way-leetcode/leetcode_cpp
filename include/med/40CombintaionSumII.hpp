#ifndef COMBINTAIONSUMII
#define COMBINTAIONSUMII

#include <vector>

using namespace std;

namespace CombintaionSumII {
  
  class Solution {
    public:
      vector<vector<int>> combinationSum2(vector<int> &candidates, int target);
      void dfs(
          vector<vector<int>>& res, 
          vector<int> &candidates, 
          int target,
          int start,
          vector<int>& path);
  };

}
#endif
