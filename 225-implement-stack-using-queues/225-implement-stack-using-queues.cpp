class MyStack {
    queue<int> q1,q2;
    int size = 0;
public:
    MyStack() {
        size = 0;
    }
    
    void push(int x) {
        size++;
 
        // Push x first in empty q2
        q2.push(x);
 
        // Push all the remaining
        // elements in q1 to q2.
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
 
        // swap the names of two queues
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }
    
    int pop() {
        if (q1.empty())
            return -1;
        int x = q1.front();
        q1.pop();
        size--;
        return x;
    }
    
    int top() {
        if (q1.empty())
            return -1;
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
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