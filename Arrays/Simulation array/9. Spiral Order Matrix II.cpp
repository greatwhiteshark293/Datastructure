// Spiral Order Matrix II

// Given an integer A, generate a square matrix filled with elements from 1 to A2 in spiral order.



// Input Format:

// The first and the only argument contains an integer, A.
// Output Format:

// Return a 2-d matrix of size A x A satisfying the spiral order.
// Constraints:

// 1 <= A <= 1000
// Examples:

// Input 1:
//     A = 3

// Output 1:
//     [   [ 1, 2, 3 ],
//         [ 8, 9, 4 ],
//         [ 7, 6, 5 ]   ]

// Input 2:
//     4

// Output 2:
//     [   [1, 2, 3, 4],
//         [12, 13, 14, 5],
//         [11, 16, 15, 6],
//         [10, 9, 8, 7]   ]


//Time O(n*n)
//Space //O(n*n)
vector<vector<int> > Solution::generateMatrix(int A) {
    int r1 = 0;
    int r2 = A-1;
    int c1 = 0;
    int c2 = A-1;
    vector<vector<int>> result(A,vector<int>(A,0));
    int count =0;
    while( r1 <= r2 && c1 <= c2){
        for(int i=c1;i<=c2;i++){
            result[r1][i] = ++count;
        }
        for(int i=r1+1;i<=r2;i++){
            result[i][c2] = ++count;
        }
        if(r1<r2 && c1 < c2){
            for(int i= c2-1;i>=c1;i--){
                result[r2][i] = ++count;
            }
            for(int i= r2-1;i>r1;i--){
                result[i][c1] = ++count;
            }
        }
        r1++;
        r2--;
        c1++;
        c2--;
    }
    return result;
}
