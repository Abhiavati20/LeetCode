class Solution {
public:
    bool hasAllCodes(string s, int k) 
    {
        if(s.size()<k)
            return false;
        unordered_set<string> unordered_str;
        for(int i=0;i<=s.size()-k;i++){
            unordered_str.insert(s.substr(i,k));
        }
        bool ans = unordered_str.size()==(1<<k);
        return ans;
    }
};