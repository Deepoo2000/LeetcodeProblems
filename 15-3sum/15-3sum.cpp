class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set < vector<int>>st;
        map<int, vector<int>>mp;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)mp[nums[i]].push_back(i);
        for (int i = 0; i < nums.size(); i++) {
            vector<int>v;
            if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) {
                for (int j = i + 1; j < nums.size(); j++) {
                    int num = nums[i] + nums[j];  num *= -1;
                    if (mp.find(num) != mp.end()) {
                        for (auto s : mp[num]) {
                            if (s > i && s > j) {
                                v.push_back(nums[i]);
                                v.push_back(nums[j]);
                                v.push_back(nums[s]);
                                st.insert(v);
                                v.clear();
                                while (j < nums.size() - 1 && nums[j] == nums[j + 1])j++;
                                while (i < nums.size() - 1 && nums[i] == nums[i + 1])i++;
                                break;
                            }
                        }
                    }
                }
            }
        }
        for (auto it = st.begin(); it != st.end(); it++) {
            ans.push_back(*it);
        }
        return ans;
    }
};