145. Binary Tree Postorder Traversal
https://leetcode.com/problems/binary-tree-postorder-traversal/
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
//Time: O(n)
//Space : O(d) depth of tree

    void postOrder(TreeNode* root, vector<int> & result){
        if(!root) return;
        postOrder(root->left,result);
        postOrder(root->right,result);
        result.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postOrder(root,result);
        return result;
    }
    
    
//Solution 2: Iterative
//Time: O(n)
//Space : O(n)
        vector<int> postorderTraversal(TreeNode* root) {
            vector<int> result;
            TreeNode* cur = root;
            if(!cur) return result;
            set<TreeNode*> st;
            stack<TreeNode*> s;
            while(!s.empty() || cur){
                if(st.find(cur) != st.end())
                {
                    result.push_back(cur->val);
                    cur= NULL; 
                }
                else if(cur){
                    s.push(cur);
                    if(cur->right) s.push(cur->right);
                    st.insert(cur);
                    cur = cur->left;
                }
                else{
                    cur = s.top();
                    s.pop();
                }
            }
            
            
            return result;
    }
};
