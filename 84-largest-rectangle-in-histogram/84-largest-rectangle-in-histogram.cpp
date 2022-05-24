class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> st;
        vector<int> right,left,width;
        int n = heights.size();
        for(int i = n - 1; i >= 0; i--)
        {
            while(!st.empty() && st.top().first >= heights[i])
                st.pop();
            st.empty() ? right.push_back(n) : right.push_back(st.top().second);
            st.push({heights[i], i});
        }
        reverse(right.begin(),right.end());
        while(!st.empty())
            st.pop();
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && st.top().first >= heights[i])
                st.pop();
            st.empty() ? left.push_back(-1) : left.push_back(st.top().second);
            st.push({heights[i], i});
        }
        int maxarea = INT_MIN;
        for(int i = 0; i < n; i++){
            int width = right[i]  - left[i] - 1;
            maxarea = maxarea > heights[i] * width ? maxarea :heights[i] * width;  
        }
        return maxarea;
    }
};