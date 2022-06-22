class Solution {
    vector< vector<int> > subs;
    set<vector<int>>st;
public:
    void ALSS(vector<int>& arr, int c, int i, vector<int>& nums) {
        if (i >= nums.size()) {
            vector<int> temp;
            for (int j = 0; j < c; j++)temp.push_back(arr[j]);
            sort(temp.begin(), temp.end());
            if (st.find(temp) == st.end()) {
                subs.push_back(temp);
                st.insert(temp);
            }
            return;
        }
        arr[c] = nums[i];
        ALSS(arr, c + 1, i + 1, nums);
        ALSS(arr, c, i + 1, nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> arr(nums.size());
        ALSS(arr, 0, 0, nums);
        return subs;
    }
};