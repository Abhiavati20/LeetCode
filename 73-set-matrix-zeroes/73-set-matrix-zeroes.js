/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
    let m = matrix.length;
    let n = matrix[0].length;
    let row = [],col= [];
    for(let i = 0; i < matrix.length;i++)
    {
        for(let j = 0; j < matrix[i].length; j++)
        {
            if(matrix[i][j] == 0)
            {
                row.push(i);
                col.push(j);
            }
        }
    }
    for(let i = 0; i < row.length; i++)
    {
        for(let j = 0; j < n; j++)
        {
            matrix[row[i]][j] = 0;
        }
    }
    for(let i = 0; i < col.length; i++)
    {
        for(let j = 0; j < m; j++)
        {
            matrix[j][col[i]] = 0;
        }
    }
};