225. Implement Stack using Queues
Easy

3511

915

Add to List

Share
Implement a last-in-first-out (LIFO) stack using only two queues. The implemented stack should support all the functions of a normal stack (push, top, pop, and empty).

Implement the MyStack class:

void push(int x) Pushes element x to the top of the stack.
int pop() Removes the element on the top of the stack and returns it.
int top() Returns the element on the top of the stack.
boolean empty() Returns true if the stack is empty, false otherwise.
Notes:

You must use only standard operations of a queue, which means that only push to back, peek/pop from front, size and is empty operations are valid.
Depending on your language, the queue may not be supported natively. You may simulate a queue using a list or deque (double-ended queue) as long as you use only a queue's standard operations.
 

Example 1:

Input
["MyStack", "push", "push", "top", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 2, 2, false]

Explanation
MyStack myStack = new MyStack();
myStack.push(1);
myStack.push(2);
myStack.top(); // return 2
myStack.pop(); // return 2
myStack.empty(); // return False
 

Constraints:

1 <= x <= 9
At most 100 calls will be made to push, pop, top, and empty.
All the calls to pop and top are valid.
 

Follow-up: Can you implement the stack using only one queue?
  
  //Two Queue
  
class MyStack {
    queue<int> *q1;
    queue<int> *q2;
    int topValue;
public:
    MyStack() {
        q1 = new queue<int>();
        q2 = new queue<int>();
        topValue =0;
    }
    ~MyStack() {
        delete (q1);
        delete (q2);
        topValue =0;
    }
    void push(int x) {
        if(!q2->empty()) q2->push(x);
        else q1->push(x);
        topValue =x;
    }
    
    int pop() {
        queue<int> *SQueue = q1->size() ? q1: q2;
        queue<int> *TQueue = q1->empty() ? q1: q2;
        int size = SQueue->size();
        while(size>1){
           TQueue->push(SQueue->front());
            topValue = SQueue->front();
            SQueue->pop();
            size--;
        }
        int del = SQueue->front();
        SQueue->pop();
        return del;
    }
    
    int top() {
        return topValue;
    }
    
    bool empty() {
        return (q1->size()==0 && q2->size()==0);
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */  
