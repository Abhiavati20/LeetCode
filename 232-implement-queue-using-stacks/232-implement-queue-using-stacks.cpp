class MyQueue {
    stack<int> st_1,st_2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st_1.empty()){
            st_2.push(st_1.top());
            st_1.pop();
        }
        st_1.push(x);
        while(!st_2.empty()){
            st_1.push(st_2.top());
            st_2.pop();
        }
    }
    
    int pop() {
        int x = st_1.top();
        st_1.pop();
        
        return x;
    }
    
    int peek() {
        
        int x = st_1.top();
        return x;
    }
    
    bool empty() {
        return st_1.empty() == st_2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */