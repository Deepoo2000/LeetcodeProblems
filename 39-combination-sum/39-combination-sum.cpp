class Solution {
public:
    vector<vector<int>>ans;
    vector<int>v;
    void solve(int index, vector<int>&candidates, int total, int target){
        if(target == total){
            ans.push_back(v);
            return;
        }
        if(total > target || index >= candidates.size())return;
        v.push_back(candidates[index]);
        solve(index , candidates, total + candidates[index], target);
        v.pop_back();
        solve(index + 1, candidates, total, target);
            
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(0, candidates, 0, target);
        return ans;
    }
};