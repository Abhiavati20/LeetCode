class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        // map<int,int> mp;
        // int count = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     int diff = k - nums[i];
        //     if(mp[diff] > 0){
        //         count++;
        //         mp[diff]--;
        //     }
        //     else
        //         mp[nums[i]]++;
        // }
        // return count;
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size() - 1;
        int count = 0;
        while(i < j){
            if(nums[i] + nums[j] > k){
                j--;
            }
            else if(nums[i] + nums[j] == k){
                i++;
                j--;
                count++;
            }
            else if(nums[i] + nums[j] < k){
                i++;
            }
        }
        return count;
        
    }
};