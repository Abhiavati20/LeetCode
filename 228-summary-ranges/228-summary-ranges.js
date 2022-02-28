/**
 * @param {number[]} nums
 * @return {string[]}
 */
var summaryRanges = function(nums) {
    let i = 0, j = 0;
    let temp = "";
    let arr = [];
    for(let i = 0; i < nums.length; i++){
        j = i ;
        while( j < nums.length && nums[j+1] == nums[j] + 1)
            j++;
        if(j > i)
        {
            temp += (nums[i]);
            temp += "->";
            temp += (nums[j]);
        }
        else{
            temp += (nums[i]);
        }
        arr.push(temp);
        i = j;
        temp = '';
    }
    return arr;
};