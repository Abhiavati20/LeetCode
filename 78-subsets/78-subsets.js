/**
 * @param {number[]} nums
 * @return {number[][]}
 */
const findSubsets = (arr, curr, newArr, res) => {
    res.push([...newArr]);
    
    if (curr === arr.length) return;
    for (let i = curr; i < arr.length; i++) {
        newArr.push(arr[i]);
        findSubsets(arr, i + 1, newArr, res);
        newArr.pop();
    }
}

const subsets = function(nums) {
    const res = [];
    findSubsets(nums, 0, [], res)
    return res;
};