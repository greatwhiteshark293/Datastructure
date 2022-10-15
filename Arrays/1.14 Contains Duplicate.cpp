// 217. Contains Duplicate
// 217. Contains Duplicate
// https://leetcode.com/problems/contains-duplicate/
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

// Example 1:

// Input: nums = [1,2,3,1]
// Output: true
// Example 2:

// Input: nums = [1,2,3,4]
// Output: false
// Example 3:

// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true
 

// Constraints:

// 1 <= nums.length <= 105
// -109 <= nums[i] <= 109

//O(N) Time
//O(N) Space

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int a : nums){
            if(s.find(a) != s.end()) return true;
            s.insert(a);
        }
        return false;
    }
};
