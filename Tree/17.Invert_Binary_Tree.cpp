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

//Better Solution:
TreeNode* invertTree(TreeNode* root) {
    if (root) {
        invertTree(root->left);
        invertTree(root->right);
        std::swap(root->left, root->right);
    }
    return root;
}
Non-Recursive

TreeNode* invertTree(TreeNode* root) {
    std::stack<TreeNode*> stk;
    stk.push(root);
    
    while (!stk.empty()) {
        TreeNode* p = stk.top();
        stk.pop();
        if (p) {
            stk.push(p->left);
            stk.push(p->right);
            std::swap(p->left, p->right);
        }
    }
    return root;
}
