class Solution {
public:
    int countEven(int num) {
        int sum = 0,n = num ;
        while(n){
            sum+=n%10;
            n = n/10;
        }
        return sum % 2 == 0 ? num / 2 : (num - 1) / 2;
    }
};