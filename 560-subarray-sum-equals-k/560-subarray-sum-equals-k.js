/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function(nums, k) {

    let sum = 0, subs = 0;
        let sums = new Map();
        sums.set(sum, 1);
        
        for(let i=0; i<nums.length; i++)
        {
                sum += nums[i];
                let cnt = sums.get(sum) || 0;
                sums.set(sum, cnt+1);
                cnt = sums.get(sum-k) || 0;
                subs += cnt;
        }
        
        if(k === 0)
                subs -= nums.length;
        
        return subs;
};