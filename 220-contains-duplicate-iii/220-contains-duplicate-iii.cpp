class Solution {
public:
bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        
        vector<pair<long long,long long>>v;
        for(int i=0;i<nums.size();i++){
            v.push_back(make_pair(nums[i],i));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<nums.size() && abs(v[i].first-v[j].first)<=t;j++){
                if(abs(v[i].second-v[j].second)<=k)
                    return true;
            }
        }
        return false;
    }
};