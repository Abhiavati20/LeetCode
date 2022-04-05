class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int right = size - 1;
        int left = 0;
        int result = 0;
        while(left < right){
            int width = right - left;
            int height1 = min(height[left],height[right]);
            int area = width * height1;
            result = max(area,result);
            if(height[left] < height[right]) left++;
            else
                 right--;
        }
        return result;
    }
};