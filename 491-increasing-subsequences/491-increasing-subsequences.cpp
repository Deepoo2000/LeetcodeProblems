class Solution {
public:
    bool IsSorted(vector<int>&v) {
         int count = 1;
        for (int i = 1; i < v.size(); i++) {
            if(v[i - 1] <= v[i])count++;
            else break;
        }
        if (count == v.size())
       return true;
        return false;
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>>v;
        set<vector<int>>st;
        for (int i = 0; i < (1 << nums.size()); i++) {
            vector<int>ve;
            for (int j = 0; j < nums.size(); j++) {
                if (i & (1 << j)) ve.push_back(nums[j]);
            }
            if (IsSorted(ve) == true&& ve.size() >= 2){
                if(st.find(ve) == st.end()){
                   v.push_back(ve);
                    st.insert(ve);
                }
            }
        }
        return v;
    }
};