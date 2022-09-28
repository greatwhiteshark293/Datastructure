230. Kth Smallest Element in a BST
https://leetcode.com/problems/kth-smallest-element-in-a-bst/


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
    void traverse(TreeNode* root, int &k,int &result){
        if(!root) return;
        traverse(root->left,k,result);
        if(--k == 0) {
            result = root->val;
            return;
        }
        traverse(root->right,k,result);
        a
    }
    int kthSmallest(TreeNode* root, int k) {
        int result =0;
        traverse(root,k,result);
        return result;
    }
};


Input: root = [3,1,4,null,2], k = 1
Output: 1
  
Input: root = [5,3,6,2,4,null,null,1], k = 3
Output: 3

