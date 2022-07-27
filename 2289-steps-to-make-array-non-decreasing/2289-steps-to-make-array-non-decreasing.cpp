class Solution {
public:
    int totalSteps(vector<int>& nums) {
        stack<pair<int,int>>st;
        int ans = 0;
        for(int i = nums.size() - 1; i >= 0; i--){
            if(st.empty()){
                st.push({nums[i], 0});
            }
            else {
                int count = 0;
                while(!st.empty() && st.top().first < nums[i]){
                    count = max(count + 1, st.top().second);
                    st.pop();
                }
                st.push({nums[i], count});
                ans = max(ans, count);
            }
        }
        return ans;
    }
};