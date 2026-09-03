class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left = 0, right = k-1, j=0, curr_sum=0, max_sum=0;
        double avg;
        for(int i=left;i<=right; i++){
            curr_sum += nums[i];
        }
        max_sum = curr_sum;
        while(right<nums.size()){
            max_sum = max(max_sum, curr_sum);
            curr_sum -= nums[left];
            left+=1;
            right+=1;
            if(right<nums.size()){
                curr_sum += nums[right];
            }
        }
        avg = (double)max_sum/k;
        return avg;
    }
};