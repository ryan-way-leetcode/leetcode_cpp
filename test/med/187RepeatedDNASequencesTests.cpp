#include <gtest/gtest.h>
#include "../../../../include/med/187RepeatedDNASequences.hpp"

using namespace RepeatedDNASequences;

void SetCompare(vector<string> act, vector<string> exp)
{
  EXPECT_EQ(act.size(), exp.size());
  unordered_set<string> act_set(act.begin(), act.end());
  unordered_set<string> exp_set(exp.begin(), exp.end());
  EXPECT_EQ(act_set, exp_set);
}

TEST(RepeatedDNASequences, Example1)
{
  Solution sol;
  string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
  vector<string> output
  {
    "AAAAACCCCC",
    "CCCCCAAAAA"
  };

  SetCompare(sol.findRepeatedDnaSequences(s), output);
}

TEST(RepeatedDNASequences, Example2)
{
  Solution sol;
  string s = "AAAAAAAAAAAAA";
  vector<string> output
  {
    "AAAAAAAAAA"
  };

  SetCompare(sol.findRepeatedDnaSequences(s), output);
}

TEST(RepeatedDNASequences, Example3)
{
  Solution sol;
  string s(100000, 'A');
  vector<string> output
  {
    "AAAAAAAAAA"
  };

  SetCompare(sol.findRepeatedDnaSequences(s), output);
}

TEST(RepeatedDNASequences, Example4)
{
  Solution sol;
  string s = "AAAAAAAAAAA";
  cout << s.size() << endl;
  vector<string> output
  {
    "AAAAAAAAAA"
  };

  SetCompare(sol.findRepeatedDnaSequences(s), output);
}
