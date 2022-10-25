// Kth Row of Pascal's Triangle

// Asked In:
// Google
// Problem Description

// Given an index k, return the kth row of the Pascal's triangle.
// Pascal's triangle: To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.

// Example:

// Input : k = 3


// Return : [1,3,3,1]

// Note: k is 0 based. k = 0, corresponds to the row [1]. 

// Note: Could you optimize your algorithm to use only O(k) extra space?

//Time - O(n)
//Space. - O(K) ->k denotes rows
vector<int> Solution::getRow(int A) {
    int cur =1;
    vector<int> result;
    A= A+1;
    for(int i=1;i<=A;i++){
        result.push_back(cur);
        cur = cur * (A-i)/i;
    }
    return result;
}
