class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
//     O(n) solution   
        // int xorSum = 0;
        // for(int num : nums) {
        //     xorSum ^=num;
        // }
        // return xorSum;
        int start = 0, end = arr.size() - 1;
        int mid = start + (end - start) / 2;
        while(start <= end)
        {
            mid = start + (end - start) / 2;
            if(mid == 0)
                return arr[mid];
            if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
                return arr[mid];
            else if(mid % 2 == 0 && arr[mid] == arr[mid - 1])
                end = mid - 1;
            else if(mid % 2 != 0 && arr[mid] == arr[mid - 1])
                start = mid + 1;
            else if(mid % 2 == 0 && arr[mid] == arr[mid + 1])
                start = mid + 1;
            else if(mid % 2 != 0 && arr[mid] == arr[mid + 1])
                end = mid - 1;
        }
        return arr[mid];
    }
    
};