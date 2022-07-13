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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode *> q;
        vector<vector<int>>v;
        vector<int>temp;
        if(root)   
            q.push(root);

        while(!q.empty())
        {
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                root=q.front();
                int a=root->val;
                temp.push_back(a); 
                q.pop();
                if(root->left)     
                    q.push(root->left);
                if(root->right)    
                    q.push(root->right);
            }
            v.push_back(temp);
            temp.clear();
        }
        return v;    
    }
};