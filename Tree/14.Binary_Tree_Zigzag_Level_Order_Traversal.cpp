103. Binary Tree Zigzag Level Order Traversal
https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

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

//      0
//    2  4
//  1 N 3 -1 
// 5 1  N 6 N 8
    
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        bool sign = true;
        while(!q.empty()){
            int size = q.size();
            vector<int> out;
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                out.push_back(temp->val);
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(sign == false) reverse(out.begin(),out.end());
            sign = !sign;
            res.push_back(out);
        }
        return res;
    }
};
