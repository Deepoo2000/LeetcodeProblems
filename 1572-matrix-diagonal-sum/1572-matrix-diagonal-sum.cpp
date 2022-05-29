class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int i = 0;
        int ans = 0;
        while(i < n){
            ans += mat[i][i];
            i++;
        }
        i =0;
        int j = n - 1;
        while(i < n && j >= 0){
            ans += mat[i][j];
            i++, j--;
        }
        if(mat.size()%2!=0){
             i = mat.size()/2;
            ans -= mat[i][i];
        }
        return ans;
        
    }
};