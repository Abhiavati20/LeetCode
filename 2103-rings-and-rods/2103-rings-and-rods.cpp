class Solution {
public:
    int countPoints(string rings) {
        map<char,set<char>> mp;
        int count=0;
        for(int i=0;i<rings.size();i+=2)
        {
            mp[rings[i+1]].insert(rings[i]);
        }
        for(auto it : mp)
        {
            if(it.second.size() == 3)
                count++;
        }
        return count;
    }
};