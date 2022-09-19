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
    
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        int left = height(root->left);
        int right = height(root->right);
        
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root){
            return NULL;
        }
        int ld = diameterOfBinaryTree(root->left);
        int rd = diameterOfBinaryTree(root->right);
        int lh = height(root->left);
        int rh = height(root->right);
        
        return max(lh+rh, max(ld,rd));

    }
};