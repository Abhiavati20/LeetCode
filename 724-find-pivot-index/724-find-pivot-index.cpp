class Solution {
public:
//     finding sum
    
    int pivotIndex(vector<int>& nums) {
        int sum = 0,leftSum = 0;
        for(auto x: nums) sum+=x;
        for(int i = 0; i < nums.size();i++){
            if(leftSum == sum - leftSum - nums[i])return i;
            leftSum+=nums[i];
        }
        return -1;
    }
};