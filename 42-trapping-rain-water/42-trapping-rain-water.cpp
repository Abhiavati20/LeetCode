class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxl,maxr;
        int n = height.size();
        stack<int> st;
        for(int i = 0; i < n; ++i)
        {
            if(st.empty())
            {
                maxl.push_back(height[i]);
                st.push(height[i]);
            }
            else if (!st.empty() && st.top() < height[i])
            {
                st.pop();
                st.push(height[i]);
                maxl.push_back(height[i]);
            }
            else
            {
                maxl.push_back(st.top());    
            }
        }
        st.pop();
        for(int i = n - 1; i >= 0; --i)
        {
            if(st.empty())
            {
                maxr.push_back(height[i]);
                st.push(height[i]);
            }
            else if (!st.empty() && st.top() < height[i])
            {
                st.pop();
                st.push(height[i]);
                maxr.push_back(height[i]);
            }
            else
            {
                maxr.push_back(st.top());    
            }
        }
        reverse(maxr.begin(),maxr.end());
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += (min(maxl[i],maxr[i]) - height[i]);
        }
        
        return sum;
    }
};