class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string merged;
        int i=0, j=0;
        while (i < n && j < m) {
            merged += word1[i++];
            merged += word2[j++];
        }
        if (i < n) merged.append(word1, i, n - i);
        if (j < m) merged.append(word2, j, m - j);
        return merged;
    }
};