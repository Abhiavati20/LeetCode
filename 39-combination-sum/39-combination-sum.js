/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum = function(candidates, target) {
    const result = [];
    solve(0,target,[])
    function solve(index,target,temp){
        if(target==0){
            result.push(temp)
            return;
        }
        else if(target<0)
            return;
        for(let i=index;i<candidates.length;i++){
             solve(i,target-candidates[i],[...temp,candidates[i]])
        }
    }
    return result  
};