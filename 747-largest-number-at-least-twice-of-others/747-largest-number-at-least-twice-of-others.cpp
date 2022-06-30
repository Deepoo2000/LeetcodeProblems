class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(mx < 2 * nums[i] && nums[i] != mx) return -1 ;
        }
         for(int i = 0; i < nums.size(); i++){
            if(mx == nums[i]) return i ;
        }
        return 0;
    }
};