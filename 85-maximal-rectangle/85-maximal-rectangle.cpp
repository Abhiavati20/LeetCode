class Solution {
public:
    int maximumAreaHisto(vector<int> &arr)
    {
        stack<pair<int,int>> st;
        
        int maxArea = INT_MIN;
        
        vector<int> left,right;
        
        for(int i = arr.size() - 1; i >=0 ; --i)
        {
            while(!st.empty() && st.top().first >= arr[i])
                st.pop();
            st.empty() ? right.push_back(arr.size()) : right.push_back(st.top().second);
            st.push({arr[i],i});
        }
        
        reverse(right.begin(),right.end());
        
        while(!st.empty()) st.pop();
        
        for(int i = 0; i < arr.size(); ++i)
        {
            while(!st.empty() && st.top().first >= arr[i])
                st.pop();
            st.empty() ? left.push_back(-1) : left.push_back(st.top().second);
            st.push({arr[i],i});
        }
        
        for(int i = 0; i < arr.size(); ++i)
        {
            int area = (right[i] - left[i] - 1) * arr[i];
            maxArea = maxArea > area ? maxArea : area; 
        }
        return maxArea;
        
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        vector<int> temp;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int j = 0; j < m; ++j)
            temp.push_back(matrix[0][j] - 48);
        
        int mxarea = maximumAreaHisto(temp);
        
        for(int i = 1; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                if(matrix[i][j] - 48 == 0)
                    temp[j] = 0;
                else
                    temp[j] = temp[j] + (matrix[i][j] - 48);
            }
            int mah = maximumAreaHisto(temp);
            mxarea = mxarea > mah ? mxarea : mah; 
        }
        
        return mxarea;
        
    }
};