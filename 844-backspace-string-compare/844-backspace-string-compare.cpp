class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st,st1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] != '#')
                st1.push(s[i]);
            else if(!st1.empty())
                st1.pop();
        }
        
        for(int i = 0; i < t.length(); i++){
            if(t[i] != '#')
                st.push(t[i]);
            else if(!st.empty())
                st.pop();
        }
        
        string s1 = "",t1 = "";
        while(!st1.empty()){
            s1 += st1.top();
            st1.pop();
        }
        while(!st.empty()){
            t1 += st.top();
            st.pop();
        }
        return s1 == t1;
    }
};