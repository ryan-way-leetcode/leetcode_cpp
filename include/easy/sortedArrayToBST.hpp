#ifndef SORTEDARRAYTOBST
#define SORTEDARRAYTOBST

#include <vector>
#include "../helpers.hpp"

typedef LeetCode::Helper::TreeNode<int> TreeNode;

namespace SortedArrayToBST {
    class Solution {
        public:
            TreeNode* sortedArrayToBST(std::vector<int>& nums);

        private:
            TreeNode* _sortedArrayToBST(std::vector<int>& nums, int start, int end);
    };

}
#endif