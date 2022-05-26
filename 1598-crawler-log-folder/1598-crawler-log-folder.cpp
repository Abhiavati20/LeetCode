class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        for(string i : logs)
        {
            if(i == "../" && !st.empty())
            {
                st.pop();
            }
            else if(i == "./")
            {
                continue;
            }
            else if(i != "../" && i!="./")
                st.push(i);
        }
        
        return st.size();
    }
};