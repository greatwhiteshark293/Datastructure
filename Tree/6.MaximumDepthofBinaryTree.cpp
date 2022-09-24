104. Maximum Depth of Binary Tree

https://leetcode.com/problems/maximum-depth-of-binary-tree/
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
//     int maxDepth(TreeNode* root) {
//         if(!root) return 0;
//         return max(maxDepth(root->left),maxDepth(root->right))+1;
//     }
    
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        stack<pair<TreeNode*,int>> s;
        s.push({root,1});
        int height =0;
        while(!s.empty()){
            TreeNode* temp = s.top().first;
            int h = s.top().second;
            height= max(height,h);
            s.pop();
            if(temp->left) s.push({temp->left,h+1});
            if(temp->right) s.push({temp->right,h+1});
        }
        return height;
            
    }
    
};
