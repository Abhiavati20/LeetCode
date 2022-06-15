class Solution {
public:
    int mySqrt(int x) {
        int end = x, start = 1;
        double ans = 0;
        while(start <= end) {
            double mid = start + (end - start) / 2;
            if(mid * mid == x){
                ans = mid;
                break;
            }
            else if(mid * mid > x) end = mid - 1;
            else {
                ans = mid;
                start = mid + 1;
            }
        }
        return ans;
    }
};