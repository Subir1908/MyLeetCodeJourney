class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0 , j = 0, k=0;
        while(j<=n){
            if(s[j]==' ' || j==n){
                k=j;
                j-=1;
                while(i<j){
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
                i = k+1;
                j = k+1;
            }
            else{
                j++;
            }
        }
        return s;
    }
};