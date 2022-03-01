class Solution {
public:
    vector<int> countBits(int n) {
        int count = 0;
        vector<int> res;
        for(int i = 0; i <= n; i++){
            int j = i;
            count = 0;
            while(j){
                if(j & 1)
                    count++;
                j>>=1;
            }
            res.push_back(count);
        }
        return res;
    }
};