class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        stack<int> st;
        vector<int> res;
        for(int i = prices.size() - 1; i >=0 ; i--)
        {
            while(!st.empty() && st.top() > prices[i])
                st.pop();
            st.empty() ? res.push_back(prices[i]) : res.push_back(prices[i] - st.top());
            st.push(prices[i]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};