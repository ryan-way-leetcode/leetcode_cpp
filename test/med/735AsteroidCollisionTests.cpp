#include <gtest/gtest.h>
#include "../../../../include/med/735AsteroidCollision.hpp"

using namespace AsteroidCollision;

TEST(AsteroidCollision, Example1)
{
  Solution sol;
  vector<int> asteroids{ 5, 10, -5 };
  vector<int> out{ 5, 10 };

  EXPECT_EQ(sol.asteroidCollision(asteroids), out);
}

TEST(AsteroidCollision, Example2)
{
  Solution sol;
  vector<int> asteroids{ 8, -8 };
  vector<int> out{};

  EXPECT_EQ(sol.asteroidCollision(asteroids), out);
}

TEST(AsteroidCollision, Example3)
{
  Solution sol;
  vector<int> asteroids{ 10, 2, -5 };
  vector<int> out{ 10 };

  EXPECT_EQ(sol.asteroidCollision(asteroids), out);
}

TEST(AsteroidCollision, Example4)
{
  Solution sol;
  vector<int> asteroids{ -2, -1, 1, 2 };
  vector<int> out{ -2, -1, 1, 2 };

  EXPECT_EQ(sol.asteroidCollision(asteroids), out);
}

TEST(AsteroidCollision, SingleElement)
{
  Solution sol;
  vector<int> asteroids{ -2 };
  vector<int> out{ -2 };

  EXPECT_EQ(sol.asteroidCollision(asteroids), out);
}

TEST(AsteroidCollision, Tricky1)
{
  Solution sol;
  vector<int> asteroids{ 4, 5, 10, -5, -6, -7, -15 };
  vector<int> out{ -15 };

  EXPECT_EQ(sol.asteroidCollision(asteroids), out);
}

TEST(AsteroidCollision, Tricky2)
{
  Solution sol;
  vector<int> asteroids{ -20, 10, 5, 4, -5, -6, -7, -15 };
  vector<int> out{ -20, -15 };

  EXPECT_EQ(sol.asteroidCollision(asteroids), out);
}

TEST(AsteroidCollision, Tricky3)
{
  Solution sol;
  vector<int> asteroids{ 20, 10, 5, -5, -10, -20 };
  vector<int> out{};

  EXPECT_EQ(sol.asteroidCollision(asteroids), out);
}
