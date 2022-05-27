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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        stack<TreeNode*> st;
        for(int n : nums){
            TreeNode* node = new TreeNode(n);
            while(!st.empty() && st.top()->val < node->val){
                node->left = st.top();
                st.pop();
            }
            if(!st.empty()) st.top()->right = node;
            st.push(node);
        }
        TreeNode *temp;
        while(!st.empty())
        {
            temp = st.top();
            st.pop();
        }
        return temp;
    }
};