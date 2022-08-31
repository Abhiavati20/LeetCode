class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> ver(n+1,0);
        for(int i = 0; i < trust.size(); ++i) {
            ver[trust[i][0]]--;
            ver[trust[i][1]]++;
        }
        for(int i = 1; i <= n; ++i) {
            if(ver[i] == n - 1) return i;
        }
        return -1;
    }
};