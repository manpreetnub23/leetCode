#include <bits/stdc++.h>
//  * Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    std::vector<int> preorderTraversal(TreeNode *root)
    {
        std::vector<int> res;
        if (root == nullptr)
        {
            return res;
        }
        res.push_back(root->val);
        std::vector<int> leftt = preorderTraversal(root->left);
        std::vector<int> rightt = preorderTraversal(root->right);
        res.insert(res.end(), leftt.begin(), leftt.end());
        res.insert(res.end(), rightt.begin(), rightt.end());
        return res;
    }
};
int main()
{
    Solution x;
    struct TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    std::vector<int> res = x.preorderTraversal(root);
    for (auto i : res)
    {
        std::cout << i << " ";
    }
}