class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1;
        int ans = 0;
        int mx=0, i = 0;
        for(; i < nums.size() - 1; i++){
            if(nums[i]==nums[i+1])count++;
            else {
                if(count > mx){
                    mx = count;
                    ans = nums[i];
                }
                count = 1;
            }
        }
        if(count > mx)ans=nums[i];
        return ans;
    }
};