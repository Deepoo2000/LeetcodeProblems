class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int index1=0;
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
        if(k==0)return sum;
        if(index1!=-1){
            if(k%2==0)return sum;
            if(k%2!=0){
                if(nums[index1]<0){
                    sum += (nums[index1]*-1*2);
                }
                else if(nums[index1]>0){
                    sum -= (nums[index1]*2);
                }
                return sum;
            }
        }
        return 0;
    }
};