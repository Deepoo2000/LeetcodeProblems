class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        long long freq[100009] = {0};
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
            if(freq[nums[i]] >= 2)return nums[i];
        }
        return 0;
    }
};