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
    void fillStack(TreeNode* root,stack<TreeNode*> &st){
        if(root){
            fillStack(root->left,st);
            st.push(root);
            fillStack(root->right,st);
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        stack<TreeNode*> st;
        fillStack(root,st);
        while(!st.empty()){
            if(st.top()->val == val){
                TreeNode* temp = st.top();
                return temp;
            }
            st.pop();
        }
        return NULL;
    }
};