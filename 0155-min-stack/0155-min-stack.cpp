class MinStack {
public:
    MinStack() {
        
    }
    stack<long long> st;
    long long mini;
    
    void push(int val) {
        if(st.empty()){
            st.push(val);
            mini = val;
        } else if(val < mini){
            long long newVal = 2LL * val - mini;
            st.push(newVal);
            mini = val;
        } else {
            st.push(val);
        }
    }
    
    void pop() {
        if(st.empty()) return;
        
        long long curr = st.top();
        st.pop();
        
        if(curr < mini){
            mini = 2LL * mini - curr;
        }
        
        if(st.empty()) {
            mini = LLONG_MAX;
        }
    }
    
    int top() {
        long long curr = st.top();
        if(curr < mini){
            return mini;
        }
        return curr;
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */