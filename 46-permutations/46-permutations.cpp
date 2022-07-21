class Solution {
public:
    vector<vector<int>>v;
    void solve(vector<int>& nums, int index){
        if(index >= nums.size()){
            int check = 0;
            for(int k = 0; k < v.size(); k++){
                int count = 0;
                for(int j = 0;j < v[k].size(); j++){
                    if(v[k][j] == nums[j])count++;
                }
                if(count == nums.size()){
                    check = 1;
                    break;
                }
            }
            if(!check) v.push_back(nums);
            return;
        }
        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            solve(nums, index + 1);
            swap(nums[index], nums[i]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0;
        solve(nums, index);
        return v;
    }
};