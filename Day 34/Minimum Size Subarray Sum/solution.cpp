class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int size=0, i=0, j=1, sum=nums[i], f=INT_MAX;
        while(i<=j && (j<nums.size() || sum >= target)){
            if(sum >= target){
                sum -= nums[i];
                i += 1;
                size = j-i+1;
                if(f > size){
                    f=size;
                }
            }
            else{
                j += 1;
                sum += nums[j-1];
            }
        }
        if(f > nums.size()){
            return 0;
        }
        else{
            return f;
        }
    }
};
