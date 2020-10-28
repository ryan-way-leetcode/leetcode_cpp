#include "../../include/easy/numberofboomerangs.hpp"

double NumberOfBoomerangs::Solution::distance(
    vector<int> point1,
    vector<int> point2)
{
  return sqrt(pow(point1[0]-point2[0], 2) + pow(point1[1]-point2[1], 2));
}

/*
 *
 */
int NumberOfBoomerangs::Solution::numberOfBoomerangs(
    vector<vector<int>>& points)
{
  return this->numberOfBoomerangs_O2(points);
}

int NumberOfBoomerangs::Solution::numberOfBoomerangs_O2_Fast(
    vector<vector<int>>& points)
{
  set<vector<int>> sPoints = set<vector<int>>();
  for(vector<vector<int>>::iterator it = points.begin();
      it != points.end(); it++)
  {
    sPoints.insert(*it);
  }

  int count = 0;
  for(set<vector<int>>::iterator i = sPoints.begin();
      i != sPoints.end(); i++)
  {
    set<vector<int>> counted_distances = set<vector<int>>();
    for(set<vector<int>>::iterator j = sPoints.begin();
        j != sPoints.end(); j++)
    {
      if (i == j) continue;
      
      vector<int> distance = { 
        std::abs((*i)[0]-(*j)[0]), 
        std::abs((*i)[1]-(*j)[1])
      };

      if(counted_distances.count(distance) == 0)
      {
        counted_distances.insert(distance);
        counted_distances.insert({ distance[1], distance[0] });
        int num_this_distance = 
         sPoints.count({ (*i)[0]+distance[0], (*i)[1]+distance[1] }) +
         (distance[0] ? sPoints.count({ (*i)[0]-distance[0], (*i)[1]+distance[1] }) : 0) +
         (distance[1] ? sPoints.count({ (*i)[0]+distance[0], (*i)[1]-distance[1] }) : 0) +
         (distance[0] && distance[1] ? sPoints.count({ (*i)[0]-distance[0], (*i)[1]-distance[1] }) : 0); 

        if (distance[0] != distance[1])
          num_this_distance += 
            sPoints.count({ (*i)[0]+distance[1], (*i)[1]+distance[0] }) +
            (distance[1] ? sPoints.count({ (*i)[0]-distance[1], (*i)[1]+distance[0] }) : 0) +
            (distance[0] ? sPoints.count({ (*i)[0]+distance[1], (*i)[1]-distance[0] }) : 0) +
            (distance[1] && distance[0] ? sPoints.count({ (*i)[0]-distance[1], (*i)[1]-distance[0] }) : 0); 


        count += num_this_distance*(num_this_distance-1);
      } 
    }
  }

  return count;
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
  for(vector<vector<int>>::iterator i = points.begin();
      i != points.end(); i++)
  {
    map<double, int> distances = map<double, int>();
    for(vector<vector<int>>::iterator j = points.begin(); 
        j != points.end(); j++)
    {
      if(*j == *i) continue;

      double distance = this->distance(*i, *j);

      if(distances.count(distance) == 0)
      {
        distances[distance] = 0;
      }
      
      distances[distance] += 1; 

    }

    for(map<double, int>::iterator j = distances.begin();
        j != distances.end(); j++)
    {
      count += j->second*(j->second-1);
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
