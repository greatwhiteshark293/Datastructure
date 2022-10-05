20. Valid Parentheses

// https://leetcode.com/problems/valid-parentheses/

// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.
 

// Example 1:

// Input: s = "()"
// Output: true
// Example 2:

// Input: s = "()[]{}"
// Output: true
// Example 3:

// Input: s = "(]"
// Output: false
 

// Constraints:

// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.

// Time: O(n)
// Space: O(n)
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
// Memory Usage: 6.4 MB, less than 50.48% of C++ online submissions for Valid Parentheses.
  
class Solution {
public:
bool isValid(string s) {
    stack <char> stk;
    for(char a : s){
    if(a == ')') {
        if(!stk.empty() && stk.top() == '(') stk.pop();
        else return false;
          
    }
    else if(a == ']') {
        if(!stk.empty() && stk.top() == '[') stk.pop();
        else return false;
    }
    else if(a == '}') {
        if(!stk.empty() && stk.top() == '{') stk.pop();
        else return false;
    }
    else{
         stk.push(a);   
    }
    }
    return stk.empty() ? true : false;
    }
};
