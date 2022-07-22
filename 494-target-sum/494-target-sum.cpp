class Solution {
public:
    int count = 0;
    void solve(vector<int>& nums, int index, int total, int target) {
        if (index == nums.size()) {
            if (target == total) {
                count++;
            }
            return;
        }
        solve(nums, index + 1, total + nums[index], target);
        solve(nums, index + 1, total - nums[index], target);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        solve(nums, 0, 0, target);
        return count;
    }
};