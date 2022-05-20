class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> ans(n);
        for(int i = n - 1; i >= 0; i--)
        {
            while(!st.empty() && temperatures[st.top()] <= temperatures[i])
                st.pop();
            int res = st.empty() ? 0 : st.top() - i;
            ans[i] = res;
            st.push(i);
        }
        return ans;
    }
};