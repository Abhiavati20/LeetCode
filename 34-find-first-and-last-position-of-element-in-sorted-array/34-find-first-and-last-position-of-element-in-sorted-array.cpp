class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int firstOcc = -1;
        int lastOcc = -1;
        vector<int> res;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(nums[mid] == target) {
                firstOcc = (mid);
                end = mid - 1;
            }
            else if(nums[mid] > target) end = mid - 1;
            else start = mid + 1;
        }
        start = 0;
        end = nums.size() - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(nums[mid] == target) {
                lastOcc = mid;
                start = mid + 1;
            }
            else if(nums[mid] > target) end = mid - 1;
            else start = mid + 1;
        }
        res.push_back(firstOcc);
        res.push_back(lastOcc);
        return res;
    }
};