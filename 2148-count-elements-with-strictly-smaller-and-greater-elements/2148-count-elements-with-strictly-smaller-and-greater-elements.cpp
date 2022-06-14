class Solution {
public:
    int countElements(vector<int>& nums) {
        int result = 0;
        sort(nums.begin(), nums.end());
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] != nums[0] and nums[i]!= nums[nums.size()-1]) result++;
        };
        return result;
    }
};