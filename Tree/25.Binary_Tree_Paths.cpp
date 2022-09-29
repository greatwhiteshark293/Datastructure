257. Binary Tree Paths

https://leetcode.com/problems/binary-tree-paths/

Example 1:


Input: root = [1,2,3,null,5]
Output: ["1->2->5","1->3"]

Example 2:

Input: root = [1]
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
   void check(TreeNode* root,string s,vector<string> &res){
        if(!root) return;
        s += (s.size()>0) ? ("->" + to_string(root->val) ): to_string(root->val);
       if(!root->left && !root->right) {
           res.push_back(s);
       }
       check(root->left,s, res);
       check(root->right,s, res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        vector<string> res;
         check(root,s, res);
        return res;
    }
};
