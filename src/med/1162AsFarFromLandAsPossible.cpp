#include "../../include/med/1162AsFarFromLandAsPossible.hpp"

void PrintGrid(vector<vector<int>> &grid, string message)
{
  cout << "====================" << message  <<"====================" << endl;
  for(vector<int> row : grid)
  {
    for(int value : row)
    {
      cout << value << ",";
    }
    cout << endl;
  }
  cout <<  "========================================" << endl;
}

void PrintQueue(queue<pair<int, int>> q, string message)
{
  cout << "====================" << message  <<"====================" << endl;
  if(!q.empty())
  {
    pair<int, int> p = q.front();
    q.pop();
    cout << "(" << p.first << "," << p.second << "),";
    q.push(p);
    while(q.front() != p)
    {
      cout << "(" << q.front().first << "," << q.front().second << "),";
      q.push(q.front());
      q.pop();
    }
    cout << endl;
  }
  cout <<  "========================================" << endl;
}

int AsFarFromLandAsPossible::Solution::maxDistance(vector<vector<int>>& grid)
{
  vector<vector<int>> dist(grid.size(), vector<int>(grid[0].size(), INT_MAX));
  queue<pair<int, int>> q;

  for(int i = 0; i < grid.size(); i++)
  {
    for(int j = 0; j < grid[i].size(); j++)
    {
      if(grid[i][j])
      {
        dist[i][j] = 0;
        q.push(pair(i,j));
      }
    }
  }

  while(!q.empty())
  {
    pair<int, int> p = q.front();
    q.pop();
    
    if(p.first > 0 && dist[p.first][p.second] + 1 < dist[p.first-1][p.second])
    {
      dist[p.first-1][p.second] = dist[p.first][p.second] + 1;
      q.push(pair(p.first-1, p.second));
    }

    if(p.first < grid.size()-1 && dist[p.first][p.second] + 1 < dist[p.first+1][p.second])
    {
      dist[p.first+1][p.second] = dist[p.first][p.second] + 1;
      q.push(pair(p.first+1, p.second));
    }
    
    if(p.second > 0 && dist[p.first][p.second] + 1 < dist[p.first][p.second-1])
    {
      dist[p.first][p.second-1] = dist[p.first][p.second] + 1;
      q.push(pair(p.first, p.second-1));
    }

    if(p.second < grid[0].size()-1 
        && dist[p.first][p.second] + 1 < dist[p.first][p.second+1])
    {
      dist[p.first][p.second+1] = dist[p.first][p.second] + 1;
      q.push(pair(p.first, p.second+1));
    }

  }
  
  int farthest = 0;

  for(vector<int> row : dist)
  {
    for(int value : row)
    {
      farthest = max(farthest, value);
    }
  }

  //no water
  if (farthest == INT_MAX) return -1;
  //no land
  if (farthest == 0 ) return -1;
  return farthest;
}


