/**
 * @param {number[]} nums
 * @return {number}
 */
var findDuplicate = function(nums) {
    let mp = new Map();
    for(let i = 0; i < nums.length; i++){
        let count = mp.get(nums[i]) || 0;
        mp.set(nums[i],count + 1);
    }
    for(let i = 0; i < nums.length; i++){
        if(mp.get(nums[i]) > 1)
            return (nums[i]);
    }
    return 0;
};