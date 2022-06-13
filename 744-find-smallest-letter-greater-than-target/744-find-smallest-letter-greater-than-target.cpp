class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        int start = 0, end = arr.size() - 1;
        char res = arr[0];
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(arr[mid] == target)
                start = mid + 1;
            else if(arr[mid] > target) {
                res = arr[mid];
                end = mid - 1;
            }
            else start = mid + 1;
        }
        return res;
    }
};