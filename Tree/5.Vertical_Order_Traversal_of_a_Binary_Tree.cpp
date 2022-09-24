987. Vertical Order Traversal of a Binary Tree

https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
Discuss: https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/discuss/2527032/C%2B%2B-or-BFSMultiset-or-Striver-Method

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
// Time Complexity: O(NlogNlogN*logN)
// Space Complexity: O(N)
        vector<vector<int> >verticalTraversal(TreeNode* A) {
    map<int,map<int,multiset<int>>> m;
    queue<pair<TreeNode*,pair<int,int>>> q;
    vector<vector<int> > res;
    if(!A) return res;
    q.push({A,{0,0}});
    while(!q.empty()){
        auto temp = q.front();
        TreeNode* node = temp.first;
        pair<int,int> axis = temp.second;
        int x = axis.first;
        int y = axis.second;
        m[x][y].insert(node->val);
        q.pop();
        if(node->left) q.push({node->left,{x-1,y+1}});
        if(node->right) q.push({node->right,{x+1,y+1}});
    }
    for(auto p : m){
        vector<int> row;
        for(auto k : p.second){
            row.insert(row.end(), k.second.begin(), k.second.end());
        }
        res.push_back(row);
    }
    
    return res;
}

 
    
    
};
