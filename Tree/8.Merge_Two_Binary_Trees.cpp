617. Merge Two Binary Trees
https://leetcode.com/problems/merge-two-binary-trees/
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
    // O(N) Time
    // O(N) Space
    
    TreeNode* mergeTrees(TreeNode* r1, TreeNode* r2) {
        TreeNode* newNode = NULL;
        if(!r1 && !r2) return NULL;
        else if(r1&& r2) newNode = new TreeNode(r1->val+r2->val);
        else newNode = r1 ? new TreeNode(r1->val) : new TreeNode(r2->val);
        if(!newNode) return newNode;
        
        newNode->left = mergeTrees(r1 ? r1->left:NULL, r2 ? r2->left:NULL);
        newNode->right = mergeTrees(r1 ? r1->right:NULL, r2 ? r2->right:NULL);
        return newNode;
    }
};
