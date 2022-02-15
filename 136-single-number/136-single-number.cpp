class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        for(auto i : nums)
            mp[i]++;
        for(auto i : nums)
        {
            if(mp[i] == 1)
                return i;
        }
        return 0;
    }
};