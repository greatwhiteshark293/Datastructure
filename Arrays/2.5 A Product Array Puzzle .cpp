// 238. Product of Array Except Self

// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

 

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]
 

// Constraints:

// 2 <= nums.length <= 105
// -30 <= nums[i] <= 30
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 

// Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)

// Accepted
// 1,404,650
// Submissions


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftArray (nums.size(),1);
        vector<int> rightArray (nums.size(),1);
        for(int i=1;i<nums.size();i++){
            leftArray[i] = leftArray[i-1]*nums[i-1];
        }
        for(int i = nums.size()-2;i>=0;i--){
            rightArray[i] = rightArray[i+1]*nums[i+1];
            leftArray[i] *= rightArray[i];
        }
        leftArray[nums.size()-1] *= rightArray[nums.size()-1];
        return leftArray;
    }
};
