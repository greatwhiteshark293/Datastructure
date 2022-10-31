Min Stack

// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// push(x) – Push element x onto stack.
// pop() – Removes the element on top of the stack.
// top() – Get the top element.
// getMin() – Retrieve the minimum element in the stack.
// Note that all the operations have to be constant time operations.

// Questions to ask the interviewer :

// Q: What should getMin() do on empty stack? 
// A: In this case, return -1.

// Q: What should pop do on empty stack? 
// A: In this case, nothing. 

// Q: What should top() do on empty stack?
// A: In this case, return -1
// NOTE : If you are using your own declared global variables, make sure to clear them out in the constructor.
  
  //Time O(n)
  //Space O(n+k) where k is minimum values
stack<int> s1;
stack<int> s2;
int minValue;
MinStack::MinStack() {
    while (!s1.empty()) s1.pop(); 
    while (!s2.empty()) s2.pop(); 
    minValue =INT_MIN;
}

void MinStack::push(int x) {
    if(s2.empty() || (!s2.empty() && s2.top() > x)){
        s2.push(x);
    }
    s1.push(x);
}

void MinStack::pop() {
    if(s1.empty()) return;
    minValue = s1.top();
    if(!s2.empty() && s2.top() == minValue){
        s2.pop();
    }
    s1.pop();
}

int MinStack::top() {
    return s1.empty() ? -1 : s1.top();
}

int MinStack::getMin() {
    return s2.empty() ? -1 : s2.top();
}


