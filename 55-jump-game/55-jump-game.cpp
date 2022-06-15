class Solution {
public:
    bool canJump(vector<int>& nums) {
         int ans = 0;
        int curr = 0;
        for (int i = 0; i < nums.size() - 1;i++) {
            ans = max(ans, nums[i] + i);
            if (i == curr) {
                curr = ans;
            }
            if(curr >= nums.size() - 1)return true;
        }
        if(curr >= nums.size() - 1)return true;
        return false;
    }
};