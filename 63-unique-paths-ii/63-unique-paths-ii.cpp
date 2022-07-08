class Solution {
public:
    int solve(vector<vector<int>>& obstacleGrid, int n, int m, int r, int c, vector<vector<int>>& dp){
        if(r == n - 1 && c == m - 1)return 1;
        if(r >= n || c >= m)return 0;
        if(obstacleGrid[r][c] == 1)return 0;
        if(dp[r][c] != -1) return dp[r][c];
        return dp[r][c] = solve(obstacleGrid, n, m, r + 1, c, dp) +
            solve(obstacleGrid, n, m, r, c + 1, dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        if(obstacleGrid[n - 1][m - 1] == 1)return 0;
        return solve(obstacleGrid, n, m, 0, 0, dp);
    }
};