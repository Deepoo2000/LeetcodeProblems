class Solution {
public:
    vector<vector<int>>ans;
    void solve(int index, int n, int k, vector<int>& v, vector<int>& arr) {
        if (arr.size() == k) {
            ans.push_back(arr);
            return;
        }
        for (int i = index; i < n; i++) {
            arr.push_back(v[i]);
            solve(i + 1, n, k, v, arr);
            arr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>v, arr;
        for (int i = 1; i <= n; i++)v.push_back(i);
        solve(0, n, k, v, arr);
        return ans;
    }
};