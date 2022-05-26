class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); ++i)
        {
            if(!st.empty()&&(st.top() + 32 == s[i] || st.top() - 32 == s[i]))
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        s = "";
        while(!st.empty())
        {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};