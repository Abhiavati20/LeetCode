class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == k) return nums;
		
        unordered_map<int, int> freq;
        
        for(auto num : nums){
            freq[num]++;
        }
        
        priority_queue<pair<int, int>> pq;
        
        for(auto [u, v] : freq) pq.push({v, u});
        
        vector <int> res;
        
        while(k-- > 0){
            auto [u, v] = pq.top();
            pq.pop();
            
            res.push_back(v);
        }
        
        return res;
    }
};