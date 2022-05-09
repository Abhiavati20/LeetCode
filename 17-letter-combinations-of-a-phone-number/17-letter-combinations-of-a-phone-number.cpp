class Solution {
public:
    void solve(string digits, string output, int index, string mapping[], vector<string>& ans)
    {
        if(index >= digits.length())
        {
            ans.push_back(output);
            return ;
        }
        
        int number = digits[index] - '0';     
        string value = mapping[number];              
        for(int i=0; i<value.length(); i++)
        {
            output.push_back(value[i]);      
            solve(digits, output, index+1, mapping, ans);    
            output.pop_back();       
        }
    }
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;       
        string output = "";       
        
        if(digits.length() == 0)    
            return ans;
        
        int i = 0;     
        string mapping[10] =  {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};           
        solve(digits, output, i, mapping, ans);
        return ans;
        
    }
};