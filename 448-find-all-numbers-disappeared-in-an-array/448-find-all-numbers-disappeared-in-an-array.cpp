class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       vector<int>v;
        map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++){
            if(mp.find(i+1)==mp.end())v.push_back(i+1);
        }
        return v;
    }
};