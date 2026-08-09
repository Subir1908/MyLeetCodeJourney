class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        return c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u';
    }
    string reverseVowels(string s) {
        int n = s.size();
        int j = n-1;
        int i = 0;
        char temp;

        while(i < j){
            if(isVowel(s[i]) == false){
                i++;
            }
            if(isVowel(s[j]) == false){
                j--;
            }
            if(isVowel(s[i]) && isVowel(s[j])){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
        }
        return s;
    }
}; 