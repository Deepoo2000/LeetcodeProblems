class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        int array[101] = {0};
        for(int i=0;i<n;i++){
            array[nums[i]]++;
        }
        for(int i=k+1;i<101;i++){
            cnt += array[i]*array[i-k];
        }
        return cnt;
    }
};