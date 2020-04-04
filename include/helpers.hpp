#include <iostream>
namespace LeetCode::Helper
{
  template <typename T>
  struct TreeNode 
  {
    T val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(T x) : val(x), left(nullptr), right(nullptr) {}
    
    std::ostream& operator<<(std::ostream& os);

    bool operator==(const TreeNode<T> rhs) const
    {
      return this->val == rhs.val 
        && ((this->left == nullptr && this->left == rhs.left)
        || *(this->left) == *(rhs.left))
        && ((this->right == nullptr && this->right == rhs.right)
        || *(this->right) == *(rhs.right));
    }
  };

  template<typename T>
  std::ostream& operator<<(std::ostream& os, const TreeNode<T> &node)
  {
    std::cout << node.val << std::endl;
    os << "[" << node.val << ":";
    if(node.left)
    {
      os << " left: " << *(node.left);
    }

    if(node.left && node.right)
    {
      os << ",";
    }

    if(node.right)
    {
      os << " right: " << *(node.right);
    }
    os << "]";

    return os;
  }
}
