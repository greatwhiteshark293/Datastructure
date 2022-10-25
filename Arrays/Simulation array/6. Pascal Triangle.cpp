// Pascal Triangle

// Asked In:
// Google
// Amazon
// Problem Description
 
 

// Given numRows, generate the first numRows of Pascal's triangle.
// Pascal's triangle : To generate A[C] in row R, sum up A'[C] and A'[C-1] from previous row R - 1.

// Example:

// Given numRows = 5,

// Return

// [
//      [1],
//      [1,1],
//      [1,2,1],
//      [1,3,3,1],
//      [1,4,6,4,1]
// ]
// Constraints:
// 0 <= numRows <= 25

//O(n*row) Time
//O(n*row) Spacke
vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> > result;
    for(int line=1;line<=A;line++){
        int cur =1;
        vector<int> parLine;
        for(int i=1;i<=line;i++){
            parLine.push_back(cur);
            cur = cur * (line - i)/i;
        }
        result.push_back(parLine);
    }
    return result;
}
