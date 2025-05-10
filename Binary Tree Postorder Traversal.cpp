#include <iostream>
#include <vector>
#include "TreeNode.cpp"

using namespace std;

void traverseTree(TreeNode *root, vector<int> &result)
{
    if (!root)
        return;
    traverseTree(root->left, result);
    traverseTree(root->right, result);
    result.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> result;
    traverseTree(root, result);
    return result;
}

// una forma diferente de rocorrer árboles binarios