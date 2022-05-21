class StockSpanner {
    stack<pair<int,int>> st;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int second = 1;
        while(!st.empty() && st.top().first <= price){
            second += st.top().second;
            st.pop();
        }
        st.push({price,second});
        return second;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */