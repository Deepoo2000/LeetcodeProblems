class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>v;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                v.push_back(matrix[i][j]);
            }
        }
        //best
        int index = lower_bound(v.begin(), v.end(), target) - v.begin();
        if(index >= v.size()) index--;
        return (v[index] == target);
    }
};