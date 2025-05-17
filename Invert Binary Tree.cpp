#include "TreeNode.cpp"
#include <algorithm>

TreeNode *invertTree(TreeNode *root)
{
    if (!root)
        return nullptr;
    std::swap(root->left, root->right);
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
