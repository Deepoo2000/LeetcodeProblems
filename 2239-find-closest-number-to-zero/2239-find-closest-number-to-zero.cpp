class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int index = lower_bound(nums.begin(), nums.end(), 0)-nums.begin();
        if(index == 0)return nums[0];
        if(index >= nums.size())index--;
        if(- nums[index - 1] >= nums[index])return nums[index];
        return nums[index - 1];
       
    }
};