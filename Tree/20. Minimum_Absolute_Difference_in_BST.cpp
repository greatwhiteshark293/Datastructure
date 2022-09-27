530 .Minimum Absolute Difference in BST
https://leetcode.com/problems/minimum-absolute-difference-in-bst/
 783: https://leetcode.com/problems/minimum-distance-between-bst-nodes/
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
    void inorder(TreeNode* root,int &diff,TreeNode* &prev){
        if(!root) return;
        if(root->left) inorder(root->left,diff,prev);
        diff = min(diff,prev ? abs(prev->val - root->val):INT_MAX);
        prev = root;
        if(root->right) inorder(root->right,diff,prev);
    }
    int getMinimumDifference(TreeNode* root) {
        if(!root) return 0;
        int diff =INT_MAX;
        TreeNode* prev = NULL;
        inorder(root,diff,prev);
        return diff;
    }
};
