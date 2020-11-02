#include "../../include/easy/232implementQueueUsingStacks.hpp"

using ImplementQueueUsingStacks::MyQueue;

MyQueue::MyQueue()
{
}

void MyQueue::push(int x)
{
  if (_stack.empty()) _top = x;
  _stack.push(x); 
}

int MyQueue::pop()
{
  stack<int> temp;
  while(_stack.size() != 1) 
  {
    temp.push(_stack.top());
    _stack.pop();
  }
  
  int value = _stack.top();
  _stack.pop();
  
  if(temp.size()) _top = temp.top();
  while(temp.size())
  {
    _stack.push(temp.top());
    temp.pop();
  }

  return value;
}

int MyQueue::peek()
{
  return _top;
}

bool MyQueue::empty()
{
  return _stack.empty();
}
