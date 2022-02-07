/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    for(let i = 1; i < nums.length; i++)
    {
        let numToBeInserted = nums[i];
        let j = i - 1;
        for(;j>=0 && numToBeInserted < nums[j]; j--)
        {
            nums[j + 1] = nums[j];
        }
        nums[j + 1] = numToBeInserted;
    }
    return nums;
};