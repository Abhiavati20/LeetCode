class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();
        stack<int> st;
        queue<int> que;
        for(int i = 0; i < n; ++i)
        {
            que.push(students[i]);
            st.push(sandwiches[n-i-1]);
        }
        
        int count = 0;
        while(!que.empty() && !st.empty())
        {
            if(que.front() == st.top())
            {
                st.pop();
                que.pop();
                count = 0;
            }
            else{
                que.push(que.front());
                que.pop();
                if(count++ == que.size()) break;
            }
        }
        return que.size();
    }
};