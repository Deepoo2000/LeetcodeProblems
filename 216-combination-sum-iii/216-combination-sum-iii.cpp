class Solution {
public:
    vector<vector<int>>ans;
    vector<int>vi;
    void solve(int index, vector<int>&v, int k, int n, int total){
        if(vi.size() == k){
            if(total == n)ans.push_back(vi);
            return;
        }
        if(vi.size() > k || total > n || index >= v.size())return;
        vi.push_back(v[index]);
        solve(index + 1, v, k, n, total + v[index]);
        vi.pop_back();
        solve(index + 1, v, k, n, total);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v;
        for(int i = 1; i <= 9; i++)v.push_back(i);
        solve(0, v, k, n, 0);
        return ans;
    }
};