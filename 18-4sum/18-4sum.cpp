class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        for (int i = 0;  i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int l = j + 1;
                int r = nums.size() - 1;
                int last = target - (nums[j] + nums[i]);
                while (l < r) {
                    int sum = nums[l] + nums[r];
                    if (sum == last) {
                        st.insert({ nums[i] , nums[j] , nums[l] , nums[r] });
                        l++;
                        r--;
                    }
                    if (sum > last)r--;
                    else if (sum < last)l++;
                }
            }
        }
        for (auto it : st)ans.push_back(it);
        return ans;
    }
};
