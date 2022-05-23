class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       vector<int>v,even,odd;
        for(int i = 0; i <nums.size(); i++){
            if(nums[i]%2==0)even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }    
        for(int i= 0;i<even.size();i++)v.push_back(even[i]),v.push_back(odd[i]);
        return v;
    }
};