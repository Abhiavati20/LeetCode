/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    // let mp = new Map();
    // for(let i = 0; i < nums.length; i++){
    //     let count = mp.get(nums[i]) || 0;
    //     mp.set(nums[i],++count);
    // }
    // for(let i = 0; i < nums.length; i++){
    //     if(mp.get(nums[i]) > (nums.length/2))return nums[i];
    // }
    // return 0;
    
    // space complexity O(1)
    
    nums.sort((a,b)=>a-b);
    let mid = Math.trunc(nums.length / 2);
    return nums[mid];
};