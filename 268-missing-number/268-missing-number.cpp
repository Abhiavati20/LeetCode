class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // int sum = 0;
        // for(auto i : nums)
        //     sum+=i;
        // return (n*(n+1)/2) - sum;
        
        // int result = nums.size();
        // for(int i = 0; i < nums.size(); ++i)
        // {
        //     result ^= nums[i];
        //     result ^= i;
        // }
        // return result;
        
        return nums.size() * (nums.size() + 1) / 2 - accumulate(nums.begin(),nums.end(),0);
    }
};