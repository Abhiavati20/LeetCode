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
    TreeNode* insertToNewTree(TreeNode* node, int val){
        if(!node) return new TreeNode(val);
        if(val <= node->val)
            node->left = insertToNewTree(node->left, val);
        else
            node->right = insertToNewTree(node->right, val);
        return node;
    }
    void inorder(TreeNode* node, vector<int>& values){
        if(!node) return;
        inorder(node->left, values);
        values.push_back(node->val);
        inorder(node->right, values);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(!root) return NULL;
        vector<int> values;
        inorder(root, values); 
        TreeNode* newroot = NULL;
        for(int& val: values)
            newroot = insertToNewTree(newroot, val);
        return newroot;
    }
};