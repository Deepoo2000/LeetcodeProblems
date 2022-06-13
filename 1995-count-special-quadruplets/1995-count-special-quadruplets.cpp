class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
       // sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                for(int k = j + 1; k < nums.size(); k++){
                    for(int h = k + 1; h < nums.size(); h++){
                    if(nums[i] + nums[j] + nums[k] == nums[h])count++;  
                    }
                }
            }
        }
        return count;
    }
};