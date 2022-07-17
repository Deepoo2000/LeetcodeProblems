class Solution {
    public int lengthOfLIS(int[] nums) {
        if(nums.length == 1)return 1;
        int[] dp = new int[nums.length];
        int mx = 1;
        for(int i = 0; i < nums.length; i++)dp[i] = 1;
        for(int i = 1; i < nums.length; i++){
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j]){
                    dp[i] = Math.max(dp[i], dp[j] + 1);
                }
            }
            mx = Math.max(mx, dp[i]);
        }
        return mx;
    }
}