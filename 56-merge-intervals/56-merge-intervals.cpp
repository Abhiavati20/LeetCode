class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if(intervals.size() == 0) return res;
        sort(intervals.begin(),intervals.end());
        vector<int> tempPair = intervals[0];
        
        for(auto interval : intervals) {
            if(interval[0] <= tempPair[1]){
                tempPair[1] = max(tempPair[1],interval[1]);
            }
            else {
                res.push_back(tempPair);
                tempPair = interval;
            }
        }
        res.push_back(tempPair);
        return res;
    }
};