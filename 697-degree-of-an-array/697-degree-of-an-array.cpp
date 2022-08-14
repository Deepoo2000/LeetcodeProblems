class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, int> mp;
        int mx = -1;
        int n = 0;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            if (mx < mp[nums[i]]) {
                mx = mp[nums[i]];
            }
        }
        set<int>st, mn;
        for (int i = 0; i < nums.size(); i++) {
            if (mx == mp[nums[i]]) {
                st.insert(nums[i]);
            }
        }
        for (auto it:st) {
            int index1 = 0, index2 = 0;
            int f = 1;
            n = it;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == n && f)index1 = i, f = 0;
                if (nums[i] == n)index2 = i;
            }
            mn.insert((index2 - index1 + 1));
        }
        return *mn.begin();
    }
};