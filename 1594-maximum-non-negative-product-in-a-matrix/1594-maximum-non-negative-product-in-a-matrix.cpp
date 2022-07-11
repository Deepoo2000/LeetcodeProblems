class Solution {
public:
    long long mx = -1e8;
    long long MOD = 1e9 + 7;
    void solve(vector<vector<int>>& grid, int n, int m, int r, int c, long long ans) {
        if (ans == 0 || r == n && c == m) {
            ans = ans * grid[r][c];
            mx = max(mx, ans);
            return;
        }
        if (r > n || c > m)return;
        if (r < n)
            solve(grid, n, m, r + 1, c, ans * grid[r][c]);
        if (c < m)
            solve(grid, n, m, r, c + 1, ans * grid[r][c]);

    }
    int maxProductPath(vector<vector<int>>& grid) {
        int n = grid.size() - 1;
        int m = grid[0].size() - 1;
        long long ans = 1;
        solve(grid, n, m, 0, 0, ans);
        if(mx < 0) return -1;
        return mx % MOD;
    }
};