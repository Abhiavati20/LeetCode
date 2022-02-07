class Solution {
public:
    void sortColors(vector<int>& nums) {
    //     for(let i = 1; i < nums.length; i++)
    // {
    //     let numToBeInserted = nums[i];
    //     let j = i - 1;
    //     for(;j>=0 && numToBeInserted < nums[j]; j--)
    //     {
    //         nums[j + 1] = nums[j];
    //     }
    //     nums[j + 1] = numToBeInserted;
    // }
    // return nums;
        for(int i = 1; i < nums.size(); i++)
        {
            int numIns = nums[i];
            int j = i - 1;
            for(;j >= 0 && numIns < nums[j]; j--)
                nums[j+1] = nums[j];
            nums[j+1] = numIns;
        }
    }
};