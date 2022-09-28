701. Insert into a Binary Search Tree
https://leetcode.com/problems/insert-into-a-binary-search-tree/


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
    // TreeNode* insertIntoBST(TreeNode* root, int val) {
    //     if(!root) return new TreeNode(val);;
    //     if( !root->right && root->val <val) root->right = new TreeNode(val);
    //     else if(!root->left &&root->val >val) root->left = new TreeNode(val);
    //     if(root->val <val) root->right = insertIntoBST(root->right,val);
    //     if(root->val >val) root->left = insertIntoBST(root->left,val);
    //     return root;
    // }
    
        TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root) return new TreeNode(val);;
        if(root->val <val) root->right = insertIntoBST(root->right,val);
        if(root->val >val) root->left = insertIntoBST(root->left,val);
        return root;
    }
};

Input: root = [4,2,7,1,3], val = 5
Output: [4,2,7,1,3,5]
Input: root = [40,20,60,10,30,50,70], val = 25
Output: [40,20,60,10,30,50,70,null,null,25]
Input: root = [4,2,7,1,3,null,null,null,null,null,null], val = 5
Output: [4,2,7,1,3,5]
