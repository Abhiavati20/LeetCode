class Solution {
public:
    int titleToNumber(string columnTitle) {
        int k = 0;
        for(int i = 0; i < columnTitle.size(); i++){
            k = k + (25 * k) + ((columnTitle[i] - 'A') + 1);
        }
        return k;
    }
};