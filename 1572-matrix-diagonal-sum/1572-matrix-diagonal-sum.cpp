class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int i = 0;
        int ans = 0;
        int k = 0;
        int j = n - 1;
        while(i < n && k < n && j >= 0){
            ans += mat[i][i];
            ans += mat[k][j];
            k++;
            j--;
            i++;
        }
        if(mat.size()%2!=0){
             i = mat.size()/2;
            ans -= mat[i][i];
        }
        return ans;
        
    }
};