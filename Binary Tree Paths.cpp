#include "TreeNode.cpp"
#include <vector>
#include <string>

using namespace std;
TreeNode *DFS(TreeNode *root, vector<string> &result, vector<int> nodes)
{
    if (!root)
    {
        return nullptr;
    }
    nodes.push_back(root->val);
    TreeNode *left = DFS(root->left, result, nodes);
    TreeNode *right = DFS(root->right, result, nodes);
    if (!left && !right)
    {
        string temp = "";
        for (auto node : nodes)
        {
            temp.append(to_string(node) + "->");
        }
        temp.pop_back();
        temp.pop_back();
        result.push_back(temp);
    }
    return root;
}
vector<string> binaryTreePaths(TreeNode *root)
{
    vector<string> result;
    vector<int> temp;
    DFS(root, result, temp);
    return result;
}

// no tengo ni idea qué es backtracking, pero pude hacer el problema a punta de pura hab