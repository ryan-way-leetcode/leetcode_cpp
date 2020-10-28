#include "../../include/easy/numberofboomerangs.hpp"

int NumberOfBoomerangs::Solution::distance(
    vector<int>& point1,
    vector<int>& point2) const 
{
  return pow(point1[0]-point2[0], 2) + pow(point1[1]-point2[1], 2);
}

/*
 *
 */
int NumberOfBoomerangs::Solution::numberOfBoomerangs(
    vector<vector<int>>& points)
{
  return this->numberOfBoomerangs_O2(points);
}

/* for each point, calculate the number of points
 * at a given distance
 *
 * give a point p, distance d, number of points that are distance d from p (n)
 *  calculate the number of possible boomerangs
 *
 */
int NumberOfBoomerangs::Solution::numberOfBoomerangs_O2(
    vector<vector<int>>& points)
{
  //will contain for each point p, create a map of distance d to number of 
  //points that are d distance from p

  int count = 0;
  for(int i = 0; i != points.size(); i++)
  {
    map<int, int> distances = map<int, int>();
    for(int j = 0; j != points.size(); j++)
    {
      if(j == i) continue;

      int distance = this->distance(points[i], points[j]);

      distances[distance] += 1; 

    }

    for(auto &[key, value] : distances)
    {
      count += value*(value-1);
    }
  }

  return count;
}

//O(n^3)
int NumberOfBoomerangs::Solution::numberOfBoomerangs_O3(
    vector<vector<int>>& points)
{
  int count = 0;
  for(int i = 0; i < points.size(); i++)
  {
    for(int j = i+1; j < points.size(); j++)
    {
      for(int k = j+1; k < points.size(); k++)
      {
        if(this->distance(points[j], points[i]) ==
            this->distance(points[j], points[k]))
        {
          count += 2;
        }

        if(this->distance(points[i], points[j]) ==
            this->distance(points[i], points[k]))
        {
          count += 2;
        }

        if(this->distance(points[k], points[i]) ==
            this->distance(points[k], points[j]))
        {
          count += 2;
        }
      }
    }
  }  
  return count;
}
