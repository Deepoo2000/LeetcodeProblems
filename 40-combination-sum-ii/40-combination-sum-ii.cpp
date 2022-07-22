class Solution {
public:
    vector<vector<int>>ans;
    vector<int>vi;
    void solve(vector<int>&v, int index, int total, int target){
        if(total == target){
            ans.push_back(vi);
            return;
        }
        if(index >= v.size() || total > target)return;
        vi.push_back(v[index]);
        solve(v, index + 1, total + v[index], target);
        vi.pop_back();
        while(index + 1 < v.size() && v[index + 1] == v[index]) index++;
        solve(v, index + 1, total, target);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>v;
        for(int i = 0; i < candidates.size(); i++)
            if(candidates[i]<=target)v.push_back(candidates[i]);
        sort(v.begin(), v.end());
        solve(v,0,0,target);
        return ans;
    }
};