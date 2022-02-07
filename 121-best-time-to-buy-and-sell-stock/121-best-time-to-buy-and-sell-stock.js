/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let daym = prices[0],result = Number.MIN_VALUE, n = prices.length;
    for(let i = 1; i < n; i++)
    {
        result = result > (prices[i] - daym) ? result:prices[i]-daym;
        daym = prices[i] > daym ? daym : prices[i];
    }
    return result >=0 ? result : 0;
};