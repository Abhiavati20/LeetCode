class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       perms(nums, 0);
     return res;
    }
    
    void perms(vector<int> &nums, int start) {
        if(nums.size()==start) {
            res.push_back(nums);
            return;
        }
        unordered_set<int> st;
        for(int i=start; i<nums.size(); i++) {
            if(st.count(nums[i])) continue;
            st.insert(nums[i]);
            swap(nums[i], nums[start]);
            perms(nums, start+1);
            swap(nums[i], nums[start]);
        }
        st.clear();
     return;
    }
};