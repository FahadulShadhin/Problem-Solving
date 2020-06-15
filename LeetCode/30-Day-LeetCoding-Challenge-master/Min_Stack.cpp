class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> stack, min;
    MinStack() { } // constructor
    
    void push(int x) {
        stack.push_back(x);
        if(min.empty() or min.back() >= x)
            min.push_back(x);
    }
    
    void pop() {
        if(stack.back() == min.back()) {
            min.pop_back();
            stack.pop_back();
        }
        else 
            stack.pop_back();
    }
    
    int top() {
        if(stack.size() != 0) 
            return stack.back();
        else 
            return NULL;
    }
    
    int getMin() {
        if(min.size() != 0) 
           return min.back();
        else 
            return NULL;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
