class Solution {
public:
    int majorityElement(vector<int>& nums) {
//         map< int , int> mp;
//         for(int i = 0; i < nums.size(); i++)
//         {
//             mp[nums[i]]++;
//         }
//         for(int i = 0; i < nums.size(); i++)
//         {
//             if(mp[nums[i]] > (nums.size()/2))return nums[i];
            
//         }
        sort(nums.begin(),nums.end());
        int mid = nums.size() / 2;
        
        return nums[mid];
    }
};