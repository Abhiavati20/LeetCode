class Solution {
public:
    int binarySearch(vector<int> &arr,int start,int end,int target){
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if(arr[mid] == target)
                return mid;
            else if(arr[mid] > target)
                end = mid - 1;
            else start = mid + 1;
        }
        return -1;
    }
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low = 0, high = n - 1, pivot = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int prev = (mid - 1 + n) % n;
            int next = (mid + 1) % n;
     
            if (arr[mid] <= arr[prev] && arr[mid] <= arr[next]){
                pivot = mid;
                break;
            }
    
            else if (arr[mid] <= arr[high])
                high = mid - 1;
            else if (arr[mid] >= arr[low])
                low = mid + 1;
        }
        int found = binarySearch(arr,0,pivot - 1,target);
        if(found == -1)
            found = binarySearch(arr,pivot,n - 1,target);
        return found;
    }
};