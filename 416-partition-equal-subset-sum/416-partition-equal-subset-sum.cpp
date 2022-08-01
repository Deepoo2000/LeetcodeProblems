class Solution {
 public:
     int dp[201][10001];
     int solve(vector<int>& nums,int index, int sum) {
         if (sum == 0)return true;
         if (sum < 0 || index >= nums.size())return false;
         if (dp[index][sum] != -1)return dp[index][sum];
         return dp[index][sum] = solve(nums, index + 1, sum - nums[index]) || solve(nums, index + 1, sum);
     }
     bool canPartition(vector<int>& nums) {
         int n = nums.size();
         int sum = 0;
         for (int i = 0; i < nums.size(); i++)sum += nums[i];
         if (sum % 2 != 0)return false;
         memset(dp, -1, sizeof(dp));
         return solve(nums, 0, sum / 2);
     }
 };