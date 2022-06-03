class Solution {
public:
    bool isAlpha(char c) {
        if (c >= 65 && c <= 90)return true;
        if (c >= 97 && c <= 122)return true;
        return false;
    }
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            if (isAlpha(s[i]) && isAlpha(s[j])) {
                swap(s[i], s[j]);
                i++, j--;
            }
            else  if (!isAlpha(s[i]) && isAlpha(s[j])) {
                i++;
            }
            else  if (isAlpha(s[i]) && !isAlpha(s[j])) {
                j--;
            }
            else i++,j--;
        }
        return s;
    }
};
