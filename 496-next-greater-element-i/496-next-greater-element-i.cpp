class Solution {
public:
    int index(vector<int> &nums,int k){
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] == k)return i;
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i = 0; i < nums1.size(); i++)
        {
            int j = index(nums2,nums1[i]),k;
            int greater = -1;
            for(k = j + 1; k < nums2.size(); k++)
            {
                if(nums1[i] < nums2[k])
                {
                    greater = nums2[k];
                    break;
                }
            }    
            res.push_back(greater);
        }
        return res;
    }
};