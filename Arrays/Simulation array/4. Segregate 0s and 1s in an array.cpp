// Problem Description
 
 


// You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array [Basically you have to sort the array]. Traverse array only once. 



// Segregate 0s and 1s in an array

// Problem Constraints
// 1<=|A|<=1e6


// Input Format
// First argument is array of integers consisting of 0's and 1's only.


// Output Format
// Return a sorted array.


// Example Input
// Input 1:
// a=[0 1 0]
// Input 2:

// A=[1 1 0 ]


// Example Output
// Ouput 1:
// [0 0 1]
// Ouput 2:

// [0 1 1]


// Example Explanation
// Explanation 1:
//  above is sorted array.
// Explanation 2:

// sort the array.
//Time - O(n+k) ->O(n)
//Space - O(1)
vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    int k =0;
    for(int i=0;i<n;i++){
        if(A[i] == 0) A[k++] =0;
    }
    while(k<n) A[k++] =1;
    return A;
}

