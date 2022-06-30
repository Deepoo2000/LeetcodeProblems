class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>v;
        for(int i =0;i<nums.size();i++){
            if(val != nums[i])v.push_back(nums[i]);
        }
        nums=v;
        return v.size();
    }
};