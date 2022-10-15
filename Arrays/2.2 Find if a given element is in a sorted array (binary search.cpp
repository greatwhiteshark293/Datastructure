540. Single Element in a Sorted Array

You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

 

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10
 

Constraints:

1 <= nums.length <= 105
0 <= nums[i] <= 105
  
//Time O(n)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int size =nums.size();
        if(size == 1) return nums[0];
        int left =0;
        int right = size-1;
        while(left<=right){
            if(left < size -1 && nums[left] != nums[left+1]) return nums[left];
            if(right > 0 && nums[right] != nums[right-1]) return nums[right];
            left+=2;
            right-=2;
        }  
        return 0;
    }
};
