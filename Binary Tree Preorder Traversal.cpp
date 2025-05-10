#include <iostream>
#include <vector>
#include "TreeNode.cpp"

using namespace std;

void traverseTree(TreeNode *root, vector<int> &result)
{
    if (root == nullptr)
        return;

    result.push_back(root->val);
    traverseTree(root->left, result);
    traverseTree(root->right, result);
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> result;
    traverseTree(root, result);
    return result;
}

// muy teso yo jajaja nunca voy a olvidar como recorrer un árbol binario