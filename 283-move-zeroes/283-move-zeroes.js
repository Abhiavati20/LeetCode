/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    // let count = 0;
    // for(let i = 0; i < nums.length; i++)
    //     if(nums[i] === 0)
    //         count++;
    // let ans = [];
    // for(let i = 0; i < nums.length; i++)
    //     if(nums[i]) ans.push(nums[i]);
    // while(count--)
    //     ans.push(0);
    // for(let i = 0; i < nums.length; i++)
    //     nums[i] = ans[i];
    let countZero = 0;
    for(let  i = 0; i < nums.length; i++)
    {
        if(nums[i] != 0)
            nums[countZero++] = nums[i];
    }
    for(let i = countZero; i < nums.length; i++)
        nums[i] = 0;
};