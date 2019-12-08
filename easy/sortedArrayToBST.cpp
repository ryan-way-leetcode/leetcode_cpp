/**
 * Definition for a binary tree node.
 */
#include <vector>
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* sortedArrayToBST(std::vector<int>& nums) {
        int mid = nums.size()/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = this->_sortedArrayToBST(nums, 0, mid-1);
        root->right = this->_sortedArrayToBST(nums, mid+1, nums.size()-1);
        return root;
    }

private:
    TreeNode* _sortedArrayToBST(std::vector<int>& nums, int start, int end) {
        if(end < start) return NULL;
        int mid = (end+start)/2;
        TreeNode* root = new TreeNode(nums[mid]);

    }
};