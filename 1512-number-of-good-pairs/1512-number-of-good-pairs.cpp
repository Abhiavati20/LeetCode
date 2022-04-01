class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        } 
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(mp[nums[i]]){
                count += ((mp[nums[i]])*(mp[nums[i]]-1))/2;
                mp[nums[i]] = 0;
            }
        }
        return count;
    }
};