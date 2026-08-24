class Solution {
public:
    int fib(int n) {
        int prev = 0, curr = 1, sum = 0;
        if(n==0 || n==1){
            return n;
        }
        for(int i=1; i<n; i++){
            sum = prev + curr;
            prev = curr;
            curr = sum;
        }
        return sum;
    }
};