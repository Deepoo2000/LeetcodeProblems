class Solution {
public:
    int jump(vector<int>& nums) {
        int ans = 0;
        int count = 0;
        int curr = 0;
        for (int i = 0; i < nums.size() - 1;i++) {
            ans = max(ans, nums[i] + i);
            if (i == curr) {
                count++;
                curr = ans;
            }
        }
        return count;
    }
    /*[2,3,1,1,4]
      [2,3,0,1,4]
      [0]
      [1]
    */
};