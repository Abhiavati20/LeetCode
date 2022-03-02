class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0) return true;
        if(s.size() > t.size()) return false;
        string large = s.length() < t.length() ? t : s;
        string small = s.length() < t.length() ? s : t;
        int i = 0,j=0;
        for(; i < large.length(); i++){
            if(small[j] == large[i])
                j++;
        }
        if(j == small.length())
            return true;
        return false;
    }
};