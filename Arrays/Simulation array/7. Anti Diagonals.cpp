// Anti Diagonals

// Asked In:
// Microsoft
// Adobe
// Problem Description

// Give a N*N square matrix, return an array of its anti-diagonals. Look at the example for more details.
// Example:

// Input:

// 1 2 3
// 4 5 6
// 7 8 9
// Return the following:
// [ 
//   [1],
//   [2, 4],
//   [3, 5, 7],
//   [6, 8],
//   [9]
// ]


// Input: 
// 1 2
// 3 4
// Return the following: 
// [
//   [1],
//   [2, 3],
//   [4]
// ]
//Time - O(n*n)
//Space - O(2*N-1) 
vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int  m= A.size();
    if(m ==0 ) return {};
    int n = A[0].size();
    vector<vector<int>> result(2*m-1);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result[i+j].push_back((A[i][j]));
        }
    }
    return result;
}

