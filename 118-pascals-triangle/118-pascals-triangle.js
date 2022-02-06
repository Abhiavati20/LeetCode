/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function(numRows) {
//     creating an array since we cannot make a 2d array
    let res = [];
    res = [[1]]
    for(let i = 1; i < numRows; i++)
    {
        let prev=res[i-1];
        let temp = [];
        for(let j = 0; j <= i; j++)
        {
//             if j is last or 1st index then push 1 in array
            if(j === 0 || j === i)
                temp.push(1);
            else{
                temp.push(prev[j-1] + prev[j]);
            }
        }
        res.push(temp);
        
    }
    return res;
};