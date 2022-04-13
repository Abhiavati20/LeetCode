class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n,vector<int>(n,0));
        int k = 1;
        for(int i = 0; i < (n + 1) / 2; i++){
            for(int j = i; j < n - i; j++)
                mat[i][j] = k++;
            for(int j = i + 1; j < n - i; j++)
                mat[j][n-i-1] = k++;
            for(int j = n - i - 2; j >= i; j--)
                mat[n - i - 1][j] = k++;
            for(int j = n - i - 2; j > i; j--)
                mat[j][i] = k++;
        }
        return mat;
    }
};