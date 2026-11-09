class MinStack {
private:
stack<int> st;
stack <int> min_state;

public:
    MinStack() {
        
        
        

        
    }
    
    void push(int val) {
        st.push(val);
        if(!min_state.empty()){
        min_state.push(min(min_state.top(),val));}
        else{
            min_state.push(val);
        }
        
        

        
    }
    
    void pop() {
        
        
        st.pop();
        min_state.pop();

        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return min_state.top();
        
    }
};
