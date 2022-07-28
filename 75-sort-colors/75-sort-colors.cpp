class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>v;
        for(int i = 0; i < nums.size(); i++){
            int mn = 302, index = -1;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] < mn)mn = nums[j], index = j;
            }
            v.push_back(nums[index]), nums[index] = 305; 
        }
        nums = v;
    }
};