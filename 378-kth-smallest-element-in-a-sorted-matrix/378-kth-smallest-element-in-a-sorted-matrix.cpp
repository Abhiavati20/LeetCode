class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> eles;
        for(auto mat : matrix) {
            for(auto i : mat){
                eles.push_back(i);
            }
        }
        sort(eles.begin(),eles.end());
        int start = 0; int end = eles.size() - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(mid == k - 1)
                return eles[mid];
            else if(mid > k - 1) end = mid - 1;
            else start = mid + 1;
            
        }
        return matrix[0][0];
    }
};