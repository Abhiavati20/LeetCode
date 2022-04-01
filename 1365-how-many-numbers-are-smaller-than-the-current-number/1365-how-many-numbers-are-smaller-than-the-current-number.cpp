class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//         brute force
        vector<int> extraSpace;
        for(int i = 0 ; i < nums.size(); i++){
            int count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] > nums[j]) count++;
            }
            extraSpace.push_back(count);
        }
        return extraSpace;
    
//     using hashtable
//         unordered_map<int, int> mp;
//         vector<int> smaller;
//         vector<int> copy;
		
//         for(int i=0; i<nums.size(); i++) 
// 			copy.push_back(nums[i]); 
		
// 		sort(copy.begin(), copy.end());   
		
// 		for(int i=0; i<copy.size(); i++) 
// 			if(mp.count(copy[i]) == 0) mp[copy[i]] = i; 
			
// 		for(int i=0; i<nums.size(); i++) 
// 			smaller.push_back(mp[nums[i]]);
        
//         return smaller;
    }
};