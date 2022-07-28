class Solution {
public:
    void sortColors(vector<int>& nums) {
        int index = 0;
        int zero = 0, one = 0, two = 0;
        for(int i = 0; i < nums.size(); i++){
           if(nums[i] == 0) zero++;
            else if(nums[i] == 1) one++;
            else two++;
        }
        while(zero--)nums[index] = 0, index++;
        while(one--)nums[index] = 1, index++;
        while(two--)nums[index] = 2, index++;
    }
};