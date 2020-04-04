#include <gtest/gtest.h>
#include "../../../include/easy/sortedArrayToBST.hpp"

TEST(SortedArrayToBSTTests, EmptyArray) {
  std::vector<int> in{-10, -3, 0, 5, 9};
  
  TreeNode* exp = new TreeNode(0);
  exp->left = new TreeNode(-3);
  exp->left->left = new TreeNode(-10);
  exp->right = new TreeNode(9);
  exp->right->left = new TreeNode(5);

  SortedArrayToBST::Solution sol = SortedArrayToBST::Solution();

  TreeNode* act = sol.sortedArrayToBST(in);
  EXPECT_EQ(*exp, *act);
}