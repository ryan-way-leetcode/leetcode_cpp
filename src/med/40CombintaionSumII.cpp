#include "../../include/med/40CombintaionSumII.hpp"

vector<vector<int>> CombintaionSumII::Solution::combinationSum2(
    vector<int>& candidates,
    int target)
{
  sort(candidates.begin(), candidates.end());

  vector<vector<int>> res;
  vector<int> path;

  dfs(res, candidates, target, 0, path);

  return res;
}

void CombintaionSumII::Solution::dfs(vector<vector<int>>& res,
    vector<int>& candidates,
    int target,
    int start,
    vector<int>& path)
{
  if(target == 0)
  {
    res.push_back(path);
    return;
  }

  int prev = -1;
  for(int i = start; i < candidates.size(); i++)
  {
    int new_target = target-candidates[i]; 
    if(new_target < 0 || candidates[i] == prev) continue;
    path.push_back(candidates[i]);
    dfs(res, candidates, new_target, i+1, path); 
    path.pop_back();
    prev = candidates[i];
  }
}
