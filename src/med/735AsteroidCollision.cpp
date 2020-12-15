#include "../../include/med/735AsteroidCollision.hpp"

vector<int> AsteroidCollision::Solution::asteroidCollision(vector<int>& asteroids)
{

  for(int i = 0; i < asteroids.size()-1 && asteroids.size() > 0; i++)
  {
    while (
        asteroids.size() > 0 && i < asteroids.size() -1 && 
        asteroids[i] > 0 && asteroids[i+1] < 0)
    {
      if (abs(asteroids[i]) == abs(asteroids[i+1]))
      {
        asteroids.erase(asteroids.begin()+i+1);
        asteroids.erase(asteroids.begin()+i);
        i = max(0, i-1);
      }
      else
      {
        asteroids[i] = abs(asteroids[i]) > abs(asteroids[i+1]) ? 
          asteroids[i] :
          asteroids[i+1];

        asteroids.erase(asteroids.begin()+i+1);

        if(asteroids[i] < 0 )
          i = max(0, i - 1);
      }

    }
  }
  return asteroids; 
}
