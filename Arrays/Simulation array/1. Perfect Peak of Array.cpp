// Perfect Peak of Array

// Asked In:
// Flipkart
// Ola
// Problem Description
 
 

// Given an integer array A of size N.

// You need to check that whether there exist a element which is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it.

// If it exists return 1 else return 0.

// NOTE:

// Do not consider the corner elements i.e A[0] and A[N-1] as the answer.


// Problem Constraints
// 3 <= N <= 105

// 1 <= A[i] <= 109



// Input Format
// First and only argument is an integer array A containing N integers.



// Output Format
// Return 1 if there exist a element that is strictly greater than all the elements on left of it and strictly  smaller than all the elements on right of it else return 0.



// Example Input
// Input 1:

//  A = [5, 1, 4, 3, 6, 8, 10, 7, 9]
// Input 2:

//  A = [5, 1, 4, 4]


// Example Output
// Output 1:

//  1
// Output 2:

//  0


// Example Explanation
// Explanation 1:

//  A[4] = 6 is the element we are looking for.
//  All elements on left of A[4] are smaller than it and all elements on right are greater.
// Explanation 2:

//  No such element exits.
   
   
//Solution 1 - O(n) Time O(1) space

int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();
    if(n == 2) return 0;
    for(int i=1;i<n-1;i++){
        if(A[i-1] < A[i] && A[i] < A[i+1]){
            int j = i+1;
            int k = i-1;
            while(k>=0){
                if(A[i] <= A[k]) break;
                k--;
            }
            while(j<n){
                if(A[i] >= A[j]) break;
                j++;
            }
            if(k == -1 && j == n) return 1;
            
        }
    }
    return 0;
}
//Solution 2 - O(n) Time O(n) space

int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();
    vector<int> leftMax(n);
    vector<int> rightMin(n);
    leftMax[0] = INT_MIN;
    rightMin[n-1] = INT_MAX;
    for(int i=1;i<n;i++){
        leftMax[i] = max(leftMax[i-1],A[i-1]);
    }
    for(int i=n-2;i>0;i--){
        rightMin[i] = min(rightMin[i+1],A[i+1]);
    }
    for(int i=1;i<n-1;i++){
        if(leftMax[i] < A[i] && A[i] <rightMin[i]) return 1;
    }
    return 0;
}
