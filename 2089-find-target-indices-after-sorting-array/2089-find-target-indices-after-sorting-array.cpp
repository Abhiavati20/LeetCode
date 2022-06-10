class Solution {
public:
    
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        int start = 0, end = nums.size() - 1,firstOcc = -1,lastOcc = -1;
        while(start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if(nums[mid] == target){
                firstOcc = mid;
                end = mid - 1;
            }
            else if(nums[mid] > target)
                end = mid - 1;
            else 
                start = mid + 1;
        }
        
        start = 0, end = nums.size() - 1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                lastOcc = mid;
                start = mid + 1;
            }
            else if(nums[mid] > target)
                end = mid - 1;
            else 
                start = mid + 1;
        }
        
        if(firstOcc != -1 || lastOcc != -1){
            for(int i = firstOcc; i <= lastOcc; i++) {
                res.push_back(i);
            }
        }
        
        return res;
    }
};