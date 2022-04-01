class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> mp;
        for(int i = 0; i < allowed.length(); i++)
            mp[allowed[i]]++;
        int count = 0,flag = 1;
        for(int i = 0; i < words.size(); i++){
            flag = 1;
            for(auto c : words[i]){
                if(mp[c] == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag) count++;
        }
        return count;
    }
};