#ifndef SORTEDARRAYTOBST
#define SORTEDARRAYTOBST

#include <vector>
#include "../helpers.hpp"

namespace SortedArrayToBST {
    class Solution {
        public:
            TreeNode<int>* sortedArrayToBST(std::vector<int>& nums);

        private:
            TreeNode<int>* _sortedArrayToBST(std::vector<int>& nums, int start, int end);
    };

}
#endif