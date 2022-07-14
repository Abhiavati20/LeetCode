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
    TreeNode* buildTree(vector<int>& preorder, int pl, int pr, vector<int>& inorder, int il, int ir)      {
        if(pl > pr) return NULL;
        if(pl == pr) return new TreeNode(preorder[pl]);
        
        int rootval = preorder[pl];
        auto root = new TreeNode(rootval);
        
        int i = 0;
        while(i <= ir and inorder[i] != rootval) ++i;
        int leftsz = i-il, rightsz = ir-i;
        
        root->left = buildTree(preorder,pl+1,pl+leftsz,inorder,il,i-1);
        root->right = buildTree(preorder,pl+leftsz+1,pr,inorder,i+1,ir);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
    }
};