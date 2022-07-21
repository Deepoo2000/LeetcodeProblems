class Solution {
public:
    vector<vector<int>>v;
    map<vector<int>, int>mp;
    void solve(vector<int>& nums, int index) {
        if (index >= nums.size()) {
            if (mp.find(nums) == mp.end()) {
                mp[nums]++;
                v.push_back(nums);
            }
            return;
        }
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            solve(nums, index + 1);
            swap(nums[index], nums[i]);
        }

    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int index = 0;
        solve(nums, index);
        return v;
    }
};