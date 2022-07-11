class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        long long freq[100009] = {0};
        set<long long>st;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
            if(freq[nums[i]] >= 2){
                if(st.find(nums[i]) == st.end()){
                    st.insert(nums[i]);
                    v.push_back(nums[i]);
                }
            }
        }
        return v;
    }
};