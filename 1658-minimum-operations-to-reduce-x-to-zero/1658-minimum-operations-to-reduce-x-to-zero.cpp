class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target = 0;
        for (int i = 0; i < nums.size(); i++)target += nums[i];
        target -= x;
        int e = 0, s = 0, n = nums.size();
        int sum = 0;
        int mx = -1;
        while (e < n) {
            sum += nums[e];
            while (s <= e && sum > target)sum -= nums[s], s++;
            if (sum == target)mx = max(mx, e - s + 1);
            e++;
        }
        if (mx == -1)return -1;
        return nums.size() - mx;
    }
};

