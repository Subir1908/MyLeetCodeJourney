class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ub=nums.size()-1, lb=0, mid=0;
        mid = abs((ub+lb)/2);
        while(lb<=ub){
            mid = lb + (ub - lb)/2;
            if(target == nums[mid]){
                return mid;
            }
            else if(target < nums[mid]){
                ub = mid-1;
            }
            else{
                lb = mid+1;
            }
        }
        if(lb>ub){
            return lb;
        }
        return mid;
    }
};