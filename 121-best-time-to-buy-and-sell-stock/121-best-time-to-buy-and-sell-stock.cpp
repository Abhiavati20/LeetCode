class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int daym=prices[0], result=INT_MIN, n=prices.size();
        
//         for(int i=1;i<n;i++) {
            
//             result=max(result, prices[i]-daym);
//             daym=min(daym, prices[i]);
//         }
//         return result>=0 ? result : 0;
        int buy=INT_MAX,sell=0;
        for(int i=0;i<prices.size();i++){
            buy=std::min(buy,prices[i]);
            sell=std::max(sell,prices[i]-buy);
        }
       return sell;
    }
};