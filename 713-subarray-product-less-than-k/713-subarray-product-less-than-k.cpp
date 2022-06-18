class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k == 0 || k == 1) return 0;
        int ans = 0;
        int sum = 1;
        int index = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum *= nums[i];
            while (sum >= k) {
                sum /= nums[index++];
            }
            ans += (i - index + 1);
        }
        return ans;
    }
};