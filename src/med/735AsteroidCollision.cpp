#include "../../include/med/735AsteroidCollision.hpp"

vector<int> AsteroidCollision::Solution::asteroidCollision(vector<int>& asteroids)
{
  stack<int> s;

  for(int i : asteroids)
  {
    bool flag = true;
    while(!s.empty() && i < 0 && s.top() > 0)
    {
      if(s.top() < -i)
      {
        s.pop();
        continue;
      }
      else if(s.top() == -i)
      {
        s.pop();
      }
      flag = false;
      break;
    }
    if(flag)
      s.push(i);
  }

  vector<int> v;
  while(!s.empty())
  {
    v.push_back(s.top());
    s.pop();
  }
  reverse(v.begin(), v.end());
  return v;
}
