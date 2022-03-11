class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        int j=n-1;
        int l=0,h=n-1;
        while(l<=h){
            if(abs(nums[l])>abs(nums[h])){
                ans[j]=nums[l]*nums[l];
                l++;
            }else{
                ans[j]=nums[h]*nums[h];
                h--;
            }
            j--;
        }
        return ans;
    }
};