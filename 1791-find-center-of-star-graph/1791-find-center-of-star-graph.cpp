class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>mp;
        int mx = -1;
        int ans = -1;
        for(int i = 0; i < edges.size(); i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        for(auto it:mp){
            if(mx < it.second){
                mx = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};