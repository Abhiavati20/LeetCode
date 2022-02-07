class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int countZero = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                nums[countZero] = nums[i];
                countZero++;
            }
        }
        for(int i = countZero; i < nums.size(); i++)
            nums[i] = 0;
    }
};