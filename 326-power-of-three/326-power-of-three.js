/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfThree = function(n,ans=1) {
    if(ans < Number.MAX_SAFE_INTEGER / 3)
    {
        if(ans == n) return true;
        ans = ans * 3;
        return isPowerOfThree(n,ans);
    }
    return false;
};