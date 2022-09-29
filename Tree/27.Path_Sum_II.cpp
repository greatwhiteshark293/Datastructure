Path Sum II

https://leetcode.com/problems/path-sum-ii/
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
 
Example 1:


Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
Output: [[5,4,11,2],[5,8,4,5]]
Explanation: There are two paths whose sum equals targetSum:
5 + 4 + 11 + 2 = 22
5 + 8 + 4 + 5 = 22
Example 2:


Input: root = [1,2,3], targetSum = 5
Output: []
Example 3:

Input: root = [1,2], targetSum = 0
Output: []

class Solution {
public:
    void check(TreeNode* root, int targetSum,int s,vector<vector<int>> &res,vector<int> out){
        if(!root) return;
        out.push_back(root->val);
        s += root->val;
        if(!root->left && !root->right && s==targetSum ){
            res.push_back(out);
        }
        check(root->left,targetSum,s ,res,out);
        check(root->right,targetSum,s ,res,out);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root) return{};
        vector<vector<int>> res;
        vector<int> out;
        int sum =0;
        check(root,targetSum,sum ,res,out);
        return res;
    }
};
