144. Binary Tree Preorder Traversal
https://leetcode.com/problems/binary-tree-preorder-traversal/
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
//Solution 1: Recursion
// Time : O(n)
//Space : O(d) -> depth of tree

    void recPreorder(vector<int> &result,TreeNode* root){
        if(!root) return;
        result.push_back(root->val);
        recPreorder(result,root->left);
        recPreorder(result,root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        recPreorder(result,root);
        return result;
    }

//Solution 2: Iterative
// Time : O(n)
//Space : O(n)
    vector<int> preorderTraversal(TreeNode* root){
        stack<TreeNode*> s;
        vector<int> result;
        if(!root) return result;
        TreeNode* cur = root;
        s.push(root);
        while(!s.empty()){
            TreeNode* temp = s.top();
            result.push_back(temp->val);
            s.pop();
            if(temp->right) s.push(temp->right);
            if(temp->left) s.push(temp->left);
        }
        
        return result;
    }
    
};
