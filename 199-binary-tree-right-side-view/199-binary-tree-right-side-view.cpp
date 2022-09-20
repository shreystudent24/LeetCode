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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)return{};
        vector<int>ans;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        TreeNode* temp;
        
        while(!q.empty()){
            if(q.front()){
                temp = q.front();
                
                
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                
                q.pop();
            }
            else{
                //auto curr = q.front();
                ans.push_back(temp->val);
                q.pop();
                
                if(!q.empty())q.push(NULL);
            }
        }
        
        return ans;
    }
};