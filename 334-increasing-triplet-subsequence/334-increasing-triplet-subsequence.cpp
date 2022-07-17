class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        vector<int>mni(nums.size()),mxi(nums.size());
        for(int i = 0; i < nums.size(); i++){
            mn = min(mn, nums[i]);
            mni[i] = mn;
        }
        for(int i = nums.size() - 1; i >= 0; i--){
            mx = max(mx, nums[i]);
            mxi[i] = mx;
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > mni[i] && nums[i] < mxi[i]) return true;
        }
        return false;
    }
};