class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 1;
        vector<int>v;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1])count++;
            else {
                v.push_back(count);
                count = 1;
            }
        }
        int mn = 0;
        v.push_back(count);
        for (int i = 0; i < v.size() - 1; i++) {
            mn += min(v[i], v[i + 1]);
        }
        return mn;
    }
};
