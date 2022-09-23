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
    int kthSmallest(TreeNode* root, int k) {
        if(!root)return -1;
        queue<TreeNode*>q;
        q.push(root);
        vector<int>v;
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            v.push_back(temp->val);
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
        }
        
        sort(v.begin(),v.end());
        return v[k-1];
        
    }
};