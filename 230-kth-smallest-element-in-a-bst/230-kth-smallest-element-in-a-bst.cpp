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
public:
    vector<int> st;
    void formStack(TreeNode *root){
        if(root){
            formStack(root->left);
            st.push_back(root->val);
            formStack(root->right);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        formStack(root);
        for(auto i : st)
            cout<<i<<endl;
        return st[k - 1];
    }
};