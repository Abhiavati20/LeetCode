class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        /* BRUTE FORCE */         
        
        // map<int,int> mp;
        // for(auto i : nums)
        //     mp[i]++;
        // for(auto i : nums)
        // {
        //     if(mp[i] == 1)
        //         return i;
        // }
        
        /* BIT MANIPULATION */
        int ans = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            ans = ans ^ nums[i];
        }
        
        return ans;
    }
};