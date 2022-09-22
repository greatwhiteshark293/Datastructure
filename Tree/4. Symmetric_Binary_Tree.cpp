Symmetric Binary Tree
https://www.interviewbit.com/problems/symmetric-binary-tree/
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//Time - 0(n)
int isEqual(TreeNode* r1 , TreeNode* r2){
    if(!r1 || !r2) return r1 == r2;
    if(r1->val != r2->val) return 0;
    return (r1 && r2) && isEqual(r1->left,r2->right) && isEqual(r1->right,r2->left);
}
int Solution::isSymmetric(TreeNode* root) {
    if(!root) return 1;
    return isEqual(root->left,root->right);
}
