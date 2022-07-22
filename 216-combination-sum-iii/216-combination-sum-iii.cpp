class Solution {
public:
    vector<vector<int>>ans;
    vector<int>vi;
    void solve(int index, int k, int n, int total){
        if(vi.size() == k){
            if(total == n)ans.push_back(vi);
            return;
        }
        if(vi.size() > k || total > n)return;
       for(int i = index; i <= 9; i++){
        vi.push_back(i);
        solve(i + 1, k, n, total + i);
        vi.pop_back();
       }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        solve(1, k, n, 0);
        return ans;
    }
};