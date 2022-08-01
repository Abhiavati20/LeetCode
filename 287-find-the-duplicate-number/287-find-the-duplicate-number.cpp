class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         brute force 1
        // sort(nums.begin(),nums.end());
        // for(int i = 0; i < nums.size(); ++i) {
        //     if(nums[i] == nums[i + 1]) return nums[i];
        // }
        // return -1;
        
//         brute force 2
        // vector<int> vec(nums.size(), 0);
        // for(int i = 0; i < nums.size(); ++i) {
        //     vec[nums[i]]++;
        // }
        // for(int i = 0; i < vec.size(); ++i) if(vec[i] > 1) return i;
        // return -1;
        
//         optimal solution 
        int fast = nums[0];
        int slow = nums[slow];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow!=fast);
        
        fast = nums[0];
        while(slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};