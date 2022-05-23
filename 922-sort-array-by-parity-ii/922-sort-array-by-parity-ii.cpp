class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i=0,j=1,n=nums.size();   
       while(i<n&&j<n){
          if(nums[i]%2==i%2){
              i+=2;
              continue;
          }
          if(nums[j]%2==j%2){
              j+=2;
              continue;
          }
           swap(nums[i],nums[j]);
       }
        return nums;
    }
};