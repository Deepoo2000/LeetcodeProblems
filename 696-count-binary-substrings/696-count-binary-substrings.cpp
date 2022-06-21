class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 1;
        vector<int>v;
        int index = 0;
        int mn = 0;
        set<int>st;
        for (int i = 0; i < s.size() - 1; i++) {
            if(s[i] == '1')st.insert(1);
            else st.insert(0);
            if (s[i] == s[i + 1])count++;
            else {
                v.push_back(count);
                if (v.size() >= 2) {
                    mn += min(v[index], v[index + 1]), index++;
                }
                count = 1;
            }
        }
         if(s[s.size() - 1] == '1')st.insert(1);
            else st.insert(0);
        if(st.size() == 1)return 0;
        v.push_back(count);
        mn += min(v[v.size() - 1], v[v.size() - 2]);
        return mn;
    }
};