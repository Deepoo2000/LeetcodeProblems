class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0; i < nums.size(); i++)mp[nums[i]]++;
        int ans = 0;
        for(auto it:mp)ans += (it.second * (it.second - 1)) / 2;
        return ans;
    }
};