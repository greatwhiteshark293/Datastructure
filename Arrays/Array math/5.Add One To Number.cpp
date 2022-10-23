// Add One To Number

// Asked In:
// Google
// Microsoft
// Problem Description

// Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).

// The digits are stored such that the most significant digit is at the head of the list.

// NOTE: Certain things are intentionally left unclear in this question which you should practice asking the interviewer. For example: 
// for this problem, following are some good questions to ask :

// Q : Can the input have 0's before the most significant digit. Or in other words, is 0 1 2 3 a valid input?
// A : For the purpose of this question, YES
// Q : Can the output have 0's before the most significant digit? Or in other words, is 0 1 2 4 a valid output?
// A : For the purpose of this question, NO. Even if the input has zeroes before the most significant digit.


// Input Format
// First argument is an array of digits.



// Output Format
// Return the array of digits after adding one.



// Example Input
// Input 1:

// [1, 2, 3]


// Example Output
// Output 1:

// [1, 2, 4]


// Example Explanation
// Explanation 1:

// Given vector is [1, 2, 3].
// The returned vector should be [1, 2, 4] as 123 + 1 = 124.

//Time O(n)
//Space O(1) or O(K) for first element
vector<int> Solution::plusOne(vector<int> &A) {
    int n= A.size();
    int addSum =1;
    for(int i=n-1;i>=0;i--){
        A[i] = A[i] + addSum;
        addSum = (A[i] > 0) ? (A[i]/10) : 0;
        if(A[i] >= 10){
            A[i] = A[i] %10;  
        }
        
    }
    if(addSum) A.insert(A.begin(),addSum);
    while(A[0]==0) A.erase(A.begin()+0);
    return A;
}
