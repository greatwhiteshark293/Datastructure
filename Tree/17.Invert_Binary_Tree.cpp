Invert Binary Tree

https://leetcode.com/problems/invert-binary-tree/
Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]

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
    
  void invert(TreeNode* root){
    if(!root) return;
    if(!root->left && !root->right) return;
      
    else if(root->left && root->right){
        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
   else if(root->left) {
       root->right = root->left;
       root->left = nullptr;
   }
   else if(root->right){
       root->left = root->right;
       root->right = nullptr;
   } 
   
    if(root->left) invert(root->left);
    if(root->right)invert(root->right);
      
  }
    
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};
