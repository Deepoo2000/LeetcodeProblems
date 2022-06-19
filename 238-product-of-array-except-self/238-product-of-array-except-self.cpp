class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum = 1;
        int count = 0;
        vector<int>v(nums.size(), 0);
        int index = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)count++, index = i;
            if (nums[i] != 0)sum *= nums[i];
        }
        if (count >= 2)return v;
        if (count == 1) {
            v[index] = sum;
            return v;
        }
        cout<<sum<<endl;
        if (count == 0) {
            for (int i = 0; i < nums.size(); i++) {
                nums[i] = sum / nums[i];
            }
            return nums;
        }
        return {0};
    }
};