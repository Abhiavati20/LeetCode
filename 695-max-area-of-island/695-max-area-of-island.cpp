class Solution {
public:
    void solve(vector<vector<int>>& g, vector<vector<int>>& vis, int m, int n, int i, int j, int &cnt){
        if(i<0 || j<0 || i>=m || j>=n || vis[i][j] || !g[i][j]) return;
        vis[i][j] = 1;
        cnt++;
        
        solve(g, vis, m, n, i+1, j, cnt);
        solve(g, vis, m, n, i-1, j, cnt);
        solve(g, vis, m, n, i, j+1, cnt);
        solve(g, vis, m, n, i, j-1, cnt);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int m = g.size();
        int n = g[0].size();
        int maxA = 0;
        vector<vector<int>>vis(m, vector<int>(n));
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(!vis[i][j] && g[i][j]){
                    int cnt = 0;
                    solve(g, vis, m, n, i, j, cnt);
                    maxA = max(cnt, maxA);
                }
            }
        }
        return maxA;
    }
};