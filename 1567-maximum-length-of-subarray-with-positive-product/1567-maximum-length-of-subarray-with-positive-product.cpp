class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int count = 0, mx = 0;
        int p = 0, n = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)n = 0, p = 0, count = 0;
            else {
                if (nums[i] < 0)n++;
                if (nums[i] > 0) p++;
                count++;
            }
            if (n % 2 == 0)
                mx = max(mx, count);
        }
        p = 0, n = 0;
        count  = 0;
        int mx1 = 0;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == 0)n = 0, p = 0, count = 0;
            else {
                if (nums[i] < 0)n++;
                if (nums[i] > 0) p++;
                count++;
            }
            if (n % 2 == 0)
                mx1 = max(mx1, count);
        }
        return max(mx, mx1);
    }
};
