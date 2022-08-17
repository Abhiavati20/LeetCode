class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int n = nums.size();
        int candidate1 = -1;
        int candidate2 = -1;
        int count1 = 0;
        int count2 = 0;
        
        for(int num : nums) {
            
            if(candidate1 == num) {
                count1++;
            }
            else if(candidate2 == num) {
                count2++;
            }
            else if(count1 == 0) {
                count1 = 1;
                candidate1 = num;
            }
            else if(count2 == 0) {
                count2 = 1;
                candidate2 = num;
            }
            else {
                count1--;
                count2--;
            }
        }
        
        count1 = 0;
        count2 = 0;
        
        for(int num : nums) {
            if(candidate1 == num) {
                count1++;
            }   
            if(candidate2 == num) {
                count2++;
            }
        }
        
        vector<int> res;
        if(candidate1 == candidate2) {
            res.push_back(candidate1);
            return res;
        }
        if(count1 > (n / 3)) {
            res.push_back(candidate1);
        }
        if(count2 > (n / 3)) {
            res.push_back(candidate2);
        }
        return res;
    }
};