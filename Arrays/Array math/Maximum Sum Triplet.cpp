// Maximum Sum Triplet
// https://www.interviewbit.com/problems/maximum-sum-triplet/
// Asked In:
// Directi
// LIDO Learning
// Problem Description
 
 

// Given an array A containing N integers.

// You need to find the maximum sum of triplet ( Ai + Aj + Ak ) such that 0 <= i < j < k < N and Ai < Aj < Ak.

// If no such triplet exist return 0.



// Problem Constraints
// 3 <= N <= 105.

// 1 <= A[i] <= 108.



// Input Format
// First argument is an integer array A.



// Output Format
// Return a single integer denoting the maximum sum of triplet as described in the question.



// Example Input
// Input 1:

//  A = [2, 5, 3, 1, 4, 9]
// Input 2:

//  A = [1, 2, 3]


// Example Output
// Output 1:

//  16
// Output 2:

//  6


// Example Explanation
// Explanation 1:

//  All possible triplets are:-
//     2 3 4 => sum = 9
//     2 5 9 => sum = 16
//     2 3 9 => sum = 14
//     3 4 9 => sum = 16
//     1 4 9 => sum = 14
//   Maximum sum = 16
// Explanation 2:

//  All possible triplets are:-
//     1 2 3 => sum = 6
//  Maximum sum = 6

//Time Complexity -> for lowerbound in set O(logn) and n iteration -> O(n logn)

int getLowerValue(set<int> &lower_value, int x){
    auto it = lower_value.lower_bound(x);
    it--;
    return *it;
}
int Solution::solve(vector<int> &A) {
    int n = A.size();
    if(n < 3) return 0;
    
    vector<int> maxSumArray(n);
    set<int> lower_value;
    int result =0;
    maxSumArray[n-1] =A[n-1];
    
    for(int i=n-2;i>=0;i--){
        maxSumArray[i] =max(maxSumArray[i+1],A[i]);
    }
    lower_value.insert(INT_MIN);
    
    for(int i=0;i<n-1;i++){
        if(maxSumArray[i] > A[i]){
                 int sum = A[i]+ maxSumArray[i]+getLowerValue(lower_value,A[i]);
                // cout<< A[i]<<" "<<maxSumArray[i]<<" "<<getLowerValue(lower_value,A[i])<<endl;
                result = max(result,sum);   
        }

        lower_value.insert(A[i]);
    }
    
    return result;
}

