class Solution {
public:
    int n;
    bool isValid(int x){
        return x>=0 && x<n;
    }
    bool dfs(int s, vector<int>& arr, vector<bool>& v){
        if(!isValid(s) || v[s]) return false;
        if(arr[s]==0) return true;
        v[s] = true;
        return dfs(s+arr[s],arr,v) or dfs(s-arr[s],arr,v);
    }
    bool canReach(vector<int>& arr, int start) {
        n=arr.size();
        vector<bool> v(n,false);
        return dfs(start,arr,v);
    }
};