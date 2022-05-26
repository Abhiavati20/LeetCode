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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> arr;
        
        if(root == NULL)
            return arr;
        
        stack<TreeNode*> stk;
        
        TreeNode *t = root;
        
        while(t != NULL or !stk.empty()) {
            if(t != NULL) {
                arr.push_back(t->val); // root
                stk.push(t);
                t = t->left; // left
            } else {
                t = stk.top(); stk.pop();
                t = t->right; // right
            }
        }
        
        return arr;
    }
};