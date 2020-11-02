#ifndef IMPLEMENTQUEUEUSINGSTACKS
#define IMPLEMENTQUEUEUSINGSTACKS

#include <stack>

using namespace std;

namespace ImplementQueueUsingStacks {
  
  class MyQueue {
    public:
      MyQueue();
      void push(int x);
      int pop();
      int peek();
      bool empty();

    private:
      stack<int> _stack;
      int _top;
  };

}
#endif
