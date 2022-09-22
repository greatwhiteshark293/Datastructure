94. Binary Tree Inorder Traversal
https://leetcode.com/problems/binary-tree-inorder-traversal/

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
//Solution 1: Recursive
//Space :O(d) depth of tree
//Time: O(n)
    void inorder(vector<int> &result,TreeNode* root){
        if(!root) return;
        inorder(result,root->left);
        result.push_back(root->val);
        inorder(result,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorder(result,root);
        cout<<"fs"<<endl;
        return result; 
    }

//Solution 2: Iterative 
//Space :O(n)
//Time: O(n)
    vector<int> inorderTraversal(TreeNode* root){
        stack<TreeNode*> s;
        vector<int> result;
        TreeNode* cur = root;       
        cout<<"fds"<<endl;
        while(!s.empty() || cur != NULL){
            if(cur){
                s.push(cur);
                cur = cur->left;
            }
            else{
                TreeNode* temp =s.top();
                result.push_back(temp->val);
                cur = temp->right;
                s.pop();
            }
        }
        return result;
    }
    
};
