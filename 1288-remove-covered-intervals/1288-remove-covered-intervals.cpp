class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        // sorting the array
        int count=0;
        sort(intervals.begin(),intervals.end());
        int maxRight = -1,maxLeft = -1;
        for(int i = 0; i < intervals.size(); i++){
            if(intervals[i][0] > maxLeft && intervals[i][1] > maxRight){
                count++;
                maxLeft  = intervals[i][0];
            }
            maxRight = max(intervals[i][1],maxRight);
        }
        return count++;
    }
};