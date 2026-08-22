class Solution {
public:
    int climbStairs(int n) {
        int sum = 1, prev0=0, prev1=1;
        for(int i =1; i<=n; i++){
            sum = prev0 + prev1;
            prev0 = prev1;
            prev1 = sum;
        }
        return sum;
    }
};