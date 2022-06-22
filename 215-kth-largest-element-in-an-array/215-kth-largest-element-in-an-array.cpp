class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
//         O(NlogN)
        // priority_queue<int> pq;
        // for(int num : nums) pq.push(num);
        // k = k - 1;
        // while(k--){
        //     pq.pop();
        // }
        // return pq.top();
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int num : nums) {
            pq.push(num);
            if(pq.size() > k) 
                pq.pop();
        }
        return pq.top();
    }
};