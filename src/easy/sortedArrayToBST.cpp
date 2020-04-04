/**
 * Definition for a binary tree node.
 */
#include "../../include/easy/sortedArrayToBST.hpp"
#include <cmath>

TreeNode* 
SortedArrayToBST::Solution::sortedArrayToBST(
  std::vector<int>& nums) 
{
  int mid = nums.size()/2;
  TreeNode* root = new TreeNode(nums[mid]);
  root->left = this->_sortedArrayToBST(nums, 0, mid-1);
  root->right = this->_sortedArrayToBST(nums, mid+1, nums.size()-1);
  return root;
}

TreeNode*
SortedArrayToBST::Solution::_sortedArrayToBST(
  std::vector<int>& nums, int start, int end, int depth) 
{
  if(end < start) return nullptr;
  int mid = ceil((end+start)/2.0);
  TreeNode* root = new TreeNode(nums[mid]);
  root->left = this->_sortedArrayToBST(nums, start, mid-1, depth + 1);
  root->right = this->_sortedArrayToBST(nums, mid+1, end, depth + 1);

  return root;
}