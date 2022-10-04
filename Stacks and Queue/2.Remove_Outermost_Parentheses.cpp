1021. Remove Outermost Parentheses

https://leetcode.com/problems/remove-outermost-parentheses/
// Example 1:

// Input: s = "(()())(())"
// Output: "()()()"
// Explanation: 
// The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
// After removing outer parentheses of each part, this is "()()" + "()" = "()()()".
// Example 2:

// Input: s = "(()())(())(()(()))"
// Output: "()()()()(())"
// Explanation: 
// The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
// After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".
// Example 3:

// Input: s = "()()"
// Output: ""
// Explanation: 
// The input string is "()()", with primitive decomposition "()" + "()".
// After removing outer parentheses of each part, this is "" + "" = "".


//Time O(n)
//Space O(n)
class Solution {
public:
string removeOuterParentheses(string s) {
    int p =0;
    string res="";
        for(auto a: s){
            if(a =='('){
                if(p>0) res += a;
                 p++;
            }
            else{
                p--;
                if(p >0) res += a;
            }
        }

    return res;
}
};
