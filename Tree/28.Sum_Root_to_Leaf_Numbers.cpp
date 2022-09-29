129. Sum Root to Leaf Numbers
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
    void check(TreeNode* root,int sum, int &bigSum){
        if(!root) return;
        sum = (sum*10) + root->val;
        if(!root->left && !root->right){
            bigSum +=sum;
        }
        check(root->left,sum,bigSum);
        check(root->right,sum,bigSum);
    }
    
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        int sum=0;
        int bigSum =0;
        check(root,sum,bigSum);
        return bigSum;
    }
};
