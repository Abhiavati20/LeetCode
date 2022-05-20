class Solution {
public:
    string removeDuplicates(string s, int k) {
        int size = s.length();
        if(size < k) return s;
        string res = "";
        stack<pair<char,int>> st;
        for(int i = 0; i < size; i++)
        {
            if(st.empty() || st.top().first != s[i])
                st.push({s[i],1});
            else{
                pair<char,int> topp = st.top();
                st.pop();
                st.push({topp.first, topp.second + 1});
            }
            if(st.top().second == k)
                st.pop();
        }
        while(!st.empty()){
            pair<char,int> ele = st.top();
            while(ele.second--){
                res+=ele.first;
            }
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};