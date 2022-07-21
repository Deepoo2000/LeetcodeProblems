class Solution {
public:
    vector<vector<int>>v;
    void solve(vector<int>& nums, int index){
        if(index >= nums.size()){
           v.push_back(nums);
            return;
        }
        for(int i = index; i < nums.size(); i++){
            swap(nums[index], nums[i]);
            solve(nums, index + 1);
            swap(nums[index], nums[i]);
        }
        cout<<endl;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0;
        solve(nums, index);
        return v;
    }
};