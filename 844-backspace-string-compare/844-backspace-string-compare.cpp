class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1,st2;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != '#') 
                st1.push(s[i]);
            else if(s[i]=='#' && !st1.empty())
                st1.pop();
        }
        for(int i = 0; i < t.length(); i++)
        {
            if(t[i] != '#') 
                st2.push(t[i]);
            else if(t[i]=='#' && !st2.empty())
                st2.pop();
        }
        string s1 = "",t1 = "";
        while(!st1.empty())
        {
            s1 += st1.top();
            st1.pop();
        }
        while(!st2.empty())
        {
            t1 += st2.top();
            st2.pop();
        }
        return s1 == t1;
    }
};