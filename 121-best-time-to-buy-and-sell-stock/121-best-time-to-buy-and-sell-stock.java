class Solution {
    public int maxProfit(int[] prices) {
        int profit = 0;
        int ele = Integer.MAX_VALUE;
        for(int i = 0; i < prices.length; ++i) {
            if(prices[i] < ele) {
                ele = prices[i];
            }
            if(profit < (prices[i] - ele)) {
                profit = prices[i] - ele;
            }
        }
        return profit;
    }
}