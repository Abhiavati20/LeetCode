class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            res.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end());
        int start = res.size(),end = 0;
        for(int i = 0; i < res.size(); i++){
            if(res[i] != nums[i]){
                start = min(start,i);
                end = max(end,i);
            }
        }
        return (end - start >= 0 ? end - start + 1 : 0);
    }
};