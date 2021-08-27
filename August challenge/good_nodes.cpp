/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
private:
    void solve(TreeNode *root, int max_till_now, int &count)
    {
        if (root == nullptr)
            return;
        if (root->val >= max_till_now)
        {
            count++;
            max_till_now = root->val;
        }
        solve(root->left, max_till_now, count);
        solve(root->right, max_till_now, count);
        return;
    }

public:
    int goodNodes(TreeNode *root)
    {
        int count = 0;
        solve(root, root->val, count);
        return count;
    }
};