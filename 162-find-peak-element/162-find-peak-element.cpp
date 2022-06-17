class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int count = 0, i = 0;
        for(; i < nums.size() - 1; i++){
            if(nums[i] < nums[i + 1])count++;
            else {
                if(count)return i;
                count = 0;
            }
        }
        if(count)return i;
        return 0;
    }
};