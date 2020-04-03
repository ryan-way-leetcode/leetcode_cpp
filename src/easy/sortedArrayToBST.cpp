/**
 * Definition for a binary tree node.
 */
#include "../../include/easy/sortedArrayToBST.hpp"
#include <iostream>

TreeNode<int>* 
SortedArrayToBST::Solution::sortedArrayToBST(
    std::vector<int>& nums) {
    int mid = nums.size()/2;
    TreeNode<int>* root = new TreeNode<int>(nums[mid]);
    root->left = this->_sortedArrayToBST(nums, 0, mid-1);
    root->right = this->_sortedArrayToBST(nums, mid+1, nums.size()-1);
    return root;
}

TreeNode<int>*
SortedArrayToBST::Solution::_sortedArrayToBST(
    std::vector<int>& nums, int start, int end) {

    if(end < start) return NULL;
    int mid = (end+start)/2;
    TreeNode<int>* root = new TreeNode<int>(nums[mid]);
}

int main()
{
    std::cout << "Hello world" << std::endl;
}