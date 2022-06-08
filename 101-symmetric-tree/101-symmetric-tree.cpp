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
    bool isSameSubTree(TreeNode *l,TreeNode *r){
        if(r == NULL && l == NULL) return true;
        if(r == NULL || l == NULL) return false;
        if(r->val != l->val) return false;
        return isSameSubTree(l->left,r->right) && isSameSubTree(l->right,r->left);
    }
    bool isSymmetric(TreeNode* root) {
        return isSameSubTree(root->left,root->right);
    }
};