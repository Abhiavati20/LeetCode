class Solution {
public:
    int divide(int dividend, int divisor) {
        long long de = dividend, ds = divisor;
        bool sign = false;
        if (de < 0) {
            de = -de;
            sign = !sign;
        }
        
        if (ds < 0) {
            ds = -ds;
            sign = !sign;
        }
        
        int lo = 0, hi = 31, mid;
        long long res = 0;
        while (de >= ds) {
            while (lo < hi-1) {
                mid = (lo+hi)/2;
                if ((de>>mid) < ds) {
                    hi = mid;
                } else {
                    lo = mid;
                }
            }
            res += (1<<lo);
            de = de - (ds<<lo);
            hi = lo+1, lo = 0;
        }
        
        if (sign) return -res;
        if (res == 2147483648) res--;
        return res;
    }
};