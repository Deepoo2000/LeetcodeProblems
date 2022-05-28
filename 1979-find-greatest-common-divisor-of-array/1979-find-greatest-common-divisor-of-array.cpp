class Solution {
public:
    int gcd(int a, int b) { return((b == 0) ? a : gcd(b, a % b)); }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mn = nums[0];
        int mx = nums[nums.size() - 1];
        return gcd(mn,mx);
        
    }
};