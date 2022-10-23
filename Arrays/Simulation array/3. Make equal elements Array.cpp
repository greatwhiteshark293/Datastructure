// Make equal elements Array

// Asked In:
// Amazon
// Problem Description
 
 

// Given an array of all positive integers and an element “x”. 

// You need to find out whether all array elements can be made equal or not by performing any of the 3 operations: add x to any element in array, subtract x from any element from array, do nothing.

//  This operation can be performed only once on an element of array.



// Problem Constraints
// 1<=|A|<=1e5
// 1<=A[i],x<=1e9


// Input Format
// First argument is array of integers .
// Second argument is B which denotes the value of x.


// Output Format
// Return 1 if we can make all elements equal , otherwise return 0.


// Example Input
// Input 1:
// A=[2,3,1]
// X=1
// Input 2:

// A=[2,3,1]
// X=2


// Example Output
// Ouput 1:
// 1
// Ouput 2:

// 0


// Example Explanation
// Explanation 1:
// WE can make all elements equal to 2.
// Explanation 2:

// There is no way to make all elements equal to 0.

// Space O(k) ->k is unique element
// Time O(n+k) -> insert and size maipulation
int Solution::solve(vector<int> &A, int B) {
    set<int> s;
    for(auto a : A){
        s.insert(a);
    }
    if(s.size() >3) return 0;
    else if(s.size() == 1) return 1;
    else if (s.size() == 2)
    {
        auto x = s.begin(); s.erase(x);
        auto y = s.begin(); s.erase(y);
        return (B == (*y-*x)) ? 1 : 0;
    }
    else if (s.size() == 3)
    {
        auto x = s.begin(); s.erase(x);
        auto y = s.begin(); s.erase(y);
        auto z = s.begin(); s.erase(z);
        return (B == (*y-*x) && (B == (*z-*y))) ? 1 :0;
    }
    return 0;
}

