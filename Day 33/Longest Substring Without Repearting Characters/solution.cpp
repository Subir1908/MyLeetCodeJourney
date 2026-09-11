class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::vector<int> last_seen(128, -1);
        int i=0, j=0, n=0;
        while(j<s.size() && i<=j){
            if(last_seen[s[j]]<i){
                n = max(n, j - i + 1);
            }
            else{
                i = last_seen[s[j]] + 1;
                
            }
            last_seen[s[j]]=j;
            j = j + 1;
        }
        return n;
    }
};