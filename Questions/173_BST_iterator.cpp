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
class BSTIterator {
    stack<TreeNode *> st;
    void fun(TreeNode* t){
        while(t){
            st.push(t);
            t=t->left;
        }
    }
public:
    BSTIterator(TreeNode* root) {
        fun(root);
    }
    
    int next() {
        TreeNode *t=st.top();
        st.pop();
        fun(t->right);
        return  t->val;
    }
    
    bool hasNext() {
        if(st.empty())
            return false;
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */