class Solution {
public:
    string reverseVowels(string s) {
        int r = s.size() - 1, l = 0;
        map<char, int> mp;
        mp['a']++; mp['e']++; mp['i']++; mp['o']++; mp['u']++;
        mp['A']++; mp['E']++; mp['I']++; mp['O']++; mp['U']++;
        while (l < r) {
            if (mp.find(s[l]) != mp.end() && mp.find(s[r]) != mp.end()) {
                swap(s[l], s[r]);
                l++, r--;
            }
            if (mp.find(s[l]) == mp.end())l++;
            if (mp.find(s[r]) == mp.end())r--;
        }
        return s;
    }
};