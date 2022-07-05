class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest_seq = 0;
        unordered_set<int> s(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++)
        {
            if(s.find(nums[i] - 1)!=s.end())
                continue;
            
            else
            {
                int count = 0;
                int current_element = nums[i];
                
                while(s.find(current_element) != s.end())
                {
                    count++;
                    current_element++;
                }
                
                longest_seq = max(longest_seq,count);
            }
        }
        
        return longest_seq;
        
    }
};