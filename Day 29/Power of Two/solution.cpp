class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }
        if(n==1){
            return true;
        }
        if(floor(log2(n)) == log2(n)){
            return true;
        }
        return false;
    }
};