/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function(n,ans=1,i=0) {
    if(i < 31)
        {
            if(ans === n)
                return true;
            if(ans < Number.MAX_SAFE_INTEGER/2)
                ans = ans * 4;
            return isPowerOfFour(n,ans,i+1);
        }
    return false;
};