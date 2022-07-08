class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int>v1, v2;
        v1 = nums;
        v2 = nums;
        int index = 0;
        for (int i = 1; i < v1.size(); i++) {
            if (v1[i] == 0)v1[i] = 0;
            else {
                v1[i] += v1[i - 1];
            }
            if (v1[i] == 0)index++;
        }
        if (!index)return nums.size() - 1;
        for (int i = v2.size() - 2; i >= 0; i--) {
            if (v2[i] == 0)v2[i] = 0;
            else {
                v2[i] += v2[i + 1];
            }
        }
        //for (int i = 0; i < v1.size(); i++)cout << v1[i] << " ";
        //cout << endl;
        //for (int i = 0; i < v2.size(); i++)cout << v2[i] << " ";
        int mx = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0 &&i==0) {
                mx = max(mx, v2[i+1]);
            }
            else if (nums[i] == 0 && i == nums.size() - 1) {
                mx = max(mx, v1[i - 1]);
            }
            else if(nums[i] == 0 && i != 0 && i != nums.size() - 1){
                mx = max(mx, v1[i - 1] + v2[i + 1]);
            }
        }
        return mx;
        return 0;
    }
};