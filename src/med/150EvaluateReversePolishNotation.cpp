#include "../../include/med/150EvaluateReversePolishNotation.hpp"

int EvaluateReversePolishNotation::Solution::evalRPN(vector<string>& tokens)
{
  stack<int> nums;

  for(string s : tokens)
  {
    if(s == "/")
    {
      int op1 = nums.top();
      nums.pop();
      int op2 = nums.top();
      nums.pop();

      nums.push(op2/op1);
    }
    else if(s == "*")
    {
      int op1 = nums.top();
      nums.pop();
      int op2 = nums.top();
      nums.pop();

      nums.push(op2*op1);
    }
    else if(s == "-")
    {
      int op1 = nums.top();
      nums.pop();
      int op2 = nums.top();
      nums.pop();

      nums.push(op2-op1);
    }
    else if(s == "+")
    {
      int op1 = nums.top();
      nums.pop();
      int op2 = nums.top();
      nums.pop();

      nums.push(op2+op1);
    }
    else
    {
      nums.push(stoi(s));
    }
  }
  return nums.top();
}
