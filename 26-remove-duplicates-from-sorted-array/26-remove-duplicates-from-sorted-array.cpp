class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
        }
        nums.clear();
        for(auto itr = s.begin(); itr != s.end(); itr++){
            nums.push_back(*itr);
        }
        return s.size();
    }
};