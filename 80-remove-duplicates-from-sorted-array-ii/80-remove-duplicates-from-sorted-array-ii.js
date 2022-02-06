/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let k = 0;
    for(let i = 0; i < nums.length; i++)
        if(k<=1 || nums[i] > nums[k-2])
            nums[k++] = nums[i];
    return k;
};