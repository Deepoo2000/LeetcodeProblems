class Solution {
public:
    int numTeams(vector<int>& rating) {
        int dp1[1002] = {0}, dp2[1002] = {0};
        int ans = 0;
        for (int i = 0; i < rating.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (rating[i] > rating[j])dp1[i]++, ans += dp1[j];
                if (rating[i] < rating[j])dp2[i]++, ans += dp2[j];
            }
        }
        return ans;
    }
};