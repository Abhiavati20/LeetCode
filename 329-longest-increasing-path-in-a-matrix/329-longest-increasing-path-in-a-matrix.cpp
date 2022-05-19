class Solution {
public:
    int dp[200][200];
    int maxPath;
    int n,m;
    int solve(vector<vector<int>>& matrix,int i,int j,int prev)
    {
        if(i<0 || j<0 || i>=m || j>=n || matrix[i][j]<=prev)
        {
            return 0;
        }
        if(dp[i][j]!=0)
        {
            return dp[i][j];
        }
        
        int a=solve(matrix,i-1,j,matrix[i][j]);  
        int b=solve(matrix,i+1,j,matrix[i][j]);  
        int c=solve(matrix,i,j+1,matrix[i][j]);
        int d=solve(matrix,i,j-1,matrix[i][j]);
        return dp[i][j]=max(a,max(b,max(c,d))) + 1;
        
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        maxPath=0;         
        m=matrix.size();
        n=matrix[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                maxPath=max(maxPath,solve(matrix,i,j,-1));
            }
        }
        return maxPath;
        
    }
};