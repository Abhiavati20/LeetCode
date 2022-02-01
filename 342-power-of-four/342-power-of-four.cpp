class Solution {
public:
    bool isPowerOfFour(int n,int ans=1,int i=0) {
       if(i < 31)
        {
            if(ans == n)
                return true;
            if(ans < INT_MAX/2)
                ans = ans * 4;
            return isPowerOfFour(n,ans,i+1);
        }
        return false;
    }
};