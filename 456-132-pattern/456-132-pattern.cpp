class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        // int n = nums.size();
        // for(int i = 0; i < n - 2; i++){
        //     for(int j = i + 1; j < n - 1; j++){
        //         for(int k = j + 1; k < n; k++){
        //             if(nums[i] < nums[k] && nums[k] < nums[j] && nums[i] < nums[j])
        //                 return true;
        //         }
        //     }
        // }
        // return false;
        int n = nums.size();
        vector<int> minval(n);
        minval[0] = nums[0];
        for(int i = 1; i<n; i++){
            minval[i] = min(nums[i], minval[i-1]);
        }
        stack<int> st;
        for(int j = n - 1; j>=0; j--){
            while(!st.empty() && st.top() <= minval[j]) st.pop();
            if(!st.empty() && st.top() < nums[j]){
                return true;
            }
            st.push(nums[j]);
        }
        return false;
    }
};