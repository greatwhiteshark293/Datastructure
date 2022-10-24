// Array Sum

// Asked In:
// Paytm
// Problem Description
 
 

// You are given two numbers represented as integer arrays A and B, where each digit is an element.

// You have to return an array which representing the sum of the two given numbers.

// The last element denotes the least significant bit, and the first element denotes the most significant bit.



// Problem Constraints
// 1 <= |A|, |B| <= 105
// 0 <= Ai, Bi <= 9


// Input Format
// The first argument is an integer array A. The second argument is an integer array B.


// Output Format
// Return an array denoting the sum of the two numbers.


// Example Input
// Input 1:
// A = [1, 2, 3]
// B = [2, 5, 5]
// Input 2:

// A = [9, 9, 1]
// B = [1, 2, 1]


// Example Output
// Output 1:
// [3, 7, 8]
// Output 2:

// [1, 1, 1, 2]


// Example Explanation
// Explanation 1:
// Simply, add all the digits in their place.
// Explanation 2:

// 991 + 121 = 1112
// Note that the resultant array size might be larger.


vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) {
    vector<int> res;
    int m = A.size();
    int n = B.size();
    int i= m-1;
    int j= n-1;
    int rec = 0;
    
    while(i>=0 || j>=0){
        int sum = ((i>=0 && j>=0) ? A[i]+B[j] : (i>=0) ? A[i] : B[j]) +rec;
        rec = sum > 0 ? sum /10 : 0;
        res.push_back(sum%10);
        j--;
        i--;
    }
    if(rec) res.push_back(rec);
    
    reverse(res.begin(),res.end());
    
    return res;
}
