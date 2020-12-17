#include "../../include/med/207CourseSchedule.hpp"

bool CourseSchedule::Solution::canFinish(
    int numCourses,
    vector<vector<int>>& prerequisites)
{
  vector<vector<int>> graph(numCourses);
  for(vector<int> v : prerequisites)
  {
    graph[v[0]].push_back(v[1]);
  }
  
  for(int i = 0; i < numCourses; i++)
  {
    vector<int> discovered(numCourses, 0);
    queue<int> q;
    q.push(i);
    while(!q.empty())
    {
      int value = q.front();
      q.pop();
      if(value == i && discovered[i]) return false;
      if(discovered[value]) continue;
      discovered[value] = 1;
      if(graph[value].size() == 0) continue;
      for(int j : graph[value])
      {
        q.push(j);
      }
    }
  }

  return true;
}
