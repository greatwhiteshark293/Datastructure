// Max Min
// https://www.interviewbit.com/problems/max-min-05542f2f-69aa-4253-9cc7-84eb7bf739c4/

// Problem Description

// Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

// NOTE: You should make minimum number of comparisons.



// Problem Constraints
// 1 <= N <= 105

// -109 <= A[i] <= 109



// Input Format
// First and only argument is an integer array A of size N.



// Output Format
// Return an integer denoting the sum Maximum and Minimum element in the given array.



// Example Input
// Input 1:

//  A = [-2, 1, -4, 5, 3]
// Input 2:

//  A = [1, 3, 4, 1]


// Example Output
// Output 1:

//  1
// Output 2:

//  5


// Example Explanation
// Explanation 1:

//  Maximum Element is 5 and Minimum element is -4. (5 + (-4)) = 1. 
// Explanation 2:

//  Maximum Element is 4 and Minimum element is 1. (4 + 1) = 5.
   
   int Solution::solve(vector<int> &A) {
    if(A.size() == 1) return A[0];
    int maxElement =INT_MIN;
    int minElement =INT_MAX;
    for(int i=0;i<A.size();i++){
        maxElement = max(A[i],maxElement);
        minElement = min(A[i],minElement);
    }
    return maxElement + minElement;
}
