#include <iostream>
#include <vector>
#include "TreeNode.cpp"

using namespace std;

vector<int> preorderTraversal(TreeNode *root, vector<int> &result)
{
    if (root == nullptr)
        return result;

    result.push_back(root->val);
    preorderTraversal(root->left, result);
    preorderTraversal(root->right, result);

    return result;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result;
    preorderTraversal(root, result);
    return 0;
}