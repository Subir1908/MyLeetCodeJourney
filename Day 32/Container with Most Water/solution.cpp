class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int area = 0;
        while(left<right){
            int current_area = min(height[left], height[right]) * (right - left);
            area = max(area, current_area);
            if(height[left] < height[right]){
                left = left+1;
            }
            else{
                right = right - 1;
            }
        } 
        return area;
    }
};