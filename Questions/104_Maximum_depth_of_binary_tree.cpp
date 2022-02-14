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
class Solution {
    int sol(TreeNode *root,int n){
        if(!root)
            return n;
        return max(sol(root->left,n+1),sol(root->right,n+1));
    }
public:
    int maxDepth(TreeNode* root) {
        return sol(root,0);
    }
};