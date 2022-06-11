class Solution {
public:
    int search(vector<int>& nums, int target) {
        vector<pair<int, int>>p;
        vector<int>v;
        for (int i = 0; i < nums.size(); i++)p.push_back({ nums[i], i }), v.push_back(nums[i]);
        sort(p.begin(), p.end());
        sort(v.begin(), v.end());
        int index = lower_bound(v.begin(), v.end(), target) - v.begin();
        if (index == nums.size())index--;
        if (p[index].first == target)return p[index].second;
        return -1;
    }
};