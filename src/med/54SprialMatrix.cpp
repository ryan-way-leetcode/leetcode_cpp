#include "../../include/med/54SprialMatrix.hpp"

vector<int> spiralOrder_first(
    vector<vector<int>>& matrix)
{
  vector<int> ret(matrix.size()*matrix[0].size(), 0);

  pair<int, int> pos{0, 0}, trans{0, 1};
  int curr = 0;
  int small = -101;

  while(pos.first >= 0 && pos.first < matrix.size() &&
      pos.second >= 0 && pos.second < matrix[pos.first].size() &&
      matrix[pos.first][pos.second] != small)
  {
    ret[curr++] = matrix[pos.first][pos.second];
    matrix[pos.first][pos.second] = small;

    pair<int, int> new_pos{pos.first + trans.first, pos.second + trans.second};
    if(new_pos.first < 0 || new_pos.first > matrix.size()-1 ||
        new_pos.second < 0 || new_pos.second > matrix[new_pos.first].size()-1 ||
        matrix[new_pos.first][new_pos.second] == small)
    {
      if(trans == pair(0, 1))
        trans = { 1, 0 };
      else if(trans == pair(1, 0))
        trans = { 0, -1 };
      else if(trans == pair(0, -1))
        trans = { -1, 0 };
      else
        trans = { 0, 1 };
    }
    pos = pair(pos.first + trans.first, pos.second + trans.second);
  }


  return ret;
}

//TODO: implement using incremental counters for cleanliness
vector<int> SprialMatrix::Solution::spiralOrder(
    vector<vector<int>>& matrix)
{
  return spiralOrder_first(matrix);
}

