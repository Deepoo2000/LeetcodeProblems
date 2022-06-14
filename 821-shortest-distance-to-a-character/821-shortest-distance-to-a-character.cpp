class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>e, v;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == c)e.push_back(i);
        for (int i = 0; i < s.size(); i++) {
            int index = lower_bound(e.begin(), e.end(), i) - e.begin();
            if (index == 0)v.push_back(e[index] - i);
            else if (index > 0 && index < e.size()) {
                int mn = min(abs(e[index - 1] - i), abs(e[index] - i));
               v.push_back(mn);
            }
            else if (index >= e.size()) {
                index--;
                v.push_back(i - e[index]);
            }
        }
        return v;
    }
};
