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
    TreeNode* bstFromPreorder(vector<int>& p) {
        stack<TreeNode*>s;
        TreeNode *root = new TreeNode(p[0]);
        s.push(root);
        for(int i=1; i<p.size(); i++)
        {
            if(p[i]<s.top()->val)
            {
                s.top()->left = new TreeNode(p[i]);
                s.push(s.top()->left);
                continue;
            }
            TreeNode *t;
            while(!s.empty() && s.top()->val<p[i])
            {
                t = s.top();
                s.pop();
            }
            t->right = new TreeNode(p[i]);
            s.push(t->right);
        }
        return root;
    }
};