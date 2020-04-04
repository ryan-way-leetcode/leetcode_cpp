/**
 * Definition for a binary tree node.
 */
#include "../../include/easy/sortedArrayToBST.hpp"

TreeNode* 
SortedArrayToBST::Solution::sortedArrayToBST(
    std::vector<int>& nums) {
    int mid = nums.size()/2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left = this->_sortedArrayToBST(nums, 0, mid-1);
    root->right = this->_sortedArrayToBST(nums, mid+1, nums.size()-1);
    return root;
}

TreeNode*
SortedArrayToBST::Solution::_sortedArrayToBST(
    std::vector<int>& nums, int start, int end) {

    if(end < start) return NULL;
    int mid = (end+start)/2;
    TreeNode* root = new TreeNode(nums[mid]);
}