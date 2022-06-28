class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>p;
        for(int k =0;k<mat.size();k++){
            int count = 0;
            for(int j =0;j<mat[k].size();j++){
                if(mat[k][j]==1)count++;
            }
            p.push_back({count,k});
        }
        sort(p.begin(),p.end());
        vector<int>v;
        for(auto it:p){
            if(k==0)break;
            else {
                v.push_back(it.second);k--;
            }
        }
        return v;
    }
};