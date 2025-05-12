#include "TreeNode.cpp"
#include <vector>
#include <iostream>

using namespace std;

int countNodes(TreeNode *root)
{
    if (!root)
        return 0;
    int left = countNodes(root->left);
    int right = countNodes(root->right);
    int sum = left + right;
    return sum + 1;
}
