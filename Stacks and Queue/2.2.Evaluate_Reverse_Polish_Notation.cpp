// 150. Evaluate Reverse Polish Notation
// https://leetcode.com/problems/evaluate-reverse-polish-notation/

// Evaluate the value of an arithmetic expression in Reverse Polish Notation.

// Valid operators are +, -, *, and /. Each operand may be an integer or another expression.

// Note that division between two integers should truncate toward zero.

// It is guaranteed that the given RPN expression is always valid. That means the expression would always evaluate to a result, and there will not be any division by zero operation.

 

// Example 1:

// Input: tokens = ["2","1","+","3","*"]
// Output: 9
// Explanation: ((2 + 1) * 3) = 9
// Example 2:

// Input: tokens = ["4","13","5","/","+"]
// Output: 6
// Explanation: (4 + (13 / 5)) = 6
// Example 3:

// Input: tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
// Output: 22
// Explanation: ((10 * (6 / ((9 + 3) * -11))) + 17) + 5
// = ((10 * (6 / (12 * -11))) + 17) + 5
// = ((10 * (6 / -132)) + 17) + 5
// = ((10 * 0) + 17) + 5
// = (0 + 17) + 5
// = 17 + 5
// = 22
 

// Constraints:

// 1 <= tokens.length <= 104
// tokens[i] is either an operator: "+", "-", "*", or "/", or an integer in the range [-200, 200].
  
  
  
  class Solution {
public:
    bool digitCheck(string s){
        if(s.size() ==1 ) return isdigit(s[0]);
        return isdigit(s[1]);
    }
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto a : tokens){
            if( !digitCheck(a) && s.size() > 1){
                long y = s.top();s.pop();
                long x = s.top();s.pop();
                 long res =0;
                if(a =="+") res = x+y;
                else if(a == "-") res = x-y;
                else if(a == "*") res = x*y;
                else if(a == "/") res = x/y;
                s.push((int)res);
            }
            else if(digitCheck(a) ){
                int val = stoi(a);
                s.push(val);
            }
        }
        return !s.empty() ? s.top() : 0;
    }
};
