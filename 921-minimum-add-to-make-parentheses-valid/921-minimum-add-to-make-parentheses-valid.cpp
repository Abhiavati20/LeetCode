class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        stack<char> st;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == '(')
            {
                st.push(s[i]);
                count++;
            }
            else if(s[i]== ')' && st.empty())
                count++;
            else if(s[i]== ')' && st.top() == '(')
            {
                st.pop();
                count--;
            }
        }
        return count;
    }
};