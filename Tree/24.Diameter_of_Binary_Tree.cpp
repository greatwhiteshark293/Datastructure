Diameter of Binary Tree
https://leetcode.com/problems/diameter-of-binary-tree/


Input: root = [1,2,3,4,5]
Output: 3
Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].
  
/*
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
    int check(TreeNode* root,int &dia){
        if(!root) return 0;
        int ld = check(root->left,dia);
        int rd = check(root->right,dia);
        dia = max(dia,ld+rd);
        return max(ld,rd)+1;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int dia =0;
        check(root,dia);
        return dia;
    }
};
