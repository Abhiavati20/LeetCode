/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let sums = new Map();

    for (let [index, num] of nums.entries()) {
        let potential = target - num;
        
        if (sums.has(potential)) {
            return [index, sums.get(potential)]
        } else {
            sums.set(num, index)
        }
    }
    return [-1,-1];
};