class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>st;
        for (int i = 0; i < (1 << nums.size()); i++) {
            vector<int>v;
            for (int j = 0; j < nums.size(); j++) {
                if (((1 << j) & i))v.push_back(nums[j]);
            }
            sort(v.begin(), v.end());
            if (st.find(v) == st.end()) {
                ans.push_back(v);
                st.insert(v);
            }
        }
        return ans;
    }
};