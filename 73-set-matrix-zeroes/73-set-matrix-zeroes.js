/**
 * @param {number[][]} matrix
 * @return {void} Do not return anything, modify matrix in-place instead.
 */
var setZeroes = function(matrix) {
    // int m = matrix.size();
    //     int n = matrix[0].size();
    //     vector<int> row,col;
    //     for(int i = 0; i < matrix.size(); i++)
    //     {
    //         for(int j = 0; j < matrix[i].size(); j++)
    //         {    
    //             if(matrix[i][j] == 0)
    //             {
    //                 row.push_back(i);
    //                 col.push_back(j);
    //             }
    //         }
    //     }
    //     for(int i = 0 ; i < row.size() ; i++){
    //         for(int j = 0 ; j < n ; j++){
    //             matrix[row[i]][j] = 0;
    //         }
    //     }
    //     for(int i = 0 ; i < col.size() ; i++){
    //         for(int j = 0 ; j < m ; j++){
    //             matrix[j][col[i]] = 0;
    //         }
    //     }
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