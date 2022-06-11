class Solution {
public:
    int solve(vector<int> &arr){
        int start = 0,end = arr.size() - 1;
        int count = 0;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] < 0){
                end = mid - 1;
            }
            else start = mid + 1;
        }
        count += arr.size() - start;
        return count;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for(int i = 0; i < grid.size(); i++){
            count += solve(grid[i]);
        }
        return count;
    }
};