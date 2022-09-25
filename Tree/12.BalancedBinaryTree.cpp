110.Balanced Binary Tree
https://leetcode.com/problems/balanced-binary-tree/

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
    int heightCheck(TreeNode* root){
        if(!root) return 0;
        return max(heightCheck(root->left),heightCheck(root->right))+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int ld = heightCheck(root->left);
        int rd = heightCheck(root->right);
        int diff = ld -rd;
        // cout<<ld<<" "<<rd<<" "<<abs(diff)<<endl;
        return (abs(diff) <= 1)  && isBalanced(root->left) && isBalanced(root->right);
    }
};
