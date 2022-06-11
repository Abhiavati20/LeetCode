class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int res=-1,n=nums.size(), new_target=-x, left=0;
        
        for(auto i:nums)
            new_target+=i;
        
        if(new_target<0)return -1;
        
        for(int right=0;right<n;right++){
            new_target-=nums[right];
            while(new_target<0){
                new_target+=nums[left++];
            }
            if(new_target==0){
                res=max(res,right-left+1);
            }
        }

        return n-res>n?-1:n-res;    
    }
};