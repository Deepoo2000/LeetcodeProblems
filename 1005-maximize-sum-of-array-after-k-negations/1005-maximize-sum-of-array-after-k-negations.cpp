class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++){
            if(nums[i]<0&&k){
                nums[i] *= -1;
                k--;
            }
        }
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++)sum+=nums[i];
        if(k==0 || k%2==0)return sum;
        if(k%2!=0){
                if(nums[0]<0){
                    sum += (nums[0]*-1*2);
                }
                else if(nums[0]>0){
                    sum -= (nums[0]*2);
                }
        }
        return sum;
    }
};