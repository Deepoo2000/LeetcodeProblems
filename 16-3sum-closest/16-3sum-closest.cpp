class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ret = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size(); i++) {
            int l = i + 1;
            int r = nums.size() - 1;
            while (l < r) {
                int ans = nums[i] + nums[l] + nums[r];
                if (ans == target)return ans;
                else if (ans < target) l++;
                else if (ans > target) r--;
                if (abs(ret - target) > abs(ans - target)) ret = ans;
            }
        }
        return ret;
    }
};