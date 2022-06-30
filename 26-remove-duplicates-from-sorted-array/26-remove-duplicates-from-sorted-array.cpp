class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>st;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
            if(st.find(nums[i])==st.end()){
            st.insert(nums[i]);v.push_back(nums[i]);
            }
        
        nums=v;
        return v.size();
    }
};