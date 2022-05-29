class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
          // if(nums[index] == target)return index;
        return index;
    }
};