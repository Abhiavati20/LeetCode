/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var rotate = function(matrix) {
    let n = matrix.length;
    let arr = [];
    for(let i = 0; i < n; i++)
    {
        let temp = []
        for(let j = 0; j < n; j++){
            temp.push(matrix[j][i]);
        }
        arr.push(temp);
    }
    for(let i = 0; i < n; i++){
        for(let j = 0; j < n; j++)
            matrix[i][j] = arr[i][n-j-1];
        
    }
};