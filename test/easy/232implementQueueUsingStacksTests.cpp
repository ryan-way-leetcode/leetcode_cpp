#include <gtest/gtest.h>
#include "../../../include/easy/232implementQueueUsingStacks.hpp"


TEST(ImplementQueueUsingStacks, Example1)
{
  ImplementQueueUsingStacks::MyQueue q = ImplementQueueUsingStacks::MyQueue();
  q.push(1);
  q.push(2);
  
  EXPECT_EQ(q.peek(), 1);
  EXPECT_EQ(q.pop(), 1);
  EXPECT_EQ(q.empty(), false);
}
