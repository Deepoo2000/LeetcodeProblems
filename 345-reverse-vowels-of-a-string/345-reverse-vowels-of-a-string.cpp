class Solution {
public:
    bool IsVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    string reverseVowels(string s) {
        int r = s.size() - 1, l = 0;
        while (l < r) {
            if (IsVowel(s[l]) && IsVowel(s[r])) {
                swap(s[l], s[r]);
                l++, r--;
            }
            if (!IsVowel(s[l]))l++;
            if (!IsVowel(s[r]))r--;
        }
        return s;
    }
};