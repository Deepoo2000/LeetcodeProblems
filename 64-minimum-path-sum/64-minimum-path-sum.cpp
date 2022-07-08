class Solution {
public:
    int solve(vector<vector<int>>& grid, vector<vector<int>>& dp, int row, int col) {
        int n = grid.size() - 1;
        int m = grid[0].size() - 1;
        if (row == n && col == m)return grid[row][col];
        if (row > n || col > m)return 10000;
        if (dp[row][col] != -1)return dp[row][col];
        int a = grid[row][col] + solve(grid, dp, row + 1, col);
        int b = grid[row][col] + solve(grid, dp, row, col + 1);
        return dp[row][col] = min(a, b);
    }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(), vector<int>(grid[0].size(), -1));
        return solve(grid, dp, 0, 0);
    }
};