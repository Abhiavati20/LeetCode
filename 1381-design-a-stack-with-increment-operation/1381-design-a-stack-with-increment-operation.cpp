class CustomStack {
    int *arr;
    int top,size;
public:
    CustomStack(int maxSize) {
        arr = new int[maxSize];
        for(int i = 0; i < maxSize; ++i)
            arr[i] = 0;
        size = maxSize;
        top = -1;
    }
    
    void push(int x) {
        if(top + 1 != size)
        {
            arr[++top] = x;
        }
    }
    
    int pop() {
        int x = -1;
        if(top!=-1)
        {
            x = arr[top];
            top--;
        }
        return x;
    }
    
    void increment(int k, int val) {
        for(int i = 0; i < k && i < size; ++i)
            arr[i] += val;
            
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */