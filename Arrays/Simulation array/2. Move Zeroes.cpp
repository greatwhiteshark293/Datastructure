// Move Zeroes

// Asked In:
// Adobe
// Problem Description
 
 

// Given an integer array A, move all 0's to the end of it while maintaining the relative order of the non-zero elements.


// Note that you must do this in-place without making a copy of the array.



// Problem Constraints
// 1 <= |A| <= 105


// Input Format
// First argument is array of integers A.


// Output Format
// Return an array of integers which satisfies above property.


// Example Input
// Input 1:
// A = [0, 1, 0, 3, 12]
// Input 2:

// A = [0]


// Example Output
// Ouput 1:
// [1, 3, 12, 0, 0]
// Ouput 2:

// [0]


// Example Explanation
// Explanation 1:
// Shift all zeroes to the end.
// Explanation 2:

// There is only one zero so no need of shifting.
  
  
//O(n+k) -> O(n) Time Complexity  
vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    int j=0;
    for(int i=0;i<n;i++){
        if(A[i] != 0) A[j++] = A[i];
    }
    while(j<n){
        A[j] =0;
        j++;
    } 
    return A;
}
  
