class Solution {
public:
    vector<int> countBits(int n) {
//         O(n^2)
        // int count = 0;
        // vector<int> res;
        // for(int i = 0; i <= n; i++){
        //     int j = i;
        //     count = 0;
        //     while(j){
        //         if(j & 1)
        //             count++;
        //         j>>=1;
        //     }
        //     res.push_back(count);
        // }
//         O(n)
        vector<int> res(n+1);
        res[0] = 0;
        for(int i = 0; i <= n; i++){
            res[i] = res[i / 2] + i % 2;
            // res[i] = res[i>>1] + (i & 1);
        }
        return res;
    }
};