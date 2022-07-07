class Solution {
public:
    vector<string>v;
    void solve(int i, int o, int c, string s) {
        if (s.size() == i * 2) {
            v.push_back(s);
            return;
        }
        if(o < i)
        solve(i, o + 1, c, s + '(');
        if(c < o)
        solve(i, o, c + 1, s + ')');
    }
    vector<string> generateParenthesis(int n) {
        solve(n, 0, 0, "");
        return v;
    }
};