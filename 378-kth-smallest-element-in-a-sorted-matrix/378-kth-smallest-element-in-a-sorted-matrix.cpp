class Solution {
public:
    int solve(vector<vector<int>> & matrix, int target) {
        int i = 0;
        int j = matrix.size() - 1;
        int count = 0;
        while(j>=0 && i < matrix.size()) {
            if(matrix[j][i] > target) j--;
            else {
                count += j + 1;
                i++;
            }
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int start = matrix[0][0];
        int end = matrix[matrix.size() - 1][matrix.size() - 1];
        while(start <= end) {
            int mid = start + (end - start) / 2;
            int count = solve(matrix,mid);    
            if(count < k) start = mid + 1;
            else end = mid - 1;
        }
        return start;
    }
};