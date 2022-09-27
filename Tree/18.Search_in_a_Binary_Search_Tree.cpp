700. Search in a Binary Search Tree

https://leetcode.com/problems/search-in-a-binary-search-tree/

Input: root = [4,2,7,1,3], val = 2
Output: [2,1,3]
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return NULL;
        if(val == root->val ) return root;
        else if(root->val > val) {
            return searchBST(root->left,val);
        }
        else{
           return searchBST(root->right,val);
        }
        return NULL;
    }
};
