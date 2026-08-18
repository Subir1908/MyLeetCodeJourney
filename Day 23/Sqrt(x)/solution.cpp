class Solution {
public:
    int mySqrt(int x) {
        int lb = 0, ub = x, ans = 0;
        if(x==0 || x==1){
            return x;
        }
        while(lb<=ub){
            int mid = lb + (ub-lb)/2;
            if(mid<=x/mid){
                ans = mid;
                lb = mid+1;
            }
            else{
                ub = mid - 1;
            }
        }
        return ans;
    }
};
