class Solution {
public:
    int numberOfSteps(int n) {
        
        int count = 0;
        while(n)
        {
            n = n & 1 ? n - 1 : n >> 1;
            count++;
        }
        return count;
    }
};