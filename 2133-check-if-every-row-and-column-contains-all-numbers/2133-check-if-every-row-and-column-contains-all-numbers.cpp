class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        vector<int>v;
        for(int i = 0 ; i < matrix.size(); i++)v.push_back(i+1);
        sort(v.begin(),v.end());
        for(int i =0;i<matrix.size();i++){
            vector<int>ans;
            for(int j =0 ;j<matrix.size();j++){
               ans.push_back(matrix[i][j]);
            }
            sort(ans.begin(),ans.end());
            for(int k =0;k<v.size();k++){
                if(v[k]!=ans[k])return false;
            }
        }
        for(int i =0;i<matrix.size();i++){
            vector<int>ans;
            for(int j =0 ;j<matrix.size();j++){
               ans.push_back(matrix[j][i]);
            }
            sort(ans.begin(),ans.end());
            for(int k =0;k<v.size();k++){
                if(v[k]!=ans[k])return false;
            }
        }
        return true;
    }
};