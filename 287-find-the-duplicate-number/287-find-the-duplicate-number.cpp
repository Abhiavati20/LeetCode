class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // for(int i = 0 ; i< nums.size() ; i++){
        //     for(int j = i + 1; j < nums.size(); j++)
        //     {
        //         int x = nums[i]^nums[j];
        //         if(x == 0)
        //             return nums[j];
        //     }
        // }
        // return -1;
        for(int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]) - 1;
            if(nums[index] < 0) return abs(nums[i]);
            else nums[index] = nums[index] * -1;
        }
        return -1;
    }
};