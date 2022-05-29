class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int r = nums.size() - 1;
        int l = 0;
        int index = 0;
        while(l <= r){
            int md = (r + l) / 2;
            if(nums[md] == target) return md;
            else if(nums[md] < target){
                index = md;
                l = md + 1;
            }
            else if(nums[md] > target) {
                r = md - 1;
            }
        }
        if(nums[index] > target) return index;
        return index + 1;
    }
};