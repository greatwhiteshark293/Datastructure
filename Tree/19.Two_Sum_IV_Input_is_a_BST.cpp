653. Two Sum IV - Input is a BST

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
    bool check(TreeNode* root, int k,set<int> &s){
        if(!root) return false;
        if(s.count(k-root->val)) return true;
        s.insert(root->val);
        return check(root->left,k,s) || check(root->right,k,s);
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;
        set<int> s;
        return check(root,k,s);
    }
};
