class Solution {
public:
    bool BSearch(vector<int> & arr,int target){
        int start = 0, end = arr.size() - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] == target) 
                return true;
            else if(arr[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st;
        sort(nums1.begin(),nums1.end());
        for(auto num : nums2){
            if(BSearch(nums1,num))
                st.insert(num);
        }
        vector<int> res;
        for(auto num : st)
            res.push_back(num);
        return res;
    }
};