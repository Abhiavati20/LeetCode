class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i = 0; i < tokens.size(); i++)
        {
            
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*"|| tokens[i] == "/"){
                    if(tokens[i] == "+") 
                    {
                        int first = st.top();
                        st.pop();
                        int second = st.top();
                        st.pop();
                        st.push(second + first);
                    };
                    if(tokens[i] == "-")
                    {
                        int first = st.top();
                        st.pop();
                        int second = st.top();
                        st.pop();
                        st.push(second - first);
                    };
                    if(tokens[i] == "*")
                    {
                        int first = st.top();
                        st.pop();
                        int second = st.top();
                        st.pop();
                        st.push(second * first);
                    };
                    if(tokens[i] == "/")
                    {
                        int first = st.top();
                        st.pop();
                        int second = st.top();
                        st.pop();
                        st.push(second / first);
                    }
                }
            
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};