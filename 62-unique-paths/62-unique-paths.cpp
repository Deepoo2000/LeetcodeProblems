class Solution {
public:
    int solve(int m, int n, int r, int c, vector<vector<int>>& dp) {
        if (r == m - 1 && c == n - 1)return 1;
        if (r >= m || c >= n)return 0;
        if (dp[r][c] == -1){
       // cout<<dp[r][c]<<" ";
        dp[r][c] = solve(m, n, r + 1, c, dp) + solve(m, n, r, c + 1, dp);
        //cout<<dp[r][c]<<" ";
        }
        else return dp[r][c];
        //cout<<endl;
        return dp[r][c];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m, vector<int>(n, -1));
        return solve(m, n, 0, 0, dp);
    }
};