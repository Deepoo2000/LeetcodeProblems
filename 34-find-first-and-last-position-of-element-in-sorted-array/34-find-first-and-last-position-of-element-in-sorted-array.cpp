class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1, -1};
       int index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if(index == nums.size()) return {-1, -1};
        if(nums[index] != target) return {-1, -1};
        int l = index;
        int r = index;
        while(nums[r] == target &&r < nums.size() - 1) r++;
        if(nums[r] == target)
        return {l, r};
        else return {l, r - 1};
        
    }
};