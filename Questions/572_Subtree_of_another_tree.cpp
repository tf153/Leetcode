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
    bool solve(TreeNode *r1,TreeNode *r2){
        return r1==r2 or
            r1 and r2 and r1->val==r2->val and
            solve(r1->left,r2->left) and 
            solve(r1->right,r2->right);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* sub) {
        if(!root)
            return false;
        if(solve(root,sub))
            return true;
        return isSubtree(root->left,sub) or isSubtree(root->right,sub);
    }
};