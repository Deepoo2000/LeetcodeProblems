class Solution {
public:
    int numTeams(vector<int>& rating) {
        int dp1[1002], dp2[1002];
        int ans = 0;
        for (int i = 0; i < rating.size(); i++) {
            dp1[i] = 0;
            dp2[i] = 0;
            for (int j = 0; j < i; j++) {
                if (rating[i] > rating[j])dp1[i]++, ans += dp1[j];
                if (rating[i] < rating[j])dp2[i]++, ans += dp2[j];
            }
        }
        for (int i = 0; i < rating.size(); i++)cout << dp1[i] << " ";
        cout << endl;
        for (int i = 0; i < rating.size(); i++)cout << dp2[i] << " ";
        cout << endl;
        return ans;
    }
};