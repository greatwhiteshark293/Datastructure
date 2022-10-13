// 108. Convert Sorted Array to Binary Search Tree

// Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

// A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.

// Example 1:
// Input: nums = [-10,-3,0,5,9]
// Output: [0,-3,9,-10,null,5]
// Explanation: [0,-10,5,null,-3,null,9] is also accepted:

// Example 2:

// Input: nums = [1,3]
// Output: [3,1]
// Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.
 

// Constraints:

// 1 <= nums.length <= 104
// -104 <= nums[i] <= 104
// nums is sorted in a strictly increasing order.

// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// Time Complexity: O(n)
// Because T(n) = 2T(n/2) + O(1) and with Master Theorem T(n) = aT (n/b) + Θ((n)^k)((logn)^p)) where a ≥ 1,b >1,k ≥ 0 and p is a real number.
// So for this case a = 2, b = 2, p = 0, k = 0, p = 0.
// So our case is 1) if a > b^k
// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/discuss/1813194/oror-Recursion-oror-C%2B%2B-oror-Complexity-analysis

class Solution {
public:
    TreeNode* getTree(vector<int>& nums, int low, int high){
        int mid = low + (high -low)/2;
        if(low > high) return NULL;
        TreeNode* newTree = new TreeNode(nums[mid]);
        newTree->left = getTree(nums,low,mid-1);
        newTree->right = getTree(nums,mid+1,high);
        return newTree;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int left =0;
        int right = nums.size()-1;
        return getTree(nums,left,right);
    }
};
