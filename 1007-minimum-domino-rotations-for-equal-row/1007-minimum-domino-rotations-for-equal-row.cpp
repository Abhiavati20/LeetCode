class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        vector<int> cnt(7, 0);
        int mn = 1e9, n = tops.size();
        
        for(int i = 0; i < n; i++) {
            cnt[tops[i]] += 1;
            if(tops[i] != bottoms[i])
                cnt[bottoms[i]] += 1;
        }
        
        for(int i = 1; i <= 6; i++) {
            if(cnt[i] < n) continue;
            int cnt1 = 0, cnt2 = 0;
            for(int j = 0; j < n; j++) {
                if(tops[j] != i) cnt1 += 1;
                if(bottoms[j] != i) cnt2 += 1;
            }
            mn = min({mn, cnt1, cnt2});
        }
        
        return mn == 1e9 ? -1 : mn;
    }
};