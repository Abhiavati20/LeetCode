class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
//         creating a 2d array
        for(int i = 0; i < numRows; i++)        // looping through the no of rows
        {
            res[i].resize(i+1);
            for(int j = 0; j <= i; j++)
            {
//                 if j is 1st index or last index just put 1 in res
                if(j == 0 || j == i)
                    res[i][j]=1;
                else
//                     add its [i-1][j-1] + [i-1][j]
                    res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        return res;
    }
};