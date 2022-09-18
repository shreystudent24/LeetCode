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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*> stack;
        if(root){
            stack.push(root);
        }
        
        while(stack.size()){
            TreeNode* tmp = stack.top();
            
            if(tmp==NULL){
                stack.pop();
                ans.push_back(stack.top()->val);
                 stack.pop();
                continue;
            }
        
            stack.push(NULL);
             if(tmp->right){
                stack.push(tmp->right);
            }
            if(tmp->left){
                stack.push(tmp->left);
            }
           
        }
        return ans;
    }
};

