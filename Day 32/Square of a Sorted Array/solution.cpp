class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> square(nums.size());
        int pos = nums.size()-1;
        int left = 0, right=nums.size()-1, left_sq, right_sq;
        while(left<=right){
            left_sq = nums[left] * nums[left];
            right_sq = nums[right] * nums[right];
            if(left_sq >= right_sq){
                square[pos] = left_sq;
                left++;
            }
            else{
                square[pos] = right_sq;
                right--;
            }
            pos--;
        }
        return square;
    }
};