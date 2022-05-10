class Solution {
public:
    int index(vector<int> &nums,int k){
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] == k)return i;
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> res;
        // for(int i = 0; i < nums1.size(); i++)
        // {
        //     int j = index(nums2,nums1[i]),k;
        //     int greater = -1;
        //     for(k = j + 1; k < nums2.size(); k++)
        //     {
        //         if(nums1[i] < nums2[k])
        //         {
        //             greater = nums2[k];
        //             break;
        //         }
        //     }    
        //     res.push_back(greater);
        // }
        // return res;
        unordered_map<int,int> mp;
        stack<int> st;
        vector<int> ans;
        for(int i = nums2.size() - 1; i >= 0; i--)
        {
            while(!st.empty() && st.top() < nums2[i]) st.pop();
            if(st.empty()) mp[nums2[i]] = -1;
            else mp[nums2[i]] = st.top();
            st.push(nums2[i]);
        }
        for(auto x : nums1)
        {
            ans.push_back(mp[x]);    
        }
        return ans;
    }
};