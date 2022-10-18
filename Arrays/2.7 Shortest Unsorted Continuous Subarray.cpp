// 581. Shortest Unsorted Continuous Subarray

// Given an integer array nums, you need to find one continuous subarray that if you only sort this subarray in ascending order, then the whole array will be sorted in ascending order.

// Return the shortest such subarray and output its length.

 

// Example 1:

// Input: nums = [2,6,4,8,10,9,15]
// Output: 5
// Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.
// Example 2:

// Input: nums = [1,2,3,4]
// Output: 0
// Example 3:

// Input: nums = [1]
// Output: 0
 

// Constraints:

// 1 <= nums.length <= 104
// -105 <= nums[i] <= 105
 

// Follow up: Can you solve it in O(n) time complexity?
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int size = nums.size()-1;
        if(size ==0) return 0;
        int right =-1;
        int left = -1;
        int maxN = nums[0];
        int minN = nums[size];
        for(int i=1;i<=size;i++){
            int a = nums[i];
            int b = nums[size-i];
            if(a >= maxN) maxN = a;
            else right =i;
            if(b <= minN) minN =b;
            else left =i;
        }
        return max(0,left+right-size+1);
    }
};
