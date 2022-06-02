class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        
        vector<vector<int>> trans(m,vector<int>(n,0));
        
        for(int row = 0; row < matrix.size(); ++row)
        {
            for(int col = 0; col < matrix[row].size(); ++col)
            {
                trans[col][row] = matrix[row][col];
            }
        }
        return trans;
    }
};