// Balanced Parantheses!

// Problem Description

// Given a string A consisting only of '(' and ')'.

// You need to find whether parantheses in A is balanced or not ,if it is balanced then return 1 else return 0.



// Problem Constraints
// 1 <= |A| <= 105



// Input Format
// First argument is an string A.



// Output Format
// Return 1 if parantheses in string are balanced else return 0.



// Example Input
// Input 1:

//  A = "(()())"
// Input 2:

//  A = "(()"


// Example Output
// Output 1:

//  1
// Output 2:

//  0


// Example Explanation
// Explanation 1:

//  Given string is balanced so we return 1
// Explanation 2:

//  Given string is not balanced so we return 0

//Time O(n)
//Space O(n)
int Solution::solve(string A) {
    stack<char> s;
    for(auto a : A){
        if(a == ')') {
            if(s.empty()) return 0;
            else if(s.top() =='(') s.pop();
        }
        else s.push(a);
    }
    
    return s.size() ==0;
}

