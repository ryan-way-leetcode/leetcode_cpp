#include "../../include/med/1310XorQueries.hpp"

vector<int> XorQueries::Solution::xorQueries(
    vector<int>& arr,
    vector<vector<int>>& queries)
{
  vector<int> ret(queries.size(), 0);
  vector<int> s(arr.size(),0);

  int xr = 0;
  for(int i = 0; i < arr.size(); i++)
  {
    xr ^= arr[i];
    s[i] = xr;
  }

  for(int i = 0; i < queries.size(); i++)
  {
    xr = queries[i][0]? s[queries[i][0]-1] : 0;
    xr ^= s[queries[i][1]];
    ret[i] = xr;
  }

  return ret;
}
