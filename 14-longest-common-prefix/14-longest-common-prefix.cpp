class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        set<char>st;
        int j = 0;
        while (true) {
            for (int i = 0; i < strs.size(); i++) {
                if (strs[i][j] >= 97 && strs[i][j] <= 123)
                    st.insert(strs[i][j]);
                else return s;
            }
            j++;
            if (st.size() == 1)s += *st.begin(), st.clear();
            else {
                return s;
            }
        }
        return s;
    }
};