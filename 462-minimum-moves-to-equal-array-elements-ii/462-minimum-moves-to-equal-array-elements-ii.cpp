class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int median = size/2;
        
        int moves = 0;
        
        for(int i=0;i<size;i++)
        {
            moves += abs(nums[i]-nums[median]);
        }
        
        return moves;
    }
};