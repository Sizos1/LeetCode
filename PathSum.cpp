#include <iostream>
#include <string>
#include "TreeNode.cpp"
void search(TreeNode *root, int targetSum, int sum, bool &found)
{
    if (root == nullptr)
        return;
    sum += root->val;
    if (root->left == nullptr && root->right == nullptr)
    {
        if (sum == targetSum)
        {
            found = true;
        }
    }
    search(root->left, targetSum, sum, found);
    search(root->right, targetSum, sum, found);
}

bool hasPathSum(TreeNode *root, int targetSum)
{
    bool found = false;
    search(root, targetSum, 0, found);
    return found;
}
int main()
{
    TreeNode *root = new TreeNode(5);
    // Level 2
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    // Level 3
    root->left->left = new TreeNode(11);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    // Level 4
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->right->right = new TreeNode(1);
    std::cout << "Has path sum 10: " << (hasPathSum(root, 10) ? "true" : "false") << std::endl;

    return 0;
}
